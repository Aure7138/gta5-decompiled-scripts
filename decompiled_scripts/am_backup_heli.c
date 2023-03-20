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
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_124(ScriptParam_0);
	}
	while (true)
	{
		func_123();
		if (func_113())
		{
			func_109();
		}
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			func_108();
			func_106();
			switch (func_105(unk_0x935FA14EDA695A82()))
			{
				case 0:
					if (func_104() > 0)
					{
						iLocal_252[unk_0x935FA14EDA695A82()] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_104() == 3)
					{
						iLocal_252[unk_0x935FA14EDA695A82()] = 3;
					}
					break;
				
				case 3:
					func_109();
					break;
			}
			if (unk_0x736DBE187CFCC863())
			{
				switch (func_104())
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
		if (!unk_0xE21B8C41C187AA64())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0xE21B8C41C187AA64())
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
	return Global_1701441.f_3;
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
	if (unk_0xBBAE3E0C60A8AD4B() && !bParam2)
	{
		if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x2AA13A84EE2D3B24(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xA1836B70A59643DD(unk_0x2F4EBE92EB266B70(unk_0x693EBB4F13506457(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2AA13A84EE2D3B24();
			}
			else
			{
				*uParam0 = unk_0x3BC33547A5F418E8();
			}
		}
		else
		{
			*uParam0 = unk_0x693EBB4F13506457();
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
				if (func_10(unk_0xA34E7C2A5118D638(), 0))
				{
					func_54(3);
				}
				if (bLocal_52)
				{
					func_54(3);
				}
				if (func_8(unk_0xA34E7C2A5118D638(), 136))
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
	if (Global_1608811[iParam0 /*109*/] == iParam1)
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
		return unk_0xDCC86F723E82125E(Global_1608811[iVar0 /*109*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_206, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return unk_0x2DC9BA2299B45EA6(unk_0xA84D2F2B8688949A(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x1BDB4A81F7EE9BE6(uParam0))
	{
		return !func_13(unk_0xF8A3C382964380BC(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(uParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(uParam0, 0))
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
	if (Global_2426867.f_3397)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2426867.f_3396 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2426867.f_3280[iParam0] < iParam1)
	{
		Global_2426867.f_3280[iParam0] = iParam1;
	}
	unk_0x59A0729D503ED758(&(Global_2426867.f_3279), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x95CCECA3948CFE7B(unk_0xF8A3C382964380BC(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x691BFDC1728FD714(Local_230.f_1.f_3[0 /*2*/]))
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
		if (unk_0x691BFDC1728FD714(Local_230.f_1.f_3[1 /*2*/]))
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
		if (unk_0x691BFDC1728FD714(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x43C913D65CB1CB90(false) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0xC908ABD9A1B6E6E6(iLocal_56);
		}
	}
	if (unk_0xD398CE6895CD43E8(false) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0xB575A770677DC316(iLocal_57);
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
	
	if (!unk_0xDCC86F723E82125E(Global_1348625, 0))
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
		if (!bParam4 && Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] != 3)
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
			return Global_1348625.f_1;
			break;
		
		case 1:
			return Global_1348625.f_2;
			break;
		
		case 2:
			return Global_1348625.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA34E7C2A5118D638();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_207;
			}
			else
			{
				return unk_0xD398CE6895CD43E8(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_208;
			}
			else
			{
				return unk_0x43C913D65CB1CB90(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xEE66E067C1F8D1F4())
			{
				return Global_2417071[iVar0 /*306*/].f_209;
			}
			else
			{
				return unk_0x677F6E172BA18B9B(!bParam1);
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
			return Global_1348633;
			break;
		
		case 1:
			return Global_1348634;
			break;
		
		case 2:
			return Global_1348635;
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
	
	if (unk_0x691BFDC1728FD714(*uParam0))
	{
		uVar0 = unk_0x6622BC2FDC6DBB0E(*uParam0);
		unk_0xBDC2957CCB5DFDC3(&uVar0);
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
				if (func_34(&(Local_230.f_1), Local_230.f_1.f_1, Local_230.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1))
				{
					unk_0x0C7C7F68B472963C(unk_0xF8A3C382964380BC(Local_230.f_1));
					unk_0x57892FEA93664769(unk_0xF8A3C382964380BC(Local_230.f_1), 1, 1, 0);
					unk_0xE457AC24AF211ECC(unk_0xF8A3C382964380BC(Local_230.f_1));
					unk_0xFE4533E741E5E8FC(unk_0xF8A3C382964380BC(Local_230.f_1), 1);
					func_33(unk_0xF8A3C382964380BC(Local_230.f_1), 4);
					Global_2426867.f_3391 = unk_0xF8A3C382964380BC(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x2BDFF050F193A83A(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]), unk_0xA34E7C2A5118D638());
						func_33(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2426867.f_3392[0] = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x2BDFF050F193A83A(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]), unk_0xA34E7C2A5118D638());
							func_33(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2426867.f_3392[1] = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x2BDFF050F193A83A(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]), unk_0xA34E7C2A5118D638());
								func_33(unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2426867.f_3392[2] = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]);
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
	unk_0x21EC660480DA1A3C(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x1296D571B761D748(uParam0, 5, 1);
	unk_0x1296D571B761D748(uParam0, 3, 0);
	unk_0xC8C48B991776ADA5(uParam0, 2);
	unk_0x2455AECF5E279D05(uParam0, 1);
	unk_0x796C6B44A59A1673(uParam0, 2);
	unk_0x7867B753FDFAFE2B(uParam0, 1);
	unk_0x45775F000D34F090(uParam0, 1);
	unk_0x58F516BB5E324590(uParam0, 1);
	unk_0x0893EE04C269FFD2(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0x592172E10E3BDD6A(uParam0, 400f);
	unk_0x1202518C37DBD030(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xB475A01381151886(uParam0, 250);
			unk_0xFE93132CC8944C8C(uParam0, 250);
			unk_0xAC97D775CC3EAB05(uParam0, 250);
		}
	}
	else
	{
		unk_0xEE6504C7ECC425AB(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0xA34E7C2A5118D638(), 0) && !func_28())
	{
		uVar0 = Global_1574234[5];
	}
	else
	{
		uVar0 = unk_0xBD4278CDF5C53C71(unk_0xC8B93D94F8954288());
	}
	unk_0xCBD60E398042F554(unk_0xA84D2F2B8688949A(uParam0), uVar0);
}

bool func_28()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 0);
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
	if (Global_1587175[iParam0 /*410*/] == -1)
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
	return unk_0xDCC86F723E82125E(Global_1587175[iParam0 /*410*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x30D45E180EF7AEE1(1))
	{
		return 0;
	}
	if (!unk_0x1BDB4A81F7EE9BE6(uParam1))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(unk_0xF8A3C382964380BC(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xFD3315C91C68296D(unk_0xDEFAEEE1A4058454(unk_0xF8A3C382964380BC(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(unk_0xA84D2F2B8688949A(*uParam0), iParam7);
		if (unk_0x6061DFC4D87F4B3E(unk_0xA84D2F2B8688949A(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
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
	if (unk_0x3D32B80EFC48A92D(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xFE76479AD91F5A0A(uParam0, "AttributeDamage");
	}
	unk_0x59A0729D503ED758(&iVar0, iParam1);
	unk_0x99230E3785E2C923(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x0B3DCCE96DC81466(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x3FC9316FEF4E4720(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xD53B4DCC7B2C8551(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0xBE16446E4B20EFE2(uVar0);
	if (unk_0x1BDB4A81F7EE9BE6(*uParam0))
	{
		unk_0x3907D4738A2C8ABD(uVar0, iParam10);
		if (unk_0x6061DFC4D87F4B3E(uVar0))
		{
			if (bParam8)
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 1);
			}
			else
			{
				unk_0x46B4CDCFC03F8576(*uParam0, 0);
			}
		}
		unk_0x59CE4F88873CD573(uVar0, iParam9);
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
	unk_0x7567CEA8E6B5340B(iParam0);
	return unk_0x0845149A26DABBA5(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_53(Local_230.f_1.f_10))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
			{
				Var0 = { func_51(func_52(unk_0xA34E7C2A5118D638()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0xA9269F5DDE15F391(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_37(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0))
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

int func_37(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404919 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0xB3E60341E58EA2CF(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x7F49B0A4EC76092E(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x7F49B0A4EC76092E(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDF38DD44307A8523(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404919++;
	if (bParam13)
	{
		if (unk_0x2E895CA0C4A6EC85(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404919++;
	if (fParam14 > 0f)
	{
		if (func_44(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404919++;
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
	Global_2404919++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_43(unk_0xA34E7C2A5118D638(), 1, 1))
		{
			if (!unk_0xD5DFCA69ACAA20E3())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4F982ED5336EA899(func_52(unk_0xA34E7C2A5118D638()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x8EBAC9BC4005929D(Param0, fParam3))
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
			if (!func_40(iVar1, 0) && unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xA34E7C2A5118D638()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2417071[iVar1 /*306*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x07CBE0ED3114C7D8(iVar1) == unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x07CBE0ED3114C7D8(iVar1) != unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()))) || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
							{
								if (unk_0x4F982ED5336EA899(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x07CBE0ED3114C7D8(iVar1) != iParam8 || unk_0x07CBE0ED3114C7D8(iVar1) == -1)
						{
							if (unk_0x4F982ED5336EA899(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xED0FA7074088E6A2(iVar1, Param0, fParam3))
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
	if (unk_0x06FCE440581B1EC5(unk_0xCF4C00513A86E840(iParam0)) || Global_2417071[iParam0 /*306*/].f_241)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_42()
{
	return Global_1312746;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xDF73DA5E2287C499(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x06972B20E75CBE06(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2426867.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
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
		if ((iParam8 == 1 && unk_0xA34E7C2A5118D638() != iVar1) || iParam8 == 0)
		{
			if (func_43(iVar1, bParam4, bParam5))
			{
				if (unk_0x139A9C4D61DFD52E(unk_0xA34E7C2A5118D638(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DC9BA2299B45EA6(unk_0xCF4C00513A86E840(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) != unk_0x07CBE0ED3114C7D8(iVar1))) || unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1)
						{
							if (((unk_0x07CBE0ED3114C7D8(unk_0xA34E7C2A5118D638()) == -1 && uParam9) && bParam6) && func_45(iVar1))
							{
							}
							else if (unk_0x95CCECA3948CFE7B(unk_0xCF4C00513A86E840(iVar1)))
							{
								if (unk_0x4F982ED5336EA899(func_52(iVar1), Param0, 1) < fParam3)
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
	if (func_50(unk_0xA34E7C2A5118D638(), iParam0))
	{
		return 1;
	}
	Global_2457104 = { func_49(iParam0) };
	if (unk_0x45C7D789894EAE64(&Global_2457104))
	{
		return 1;
	}
	if (func_46(unk_0xA34E7C2A5118D638(), iParam0))
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
		return Global_1608811[iParam0 /*109*/].f_9;
	}
	return func_47();
}

struct<13> func_49(var uParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(uParam0, &Var0, 13);
	return Var0;
}

int func_50(int iParam0, var uParam1)
{
	if (unk_0x14F2268F2CD21E48())
	{
		Global_2457104 = { func_49(iParam0) };
		Global_2457117 = { func_49(uParam1) };
		if (unk_0x0BB7D2D2CAAFD70C(&Global_2457104))
		{
			if (unk_0x0BB7D2D2CAAFD70C(&Global_2457117))
			{
				unk_0x59E0C66A4FA07806(&Global_2457034, 35, &Global_2457104);
				unk_0x59E0C66A4FA07806(&Global_2457069, 35, &Global_2457117);
				if (Global_2457034 == Global_2457069)
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
	return unk_0x44C17CCB85A88A1F(unk_0xCF4C00513A86E840(iParam0), 0);
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
	func_102();
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
			func_101();
			break;
		
		case 1:
			func_101();
			break;
		
		case 2:
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0xF8A3C382964380BC(Local_230.f_1);
				if (!unk_0x6B4865E08E90ACC5(uLocal_47))
				{
					uLocal_47 = unk_0x361E437CE4AD5532(uVar1);
					unk_0x31FDDAFCCFEFA478(uLocal_47, 353);
					unk_0xEBA460B665086587(uLocal_47, 0);
					unk_0x8755DAC584918BF9(uLocal_47, "MPCT_MERRY3");
					if (func_43(unk_0xA34E7C2A5118D638(), 0, 1))
					{
						func_77(&uLocal_47, func_79(unk_0xA34E7C2A5118D638(), -2, 0, 0));
					}
				}
				if (func_76(Local_230.f_1))
				{
					if (unk_0xFEA25F5BCFDBD741(Local_230.f_1))
					{
						if (func_75())
						{
							if (!unk_0x42FC3FF4E40305A2(uVar1))
							{
								unk_0x5B508011F36A8E42(uVar1, 1, 0);
							}
						}
						else if (unk_0x42FC3FF4E40305A2(uVar1))
						{
							unk_0x5B508011F36A8E42(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x1BDB4A81F7EE9BE6(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0x2DC9BA2299B45EA6(uVar0))
					{
						iVar2 = unk_0x7D1DDC63B4B417FA(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0xAAD662D7E0D59F4C(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x0C7C7F68B472963C(uVar1);
									unk_0x57892FEA93664769(uVar1, 1, 1, 0);
									if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
									{
										if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
										{
											unk_0x53ADC9115BDB0CDD(uVar0, uVar1, 0, unk_0xC8B93D94F8954288(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_52(unk_0xA34E7C2A5118D638()), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_230.f_1), 1)) <= 50f)
							{
								func_58(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x1BDB4A81F7EE9BE6(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0x2DC9BA2299B45EA6(uVar0))
					{
						if (!unk_0xA81F17D63315B662(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0xAAD662D7E0D59F4C(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x1BDB4A81F7EE9BE6(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0x2DC9BA2299B45EA6(uVar0))
					{
						if (!unk_0xA81F17D63315B662(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0xAAD662D7E0D59F4C(uVar0, 0);
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
			func_101();
			if (!func_6(&(Local_230.f_1.f_19)))
			{
				func_5(&(Local_230.f_1.f_19), 0, 0);
			}
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0xF8A3C382964380BC(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0xAAD662D7E0D59F4C(uVar0, 0);
								unk_0x5124C5FA52D2AF3E(uVar0);
								unk_0xCBD60E398042F554(uVar0, Global_1574227);
								if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
								{
									if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
									{
										unk_0x53ADC9115BDB0CDD(uVar0, uVar1, 0, unk_0xC8B93D94F8954288(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0xF1A02DDEC7E15D6E(uVar0, 1);
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
						uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0x5124C5FA52D2AF3E(uVar0);
								unk_0xAAD662D7E0D59F4C(uVar0, 1);
								unk_0xF1A02DDEC7E15D6E(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_52(unk_0xA34E7C2A5118D638()), unk_0x44C17CCB85A88A1F(unk_0xF8A3C382964380BC(Local_230.f_1), 1)) <= 50f)
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
						uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0x5124C5FA52D2AF3E(uVar0);
								unk_0xAAD662D7E0D59F4C(uVar0, 1);
								unk_0xF1A02DDEC7E15D6E(uVar0, 1);
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
			func_101();
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
			if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]);
				unk_0xFE93132CC8944C8C(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[1 /*2*/]);
				unk_0xFE93132CC8944C8C(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0xFEA25F5BCFDBD741(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[2 /*2*/]);
				unk_0xFE93132CC8944C8C(uVar0, 0);
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 1;
	return func_59(sParam2, iParam3, 0);
}

int func_59(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_72(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_71();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_64();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_63())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_61();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_60();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_61()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_62()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_63()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_65();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_65()
{
	func_66();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_66()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_69(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_68(unk_0xC8B93D94F8954288());
			if (func_67(iVar0) && (!func_70(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_67(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(uParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_70(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_72(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_73()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

void func_74(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_75()
{
	if (unk_0x342FDFC48311CCCE() >= 22)
	{
		return 1;
	}
	if (unk_0x342FDFC48311CCCE() <= 6 && unk_0x342FDFC48311CCCE() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0xBE5036433C51E57D(uParam0))
	{
		return 1;
	}
	if (unk_0x736DBE187CFCC863())
	{
		unk_0x835FF05091869303(uParam0);
	}
	return 0;
}

void func_77(var uParam0, int iParam1)
{
	if (unk_0x6B4865E08E90ACC5(*uParam0))
	{
		unk_0x32546F91F646B246(*uParam0, func_78(iParam1));
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
	unk_0x7068E8DB78AD0A08(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_79(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_99(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_99(unk_0xA34E7C2A5118D638()) || (func_98() && func_97()))
	{
		uVar0 = func_96();
		if (unk_0x95CCECA3948CFE7B(uVar0))
		{
			if (unk_0xA815CBE767EFA3CB(uVar0))
			{
				if (unk_0x8ACC9D9AC6076DCB(uVar0) != -1)
				{
					if (func_43(unk_0x8ACC9D9AC6076DCB(uVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
						{
							if (Global_1613622.f_65200[iParam1] != -1)
							{
								return func_95(iParam1, iParam0, 0);
							}
							else
							{
								return func_87(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_87(iParam0, unk_0x8ACC9D9AC6076DCB(uVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
			{
				if (Global_1613622.f_65200[iParam1] != -1)
				{
					return func_95(iParam1, iParam0, 0);
				}
				else
				{
					return func_80(0, -1, 0);
				}
			}
			else
			{
				return func_80(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xDC9A5ADFE0C41DD2()) && iParam1 < 4)
	{
		if (Global_1613622.f_65200[iParam1] != -1)
		{
			return func_95(iParam1, iParam0, 0);
		}
		else
		{
			return func_87(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
		}
	}
	return func_87(iParam0, unk_0xA34E7C2A5118D638(), iParam1, bParam2, bParam3);
}

int func_80(bool bParam0, int iParam1, bool bParam2)
{
	return func_81(unk_0xA34E7C2A5118D638(), bParam0, iParam1, bParam2);
}

int func_81(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_86(iVar0, iParam2, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_85(1);
				}
				else
				{
					return func_85(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_4, 20))
			{
				return func_82(iVar0, iParam2, 1);
			}
			else
			{
				return func_82(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_85(1);
	}
	return func_85(0);
}

int func_82(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_84(iParam0, iParam1);
	if (func_83(Global_1613622.f_68788))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_83(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7331[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_86(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_85(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 0);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 1);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 2);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 4);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 5);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 6);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 8);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 9);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 10);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 12);
				
				case 1:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 13);
				
				case 2:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 14);
				
				case 3:
					return unk_0xDCC86F723E82125E(Global_1613622.f_38, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_87(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x07CBE0ED3114C7D8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587175[unk_0xA34E7C2A5118D638() /*410*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587175[iVar2 /*410*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_94(iParam1, iParam0, iVar0, 0) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)) || ((func_86(unk_0x07CBE0ED3114C7D8(iParam1), unk_0x07CBE0ED3114C7D8(iParam0), 0) && unk_0xDCC86F723E82125E(Global_1613622.f_15, 23)) && !unk_0xDCC86F723E82125E(Global_1613622.f_15, 18)))
			{
				return func_85(1);
			}
			else if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 26))
			{
				return func_93(1);
			}
			else
			{
				return func_81(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573833 || Global_1573824) || Global_1587175[iParam0 /*410*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573833 == 1 && Global_1573843 == 0))
			{
				return func_85(1);
			}
			else
			{
				return func_81(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573828 && Global_1573408.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_90(iParam0);
	if (!iVar3 == -1)
	{
		return func_88(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_88(int iParam0)
{
	int iVar0;
	
	iVar0 = func_89(iParam0);
	switch (iVar0)
	{
		case 0:
			return 192;
		
		case 1:
			return 193;
		
		case 2:
			return 194;
		
		case 3:
			return 195;
		
		case 4:
			return 196;
		
		case 5:
			return 197;
		
		case 6:
			return 198;
		
		case 7:
			return 199;
		
		case 8:
			return 200;
		
		case 9:
			return 201;
		
		case 10:
			return 202;
		
		case 11:
			return 203;
		
		case 12:
			return 204;
		
		case 13:
			return 205;
		
		case 14:
			return 206;
		
		default:
	}
	return 12;
}

var func_89(int iParam0)
{
	return Global_2412494.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_90(int iParam0)
{
	if (!iParam0 == func_47())
	{
		if (func_91(iParam0, 1))
		{
			return Global_2412494.f_1946.f_11[func_48(iParam0)];
		}
	}
	return -1;
}

bool func_91(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_92(iParam0))
		{
			return 0;
		}
	}
	return Global_1608811[iParam0 /*109*/].f_9 != func_47();
}

int func_92(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (Global_1608811[iParam0 /*109*/].f_9 != func_47())
		{
			return Global_1608811[iParam0 /*109*/].f_9 == iParam0;
		}
	}
	return 0;
}

int func_93(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && unk_0x07CBE0ED3114C7D8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == unk_0x07CBE0ED3114C7D8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x07CBE0ED3114C7D8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
	}
	return unk_0x07CBE0ED3114C7D8(iParam0) == iParam2;
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1613622.f_65200[iParam0] != -1 && Global_1613622.f_65200[iParam0] <= 4)
	{
		if (Global_1613622.f_65200[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1613622.f_65200[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1613622.f_65200[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1613622.f_65200[iParam0] == 4)
		{
			if (unk_0xDCC86F723E82125E(Global_1613622.f_15, 29))
			{
				iVar0 = 21;
			}
			else
			{
				iVar0 = 6;
			}
		}
		else
		{
			iVar0 = Global_1613622.f_65200[iParam0];
		}
	}
	else
	{
		iVar0 = func_81(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_96()
{
	return Global_2359301.f_2;
}

bool func_97()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 4);
}

bool func_98()
{
	return unk_0xDCC86F723E82125E(Global_1587175[unk_0xA34E7C2A5118D638() /*410*/].f_39.f_18, 14);
}

int func_99(int iParam0)
{
	if (func_40(iParam0, 0))
	{
		return 1;
	}
	if (func_100())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

void func_101()
{
	if (unk_0x6B4865E08E90ACC5(uLocal_47))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_47);
	}
}

void func_102()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_103(&uLocal_65, 3, unk_0xA84D2F2B8688949A(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_103(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(uParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(uParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(uParam2, 1);
			}
		}
	}
}

int func_104()
{
	return Local_230.f_0;
}

int func_105(int iParam0)
{
	return iLocal_252[iParam0];
}

void func_106()
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
		Var1 = { func_52(unk_0xA34E7C2A5118D638()) };
		fLocal_58 = unk_0xA9269F5DDE15F391(Var1.f_0, Var1.f_1);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_107(&uLocal_59);
	}
}

void func_107(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_108()
{
}

void func_109()
{
	var uVar0;
	var uVar1;
	
	Global_2426867.f_3391 = uVar0;
	Global_2426867.f_3392[0] = uVar1;
	Global_2426867.f_3392[1] = uVar1;
	Global_2426867.f_3392[2] = uVar1;
	Global_2426867.f_3396 = 0f;
	Global_2426867.f_3397 = 0;
	func_111(func_112(1, 1), 10, func_47());
	func_110();
}

void func_110()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_111(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 312;
	Var0.f_1 = unk_0xA34E7C2A5118D638();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x74A5559828D3116B(1, &Var0, 6, iParam0);
	}
}

int func_112(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x20A20BF765914E37(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xA34E7C2A5118D638() || iParam0)
			{
				if (bParam1)
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0x59A0729D503ED758(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_113()
{
	bool bVar0;
	
	func_120(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315886 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 1;
		}
	}
	if (func_119())
	{
		return 1;
	}
	if (Global_2443300)
	{
		return 1;
	}
	if (func_118())
	{
		return 1;
	}
	if (func_117(157))
	{
		if (!func_116())
		{
			return 1;
		}
	}
	if (func_117(155))
	{
		return 1;
	}
	if (!unk_0xDC6347A8EBB9281E())
	{
		return 1;
	}
	if (func_114() != 0)
	{
		if (unk_0xCBC8FFE55DC722B5(func_114()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	switch (func_115())
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

int func_115()
{
	return Global_25115;
}

bool func_116()
{
	return Global_2433098.f_574;
}

int func_117(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_118()
{
	return Global_2441381;
}

bool func_119()
{
	return Global_2433098.f_569;
}

void func_120(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x7A9CE41589B7A19F(1))
	{
		iVar1 = unk_0x2999CB7D3B432BE9(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x74238B7708290D43(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 325:
					func_121(iVar0);
					break;
				
				case 2:
					unk_0x74238B7708290D43(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_121(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x74238B7708290D43(1, iParam0, &Var0, 3))
	{
		if (func_43(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xCF4C00513A86E840(Var0.f_1);
			if (unk_0x95CCECA3948CFE7B(uVar3))
			{
				if (unk_0x277ECDA23D8CCEB4(uVar3, 0))
				{
					uVar4 = unk_0x275BEBE583A163B5(uVar3, 0);
					if (unk_0x8AA327BE085BA8B4(uVar4, Var0.f_2) && unk_0xEE66E067C1F8D1F4())
					{
						if (func_122(uVar4, &bVar5))
						{
							unk_0x3440777B8DAAC4C1(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xEF84021B2AB5E334(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_122(var uParam0, var uParam1)
{
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(uParam0))
		{
			if (unk_0x75932C6E41A19C54(uParam0))
			{
				unk_0xFD816D0E738EB817(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x1F59F772AA90087D(uParam0, 0))
		{
			if (unk_0xFE7BCFB02217DCDF(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_124(struct<20> Param0)
{
	func_130(func_131(Param0.f_0), Param0);
	unk_0xB575A770677DC316(3);
	unk_0xC908ABD9A1B6E6E6(1);
	func_128(0, -1, 0);
	unk_0xFE7B095449D5F053(&Local_230, 22);
	unk_0x99592530153DB318(&iLocal_252, 3);
	unk_0x6ECAEE4901F465A1(0);
	if (!func_127())
	{
		func_109();
	}
	if (unk_0xE21B8C41C187AA64())
	{
		bLocal_48 = true;
	}
	func_125(62, 1);
	iLocal_252[unk_0x935FA14EDA695A82()] = 0;
}

void func_125(int iParam0, bool bParam1)
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
			Global_2097152[func_126() /*10270*/].f_7698.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_126() /*10270*/].f_7698.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_126() /*10270*/].f_7698.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_126() /*10270*/].f_7698.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_126() /*10270*/].f_7698.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_126() /*10270*/].f_7698.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_126() /*10270*/].f_7698.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_126() /*10270*/].f_7698.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_126() /*10270*/].f_7698.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_126() /*10270*/].f_7698.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_126() /*10270*/].f_7698.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_126() /*10270*/].f_7698.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_126() /*10270*/].f_7698.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_126() /*10270*/].f_7698.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_126() /*10270*/].f_7698.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_126() /*10270*/].f_7698.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_126() /*10270*/].f_7698.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_126() /*10270*/].f_7698.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_126() /*10270*/].f_7698.f_30 = iVar0;
			break;
	}
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_127()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			return 0;
		}
		if (unk_0x1228FD88C2BCDCE2())
		{
			return 1;
		}
		if (func_119())
		{
			return 0;
		}
		if (func_117(155))
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

int func_128(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_110();
			}
			else
			{
				return 0;
			}
		}
		if (!func_129())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_110();
					}
					else
					{
						return 0;
					}
				}
				if (func_119())
				{
					if (!bParam2)
					{
						func_110();
					}
					else
					{
						return 0;
					}
				}
				if (func_117(155))
				{
					if (!bParam2)
					{
						func_110();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_110();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_110();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_110();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_129()
{
	return Global_1315886;
}

void func_130(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		func_110();
	}
	unk_0x170190A515596E3F(uParam0, 0, Param1.f_16);
}

int func_131(int iParam0)
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
		
		case 65:
			return 32;
		
		case 66:
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
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 67:
			return 32;
		
		case 68:
			return 32;
		
		case 72:
			return 32;
		
		case 70:
			return 32;
		
		case 71:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 73:
			return 32;
		
		case 74:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 83:
			return 2;
		
		case 88:
			return 1;
		
		case 84:
			return 2;
		
		case 85:
			return 4;
		
		case 86:
			return 2;
		
		case 87:
			return 2;
		
		case 69:
			return 1;
		
		case 89:
			return 2;
		
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
			return 0;
		
		case 96:
			return 1;
		
		default:
	}
	return 0;
}

