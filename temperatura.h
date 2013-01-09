/* conversione fahrenheit->celsius
               celsius->fahrenheit */

float celsius(float n);
float fahr(float n);

float celsius(float n){
    float c;
    c=(n-32)*1.8;

    return c;
}

float fahr(float n){
    float f;
    f=n/1.8+32;

    return f;
}
