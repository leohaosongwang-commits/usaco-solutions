# USACO & Competitive Programming Solutions

A working collection of my C++ solutions to **USACO** training problems, **Luogu (洛谷)** exercises, and selected **Codeforces / CSES** tasks — organised by the algorithmic technique each problem taught me.

I am a high-school student at Gunn High School (Palo Alto, California) preparing for the USA Computing Olympiad. This repository is my practice log: every problem I have solved, kept readable and self-contained.

**88 solutions · ~3,100 lines of C++**

---

## Contents

| Technique | Problems | Focus |
|---|---|---|
| [Brute Force / Complete Search](#brute-force--complete-search) | 31 | Enumerating candidate sets, pruning, checking the search space by hand |
| [Simulation](#simulation) | 16 | Modelling a described process faithfully and efficiently |
| [Greedy](#greedy) | 14 | Proving an exchange argument / local choice is globally optimal |
| [Sorting](#sorting) | 5 | Ordering as a preprocessing step; custom comparators |
| [Ad Hoc](#ad-hoc) | 2 | Tree and graph problems that fit no standard template |
| [Luogu Exercises](#luogu-exercises) | 19 | Fundamentals: loops, arrays, strings, recursion, prime sieves |
| [Miscellaneous](#miscellaneous) | 1 | Mixed practice |

---

## Brute Force / Complete Search

Complete search over a reduced candidate space. The recurring idea is that the answer set can be shrunk before enumeration — for example, in `usaco_angrycow` the optimal detonation point must lie at `x-1`, `x`, or `x+1` of some haybale, so only `3N` candidates need testing instead of a continuous range.

```
cses_distinctnumber.cpp              usaco_daisy.cpp                usaco_milk.cpp
usaco2019problem1.cpp                usaco_daisy2.cpp               usaco_sleep.cpp
usaco_angrycow.cpp                   usaco_daisychain.cpp           usaco_socialdistance1.cpp
usaco_angrycow2.cpp                  usaco_diamond.cpp              usaco_socialdistance1_brute.cpp
usaco_astralauperposition.cpp        usaco_diamond2.cpp             usaco_teststring.cpp
usaco_balance.cpp                    usaco_diamond_sort.cpp         usaco_triangle.cpp
usaco_bovinegenomics.cpp             usaco_diamondcollect.cpp       usaco_whydidthecowcrosstheroad3.cpp
usaco_collage.cpp                    usaco_gym.cpp                  usaco_whydidthecowcrosstheroad3_ai.cpp
usaco_collage2.cpp                   usaco_liar.cpp                 usaco_wordprocessor.cpp
usaco_countinglyer.cpp               usaco_lifeguard.cpp
usaco_countlying.cpp                 usaco_cowcheckups.cpp
```

## Simulation

Straightforward modelling of the process described in the statement. `usaco_teamtictactoe` enumerates single- and dual-win conditions on a 3×3 board; `usaco_milkmearsurement` maintains a running multiset of milk outputs and counts every change to the leaderboard.

```
usaco_abc.cpp              usaco_lostcow.cpp          usaco_printingsequence.cpp
usaco_bucketlist.cpp       usaco_lostcow2.cpp         usaco_shellgame.cpp
usaco_censoring.cpp        usaco_milkmearsurement.cpp usaco_stuckinarut.cpp
usaco_circularbarn.cpp     usaco_mixingmilk.cpp       usaco_stuckinarut_ai.cpp
usaco_cowcollage_sort.cpp  usaco_mixingmilk2.cpp      usaco_swap.cpp
                                                      usaco_teamtictactoe.cpp
```

## Greedy

Local choices justified by an exchange argument. `usaco_mooloo` is the cleanest example: buying a `k+1`-day pass is always at least as good as buying single days, so the cost is `(k+1) + Σ min(gapᵢ, k+1)`.

```
usaco_abc2.cpp           usaco_mad.cpp            usaco_photoshoot2.cpp
usaco_bucketlist2.cpp    usaco_madscientist.cpp   usaco_photoshoot2_2.cpp
usaco_favoriteoperation.cpp usaco_mooloo.cpp     usaco_tipping.cpp
usaco_feed.cpp           usaco_oddphoto.cpp       usaco_tipping2.cpp
usaco_outofplace.cpp                              usaco_tipping3.cpp
```

## Sorting

```
codeforce_playingincasino.cpp   cses_distintnumber.cpp   usaco_sorting.cpp
usaco_collage_sort.cpp          usaco_crossroad3.cpp
```

## Ad Hoc

```
usaco_promotioncounting.cpp   usaco_tamingtheherd.cpp
```

## Luogu Exercises

Fundamentals from Luogu (洛谷) — the Chinese competitive-programming judge. Numbered files correspond to Luogu problem IDs (`P####`).

```
Homework.cpp     p1554.cpp        P5726.cpp        p5728_new.cpp
P1914.cpp        p1597.cpp        p5727.cpp        p5732_new.cpp
P5715-2.cpp      p1614.cpp        p5718.cpp        p5740.cpp
p1307.cpp        p2141.cpp        prime_sum.cpp
p1423.cpp        p2669.cpp
p1428_new.cpp    p2911.cpp
```

`p1597.cpp` is representative: it parses a semicolon-separated assignment program, tracks which of `a`, `b`, `c` have been initialised before use, and reports invalid input rather than failing silently.

## Miscellaneous

```
diasychain_practice.cpp
```

---

## Building and running

Each file is a standalone translation unit with its own `main()`, so no shared headers are required. Any C++17 compiler works:

```bash
g++ -std=c++17 -O2 usaco_mooloo.cpp -o mooloo
./mooloo < input.txt
```

USACO problems read from standard input and write to standard output, so redirecting a test file is usually all that is needed.

## Conventions

- **Language** — C++17, standard library only (`iostream`, `algorithm`, `vector`, `string`, `map`, `set`, `queue`). No third-party code.
- **Naming** — `usaco_<problem>.cpp` for USACO problems, `p<number>.cpp` for Luogu, `codeforce_*` and `cses_*` for those judges.
- **Suffixes** — `_2`, `_new`, `_brute` and `_ai` mark a second attempt or an alternative approach kept for comparison rather than a replacement.
- **Style** — deliberately plain: one `main()` per file, short variable names, inline comments recording the reasoning behind the key observation. The goal is code that can be read on its own a few weeks later.

## Licence

Released for reference and learning. See the repository for details.
