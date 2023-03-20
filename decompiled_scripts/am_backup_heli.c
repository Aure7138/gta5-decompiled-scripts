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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60[3] = { 0f, 0f, 0f };
	var uLocal_64 = 16;
	var uLocal_65 = 0;
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
	struct<2> Local_229 = { 0, 0 } ;
	var uLocal_231 = 745926877;
	var uLocal_232 = 0;
	var uLocal_233 = 3;
	var uLocal_234 = 0;
	var uLocal_235 = -839953400;
	var uLocal_236 = 0;
	var uLocal_237 = -839953400;
	var uLocal_238 = 0;
	var uLocal_239 = -839953400;
	var uLocal_240 = 0;
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
	int iLocal_251[2] = { 0, 0 };
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_57 = -1f;
	if (unk_0x10FAB35428CCC9D7())
	{
		func_112(ScriptParam_0);
	}
	while (true)
	{
		func_111();
		if (func_101())
		{
			func_96();
		}
		if (unk_0x10FAB35428CCC9D7())
		{
			func_95();
			func_93();
			switch (func_92(unk_0x57A3BDDAD8E5AA0A()))
			{
				case 0:
					if (func_91() > 0)
					{
						iLocal_251[unk_0x57A3BDDAD8E5AA0A()] = 2;
					}
					break;
				
				case 2:
					func_50();
					if (func_91() == 3)
					{
						iLocal_251[unk_0x57A3BDDAD8E5AA0A()] = 3;
					}
					break;
				
				case 3:
					func_96();
					break;
			}
			if (unk_0x83CD99A1E6061AB5())
			{
				switch (func_91())
				{
					case 0:
						Local_229.f_0 = 2;
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
	if (Local_229.f_1.f_2 == 5)
	{
		Local_229.f_0 = 3;
	}
	if (func_6(&(Local_229.f_1.f_19)))
	{
		if (func_4(&(Local_229.f_1.f_19), 20000, 0))
		{
			Local_229.f_0 = 3;
		}
	}
	if (func_3())
	{
		Local_229.f_0 = 3;
	}
	if (bLocal_47)
	{
		if (!unk_0xADA24309FE08DACF())
		{
			Local_229.f_0 = 3;
		}
	}
	else if (unk_0xADA24309FE08DACF())
	{
		Local_229.f_0 = 3;
	}
	if (func_2())
	{
		Local_229.f_0 = 3;
	}
}

bool func_2()
{
	return Global_1672859.f_3;
}

bool func_3()
{
	return Global_1312418;
}

int func_4(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_5(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
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
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_49(1);
			break;
		
		case 1:
			if (func_34())
			{
				if (func_23())
				{
					func_5(&(Local_229.f_1.f_17), 0, 0);
					func_49(2);
				}
			}
			break;
		
		case 2:
			func_14();
			func_12();
			if (!func_10(Local_229.f_1))
			{
				if ((func_9(Local_229.f_1.f_3[0 /*2*/]) && func_9(Local_229.f_1.f_3[1 /*2*/])) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
			{
				func_49(3);
			}
			else
			{
				if (func_6(&(Local_229.f_1.f_17)))
				{
					if (func_4(&(Local_229.f_1.f_17), 120000, 0))
					{
						func_49(3);
					}
				}
				if (func_8(unk_0x4F8644AF03D0E0D6(), 0))
				{
					func_49(3);
				}
				if (bLocal_51)
				{
					func_49(3);
				}
			}
			break;
		
		case 3:
			func_14();
			if (!func_10(Local_229.f_1))
			{
				if ((func_9(Local_229.f_1.f_3[0 /*2*/]) && func_9(Local_229.f_1.f_3[1 /*2*/])) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			else if (func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				if (func_9(Local_229.f_1.f_3[1 /*2*/]) && func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					func_49(5);
				}
			}
			break;
		
		case 5:
			break;
	}
}

bool func_8(int iParam0, int iParam1)
{
	return unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_205, iParam1);
}

int func_9(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

int func_10(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_11(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
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

void func_12()
{
	if (Global_2421967.f_3270)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
	if (Global_2421967.f_3269 >= 250f)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
}

void func_13(int iParam0, int iParam1)
{
	if (Global_2421967.f_3156[iParam0] < iParam1)
	{
		Global_2421967.f_3156[iParam0] = iParam1;
	}
	unk_0x933D6A9EEC1BACD0(&(Global_2421967.f_3155), iParam0);
}

void func_14()
{
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (func_10(Local_229.f_1))
	{
		iLocal_55++;
	}
	else if (unk_0x7239B21A38F536BA(unk_0x367B936610BA360C(Local_229.f_1)))
	{
		func_22(&(Local_229.f_1));
		iLocal_55++;
	}
	if (func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x18A47D074708FD68(Local_229.f_1.f_3[0 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[0 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (unk_0x18A47D074708FD68(Local_229.f_1.f_3[1 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[1 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (func_9(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (unk_0x18A47D074708FD68(Local_229.f_1.f_3[2 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[2 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (unk_0xCF3A965906452031(false) != iLocal_55)
	{
		if (func_21(iLocal_55, 0, 1))
		{
			unk_0x76B02E21ED27A469(iLocal_55);
		}
	}
	if (unk_0x1F13D5AE5CB17E17(false) != iLocal_56)
	{
		if (func_15(iLocal_56, 0, 1))
		{
			unk_0xB60FEBA45333D36F(iLocal_56);
		}
	}
}

bool func_15(int iParam0, bool bParam1, bool bParam2)
{
	return func_16(0, iParam0, 1, bParam1, bParam2);
}

int func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA921AA820C25702F(Global_1334840, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_20(iParam0) - func_19(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_18(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_19(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_20(iParam0) - func_19(iParam0, 1));
		}
		if (!bParam4 && Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_17(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334840.f_1;
			break;
		
		case 1:
			return Global_1334840.f_2;
			break;
		
		case 2:
			return Global_1334840.f_3;
			break;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_206;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_207;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_208;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1);
			}
			break;
	}
	return 0;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334848;
			break;
		
		case 1:
			return Global_1334849;
			break;
		
		case 2:
			return Global_1334850;
			break;
	}
	return 0;
}

bool func_21(int iParam0, bool bParam1, bool bParam2)
{
	return func_16(1, iParam0, 1, bParam1, bParam2);
}

void func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

int func_23()
{
	if (func_33(Local_229.f_1.f_1))
	{
		if (func_33(Local_229.f_1.f_3[0 /*2*/].f_1))
		{
			if (!func_10(Local_229.f_1))
			{
				if (func_32(&(Local_229.f_1), Local_229.f_1.f_1, Local_229.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1))
				{
					unk_0xA178472EBB8AE60D(unk_0x367B936610BA360C(Local_229.f_1));
					unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_229.f_1), 1, 1);
					unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_229.f_1));
					unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_229.f_1), true);
					func_31(unk_0x367B936610BA360C(Local_229.f_1), 4);
					Global_2421967.f_3264 = unk_0x367B936610BA360C(Local_229.f_1);
					if (func_30(&(Local_229.f_1.f_3[0 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_25(Local_229.f_1.f_3[0 /*2*/]);
						func_24(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x0EDE326D47CD0F3E(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]), unk_0x4F8644AF03D0E0D6());
						func_31(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]), 4);
						Global_2421967.f_3265[0] = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]);
						if (func_30(&(Local_229.f_1.f_3[1 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_25(Local_229.f_1.f_3[1 /*2*/]);
							func_24(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x0EDE326D47CD0F3E(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]), unk_0x4F8644AF03D0E0D6());
							func_31(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]), 4);
							Global_2421967.f_3265[1] = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]);
							if (func_30(&(Local_229.f_1.f_3[2 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_25(Local_229.f_1.f_3[2 /*2*/]);
								func_24(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x0EDE326D47CD0F3E(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]), unk_0x4F8644AF03D0E0D6());
								func_31(unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]), 4);
								Global_2421967.f_3265[2] = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]);
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

void func_24(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0xB282DC6EBD803C75(iParam0, joaat("weapon_assaultrifle"), 300, true);
	unk_0x9F7794730795E019(iParam0, 5, true);
	unk_0x9F7794730795E019(iParam0, 3, false);
	unk_0x4D9CA1009AFBD057(iParam0, 2);
	unk_0xC7622C0D36B2FDA8(iParam0, 1);
	unk_0x3C606747B23E497B(iParam0, 2);
	unk_0x0703B9079823DA4A(iParam0, 1);
	unk_0x52D59AB61DDC05DD(iParam0, true);
	unk_0x63F58F7C80513AAD(iParam0, true);
	unk_0xF29CF591C4BF6CEE(iParam0, (fLocal_60[iParam1] + 100f));
	unk_0x9C74B0BC831B753A(iParam0, 400f);
	unk_0xFF41B4B141ED981C(iParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x166E7CF68597D8B5(iParam0, 250);
			unk_0x6B76DC1F3AE6E6A3(iParam0, 250);
			unk_0xCEA04D83135264CC(iParam0, 250);
		}
	}
	else
	{
		unk_0x3882114BDE571AD4(iParam0, true);
	}
}

void func_25(int iParam0)
{
	int iVar0;
	
	if (!func_27(unk_0x4F8644AF03D0E0D6(), 0) && !func_26())
	{
		iVar0 = Global_1574056[5];
	}
	else
	{
		iVar0 = unk_0x7DBDD04862D95F04(unk_0xD80958FC74E988A6());
	}
	unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(iParam0), iVar0);
}

bool func_26()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 0);
}

int func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_28(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582048[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0);
}

bool func_29(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_13.f_1, 0);
}

int func_30(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x05661B80A8C9165F(iParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xA06C969B02A97298(iParam0, "AttributeDamage");
	}
	unk_0x933D6A9EEC1BACD0(&iVar0, iParam1);
	unk_0x0CE3AA5E1CA19E10(iParam0, "AttributeDamage", iVar0);
}

int func_32(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x01C7B9B38428AEB6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam5, bParam7, bParam6);
	*uParam0 = unk_0xB4C94523F023419C(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam10);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam8)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
			else
			{
				unk_0xE05E81A888FA63C8(*uParam0, false);
			}
		}
		unk_0x67B2C79AA7FF5738(iVar0, bParam9);
		return 1;
	}
	return 0;
}

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_34()
{
	struct<3> Var0;
	
	if (func_48(Local_229.f_1.f_10))
	{
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
			{
				Var0 = { func_46(func_47(unk_0x4F8644AF03D0E0D6()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x29C24BFBED8AB8FB(Var0.f_0, Var0.f_1);
				Var0.f_2 = (Var0.f_2 + 30f);
				if (func_35(Var0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0))
				{
					Local_229.f_1.f_10 = { Var0 };
					return 1;
				}
				else
				{
					Local_229.f_1.f_15++;
					if (Local_229.f_1.f_15 >= 12)
					{
						Local_229.f_1.f_15 = 0;
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

int func_35(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_42(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_36(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

int func_36(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_41(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF1B760881820C952(func_47(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam3))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam3))
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
		if (func_41(iVar1, 1, 1))
		{
			if (!func_38(iVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_37(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(iVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x37039302F4E0A008(iVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_47(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(iVar1) != iParam8 || unk_0x37039302F4E0A008(iVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_47(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
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

int func_37(int iParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_39(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_39(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_40();
	}
	if (Global_1315875[iVar1] == 1)
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

int func_40()
{
	return Global_1312736;
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_42(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4F8644AF03D0E0D6() != iVar1) || iParam8 == 0)
		{
			if (func_41(iVar1, bParam4, bParam5))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
				{
					if (!bParam7 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(iVar1)) && func_37(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(iVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam9) && bParam6) && func_43(iVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(iVar1)))
							{
								if (unk_0xF1B760881820C952(func_47(iVar1), Param0, true) < fParam3)
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

int func_43(int iParam0)
{
	if (func_45(unk_0x4F8644AF03D0E0D6(), iParam0))
	{
		return 1;
	}
	Global_2445237 = { func_44(iParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2445237))
	{
		return 1;
	}
	return 0;
}

struct<13> func_44(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_45(int iParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2445237 = { func_44(iParam0) };
		Global_2445250 = { func_44(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2445237))
		{
			if (unk_0xB124B57F571D8F18(&Global_2445250))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2445167, 35, &Global_2445237);
				unk_0xEEE6EACBE8874FBA(&Global_2445202, 35, &Global_2445250);
				if (Global_2445167 == Global_2445202)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_46(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

Vector3 func_47(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

int func_48(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_49(int iParam0)
{
	Local_229.f_1.f_2 = iParam0;
}

void func_50()
{
	func_89();
	func_51();
}

void func_51()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_88();
			break;
		
		case 1:
			func_88();
			break;
		
		case 2:
			if (func_10(Local_229.f_1))
			{
				iVar1 = unk_0x367B936610BA360C(Local_229.f_1);
				if (!unk_0xA6DB27D19ECBB7DA(iLocal_46))
				{
					iLocal_46 = unk_0x5CDE92C702A8FCE7(iVar1);
					unk_0xDF735600A4696DAF(iLocal_46, 353);
					unk_0x75A16C3DA34F1245(iLocal_46, false);
					unk_0xEAA0FFE120D92784(iLocal_46, "MPCT_MERRY3");
					if (func_41(unk_0x4F8644AF03D0E0D6(), 0, 1))
					{
						func_72(&iLocal_46, func_74(unk_0x4F8644AF03D0E0D6(), -2, 0, 0));
					}
				}
				if (func_71(Local_229.f_1))
				{
					if (unk_0x4D36070FE0215186(Local_229.f_1))
					{
						if (func_70())
						{
							if (!unk_0xC0F97FCE55094987(iVar1))
							{
								unk_0x14E85C5EE7A4D542(iVar1, true, false);
							}
						}
						else if (unk_0xC0F97FCE55094987(iVar1))
						{
							unk_0x14E85C5EE7A4D542(iVar1, false, false);
						}
					}
				}
				if (unk_0x38CE16C96BD11344(Local_229.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]);
					if (!unk_0x84A2DD9AC37C35C1(iVar0))
					{
						iVar2 = unk_0x534AEBA6E5ED4CAB(iVar1);
						if (iVar2 != 23 || fLocal_60[0] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[0 /*2*/]))
								{
									fLocal_60[0] = fLocal_57;
									unk_0x9F8AA94D6D97DBF4(iVar0, true);
									func_24(iVar0, 0, 0, 0);
									unk_0xA178472EBB8AE60D(iVar1);
									unk_0x2497C4717C8B881E(iVar1, 1, 1);
									if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
									{
										if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
										{
											unk_0xDAD029E187A2BEB4(iVar0, iVar1, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_60[0]), 10, -1f, 0);
										}
									}
								}
							}
						}
						if (!iLocal_49)
						{
							if (unk_0x2A488C176D52CCA5(func_47(unk_0x4F8644AF03D0E0D6()), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_229.f_1), true)) <= 50f)
							{
								func_53(&uLocal_64, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_49 = 1;
							}
						}
					}
				}
				if (unk_0x38CE16C96BD11344(Local_229.f_1.f_3[1 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]);
					if (!unk_0x84A2DD9AC37C35C1(iVar0))
					{
						if (!unk_0x4859F1FC66A6278E(iVar0, 0) || fLocal_60[1] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[1 /*2*/]))
								{
									fLocal_60[1] = fLocal_57;
									unk_0x9F8AA94D6D97DBF4(iVar0, false);
									func_24(iVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x38CE16C96BD11344(Local_229.f_1.f_3[2 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]);
					if (!unk_0x84A2DD9AC37C35C1(iVar0))
					{
						if (!unk_0x4859F1FC66A6278E(iVar0, 0) || fLocal_60[2] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[2 /*2*/]))
								{
									fLocal_60[2] = fLocal_57;
									unk_0x9F8AA94D6D97DBF4(iVar0, false);
									func_24(iVar0, 2, 0, 0);
								}
							}
						}
					}
				}
			}
			if (!func_10(Local_229.f_1) || func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 3:
			func_88();
			if (!func_6(&(Local_229.f_1.f_19)))
			{
				func_5(&(Local_229.f_1.f_19), 0, 0);
			}
			if (func_10(Local_229.f_1))
			{
				iVar1 = unk_0x367B936610BA360C(Local_229.f_1);
				if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
				{
					iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]);
					if (iLocal_52 == 0)
					{
						if (func_71(Local_229.f_1))
						{
							if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[0 /*2*/]))
							{
								unk_0x9F8AA94D6D97DBF4(iVar0, false);
								unk_0xE1EF3C1216AFF2CD(iVar0);
								unk_0xC80A74AC829DDD92(iVar0, Global_1574049);
								if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
								{
									if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
									{
										unk_0xDAD029E187A2BEB4(iVar0, iVar1, 0, unk_0xD80958FC74E988A6(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1f, 0);
										unk_0x971D38760FBC02EF(iVar0, true);
										iLocal_52 = 1;
									}
								}
							}
						}
					}
				}
				if (!func_9(Local_229.f_1.f_3[1 /*2*/]))
				{
					if (iLocal_53 == 0)
					{
						iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[1 /*2*/]))
							{
								unk_0xE1EF3C1216AFF2CD(iVar0);
								unk_0x9F8AA94D6D97DBF4(iVar0, true);
								unk_0x971D38760FBC02EF(iVar0, true);
								iLocal_53 = 1;
							}
						}
					}
					if (!iLocal_50)
					{
						if (unk_0x2A488C176D52CCA5(func_47(unk_0x4F8644AF03D0E0D6()), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_229.f_1), true)) <= 50f)
						{
							func_53(&uLocal_64, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
							iLocal_50 = 1;
						}
					}
				}
				if (!func_9(Local_229.f_1.f_3[2 /*2*/]))
				{
					if (iLocal_54 == 0)
					{
						iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[2 /*2*/]))
							{
								unk_0xE1EF3C1216AFF2CD(iVar0);
								unk_0x9F8AA94D6D97DBF4(iVar0, true);
								unk_0x971D38760FBC02EF(iVar0, true);
								iLocal_54 = 1;
							}
						}
					}
				}
			}
			if (!func_10(Local_229.f_1) || func_9(Local_229.f_1.f_3[0 /*2*/]))
			{
				func_52();
			}
			break;
		
		case 5:
			func_88();
			break;
	}
}

void func_52()
{
	int iVar0;
	
	if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[0 /*2*/]))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[1 /*2*/]))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[1 /*2*/]);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x4D36070FE0215186(Local_229.f_1.f_3[2 /*2*/]))
			{
				iVar0 = unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[2 /*2*/]);
				unk_0x6B76DC1F3AE6E6A3(iVar0, 0);
			}
		}
	}
}

int func_53(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_69(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 1;
	return func_54(sParam2, iParam3, 0);
}

int func_54(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD79DEEFB53455EBA(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_68();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_67(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_66();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_59();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_58())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_57())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_56();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_55();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_68();
	}
	return 0;
}

void func_55()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_56()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_57()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_59()
{
	if (func_65(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_60();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_60()
{
	func_61();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_61()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_64(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_63(unk_0xD80958FC74E988A6());
			if (func_62(iVar0) && (!func_65(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_62(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)
{
	if (func_62(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_65(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_68()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_70()
{
	if (unk_0x25223CA6B4D20B7F() >= 22)
	{
		return 1;
	}
	if (unk_0x25223CA6B4D20B7F() <= 6 && unk_0x25223CA6B4D20B7F() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	if (unk_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		unk_0xA670B3662FAFFBD0(iParam0);
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x03D7FB09E75D6B7E(*iParam0, func_73(iParam1));
	}
}

int func_73(int iParam0)
{
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
	return 0;
}

int func_74(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_86(iParam0))
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
	if (func_86(unk_0x4F8644AF03D0E0D6()) || (func_85() && func_84()))
	{
		iVar0 = func_83();
		if (unk_0x7239B21A38F536BA(iVar0))
		{
			if (unk_0x12534C348C6CB68B(iVar0))
			{
				if (unk_0x6C0E2E0125610278(iVar0) != -1)
				{
					if (func_41(unk_0x6C0E2E0125610278(iVar0), 0, 1))
					{
						return func_81(iParam0, unk_0x6C0E2E0125610278(iVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_75(0, -1, 0);
			}
		}
	}
	return func_81(iParam0, unk_0x4F8644AF03D0E0D6(), iParam1, bParam2, bParam3);
}

int func_75(bool bParam0, int iParam1, bool bParam2)
{
	return func_76(unk_0x4F8644AF03D0E0D6(), bParam0, iParam1, bParam2);
}

int func_76(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x37039302F4E0A008(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_80(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_79(1);
				}
				else
				{
					return func_79(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_77(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_79(1);
	}
	return func_79(0);
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_78(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_78(int iParam0, int iParam1)
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
			if (!func_80(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_79(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_80(int iParam0, int iParam1)
{
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
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 0);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 1);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 2);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 4);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 5);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 6);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 8);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 9);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 10);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 12);
				
				case 1:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 13);
				
				case 2:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 14);
				
				case 3:
					return unk_0xA921AA820C25702F(Global_1601761.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x37039302F4E0A008(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_82(iParam1, iParam0, iVar0, 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1573684 || Global_1573675)
	{
		if (iParam0 == iParam1 || (Global_1573684 == 1 && Global_1573694 == 0))
		{
			return func_79(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573679 && Global_1573268.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(iParam0) == -1 && unk_0x37039302F4E0A008(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(iParam0) == unk_0x37039302F4E0A008(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x37039302F4E0A008(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x37039302F4E0A008(iParam0) == iParam2;
	}
	return unk_0x37039302F4E0A008(iParam0) == iParam2;
}

var func_83()
{
	return Global_2359301.f_2;
}

bool func_84()
{
	return unk_0xA921AA820C25702F(Global_2359301, 4);
}

bool func_85()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_31.f_18, 14);
}

int func_86(int iParam0)
{
	if (func_38(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
	{
		if (iParam0 == unk_0x4F8644AF03D0E0D6())
		{
			return 1;
		}
	}
	if (unk_0xA921AA820C25702F(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return unk_0xA921AA820C25702F(Global_2359301, 3);
}

void func_88()
{
	if (unk_0xA6DB27D19ECBB7DA(iLocal_46))
	{
		unk_0x86A652570E5F25DD(&iLocal_46);
	}
}

void func_89()
{
	if (!iLocal_48)
	{
		if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
		{
			func_90(&uLocal_64, 3, unk_0xBDCD95FC216A8B3E(Local_229.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_48 = 1;
		}
	}
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_91()
{
	return Local_229.f_0;
}

int func_92(int iParam0)
{
	return iLocal_251[iParam0];
}

void func_93()
{
	bool bVar0;
	struct<3> Var1;
	
	if (fLocal_57 == -1f)
	{
		bVar0 = true;
	}
	else if (!func_6(&uLocal_58))
	{
		func_5(&uLocal_58, 0, 0);
	}
	else if (func_4(&uLocal_58, 5000, 0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Var1 = { func_47(unk_0x4F8644AF03D0E0D6()) };
		fLocal_57 = unk_0x29C24BFBED8AB8FB(Var1.f_0, Var1.f_1);
		if (fLocal_57 < 85f)
		{
			fLocal_57 = 85f;
		}
		func_94(&uLocal_58);
	}
}

void func_94(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_95()
{
}

void func_96()
{
	var uVar0;
	var uVar1;
	
	Global_2421967.f_3264 = uVar0;
	Global_2421967.f_3265[0] = uVar1;
	Global_2421967.f_3265[1] = uVar1;
	Global_2421967.f_3265[2] = uVar1;
	Global_2421967.f_3269 = 0f;
	Global_2421967.f_3270 = 0;
	func_98(func_100(1, 1), 10, func_99());
	func_97();
}

void func_97()
{
	unk_0x1090044AD1DA76FA();
}

void func_98(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 292;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 6, iParam0);
	}
}

int func_99()
{
	return -1;
}

int func_100(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
				else if (!func_38(iVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_101()
{
	bool bVar0;
	
	func_108(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_107())
	{
		return 1;
	}
	if (Global_2436713)
	{
		return 1;
	}
	if (func_106())
	{
		return 1;
	}
	if (func_105(157))
	{
		if (!func_104())
		{
			return 1;
		}
	}
	if (func_105(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_102() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_102()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
{
	switch (func_103())
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

int func_103()
{
	return Global_24444;
}

bool func_104()
{
	return Global_2427935.f_570;
}

int func_105(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return Global_2434971;
}

bool func_107()
{
	return Global_2427935.f_565;
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_109(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_109(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_110(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_110(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_111()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_112(struct<20> Param0)
{
	func_118(func_119(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(3);
	unk_0x76B02E21ED27A469(1);
	func_116(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_229, 22);
	unk_0x3364AA97340CA215(&iLocal_251, 3);
	unk_0xAA391C728106F7AF(false);
	if (!func_115())
	{
		func_96();
	}
	if (unk_0xADA24309FE08DACF())
	{
		bLocal_47 = true;
	}
	func_113(62, 1);
	iLocal_251[unk_0x57A3BDDAD8E5AA0A()] = 0;
}

void func_113(int iParam0, bool bParam1)
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
			Global_2097152[func_114() /*8053*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_114() /*8053*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_114() /*8053*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_114() /*8053*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_114() /*8053*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_114() /*8053*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_114() /*8053*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_114() /*8053*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_114() /*8053*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_114() /*8053*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_114() /*8053*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_114() /*8053*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_114() /*8053*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_114() /*8053*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_114() /*8053*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_114() /*8053*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_114() /*8053*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_114() /*8053*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_114() /*8053*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_107())
		{
			return 0;
		}
		if (func_105(155))
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

int func_116(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
		if (!func_117())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_107())
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
				if (func_105(155))
				{
					if (!bParam2)
					{
						func_97();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_97();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_97();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_97();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_117()
{
	return Global_1315872;
}

void func_118(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_97();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_119(int iParam0)
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
		
		case 36:
			return 32;
		
		case 37:
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
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

