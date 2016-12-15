%liste des écarts aux références
ecarts=[];

%longueur du signal
L=t*Fe;

%enregistrement
rec=wavrecord(t*Fe,Fe);


%passe haut - frequence de coupure 50Hz
%[b,a] = butter(9,50/(Fe/2),'high');
%rec2=filter(b,a,rec);


%fft
NFFT = 2^nextpow2(L); %puissance de 2 pour optimiser fft
ffrec=fft(rec,NFFT);
ffrec=ffrec(1:t*Fe/2);

power=ffrec.*conj(ffrec);

%maxima
maximum=max(power);
[pics,indices]=findpeaks(power,'minpeakdistance',25,'sortstr','descend');

%classer frequences
indices=sort(indices);

%1er ecart
match=[];
%%moyenne des ecarts
for i=1:7
    match = [match abs(sons0(1,i)-indices(i))];
end
ecarts=mean(match);


%autres ecarts
for i=2:length(sons0(:,1))
    match=[];
    for j=1:7
       match = [match abs(sons0(i,j)-indices(j))];
    end
    moyenne=mean(match);
    ecarts=[ecarts moyenne];
   
end

[minima,indice]=min(ecarts);


resultat=[resultat mots(indice,:)];

disp(resultat);