function [xPitch]= VoiceFeatures(data)
F = fft(data(:,1));
plot(real(F));
xlabel(' f '); ylabel('x(f)');
title ('voice spectrum');
m=max(real(F));
xPitch=find(real(F)== m,1);