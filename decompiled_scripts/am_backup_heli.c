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
	if (unk_0x44243F2E2F58B8E3())
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
		if (unk_0x44243F2E2F58B8E3())
		{
			func_88();
			func_86();
			switch (func_85(unk_0xA651DA0BC9FD8FA4()))
			{
				case 0:
					if (func_84() > 0)
					{
						iLocal_252[unk_0xA651DA0BC9FD8FA4()] = 2;
					}
					break;
				
				case 2:
					func_57();
					if (func_84() == 3)
					{
						iLocal_252[unk_0xA651DA0BC9FD8FA4()] = 3;
					}
					break;
				
				case 3:
					func_89();
					break;
			}
			if (unk_0xF67B871D7588B9D9())
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
		if (!unk_0x3AB73ED02FDAC9A8())
		{
			Local_230.f_0 = 3;
		}
	}
	else if (unk_0x3AB73ED02FDAC9A8())
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
	return Global_1786353.f_3;
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
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
				if (func_10(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					func_56(3);
				}
				if (bLocal_52)
				{
					func_56(3);
				}
				if (func_8(unk_0x8CFC7D6E1DA5D304(), 136))
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
	if (Global_1627460[iParam0 /*530*/] == iParam1)
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
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 0);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_223, iParam1);
}

int func_11(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return unk_0x0FAE113CE72ED842(unk_0x5FC7C92D1FA1DAEC(uParam0));
	}
	return 1;
}

int func_12(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return !func_13(unk_0xFA62333764BA8F5D(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (unk_0x74C2FE037DFC8B4A(uParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xC4B84EB67F78C1F0(uParam0, 0))
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
	if (Global_2436169.f_3872)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
	if (Global_2436169.f_3871 >= 250f)
	{
		func_15(1, 600000);
		bLocal_52 = true;
	}
}

void func_15(int iParam0, int iParam1)
{
	if (Global_2436169.f_3755[iParam0] < iParam1)
	{
		Global_2436169.f_3755[iParam0] = iParam1;
	}
	unk_0xD2A9C3F486236CC5(&(Global_2436169.f_3754), iParam0);
}

void func_16()
{
	iLocal_56 = 0;
	iLocal_57 = 0;
	if (func_12(Local_230.f_1))
	{
		iLocal_56++;
	}
	else if (unk_0x31F12808DC47A9E5(unk_0xFA62333764BA8F5D(Local_230.f_1)))
	{
		func_24(&(Local_230.f_1));
		iLocal_56++;
	}
	if (func_11(Local_230.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x5AD42783360AB57E(Local_230.f_1.f_3[0 /*2*/]))
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
		if (unk_0x5AD42783360AB57E(Local_230.f_1.f_3[1 /*2*/]))
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
		if (unk_0x5AD42783360AB57E(Local_230.f_1.f_3[2 /*2*/]))
		{
			func_24(&(Local_230.f_1.f_3[2 /*2*/]));
			iLocal_57++;
		}
	}
	else
	{
		iLocal_57++;
	}
	if (unk_0xF569CB0E1BB35B3F(false, 0) != iLocal_56)
	{
		if (func_23(iLocal_56, 0, 1))
		{
			unk_0xC11ECDA47AB081F6(iLocal_56);
		}
	}
	if (unk_0xCEDB67795B9E5C3D(false, 0) != iLocal_57)
	{
		if (func_17(iLocal_57, 0, 1))
		{
			unk_0x0C06E0BAD395F495(iLocal_57);
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
	
	if (!unk_0xB03A1684359C50A1(Global_1368893, 0))
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
		if (!bParam4 && Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] != 3)
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
			return Global_1368893.f_1;
			break;
		
		case 1:
			return Global_1368893.f_2;
			break;
		
		case 2:
			return Global_1368893.f_3;
			break;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD8E9E28C65F6D7A9())
			{
				return Global_2422724[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0xCEDB67795B9E5C3D(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xD8E9E28C65F6D7A9())
			{
				return Global_2422724[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0xF569CB0E1BB35B3F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xD8E9E28C65F6D7A9())
			{
				return Global_2422724[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x30EDAB348146FBB4(!bParam1, 0);
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
			return Global_1368901;
			break;
		
		case 1:
			return Global_1368902;
			break;
		
		case 2:
			return Global_1368903;
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
	
	if (unk_0x5AD42783360AB57E(*uParam0))
	{
		uVar0 = unk_0x10427BA8138B7F3E(*uParam0);
		unk_0xE13BCCF275C3DEAF(&uVar0);
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
					unk_0xBCB52670CAA2819B(unk_0xFA62333764BA8F5D(Local_230.f_1));
					unk_0x0F3F86C855582784(unk_0xFA62333764BA8F5D(Local_230.f_1), 1, 1, 0);
					unk_0x2F96E5B023BC3998(unk_0xFA62333764BA8F5D(Local_230.f_1));
					unk_0xD23CDB12B08F7E7F(unk_0xFA62333764BA8F5D(Local_230.f_1), 1);
					func_33(unk_0xFA62333764BA8F5D(Local_230.f_1), 4);
					Global_2436169.f_3866 = unk_0xFA62333764BA8F5D(Local_230.f_1);
					if (func_32(&(Local_230.f_1.f_3[0 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_27(Local_230.f_1.f_3[0 /*2*/]);
						func_26(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x1CCF5143A8DA2C12(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]), unk_0x8CFC7D6E1DA5D304());
						func_33(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]), 4);
						Global_2436169.f_3867[0] = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]);
						if (func_32(&(Local_230.f_1.f_3[1 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_27(Local_230.f_1.f_3[1 /*2*/]);
							func_26(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x1CCF5143A8DA2C12(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]), unk_0x8CFC7D6E1DA5D304());
							func_33(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]), 4);
							Global_2436169.f_3867[1] = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]);
							if (func_32(&(Local_230.f_1.f_3[2 /*2*/]), Local_230.f_1, 4, Local_230.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_27(Local_230.f_1.f_3[2 /*2*/]);
								func_26(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x1CCF5143A8DA2C12(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]), unk_0x8CFC7D6E1DA5D304());
								func_33(unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]), 4);
								Global_2436169.f_3867[2] = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]);
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
	unk_0x8DC604B7C26C3641(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x273FE09AE985A00A(uParam0, 5, 1);
	unk_0x273FE09AE985A00A(uParam0, 3, 0);
	unk_0x9B78D121254B9A0D(uParam0, 2);
	unk_0x8FC929A8E84AB2A1(uParam0, 1);
	unk_0x95A918B463BA7F35(uParam0, 2);
	unk_0x1070F6BBC5E06444(uParam0, 1);
	unk_0x87BB569E1E8B1D34(uParam0, 1);
	unk_0x44EB7E24C5D75087(uParam0, 1);
	unk_0x067F16ECAED88B7F(uParam0, (fLocal_61[iParam1] + 100f));
	unk_0x1B0727CEEF75B52D(uParam0, 400f);
	unk_0xBA6265FFB77559B2(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xC64BF686A1905A3D(uParam0, 250);
			unk_0x874004759C4BE8DC(uParam0, 250);
			unk_0x03387760D3B39DD7(uParam0, 250);
		}
	}
	else
	{
		unk_0xF74B493CCF90C997(uParam0, 1);
	}
}

void func_27(var uParam0)
{
	var uVar0;
	
	if (!func_29(unk_0x8CFC7D6E1DA5D304(), 0) && !func_28())
	{
		uVar0 = Global_1574759[5];
	}
	else
	{
		uVar0 = unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4());
	}
	unk_0x641E77554763EF06(unk_0x5FC7C92D1FA1DAEC(uParam0), uVar0);
}

bool func_28()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 0);
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
	if (Global_1595681[iParam0 /*678*/] == -1)
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
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_32(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x5A27D0B71FCE8B09(1))
	{
		return 0;
	}
	if (!unk_0x49E68AAD93AADF10(uParam1))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(unk_0xFA62333764BA8F5D(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x69B3692B4761803C(unk_0xC52E83A4C0F88DAB(unk_0xFA62333764BA8F5D(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		unk_0xB05881241072FEE6(unk_0x5FC7C92D1FA1DAEC(*uParam0), iParam7);
		if (unk_0x2A7F482ED04D9A1A(unk_0x5FC7C92D1FA1DAEC(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
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
	if (unk_0x788C6B35BB3FCF53(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0xFE0F5B815FB9D3D1(uParam0, "AttributeDamage");
	}
	unk_0xD2A9C3F486236CC5(&iVar0, iParam1);
	unk_0x3259E4661D22EB25(uParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x274CFAE26B786CB6(1))
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
		unk_0xE54597236B7D8C63(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x3064CCF56C6C32BC(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x565DEBE7A0FD63C3(uVar0);
	Global_2512581.f_5849 = uVar0;
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		if (bParam15)
		{
			unk_0xFE6B55E373059E87(uVar0, 1);
		}
		unk_0xB05881241072FEE6(uVar0, iParam10);
		if (unk_0x2A7F482ED04D9A1A(uVar0))
		{
			if (bParam8)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
			}
			else
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB390A11FB93495B6(*uParam0, unk_0x8CFC7D6E1DA5D304(), 1);
			}
		}
		unk_0x0BF4E270537B1A96(uVar0, iParam9);
		unk_0xFE620BEABB8C5910(uVar0, 1);
		if (bParam12)
		{
			unk_0x4FC0DCE1F171F620(uVar0);
			unk_0xC6D32B0FDD8821E4(uVar0, 5, 5, 1f);
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
	unk_0x9016574B77A748EE(iParam0);
	return unk_0xEDFE27D1AEA0EA7F(iParam0);
}

int func_36()
{
	struct<3> Var0;
	
	if (func_55(Local_230.f_1.f_10))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				Var0 = { func_53(func_54(unk_0x8CFC7D6E1DA5D304()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_230.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x0F399CABFA44D0BD(Var0.f_0, Var0.f_1);
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
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5288FA47638BE8EE(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF00F53194FFC1443(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF00F53194FFC1443(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE9168FF5AA33FC8E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xA5E527B690D287FC(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_46(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
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
	Global_2405047.f_2++;
	return 1;
}

int func_38(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_45(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x15EE504466B7BBD3(func_43(unk_0x8CFC7D6E1DA5D304()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x6157232E032EBC56(Param0, fParam3))
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
			if (!func_40(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if ((func_39(iVar1) || !bParam10) && !Global_2422724[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x15EE504466B7BBD3(func_43(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam8 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x15EE504466B7BBD3(func_43(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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
	if (unk_0xD84C4308F24CEEE7(unk_0x6604E096142B4B55(iParam0)) || Global_2422724[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_41(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if ((func_44() && Global_1595681[iVar0 /*678*/].f_672) && !func_55(Global_1595681[iVar0 /*678*/].f_673))
	{
		return Global_1595681[iVar0 /*678*/].f_673;
	}
	return func_54(iParam0);
}

var func_44()
{
	return Global_2447128.f_16;
}

int func_45(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
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
		if ((iParam8 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam8 == 0)
		{
			if (func_45(iVar1, bParam4, bParam5))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam7 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_39(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && uParam9) && bParam6) && func_47(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								if (unk_0x15EE504466B7BBD3(func_54(iVar1), Param0, 1) < fParam3)
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
	if (func_52(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	Global_2491936 = { func_51(iParam0) };
	if (unk_0x5AA8CFBEDE9B83FC(&Global_2491936))
	{
		return 1;
	}
	if (func_48(unk_0x8CFC7D6E1DA5D304(), iParam0))
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
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_49();
}

struct<13> func_51(var uParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(uParam0, &Var0, 13);
	return Var0;
}

int func_52(int iParam0, var uParam1)
{
	if (unk_0xE906D9FB40E35957())
	{
		Global_2491936 = { func_51(iParam0) };
		Global_2491949 = { func_51(uParam1) };
		if (unk_0x9FDA5C5DFB3FE364(&Global_2491936))
		{
			if (unk_0x9FDA5C5DFB3FE364(&Global_2491949))
			{
				unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936);
				unk_0x4AEF279CFD4A57C6(&Global_2491901, 35, &Global_2491949);
				if (Global_2491866 == Global_2491901)
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
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
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
				uVar1 = unk_0xFA62333764BA8F5D(Local_230.f_1);
				if (!unk_0xE769D9B5158D0F11(uLocal_47))
				{
					uLocal_47 = unk_0xA8EDC17CEEA40DFA(uVar1);
					unk_0xDC0EBFC7730AA226(uLocal_47, 422);
					unk_0x2E9500102925D891(uLocal_47, 0);
					unk_0x61C2EC67C90074E5(uLocal_47, "MPCT_MERRY3");
					func_79(&uLocal_47, 1);
				}
				if (func_78(Local_230.f_1))
				{
					if (unk_0xA744F72A307A4982(Local_230.f_1))
					{
						if (func_77())
						{
							if (!unk_0x8373017C542FE634(uVar1))
							{
								unk_0x07CC4691366ED9F5(uVar1, 1, 0);
							}
						}
						else if (unk_0x8373017C542FE634(uVar1))
						{
							unk_0x07CC4691366ED9F5(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x49E68AAD93AADF10(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]);
					if (!unk_0x0FAE113CE72ED842(uVar0))
					{
						iVar2 = unk_0x47967752ECA20CEF(uVar1);
						if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[0 /*2*/]))
								{
									fLocal_61[0] = fLocal_58;
									unk_0x40E2910BAF39B1C7(uVar0, 1);
									func_26(uVar0, 0, 0, 0);
									unk_0xBCB52670CAA2819B(uVar1);
									unk_0x0F3F86C855582784(uVar1, 1, 1, 0);
									if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
									{
										if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
										{
											unk_0x02B347FEAD1B51DB(uVar0, uVar1, 0, unk_0x18F7BE9ACB7D08F4(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_61[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_50)
						{
							if (unk_0x2A488C176D52CCA5(func_54(unk_0x8CFC7D6E1DA5D304()), unk_0x761660F5CE986DC4(unk_0xFA62333764BA8F5D(Local_230.f_1), 1)) <= 50f)
							{
								func_60(&uLocal_65, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_50 = 1;
							}
						}
					}
				}
				if (unk_0x49E68AAD93AADF10(Local_230.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]);
					if (!unk_0x0FAE113CE72ED842(uVar0))
					{
						if (!unk_0x8E6B1A41766B5731(uVar0, 0) || fLocal_61[1] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[1 /*2*/]))
								{
									fLocal_61[1] = fLocal_58;
									unk_0x40E2910BAF39B1C7(uVar0, 0);
									func_26(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x49E68AAD93AADF10(Local_230.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]);
					if (!unk_0x0FAE113CE72ED842(uVar0))
					{
						if (!unk_0x8E6B1A41766B5731(uVar0, 0) || fLocal_61[2] != fLocal_58)
						{
							if (func_78(Local_230.f_1))
							{
								if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[2 /*2*/]))
								{
									fLocal_61[2] = fLocal_58;
									unk_0x40E2910BAF39B1C7(uVar0, 0);
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
				uVar1 = unk_0xFA62333764BA8F5D(Local_230.f_1);
				if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]);
					if (iLocal_53 == 0)
					{
						if (func_78(Local_230.f_1))
						{
							if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[0 /*2*/]))
							{
								unk_0x40E2910BAF39B1C7(uVar0, 0);
								unk_0x267F7A2DFDFFB077(uVar0);
								unk_0x641E77554763EF06(uVar0, Global_1574747);
								if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
								{
									if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
									{
										unk_0x02B347FEAD1B51DB(uVar0, uVar1, 0, unk_0x18F7BE9ACB7D08F4(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x10F31830C95ED2E5(uVar0, 1);
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
						uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]);
						if (func_78(Local_230.f_1))
						{
							if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[1 /*2*/]))
							{
								unk_0x267F7A2DFDFFB077(uVar0);
								unk_0x40E2910BAF39B1C7(uVar0, 1);
								unk_0x10F31830C95ED2E5(uVar0, 1);
								iLocal_54 = 1;
							}
						}
					}
					if (!iLocal_51)
					{
						if (unk_0x2A488C176D52CCA5(func_54(unk_0x8CFC7D6E1DA5D304()), unk_0x761660F5CE986DC4(unk_0xFA62333764BA8F5D(Local_230.f_1), 1)) <= 50f)
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
						uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]);
						if (func_78(Local_230.f_1))
						{
							if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[2 /*2*/]))
							{
								unk_0x267F7A2DFDFFB077(uVar0);
								unk_0x40E2910BAF39B1C7(uVar0, 1);
								unk_0x10F31830C95ED2E5(uVar0, 1);
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
			if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]);
				unk_0x874004759C4BE8DC(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[1 /*2*/]))
	{
		if (func_78(Local_230.f_1.f_3[1 /*2*/]))
		{
			if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[1 /*2*/]);
				unk_0x874004759C4BE8DC(uVar0, 0);
			}
		}
	}
	if (!func_11(Local_230.f_1.f_3[2 /*2*/]))
	{
		if (func_78(Local_230.f_1.f_3[2 /*2*/]))
		{
			if (unk_0xA744F72A307A4982(Local_230.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[2 /*2*/]);
				unk_0x874004759C4BE8DC(uVar0, 0);
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 1;
	return func_61(sParam2, iParam3, 0);
}

int func_61(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_74(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_73();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_66();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_65())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_63();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_62();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_63()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_64()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_67();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_67()
{
	func_68();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_68()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_71(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_70(unk_0x18F7BE9ACB7D08F4());
			if (func_69(iVar0) && (!func_72(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_69(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_72(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_75()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

void func_76(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_77()
{
	if (unk_0xF0B96EE16BA9FBE8() >= 22)
	{
		return 1;
	}
	if (unk_0xF0B96EE16BA9FBE8() <= 6 && unk_0xF0B96EE16BA9FBE8() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0)
{
	if (unk_0x9529AD13062F9853(uParam0))
	{
		return 1;
	}
	if (unk_0xF67B871D7588B9D9())
	{
		unk_0xB9A913FE4C5AD71F(uParam0);
	}
	return 0;
}

void func_79(var uParam0, int iParam1)
{
	var uVar0;
	
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		uVar0 = func_80(iParam1);
		unk_0x71925FF3194E84CE(*uParam0, uVar0);
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
	unk_0x954894782056D6CB(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_81()
{
	if (unk_0xE769D9B5158D0F11(uLocal_47))
	{
		unk_0x40D517D991458154(&uLocal_47);
	}
}

void func_82()
{
	if (!iLocal_49)
	{
		if (!func_11(Local_230.f_1.f_3[0 /*2*/]))
		{
			func_83(&uLocal_65, 3, unk_0x5FC7C92D1FA1DAEC(Local_230.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(uParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(uParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(uParam2, 1);
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
		Var1 = { func_54(unk_0x8CFC7D6E1DA5D304()) };
		fLocal_58 = unk_0x0F399CABFA44D0BD(Var1.f_0, Var1.f_1);
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
	
	Global_2436169.f_3866 = uVar0;
	Global_2436169.f_3867[0] = uVar1;
	Global_2436169.f_3867[1] = uVar1;
	Global_2436169.f_3867[2] = uVar1;
	Global_2436169.f_3871 = 0f;
	Global_2436169.f_3872 = 0;
	func_91(func_92(1, 1), 10, func_49());
	func_90();
}

void func_90()
{
	unk_0x810C5D6462DD69E6();
}

void func_91(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = -1789389079;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 6, iParam0);
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
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_45(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
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
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_99())
	{
		return 1;
	}
	if (Global_2459011)
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
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_94() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_94()) == 0)
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
	return Global_25233;
}

bool func_96()
{
	return Global_2447128.f_586;
}

int func_97(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return Global_2456781;
}

bool func_99()
{
	return Global_2447128.f_581;
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_101(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
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
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_45(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(uVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(uVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_102(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_102(var uParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(uParam0))
		{
			if (unk_0x84E7E48409E0DA9F(uParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(uParam0)))
				{
					unk_0x337F2213526139E0(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(uParam0, 0))
		{
			if (unk_0x1800B99666D25740(uParam0))
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
	unk_0x0C06E0BAD395F495(3);
	unk_0xC11ECDA47AB081F6(1);
	func_108(0, -1, 0);
	unk_0x9B457509556CB639(&Local_230, 22);
	unk_0x0D25D64240F2BAA8(&iLocal_252, 3);
	unk_0xDA6A6B59F261B209(0);
	if (!func_107())
	{
		func_89();
	}
	if (unk_0x3AB73ED02FDAC9A8())
	{
		bLocal_48 = true;
	}
	func_105(62, 1);
	iLocal_252[unk_0xA651DA0BC9FD8FA4()] = 0;
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
			Global_2097152[func_106() /*12062*/].f_7637.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_106() /*12062*/].f_7637.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_106() /*12062*/].f_7637.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_106() /*12062*/].f_7637.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_106() /*12062*/].f_7637.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_106() /*12062*/].f_7637.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_106() /*12062*/].f_7637.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_106() /*12062*/].f_7637.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_106() /*12062*/].f_7637.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_106() /*12062*/].f_7637.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_106() /*12062*/].f_7637.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_106() /*12062*/].f_7637.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_106() /*12062*/].f_7637.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_106() /*12062*/].f_7637.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_106() /*12062*/].f_7637.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_106() /*12062*/].f_7637.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_106() /*12062*/].f_7637.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_106() /*12062*/].f_7637.f_30 = iVar0;
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
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 0;
		}
		if (unk_0x593B88C1B97BDD33())
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
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
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
				if (!unk_0x44243F2E2F58B8E3())
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
			else if (!unk_0x32BCC4E6A353E146())
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
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
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
	else if (!unk_0x32BCC4E6A353E146())
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
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_90();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

