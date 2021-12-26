F = fft(data(:,1)); % a fast fourier transform to the data recorded to put it in the spectrum domain from time domain to observe frequencies
plot(real(F));
