
#include <stdio.h>
#include <dirent.h>

int main ()
{
    DIR * Ordner;
    struct dirent * entry;
    int files = 0;

    Ordner = opendir ("Fragen-DB");
    if (Ordner == NULL)
    {
        perror ("Verzeichnis kann nicht gelesen werden");
        return 1;
    }

    while ((entry = readdir (Ordner)))
    {
        files ++;
        printf ("Datei% 3d:%s \n",files,entry-> d_name);
    }

    closedir (Ordner);

    return (0);
}




