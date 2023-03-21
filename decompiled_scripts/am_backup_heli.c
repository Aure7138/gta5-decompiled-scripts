#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	float fLocal_58 = 0f;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61[3] = { 0f, 0f, 0f };
	var uLocal_65 = 16;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	struct<2> Local_230 = { 0, 0 } ;
	var uLocal_232 = 745926877;
	var uLocal_233 = 0;
	var uLocal_234 = 3;
	var uLocal_235 = 0;
	var uLocal_236 = -839953400;
	var uLocal_237 = 0;
	var uLocal_238 = -839953400;
	var uLocal_239 = 0;
	var uLocal_240 = -839953400;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	int iLocal_252[2] = { 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_58 = -1f;
	if (unk_0x591AF4C50B46E014())
	{
		func_102(ScriptParam_0);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (unk_0x591AF4C50B46E014())
		{
			func_86();
			func_84();
			switch (func_83(unk_0x88641E5BC172153A()))
			{
				case 0:
					if (func_82() > 0)
					{
						iLocal_252[unk_0x88641E5BC172153A()] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_82() == 3)
					{
						iLocal_252[unk_0x88641E5BC172153A()] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x62E688B72E3C57B0())
			{
				switch (func_82())
				{
					case 0:
						Local_230.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	func_7();
	if (Local_230.f_1.f_2 == 5)
	{
		Local_230.f_0 = 3;
	}
	if (func_6(&(Local_230.f_1.f_19)))
	{
		if (func_4(&(Local_230.f_1.f_19), 20000, 0))
		{
			Local_230.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_230.f_0 = 3;
	}
	if (bLocal_48)
	{
		if (!unk_0x1CF28DE85743D98B())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x1CF28DE85743D98B())
	{
		Local_230.f_0 = 3;
	}
	if (func_2())
	{
		Local_230.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1752418.f_3;
}

bool func_3()
{
	return Global_1312416;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0x591AF4C50B46E014() && !bParam2)
	{
		if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x11ABC381A58DD5AB(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xEF76CA199A0C9035(unk_0x2AA4F22517A69BB6(unk_0x3732B96D7A1859B4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x591AF4C50B46E014() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x11ABC381A58DD5AB();
			}
			else
			{
				*uParam0 = unk_0xFD0C6B49DA615791();
			}
		}
		else
		{
			*uParam0 = unk_0x3732B96D7A1859B4();
		}
		uParam0->f_1 = 1;
	}
}

bool func_6(var uParam0)
{
	return uParam0->f_1;
}

void func_7()
{
	switch (Local_230.f_1.f_2)
	{
		case 0:
			func_54(1);
			break;
		
		case 1:
			if (func_36())
			{
				if (func_25())
				{
					func_5(&(Local_230.f_1.f_17), 0, 0);
					func_54(2);
				}
			}
			break;
		
		case 2:
			func_16();
			func_14();
			if (!func_12(Local_230.f_1))
			{
				if ((func_11(Local_230.f_1.f_3[0 /*2*/]) && func_11(Local_230.f_1.f_3[1 /*2*/])) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
			{
				func_54(3);
			}
			else
			{
				if (func_6(&(Local_230.f_1.f_17)))
				{
					if (func_4(&(Local_230.f_1.f_17), 120000, 0))
					{
						func_54(3);
					}
				}
				if (func_10(unk_0x0FFED3E94261A832(), 0))
				{
					func_54(3);
				}
				if (bLocal_52)
				{
					func_54(3);
				}
				if (func_8(unk_0x0FFED3E94261A832(), 136))
				{
					func_54(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_230.f_1))
			{
				if ((func_11(Local_230.f_1.f_3[0 /*2*/]) && func_11(Local_230.f_1.f_3[1 /*2*/])) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_54(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1622795[iParam0 /*431*/] == iParam1)
	{
		return func_9(iParam0);
	}
	return 0;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xAA4F14DA15DB0B51(Global_1622795[iVar0 /*431*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xAA4F14DA15DB0B51(Global_2422215[iParam0 /*387*/].f_217, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return unk_0x769F0F6444C1ABE0(unk_0xC09E9E2B61AD04E7(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x3756406E4D76B25E(uParam0))
	{
		return !func_13(unk_0xECBE9D2902B2B964(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (unk_0xA9A04898798AE9E6(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x7FAC45D56235AB39(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_14()
{
	if (Global_2434604.f_3752)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2434604.f_3751 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2434604.f_3635[iParam0] < iParam1)
	{
		Global_2434604.f_3635[iParam0] = iParam1;
	}
	unk_0xF6082E2ADA1C795B(&(Global_2434604.f_3634), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x2137828D03306CAF(unk_0xECBE9D2902B2B964(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[0 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_230.f_1.f_3[1 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[1 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (unk_0xD0BCF9877CD72A3F(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0xA2590AFE7521A892(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x7E04478E16257BA0(iLocal_56);
		}
	}
	if (unk_0xD7381CA7CDE5E23C(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x20DC9856B13C398C(iLocal_57);
		}
	}
}

bool func_17(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAA4F14DA15DB0B51(Global_1363019, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_20(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_21(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
		}
		if (!bParam4 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/] != 3)
		{
			iVar1 = (iVar1 - func_19(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363019.f_1;
			break;
		
		case 1:
			return Global_1363019.f_2;
			break;
		
		case 2:
			return Global_1363019.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_218;
			}
			else
			{
				return unk_0xD7381CA7CDE5E23C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_219;
			}
			else
			{
				return unk_0xA2590AFE7521A892(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xBCE21F0E265FBBAE())
			{
				return Global_2422215[iVar0 /*387*/].f_220;
			}
			else
			{
				return unk_0xB4BBAC4F16F9AEA1(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1363027;
			break;
		
		case 1:
			return Global_1363028;
			break;
		
		case 2:
			return Global_1363029;
			break;
	}
	return 0;
}

bool func_23(int iParam0, bool bParam1, bool bParam2)
{
	return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)
{
	var uVar0;
	
	if (unk_0xD0BCF9877CD72A3F(*uParam0))
	{
		uVar0 = unk_0x7BAE3A9057619E1F(*uParam0);
		unk_0xC76AD47E2B4CE25C(&uVar0);
	}
}

int func_25()
{
	if (func_35(Local_230.f_1.f_1))
	{
		if (func_35(Local_230.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_12(Local_230.f_1))
			{
				if (func_34(&(Local_230.f_1), Local_230.f_1.f_1, Local_230.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
				{
					unk_0x6437B8B0C99971F3(unk_0xECBE9D2902B2B964(Local_230.f_1));
					unk_0x2DEA38A68AA89671(unk_0xECBE9D2902B2B964(Local_230.f_1), 1, 1, 0);
					unk_0x435850511E04A8D1(unk_0xECBE9D2902B2B964(Local_230.f_1));
					unk_0xFEF767EEC8AAF41E(unk_0xECBE9D2902B2B964(Local_230.f_1), 1);
					func_33(unk_0xECBE9D2902B2B964(Local_230.f_1), 4);
					Global_2434604.f_3746 = unk_0xECBE9D2902B2B964(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0xCB5F06CE475B6C53(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]), unk_0x0FFED3E94261A832());
						func_33(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2434604.f_3747[0] = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0xCB5F06CE475B6C53(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]), unk_0x0FFED3E94261A832());
							func_33(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2434604.f_3747[1] = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0xCB5F06CE475B6C53(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]), unk_0x0FFED3E94261A832());
								func_33(unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2434604.f_3747[2] = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]);
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_26(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0x64B11F881078C75D(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x89AEA58335779997(uParam0, 5, 1);
	unk_0x89AEA58335779997(uParam0, 3, 0);
	unk_0xB5AEEE6CCF634ECA(uParam0, 2);
	unk_0xE5989282DAC350E1(uParam0, 1);
	unk_0xE92D3CD695EE863C(uParam0, 2);
	unk_0x0E05C8E294DD31A1(uParam0, 1);
	unk_0xADC658162F2B08CD(uParam0, 1);
	unk_0x2725C3746060DA66(uParam0, 1);
	unk_0x65648841F3329FD6(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0xD137C6D50D9EAB83(uParam0, 400f);
	unk_0x0C1E1750CE209BF7(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x4EA5B5526A4651E9(uParam0, 250);
			unk_0x67E5DE1657F60AC6(uParam0, 250);
			unk_0xF284B601CA7EB767(uParam0, 250);
		}
	}
	else
	{
		unk_0xF65C7766FB8D4B2C(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0x0FFED3E94261A832(), 0) && !func_28())
	{
		uVar0 = Global_1574739[5];
	}
	else
	{
		uVar0 = unk_0xF14CC08EB3D9D296(unk_0x2A5EB8B0FE590B91());
	}
	unk_0x3C030E241A3543D2(unk_0xC09E9E2B61AD04E7(uParam0), uVar0);
}

bool func_28()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_39.f_18, 0);
}

int func_29(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_30(iParam0))
		{
			return 1;
		}
	}
	if (Global_1592456[iParam0 /*635*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0)
{
	return func_31(iParam0);
}

bool func_31(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xF157AC7C4936A07C(1))
	{
		return 0;
	}
	if (!unk_0x3756406E4D76B25E(uParam1))
	{
		return 0;
	}
	if (!unk_0x7FAC45D56235AB39(unk_0xECBE9D2902B2B964(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xDF7D91421097E934(unk_0x7B47BFDF39EC38D3(unk_0xECBE9D2902B2B964(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		unk_0xE77EEA92586CF2E8(unk_0xC09E9E2B61AD04E7(*uParam0), iParam7);
		if (unk_0x84AEB9C70AC446A5(unk_0xC09E9E2B61AD04E7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x30BD96CB13063EC9(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x01307FD0B54F50D3(uParam0, "AttributeDamage");
	}
	unk_0xF6082E2ADA1C795B(&iVar0, iParam1);
	unk_0xE7B1DEED5908F19B(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	
	if (!unk_0x0EFB343481EA3E51(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x17F1CA1754EDB8DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE42A511281C9895B(uParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0xEDE67C014A25CEBB(uVar0);
	Global_2497344.f_5742 = uVar0;
	if (unk_0x3756406E4D76B25E(*uParam0))
	{
		if (bParam15)
		{
			unk_0x6584E56EC53294F2(uVar0, 1);
		}
		unk_0xE77EEA92586CF2E8(uVar0, iParam10);
		if (unk_0x84AEB9C70AC446A5(uVar0))
		{
			if (bParam8)
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 1);
			}
			else
			{
				unk_0x9C9DFC1EC7F62115(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0x71BF6BEE4B09B8FF(*uParam0, unk_0x0FFED3E94261A832(), 1);
			}
		}
		unk_0xC0CE5D00E49597D9(uVar0, iParam9);
		unk_0xE373A18F5FF76D31(uVar0, 1);
		if (bParam12)
		{
			unk_0xC4021F26C717AD72(uVar0);
			unk_0x1873102BDC0A9FE0(uVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x0F39DF6675B2333E(iParam0);
	return unk_0xA1FC9D7AEA164881(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_53(Local_230.f_1.f_10))
	{
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
			{
				Var0 = { func_51(func_52(unk_0x0FFED3E94261A832()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x630413E24C674321(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_37(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Local_230.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_230.f_1.f_15++;
					if (Local_230.f_1.f_15 >= 12)
					{
						Local_230.f_1.f_15 = 0;
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404996.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB6FB1ADA41270763(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x2F88ECCEDDE3F341(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x2F88ECCEDDE3F341(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x1EC399095E4E3649(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam13)
	{
		if (unk_0x9B4C386906F18D2A(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (fParam14 > 0f)
	{
		if (func_44(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404996.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_38(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404996.f_2++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_43(unk_0x0FFED3E94261A832(), 1, 1))
		{
			if (!unk_0xF4EE9D6C8E60AE22())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4A2E6F541CD8C36E(func_52(unk_0x0FFED3E94261A832()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x14CEA5D3B9541B99(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_43(iVar1, 1, 1))
		{
			if (!func_40(iVar1, 0) && unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0FFED3E94261A832()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2422215[iVar1 /*387*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x220AE8028FACE96A(iVar1) == unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x220AE8028FACE96A(iVar1) != unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()))) || unk_0x220AE8028FACE96A(iVar1) == -1)
							{
								if (unk_0x4A2E6F541CD8C36E(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x220AE8028FACE96A(iVar1) != iParam8 || unk_0x220AE8028FACE96A(iVar1) == -1)
						{
							if (unk_0x4A2E6F541CD8C36E(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x98F45DF66F0270A7(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	if (unk_0xE64E8162575E0B82(unk_0x1E199569E0295838(iParam0)) || Global_2422215[iParam0 /*387*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0FFED3E94261A832())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1592456[iParam0 /*635*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			bVar0 = unk_0x220AE8028FACE96A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
	}
	if (Global_1312832[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_42()
{
	return Global_1312735;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x885F483F34E47503(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xB8B285A272E7A79E(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434604.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_44(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0FFED3E94261A832() != iVar1) || iParam8 == 0)
		{
			if (func_43(iVar1, bParam4, bParam5))
			{
				if (unk_0x2985DBA93DA270F7(unk_0x0FFED3E94261A832(), iVar1))
				{
					if (!bParam7 || (!unk_0x769F0F6444C1ABE0(unk_0x1E199569E0295838(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) != unk_0x220AE8028FACE96A(iVar1))) || unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1)
						{
							if (((unk_0x220AE8028FACE96A(unk_0x0FFED3E94261A832()) == -1 && uParam9) && bParam6) && func_45(iVar1))
							{
							}
							else if (unk_0x2137828D03306CAF(unk_0x1E199569E0295838(iVar1)))
							{
								if (unk_0x4A2E6F541CD8C36E(func_52(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	if (func_50(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	Global_2484572 = { func_49(iParam0) };
	if (unk_0xC869A9FE1FE47589(&Global_2484572))
	{
		return 1;
	}
	if (func_46(unk_0x0FFED3E94261A832(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_48(iParam0);
	if (!iVar0 == func_47())
	{
		if (iVar0 == func_48(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_47()
{
	return -1;
}

int func_48(int iParam0)
{
	if (iParam0 != func_47())
	{
		return Global_1622795[iParam0 /*431*/].f_11;
	}
	return func_47();
}

struct<13> func_49(var uParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(uParam0, &Var0, 13);
	return Var0;
}

int func_50(int iParam0, var uParam1)
{
	if (unk_0x591BB87E287F24DC())
	{
		Global_2484572 = { func_49(iParam0) };
		Global_2484585 = { func_49(uParam1) };
		if (unk_0x3BE1A7ECC62DB032(&Global_2484572))
		{
			if (unk_0x3BE1A7ECC62DB032(&Global_2484585))
			{
				unk_0x78823C36BAC4791B(&Global_2484502, 35, &Global_2484572);
				unk_0x78823C36BAC4791B(&Global_2484537, 35, &Global_2484585);
				if (Global_2484502 == Global_2484537)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_51(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

Vector3 func_52(int iParam0)
{
	return unk_0xD1EE0E9FCD74A37B(unk_0x1E199569E0295838(iParam0), 0);
}

int func_53(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
{
	Local_230.f_1.f_2 = iParam0;
}

void func_55()
{
	func_80();
	func_56();
}

void func_56()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_230.f_1.f_2)
	{
		case 0:
			func_79();
			break;
		
		case 1:
			func_79();
			break;
		
		case 2:
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0xECBE9D2902B2B964(Local_230.f_1);
				if (!unk_0xBDD3EABACAB97D09(uLocal_47))
				{
					uLocal_47 = unk_0x9E3A324AB806771E(uVar1);
					unk_0x9FD1808EF916E312(uLocal_47, 422);
					unk_0xE1E81CBB89115254(uLocal_47, 0);
					unk_0xA6B842B66643C116(uLocal_47, "MPCT_MERRY3");
					func_77(&uLocal_47, 1);
				}
				if (func_76(Local_230.f_1))
				{
					if (unk_0x434105A1C45F1BED(Local_230.f_1))
					{
						if (func_75())
						{
							if (!unk_0xB3FAD23B4CE87897(uVar1))
							{
								unk_0x24C4029AFA900B81(uVar1, 1, 0);
							}
						}
						else if (unk_0xB3FAD23B4CE87897(uVar1))
						{
							unk_0x24C4029AFA900B81(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x3756406E4D76B25E(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0x769F0F6444C1ABE0(uVar0))
					{
						iVar2 = unk_0xDC8B465D0E9659DA(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x4C47904AE69D7393(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x6437B8B0C99971F3(uVar1);
									unk_0x2DEA38A68AA89671(uVar1, 1, 1, 0);
									if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
									{
										if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
										{
											unk_0x9CD13E23F5D54507(uVar0, uVar1, 0, unk_0x2A5EB8B0FE590B91(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_52(unk_0x0FFED3E94261A832()), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_230.f_1), 1)) <= 50f)
							{
								func_58(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x3756406E4D76B25E(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0x769F0F6444C1ABE0(uVar0))
					{
						if (!unk_0xC567CF20FD312AC1(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x4C47904AE69D7393(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x3756406E4D76B25E(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0x769F0F6444C1ABE0(uVar0))
					{
						if (!unk_0xC567CF20FD312AC1(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x4C47904AE69D7393(uVar0, 0);
									func_26(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_57();
			}
			break;
		
		case 3:
			func_79();
			if (!func_6(&(Local_230.f_1.f_19)))
			{
				func_5(&(Local_230.f_1.f_19), 0, 0);
			}
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0xECBE9D2902B2B964(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_76(Local_230.f_1))
						{
							if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0x4C47904AE69D7393(uVar0, 0);
								unk_0x654FFF4D16298AC5(uVar0);
								unk_0x3C030E241A3543D2(uVar0, Global_1574728);
								if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
								{
									if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
									{
										unk_0x9CD13E23F5D54507(uVar0, uVar1, 0, unk_0x2A5EB8B0FE590B91(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x015B50BC21C88C8C(uVar0, 1);
										iLocal_53 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0x654FFF4D16298AC5(uVar0);
								unk_0x4C47904AE69D7393(uVar0, 1);
								unk_0x015B50BC21C88C8C(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_52(unk_0x0FFED3E94261A832()), unk_0xD1EE0E9FCD74A37B(unk_0xECBE9D2902B2B964(Local_230.f_1), 1)) <= 50f)
						{
							func_58(&uLocal_65, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0x654FFF4D16298AC5(uVar0);
								unk_0x4C47904AE69D7393(uVar0, 1);
								unk_0x015B50BC21C88C8C(uVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_57();
			}
			break;
		
		case 5:
			func_79();
			break;
	}
}

void func_57()
{
	var uVar0;
	
	if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x67E5DE1657F60AC6(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x67E5DE1657F60AC6(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x434105A1C45F1BED(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x67E5DE1657F60AC6(uVar0, 0);
			}
		}
	}
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_74(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 1;
	return func_59(sParam2, iParam3, 0);
}

int func_59(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0xE40123A348A5FEDA(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_73();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_72(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_71();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_64();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_63())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
				}
			}
			if (func_62())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_61();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_60();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_73();
	}
	return 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_61()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_62()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_63()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_64()
{
	if (func_70(14))
	{
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_65();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_65()
{
	func_66();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_66()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_69(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_68(unk_0x2A5EB8B0FE590B91());
			if (func_67(iVar0) && (!func_70(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_67(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_69(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_69(int iParam0)
{
	if (func_67(iParam0))
	{
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_70(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_73()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

int func_75()
{
	if (unk_0xDA870B7547A455EA() >= 22)
	{
		return 1;
	}
	if (unk_0xDA870B7547A455EA() <= 6 && unk_0xDA870B7547A455EA() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x2D46D2FB70C76390(uParam0))
	{
		return 1;
	}
	if (unk_0x62E688B72E3C57B0())
	{
		unk_0x47ABF422A76CAA6A(uParam0);
	}
	return 0;
}

void func_77(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xBDD3EABACAB97D09(*uParam0))
	{
		uVar0 = func_78(iParam1);
		unk_0xEB5D36079067EBA5(*uParam0, uVar0);
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xF9C830438D0097FD(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_79()
{
	if (unk_0xBDD3EABACAB97D09(uLocal_47))
	{
		unk_0x789C84F1B8496AD0(&uLocal_47);
	}
}

void func_80()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_81(&uLocal_65, 3, unk_0xC09E9E2B61AD04E7(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_81(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(uParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(uParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(uParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(uParam2, 1);
			}
		}
	}
}

int func_82()
{
	return Local_230.f_0;
}

int func_83(int iParam0)
{
	return iLocal_252[iParam0];
}

void func_84()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_58 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_59))
	{
		func_5(&uLocal_59, 0, 0);
	}
	else if (func_4(&uLocal_59, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_52(unk_0x0FFED3E94261A832()) };
		fLocal_58 = unk_0x630413E24C674321(Var1.f_0, Var1.f_1);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_85(&uLocal_59);
	}
}

void func_85(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_86()
{
}

void func_87()
{
	var uVar0;
	var uVar1;
	
	Global_2434604.f_3746 = uVar0;
	Global_2434604.f_3747[0] = uVar1;
	Global_2434604.f_3747[1] = uVar1;
	Global_2434604.f_3747[2] = uVar1;
	Global_2434604.f_3751 = 0f;
	Global_2434604.f_3752 = 0;
	func_89(func_90(1, 1), 10, func_47());
	func_88();
}

void func_88()
{
	unk_0xA232817B0B36F2E5();
}

void func_89(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -1224993472;
	Var0.f_1 = unk_0x0FFED3E94261A832();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 6, iParam0);
	}
}

int func_90(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0FFED3E94261A832() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0xF6082E2ADA1C795B(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()
{
	var uVar0;
	
	func_98(&uVar0);
	if (Global_1312829 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2456932)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!unk_0x822F3797A8B64786())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0x09952BA662A7629B(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()
{
	switch (func_93())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_93()
{
	return Global_25222;
}

bool func_94()
{
	return Global_2445217.f_578;
}

int func_95(int iParam0)
{
	if (unk_0xD37747F3A8268B17(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return Global_2454709;
}

bool func_97()
{
	return Global_2445217.f_573;
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x38304638B9D1FFDF(1))
	{
		iVar1 = unk_0xB858658E2820D025(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xD9298AF91B40C8C4(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1145922221:
					func_99(iVar0);
					break;
				
				case 232736570:
					unk_0xD9298AF91B40C8C4(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 679497545)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_99(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xD9298AF91B40C8C4(1, iParam0, &Var0, 3))
	{
		if (func_43(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x1E199569E0295838(Var0.f_1);
			if (unk_0x2137828D03306CAF(uVar3))
			{
				if (unk_0xC4A39E4229BD3ABE(uVar3, 0))
				{
					uVar4 = unk_0x0C20E539D876C5B3(uVar3, 0);
					if (unk_0x4DCC2E7FEFC9DF32(uVar4, Var0.f_2) && unk_0xBCE21F0E265FBBAE())
					{
						if (func_100(uVar4, &bVar5))
						{
							unk_0x43D817D6742248A4(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xFECCD8AF38671477(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1)
{
	if (unk_0x2137828D03306CAF(uParam0))
	{
		if (!unk_0x03322C3918511AA0(uParam0))
		{
			if (unk_0x3321AFCAE6E141D4(uParam0))
			{
				if (!unk_0x11217C882DAE7DDD(unk_0xD3B21CE53AA7BE51(uParam0)))
				{
					unk_0x216B434C1A609F5B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xDDB64A4460B8504C(uParam0, 0))
		{
			if (unk_0x1979A7D1D0538188(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_102(struct<21> Param0)
{
	func_108(func_109(Param0.f_0), Param0);
	unk_0x20DC9856B13C398C(3);
	unk_0x7E04478E16257BA0(1);
	func_106(0, -1, 0);
	unk_0x2D179B3FFCF1AADA(&Local_230, 22);
	unk_0xA5929B03CD847BE8(&iLocal_252, 3);
	unk_0xAC09235E2065C253(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x1CF28DE85743D98B())
	{
		bLocal_48 = true;
	}
	func_103(62, 1);
	iLocal_252[unk_0x88641E5BC172153A()] = 0;
}

void func_103(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_104() /*10885*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*10885*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*10885*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_104() /*10885*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*10885*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*10885*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*10885*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*10885*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*10885*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*10885*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*10885*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*10885*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*10885*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*10885*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*10885*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*10885*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*10885*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*10885*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*10885*/].f_7546.f_30 = iVar0;
			break;
	}
}

int func_104()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x591AF4C50B46E014())
		{
			return 0;
		}
		if (unk_0x3F76B69AE9B695DD())
		{
			return 1;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xBC3BAD18EBEFD169();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x591AF4C50B46E014())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xAD61841DF357CB5C())
			{
				if (!bParam2)
				{
					func_88();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xBC3BAD18EBEFD169();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x591AF4C50B46E014())
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xAD61841DF357CB5C())
	{
		if (!bParam2)
		{
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()
{
	return Global_1312829;
}

void func_108(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x591AF4C50B46E014())
	{
		func_88();
	}
	unk_0x7784BB6DC48D0B18(uParam0, 0, Param1.f_16);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 109:
			return 32;
		
		case 110:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 2;
		
		case 132:
			return 1;
		
		case 128:
			return 2;
		
		case 129:
			return 4;
		
		case 130:
			return 2;
		
		case 131:
			return 2;
		
		case 113:
			return 1;
		
		case 133:
			return 2;
		
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return 0;
		
		case 143:
			return 1;
		
		case 140:
			return 4;
		
		case 141:
			return 16;
		
		case 142:
			return 32;
		
		default:
	}
	return 0;
}

