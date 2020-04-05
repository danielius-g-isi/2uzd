# Objektinio programavimo 2 užduotis
Programa surūšiuoja studentus į 2 grupes: išlaikiusius ir neišlaikiusius, ir įrašo rezultatus į atskirus .txt failus.

## Įdiegimas (Unix kompiuteryje) naudojant `gcc`kompiliatorių 

- `git clone https://github.com/danielius-g-isi/2uzd.git`
- `cd 2uzd`
- `make fun`
- `make main`
- `./main`

## Versijų istorija (changelog)

---

## [v0.1](https://github.com/danielius-g-isi/2uzd/tree/v0.1) (18-02-2020)
Programa leidžia vartotojui savarankiškai įvesti studentų vardus, pavardes ir rezultatus. Suskaičiuoja namų darbų vidurkį arba medianą ir suskaičiuoja galutinį studento vidurkį pagal formulę:
**Vidurkis = 0.4 * nd_vidurkis + 0.6 * egzaminas**\
- Jeigu pažymių už namų darbus nėra, nd_vidurkis tampa 0, kad nesigautų dalyba iš nulio.
- Jeigu vartotojas įveda neįmanomą pažymį, jis ignoruojamas.
- Yra galimybė atsitiktinai generuoti namų darbų bei egzamino pažymius.

## [v0.2](https://github.com/danielius-g-isi/2uzd/tree/v0.2) (29-02-2020)
Pridėta galimybė nuskaityti studentų duomenis iš "stud.txt" failo.

## [v0.3](https://github.com/danielius-g-isi/3uzd/tree/v0.3) (29-02-2020)
Modifikuota programos struktūra. Visoms programoms funkcijoms naudojamas .h failas.

## [v0.4](https://github.com/danielius-g-isi/3uzd/tree/v0.4) (10-03-2020)
Pridėta galimybė atsitiktinai sugeneruoti studentų vardus, pavardes ir rezultatus. Skaičiuojamas programos vykdymo laikas.

## [v0.5](https://github.com/danielius-g-isi/3uzd/tree/v0.5) (22-03-2020)
Skaičiuojamas programos vykdymo laikas esant skirtingam atsitiktinai sugeneruotų studentų skaičiui.

## [v1.0](https://github.com/danielius-g-isi/3uzd/tree/v1.0) (05-04-2020)
Galutinė programos versija.


## Opublikuotos versijos:
- [v0.1](https://github.com/danielius-g-isi/2uzd/releases/tag/v0.1)
- [v0.2](https://github.com/danielius-g-isi/2uzd/releases/tag/v0.2)
- [v0.3](https://github.com/danielius-g-isi/2uzd/releases/tag/v0.3)
- [v0.4](https://github.com/danielius-g-isi/2uzd/releases/tag/v0.4)
- [v0.5](https://github.com/danielius-g-isi/2uzd/releases/tag/v0.5)
- [v1.0](https://github.com/danielius-g-isi/2uzd/releases/tag/v1.0)
