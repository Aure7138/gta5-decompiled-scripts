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
	if (unk_0x27CA09C6DFAB1E79())
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
		if (unk_0x27CA09C6DFAB1E79())
		{
			func_86();
			func_84();
			switch (func_83(unk_0x43B24C247F35B6BC()))
			{
				case 0:
					if (func_82() > 0)
					{
						iLocal_252[unk_0x43B24C247F35B6BC()] = 2;
					}
					break;
				
				case 2:
					func_55();
					if (func_82() == 3)
					{
						iLocal_252[unk_0x43B24C247F35B6BC()] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (unk_0xEF0CB8FF125B9F9C())
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
		if (!unk_0x12F270E0E3ED8AA1())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x12F270E0E3ED8AA1())
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
	return Global_1758581.f_3;
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
	if (unk_0x27CA09C6DFAB1E79() && !bParam2)
	{
		if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x27CA09C6DFAB1E79() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x898811EA80D35DE2();
			}
			else
			{
				*uParam0 = unk_0x51A193745FDE917D();
			}
		}
		else
		{
			*uParam0 = unk_0x31CD6E9F83C10233();
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
				if (func_10(unk_0x3D35F9864E4640B1(), 0))
				{
					func_54(3);
				}
				if (bLocal_52)
				{
					func_54(3);
				}
				if (func_8(unk_0x3D35F9864E4640B1(), 136))
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
	if (Global_1623799[iParam0 /*488*/] == iParam1)
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
		return unk_0x2A3398C6222EB190(Global_1623799[iVar0 /*488*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x69DA17666D6E3F5A(uParam0))
	{
		return !func_13(unk_0xD7E2A160FD5DEEE1(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (unk_0x7A6C051038031EFA(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x432757A9E7AAFA96(uParam0, 0))
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
	if (Global_2434915.f_3753)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2434915.f_3752 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2434915.f_3636[iParam0] < iParam1)
	{
		Global_2434915.f_3636[iParam0] = iParam1;
	}
	unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_3635), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x76B3C79DE564AFC6(unk_0xD7E2A160FD5DEEE1(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0xAA55DF0CB38F413B(Local_230.f_1.f_3[0 /*2*/]))
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
		if (unk_0xAA55DF0CB38F413B(Local_230.f_1.f_3[1 /*2*/]))
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
		if (unk_0xAA55DF0CB38F413B(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0x35973152AB031A4F(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0x79C80114C0FC1BE7(iLocal_56);
		}
	}
	if (unk_0x9609F3F56138CB88(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x8A4541F891BF3B2B(iLocal_57);
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
	
	if (!unk_0x2A3398C6222EB190(Global_1366078, 0))
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
		if (!bParam4 && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] != 3)
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
			return Global_1366078.f_1;
			break;
		
		case 1:
			return Global_1366078.f_2;
			break;
		
		case 2:
			return Global_1366078.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x3D35F9864E4640B1();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_218;
			}
			else
			{
				return unk_0x9609F3F56138CB88(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_219;
			}
			else
			{
				return unk_0x35973152AB031A4F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x93BDC21B9F2C5E43())
			{
				return Global_2422142[iVar0 /*399*/].f_220;
			}
			else
			{
				return unk_0xEC1794D6178F34A3(!bParam1, 0);
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
			return Global_1366086;
			break;
		
		case 1:
			return Global_1366087;
			break;
		
		case 2:
			return Global_1366088;
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
	
	if (unk_0xAA55DF0CB38F413B(*uParam0))
	{
		uVar0 = unk_0xC42CA935BE72299D(*uParam0);
		unk_0x3D93C0CB2ED2E7DC(&uVar0);
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
					unk_0x6CDFA9B556069FD7(unk_0xD7E2A160FD5DEEE1(Local_230.f_1));
					unk_0x56B418F469976565(unk_0xD7E2A160FD5DEEE1(Local_230.f_1), 1, 1, 0);
					unk_0xA516DB03BDB6B4EB(unk_0xD7E2A160FD5DEEE1(Local_230.f_1));
					unk_0xF3A7713570EDCB05(unk_0xD7E2A160FD5DEEE1(Local_230.f_1), 1);
					func_33(unk_0xD7E2A160FD5DEEE1(Local_230.f_1), 4);
					Global_2434915.f_3747 = unk_0xD7E2A160FD5DEEE1(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0xE884751E9A72336E(unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]), unk_0x3D35F9864E4640B1());
						func_33(unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2434915.f_3748[0] = unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0xE884751E9A72336E(unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]), unk_0x3D35F9864E4640B1());
							func_33(unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2434915.f_3748[1] = unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0xE884751E9A72336E(unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]), unk_0x3D35F9864E4640B1());
								func_33(unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2434915.f_3748[2] = unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]);
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
	unk_0xA216B901E12D9971(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0xA8A16396F3E7CD41(uParam0, 5, 1);
	unk_0xA8A16396F3E7CD41(uParam0, 3, 0);
	unk_0x541B678DB67C7CF0(uParam0, 2);
	unk_0x49F78C32179F3B1F(uParam0, 1);
	unk_0xAA3E3C4FDE0C557C(uParam0, 2);
	unk_0xA84451B91C2933E5(uParam0, 1);
	unk_0xF5A766CC3A8142D0(uParam0, 1);
	unk_0x0EB00C68DDFABE19(uParam0, 1);
	unk_0x0B74ECD04F4F0262(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0xE2E26A800F9A6D85(uParam0, 400f);
	unk_0x19B1C76600C75750(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0x845D37CEF8F0ABAF(uParam0, 250);
			unk_0x990879ED64ED4138(uParam0, 250);
			unk_0x51290C3265C3BD04(uParam0, 250);
		}
	}
	else
	{
		unk_0xC20B73867395D06D(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0x3D35F9864E4640B1(), 0) && !func_28())
	{
		uVar0 = Global_1574745[5];
	}
	else
	{
		uVar0 = unk_0x834C6A3950A9090B(unk_0x0031992CA618A445());
	}
	unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(uParam0), uVar0);
}

bool func_28()
{
	return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
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
	if (Global_1593076[iParam0 /*647*/] == -1)
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
	return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x163F08900ED3E103(1))
	{
		return 0;
	}
	if (!unk_0x69DA17666D6E3F5A(uParam1))
	{
		return 0;
	}
	if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
		if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
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
	if (unk_0x8B0523D9EF9595C2(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x9E69E04AC6AD5C49(uParam0, "AttributeDamage");
	}
	unk_0xCD7E92DE2BFA0B0D(&iVar0, iParam1);
	unk_0x2EDC8603BB24D464(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x9447D7F8254F01B6(1))
	{
		return 0;
	}
	fVar1 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar1 = 20f;
	}
	if (bParam11)
	{
		unk_0xE882E0C18562237F(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x5129A9193468FF77(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x23812D401DEBDCBC(uVar0);
	Global_2501777.f_5805 = uVar0;
	if (unk_0x69DA17666D6E3F5A(*uParam0))
	{
		if (bParam15)
		{
			unk_0x39F4D36D9852AC7E(uVar0, 1);
		}
		unk_0x583AB626B1CF33F0(uVar0, iParam10);
		if (unk_0xAB304D33A5075BCC(uVar0))
		{
			if (bParam8)
			{
				unk_0x84143EEA447C3060(*uParam0, 1);
			}
			else
			{
				unk_0x84143EEA447C3060(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
			}
		}
		unk_0x5028E664ECBD1407(uVar0, iParam9);
		unk_0xD19E428259B86D65(uVar0, 1);
		if (bParam12)
		{
			unk_0x1F9198D3132F6E4C(uVar0);
			unk_0x4E546CD1861E7F46(uVar0, 5, 5, 1f);
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
	unk_0xBE91026C1FC72180(iParam0);
	return unk_0x772F801619C83779(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_53(Local_230.f_1.f_10))
	{
		if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
		{
			if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
			{
				Var0 = { func_51(func_52(unk_0x3D35F9864E4640B1()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0xA364CD815C1EFF05(Var0.f_0, Var0.f_1);
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
	Global_2404997.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x736668867F457F94(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xDE23154833E5D069(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xDE23154833E5D069(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xDC9A6EA41577EFB6(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (bParam13)
	{
		if (unk_0x9DC4BF239830A808(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
	if (fParam14 > 0f)
	{
		if (func_44(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2404997.f_2++;
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
	Global_2404997.f_2++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_43(unk_0x3D35F9864E4640B1(), 1, 1))
		{
			if (!unk_0x5114FCEE2A997B95())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x1410333E912D4EC6(func_52(unk_0x3D35F9864E4640B1()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xAD2B8127B12C130D(Param0, fParam3))
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
			if (!func_40(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2422142[iVar1 /*399*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
							{
								if (unk_0x1410333E912D4EC6(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam8 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
						{
							if (unk_0x1410333E912D4EC6(func_52(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x7A245394A665CEE0(iVar1, Param0, fParam3))
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
	if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3D35F9864E4640B1())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
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
	if (Global_1312833[iVar1] == 1)
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
		if (unk_0x80BA8E3CC61A8625(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x4B0365EB2D59E6FA(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2434915.f_3[iVar0])
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
		if ((iParam8 == 1 && unk_0x3D35F9864E4640B1() != iVar1) || iParam8 == 0)
		{
			if (func_43(iVar1, bParam4, bParam5))
			{
				if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
				{
					if (!bParam7 || (!unk_0x8682D8A6269E52C9(unk_0xD33F4BC17EB987E5(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) != unk_0xB5E2A107E006EC7A(iVar1))) || unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1)
						{
							if (((unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()) == -1 && uParam9) && bParam6) && func_45(iVar1))
							{
							}
							else if (unk_0x76B3C79DE564AFC6(unk_0xD33F4BC17EB987E5(iVar1)))
							{
								if (unk_0x1410333E912D4EC6(func_52(iVar1), Param0, 1) < fParam3)
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
	if (func_50(unk_0x3D35F9864E4640B1(), iParam0))
	{
		return 1;
	}
	Global_2488575 = { func_49(iParam0) };
	if (unk_0x9EC1A7C50E0AB3CF(&Global_2488575))
	{
		return 1;
	}
	if (func_46(unk_0x3D35F9864E4640B1(), iParam0))
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
		return Global_1623799[iParam0 /*488*/].f_11;
	}
	return func_47();
}

struct<13> func_49(var uParam0)
{
	struct<13> Var0;
	
	unk_0xA82433D60351864D(uParam0, &Var0, 13);
	return Var0;
}

int func_50(int iParam0, var uParam1)
{
	if (unk_0x1AE803DF5F9B30C9())
	{
		Global_2488575 = { func_49(iParam0) };
		Global_2488588 = { func_49(uParam1) };
		if (unk_0xF3F1AD16A136B115(&Global_2488575))
		{
			if (unk_0xF3F1AD16A136B115(&Global_2488588))
			{
				unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
				unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
				if (Global_2488505 == Global_2488540)
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
	return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
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
				uVar1 = unk_0xD7E2A160FD5DEEE1(Local_230.f_1);
				if (!unk_0xA761A0B6072010C8(uLocal_47))
				{
					uLocal_47 = unk_0xE80C2D6BF636C6C4(uVar1);
					unk_0x3B815A6E8530D3A5(uLocal_47, 422);
					unk_0x02C0454478A70EFA(uLocal_47, 0);
					unk_0x50B5259DFC71B8EC(uLocal_47, "MPCT_MERRY3");
					func_77(&uLocal_47, 1);
				}
				if (func_76(Local_230.f_1))
				{
					if (unk_0xA02DD6B5C8C02298(Local_230.f_1))
					{
						if (func_75())
						{
							if (!unk_0xEDF2C7C5D63A7B5F(uVar1))
							{
								unk_0x006C08F9E49140E5(uVar1, 1, 0);
							}
						}
						else if (unk_0xEDF2C7C5D63A7B5F(uVar1))
						{
							unk_0x006C08F9E49140E5(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x69DA17666D6E3F5A(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0x8682D8A6269E52C9(uVar0))
					{
						iVar2 = unk_0xA3881CD16698505B(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0xEB9B39274C401888(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0x6CDFA9B556069FD7(uVar1);
									unk_0x56B418F469976565(uVar1, 1, 1, 0);
									if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
									{
										if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
										{
											unk_0x3A7639BDA0C847F6(uVar0, uVar1, 0, unk_0x0031992CA618A445(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_52(unk_0x3D35F9864E4640B1()), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_230.f_1), 1)) <= 50f)
							{
								func_58(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x69DA17666D6E3F5A(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0x8682D8A6269E52C9(uVar0))
					{
						if (!unk_0x7B6CF729E00FFFB4(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0xEB9B39274C401888(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x69DA17666D6E3F5A(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0x8682D8A6269E52C9(uVar0))
					{
						if (!unk_0x7B6CF729E00FFFB4(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_76(Local_230.f_1))
							{
								if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0xEB9B39274C401888(uVar0, 0);
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
				uVar1 = unk_0xD7E2A160FD5DEEE1(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_76(Local_230.f_1))
						{
							if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0xEB9B39274C401888(uVar0, 0);
								unk_0xD706D9D85701BFBD(uVar0);
								unk_0x7F53E53C6F32D196(uVar0, Global_1574734);
								if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
								{
									if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
									{
										unk_0x3A7639BDA0C847F6(uVar0, uVar1, 0, unk_0x0031992CA618A445(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x390D16BCBFB23E1A(uVar0, 1);
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
						uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0xD706D9D85701BFBD(uVar0);
								unk_0xEB9B39274C401888(uVar0, 1);
								unk_0x390D16BCBFB23E1A(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_52(unk_0x3D35F9864E4640B1()), unk_0xF177E0DA126D71C8(unk_0xD7E2A160FD5DEEE1(Local_230.f_1), 1)) <= 50f)
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
						uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]);
						if (func_76(Local_230.f_1))
						{
							if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0xD706D9D85701BFBD(uVar0);
								unk_0xEB9B39274C401888(uVar0, 1);
								unk_0x390D16BCBFB23E1A(uVar0, 1);
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
			if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x990879ED64ED4138(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x990879ED64ED4138(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_76(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0xA02DD6B5C8C02298(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xECB7D3275586261E(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x990879ED64ED4138(uVar0, 0);
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
					unk_0x683F0CB6CA4C99D0(0);
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
		if (unk_0x0065EA0CBFB686EA())
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
			unk_0xD804ACF2A7171150(&Global_2313, 20);
			unk_0xD804ACF2A7171150(&Global_2314, 17);
			unk_0xD804ACF2A7171150(&Global_2315, 0);
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
			if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
			{
				if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (func_63())
				{
					return 0;
				}
				if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
				{
					return 0;
				}
				if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70785)
				{
					if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
					{
						return 0;
					}
					if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
					{
						return 0;
					}
					if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
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
				if (unk_0x2A3398C6222EB190(Global_2313, 9))
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
	unk_0x683F0CB6CA4C99D0(0);
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
	unk_0xD804ACF2A7171150(&Global_2314, 16);
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
	
	if (Global_70785)
	{
		iVar0 = 0;
		unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
		if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
	{
		if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
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
		if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
		{
			if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
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
		if (Global_70785)
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
	return Global_104439.f_2244.f_539.f_4301;
}

void func_66()
{
	int iVar0;
	
	if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
	{
		if (func_69(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
		{
			iVar0 = func_68(unk_0x0031992CA618A445());
			if (func_67(iVar0) && (!func_70(14) || Global_103390))
			{
				if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_67(Global_104439.f_2244.f_539.f_4301))
				{
					Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
				}
				Global_104439.f_2244.f_539.f_4303 = iVar0;
				Global_104439.f_2244.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104439.f_2244.f_539.f_4301 != 145)
			{
				Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
			}
			return;
		}
	}
	Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_67(int iParam0)
{
	return iParam0 < 3;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		iVar1 = unk_0xE9559A12052415BE(uParam0);
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
		return Global_104439.f_27911[iParam0 /*29*/];
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
				return Global_1354565.f_203[iParam1];
			}
			break;
	}
	return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

void func_73()
{
	unk_0x8C8894B8C4CFE97F();
	Global_16756 = 0;
	if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x683F0CB6CA4C99D0(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x0065EA0CBFB686EA())
	{
		unk_0x683F0CB6CA4C99D0(1);
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
	if (unk_0x41413FABD538FC3A() >= 22)
	{
		return 1;
	}
	if (unk_0x41413FABD538FC3A() <= 6 && unk_0x41413FABD538FC3A() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0)
{
	if (unk_0x9855654AB6D34651(uParam0))
	{
		return 1;
	}
	if (unk_0xEF0CB8FF125B9F9C())
	{
		unk_0xED8E0F2F3151048A(uParam0);
	}
	return 0;
}

void func_77(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xA761A0B6072010C8(*uParam0))
	{
		uVar0 = func_78(iParam1);
		unk_0xEB934A06DDA5027D(*uParam0, uVar0);
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
	unk_0xB922891BFD232C45(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_79()
{
	if (unk_0xA761A0B6072010C8(uLocal_47))
	{
		unk_0x0C4BDC77192798AE(&uLocal_47);
	}
}

void func_80()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_81(&uLocal_65, 3, unk_0xECB7D3275586261E(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
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
	if (!Global_70785)
	{
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x9C8949CB342B3559(uParam2, 0);
			}
			else
			{
				unk_0x9C8949CB342B3559(uParam2, 1);
			}
		}
		if (!unk_0x8682D8A6269E52C9(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x82D2A771C96871C8(uParam2, 0);
			}
			else
			{
				unk_0x82D2A771C96871C8(uParam2, 1);
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
		Var1 = { func_52(unk_0x3D35F9864E4640B1()) };
		fLocal_58 = unk_0xA364CD815C1EFF05(Var1.f_0, Var1.f_1);
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
	
	Global_2434915.f_3747 = uVar0;
	Global_2434915.f_3748[0] = uVar1;
	Global_2434915.f_3748[1] = uVar1;
	Global_2434915.f_3748[2] = uVar1;
	Global_2434915.f_3752 = 0f;
	Global_2434915.f_3753 = 0;
	func_89(func_90(1, 1), 10, func_47());
	func_88();
}

void func_88()
{
	unk_0xBEE2834559A8897A();
}

void func_89(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -380465719;
	Var0.f_1 = unk_0x3D35F9864E4640B1();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xBD257D33BCFA529A(1, &Var0, 6, iParam0);
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
		iVar2 = unk_0xA7871E29B06DA901(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
			{
				if (bParam1)
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar1);
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
	if (Global_1312830 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_2457338)
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
	if (!unk_0xE096BC82D913B3DB())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (unk_0x7832F791572D5809(func_92()) == 0)
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
	return Global_2445582.f_579;
}

int func_95(int iParam0)
{
	if (unk_0xB2481AAB46462A07(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()
{
	return Global_2455114;
}

bool func_97()
{
	return Global_2445582.f_574;
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xA97A6E008E9CF806(1))
	{
		iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -614201546:
					func_99(iVar0);
					break;
				
				case 1050640701:
					unk_0x4AE700F97F1781DC(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -959337465)
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
	
	if (unk_0x4AE700F97F1781DC(1, iParam0, &Var0, 3))
	{
		if (func_43(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xD33F4BC17EB987E5(Var0.f_1);
			if (unk_0x76B3C79DE564AFC6(uVar3))
			{
				if (unk_0x90219307C9D2728D(uVar3, 0))
				{
					uVar4 = unk_0xCFA31F1E461A6BB5(uVar3, 0);
					if (unk_0x095622A3608A0D06(uVar4, Var0.f_2) && unk_0x93BDC21B9F2C5E43())
					{
						if (func_100(uVar4, &bVar5))
						{
							unk_0xB54B438E5C15D5FB(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x28BB69BE14577487(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1)
{
	if (unk_0x76B3C79DE564AFC6(uParam0))
	{
		if (!unk_0xCC234795142FC2D2(uParam0))
		{
			if (unk_0x8D0F418585E0886B(uParam0))
			{
				if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(uParam0)))
				{
					unk_0x1581691D748490F3(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xC9FBF92709010AC3(uParam0, 0))
		{
			if (unk_0x3B077EBCBD1ABF1F(uParam0))
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
	unk_0x8A4541F891BF3B2B(3);
	unk_0x79C80114C0FC1BE7(1);
	func_106(0, -1, 0);
	unk_0x158D750851ECBBF8(&Local_230, 22);
	unk_0xC0AFA7500AD40377(&iLocal_252, 3);
	unk_0x0BDEAF4CD9510F40(0);
	if (!func_105())
	{
		func_87();
	}
	if (unk_0x12F270E0E3ED8AA1())
	{
		bLocal_48 = true;
	}
	func_103(62, 1);
	iLocal_252[unk_0x43B24C247F35B6BC()] = 0;
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
			Global_2097152[func_104() /*11035*/].f_7550.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_104() /*11035*/].f_7550.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_104() /*11035*/].f_7550.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_104() /*11035*/].f_7550.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_104() /*11035*/].f_7550.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_104() /*11035*/].f_7550.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_104() /*11035*/].f_7550.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_104() /*11035*/].f_7550.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_104() /*11035*/].f_7550.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_104() /*11035*/].f_7550.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_104() /*11035*/].f_7550.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_104() /*11035*/].f_7550.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_104() /*11035*/].f_7550.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_104() /*11035*/].f_7550.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_104() /*11035*/].f_7550.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_104() /*11035*/].f_7550.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_104() /*11035*/].f_7550.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_104() /*11035*/].f_7550.f_30 = iVar0;
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
		if (!unk_0x27CA09C6DFAB1E79())
		{
			return 0;
		}
		if (unk_0xCA641F91944A37DE())
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
	
	iVar0 = unk_0xF5343104BDF6779F();
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
				if (!unk_0x27CA09C6DFAB1E79())
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
			else if (!unk_0x8B05DA934032590D())
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
		iVar0 = unk_0xF5343104BDF6779F();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x27CA09C6DFAB1E79())
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
	else if (!unk_0x8B05DA934032590D())
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
	return Global_1312830;
}

void func_108(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x27CA09C6DFAB1E79())
	{
		func_88();
	}
	unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_109(int iParam0)
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
		
		case 112:
			return 32;
		
		case 113:
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
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 114:
			return 32;
		
		case 115:
			return 32;
		
		case 119:
			return 32;
		
		case 117:
			return 32;
		
		case 118:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 2;
		
		case 135:
			return 1;
		
		case 131:
			return 2;
		
		case 132:
			return 4;
		
		case 133:
			return 2;
		
		case 134:
			return 2;
		
		case 116:
			return 1;
		
		case 136:
			return 2;
		
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return 0;
		
		case 146:
			return 1;
		
		case 143:
			return 4;
		
		case 144:
			return 16;
		
		case 145:
			return 32;
		
		default:
	}
	return 0;
}

