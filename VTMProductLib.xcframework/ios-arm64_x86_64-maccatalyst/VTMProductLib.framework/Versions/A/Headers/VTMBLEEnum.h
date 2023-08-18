//
//  VTMBLEEnum.h
//  VTMProductDemo
//
//  Created by viatom on 2020/10/26.
//

#ifndef VTMBLEEnum_h
#define VTMBLEEnum_h

typedef enum : u_char {
    VTMDeviceTypeUnknown,
    VTMDeviceTypeECG,           ///< ER1/ER2/VBeat/DuoEK/DuoEKS
    VTMDeviceTypeBP,            ///< BP2/BP2A/BP2T/BP2W/BP2Pro
    VTMDeviceTypeScale,         ///< S1
    VTMDeviceTypeER3,           ///< ER3
} VTMDeviceType;

typedef enum : u_char {
    VTMBLEHeaderDefault = 0xA5,
} VTMBLEHeader;

typedef enum : u_char {
    VTMBLEPkgTypeRequest = 0x00,            ///< request
    VTMBLEPkgTypeNormal = 0x01,             ///< normal
    VTMBLEPkgTypeNotFound = 0xE0,           ///< not found file
    VTMBLEPkgTypeOpenFailed = 0xE1,         ///< open file failed
    VTMBLEPkgTypeReadFailed = 0xE2,         ///< read file failed
    VTMBLEPkgTypeWriteFailed = 0xE3,        ///< write file failed
    VTMBLEPkgTypeReadFileListFailed = 0xF1, ///< read file's list failed
    VTMBLEPkgTypeDeviceOccupied = 0xFB,     ///< device occupied, e.g. use occupied
    VTMBLEPkgTypeFormatError = 0xFC,
    VTMBLEPkgTypeFormatUnsupport = 0xFD,
    VTMBLEPkgTypeCommonError = 0xFF,
    VTMBLEPkgTypeHeadError = 0xCC,
    VTMBLEPkgTypeCRCError = 0xCD,
} VTMBLEPkgType;

typedef enum : u_char {
    VTMBLECmdEcho = 0xE0,                   // 回显
    VTMBLECmdGetDeviceInfo = 0xE1,          // 获取设备信息
    VTMBLECmdReset = 0xE2,                  // 复位
    VTMBLECmdRestore = 0xE3,                // 恢复出厂
    VTMBLECmdGetBattery = 0xE4,             // 获取电池状态
    VTMBLECmdUpdateFirmware = 0xE5,         // 开始固件升升级
    VTMBLECmdUpdateFirmwareData = 0xE6,     // 发送固件升级数据
    VTMBLECmdUpdateFirmwareEnd = 0xE7,      // 固件升级结束
    VTMBLECmdUpdateLangua = 0xE8,           // 开始升级语言包
    VTMBLECmdUpdateLanguaData = 0xF8,       // 发送语言包数据
    VTMBLECmdUpdateLanguaEnd = 0xE9,        // 结束升级语言包
    VTMBLECmdRestoreInfo = 0xEA,            // 烧录出厂信息
    VTMBLECmdEncrypt = 0xEB,                // 加密Flash
    VTMBLECmdSyncTime = 0xEC,               // 同步时间
    VTMBLECmdGetDeviceTemp = 0xED,          // 获取设备温度
    VTMBLECmdProductReset = 0xEE,           // 恢复生产出厂设置
    VTMBLECmdGetFileList = 0xF1,            //读取文件列表
    VTMBLECmdStartRead = 0xF2,              // 读文件开始
    VTMBLECmdReadFile = 0xF3,               // 读文件
    VTMBLECmdEndRead = 0xF4,                // 读文件结束
    VTMBLECmdStartWrite = 0xF5,             // 写文件开始
    VTMBLECmdWriteData = 0xF6,              // 写文件
    VTMBLECmdEndWrite = 0xF7,               // 写文件结束
    VTMBLECmdDeleteFile = 0xF8,
    VTMBLECmdGetUserList = 0xF9,
    VTMBLECmdEnterDFU = 0xFA,
    
    VTMBLECmdSyncTimeZone = 0xC0            // 同步时间时区
} VTMBLECmd;

typedef enum : u_char {
    VTMECGCmdGetConfig = 0x00,
    VTMECGCmdGetRealWave = 0x01,            //获取实时波形
    VTMECGCmdGetRunStatus = 0x02,           // 获取运行状态
    VTMECGCmdGetRealData = 0x03,            // 获取实时数据
    VTMECGCmdSetConfig = 0x04,              // 设置参数
    VTMECGCmdExitMeasure = 0x05,            // ER1S 结束测量
    
    VTMER3ECGCmdGetRealData = 0x03,         //  ER3获取实时数据
    VTMER3ECGCmdExitMeasure = 0x07,         // ER3退出测量模式
    VTMER3ECGCmdStartMeasure = 0x08,        // ER3启动测量模式
} VTMECGCmd;

typedef enum : u_char {
    VTMBPCmdGetConfig = 0x00,
    VTMBPCmdCalibrateZero = 0x01,
    VTMBPCmdCalibrateSlope = 0x02,
    VTMBPCmdGetRealPressure = 0x05,
    VTMBPCmdGetRealStatus = 0x06,
    VTMBPCmdGetRealWave = 0x07,
    VTMBPCmdGetRealData = 0x08,
    VTMBPCmdSwiRunStatus = 0x09,
    VTMBPCmdStartMeasure = 0x0A,
    VTMBPCmdSetConfig = 0x0B,
    /** BP2 WiFi  */
    VTMBPCmdScanWiFiList = 0x11,
    VTMBPCmdSetWiFiConfig = 0x12,
    VTMBPCmdGetWiFiConfig = 0x13,
    VTMBPCmdGetCRCUserList = 0x30,     // 获取用户列表校验
    VTMBPCmdGetCRCECGList = 0x31,
    VTMBPCmdGetCRCBPList = 0x32
} VTMBPCmd;

typedef enum : u_char {
    VTMSCALECmdGetConfig = 0x00,
    VTMSCALECmdGetRealWave = 0x01,
    VTMSCALECmdGetRunParams = 0x02,
    VTMSCALECmdGetRealData = 0x03,
} VTMSCALECmd;


typedef enum : u_char {
    VTMBPTargetStatusBP = 0,
    VTMBPTargetStatusECG = 1,
    VTMBPTargetStatusHistory = 2,
    VTMBPTargetStatusStart = 3,
    VTMBPTargetStatusEnd = 4
} VTMBPTargetStatus;

typedef enum : u_char {
    VTMBPStatusSleep = 0,               // 关机
    VTMBPStatusMemery,                  // 数据回顾
    VTMBPStatusCharge,                  // 充电
    VTMBPStatusReady,                   // 开机预备状态
    VTMBPStatusBPMeasuring,             // 血压测量中
    VTMBPStatusBPMeasureEnd,            // 血压测量结束
    VTMBPStatusECGMeasuring,            // 心电测量中
    VTMBPStatusECGMeasureEnd,           // 心电测量结束

    VTMBPStatusBPAVGMeasure = 15,       // BP2WIFI血压测量x3中
    VTMBPStatusBPAVGMeasureWait = 16,   // BP2WIFI血压测量x3等待开始状态
    VTMBPStatusBPAVGMeasureEnd = 17,    // BP2WIFI血压测量x3结束
//    STATUS_VEN = 20,                  // BP2理疗 理疗模式中

} VTMBPStatus;

#endif /* VTMBLEEnum_h */
