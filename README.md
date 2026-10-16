# USACO & Competitive Programming Solutions

My practice log: C++ solutions to **USACO** problems, **Luogu (洛谷)** exercises, and a few
**Codeforces** / **CSES** tasks.

I am a high-school student at Gunn High School (Palo Alto, California) preparing for the USA
Computing Olympiad. Everything here is kept standalone and readable - one `main()` per file,
no shared headers, standard library only.

**88 solutions · ~3,160 lines of C++**

```
usaco/            65 USACO problems, grouped by technique
luogu/            17 numbered Luogu exercises (P####)
practice/          3 warm-up problems with no judge
cses/              2 CSES problems
codeforces/        1 Codeforces problem
```

---

## Contents

| Judge | Files | Notes |
|---|---|---|
| [USACO](#usaco) | 65 | 30 brute force, 16 simulation, 14 greedy, 3 sorting, 2 ad hoc |
| [Luogu](#luogu) | 17 | Fundamentals: loops, arrays, strings, sieves |
| [Other judges](#other-judges) | 3 | Codeforces, CSES |
| [Practice](#practice) | 3 | Untracked warm-ups |

---

## USACO

Every file in `usaco/` solves exactly one USACO problem. `-v2` / `-v3` mark successive
attempts at the same problem, kept for comparison rather than replaced.

### Brute Force / Complete Search

Shrinking the candidate space before enumerating it. In `usaco/angry-cow.cpp` the optimal
detonation point must be at `x-1`, `x` or `x+1` of some haybale, so only `n*3` candidates
need testing instead of a continuous range. `usaco/cow-cross-road-3.cpp` instead expands
each lane per cow rather than simulating both jointly.

`cses/distinct-numbers.cpp`           `usaco/2019-problem-1.cpp`
`usaco/angry-cow.cpp`                 `usaco/angry-cow-v2.cpp`
`usaco/astral-auperposition.cpp`      `usaco/balance.cpp`
`usaco/bovine-genomics.cpp`           `usaco/collage.cpp`
`usaco/collage-v2.cpp`                `usaco/counting-liars.cpp`
`usaco/counting-liars-v2.cpp`         `usaco/cow-checkups.cpp`
`usaco/daisy-chains.cpp`              `usaco/daisy-chains-v2.cpp`
`usaco/daisy-chains-v3.cpp`           `usaco/diamond-collector.cpp`
`usaco/diamond-collector-v2.cpp`      `usaco/diamond-collector-sorted.cpp`
`usaco/diamond-collector-v3.cpp`      `usaco/gym.cpp`
`usaco/counting-liars-sorted.cpp`     `usaco/lifeguard.cpp`
`usaco/milk.cpp`                      `usaco/sleep.cpp`
`usaco/social-distance-1.cpp`         `usaco/social-distance-1-brute.cpp`
`usaco/test-string.cpp`               `usaco/triangle.cpp`
`usaco/cow-cross-road-3.cpp`          `usaco/cow-cross-road-3-v2.cpp`
`usaco/word-processor.cpp`

### Simulation

Modelling the process the statement describes. `usaco/team-tic-tac-toe.cpp` enumerates single-
and dual-win conditions on a 3x3 board; `usaco/milk-measurement.cpp` maintains a running
multiset of milk outputs and counts every change to the leaderboard.

`usaco/abc.cpp`                `usaco/bucket-list.cpp`
`usaco/censoring.cpp`          `usaco/circular-barn.cpp`
`usaco/collage-sorted.cpp`     `usaco/lost-cow.cpp`
`usaco/lost-cow-v2.cpp`        `usaco/milk-measurement.cpp`
`usaco/mixing-milk.cpp`        `usaco/mixing-milk-v2.cpp`
`usaco/printing-sequence.cpp`  `usaco/shell-game.cpp`
`usaco/stuck-in-a-rut.cpp`     `usaco/stuck-in-a-rut-v2.cpp`
`usaco/swap.cpp`               `usaco/team-tic-tac-toe.cpp`

### Greedy

Local choices justified by an exchange argument. `usaco/mooloo.cpp` is the cleanest example:
buying a `k+1`-day pass is always at least as good as buying single days, so the cost is
`(k+1) + sum(min(gap, k+1))`.

`usaco/abc-v2.cpp`              `usaco/bucket-list-v2.cpp`
`usaco/favorite-operation.cpp`  `usaco/feed.cpp`
`usaco/mad-scientist.cpp`       `usaco/mad-scientist-v2.cpp`
`usaco/mooloo.cpp`              `usaco/odd-photo.cpp`
`usaco/out-of-place.cpp`        `usaco/photoshoot-2.cpp`
`usaco/photoshoot-2-v2.cpp`     `usaco/tipping.cpp`
`usaco/tipping-v2.cpp`          `usaco/tipping-v3.cpp`

### Sorting

Ordering as a preprocessing step, plus a couple of two-pointer windows over the sorted array
(`usaco/crossroad-3.cpp`, `usaco/sorting.cpp`).

`usaco/collage-sorted-v2.cpp`  `usaco/crossroad-3.cpp`
`usaco/sorting.cpp`

### Ad hoc

Problems that fit no standard template.

`usaco/promotion-counting.cpp`  `usaco/taming-the-herd.cpp`

---

## Luogu

Numbered files correspond to Luogu problem IDs. These are the fundamentals - loops, arrays,
strings, sieves - written while learning the language. All live in `luogu/`.

| Problem | Topic | Lines |
|---|---|---|
| `P1307` | Reverse the digits of an integer | 12 |
| `P1423` | Snail climbing out of a well; distance shrinks 2% per day | 15 |
| `P1428` | Count smaller neighbours among earlier elements | 20 |
| `P1554` | Count digit occurrences across a range of numbers | 20 |
| `P1597` | Parse a semicolon-separated assignment program; flag reads before init | 76 |
| `P1614` | Sliding-window minimum sum over a fixed window size | 21 |
| `P1914` | Shift each letter of a password by n | 22 |
| `P2141` | Count self-numbers via a two-pointer sum table | 23 |
| `P2669` | Staircase savings pattern | 20 |
| `P2911` | Enumerate three dice rolls, most frequent sum *(WIP)* | 34 |
| `P5715-2` | Sort three integers without `std::sort` | 34 |
| `P5718` | Minimum of n numbers | 14 |
| `P5726` | Scores: drop the min and the max, average the rest | 27 |
| `P5727` | Collatz sequence | 23 |
| `P5728` | Ranking with tie-breaking on a second key | 18 |
| `P5732` | Yang Hui's (Pascal's) triangle | 31 |
| `P5740` | Highest total score in a student list | 28 |

`P1597.cpp` is representative: it parses a semicolon-separated assignment program, tracks
which of `a`, `b`, `c` have been initialised before use, and reports invalid input rather
than failing silently.

---

## Other judges

```
codeforces/playing-in-casino.cpp     Codeforces - sorting / two-pointer task
cses/distinct-numbers.cpp            CSES - count distinct numbers in an array
cses/distinct-numbers-v2.cpp         Same task, second attempt
```

---

## Practice

Warm-ups with no judge attached.

```
practice/parity.cpp                  parity of a number
practice/prime-sum.cpp               sum of primes below 1000
practice/daisy-chains-practice.cpp   daisy chains, no judge
```

---

## Building and running

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
- **Layout** - one directory per judge; `usaco/` holds every USACO solution.
- **Naming** - `usaco/<problem-name>.cpp` for USACO, `luogu/P####.cpp` for Luogu, `cses/` and `codeforces/` for the rest.
- **Variants** - `-v2`, `-v3`, `-sorted` and `-brute` mark a second attempt or an alternative approach, kept for comparison rather than replaced.
- **Style** - deliberately plain: one `main()` per file, short variable names, inline comments recording the reasoning behind the key observation. The goal is code that can be read on its own a few weeks later.

## Status

81 of the 88 files compile cleanly with `g++ -std=c++17 -fsyntax-only`. The remaining seven are
unfinished attempts kept as-is, because the reasoning visible in them is still useful:

```
usaco/daisy-chains-v2.cpp         reads p[] instead of arr[]
usaco/diamond-collector-v2.cpp    reads k[] and ans[], which are out of scope
usaco/favorite-operation.cpp      truncated mid-expression
usaco/feed.cpp                    main() reads the local n declared inside process()
usaco/test-string.cpp             cout with no argument
usaco/triangle.cpp                truncated mid-expression
luogu/P2911.cpp                   brace-initialised VLA is not standard C++
```

## Licence

MIT - see [`LICENSE`](LICENSE) for the full text.
