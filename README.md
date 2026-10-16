# USACO & Competitive Programming Solutions

![License: MIT](https://img.shields.io/badge/license-MIT-2ea44f.svg)
![C++ standard](https://img.shields.io/badge/C%2B%2B-17-00599C.svg)
![Solutions](https://img.shields.io/badge/solutions-88-blue.svg)
![Lines of C++](https://img.shields.io/badge/lines-3.2k-blue.svg)

My practice log: standalone C++ solutions to **USACO** problems, **Luogu (洛谷)** exercises, and a few
**Codeforces** / **CSES** tasks. I am a high-school student at Gunn High School (Palo Alto, California)
preparing for the USA Computing Olympiad.

Every file compiles on its own - one `main()` per file, no shared headers, standard library only.

**88 solutions / 3,161 lines of C++** - [some files are work in progress](#status)

---

## Layout

```
usaco/              65 USACO problems, grouped by technique
luogu/              17 numbered Luogu exercises (P####)
practice/            3 warm-up problems with no judge attached
cses/                2 CSES problems
codeforces/          1 Codeforces problem
```

## Contents

| Judge | Files | What is in it |
| :--- | ---: | :--- |
| [USACO](#usaco) | 65 | Complete search, simulation, greedy, sorting, ad hoc |
| [Luogu](#luogu) | 17 | Fundamentals: loops, arrays, strings, sieves |
| [Other judges](#other-judges) | 3 | Codeforces, CSES |
| [Practice](#practice) | 3 | Untracked warm-ups |

---

## USACO

Every file in [`usaco/`](usaco/) solves exactly one USACO problem. `-v2`, `-v3`, `-sorted` and
`-brute` mark a second attempt or an alternative approach, kept for comparison rather than
replaced.

| Technique | Problems | |
| :--- | ---: | :--- |
| [Complete search](#complete-search) | 30 | Shrink the candidate space before enumerating it |
| [Simulation](#simulation) | 16 | Model the process the statement describes |
| [Greedy](#greedy) | 14 | Local choices justified by an exchange argument |
| [Sorting](#sorting) | 3 | Ordering as a preprocessing step |
| [Ad hoc](#ad-hoc) | 2 | Problems that fit no standard template |

### Complete Search

Shrinking the candidate space before enumerating it. In
[`usaco/angry-cow.cpp`](usaco/angry-cow.cpp) the optimal detonation point must be at `x-1`,
`x` or `x+1` of some haybale, so only `n*3` candidates need testing instead of a continuous
range. [`usaco/cow-cross-road-3.cpp`](usaco/cow-cross-road-3.cpp) instead expands each lane
per cow rather than simulating both jointly.

[2019-problem-1.cpp](usaco/2019-problem-1.cpp) [angry-cow-v2.cpp](usaco/angry-cow-v2.cpp) [angry-cow.cpp](usaco/angry-cow.cpp)

[astral-auperposition.cpp](usaco/astral-auperposition.cpp) [balance.cpp](usaco/balance.cpp) [bovine-genomics.cpp](usaco/bovine-genomics.cpp)

[collage-v2.cpp](usaco/collage-v2.cpp) [collage.cpp](usaco/collage.cpp) [counting-liars-sorted.cpp](usaco/counting-liars-sorted.cpp)

[counting-liars-v2.cpp](usaco/counting-liars-v2.cpp) [counting-liars.cpp](usaco/counting-liars.cpp) [cow-checkups.cpp](usaco/cow-checkups.cpp)

[cow-cross-road-3-v2.cpp](usaco/cow-cross-road-3-v2.cpp) [cow-cross-road-3.cpp](usaco/cow-cross-road-3.cpp) [daisy-chains-v2.cpp](usaco/daisy-chains-v2.cpp)

[daisy-chains-v3.cpp](usaco/daisy-chains-v3.cpp) [daisy-chains.cpp](usaco/daisy-chains.cpp) [diamond-collector-sorted.cpp](usaco/diamond-collector-sorted.cpp)

[diamond-collector-v2.cpp](usaco/diamond-collector-v2.cpp) [diamond-collector-v3.cpp](usaco/diamond-collector-v3.cpp) [diamond-collector.cpp](usaco/diamond-collector.cpp)

[gym.cpp](usaco/gym.cpp) [lifeguard.cpp](usaco/lifeguard.cpp) [milk.cpp](usaco/milk.cpp)

[sleep.cpp](usaco/sleep.cpp) [social-distance-1-brute.cpp](usaco/social-distance-1-brute.cpp) [social-distance-1.cpp](usaco/social-distance-1.cpp)

[test-string.cpp](usaco/test-string.cpp) [triangle.cpp](usaco/triangle.cpp) [word-processor.cpp](usaco/word-processor.cpp)

`cses/`

[distinct-numbers.cpp](cses/distinct-numbers.cpp)

### Simulation

Modelling the process the statement describes.
[`usaco/team-tic-tac-toe.cpp`](usaco/team-tic-tac-toe.cpp) enumerates single- and dual-win
conditions on a 3x3 board; [`usaco/milk-measurement.cpp`](usaco/milk-measurement.cpp)
maintains a running multiset of milk outputs and counts every change to the leaderboard.

[abc.cpp](usaco/abc.cpp) [bucket-list.cpp](usaco/bucket-list.cpp) [censoring.cpp](usaco/censoring.cpp)

[circular-barn.cpp](usaco/circular-barn.cpp) [collage-sorted.cpp](usaco/collage-sorted.cpp) [lost-cow-v2.cpp](usaco/lost-cow-v2.cpp)

[lost-cow.cpp](usaco/lost-cow.cpp) [milk-measurement.cpp](usaco/milk-measurement.cpp) [mixing-milk-v2.cpp](usaco/mixing-milk-v2.cpp)

[mixing-milk.cpp](usaco/mixing-milk.cpp) [printing-sequence.cpp](usaco/printing-sequence.cpp) [shell-game.cpp](usaco/shell-game.cpp)

[stuck-in-a-rut-v2.cpp](usaco/stuck-in-a-rut-v2.cpp) [stuck-in-a-rut.cpp](usaco/stuck-in-a-rut.cpp) [swap.cpp](usaco/swap.cpp)

[team-tic-tac-toe.cpp](usaco/team-tic-tac-toe.cpp)

### Greedy

Local choices justified by an exchange argument.
[`usaco/mooloo.cpp`](usaco/mooloo.cpp) is the cleanest example: buying a `k+1`-day pass is
always at least as good as buying single days, so the cost is `(k+1) + sum(min(gap, k+1))`.

[abc-v2.cpp](usaco/abc-v2.cpp) [bucket-list-v2.cpp](usaco/bucket-list-v2.cpp) [favorite-operation.cpp](usaco/favorite-operation.cpp)

[feed.cpp](usaco/feed.cpp) [mad-scientist-v2.cpp](usaco/mad-scientist-v2.cpp) [mad-scientist.cpp](usaco/mad-scientist.cpp)

[mooloo.cpp](usaco/mooloo.cpp) [odd-photo.cpp](usaco/odd-photo.cpp) [out-of-place.cpp](usaco/out-of-place.cpp)

[photoshoot-2-v2.cpp](usaco/photoshoot-2-v2.cpp) [photoshoot-2.cpp](usaco/photoshoot-2.cpp) [tipping-v2.cpp](usaco/tipping-v2.cpp)

[tipping-v3.cpp](usaco/tipping-v3.cpp) [tipping.cpp](usaco/tipping.cpp)

### Sorting

Ordering as a preprocessing step, plus a couple of two-pointer windows over the sorted array
[`usaco/crossroad-3.cpp`](usaco/crossroad-3.cpp) and
[`usaco/sorting.cpp`](usaco/sorting.cpp).

[collage-sorted-v2.cpp](usaco/collage-sorted-v2.cpp) [crossroad-3.cpp](usaco/crossroad-3.cpp) [sorting.cpp](usaco/sorting.cpp)

### Ad hoc

Problems that fit no standard template.

[promotion-counting.cpp](usaco/promotion-counting.cpp) [taming-the-herd.cpp](usaco/taming-the-herd.cpp)

---

## Luogu

Numbered files correspond to Luogu problem IDs. These are the fundamentals - loops, arrays,
strings, sieves - written while learning the language. All live in [`luogu/`](luogu/).

| Problem | Topic | Lines |
| :--- | :--- | ---: |
| [P1307](luogu/P1307.cpp) | Reverse the digits of an integer | 12 |
| [P1423](luogu/P1423.cpp) | Snail climbing out of a well; distance shrinks 2% per day | 15 |
| [P1428](luogu/P1428.cpp) | Count smaller neighbours among earlier elements | 20 |
| [P1554](luogu/P1554.cpp) | Count digit occurrences across a range of numbers | 20 |
| [P1597](luogu/P1597.cpp) | Parse a semicolon-separated assignment program; flag reads before init | 76 |
| [P1614](luogu/P1614.cpp) | Sliding-window minimum sum over a fixed window size | 21 |
| [P1914](luogu/P1914.cpp) | Shift each letter of a password by n | 22 |
| [P2141](luogu/P2141.cpp) | Count self-numbers via a two-pointer sum table | 23 |
| [P2669](luogu/P2669.cpp) | Staircase savings pattern | 20 |
| [P2911](luogu/P2911.cpp) | Enumerate three dice rolls, most frequent sum *(WIP)* | 34 |
| [P5715-2](luogu/P5715-2.cpp) | Sort three integers without `std::sort` | 34 |
| [P5718](luogu/P5718.cpp) | Minimum of n numbers | 14 |
| [P5726](luogu/P5726.cpp) | Scores: drop the min and the max, average the rest | 27 |
| [P5727](luogu/P5727.cpp) | Collatz sequence | 23 |
| [P5728](luogu/P5728.cpp) | Ranking with tie-breaking on a second key | 18 |
| [P5732](luogu/P5732.cpp) | Yang Hui's (Pascal's) triangle | 31 |
| [P5740](luogu/P5740.cpp) | Highest total score in a student list | 28 |

[`luogu/P1597.cpp`](luogu/P1597.cpp) is representative: it parses a semicolon-separated
assignment program, tracks which of `a`, `b`, `c` have been initialised before use, and
reports invalid input rather than failing silently.

---

## Other judges

| Judge | Solution | Problem |
| :--- | :--- | :--- |
| Codeforces | [`playing-in-casino.cpp`](codeforces/playing-in-casino.cpp) | Sorting / two-pointer task |
| CSES | [`distinct-numbers.cpp`](cses/distinct-numbers.cpp) | Count distinct numbers in an array |
| CSES | [`distinct-numbers-v2.cpp`](cses/distinct-numbers-v2.cpp) | Same task, second attempt |

---

## Practice

Warm-ups with no judge attached.

| Solution | Problem |
| :--- | :--- |
| [`practice/parity.cpp`](practice/parity.cpp) | Parity of a number |
| [`practice/prime-sum.cpp`](practice/prime-sum.cpp) | Sum of primes below 1000 |
| [`practice/daisy-chains-practice.cpp`](practice/daisy-chains-practice.cpp) | Daisy chains, no judge |

---

## Build and run

Each file is a standalone translation unit with its own `main()`, so no shared headers are
required. Any C++17 compiler works:

```bash
g++ -std=c++17 -O2 usaco/mooloo.cpp -o mooloo
./mooloo < input.txt
```

USACO problems read from standard input and write to standard output, so redirecting a test
file is usually all that is needed.

## Conventions

- **Language** - C++17, standard library only (`iostream`, `algorithm`, `vector`, `string`, `map`, `set`, `queue`). No third-party code.
- **Layout** - one directory per judge; [`usaco/`](usaco/) holds every USACO solution.
- **Naming** - `usaco/<problem-name>.cpp` for USACO, `luogu/P####.cpp` for Luogu, `cses/` and `codeforces/` for the rest.
- **Variants** - `-v2`, `-v3`, `-sorted` and `-brute` mark a second attempt or an alternative approach, kept for comparison rather than replaced.
- **Style** - deliberately plain: one `main()` per file, short variable names, inline comments recording the reasoning behind the key observation.

## Status

81 of the 88 files compile cleanly with `g++ -std=c++17 -fsyntax-only`. The remaining
seven are unfinished attempts kept as-is, because the reasoning visible in them is still useful.

| File | Why it does not compile |
| :--- | :--- |
| [usaco/daisy-chains-v2.cpp](usaco/daisy-chains-v2.cpp) | reads `p[]` instead of `arr[]` |
| [usaco/diamond-collector-v2.cpp](usaco/diamond-collector-v2.cpp) | reads `k[]` and `ans[]`, which are out of scope |
| [usaco/favorite-operation.cpp](usaco/favorite-operation.cpp) | truncated mid-expression |
| [usaco/feed.cpp](usaco/feed.cpp) | `main()` reads the local `n` declared inside `process()` |
| [usaco/test-string.cpp](usaco/test-string.cpp) | `cout` with no argument |
| [usaco/triangle.cpp](usaco/triangle.cpp) | truncated mid-expression |
| [luogu/P2911.cpp](luogu/P2911.cpp) | brace-initialised VLA is not standard C++ |

---

## Licence

MIT - see [`LICENSE`](LICENSE) for the full text.
