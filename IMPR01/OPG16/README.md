# IMPR01 Opgave 1.6 (Programmeringsstil)

Denne opgave handler om hvordan et C program 'ser ud'. Opgaven giver dig indsigt i programmeringsstil, og den træner dig i brug af din valgte teksteditor og C-compiler.

Et C program kan formateres på mange forskellige måder. Indrykning, tomme linier og ekstra mellemrum kan relativt frit tilføjes i ethvert C program. En bestemt programmeringsstil (programming style, coding style) giver anvisninger på, hvordan et program skal formateres. Dårlig og inkonsistent programmeringsstil hæmmer læsbarheden af et program. Formålet med denne opgave er at skabe bevidsthed om programmeringsstil. Emnet vil blive bragt op gentagne gange undervejs i kurset. Så hvorfor ikke starte allerede i dag?

Her er et eksempel på et program, som er formateret på en overordentlig uheldig måde:

 #include              <stdio.h>

    int    main(
    void
    )
    {float
    first_number   ,
    xxx, sidsteTal

    ;

      printf(
    "Give me three: "    )

    ;scanf("%f    %f             %f"
    ,
    &first_number,      &   xxx,    &
               sidsteTal);   printf(
    "Theresult: %f\n", (first_number+xxx     +
    sidsteTal                  ) / 3.0)

    ;  return 0
    ;}

Kan programmet oversættes? (Kopier det fra browseren over i en tekstfil via din teksteditor, og forsøg at oversætte programmet). Kan det køres?

Diskuterer svaghederne i det viste program. Kan du/I forstå hvad der sker i programmet?

Introducer en bedre programmeringsstil i programmet, ved udelukkende at ændre på 'white spacing' (indrykning, tomme linier, og antallet af mellemrum mellem programmets dele). Dette er en god øvelse, idet den tvinger jer til at tage stilling til rollen af hvert symbol I møder, uafhængig af hvordan symbolet indgår i opstillingen af programmet. Compileren arbejder på samme måde - i det mindste i udgangspunktet.

Lav evt. en version af programmet, som giver endnu større læsbarhed ved f.eks. at ændre på variabelnavngivning. Du må også gerne ændre på promten og øvrige udskrifter i programmet.

Der er mange ressourcer af programmeringsstil (i C) på nettet. Læs indledningsvis Wikipedia's artikel om emnet.
*/