
%tableau contenant les mots à reconnaitre
global mots sons0;
Fe=8000;
L=t*Fe;



%choix de l'action
choix=input('\n1.Ajouter mot\n2.Supprimer mot\n3.Modifier mot\n4.liste des mots disponibles\n5.Modifier intervalle de temps\n6.Activer saisie\n','s');

switch choix
    
    
    
%-------------------------------------------ajouter un mot
    case '1'
%taper le mot souhaité
mot=input('\n Nouveau mot?\n','s'); 

if isempty(mot)
     disp('opération annulée')
else
mots=strvcat(mots,mot);

%lancer l'enregistrement
disp('appuyer sur entrée pour lancer l''enregistrement (1sec)')
pause

%enregitrer le son
son=wavrecord(t*Fe,Fe);

%TFF du son jusque Fe/2
NFFT = 2^nextpow2(L); %puissance de 2 pour optimiser fft
y=fft(son,NFFT);
y=y(1:t*Fe/2);

%puissance
power=y.*conj(y);


%trouver maxima
maximum=max(power);
[pics,indices]=findpeaks(power,'minpeakdistance',25,'sortstr','descend');

%classer frequences
indices=sort(indices);

%stocker paramètres de référence
sons0=[sons0 ; indices(1:7)];

disp('mot enregistré')
end




%--------------------------------------------supprimer mot
    case '2'
  index=input('\n Numéro du mot à supprimer?\n');
  
  if isempty(index)
      disp('opération annulée')

  else
      disp(['   le mot " ',mots(index,:),'" a été supprimé'])
  mots(index,:)=[];
  sons0(index,:)=[];
  
  end
 
  
  
  
  
%---------------------------------------------modifier mot
    case '3'
   index=input('\n Numéro du mot à modifier?\n');
  
  if isempty(index)
      disp('opération annulée')
      
  else
      modif=input('\n Nouveau mot? (Appuyer sur entrée pour conserver le même mot)\n','s');
      
    if isempty(modif)
               
        %lancer l'enregistrement
        disp('appuyer sur entrée pour lancer l''enregistrement (1sec)')
        pause
        
        %enregitrer le son et afficher
        son=wavrecord(t*Fe,Fe);
        plot(son);

        %TFF du son jusque Fe/2 et afficher
        fourier=abs(fft(son));
        fourier=fourier(1:t*Fe/2);
        plot(fourier)

        %stocker paramètre de référence
        son0=max(fourier);
        sons0(index)=son0;
        
        disp(['enregistrement du mot "',mots(index,:),'" modifié'])
        
    else
         %modifier le mot
         mots(index,:)=[];
         
         mots=strvcat(  mots(1:index-1,:),  modif,    mots(index:length(mots(:,1)),:) ) ;
         disp('Nouveau mot enregistré');
    
                 
         %lancer l'enregistrement
        disp('appuyer sur entrée pour lancer l''enregistrement (1sec)')
        pause
        
        %enregitrer le son et afficher
        son=wavrecord(t*Fe,Fe);
        plot(son);

        %TFF du son jusque Fe/2 et afficher
        fourier=abs(fft(son));
        fourier=fourier(1:t*Fe/2);
        plot(fourier)

        %stocker paramètre de référence
        son0=max(fourier);
        sons0(index)=son0;
        
        disp(['enregistrement du mot "',mots(index,:),'" modifié'])
     end
  end


  

%---------------------------------------------liste des mots disponibles
    case '4'
if isempty(mots)
    disp('aucun mot enregistré!')

else
    disp('   ')
    disp('Mots disponibles:')


    for i=1:length(mots(:,1))
        disp(['  ',num2str(i),'/. ',mots(i,:)])
    end
end



%----------------------------------------------modifier intervalle de temps
    case '5'
disp(['Intervalle actuel (sec):',num2str(t)])
temps=input('Entrer le nouvel intervalle (sec):');
t=temps;
save data



%----------------------------------------------activer saisie
    case '6'
disp('appuyer sur entrée pour commencer l''acquisition')
pause
resultat=[];

for i=1:3
    reco
    beep
end

end