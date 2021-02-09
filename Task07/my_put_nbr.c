int my_put_nbr(int nb)
{
  if (nb < 0){ /* si nb inférieur à 0 alors */
      my_putchar('-'); /* affiche un moins */
      nb = -nb; /* utilisation du nombre absolue, ex : 62 = -62 c'est la même */
    }
  if (nb >= 10){ /* si nb suppérieur ou égale à 10 (car utilisation de la table ascii et chiffre entre 0 et 9 alors */
      my_put_nbr(nb / 10); /* il faut trouver un moyen d'avoir les dixaines/centaine/etc.. et pour ca il faut diviser car ca va donner la valeur sans reste donc si tu as 62 : 62 / 10 = 6 donc ca va garder en mémoire le 6*/ 
    }
  my_putchar((nb % 10)+ 48); /* maintenant que tu as le 6 il faut que tu sois capable d'afficher le 2 et pour ca tu as le modulo : et lui va récupérer le reste justement donc 62 % 10 = 2    et on met le + 48 pour qu'il reface encore et encore sinon sans il pourrait compté \
que des nombres à 2 chiffres */
  return (0);
}
