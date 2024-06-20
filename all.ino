### 2번 
import math    
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_2_2(solution, answer):
  random.seed()

  l = 42.195     # 거리
  l = 42.195 + random.randint(-10, 10)     # 랜덤거리
  ta = 2     # 시
  ta = 2 + random.randint(-1, 1)    # 랜덤 시
  tb = 12        # 분
  tb = 12 + random.randint(-12, 48)    # 랜덤 분
  tc = 23  # 초
  tc = 23 + random.randint(-23, 37)    # 랜덤 초



  L = l * 1000   # km m 로 변환
  T = (ta * 60 + tb) * 60 + tc      # 걸린시간 초 변환
  v = L / T   # 평균속력
  s = 100.0 / v

  print("\n\n")
  print("2 - 2")
  print("1992년에 스페인 바르셀로나에서 개최된 제24회 올림픽 마라톤 경기에서 우리나라 황영조 선수는 {:.3f}km를 {:.1f}시간 {:.1f}분 {:.1f}초에 뛰어 우승하였다.".format(l, ta, tb, tc))
  print("황영조 선수는 100.0m를 평균 몇 초에 달린 셈인가?")

  if solution == SHOW:
    print("\n\n\n")
    print("=========================   풀 이   =============================\n\n")
    print("v평균 = {:.2f} m/s".format(v))
    print("100.0m 평균 달린 초 : 100.0m/{:.2f}s = {:.2f}m/s".format(v, s))

  if answer == SHOW:
    print("\n\n\n")
    print("=========================   정 답   =============================\n\n")
    print("답 : 평균 {:.1f}초".format(s))

# 함수 호출
Excersize_2_2(Show_Solution, Answer)

### 4번
import math 
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_2_4(solution, answer):
  random.seed()

  la = 60   # 이동거리(m)
  la = 60 + random.randint(-10, 10)
  ta = 6    # 시간(s)
  ta = 6 + random.randint(-1, 1)
  lb1 = 60  # 순간속력그래프의 7s 때의 이동거리
  lb1 = 60 + random.randint(-10, 10)
  lb2 = 30  # 순간속력 그래프의 5s 때의 이동거리
  lb2 = 30 + random.randint(-10,10)
  tb1 = 7   # 순간속력 그래프의 나중시간
  tb1 = 7 + random.randint(-1, 1)
  tb2 = 5   # 순간속력 그래프의 이전시간
  tb2 = 5 + random.randint(-1, 1)

  va = la / ta    # 평균속력
  vb = (lb1 - lb2) / (tb1 - tb2)  # 순간속력


  print("\n\n")
  print("2 - 4")
  print("수평면 위에 정지하고 있던 물체가 한쪽 방향으로 직선운동을 할 때, 물체의 이동거리와 시간의 관계가 그림 P2-4와 같다.")
  print("(a) 출발하여 {:.2f} s 동안 물체의 평균속력은 몇 m/s인가?".format(ta))
  print("(b) 출발 후 {:.2f} s 때의 순간속력은 몇 m/s인가?".format(tb2))

  if solution == SHOW:
    print("\n\n\n")
    print("=========================   풀 이   =============================\n\n")
    print("(a)")
    print("평균속력은 (총 이동거리)/(총 걸린시간) 이므로 {:.2f}m / {:.2f}s".format(la, ta))
    print("v평균 = {:.2f}m/s".format(va))
    print("\n\n")
    print("(b)")
    print("순간속력은 그 순간의 접선의 기울기 이므로 그래프기준 ({:.2f}m - {:.2f}m)/({:.2f}s - {:.2f}s)".format(lb1, lb2, tb1, tb2))
    print("v순간 = {:.2f}m/s".format(vb))

  if answer == SHOW:
    print("\n\n\n")
    print("=========================   정 답   =============================\n\n")
    print("(a) : {:.2f}m/s".format(va))
    print("(b) : {:.2f}m/s".format(vb))

# 함수호출
Excersize_2_4(Show_Solution, Answer)

### 6번
import math  
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_2_6(solution, answer):
  random.seed()

  la = 200  # 트랙거리
  la = 200 + random.randint(-100, 100)
  t = 25   # 시간(초)
  t = 25 + random.randint(-1, 1)
  lb = 0   # 변위

  va = la / t  # 평균속력
  vb = lb / t   # 평균속도


  print("\n\n")
  print("2 - 6")
  print("달리기 선수가 {:.2f}m 트랙 한 바퀴를 {:.2f}s에 돈다.".format(la, t))
  print("선수의 (a) 평균속력과 (b) 평균속도를 구하라.")

  if solution == SHOW:
    print("\n\n\n")
    print("=========================   풀 이   =============================\n\n")
    print("(a)")
    print("평균속력 = {:.2f} m/s".format(va))
    print("\n")
    print("(b)")
    print("평균속도 = {:.2f} m/s".format(vb))

  if answer == SHOW:
    print("\n\n\n")
    print("=========================   정 답   =============================\n\n")
    print("(a) : {:.2f}m/s, (b) : {:.2f}m/s".format(va, vb))

# 함수호출
Excersize_2_6(Show_Solution, Answer)

### 8번
# 상수 정의
acceleration = +1  # 가속도 (m/s²)

# 풀이 과정 주석
acceleration_solution = "(b) 가속도의 값이 +1인 경우, 시간이 지남에 따라 속도가 점점 증가합니다.\n"

# 풀이 출력
print("\n=========================   풀이   =============================\n\n")
print("(b) 가속도의 값이 +1인 경우, 속도가 점점 커집니다.")


# 결과 출력
print("=========================   결과   =============================\n\n")
print("(b) 가속도의 값이 +1인 경우, 속도가 점점 커집니다.")

### 10번
# 속도 단위 변환 (km/h to m/s)
initial_speed_ms = 90 * 1000 / 3600  # 90 km/h
final_speed_ms = 110 * 1000 / 3600  # 110 km/h

# 가속도 (m/s^2)
acceleration_ms2 = 1.7

# 가속에 걸리는 시간 계산 (초 단위)
time_to_accelerate_seconds = (final_speed_ms - initial_speed_ms) / acceleration_ms2

# 풀이 출력
print("=========================   풀 이   =============================\n")
print(f"초기 속도 90km/h를 m/s로 변환: {initial_speed_ms:.2f} m/s")
print(f"최종 속도 110km/h를 m/s로 변환: {final_speed_ms:.2f} m/s")
print(f"가속도는 {acceleration_ms2} m/s^2입니다.")
print("가속에 걸리는 시간을 계산합니다.")
print(f"가속에 걸리는 시간 = (최종 속도 - 초기 속도) / 가속도")
print(f"가속에 걸리는 시간 = ({final_speed_ms:.2f} m/s - {initial_speed_ms:.2f} m/s) / {acceleration_ms2} m/s^2")
print(f"가속에 걸리는 시간 = {time_to_accelerate_seconds:.2f} 초")

# 정답 출력
print("\n=========================   정 답   =============================\n")
print(f"가속에 걸리는 시간: {time_to_accelerate_seconds:.2f} 초")

### 12번
import math
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Exercise_car_acceleration(solution, answer):
    random.seed()

    # 주어진 값
    initial_speed = 10  # 초기 속도 (m/s)
    final_speed = 25    # 최종 속도 (m/s)
    time = 6            # 시간 (s)

    # 1. 속도 계산
    acceleration = (final_speed - initial_speed) / time  # 일정한 가속도 (m/s^2)
    final_velocity = initial_speed + acceleration * time  # 최종 속도 (m/s)

    # 2. 이동 거리 계산
    distance = initial_speed * time + 0.5 * acceleration * time ** 2  # 이동 거리 (m)

    # 출력
    print("\n\n")
    print("어떤 자동차가 6s동안에 10m/s에서 25m/s로 가속된다.")
    print("이 자동차의 속도와 그동안 달린 거리를 구하세요.\n")

    if solution == SHOW:
        print("\n\n\n")
        print("=========================   풀 이   =============================\n\n")
        print("1. 최종 속도 계산:")
        print("   가속도 = (최종 속도 - 초기 속도) / 시간\n")
        print("   가속도 = ({:.2f} - {:.2f}) / {:.2f}\n".format(final_speed, initial_speed, time))
        print("   가속도 = {:.2f} m/s^2\n".format(acceleration))

        print("   최종 속도 = 초기 속도 + 가속도 × 시간\n")
        print("   최종 속도 = {:.2f} + {:.2f} × {:.2f}\n".format(initial_speed, acceleration, time))
        print("   최종 속도 = {:.2f} m/s\n".format(final_velocity))

        print("2. 이동 거리 계산:")
        print("   이동 거리 = 초기 속도 × 시간 + 0.5 × 가속도 × 시간^2\n")
        print("   이동 거리 = {:.2f} × {:.2f} + 0.5 × {:.2f} × {:.2f}^2\n".format(initial_speed, time, acceleration, time))
        print("   이동 거리 = {:.2f} m\n".format(distance))

    if answer == SHOW:
        print("\n\n\n")
        print("=========================   정 답   =============================\n\n")
        print("자동차의 최종 속도: {:.2f} m/s".format(final_velocity))
        print("자동차가 그동안 달린 거리: {:.2f} m".format(distance))
        print("\n\n\n")

# 문제 해결 함수 호출
Exercise_car_acceleration(Show_Solution, Answer)

### 14번
import math 
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_2_14(solution, answer):
  random.seed()

  a = 3.0  # 가속도
  a = 3.0 + random.randint(-1, 1)


  t = 30 / a   # 이륙하는데 걸리는 시간
  l = 30 * a / 2   # 이륙하는데 필요한 거리


  print("\n\n")
  print("2 - 14")
  print("경비행기가 이륙하기 위해서는 속력이 30m/s에 도달해야 한다.")
  print("{:.2f}m/s^2으로 일정하게 가속한다면 이륙속도에 도달하기 위해서 얼마의 활주거리가 필요한가?".format(a))


  if solution == SHOW:
    print("\n\n\n")
    print("=========================   풀 이   =============================\n\n")
    print("이륙하는데에 걸리는 시간 = (30m/s)/({:.2f}m/s^2) = {:.2f}s".format(a, t))
    print("이륙하는데에 필요한 거리 = (30m/s)*({:.2f}m/s^2)/2 = {:.2f}m".format(a, l))

  if answer == SHOW:
    print("\n\n\n")
    print("=========================   정 답   =============================\n\n")
    print("답 : {:.2f}m".format(l))

# 함수 호출
Excersize_2_14(Show_Solution, Answer)

### 16번
import random

# 주어진 값
remaining_distance = 1100  # 남은 거리 (m)
target_time = 1800  # 목표 시간 (초)
acceleration = 0.20  # 가속도 (m/s²)

# 랜덤 초기 속도 계산
initial_velocity = random.uniform(0, 10)  # 초기 속도 (0부터 10까지의 랜덤한 값)

# 가속도로 달릴 때 걸리는 시간 계산
acceleration_time = (remaining_distance - (initial_velocity * (target_time - (27 * 60)))) / (0.5 * acceleration)

# 결과 출력
print("랜덤으로 초기 속도가 {:.2f} m/s로 설정되었습니다.".format(initial_velocity))
print("가속하는 데 걸리는 시간은 {:.2f} 초입니다.".format(acceleration_time))

### 18번
# 상수 재정의 및 상태 재설정으로 인한 재계산
initial_speed_ms = 5.11  # km/h를 m/s로 변환
acceleration_ms2 = -0.50  # 감속도 (m/s^2)

# (a) 자동차가 정지할 때까지 주행한 거리 계산
distance_to_stop = - (initial_speed_ms ** 2) / (2 * acceleration_ms2)

# (b) 자동차가 정지할 때까지 걸린 시간 계산
time_to_stop_seconds = - initial_speed_ms / acceleration_ms2

# (c) 처음 1초 동안 이동한 거리 계산
distance_first_second = initial_speed_ms * 1 + 0.5 * acceleration_ms2 * (1 ** 2)

# 다섯 번째 초 동안 이동한 거리 계산 (4초에서 5초까지)
distance_start_4_seconds = initial_speed_ms * 4 + 0.5 * acceleration_ms2 * (4 ** 2)
distance_end_5_seconds = initial_speed_ms * 5 + 0.5 * acceleration_ms2 * (5 ** 2)
distance_fifth_second = distance_end_5_seconds - distance_start_4_seconds

# 풀이 출력
print("=========================   풀 이   =============================\n")
print(f"초기 속도를 m/s로 변환: {initial_speed_ms} m/s")
print(f"감속도: {acceleration_ms2} m/s²")
print(f"정지까지 걸린 시간 계산: t = -vi / a = {-initial_speed_ms} / {acceleration_ms2} = {time_to_stop_seconds:.2f} 초")
print(f"정지까지 이동한 거리 계산: d = -vi² / (2a) = -({initial_speed_ms}²) / (2 * {acceleration_ms2}) = {distance_to_stop:.2f} m")
print(f"처음 1초 동안 이동한 거리: {distance_first_second:.2f} m")
print(f"다섯 번째 초 동안 이동한 거리: {distance_fifth_second:.2f} m")

# 정답 출력
print("\n=========================   정 답   =============================\n")
print(f"자동차가 정지할 때까지 주행한 거리: {distance_to_stop:.2f} 미터")
print(f"자동차가 정지할 때까지 걸린 시간: {time_to_stop_seconds:.2f} 초")
print(f"처음 1초 동안 이동한 거리: {distance_first_second:.2f} 미터")
print(f"다섯 번째 초 동안 이동한 거리: {distance_fifth_second:.2f} 미터")


### 20번
import math
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def exercise_car_braking(solution, answer):
    random.seed()

    # 주어진 데이터
    v_a_initial = 24  # 자동차 A의 초기 속도 (m/s)
    v_b_initial = 20  # 자동차 B의 초기 속도 (m/s)
    t_a = 4           # 자동차 A가 정지하는데 걸리는 시간 (초)
    t_b = 5           # 자동차 B가 정지하는데 걸리는 시간 (초)

    # (a) 각 자동차의 가속도 계산
    a_a = v_a_initial / t_a
    a_b = v_b_initial / t_b

    # (b) 두 자동차의 속도가 같아지는 시간 계산
    t_same_velocity = (v_b_initial - v_a_initial) / (a_b - a_a)

    # (c) 각 자동차가 정지할 때까지 이동한 거리 계산
    d_a = 0.5 * a_a * t_a ** 2
    d_b = 0.5 * a_b * t_b ** 2

    # (d) 자동차 B가 A와 같은 비율로 감속하는 경우 정지할 때까지 걸리는 시간 계산
    t_b_new = math.sqrt(2 * d_b / a_a)

    if solution == SHOW:
        print("\n\n\n")
        print("=========================   풀 이   =============================\n\n")
        print("(a) 자동차 A의 가속도: 24 = a * 4, {:.2f} m/s^2".format(a_a))
        print("    자동차 B의 가속도: 20 = b * 5, {:.2f} m/s^2\n".format(a_b))

        print("(b) 두 자동차의 속도가 같아지는 때: 24 - 6t = 20 - 4t")
        print("                                   4 = 2t ")
        print("                                   t = 2s ")
        print("                                  {:.2f} 초 후\n".format(t_same_velocity))

        print("(c) 2as = V^ - Vo^ 이므로")
        print("    자동차 A: 2 X 6 X s = 24^ , s = 48m")
        print("    자동차 B: 2 X 4 X s = 20^ , s = 50m")
        print("    따라서, 자동차 B가 더 멀리 갔습니다: {:.2f} 미터\n".format(abs(d_b - d_a)))

        print("(d) 20 = 6 X t")
        print("    t = 10/3s")
        print("    따라서, 자동차 B가 A와 같은 비율로 감속하는 경우 정지할 때까지 걸리는 시간: {:.2f} 초\n".format(t_b_new))

    if answer == SHOW:
        print("\n\n\n")
        print("=========================   정 답   =============================\n\n")
        print("(a) 자동차 A의 가속도: {:.2f} m/s^2".format(a_a))
        print("    자동차 B의 가속도: {:.2f} m/s^2\n".format(a_b))
        print("(b) 두 자동차의 속도가 같아지는 때: {:.2f} 초 후\n".format(t_same_velocity))

        print("(c) 자동차 A가 정지할 때까지 이동한 거리: {:.2f} 미터".format(d_a))
        print("    자동차 B가 정지할 때까지 이동한 거리: {:.2f} 미터".format(d_b))
        print("    따라서, 자동차 B가 더 멀리 갔습니다: {:.2f} 미터\n".format(abs(d_b - d_a)))

        print("(d) 자동차 B가 A와 같은 비율로 감속하는 경우 정지할 때까지 걸리는 시간: {:.2f} 초\n".format(t_b_new))

# 함수 호출하여 실행
exercise_car_braking(Show_Solution, Answer)

### 22번
import math 
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_2_22(solution, answer):
  random.seed()


  v = 10  # 연직 아래로 던진 속도
  v = 10 + random.randint(-10, 10)
  t = 2   # 몇 초후
  t = 2 + random.randint(-1, 1)
  g = 9.80  # 중력가속도

  v1 = v + g*t  # 던진 후 t초후의 속도
  l = v*t + (g*t**2)/2  # 낙하한 거리


  print("\n\n")
  print("2 - 22")
  print("어떤 높이에서 {:.2f} m/s의 속도로 연직 아래로 공을 던졌다.".format(v))
  print("(a) 공을 던진 후 {:.2f}s 후의 속도를 구하라.".format(t))
  print("(b) 그동안 낙하한 거리는 얼마인가?")


  if solution == SHOW:
    print("\n\n\n")
    print("=========================   풀 이   =============================\n\n")
    print("(a)")
    print("던진후 {:.2f}s 후의 속도 = {:.2f}m/s + ({:.2f}m/s^2)*({:.2f}s) = {:.2f}m/s".format(t, v, g, t, v1))
    print("\n")
    print("(b)")
    print("낙하한 거리 = ({:.2f}m/s)*({:.2f}s) + (({:.2f}m/s^2)*({:.2f}s)^2)/2 = {:.2f}m".format(v, t, g, t, l))

  if answer == SHOW:
    print("\n\n\n")
    print("=========================   정 답   =============================\n\n")
    print("(a): {:.2f}m/s, (b): {:.2f}m".format(v1, l))

# 함수 호출
Excersize_2_22(Show_Solution, Answer)

### 24번
import math
import random

# 상수 정의
g = 9.8  # 중력 가속도 (m/s²)

# 초기값 설정
height = 39.2  # 건물 높이 (m)
height_dropped = 2.2  # 공이 떨어지는 높이 (m)

# (a) 공이 지면에 떨어지는 데 걸리는 시간 계산
time_to_fall = math.sqrt(2 * height / g)
# 풀이 과정 주석
time_to_fall_solution = "(a) 공이 지면에 떨어지는 데 걸리는 시간을 계산합니다.\n"
time_to_fall_solution += "떨어지는 데 걸리는 시간 = sqrt(2 * height / g) \n"
time_to_fall_solution += f"높이 = {height} m, 중력 가속도 = {g} m/s²\n"

# (b) 공이 건물에서 수평으로 떨어지는 거리 계산
initial_velocity = random.uniform(0, 10)  # 0부터 10 사이의 랜덤한 값으로 초기 속도 설정
fall_time = random.uniform(0.1, 1.0)  # 0.1부터 1.0 사이의 랜덤한 값으로 떨어지는 데 걸리는 시간 설정
horizontal_distance = initial_velocity * fall_time  # 거리 계산
# 풀이 과정 주석
horizontal_distance_solution = "(b) 공이 건물에서 수평으로 떨어지는 거리를 계산합니다.\n"
horizontal_distance_solution += "수평으로 떨어지는 거리는 초기 속도와 떨어지는 데 걸리는 시간을 곱하여 계산됩니다.\n"
horizontal_distance_solution += f"초기 속도는 0부터 10 사이의 랜덤한 값으로 설정되었습니다.\n"
horizontal_distance_solution += f"떨어지는 데 걸리는 시간은 0.1부터 1.0 사이의 랜덤한 값으로 설정되었습니다.\n"
horizontal_distance_solution += f"수평으로 떨어지는 거리 = {initial_velocity:.2f} * {fall_time:.2f} = {horizontal_distance:.2f} 미터입니다.\n"

# 풀이 출력
print("\n=========================   풀이   =============================\n\n")
print("(a) 공이 지면에 떨어지는 데 걸리는 시간을 계산합니다.")
print("   떨어지는 데 걸리는 시간 = sqrt(2 * height / g) \n")
print(f"   높이 = {height} m, 중력 가속도 = {g} m/s²\n")

print("(b) 공이 건물에서 수평으로 떨어지는 거리를 계산합니다.")
print("   수평으로 떨어지는 거리는 초기 속도와 떨어지는 데 걸리는 시간을 곱하여 계산됩니다.\n")
print("   초기 속도와 떨어지는 데 걸리는 시간은 각각 0부터 10 사이, 0.1부터 1.0 사이의 랜덤한 값으로 설정됩니다.\n")

# 결과 출력
print("=========================   결과   =============================\n\n")
print("(a) 공이 지면에 떨어지는 데 걸리는 시간: {:.2f} 초".format(time_to_fall))
print("(b) 공이 건물에서 수평으로 떨어지는 거리: {:.2f} 미터".format(horizontal_distance))

### 26번
print("=========================   풀 이   =============================\n")
print("1. 속도 계산: 주어진 수식 v^2 = v₀^2 + 2aΔx을 이용하여 최종 속도를 계산합니다. 여기서,")
print(f"v₀ = 22.0 m/s, a = -9.81 m/s², Δx = 15.0 m이므로 v = sqrt({22.0**2} + 2 * {-9.81} * 15) = {13.77:.2f} m/s입니다.")
print("2. 시간 계산: Δx = v₀t + 1/2at² 방정식을 풀어 t에 대한 해를 찾습니다. 이차 방정식을 풀면,")
print(f"계수가 [0.5 * {-9.81}, {22.0}, {-15.0}]인 방정식에서 t의 해는 약 0.84초와 3.65초입니다.\n")

print("\n=========================   정 답   =============================\n")
print(f"(a) 15.0m에서의 속도: {13.77:.2f} m/s")
print(f"(b) 이 높이에 도달하는 데 걸린 시간: 0.84초와 3.65초")
print("(c) 두 개의 답이 있는 이유: 돌이 올라가는 동안과 내려오는 동안 같은 높이를 두 번 지나가기 때문입니다.")

### 28번
import math
import random

SHOW = 1
NOT_SHOW = 0
Show_Solution = 1
Answer = 1

def Excersize_1_21(solution, answer):
    random.seed()
    v = 49  # 초기 속도 (m/s)
    g = 9.8  # 중력 가속도 (m/s^2)

    # (a) 최고 높이 계산
    H = (v ** 2) / (2 * g)

    # (b) 지면에 돌아오는 시간 계산
    t = (2 * v) / g

    print("\n\n")
    print("초속도가 {} m/s로 연직 위로 던진 물체에 대한 문제\n".format(v))
    print("(a) 이 물체가 올라갈 수 있는 최고 높이 H는 {:.2f} m입니다.".format(H))
    print("(b) 이 물체가 다시 지면에 떨어지는 데 걸리는 시간은 {:.2f} 초입니다.\n".format(t))

    if solution == SHOW:
        print("\n\n\n")
        print("=========================   풀 이   =============================\n\n")
        print("(a) 최고 높이 H를 구하는 공식: H = (v^2) / (2 * g)")
        print("여기서, v는 초속도, g는 중력 가속도입니다.")
        print("따라서, H = ({0}^2) / (2 * {1}) = {2:.2f} m\n".format(v, g, H))

        print("(b) 지면에 떨어지는 데 걸리는 시간을 구하는 공식: t = (2 * v) / g")
        print("여기서, v는 초속도, g는 중력 가속도입니다.")
        print("따라서, t = (2 * {0}) / {1} = {2:.2f} 초\n".format(v, g, t))

    if answer == SHOW:
        print("\n\n\n")
        print("=========================   정 답   =============================\n\n")
        print("(a) 최고 높이 H: {:.2f} m".format(H))
        print("(b) 떨어지는 데 걸리는 시간: {:.2f} 초".format(t))
        print("\n\n\n")

# 함수 호출하여 실행
Excersize_1_21(Show_Solution, Answer)




  




