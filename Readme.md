# CPU Frequency Library

这是一个用于获取CPU基准频率和当前频率的库。它可以帮助你了解你的CPU在不同时间点的工作状态。

## 特点
- 测量CPU频率
- 易于集成和使用

## 快速开始

### 环境要求

- 编译器：Microsoft Visual Studio 
- 操作系统：Windows

### 安装

1. 克隆仓库到本地
   ```bash
   git clone https://github.com/luck0316/cpufreqlib.git
2. 用Microsoft Visual Studio选择cpu.sln打开

### API文档

- float get_base_cpu_freq_hz(void):\
获取CPU的基准频率（单位：GHz）。如果无法检测到基准频率，则返回0。

- float get_curr_cpu_freq_hz(void);\
获取CPU的当前频率（单位：GHz）。如果无法检测到当前频率，则返回0。

## 声明

本项目在开发过程中参考了 [Intel® CPU Frequency Library](https://github.com/intel/intel-cpu-frequency-library)