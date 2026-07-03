# Mincoding Archive

Mincoding 학습 과정에서 풀이한 C++ 문제를 레벨과 알고리즘 주제별로 정리한 저장소입니다. 기초 문법부터 DFS, Flood Fill, DAT 등 알고리즘 유형별 풀이를 누적했습니다.

## 프로젝트 개요

각 `Level_##` 폴더는 단계별 문제 풀이를 담고 있으며, `Algorithm_Tower` 폴더에는 자료구조와 알고리즘 주제별 풀이를 따로 정리했습니다. 모든 코드는 C++ 단일 파일 형태로 관리됩니다.

## 주요 구성

| 폴더 | 내용 |
| --- | --- |
| `Level_03` ~ `Level_29` | 단계별 C++ 문제 풀이 |
| `Algorithm_Tower/02_Tower_of_DAT` | Direct Address Table 유형 |
| `Algorithm_Tower/06_Tower_of_DFS` | DFS 탐색 유형 |
| `Algorithm_Tower/08_Tower_of_FloodFill` | Flood Fill 유형 |

## 기술 스택

- **Language**: C++
- **Topics**: 구현, 배열, 문자열, DAT, DFS, Flood Fill, 탐색
- **Format**: 문제별 단일 `.cpp` 파일

## 프로젝트 구조

```text
.
├── Level_03/
├── Level_04/
├── ...
├── Level_29/
└── Algorithm_Tower/
    ├── 02_Tower_of_DAT/
    ├── 06_Tower_of_DFS/
    └── 08_Tower_of_FloodFill/
```

## 학습 포인트

### 1. C++ 기본기 반복
입출력, 조건문, 반복문, 배열, 함수 등 기본 문법을 레벨별 문제로 반복했습니다.

### 2. 자료구조 감각 강화
DAT, 배열 기반 카운팅, 문자열 인덱싱처럼 코딩 테스트에서 자주 쓰는 구현 패턴을 연습했습니다.

### 3. 탐색 알고리즘 정리
DFS와 Flood Fill 문제를 별도 주제 폴더로 모아 그래프/격자 탐색 감각을 정리했습니다.

## 실행 방법

```bash
g++ -std=c++17 Level_03/3_01.cpp -o solve
./solve
```

---
Mincoding C++ 문제 풀이를 단계별로 누적한 알고리즘 학습 저장소입니다.
