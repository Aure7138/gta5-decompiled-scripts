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
	if (unk_0x63C468D583002D23())
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
		if (unk_0x63C468D583002D23())
		{
			func_86();
			func_84();
			switch (func_83(unk_0xCA1D9459B2CC7619()))
			{
				case 0:
					if (func_82() > 0)
					{
						iLocal_252[unk_0xCA1D9459B2CC7619()] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_82() == 3)
					{
						iLocal_252[unk_0xCA1D9459B2CC7619()] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0x415DF132F15085E8())
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
		if (!unk_0x51FDEF56E23A7C33())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x51FDEF56E23A7C33())
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
	return Global_1742351.f_3;
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
	if (unk_0x63C468D583002D23() && !bParam2)
	{
		if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0xCB150A8B81012128(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x049F77DED8AE0AF4(unk_0xDFD92E57E3A82E9C(unk_0x94E3E074F38DF86C(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x63C468D583002D23() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xCB150A8B81012128();
			}
			else
			{
				*uParam0 = unk_0x8F8F2E80A7DA4D64();
			}
		}
		else
		{
			*uParam0 = unk_0x94E3E074F38DF86C();
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
				if (func_10(unk_0xBE369BE1BC57A796(), 0))
				{
					func_54(3);
				}
				if (bLocal_52)
				{
					func_54(3);
				}
				if (func_8(unk_0xBE369BE1BC57A796(), 136))
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
	if (Global_1619421[iParam0 /*390*/] == iParam1)
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
		return unk_0x48B8265059381CD0(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_211, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return unk_0xCA41A00932714525(unk_0xDE2767751C03729D(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x49C2DB27EDED0049(uParam0))
	{
		return !func_13(unk_0xC7C67E717B20DA89(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0xA929B2923D14E2F8(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x45CD66F0A131E554(uParam0, 0))
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
	if (Global_2433125.f_3466)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2433125.f_3465 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2433125.f_3349[iParam0] < iParam1)
	{
		Global_2433125.f_3349[iParam0] = iParam1;
	}
	unk_0xEB79FECD9022AAF0(&(Global_2433125.f_3348), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x23E9113C762466ED(unk_0xC7C67E717B20DA89(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x841F312D66362BF7(Local_230.f_1.f_3[0 /*2*/]))
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
		if (unk_0x841F312D66362BF7(Local_230.f_1.f_3[1 /*2*/]))
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
		if (unk_0x841F312D66362BF7(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x71726B5B622E1778(false) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x43FD798CD0523B1F(iLocal_56);
		}
	}
	if (unk_0xA2D6CF086A2F622F(false) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x06EC4FFE0DCCA716(iLocal_57);
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
	
	if (!unk_0x48B8265059381CD0(Global_1364290, 0))
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
		if (!bParam4 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/] != 3)
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
			return Global_1364290.f_1;
			break;
		
		case 1:
			return Global_1364290.f_2;
			break;
		
		case 2:
			return Global_1364290.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_212;
			}
			else
			{
				return unk_0xA2D6CF086A2F622F(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_213;
			}
			else
			{
				return unk_0x71726B5B622E1778(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x9A0AB9C5586EA71E())
			{
				return Global_2421664[iVar0 /*358*/].f_214;
			}
			else
			{
				return unk_0xC124B46B968EA962(!bParam1);
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
			return Global_1364298;
			break;
		
		case 1:
			return Global_1364299;
			break;
		
		case 2:
			return Global_1364300;
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
	
	if (unk_0x841F312D66362BF7(*uParam0))
	{
		uVar0 = unk_0x03981D6F4893D7D0(*uParam0);
		unk_0x47C2619E72CEAA4F(&uVar0);
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
				if (func_34(&(Local_230.f_1), Local_230.f_1.f_1, Local_230.f_1.f_10, 0f, 1, 1, 1, 0, 0, 1, 0))
				{
					unk_0x85E61E88835AE7F5(unk_0xC7C67E717B20DA89(Local_230.f_1));
					unk_0x524A422B74847594(unk_0xC7C67E717B20DA89(Local_230.f_1), 1, 1, 0);
					unk_0x87C7282B1F6CFE6C(unk_0xC7C67E717B20DA89(Local_230.f_1));
					unk_0x46B421AC0DE69583(unk_0xC7C67E717B20DA89(Local_230.f_1), 1);
					func_33(unk_0xC7C67E717B20DA89(Local_230.f_1), 4);
					Global_2433125.f_3460 = unk_0xC7C67E717B20DA89(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0xDB0CFCA496C3FAC9(unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]), unk_0xBE369BE1BC57A796());
						func_33(unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2433125.f_3461[0] = unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0xDB0CFCA496C3FAC9(unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]), unk_0xBE369BE1BC57A796());
							func_33(unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2433125.f_3461[1] = unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0xDB0CFCA496C3FAC9(unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]), unk_0xBE369BE1BC57A796());
								func_33(unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2433125.f_3461[2] = unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]);
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
	unk_0xBA8CA9172F194131(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xC96275575DC981A9(uParam0, 5, 1);
	unk_0xC96275575DC981A9(uParam0, 3, 0);
	unk_0x2937901439E611F5(uParam0, 2);
	unk_0x8B54B100C5719325(uParam0, 1);
	unk_0x73655D4147D2FFBC(uParam0, 2);
	unk_0xE1F5F70A15CF94CB(uParam0, 1);
	unk_0x94E4AB66D79E55A5(uParam0, 1);
	unk_0x6F65279C9BC14EDB(uParam0, 1);
	unk_0x9593ABA7B045F264(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0xE5B08A5C0283C229(uParam0, 400f);
	unk_0x601DD91B5FAE848C(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x26504D4D69F462A1(uParam0, 250);
			unk_0x4B04B4FAE554FA03(uParam0, 250);
			unk_0x06B74CD245641716(uParam0, 250);
		}
	}
	else
	{
		unk_0xC6042F55A6EA17B2(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0xBE369BE1BC57A796(), 0) && !func_28())
	{
		uVar0 = Global_1574731[5];
	}
	else
	{
		uVar0 = unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D());
	}
	unk_0x3BB70315907D9456(unk_0xDE2767751C03729D(uParam0), uVar0);
}

bool func_28()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 0);
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
	if (Global_1591201[iParam0 /*602*/] == -1)
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
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2357075D7B96D56A(1))
	{
		return 0;
	}
	if (!unk_0x49C2DB27EDED0049(uParam1))
	{
		return 0;
	}
	if (!unk_0x45CD66F0A131E554(unk_0xC7C67E717B20DA89(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x60A7E0316C35C19D(unk_0x3FBC0964EB7878AF(unk_0xC7C67E717B20DA89(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(unk_0xDE2767751C03729D(*uParam0), iParam7);
		if (unk_0x04DB71A22837F85C(unk_0xDE2767751C03729D(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
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
	if (unk_0x44748DA5CF34DA5E(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x83CA0CEAC60F17F6(uParam0, "AttributeDamage");
	}
	unk_0xEB79FECD9022AAF0(&iVar0, iParam1);
	unk_0x25E9B908B35A0675(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	var uVar0;
	
	if (!unk_0x54EBD52F64A07B00(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x0668B21A0C3A4821(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x692A2891A2BA7352(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0x90C414D950E11ED7(uVar0);
	if (unk_0x49C2DB27EDED0049(*uParam0))
	{
		unk_0xBDE4C59FD939CE4E(uVar0, iParam10);
		if (unk_0x04DB71A22837F85C(uVar0))
		{
			if (bParam8)
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 1);
			}
			else
			{
				unk_0xF24AAD892C8B4AC6(*uParam0, 0);
			}
		}
		unk_0xBE993A95A7771E1E(uVar0, iParam9);
		unk_0xBF95E912FF7B9A12(uVar0, 1);
		if (bParam12)
		{
			unk_0x07D85C47233917C3(uVar0);
			unk_0x800D9F6E9FDC9680(uVar0, 5, 5, 1f);
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
	unk_0xE1324F59713746FA(iParam0);
	return unk_0x9F746898F7881612(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_53(Local_230.f_1.f_10))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
			{
				Var0 = { func_51(func_52(unk_0xBE369BE1BC57A796()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0xAC4CF7688C53AA57(Var0.f_0, Var0.f_1);
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
	Global_2404994.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x47865C56C9B1EFE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x3FDEBC0190C73055(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x3FDEBC0190C73055(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xC3CEDFD4651E42EC(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (bParam13)
	{
		if (unk_0x08A593150B122791(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
	if (fParam14 > 0f)
	{
		if (func_44(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404994.f_2++;
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
	Global_2404994.f_2++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_43(unk_0xBE369BE1BC57A796(), 1, 1))
		{
			if (!unk_0x25BD4C26D84038CD())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x3DC4639D5F23DEA2(func_52(unk_0xBE369BE1BC57A796()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam3))
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
			if (!func_40(iVar1, 0) && unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xBE369BE1BC57A796()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2421664[iVar1 /*358*/].f_262)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0xB58DEBB81964A4E9(iVar1) == unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB58DEBB81964A4E9(iVar1) != unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()))) || unk_0xB58DEBB81964A4E9(iVar1) == -1)
							{
								if (unk_0x3DC4639D5F23DEA2(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB58DEBB81964A4E9(iVar1) != iParam8 || unk_0xB58DEBB81964A4E9(iVar1) == -1)
						{
							if (unk_0x3DC4639D5F23DEA2(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x5D30227FC384014B(iVar1, Param0, fParam3))
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
	if (unk_0xF86EF5C41AFF5F1F(unk_0xDF7CE83326F434E9(iParam0)) || Global_2421664[iParam0 /*358*/].f_248)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
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
	if (Global_1315213[iVar1] == 1)
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
		if (unk_0x7268A1112372AA44(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCF7855B965948E97(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2433125.f_3[iVar0])
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
		if ((iParam8 == 1 && unk_0xBE369BE1BC57A796() != iVar1) || iParam8 == 0)
		{
			if (func_43(iVar1, bParam4, bParam5))
			{
				if (unk_0xECE6499178490DE1(unk_0xBE369BE1BC57A796(), iVar1))
				{
					if (!bParam7 || (!unk_0xCA41A00932714525(unk_0xDF7CE83326F434E9(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) != unk_0xB58DEBB81964A4E9(iVar1))) || unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1)
						{
							if (((unk_0xB58DEBB81964A4E9(unk_0xBE369BE1BC57A796()) == -1 && uParam9) && bParam6) && func_45(iVar1))
							{
							}
							else if (unk_0x23E9113C762466ED(unk_0xDF7CE83326F434E9(iVar1)))
							{
								if (unk_0x3DC4639D5F23DEA2(func_52(iVar1), Param0, 1) < fParam3)
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
	if (func_50(unk_0xBE369BE1BC57A796(), iParam0))
	{
		return 1;
	}
	Global_2482053 = { func_49(iParam0) };
	if (unk_0x2D5BDD3304DD4725(&Global_2482053))
	{
		return 1;
	}
	if (func_46(unk_0xBE369BE1BC57A796(), iParam0))
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
		return Global_1619421[iParam0 /*390*/].f_11;
	}
	return func_47();
}

struct<13> func_49(var uParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(uParam0, &Var0, 13);
	return Var0;
}

int func_50(int iParam0, var uParam1)
{
	if (unk_0x749CE7B33672D350())
	{
		Global_2482053 = { func_49(iParam0) };
		Global_2482066 = { func_49(uParam1) };
		if (unk_0x3B13D05FD2D29D80(&Global_2482053))
		{
			if (unk_0x3B13D05FD2D29D80(&Global_2482066))
			{
				unk_0x7E1D32162078314A(&Global_2481983, 35, &Global_2482053);
				unk_0x7E1D32162078314A(&Global_2482018, 35, &Global_2482066);
				if (Global_2481983 == Global_2482018)
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
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(iParam0), 0);
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
				uVar1 = unk_0xC7C67E717B20DA89(Local_230.f_1);
				if (!unk_0xA3794949321E107C(uLocal_47))
				{
					uLocal_47 = unk_0xF1FE04D602EA392E(uVar1);
					unk_0xA0BCCD5C2B5FC84F(uLocal_47, 422);
					unk_0x1441D969BF79AD61(uLocal_47, 0);
					unk_0xAAF15482D9DB27D9(uLocal_47, "MPCT_MERRY3");
					func_77(&uLocal_47, 1);
				}
				if (func_76(Local_230.f_1))
				{
					if (unk_0x093776FE2E6B4BAC(Local_230.f_1))
					{
						if (func_75())
						{
							if (!unk_0xD75E5CC38FC6AADC(uVar1))
							{
								unk_0x72F3FA2EE5BDD6A1(uVar1, 1, 0);
							}
						}
						else if (unk_0xD75E5CC38FC6AADC(uVar1))
						{
							unk_0x72F3FA2EE5BDD6A1(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x49C2DB27EDED0049(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0xCA41A00932714525(uVar0))
					{
						iVar2 = unk_0xE4C8471DA664578A(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0xCC61640A821F277C(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x85E61E88835AE7F5(uVar1);
									unk_0x524A422B74847594(uVar1, 1, 1, 0);
									if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
									{
										if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
										{
											unk_0xEBB24586B2E08B0B(uVar0, uVar1, 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_52(unk_0xBE369BE1BC57A796()), unk_0x57240623C1BC6E88(unk_0xC7C67E717B20DA89(Local_230.f_1), 1)) <= 50f)
							{
								func_58(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x49C2DB27EDED0049(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0xCA41A00932714525(uVar0))
					{
						if (!unk_0x018477A7947BC4B4(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0xCC61640A821F277C(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x49C2DB27EDED0049(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0xCA41A00932714525(uVar0))
					{
						if (!unk_0x018477A7947BC4B4(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0xCC61640A821F277C(uVar0, 0);
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
				uVar1 = unk_0xC7C67E717B20DA89(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_76(Local_230.f_1))
						{
							if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0xCC61640A821F277C(uVar0, 0);
								unk_0x15848523A8959DBC(uVar0);
								unk_0x3BB70315907D9456(uVar0, Global_1574720);
								if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
								{
									if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
									{
										unk_0xEBB24586B2E08B0B(uVar0, uVar1, 0, unk_0x17B5CC8A8615737D(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x650BB0E111420EAF(uVar0, 1);
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
						uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0x15848523A8959DBC(uVar0);
								unk_0xCC61640A821F277C(uVar0, 1);
								unk_0x650BB0E111420EAF(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_52(unk_0xBE369BE1BC57A796()), unk_0x57240623C1BC6E88(unk_0xC7C67E717B20DA89(Local_230.f_1), 1)) <= 50f)
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
						uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0x15848523A8959DBC(uVar0);
								unk_0xCC61640A821F277C(uVar0, 1);
								unk_0x650BB0E111420EAF(uVar0, 1);
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
			if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x4B04B4FAE554FA03(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x4B04B4FAE554FA03(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x093776FE2E6B4BAC(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xDE2767751C03729D(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x4B04B4FAE554FA03(uVar0, 0);
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_63())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	unk_0x660E8E7836E95077(0);
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_101700.f_2095.f_539.f_3549;
}

void func_66()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_69(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_68(unk_0x17B5CC8A8615737D());
			if (func_67(iVar0) && (!func_70(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_67(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(uParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_70(int iParam0)
{
	return Global_35781 == iParam0;
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_73()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
	if (unk_0x80BC37C67CB292E5() >= 22)
	{
		return 1;
	}
	if (unk_0x80BC37C67CB292E5() <= 6 && unk_0x80BC37C67CB292E5() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x1E76805ECF5AA8B0(uParam0))
	{
		return 1;
	}
	if (unk_0x415DF132F15085E8())
	{
		unk_0x4EDACF77CDD9CFEB(uParam0);
	}
	return 0;
}

void func_77(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA3794949321E107C(*uParam0))
	{
		uVar0 = func_78(iParam1);
		unk_0xCC930AE12D020496(*uParam0, uVar0);
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
	unk_0xE3B46F8779F1AB2E(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_79()
{
	if (unk_0xA3794949321E107C(uLocal_47))
	{
		unk_0x020DF7300725ECAB(&uLocal_47);
	}
}

void func_80()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_81(&uLocal_65, 3, unk_0xDE2767751C03729D(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(uParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(uParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(uParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(uParam2, 1);
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
		Var1 = { func_52(unk_0xBE369BE1BC57A796()) };
		fLocal_58 = unk_0xAC4CF7688C53AA57(Var1.f_0, Var1.f_1);
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
	
	Global_2433125.f_3460 = uVar0;
	Global_2433125.f_3461[0] = uVar1;
	Global_2433125.f_3461[1] = uVar1;
	Global_2433125.f_3461[2] = uVar1;
	Global_2433125.f_3465 = 0f;
	Global_2433125.f_3466 = 0;
	func_89(func_90(1, 1), 10, func_47());
	func_88();
}

void func_88()
{
	unk_0x921053BAF754303D();
}

void func_89(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 368;
	Var0.f_1 = unk_0xBE369BE1BC57A796();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x504D0D40319365B7(1, &Var0, 6, iParam0);
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
		iVar2 = unk_0x0C36F33B3F746611(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xBE369BE1BC57A796() || iParam0)
			{
				if (bParam1)
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0xEB79FECD9022AAF0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()
{
	bool bVar0;
	var uVar1;
	
	func_98(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315210 == 0)
	{
		if (!unk_0x63C468D583002D23())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2454747)
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
	if (!unk_0x6C119F3638AC7ABE())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0x82F1A060D8F4583B(func_92()) == 0)
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
	return Global_25190;
}

bool func_94()
{
	return Global_2443134.f_577;
}

int func_95(int iParam0)
{
	if (unk_0x08E5392A79D45DEE(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return Global_2452525;
}

bool func_97()
{
	return Global_2443134.f_572;
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x45FF610AA845AFAA(1))
	{
		iVar1 = unk_0x93A2B1A9173BC03D(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x91015F07066D5841(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 381:
					func_99(iVar0);
					break;
				
				case 2:
					unk_0x91015F07066D5841(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
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
	
	if (unk_0x91015F07066D5841(1, iParam0, &Var0, 3))
	{
		if (func_43(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xDF7CE83326F434E9(Var0.f_1);
			if (unk_0x23E9113C762466ED(uVar3))
			{
				if (unk_0xFD0FE723227D5AB6(uVar3, 0))
				{
					uVar4 = unk_0x60604E51E30D25B8(uVar3, 0);
					if (unk_0x4AFDA497DA0BF602(uVar4, Var0.f_2) && unk_0x9A0AB9C5586EA71E())
					{
						if (func_100(uVar4, &bVar5))
						{
							unk_0x7DCEC4E83315DC12(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x921CF98C637B0043(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (!unk_0xC26429B504BA534D(uParam0))
		{
			if (unk_0xFB2400809D8DC8C7(uParam0))
			{
				if (!unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(uParam0)))
				{
					unk_0xF0F77C99098F999B(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x45CA7F42CA715849(uParam0, 0))
		{
			if (unk_0xC38F0FBE1914783C(uParam0))
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

void func_102(struct<20> Param0)
{
	func_108(func_109(Param0.f_0), Param0);
	unk_0x06EC4FFE0DCCA716(3);
	unk_0x43FD798CD0523B1F(1);
	func_106(0, -1, 0);
	unk_0xB5EAF11213E48C1C(&Local_230, 22);
	unk_0x0C3BA36587E6FBEE(&iLocal_252, 3);
	unk_0xAA78C60F0BF0F8D4(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x51FDEF56E23A7C33())
	{
		bLocal_48 = true;
	}
	func_103(62, 1);
	iLocal_252[unk_0xCA1D9459B2CC7619()] = 0;
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
			Global_2097152[func_104() /*10758*/].f_7546.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*10758*/].f_7546.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*10758*/].f_7546.f_12 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_104() /*10758*/].f_7546.f_13 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*10758*/].f_7546.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*10758*/].f_7546.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*10758*/].f_7546.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*10758*/].f_7546.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*10758*/].f_7546.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*10758*/].f_7546.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*10758*/].f_7546.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*10758*/].f_7546.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*10758*/].f_7546.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*10758*/].f_7546.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*10758*/].f_7546.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*10758*/].f_7546.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*10758*/].f_7546.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*10758*/].f_7546.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*10758*/].f_7546.f_30 = iVar0;
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
		if (!unk_0x63C468D583002D23())
		{
			return 0;
		}
		if (unk_0xF8A920554B0F81A7())
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
	
	iVar0 = unk_0xCC130A646D137F0D();
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
				if (!unk_0x63C468D583002D23())
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
			else if (!unk_0x9AD8CE0019487D7C())
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
		iVar0 = unk_0xCC130A646D137F0D();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x63C468D583002D23())
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
	else if (!unk_0x9AD8CE0019487D7C())
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
	return Global_1315210;
}

void func_108(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x63C468D583002D23())
	{
		func_88();
	}
	unk_0x181A13B993F735EB(uParam0, 0, Param1.f_16);
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
		
		case 106:
			return 32;
		
		case 107:
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
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 113:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 116:
			return 32;
		
		case 117:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 2;
		
		case 129:
			return 1;
		
		case 125:
			return 2;
		
		case 126:
			return 4;
		
		case 127:
			return 2;
		
		case 128:
			return 2;
		
		case 110:
			return 1;
		
		case 130:
			return 2;
		
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 0;
		
		case 140:
			return 1;
		
		case 137:
			return 4;
		
		case 138:
			return 16;
		
		case 139:
			return 32;
		
		default:
	}
	return 0;
}

