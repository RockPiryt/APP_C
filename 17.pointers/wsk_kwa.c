void podnies_do_kwadratu(int *n) {

}

void wczytaj_liczbe(int *n) {
  
}

int main() {
  int liczba;
  scanf("%i", &liczba);

  int *wsk = &liczba;
//   int *wsk;
//   wsk = &liczba;
  
  wczytaj_liczbe(&liczba);
  podnies_do_kwadratu(&liczba);
  
  printf("Kwadrat wczytanej liczby to %d\n", liczba);
  
  return 0;
}