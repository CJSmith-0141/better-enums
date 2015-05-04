/// @file EnumPreprocessorMap.h
/// @brief Preprocessor higher-order map macro.
///
/// This file was automatically generated by pp_map_gen.py

#pragma once

#define _ENUM_PP_MAP(macro, data, ...) \
    _ENUM_PP_APPLY(_ENUM_PP_MAP_VAR_COUNT, _ENUM_PP_COUNT(__VA_ARGS__)) \
        (macro, data, __VA_ARGS__)

#define _ENUM_PP_MAP_VAR_COUNT(count) _ENUM_PP_MAP_ ## count

#define _ENUM_PP_APPLY(macro, ...) macro(__VA_ARGS__)

#define _ENUM_PP_MAP_1(macro, data, x) _ENUM_PP_APPLY(macro, data, x)
#define _ENUM_PP_MAP_2(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_1(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_3(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_2(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_4(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_3(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_5(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_4(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_6(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_5(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_7(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_6(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_8(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_7(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_9(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_8(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_10(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_9(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_11(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_10(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_12(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_11(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_13(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_12(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_14(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_13(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_15(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_14(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_16(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_15(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_17(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_16(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_18(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_17(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_19(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_18(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_20(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_19(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_21(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_20(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_22(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_21(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_23(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_22(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_24(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_23(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_25(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_24(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_26(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_25(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_27(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_26(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_28(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_27(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_29(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_28(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_30(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_29(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_31(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_30(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_32(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_31(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_33(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_32(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_34(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_33(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_35(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_34(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_36(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_35(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_37(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_36(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_38(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_37(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_39(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_38(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_40(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_39(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_41(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_40(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_42(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_41(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_43(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_42(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_44(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_43(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_45(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_44(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_46(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_45(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_47(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_46(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_48(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_47(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_49(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_48(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_50(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_49(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_51(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_50(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_52(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_51(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_53(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_52(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_54(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_53(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_55(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_54(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_56(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_55(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_57(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_56(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_58(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_57(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_59(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_58(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_60(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_59(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_61(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_60(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_62(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_61(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_63(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_62(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_64(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_63(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_65(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_64(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_66(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_65(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_67(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_66(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_68(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_67(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_69(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_68(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_70(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_69(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_71(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_70(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_72(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_71(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_73(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_72(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_74(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_73(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_75(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_74(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_76(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_75(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_77(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_76(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_78(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_77(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_79(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_78(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_80(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_79(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_81(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_80(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_82(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_81(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_83(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_82(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_84(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_83(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_85(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_84(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_86(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_85(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_87(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_86(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_88(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_87(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_89(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_88(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_90(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_89(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_91(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_90(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_92(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_91(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_93(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_92(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_94(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_93(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_95(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_94(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_96(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_95(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_97(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_96(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_98(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_97(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_99(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_98(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_100(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_99(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_101(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_100(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_102(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_101(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_103(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_102(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_104(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_103(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_105(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_104(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_106(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_105(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_107(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_106(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_108(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_107(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_109(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_108(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_110(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_109(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_111(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_110(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_112(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_111(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_113(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_112(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_114(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_113(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_115(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_114(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_116(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_115(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_117(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_116(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_118(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_117(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_119(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_118(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_120(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_119(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_121(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_120(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_122(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_121(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_123(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_122(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_124(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_123(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_125(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_124(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_126(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_125(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_127(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_126(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_128(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_127(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_129(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_128(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_130(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_129(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_131(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_130(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_132(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_131(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_133(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_132(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_134(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_133(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_135(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_134(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_136(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_135(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_137(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_136(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_138(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_137(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_139(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_138(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_140(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_139(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_141(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_140(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_142(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_141(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_143(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_142(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_144(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_143(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_145(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_144(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_146(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_145(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_147(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_146(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_148(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_147(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_149(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_148(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_150(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_149(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_151(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_150(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_152(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_151(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_153(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_152(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_154(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_153(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_155(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_154(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_156(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_155(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_157(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_156(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_158(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_157(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_159(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_158(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_160(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_159(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_161(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_160(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_162(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_161(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_163(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_162(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_164(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_163(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_165(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_164(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_166(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_165(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_167(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_166(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_168(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_167(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_169(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_168(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_170(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_169(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_171(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_170(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_172(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_171(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_173(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_172(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_174(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_173(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_175(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_174(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_176(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_175(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_177(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_176(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_178(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_177(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_179(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_178(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_180(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_179(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_181(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_180(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_182(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_181(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_183(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_182(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_184(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_183(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_185(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_184(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_186(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_185(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_187(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_186(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_188(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_187(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_189(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_188(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_190(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_189(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_191(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_190(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_192(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_191(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_193(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_192(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_194(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_193(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_195(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_194(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_196(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_195(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_197(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_196(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_198(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_197(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_199(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_198(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_200(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_199(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_201(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_200(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_202(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_201(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_203(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_202(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_204(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_203(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_205(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_204(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_206(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_205(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_207(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_206(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_208(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_207(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_209(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_208(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_210(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_209(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_211(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_210(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_212(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_211(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_213(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_212(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_214(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_213(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_215(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_214(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_216(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_215(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_217(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_216(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_218(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_217(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_219(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_218(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_220(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_219(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_221(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_220(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_222(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_221(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_223(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_222(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_224(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_223(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_225(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_224(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_226(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_225(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_227(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_226(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_228(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_227(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_229(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_228(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_230(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_229(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_231(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_230(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_232(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_231(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_233(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_232(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_234(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_233(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_235(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_234(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_236(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_235(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_237(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_236(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_238(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_237(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_239(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_238(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_240(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_239(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_241(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_240(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_242(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_241(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_243(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_242(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_244(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_243(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_245(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_244(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_246(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_245(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_247(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_246(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_248(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_247(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_249(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_248(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_250(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_249(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_251(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_250(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_252(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_251(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_253(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_252(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_254(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_253(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_255(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_254(macro, data, __VA_ARGS__)
#define _ENUM_PP_MAP_256(macro, data, x, ...) _ENUM_PP_APPLY(macro, data, x), \
    _ENUM_PP_MAP_255(macro, data, __VA_ARGS__)

#define _ENUM_PP_COUNT_IMPL(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
    _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, \
    _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, \
    _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, \
    _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, \
    _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, \
    _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98, _99, _100, _101,    \
    _102, _103, _104, _105, _106, _107, _108, _109, _110, _111, _112, _113,    \
    _114, _115, _116, _117, _118, _119, _120, _121, _122, _123, _124, _125,    \
    _126, _127, _128, _129, _130, _131, _132, _133, _134, _135, _136, _137,    \
    _138, _139, _140, _141, _142, _143, _144, _145, _146, _147, _148, _149,    \
    _150, _151, _152, _153, _154, _155, _156, _157, _158, _159, _160, _161,    \
    _162, _163, _164, _165, _166, _167, _168, _169, _170, _171, _172, _173,    \
    _174, _175, _176, _177, _178, _179, _180, _181, _182, _183, _184, _185,    \
    _186, _187, _188, _189, _190, _191, _192, _193, _194, _195, _196, _197,    \
    _198, _199, _200, _201, _202, _203, _204, _205, _206, _207, _208, _209,    \
    _210, _211, _212, _213, _214, _215, _216, _217, _218, _219, _220, _221,    \
    _222, _223, _224, _225, _226, _227, _228, _229, _230, _231, _232, _233,    \
    _234, _235, _236, _237, _238, _239, _240, _241, _242, _243, _244, _245,    \
    _246, _247, _248, _249, _250, _251, _252, _253, _254, _255, _256, count,   \
    ...) count

#define _ENUM_PP_COUNT(...) _ENUM_PP_COUNT_IMPL(__VA_ARGS__, 256, 255, 254,    \
    253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, \
    238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, \
    223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, \
    208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, \
    193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, \
    178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, \
    163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, \
    148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, \
    133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, \
    118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, \
    103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86,\
    85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67,\
    66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48,\
    47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29,\
    28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10,\
    9, 8, 7, 6, 5, 4, 3, 2, 1)