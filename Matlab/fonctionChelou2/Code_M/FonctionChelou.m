function Result = FonctionChelou()

t = 0:1/pi:1;

cosinus = cos(t);

sinus = sqrt(((1/2)*sin(t)).^2+1);

Result = sinus + cosinus;

figure
plot(t,Result,'r',t,sinus,'b--',t,cosinus,'k--')