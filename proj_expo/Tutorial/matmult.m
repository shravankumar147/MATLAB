n = input('n=');

a = magic(n);
b = a;
c = zeros(size(a));

for i = 1:n
   for j = 1:n
       sum = 0;
       for k = 1:n
           sum = sum+(a(i,k).*b(k,j)); % can use * or .*
       end
       c(i,j) = sum;
   end
end

r = repmat(c,10);
m = min(c);
imshow(r>min(m(1)))

       
    