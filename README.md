# Objektinio programavimo 2 užduotis

Programa atpsausdina vartotojo įvestus mokinių vardus, pavardes, bei pažymių vidurkį arba medianą. Programa veikia iki tol, kol vartotojas parašo žodį "stop" vietoj mokinio vardo, arba iki tol, kol pasiekia limitą N (numatyta reikšmė - 50).

Vidurkis yra skaičiuojamas pagal formulę:
**Vidurkis = 0.4 * nd_vidurkis + 0.6 * egzaminas**

- Jeigu pažymių už namų darbus nėra, nd_vidurkis tampa 0, kad nesigautų dalyba iš nulio.
- Jeigu vartotojas įveda neįmanomą pažymį, jis ignoruojamas.
- Yra galimybė atsitiktinai generuoti namų darbų bei egzamino pažymius.
