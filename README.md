<!DOCTYPE html>
<html lang="fr">
<body>

<h1>ft_printf</h1>

<p><strong>Projet réalisé dans le cadre du cursus de l’école 42.</strong></p>

<hr>

<h2>Description</h2>

<p>
ft_printf est une réimplémentation simplifiée de la fonction standard <code>printf</code> en C.
Le projet a pour objectif de comprendre le fonctionnement des fonctions variadiques et
la gestion avancée de l’affichage formaté.
</p>

<hr>

<h2>Objectifs pédagogiques</h2>

<ul>
  <li>Comprendre et utiliser les fonctions variadiques (<code>va_list</code>, <code>va_start</code>, <code>va_end</code>)</li>
  <li>Maîtriser la gestion des chaînes de caractères et des conversions de types</li>
  <li>Gérer correctement la mémoire et les buffers</li>
  <li>Respecter les spécifications de format (<code>%s</code>, <code>%d</code>, <code>%x</code>, etc.)</li>
  <li>Écrire du code robuste et structuré en C</li>
</ul>

<hr>

<h2>Fonctionnalités</h2>

<ul>
  <li>Support des conversions classiques : <code>%c</code>, <code>%s</code>, <code>%p</code>, <code>%d</code>, <code>%i</code>, <code>%u</code>, <code>%x</code>, <code>%X</code>, <code>%%</code></li>
  <li>Gestion du retour du nombre de caractères écrits</li>
  <li>Gestion des valeurs nulles et des pointeurs nuls</li>
</ul>

<hr>

<h2>Contraintes du projet</h2>

<ul>
  <li>Langage : C</li>
  <li>Respect strict de la norme de l’école 42</li>
  <li>Pas d’utilisation des fonctions de la bibliothèque standard qui ne sont pas autorisées</li>
  <li>Gestion manuelle de la mémoire et des buffers</li>
</ul>

<hr>

<h2>Compilation et exécution</h2>

<pre>
make
./test_ft_printf
</pre>

<p>Exemple d’utilisation :</p>

<pre>
ft_printf("Bonjour %s, vous avez %d messages.\n", "Alice", 5);
</pre>

<hr>

<h2>Remarque</h2>

<p>
Ce projet démontre la capacité à comprendre les fonctions variadiques, le formatage avancé
et à produire un code propre et robuste en C.
</p>

</body>
</html>
