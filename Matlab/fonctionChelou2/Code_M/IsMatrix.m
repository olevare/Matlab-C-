function Ok = IsMatrix(A)

if(size(A,1) > 1 && size(A,2) > 1)
    Ok = logical(1);
else
    Ok = logical(0);
end