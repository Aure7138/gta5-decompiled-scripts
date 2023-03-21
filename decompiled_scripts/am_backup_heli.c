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
	if (unk_0x7AF0088ABFA713B6())
	{
		func_104(ScriptParam_0);
	}
	while (true)
	{
		func_103();
		if (func_93())
		{
			func_89();
		}
		if (unk_0x7AF0088ABFA713B6())
		{
			func_88();
			func_86();
			switch (func_85(unk_0x6BAA0516CC970D99()))
			{
				case 0:
					if (func_84() > 0)
					{
						iLocal_252[unk_0x6BAA0516CC970D99()] = 2;
					}
					break;
				
				case 2:
					func_57();
					if (func_84() == 3)
					{
						iLocal_252[unk_0x6BAA0516CC970D99()] = 3;
					}
					break;
				
				case 3:
					func_89();
					break;
			}
			if (unk_0x0DE6397A2CB3EF75())
			{
				switch (func_84())
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
		if (!unk_0x2F7EEEA6378AC19B())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x2F7EEEA6378AC19B())
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
	return Global_1644659.f_3;
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
	if (unk_0x7AF0088ABFA713B6() && !bParam2)
	{
		if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0xED678C85A82F0AB9(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xC40EDFF7541407A8(unk_0xCCA9497DA4595710(unk_0x105601648511CC64(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
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
			func_56(1);
			break;
		
		case 1:
			if (func_36())
			{
				if (func_25())
				{
					func_5(&(Local_230.f_1.f_17), 0, 0);
					func_56(2);
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
					func_56(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
			{
				func_56(3);
			}
			else
			{
				if (func_6(&(Local_230.f_1.f_17)))
				{
					if (func_4(&(Local_230.f_1.f_17), 120000, 0))
					{
						func_56(3);
					}
				}
				if (func_10(unk_0xB5CEFD608600A09F(), 0))
				{
					func_56(3);
				}
				if (bLocal_52)
				{
					func_56(3);
				}
				if (func_8(unk_0xB5CEFD608600A09F(), 136))
				{
					func_56(3);
				}
			}
			break;
		
		case 3:
			func_16();
			if (!func_12(Local_230.f_1))
			{
				if ((func_11(Local_230.f_1.f_3[0 /*2*/]) && func_11(Local_230.f_1.f_3[1 /*2*/])) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			else if (func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				if (func_11(Local_230.f_1.f_3[1 /*2*/]) && func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					func_56(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

int func_8(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/] == iParam1)
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
		return unk_0xFA30DFD0084E92FE(Global_1624079[iVar0 /*558*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x7FFE36DB9042AF23(uParam0))
	{
		return unk_0x36CEFBE9B745A58D(unk_0xE48AD7BF7762E114(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x7FFE36DB9042AF23(uParam0))
	{
		return !func_13(unk_0x19D7F09C2FABDDA0(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (unk_0x1D403DFADBC2DE3C(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xE59B7F5A03335350(uParam0, 0))
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
	if (Global_2436641.f_3988)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2436641.f_3987 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2436641.f_3871[iParam0] < iParam1)
	{
		Global_2436641.f_3871[iParam0] = iParam1;
	}
	unk_0xF0059F27F7BB6680(&(Global_2436641.f_3870), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x724D816EA203A79E(unk_0x19D7F09C2FABDDA0(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x8EA6CABD14F1B89A(Local_230.f_1.f_3[0 /*2*/]))
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
		if (unk_0x8EA6CABD14F1B89A(Local_230.f_1.f_3[1 /*2*/]))
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
		if (unk_0x8EA6CABD14F1B89A(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x146F82F73FA40AB0(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0xA6E7E0EC9E48D44C(iLocal_56);
		}
	}
	if (unk_0xBC93E1C9C8F877D9(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0xD1CF2F876BAD2600(iLocal_57);
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
	
	if (!unk_0xFA30DFD0084E92FE(Global_1374943, 0))
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
		if (!bParam4 && Global_1589291[unk_0xB5CEFD608600A09F() /*770*/] != 3)
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
			return Global_1374943.f_1;
			break;
		
		case 1:
			return Global_1374943.f_2;
			break;
		
		case 2:
			return Global_1374943.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_205;
			}
			else
			{
				return unk_0xBC93E1C9C8F877D9(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_206;
			}
			else
			{
				return unk_0x146F82F73FA40AB0(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x32405B7614E36453())
			{
				return Global_2423644[iVar0 /*406*/].f_207;
			}
			else
			{
				return unk_0x2B3A16ECF7925A20(!bParam1, 0);
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
			return Global_1374951;
			break;
		
		case 1:
			return Global_1374952;
			break;
		
		case 2:
			return Global_1374953;
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
	
	if (unk_0x8EA6CABD14F1B89A(*uParam0))
	{
		uVar0 = unk_0xD14280F674B4DBF4(*uParam0);
		unk_0x91BCA7FA73FFCDF2(&uVar0);
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
					unk_0x251A179731E0D207(unk_0x19D7F09C2FABDDA0(Local_230.f_1));
					unk_0x2D655AA68FA1736B(unk_0x19D7F09C2FABDDA0(Local_230.f_1), 1, 1, 0);
					unk_0x46913653D1C7E82E(unk_0x19D7F09C2FABDDA0(Local_230.f_1));
					unk_0x73FD5B32F266E65D(unk_0x19D7F09C2FABDDA0(Local_230.f_1), 1);
					func_33(unk_0x19D7F09C2FABDDA0(Local_230.f_1), 4);
					Global_2436641.f_3982 = unk_0x19D7F09C2FABDDA0(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x77AECD1299A4E86C(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]), unk_0xB5CEFD608600A09F());
						func_33(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2436641.f_3983[0] = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x77AECD1299A4E86C(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]), unk_0xB5CEFD608600A09F());
							func_33(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2436641.f_3983[1] = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x77AECD1299A4E86C(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]), unk_0xB5CEFD608600A09F());
								func_33(unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2436641.f_3983[2] = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]);
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
	unk_0x7A853DA478E4882E(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x91629AC1E1F78419(uParam0, 5, 1);
	unk_0x91629AC1E1F78419(uParam0, 3, 0);
	unk_0x54480313BB3E8DD0(uParam0, 2);
	unk_0xE20EB9C9BC14ECEB(uParam0, 1);
	unk_0x80F51E5792576467(uParam0, 2);
	unk_0xEB061E1EBFED4D59(uParam0, 1);
	unk_0x5BF507BADF17CFE4(uParam0, 1);
	unk_0xB105531EDD3DE51B(uParam0, 1);
	unk_0x6CCBC1B22488DC0C(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0xAA40189C27870A99(uParam0, 400f);
	unk_0x86C54B1EBF2170F2(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xD62A17B791ABB06F(uParam0, 250);
			unk_0x65E471E4A2D56226(uParam0, 250, 0);
			unk_0x6BBC364B0AA788E8(uParam0, 250);
		}
	}
	else
	{
		unk_0x1E5C2A1EAB944289(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0xB5CEFD608600A09F(), 0) && !func_28())
	{
		uVar0 = Global_1574816[5];
	}
	else
	{
		uVar0 = unk_0x84788C4CA5E15BDC(unk_0xBC25C936A095B5BA());
	}
	unk_0x4106FAF8AA1D69D5(unk_0xE48AD7BF7762E114(uParam0), uVar0);
}

bool func_28()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 0);
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
	if (Global_1589291[iParam0 /*770*/] == -1)
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
	return unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x88E77A85289CC883(1))
	{
		return 0;
	}
	if (!unk_0x7FFE36DB9042AF23(uParam1))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(unk_0x19D7F09C2FABDDA0(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x5902CDB733CD6ADE(unk_0xFD8987C090669BD5(unk_0x19D7F09C2FABDDA0(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x7FFE36DB9042AF23(*uParam0))
	{
		unk_0x656194E145691D3E(unk_0xE48AD7BF7762E114(*uParam0), iParam7);
		if (unk_0x270072584099CC42(unk_0xE48AD7BF7762E114(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
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
	if (unk_0x3C03CFD5DD1E2D97(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x67CFC62D543B19EF(uParam0, "AttributeDamage");
	}
	unk_0xF0059F27F7BB6680(&iVar0, iParam1);
	unk_0x3F9FE9BB735B1604(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	var uVar1;
	
	if (!unk_0x4A09C6BA3AFA4242(iParam1))
	{
		return 0;
	}
	if (!unk_0x424470694C82EFFA(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		unk_0xEDAD35A0D81ED3FB(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	uVar1 = unk_0x61C05BF08A1E0EFE(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	if (unk_0x724D816EA203A79E(uVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(uVar1);
		Global_2519572.f_6112 = uVar1;
		if (unk_0x7FFE36DB9042AF23(*uParam0))
		{
			if (bParam15)
			{
				unk_0x03C1DBD85D4F7482(uVar1, 1);
			}
			unk_0x656194E145691D3E(uVar1, iParam10);
			if (unk_0x270072584099CC42(uVar1))
			{
				if (bParam8)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, unk_0xB5CEFD608600A09F(), 1);
				}
			}
			unk_0x8D8F52BBEE186D6D(uVar1, iParam9);
			unk_0x9E9094D4A850A6F4(uVar1, 1);
			if (bParam12)
			{
				unk_0x64B0385195B407FC(uVar1);
				unk_0x1E6686599BFBEC90(uVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0xF243B7A14FCFD0F4(iParam0);
	return unk_0xD6513D668481290A(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_55(Local_230.f_1.f_10))
	{
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
			{
				Var0 = { func_53(func_54(unk_0xB5CEFD608600A09F()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x1F18F0720B32F9D0(Var0.f_0, Var0.f_1);
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
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x38B362A95EA24163(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xAE7193AAF1ECF1DB(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xAE7193AAF1ECF1DB(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x85BF1D9693A8E47F(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (unk_0x90629C6D0C640733(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_46(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
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
	Global_2405070.f_2++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_45(unk_0xB5CEFD608600A09F(), 1, 1))
		{
			if (!unk_0x17FAADF9916EF741())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF0F2FC9DE291567F(func_43(unk_0xB5CEFD608600A09F()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x33CC9445B2DF9387(Param0, fParam3))
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
		if (func_45(iVar1, 1, 1))
		{
			if (!func_40(iVar1, 0) && unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xB5CEFD608600A09F()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2423644[iVar1 /*406*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0x343CB262BF0CDF5A(iVar1) == unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x343CB262BF0CDF5A(iVar1) != unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()))) || unk_0x343CB262BF0CDF5A(iVar1) == -1)
							{
								if (unk_0xF0F2FC9DE291567F(func_43(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x343CB262BF0CDF5A(iVar1) != iParam8 || unk_0x343CB262BF0CDF5A(iVar1) == -1)
						{
							if (unk_0xF0F2FC9DE291567F(func_43(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xCFC6F6FA0A38CF65(iVar1, Param0, fParam3))
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
	if (unk_0xE904009319A7A43E(unk_0xA95CF30C72EB526E(iParam0)) || Global_2423644[iParam0 /*406*/].f_241)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
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
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_42()
{
	return Global_1312736;
}

Vector3 func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_44() && Global_1589291[iVar0 /*770*/].f_746) && !func_55(Global_1589291[iVar0 /*770*/].f_747))
	{
		return Global_1589291[iVar0 /*770*/].f_747;
	}
	return func_54(iParam0);
}

var func_44()
{
	return Global_2447942.f_16;
}

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xB5CEFD608600A09F() != iVar1) || iParam8 == 0)
		{
			if (func_45(iVar1, bParam4, bParam5))
			{
				if (unk_0x75206900382D1E30(unk_0xB5CEFD608600A09F(), iVar1))
				{
					if (!bParam7 || (!unk_0x36CEFBE9B745A58D(unk_0xA95CF30C72EB526E(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) != unk_0x343CB262BF0CDF5A(iVar1))) || unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1)
						{
							if (((unk_0x343CB262BF0CDF5A(unk_0xB5CEFD608600A09F()) == -1 && uParam9) && bParam6) && func_47(iVar1))
							{
							}
							else if (unk_0x724D816EA203A79E(unk_0xA95CF30C72EB526E(iVar1)))
							{
								if (unk_0xF0F2FC9DE291567F(func_54(iVar1), Param0, 1) < fParam3)
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

int func_47(int iParam0)
{
	if (func_52(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	Global_2498829 = { func_51(iParam0) };
	if (unk_0xE140B7178EA00705(&Global_2498829))
	{
		return 1;
	}
	if (func_48(unk_0xB5CEFD608600A09F(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_50(iParam0);
	if (!iVar0 == func_49())
	{
		if (iVar0 == func_50(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_49()
{
	return -1;
}

int func_50(int iParam0)
{
	if (iParam0 != func_49())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_49();
}

struct<13> func_51(var uParam0)
{
	struct<13> Var0;
	
	unk_0xB7DBA2C6D2C3C41A(uParam0, &Var0, 13);
	return Var0;
}

int func_52(int iParam0, var uParam1)
{
	if (unk_0xB9ACC1154C623363())
	{
		Global_2498829 = { func_51(iParam0) };
		Global_2498842 = { func_51(uParam1) };
		if (unk_0xD7F4457CECF10121(&Global_2498829))
		{
			if (unk_0xD7F4457CECF10121(&Global_2498842))
			{
				unk_0x24723877416AAAFC(&Global_2498759, 35, &Global_2498829);
				unk_0x24723877416AAAFC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_53(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

Vector3 func_54(int iParam0)
{
	return unk_0x541C2AEF053615BC(unk_0xA95CF30C72EB526E(iParam0), 0);
}

int func_55(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_56(int iParam0)
{
	Local_230.f_1.f_2 = iParam0;
}

void func_57()
{
	func_82();
	func_58();
}

void func_58()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_230.f_1.f_2)
	{
		case 0:
			func_81();
			break;
		
		case 1:
			func_81();
			break;
		
		case 2:
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0x19D7F09C2FABDDA0(Local_230.f_1);
				if (!unk_0x2DA8CA50A72528FB(uLocal_47))
				{
					uLocal_47 = unk_0x511FE22BCF5353CD(uVar1);
					unk_0xBF0E22F3E083C33D(uLocal_47, 422);
					unk_0x222805B89367761E(uLocal_47, 0);
					unk_0x436D0272182E484D(uLocal_47, "MPCT_MERRY3");
					func_79(&uLocal_47, 1);
				}
				if (func_78(Local_230.f_1))
				{
					if (unk_0x89B5CBCE9D131B32(Local_230.f_1))
					{
						if (func_77())
						{
							if (!unk_0x27F2271641D8B012(uVar1))
							{
								unk_0x1516BB0BAE20386F(uVar1, 1, 0);
							}
						}
						else if (unk_0x27F2271641D8B012(uVar1))
						{
							unk_0x1516BB0BAE20386F(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x7FFE36DB9042AF23(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0x36CEFBE9B745A58D(uVar0))
					{
						iVar2 = unk_0x6CA135F04B190AA2(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x2E35C4FA5F0ED22F(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x251A179731E0D207(uVar1);
									unk_0x2D655AA68FA1736B(uVar1, 1, 1, 0);
									if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
									{
										if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
										{
											unk_0x143DD8A84CAA784C(uVar0, uVar1, 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_54(unk_0xB5CEFD608600A09F()), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_230.f_1), 1)) <= 50f)
							{
								func_60(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x7FFE36DB9042AF23(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0x36CEFBE9B745A58D(uVar0))
					{
						if (!unk_0x8F97799512B006B7(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x2E35C4FA5F0ED22F(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x7FFE36DB9042AF23(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0x36CEFBE9B745A58D(uVar0))
					{
						if (!unk_0x8F97799512B006B7(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x2E35C4FA5F0ED22F(uVar0, 0);
									func_26(uVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_59();
			}
			break;
		
		case 3:
			func_81();
			if (!func_6(&(Local_230.f_1.f_19)))
			{
				func_5(&(Local_230.f_1.f_19), 0, 0);
			}
			if (func_12(Local_230.f_1))
			{
				uVar1 = unk_0x19D7F09C2FABDDA0(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_78(Local_230.f_1))
						{
							if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0x2E35C4FA5F0ED22F(uVar0, 0);
								unk_0xA4E856A8CD53B8DF(uVar0);
								unk_0x4106FAF8AA1D69D5(uVar0, Global_1574801);
								if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
								{
									if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x143DD8A84CAA784C(uVar0, uVar1, 0, unk_0xBC25C936A095B5BA(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x22321800954A532E(uVar0, 1);
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
						uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]);
						if (func_78(Local_230.f_1))
						{
							if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0xA4E856A8CD53B8DF(uVar0);
								unk_0x2E35C4FA5F0ED22F(uVar0, 1);
								unk_0x22321800954A532E(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_54(unk_0xB5CEFD608600A09F()), unk_0x541C2AEF053615BC(unk_0x19D7F09C2FABDDA0(Local_230.f_1), 1)) <= 50f)
						{
							func_60(&uLocal_65, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_51 = 1;
						}
					}
				}
				if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_55 == 0)
					{
						uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]);
						if (func_78(Local_230.f_1))
						{
							if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0xA4E856A8CD53B8DF(uVar0);
								unk_0x2E35C4FA5F0ED22F(uVar0, 1);
								unk_0x22321800954A532E(uVar0, 1);
								iLocal_55 = 1;
							}
						}
					}
				}
			}
			if (!func_12(Local_230.f_1) || func_11(Local_230.f_1.f_3[0 /*2*/]))
			{
				func_59();
			}
			break;
		
		case 5:
			func_81();
			break;
	}
}

void func_59()
{
	var uVar0;
	
	if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (func_78(Local_230.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x65E471E4A2D56226(uVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_78(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x65E471E4A2D56226(uVar0, 0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_78(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x89B5CBCE9D131B32(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x65E471E4A2D56226(uVar0, 0, 0);
			}
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_76(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 1;
	return func_61(sParam2, iParam3, 0);
}

int func_61(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_75();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_73();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_66();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_65())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_64())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_63();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_62();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_75();
	}
	return 0;
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_63()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_64()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_66()
{
	if (func_72(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_67();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_67()
{
	func_68();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_68()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_71(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_70(unk_0xBC25C936A095B5BA());
			if (func_69(iVar0) && (!func_72(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_69(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(uParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_72(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_75()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_76(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_77()
{
	if (unk_0x6E06C0DB9B43570D() >= 22)
	{
		return 1;
	}
	if (unk_0x6E06C0DB9B43570D() <= 6 && unk_0x6E06C0DB9B43570D() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0)
{
	if (unk_0xDD5EE7D9FC37FA16(uParam0))
	{
		return 1;
	}
	if (unk_0x0DE6397A2CB3EF75())
	{
		unk_0xCDF25F6ADC88CCB4(uParam0);
	}
	return 0;
}

void func_79(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0x2DA8CA50A72528FB(*uParam0))
	{
		uVar0 = func_80(iParam1);
		unk_0x0D5352939CC40C16(*uParam0, uVar0);
	}
}

int func_80(int iParam0)
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
	unk_0xE45648BDBF3441F5(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_81()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_47))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_47);
	}
}

void func_82()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_83(&uLocal_65, 3, unk_0xE48AD7BF7762E114(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_49 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(uParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(uParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(uParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(uParam2, 1);
			}
		}
	}
}

int func_84()
{
	return Local_230.f_0;
}

int func_85(int iParam0)
{
	return iLocal_252[iParam0];
}

void func_86()
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
		Var1 = { func_54(unk_0xB5CEFD608600A09F()) };
		fLocal_58 = unk_0x1F18F0720B32F9D0(Var1.f_0, Var1.f_1);
		if (fLocal_58 < 85f)
		{
			fLocal_58 = 85f;
		}
		func_87(&uLocal_59);
	}
}

void func_87(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_88()
{
}

void func_89()
{
	var uVar0;
	var uVar1;
	
	Global_2436641.f_3982 = uVar0;
	Global_2436641.f_3983[0] = uVar1;
	Global_2436641.f_3983[1] = uVar1;
	Global_2436641.f_3983[2] = uVar1;
	Global_2436641.f_3987 = 0f;
	Global_2436641.f_3988 = 0;
	func_91(func_92(1, 1), 10, func_49());
	func_90();
}

void func_90()
{
	unk_0x95E4B6F3ED223F5A();
}

void func_91(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 539742369;
	Var0.f_1 = unk_0xB5CEFD608600A09F();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x38E776D9FA75679B(1, &Var0, 6, iParam0);
	}
}

int func_92(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3171C34AB3FE6F2E(iVar1);
		if (func_45(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xB5CEFD608600A09F() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0xF0059F27F7BB6680(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_93()
{
	var uVar0;
	
	func_100(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 1;
		}
	}
	if (func_99())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_98())
	{
		return 1;
	}
	if (func_97(157))
	{
		if (!func_96())
		{
			return 1;
		}
	}
	if (func_97(155))
	{
		return 1;
	}
	if (!unk_0x57D316754A262B34())
	{
		return 1;
	}
	if (func_94() != 0)
	{
		if (unk_0xB731B8C5BCE89836(func_94()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_94()
{
	switch (func_95())
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

int func_95()
{
	return Global_25277;
}

bool func_96()
{
	return Global_2447942.f_586;
}

int func_97(int iParam0)
{
	if (unk_0xA1AC399BCBEE5B2D(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return Global_2457699;
}

bool func_99()
{
	return Global_2447942.f_581;
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x432AA9CCB3EE0174(1))
	{
		iVar1 = unk_0x2BFAC254CC069912(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x414AA1932D1C88E2(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1113296425:
					func_101(iVar0);
					break;
				
				case -319074860:
					unk_0x414AA1932D1C88E2(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_101(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x414AA1932D1C88E2(1, iParam0, &Var0, 3))
	{
		if (func_45(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xA95CF30C72EB526E(Var0.f_1);
			if (unk_0x724D816EA203A79E(uVar3))
			{
				if (unk_0x5237AF95232D78C5(uVar3, 0))
				{
					uVar4 = unk_0x9FE9D386222EEE47(uVar3, 0);
					if (unk_0x403C891106DCABAF(uVar4, Var0.f_2) && unk_0x32405B7614E36453())
					{
						if (func_102(uVar4, &bVar5))
						{
							unk_0xD5DC0505375F4D00(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x1E7A09C1710FB071(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_102(var uParam0, var uParam1)
{
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (!unk_0x5CAE759AE8219D20(uParam0))
		{
			if (unk_0x63B5FF8D34CBC98E(uParam0))
			{
				if (!unk_0xFF2234981505F7F4(unk_0x6F79ECA8C83E4357(uParam0)))
				{
					unk_0x77815D3407C6700D(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xB248FAA35ED47DB9(uParam0, 0))
		{
			if (unk_0x4DF785C4DF542CD0(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_103()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_104(struct<21> Param0)
{
	func_110(func_111(Param0.f_0), Param0);
	unk_0xD1CF2F876BAD2600(3);
	unk_0xA6E7E0EC9E48D44C(1);
	func_108(0, -1, 0);
	unk_0x76AE988734CA7760(&Local_230, 22);
	unk_0xE45D6A3FD6454198(&iLocal_252, 3);
	unk_0x6C87EFD58B261C6F(0);
	if (!func_107())
	{
		func_89();
	}
	if (unk_0x2F7EEEA6378AC19B())
	{
		bLocal_48 = true;
	}
	func_105(62, 1);
	iLocal_252[unk_0x6BAA0516CC970D99()] = 0;
}

void func_105(int iParam0, bool bParam1)
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
			Global_2097152[func_106() /*12171*/].f_7688.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_106() /*12171*/].f_7688.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_106() /*12171*/].f_7688.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_106() /*12171*/].f_7688.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_106() /*12171*/].f_7688.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_106() /*12171*/].f_7688.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_106() /*12171*/].f_7688.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_106() /*12171*/].f_7688.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_106() /*12171*/].f_7688.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_106() /*12171*/].f_7688.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_106() /*12171*/].f_7688.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_106() /*12171*/].f_7688.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_106() /*12171*/].f_7688.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_106() /*12171*/].f_7688.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_106() /*12171*/].f_7688.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_106() /*12171*/].f_7688.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_106() /*12171*/].f_7688.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_106() /*12171*/].f_7688.f_30 = iVar0;
			break;
	}
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x7AF0088ABFA713B6())
		{
			return 0;
		}
		if (unk_0xB3E1B1F67FB95F04())
		{
			return 1;
		}
		if (func_99())
		{
			return 0;
		}
		if (func_97(155))
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

int func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x4796DAD7A8894E2F();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_90();
			}
			else
			{
				return 0;
			}
		}
		if (!func_109())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x7AF0088ABFA713B6())
				{
					if (!bParam2)
					{
						func_90();
					}
					else
					{
						return 0;
					}
				}
				if (func_99())
				{
					if (!bParam2)
					{
						func_90();
					}
					else
					{
						return 0;
					}
				}
				if (func_97(155))
				{
					if (!bParam2)
					{
						func_90();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xF5F5C6DD66B0FB2A())
			{
				if (!bParam2)
				{
					func_90();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x4796DAD7A8894E2F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			if (!bParam2)
			{
				func_90();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xF5F5C6DD66B0FB2A())
	{
		if (!bParam2)
		{
			func_90();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_109()
{
	return Global_1312831;
}

void func_110(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x7AF0088ABFA713B6())
	{
		func_90();
	}
	unk_0xBF463BC3D6FFDE31(uParam0, 0, Param1.f_16);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
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
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

