clear all
close all
clc
%% creat a recorder object
recorder = audiorecorder(16000,8,2); 
%%
%record user's voice for 7 secs
disp('please record your voice');
drawnow();
pause(1);
recordblocking(recorder,7);
play(recorder);
data = getaudiodata(recorder);
subplot(2,1,1); 
plot(data);% after running the program talk 
xlabel(' t '); ylabel('x(t)');
title ('Analog voice signal in time domain');
subplot(2,1,2);
stem(data);
xlabel(' n '); ylabel('x(n)');
title ('sampled voice signal');
figure;
%%
% Feature extraction
f = VoiceFeatures(data);
f
%%
%find out the closest features from database
load database
D=[];
for(i=1:size(F,1))
    d= sum(abs(F(i)-f));
    D=[D d];
end
%%
%smallest distance 
 sm = inf;
 ind=-1;
 for(i=1:length(D))
    if (D(i)<sm)
        sm=D(i);
        ind=i;
    end
 end
 detected_user =C(ind);
 disp('the detected class is :');
 detected_user

