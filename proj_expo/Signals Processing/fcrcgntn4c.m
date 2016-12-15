function fcrcgntn4c(k,l)
% here the k is starting image in the data set to query and l is the end
% one.
faceDataBase = imageSet('faceDBATT','recursive');



%%
[training, test] = partition(faceDataBase, [0.8 0.2]);

%%
[~, visual] = extractHOGFeatures(read(training(36),1));
figure;
subplot(211);imshow(read(training(36),1));

subplot(212);plot(visual);

trainingLabel = cell(1,320);
personIndex = cell(1,40);
trainingFeatures = zeros(size(training,2)*training(1).Count,4680);
%%
featureCount = 1;

for i = 1:size(training,2)
    for j = 1:training(1).Count
        trainingFeatures(featureCount,:) = extractHOGFeatures(read(training(i),1));
        trainingLabel{featureCount} = training(i).Description;
        featureCount = featureCount+1;
    end
    personIndex{i} = training(i).Description;
end
%% classifier 

faceClassifier = fitcecoc(trainingFeatures,trainingLabel);



%% 


for person = k:l
    for j = 1: test(person).Count
        QI = read(test(person),j);
        QF = extractHOGFeatures(QI);
        personLabel = predict(faceClassifier,QF);
 
        
booleanIndex = strcmp(personLabel, personIndex);
integerIndex = booleanIndex;
figure;
subplot(121); imshow(imresize(QI,3));title('Query Image')
subplot(122); imshow(imresize(read(training(integerIndex),1),3));title('Matched Image')        
    end
end
