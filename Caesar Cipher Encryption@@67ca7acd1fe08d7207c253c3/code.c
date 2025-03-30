char caesarCypher(char str[], shift, char encrypted[1000])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] = " "){
            encrypted[i] = " ";
        }
        else{
        excrypted[i] = str[i] + shift;
        }
    }
    return encrypted;
}