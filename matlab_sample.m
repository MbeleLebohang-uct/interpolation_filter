t = 0:0.001:1;
x = 2*(cos(2*pi*30*t) + sin(2*pi*60*t) + 2);

y = uint8(x);

subplot 211
stem(0:300,y(1:301),'filled','markersize',3)
grid on
xlabel 'Sample number',ylabel Original


fileID = fopen('data.txt','w');
fprintf(fileID,'%d\n',y);
fclose(fileID);