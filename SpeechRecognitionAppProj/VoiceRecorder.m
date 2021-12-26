clear all
close all
clc
%% creat a recorder object
n=16000;
b=8;
chn=2;
recorder = audiorecorder(n,b,chn); % n will be the number of taken samples for my voice and represented in b bits and chn is the number of channels used.
%%
%record user's voice for 7 secs
disp('please record your voice');
drawnow();
pause(1);
recordblocking(recorder,7);
play(recorder);
data = getaudiodata(recorder);
subplot(2,1,1); 
plot(data);
xlabel(' t '); ylabel('x(t)');
title ('Analog voice signal in time domain');
subplot(2,1,2);
stem(data);
xlabel(' t '); ylabel('x(t)');
title ('sampled voice signal');
figure;  % after running the program talk 
%%
% Feature extraction
f = VoiceFeatures(data);
f
%%
% save user's data
uno = input('enter the user number :');
try 
    load database
    F=[F;f];
    C=[C;uno];
    save database F C
catch 
    F=f;    
    C=uno;
    save database F C
end
msgbox('your voice is recorded') % after running this  talk something and memorize it cause you will need it later and enter a user number 