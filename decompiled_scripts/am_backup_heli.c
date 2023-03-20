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
	var uLocal_46 = 0;
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
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_113(ScriptParam_0);
	}
	while (true)
	{
		func_112();
		if (func_102())
		{
			func_97();
		}
		if (unk_0x1C6DF6AD69BE853E())
		{
			func_96();
			func_94();
			switch (func_93(unk_0x519AAFF77CC141DF()))
			{
				case 0:
					if (func_92() > 0)
					{
						iLocal_251[unk_0x519AAFF77CC141DF()] = 2;
					}
					break;
				
				case 2:
					func_50();
					if (func_92() == 3)
					{
						iLocal_251[unk_0x519AAFF77CC141DF()] = 3;
					}
					break;
				
				case 3:
					func_97();
					break;
			}
			if (unk_0x1C7D9BFDF15A02B4())
			{
				switch (func_92())
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
		if (!unk_0x9B20331E99DD1C1C())
		{
			Local_229.f_0 = 3;
		}
	}
	else if (unk_0x9B20331E99DD1C1C())
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
	return Global_1690163.f_3;
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
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
				if (func_8(unk_0x1329891157A54C63(), 0))
				{
					func_49(3);
				}
				if (bLocal_51)
				{
					func_49(3);
				}
				if (func_8(unk_0x1329891157A54C63(), 24))
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
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

int func_9(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return unk_0x5FEB513A4402FD59(unk_0xCFD52BB67CC0A98F(uParam0));
	}
	return 1;
}

int func_10(var uParam0)
{
	if (unk_0x250A8F68F67CA19A(uParam0))
	{
		return !func_11(unk_0x1D1DAF7F94D5FE77(uParam0));
	}
	return 0;
}

int func_11(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x930F8FBB8E9537CC(uParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(uParam0, 0))
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
	if (Global_2422670.f_3387)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
	if (Global_2422670.f_3386 >= 250f)
	{
		func_13(1, 600000);
		bLocal_51 = true;
	}
}

void func_13(int iParam0, int iParam1)
{
	if (Global_2422670.f_3271[iParam0] < iParam1)
	{
		Global_2422670.f_3271[iParam0] = iParam1;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_3270), iParam0);
}

void func_14()
{
	iLocal_55 = 0;
	iLocal_56 = 0;
	if (func_10(Local_229.f_1))
	{
		iLocal_55++;
	}
	else if (unk_0x86CCCD2FAE9D5E65(unk_0x1D1DAF7F94D5FE77(Local_229.f_1)))
	{
		func_22(&(Local_229.f_1));
		iLocal_55++;
	}
	if (func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (unk_0x335F574AD77E59CE(Local_229.f_1.f_3[0 /*2*/]))
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
		if (unk_0x335F574AD77E59CE(Local_229.f_1.f_3[1 /*2*/]))
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
		if (unk_0x335F574AD77E59CE(Local_229.f_1.f_3[2 /*2*/]))
		{
			func_22(&(Local_229.f_1.f_3[2 /*2*/]));
			iLocal_56++;
		}
	}
	else
	{
		iLocal_56++;
	}
	if (unk_0xD2E2B0775C0B702C(false) != iLocal_55)
	{
		if (func_21(iLocal_55, 0, 1))
		{
			unk_0xCD9A6588DBAF710A(iLocal_55);
		}
	}
	if (unk_0xE2146C98F90922C2(false) != iLocal_56)
	{
		if (func_15(iLocal_56, 0, 1))
		{
			unk_0xAADD6AD1A7B6D4E2(iLocal_56);
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
	
	if (!unk_0x236D8AD7EE179F46(Global_1344683, 0))
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
		if (!bParam4 && Global_1585045[unk_0x1329891157A54C63() /*400*/] != 3)
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
			return Global_1344683.f_1;
			break;
		
		case 1:
			return Global_1344683.f_2;
			break;
		
		case 2:
			return Global_1344683.f_3;
			break;
	}
	return 0;
}

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_206;
			}
			else
			{
				return unk_0xE2146C98F90922C2(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_207;
			}
			else
			{
				return unk_0xD2E2B0775C0B702C(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0xA360A5024482E898())
			{
				return Global_2414506[iVar0 /*255*/].f_208;
			}
			else
			{
				return unk_0xAE49493A61A9139F(!bParam1);
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
			return Global_1344691;
			break;
		
		case 1:
			return Global_1344692;
			break;
		
		case 2:
			return Global_1344693;
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
	var uVar0;
	
	if (unk_0x335F574AD77E59CE(*uParam0))
	{
		uVar0 = unk_0x262EBD0AA0ED1D6D(*uParam0);
		unk_0x3C6E68D2D7F41A39(&uVar0);
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
					unk_0x50638C188ABB218B(unk_0x1D1DAF7F94D5FE77(Local_229.f_1));
					unk_0x686D6CDC14C4BA6C(unk_0x1D1DAF7F94D5FE77(Local_229.f_1), 1, 1);
					unk_0x3729EADD1945A108(unk_0x1D1DAF7F94D5FE77(Local_229.f_1));
					unk_0x070978221B2E0085(unk_0x1D1DAF7F94D5FE77(Local_229.f_1), 1);
					func_31(unk_0x1D1DAF7F94D5FE77(Local_229.f_1), 4);
					Global_2422670.f_3381 = unk_0x1D1DAF7F94D5FE77(Local_229.f_1);
					if (func_30(&(Local_229.f_1.f_3[0 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
					{
						func_25(Local_229.f_1.f_3[0 /*2*/]);
						func_24(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]), 0, 0, 1);
						unk_0x53A2B563ABCB0B08(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]), unk_0x1329891157A54C63());
						func_31(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]), 4);
						Global_2422670.f_3382[0] = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]);
						if (func_30(&(Local_229.f_1.f_3[1 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
						{
							func_25(Local_229.f_1.f_3[1 /*2*/]);
							func_24(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]), 1, 1, 1);
							unk_0x53A2B563ABCB0B08(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]), unk_0x1329891157A54C63());
							func_31(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]), 4);
							Global_2422670.f_3382[1] = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]);
							if (func_30(&(Local_229.f_1.f_3[2 /*2*/]), Local_229.f_1, 4, Local_229.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
							{
								func_25(Local_229.f_1.f_3[2 /*2*/]);
								func_24(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]), 2, 1, 1);
								unk_0x53A2B563ABCB0B08(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]), unk_0x1329891157A54C63());
								func_31(unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]), 4);
								Global_2422670.f_3382[2] = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]);
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

void func_24(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	unk_0xA8190B0CB5814D75(uParam0, joaat("weapon_assaultrifle"), 300, 1);
	unk_0x4B9FA68A3AC8C29D(uParam0, 5, 1);
	unk_0x4B9FA68A3AC8C29D(uParam0, 3, 0);
	unk_0xA97FB3A1E6744863(uParam0, 2);
	unk_0xA161142D1C595060(uParam0, 1);
	unk_0x6D0DD3956DE3B78F(uParam0, 2);
	unk_0x632435B4905EF92E(uParam0, 1);
	unk_0x01685154DCFBC6C1(uParam0, 1);
	unk_0x33B1E568CEF14B0D(uParam0, 1);
	unk_0xA867A6CA433961B0(uParam0, (fLocal_60[iParam1] + 100f));
	unk_0x6612EA0289A77F7D(uParam0, 400f);
	unk_0xA8D1BCA296A5D380(uParam0, 10, 400f);
	if (!bParam2)
	{
		if (bParam3)
		{
			unk_0xB8B46B9698CAEA8D(uParam0, 250);
			unk_0x9765BF567DB87B5F(uParam0, 250);
			unk_0x3C0FC7EC1997D8B2(uParam0, 250);
		}
	}
	else
	{
		unk_0x210A4A0B257F8433(uParam0, 1);
	}
}

void func_25(var uParam0)
{
	var uVar0;
	
	if (!func_27(unk_0x1329891157A54C63(), 0) && !func_26())
	{
		uVar0 = Global_1574222[5];
	}
	else
	{
		uVar0 = unk_0x88594869E178AFA2(unk_0x81873881071CD9FE());
	}
	unk_0x506A601663C5417C(unk_0xCFD52BB67CC0A98F(uParam0), uVar0);
}

bool func_26()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
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
	if (Global_1585045[iParam0 /*400*/] == -1)
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
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

int func_30(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x9C32248B2352E183(1))
	{
		return 0;
	}
	if (!unk_0x250A8F68F67CA19A(uParam1))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(unk_0x1D1DAF7F94D5FE77(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x39E5853480A5C856(unk_0x4D135F3066A9BF9C(unk_0x1D1DAF7F94D5FE77(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(unk_0xCFD52BB67CC0A98F(*uParam0), iParam7);
		if (unk_0xE682D8146CB90267(unk_0xCFD52BB67CC0A98F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xCEC9D74C9FF51C8C(uParam0, "AttributeDamage"))
	{
		iVar0 = unk_0x8B4662A1D2DF932C(uParam0, "AttributeDamage");
	}
	unk_0xF3148AAF69AF9CBC(&iVar0, iParam1);
	unk_0xEAE276D4D897C5F4(uParam0, "AttributeDamage", iVar0);
}

int func_32(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x63A7F7D75B0E5FA9(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xA450601E968044DB(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0xE00F8DEA9778FC87(uParam1, Param2, fParam5, iParam7, iParam6);
	*uParam0 = unk_0x59FB930CD0E1CDFD(uVar0);
	if (unk_0x250A8F68F67CA19A(*uParam0))
	{
		unk_0xEA89E72C99125D9C(uVar0, iParam10);
		if (unk_0xE682D8146CB90267(uVar0))
		{
			if (bParam8)
			{
				unk_0xE2F4428601519A00(*uParam0, 1);
			}
			else
			{
				unk_0xE2F4428601519A00(*uParam0, 0);
			}
		}
		unk_0xF239D177F4EB07F9(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x32A12757CBF48A33(iParam0);
	return unk_0x33ACB874CECA2D4B(iParam0);
}

int func_34()
{
	struct<3> Var0;
	
	if (func_48(Local_229.f_1.f_10))
	{
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Var0 = { func_46(func_47(unk_0x1329891157A54C63()), 0f, (-200f * unk_0x0BADBFA3B172435F((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), (200f * unk_0xD0FFB162F40A139C((unk_0xBBDA792448DB5A89(Local_229.f_1.f_15) * 30f))), 0f) };
				Var0.f_2 = unk_0x006EA228B2B8764E(Var0.f_0, Var0.f_1);
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
	Global_2404607 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x8201B8E256A0E8AB(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xBAE0934DE3A0C108(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xBAE0934DE3A0C108(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2EBFC992EF940536(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404607++;
	if (bParam13)
	{
		if (unk_0x7781EEE3B32C0EBF(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404607++;
	if (fParam14 > 0f)
	{
		if (func_42(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404607++;
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
	Global_2404607++;
	return 1;
}

int func_36(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_41(unk_0x1329891157A54C63(), 1, 1))
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0D6E79537424BACE(func_47(unk_0x1329891157A54C63()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam3))
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
			if (!func_38(iVar1, 0) && unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1329891157A54C63()))
				{
					if ((func_37(iVar1) || !bParam10) && !Global_2414506[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0xCCFDB2B968281FE8(iVar1) == unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xCCFDB2B968281FE8(iVar1) != unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()))) || unk_0xCCFDB2B968281FE8(iVar1) == -1)
							{
								if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xCCFDB2B968281FE8(iVar1) != iParam8 || unk_0xCCFDB2B968281FE8(iVar1) == -1)
						{
							if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x30EC451ADA231853(iVar1, Param0, fParam3))
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
	if (unk_0x3C965174F280226D(unk_0xE495E987CB2BE7EF(iParam0)) || Global_2414506[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_38(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_39(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_40()
{
	return Global_1312729;
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
		if ((iParam8 == 1 && unk_0x1329891157A54C63() != iVar1) || iParam8 == 0)
		{
			if (func_41(iVar1, bParam4, bParam5))
			{
				if (unk_0x4F5BEB9A4097F301(unk_0x1329891157A54C63(), iVar1))
				{
					if (!bParam7 || (!unk_0x5FEB513A4402FD59(unk_0xE495E987CB2BE7EF(iVar1)) && func_37(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) != unk_0xCCFDB2B968281FE8(iVar1))) || unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1)
						{
							if (((unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63()) == -1 && uParam9) && bParam6) && func_43(iVar1))
							{
							}
							else if (unk_0x86CCCD2FAE9D5E65(unk_0xE495E987CB2BE7EF(iVar1)))
							{
								if (unk_0x0D6E79537424BACE(func_47(iVar1), Param0, 1) < fParam3)
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
	if (func_45(unk_0x1329891157A54C63(), iParam0))
	{
		return 1;
	}
	Global_2450501 = { func_44(iParam0) };
	if (unk_0x5762EE910D467202(&Global_2450501))
	{
		return 1;
	}
	return 0;
}

struct<13> func_44(var uParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(uParam0, &Var0, 13);
	return Var0;
}

int func_45(int iParam0, var uParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_44(iParam0) };
		Global_2450514 = { func_44(uParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
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
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
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
	func_90();
	func_51();
}

void func_51()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	switch (Local_229.f_1.f_2)
	{
		case 0:
			func_89();
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			if (func_10(Local_229.f_1))
			{
				uVar1 = unk_0x1D1DAF7F94D5FE77(Local_229.f_1);
				if (!unk_0xFBACB273AA628CC5(uLocal_46))
				{
					uLocal_46 = unk_0xE122DDAE9E94767B(uVar1);
					unk_0x8F827BB0F6ED7AA8(uLocal_46, 353);
					unk_0x3C8D013C840ADA0A(uLocal_46, 0);
					unk_0x2AB7C42FF2AF476D(uLocal_46, "MPCT_MERRY3");
					if (func_41(unk_0x1329891157A54C63(), 0, 1))
					{
						func_72(&uLocal_46, func_74(unk_0x1329891157A54C63(), -2, 0, 0));
					}
				}
				if (func_71(Local_229.f_1))
				{
					if (unk_0x402F3F19221FF696(Local_229.f_1))
					{
						if (func_70())
						{
							if (!unk_0x9BBC17B541EFA36D(uVar1))
							{
								unk_0x87BE2E2A9B3D94F8(uVar1, 1, 0);
							}
						}
						else if (unk_0x9BBC17B541EFA36D(uVar1))
						{
							unk_0x87BE2E2A9B3D94F8(uVar1, 0, 0);
						}
					}
				}
				if (unk_0x250A8F68F67CA19A(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]);
					if (!unk_0x5FEB513A4402FD59(uVar0))
					{
						iVar2 = unk_0x15105E9156C2695D(uVar1);
						if (iVar2 != 23 || fLocal_60[0] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[0 /*2*/]))
								{
									fLocal_60[0] = fLocal_57;
									unk_0x1D15D99A10A15334(uVar0, 1);
									func_24(uVar0, 0, 0, 0);
									unk_0x50638C188ABB218B(uVar1);
									unk_0x686D6CDC14C4BA6C(uVar1, 1, 1);
									if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
									{
										if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
										{
											unk_0x927A38D2A216C253(uVar0, uVar1, 0, unk_0x81873881071CD9FE(), 0f, 0f, 0f, 23, 20f, 40f, -1f, unk_0x11E019C8F43ACC8A(fLocal_60[0]), 10, -1082130432, 0);
										}
									}
								}
							}
						}
						if (!iLocal_49)
						{
							if (unk_0x2A488C176D52CCA5(func_47(unk_0x1329891157A54C63()), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_229.f_1), 1)) <= 50f)
							{
								func_53(&uLocal_64, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
								iLocal_49 = 1;
							}
						}
					}
				}
				if (unk_0x250A8F68F67CA19A(Local_229.f_1.f_3[1 /*2*/]))
				{
					uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]);
					if (!unk_0x5FEB513A4402FD59(uVar0))
					{
						if (!unk_0xFB9BF178E208C231(uVar0, 0) || fLocal_60[1] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[1 /*2*/]))
								{
									fLocal_60[1] = fLocal_57;
									unk_0x1D15D99A10A15334(uVar0, 0);
									func_24(uVar0, 1, 0, 0);
								}
							}
						}
					}
				}
				if (unk_0x250A8F68F67CA19A(Local_229.f_1.f_3[2 /*2*/]))
				{
					uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]);
					if (!unk_0x5FEB513A4402FD59(uVar0))
					{
						if (!unk_0xFB9BF178E208C231(uVar0, 0) || fLocal_60[2] != fLocal_57)
						{
							if (func_71(Local_229.f_1))
							{
								if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[2 /*2*/]))
								{
									fLocal_60[2] = fLocal_57;
									unk_0x1D15D99A10A15334(uVar0, 0);
									func_24(uVar0, 2, 0, 0);
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
			func_89();
			if (!func_6(&(Local_229.f_1.f_19)))
			{
				func_5(&(Local_229.f_1.f_19), 0, 0);
			}
			if (func_10(Local_229.f_1))
			{
				uVar1 = unk_0x1D1DAF7F94D5FE77(Local_229.f_1);
				if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
				{
					uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]);
					if (iLocal_52 == 0)
					{
						if (func_71(Local_229.f_1))
						{
							if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[0 /*2*/]))
							{
								unk_0x1D15D99A10A15334(uVar0, 0);
								unk_0x27CC98B7C879C320(uVar0);
								unk_0x506A601663C5417C(uVar0, Global_1574215);
								if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
								{
									if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
									{
										unk_0x927A38D2A216C253(uVar0, uVar1, 0, unk_0x81873881071CD9FE(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
										unk_0x6CB332CB31E9FA96(uVar0, 1);
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
						uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[1 /*2*/]))
							{
								unk_0x27CC98B7C879C320(uVar0);
								unk_0x1D15D99A10A15334(uVar0, 1);
								unk_0x6CB332CB31E9FA96(uVar0, 1);
								iLocal_53 = 1;
							}
						}
					}
					if (!iLocal_50)
					{
						if (unk_0x2A488C176D52CCA5(func_47(unk_0x1329891157A54C63()), unk_0xB6AE0DAE06D56288(unk_0x1D1DAF7F94D5FE77(Local_229.f_1), 1)) <= 50f)
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
						uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]);
						if (func_71(Local_229.f_1))
						{
							if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[2 /*2*/]))
							{
								unk_0x27CC98B7C879C320(uVar0);
								unk_0x1D15D99A10A15334(uVar0, 1);
								unk_0x6CB332CB31E9FA96(uVar0, 1);
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
			func_89();
			break;
	}
}

void func_52()
{
	var uVar0;
	
	if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[0 /*2*/]))
		{
			if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[0 /*2*/]))
			{
				uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]);
				unk_0x9765BF567DB87B5F(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[1 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[1 /*2*/]))
		{
			if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[1 /*2*/]))
			{
				uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[1 /*2*/]);
				unk_0x9765BF567DB87B5F(uVar0, 0);
			}
		}
	}
	if (!func_9(Local_229.f_1.f_3[2 /*2*/]))
	{
		if (func_71(Local_229.f_1.f_3[2 /*2*/]))
		{
			if (unk_0x402F3F19221FF696(Local_229.f_1.f_3[2 /*2*/]))
			{
				uVar0 = unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[2 /*2*/]);
				unk_0x9765BF567DB87B5F(uVar0, 0);
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 1;
	return func_54(sParam2, iParam3, 0);
}

int func_54(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_67(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_66();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_59();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_58())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_56();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_55();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_56()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_57()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_60();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_60()
{
	func_61();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_61()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_64(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_63(unk_0x81873881071CD9FE());
			if (func_62(iVar0) && (!func_65(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_62(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_65(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_67(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_68()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_70()
{
	if (unk_0x0C937048CF6952B5() >= 22)
	{
		return 1;
	}
	if (unk_0x0C937048CF6952B5() <= 6 && unk_0x0C937048CF6952B5() >= 0)
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0)
{
	if (unk_0xB7CA313E589A2589(uParam0))
	{
		return 1;
	}
	if (unk_0x1C7D9BFDF15A02B4())
	{
		unk_0x3A6FE26AD5BF8C2E(uParam0);
	}
	return 0;
}

void func_72(var uParam0, int iParam1)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x1B86E7A8766EA6B4(*uParam0, func_73(iParam1));
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
	var uVar0;
	
	if (func_87(iParam0))
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
	if (func_87(unk_0x1329891157A54C63()) || (func_86() && func_85()))
	{
		uVar0 = func_84();
		if (unk_0x86CCCD2FAE9D5E65(uVar0))
		{
			if (unk_0x0452D5BF20AD945A(uVar0))
			{
				if (unk_0x1B503E81E3B3D65F(uVar0) != -1)
				{
					if (func_41(unk_0x1B503E81E3B3D65F(uVar0), 0, 1))
					{
						return func_82(iParam0, unk_0x1B503E81E3B3D65F(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_75(0, -1, 0);
			}
		}
	}
	return func_82(iParam0, unk_0x1329891157A54C63(), iParam1, bParam2, bParam3);
}

int func_75(bool bParam0, int iParam1, bool bParam2)
{
	return func_76(unk_0x1329891157A54C63(), bParam0, iParam1, bParam2);
}

int func_76(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xCCFDB2B968281FE8(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_81(iVar0, iParam2, 0))
			{
				if (iVar0 == iParam2)
				{
					return func_80(1);
				}
				else
				{
					return func_80(0);
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
		return func_80(1);
	}
	return func_80(0);
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_79(iParam0, iParam1);
	if (func_78(Global_1607808.f_63421))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
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

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7296[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
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
			if (!func_81(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_80(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_81(int iParam0, int iParam1, int iParam2)
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xCCFDB2B968281FE8(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_83(iParam1, iParam0, iVar0, 0))
		{
			return func_80(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	else if ((Global_1573822 || Global_1573813) || Global_1585045[iParam0 /*400*/] == 0)
	{
		if (iParam0 == iParam1 || (Global_1573822 == 1 && Global_1573832 == 0))
		{
			return func_80(1);
		}
		else
		{
			return func_76(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573817 && Global_1573399.f_14 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && unk_0xCCFDB2B968281FE8(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == unk_0xCCFDB2B968281FE8(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xCCFDB2B968281FE8(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
	}
	return unk_0xCCFDB2B968281FE8(iParam0) == iParam2;
}

var func_84()
{
	return Global_2359301.f_2;
}

bool func_85()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 4);
}

bool func_86()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 14);
}

int func_87(int iParam0)
{
	if (func_38(iParam0, 0))
	{
		return 1;
	}
	if (func_88())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_88()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

void func_89()
{
	if (unk_0xFBACB273AA628CC5(uLocal_46))
	{
		unk_0x0A8175F24237A3D4(&uLocal_46);
	}
}

void func_90()
{
	if (!iLocal_48)
	{
		if (!func_9(Local_229.f_1.f_3[0 /*2*/]))
		{
			func_91(&uLocal_64, 3, unk_0xCFD52BB67CC0A98F(Local_229.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
			iLocal_48 = 1;
		}
	}
}

void func_91(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(uParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(uParam2, 1);
			}
		}
	}
}

int func_92()
{
	return Local_229.f_0;
}

int func_93(int iParam0)
{
	return iLocal_251[iParam0];
}

void func_94()
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
		Var1 = { func_47(unk_0x1329891157A54C63()) };
		fLocal_57 = unk_0x006EA228B2B8764E(Var1.f_0, Var1.f_1);
		if (fLocal_57 < 85f)
		{
			fLocal_57 = 85f;
		}
		func_95(&uLocal_58);
	}
}

void func_95(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_96()
{
}

void func_97()
{
	var uVar0;
	var uVar1;
	
	Global_2422670.f_3381 = uVar0;
	Global_2422670.f_3382[0] = uVar1;
	Global_2422670.f_3382[1] = uVar1;
	Global_2422670.f_3382[2] = uVar1;
	Global_2422670.f_3386 = 0f;
	Global_2422670.f_3387 = 0;
	func_99(func_101(1, 1), 10, func_100());
	func_98();
}

void func_98()
{
	unk_0xC23A229F78DAD92A();
}

void func_99(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 297;
	Var0.f_1 = unk_0x1329891157A54C63();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Var0, 6, iParam0);
	}
}

int func_100()
{
	return -1;
}

int func_101(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar1);
		if (func_41(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1329891157A54C63() || iParam0)
			{
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
				else if (!func_38(iVar2, 0))
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_102()
{
	bool bVar0;
	
	func_109(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_108())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_107())
	{
		return 1;
	}
	if (func_106(157))
	{
		if (!func_105())
		{
			return 1;
		}
	}
	if (func_106(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_103() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_103()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_103()
{
	switch (func_104())
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

int func_104()
{
	return Global_24946;
}

bool func_105()
{
	return Global_2428865.f_573;
}

int func_106(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_107()
{
	return Global_2436988;
}

bool func_108()
{
	return Global_2428865.f_568;
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_110(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_110(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_41(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(uVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(uVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_111(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_111(var uParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(uParam0))
		{
			if (unk_0x28BE3924E7CDB27F(uParam0))
			{
				unk_0xD768713E73165208(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(uParam0, 0))
		{
			if (unk_0x4D2386673BCED434(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_112()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_113(struct<20> Param0)
{
	func_119(func_120(Param0.f_0), Param0);
	unk_0xAADD6AD1A7B6D4E2(3);
	unk_0xCD9A6588DBAF710A(1);
	func_117(0, -1, 0);
	unk_0x19F630B59442E836(&Local_229, 22);
	unk_0xCBCBE0D8DD0EF168(&iLocal_251, 3);
	unk_0xE6E19E3BBABCBC24(0);
	if (!func_116())
	{
		func_97();
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		bLocal_47 = true;
	}
	func_114(62, 1);
	iLocal_251[unk_0x519AAFF77CC141DF()] = 0;
}

void func_114(int iParam0, bool bParam1)
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
			Global_2097152[func_115() /*9662*/].f_7252.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_115() /*9662*/].f_7252.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_115() /*9662*/].f_7252.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_115() /*9662*/].f_7252.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_115() /*9662*/].f_7252.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_115() /*9662*/].f_7252.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_115() /*9662*/].f_7252.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_115() /*9662*/].f_7252.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_115() /*9662*/].f_7252.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_115() /*9662*/].f_7252.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_115() /*9662*/].f_7252.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_115() /*9662*/].f_7252.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_115() /*9662*/].f_7252.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_115() /*9662*/].f_7252.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_115() /*9662*/].f_7252.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_115() /*9662*/].f_7252.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_115() /*9662*/].f_7252.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_115() /*9662*/].f_7252.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_115() /*9662*/].f_7252.f_29 = iVar0;
			break;
	}
}

int func_115()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_116()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_108())
		{
			return 0;
		}
		if (func_106(155))
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

int func_117(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_98();
			}
			else
			{
				return 0;
			}
		}
		if (!func_118())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_98();
					}
					else
					{
						return 0;
					}
				}
				if (func_108())
				{
					if (!bParam2)
					{
						func_98();
					}
					else
					{
						return 0;
					}
				}
				if (func_106(155))
				{
					if (!bParam2)
					{
						func_98();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_98();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_98();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_98();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_118()
{
	return Global_1315867;
}

void func_119(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_98();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_120(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

