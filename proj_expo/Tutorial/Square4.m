function B = Square4(A)
for i = 1:length(A)
    B(i) = A(i).^2;
end
% disp(A)
% disp(B)   comment out if you would like to see A,B on command window
plot(A,B)
end