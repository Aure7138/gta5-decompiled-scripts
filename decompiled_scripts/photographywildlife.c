#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 10;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_103 = 20;
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
	var uLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	bool bLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	struct<3> Local_237 = { 0, 0, 0 } ;
	struct<3> Local_240 = { 0, 0, 0 } ;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	int iLocal_256 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	Local_237 = { 0f, 0f, 0f };
	Local_240 = { Local_237 };
	Local_243 = { Local_237 };
	iLocal_248 = 3;
	iLocal_253 = 24818;
	iLocal_256 = 24816;
	if (unk_0x7547D7CF93115D6D(178))
	{
		unk_0x883793591E631A3B();
	}
	func_77();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!func_76())
		{
			unk_0x883793591E631A3B();
		}
		if (func_75(0))
		{
			unk_0x883793591E631A3B();
		}
		if (func_74(14))
		{
			unk_0x883793591E631A3B();
		}
		if ((!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 0) && func_69() == 1) && !func_68())
		{
			func_1();
		}
		else
		{
			unk_0x883793591E631A3B();
		}
	}
}

void func_1()
{
	switch (iLocal_246)
	{
		case 0:
			func_44();
			func_40();
			func_32();
			func_30();
			func_21();
			if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 1) && !bLocal_233)
			{
				iLocal_246++;
			}
			break;
		
		case 1:
			if (func_17(&uLocal_227) > 5f)
			{
				if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 3))
				{
					func_14(28, iLocal_81[20], 1);
					func_7(28);
					unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 3);
					func_5(63, 1);
					iLocal_246++;
				}
			}
			break;
		
		case 2:
			if (func_3(63))
			{
				iLocal_246++;
			}
			break;
		
		case 3:
			unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 0);
			func_2();
			break;
	}
}

int func_2()
{
	if (func_75(0))
	{
		return 0;
	}
	if (Global_89823.f_8)
	{
		if (Global_89823.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_89823.f_10 > 1)
	{
		return 0;
	}
	Global_89823.f_10++;
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(iParam0, 0);
}

bool func_4(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_18338[iParam0], iParam1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_4(iParam0, 0))
		{
			func_6(iParam0, 1, 0);
			func_6(iParam0, 2, 0);
			func_6(iParam0, 3, 0);
			func_6(iParam0, 4, 0);
			func_6(iParam0, 0, 1);
			Global_66960[iParam0] = 1;
		}
	}
	else
	{
		func_6(iParam0, 0, 0);
	}
}

void func_6(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_44976[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_44976[iVar0 /*203*/].f_10[(Global_44976[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_44976[iVar0 /*203*/].f_9 - 1);
	if (!Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_35966[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_8(1, Global_35966[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_35966[iVar1 /*12*/].f_3)
		{
			case 0:
				func_8(0, Global_35966[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_8(1, Global_35966[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_8(2, Global_35966[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_44976[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_8(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x3574DD38C5FAC832())
	{
		return;
	}
	iVar0 = func_69();
	bVar1 = false;
	StringCopy(&cVar2, func_11(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x82FD00B995993186("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x82FD00B995993186("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x82FD00B995993186("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x82FD00B995993186(sParam3);
				if (!unk_0x8FA72E132AAFA62F(iParam4))
				{
					unk_0x923B18EB34FC2117(iParam4);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam5))
				{
					unk_0x923B18EB34FC2117(iParam5);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam6))
				{
					unk_0x923B18EB34FC2117(iParam6);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam7))
				{
					unk_0x923B18EB34FC2117(iParam7);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam8))
				{
					unk_0x923B18EB34FC2117(iParam8);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam9))
				{
					unk_0x923B18EB34FC2117(iParam9);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam10))
				{
					unk_0x923B18EB34FC2117(iParam10);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam11))
				{
					unk_0x923B18EB34FC2117(iParam11);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam12))
				{
					unk_0x923B18EB34FC2117(iParam12);
				}
				if (!unk_0x8FA72E132AAFA62F(iParam13))
				{
					unk_0x923B18EB34FC2117(iParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_9(unk_0x054BCC5519168683(&cVar2, &cVar2, 0, 2, unk_0xB0EEA0615087D74B(func_10(iParam1)), 0));
		}
		else
		{
			func_9(unk_0x054BCC5519168683("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xB0EEA0615087D74B(func_10(iParam1)), 0));
		}
		switch (Global_14393)
		{
			case 0:
				StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
				Global_35958++;
				if (Global_35958 > 16)
				{
					Global_35958 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
				Global_35960++;
				if (Global_35960 > 16)
				{
					Global_35960 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
				Global_35959++;
				if (Global_35959 > 16)
				{
					Global_35959 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x84795EA8F54230A1(-1, "Notification", &Global_14382, 1);
	}
}

void func_9(var uParam0)
{
	Global_35961[Global_35965] = uParam0;
	Global_16750 = 1;
	Global_16749 = uParam0;
	Global_35965++;
	if (Global_35965 == 3)
	{
		Global_35965 = 0;
	}
}

char* func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_11(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[0 /*29*/].f_7));
		
		case 1:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[1 /*29*/].f_7));
		
		case 2:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[2 /*29*/].f_7));
		
		case 7:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[12 /*29*/].f_7));
		
		case 4:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[60 /*29*/].f_7));
		
		case 6:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[62 /*29*/].f_7));
		
		case 3:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[14 /*29*/].f_7));
		
		case 16:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[97 /*29*/].f_7));
		
		case 19:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[99 /*29*/].f_7));
		
		case 15:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[15 /*29*/].f_7));
		
		case 26:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[30 /*29*/].f_7));
		
		case 27:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[17 /*29*/].f_7));
		
		case 29:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[20 /*29*/].f_7));
		
		case 30:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[43 /*29*/].f_7));
		
		case 31:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[44 /*29*/].f_7));
		
		case 32:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[19 /*29*/].f_7));
		
		case 34:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[40 /*29*/].f_7));
		
		case 36:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[22 /*29*/].f_7));
		
		case 38:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[122 /*29*/].f_7));
		
		case 40:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[125 /*29*/].f_7));
		
		case 41:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[113 /*29*/].f_7));
		
		case 42:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[126 /*29*/].f_7));
		
		case 43:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[127 /*29*/].f_7));
		
		case 44:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[124 /*29*/].f_7));
		
		case 45:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[114 /*29*/].f_7));
		
		case 46:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[115 /*29*/].f_7));
		
		case 47:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[116 /*29*/].f_7));
		
		case 48:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[123 /*29*/].f_7));
		
		case 49:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[117 /*29*/].f_7));
		
		case 50:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[118 /*29*/].f_7));
		
		case 51:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[119 /*29*/].f_7));
		
		case 52:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[120 /*29*/].f_7));
		
		case 53:
			return unk_0xB0EEA0615087D74B(&(Global_97173.f_29699[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_12(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_44976[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_44976[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_44976[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

int func_14(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_16(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_44976[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_44976[iVar0 /*203*/].f_2 = iParam0;
	Global_44976[iVar0 /*203*/].f_10[Global_44976[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_44976[iVar0 /*203*/].f_10[Global_44976[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_44976[iVar0 /*203*/].f_10[Global_44976[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_44976[iVar0 /*203*/].f_9++;
	if (Global_44976[iVar0 /*203*/].f_3 == 4)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_44976[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_44976[iVar0 /*203*/].f_4[iVar1] == Global_35966[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		Global_44976[iVar0 /*203*/].f_4[Global_44976[iVar0 /*203*/].f_3] = Global_35966[iParam1 /*12*/].f_3;
		Global_44976[iVar0 /*203*/].f_3++;
	}
	if (Global_44976[iVar0 /*203*/].f_3 == 4)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_44976[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_44976[iVar0 /*203*/].f_4[iVar1] == Global_35966[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		Global_44976[iVar0 /*203*/].f_4[Global_44976[iVar0 /*203*/].f_3] = Global_35966[iParam1 /*12*/].f_2;
		Global_44976[iVar0 /*203*/].f_3++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_44976[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_44976[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_44976[iVar0 /*203*/].f_4[iVar1], Global_44976[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_39231[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_39231[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_12(Global_35966[iVar20 /*12*/].f_1) };
		if (Global_35966[iVar20 /*12*/].f_2 == iParam0 && !Global_35966[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_35966[iVar20 /*12*/].f_2;
		iVar0 = Global_44614[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_44614[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35958 = (Global_35958 - 1);
						if (Global_35958 < 0)
						{
							Global_35958 = 0;
						}
						break;
					
					case 1:
						Global_35959 = (Global_35959 - 1);
						if (Global_35959 < 0)
						{
							Global_35959 = 0;
						}
						break;
					
					case 2:
						Global_35960 = (Global_35960 - 1);
						if (Global_35960 < 0)
						{
							Global_35960 = 0;
						}
						break;
					}
				}
		}
		Global_44614[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_44614[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_44614[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44614[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_44614[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44614[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_44614[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_44614[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_35958 = (Global_35958 - 1);
						if (Global_35958 < 0)
						{
							Global_35958 = 0;
						}
						break;
					
					case 1:
						Global_35959 = (Global_35959 - 1);
						if (Global_35959 < 0)
						{
							Global_35959 = 0;
						}
						break;
					
					case 2:
						Global_35960 = (Global_35960 - 1);
						if (Global_35960 < 0)
						{
							Global_35960 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_44976[iVar24 /*203*/].f_1 == iParam1 && Global_44976[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_44614[iParam0 /*120*/].f_18[iVar0] = Global_44976[iVar23 /*203*/].f_1;
		Global_44614[iParam0 /*120*/].f_1[iVar0] = (Global_44976[iVar23 /*203*/].f_9 - 1);
		Global_44614[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_44614[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_44614[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_44614[iParam0 /*120*/]++;
		iVar25 = Global_44614[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_44976[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_35966[iVar26 /*12*/].f_2;
		if (Global_44976[iVar23 /*203*/].f_10[(Global_44976[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_44976[iVar23 /*203*/].f_10[(Global_44976[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_12(Global_35966[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_44614[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_8(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_8(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_8(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_8(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_44976[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_44976[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_44976[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_44976[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_44976[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_44976[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_44976[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_44976[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_44614[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_44614[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_44614[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_44614[iVar6 /*120*/].f_18[iVar8] == Global_44976[iVar4 /*203*/].f_1)
							{
								if (Global_44614[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_35958 = (Global_35958 - 1);
											break;
										
										case 1:
											Global_35959 = (Global_35959 - 1);
											break;
										
										case 2:
											Global_35960 = (Global_35960 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_44976[iVar4 /*203*/].f_2 = iParam0;
	Global_44976[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_44976[iVar4 /*203*/] = 1;
	}
	Global_97173.f_24229.f_310++;
	if (Global_97173.f_24229.f_310 == 0)
	{
		Global_97173.f_24229.f_310 = 1;
	}
	Global_44976[iVar4 /*203*/].f_1 = Global_97173.f_24229.f_310;
	Global_44976[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

float func_17(var uParam0)
{
	if (func_20(uParam0))
	{
		if (func_19(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_18() - uParam0->f_1);
		}
	}
	return 0f;
}

float func_18()
{
	int iVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		iVar0 = unk_0xFACC0E85E40AD425();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0xF976C624234A4AA8()) / 1000f);
}

bool func_19(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 2);
}

bool func_20(var uParam0)
{
	return unk_0x61D8FEAF64881CDA(*uParam0, 1);
}

void func_21()
{
	switch (iLocal_79)
	{
		case 0:
			if (bLocal_233)
			{
				if (!func_29())
				{
					uLocal_230 = unk_0xAFBDE0BB5C885026("MIDSIZED_MESSAGE");
					while (!unk_0xE908465F9CDF4F1A(uLocal_230))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xF48C88BD1F0007E8(uLocal_230, "SHOW_BRIDGES_KNIVES_PROGRESS");
					func_28("PW_TITLE");
					unk_0x876C5D0739031E15(20);
					func_28("PW_PASS");
					func_28("PW_CHALLENGE");
					unk_0x876C5D0739031E15(func_26());
					unk_0xA52FC2467E672B55();
					iLocal_247 = func_26();
					Global_24676 = iLocal_247;
					unk_0x5AE11BC36633DE4E(0);
					unk_0x84795EA8F54230A1(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
				}
				iLocal_79 = 1;
			}
			break;
		
		case 1:
			if ((((((unk_0xC9D9444186B5A374() > 7500 || unk_0xC2C705ED6124A7C2()) || !unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95())) || func_29()) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || func_25()) || func_24())
			{
				unk_0xF48C88BD1F0007E8(uLocal_230, "SHARD_ANIM_OUT");
				unk_0x876C5D0739031E15(1);
				unk_0xA8F7908868900538(0.33f);
				unk_0xA52FC2467E672B55();
				unk_0x5AE11BC36633DE4E(0);
				iLocal_79 = 2;
			}
			else
			{
				func_23();
				if (Global_24676 > iLocal_247)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 2:
			if ((((((unk_0xC9D9444186B5A374() > 500 || unk_0xC2C705ED6124A7C2()) || !unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95())) || func_29()) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || func_25()) || func_24())
			{
				iLocal_79 = 3;
			}
			else
			{
				func_23();
				if (Global_24676 > iLocal_247)
				{
					iLocal_79 = 3;
				}
			}
			break;
		
		case 3:
			func_22();
			bLocal_233 = false;
			iLocal_79 = 0;
			break;
	}
}

void func_22()
{
	if (unk_0xE908465F9CDF4F1A(uLocal_230))
	{
		unk_0x86FF04BBB2EC839F(&uLocal_230);
	}
}

void func_23()
{
	if (!func_29())
	{
		if (unk_0xE908465F9CDF4F1A(uLocal_230))
		{
			unk_0x012C58B789779AA4(uLocal_230, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
	}
}

int func_24()
{
	if (Global_34909 == 9 || Global_34909 == 10)
	{
		return Global_95827;
	}
	Global_95827 = 0;
	return 0;
}

int func_25()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = func_27();
	if (iVar0 == 20)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 1);
	}
	return iVar0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 20)
	{
		iVar0 = 20;
	}
	return iVar0;
}

void func_28(char* sParam0)
{
	unk_0x44F4D219F8513945(sParam0);
	unk_0x113A6F657EE871A3();
}

int func_29()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

void func_30()
{
	if (func_31() && !iLocal_235)
	{
		iLocal_235 = 1;
		iLocal_77 = 7;
	}
	if (!func_31() && iLocal_235)
	{
		iLocal_235 = 0;
	}
}

int func_31()
{
	if (Global_14378)
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	if (func_17(&uLocal_224) > 3f)
	{
		func_37(0);
		func_36(&uLocal_224, 0f);
		func_35(&uLocal_224);
	}
	if ((func_17(&uLocal_224) <= 3f && func_34(0)) && func_33(unk_0x507DA4994C3D8EBD()))
	{
		if ((unk_0x58FC9C7DF8FE009B(0, 177) || (unk_0x58FC9C7DF8FE009B(0, 24) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))) || (func_31() && !iLocal_235))
		{
			func_36(&uLocal_224, 0f);
			func_35(&uLocal_224);
		}
	}
}

int func_33(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0)
{
	if (func_20(uParam0))
	{
		if (!func_19(uParam0))
		{
			uParam0->f_2 = (func_18() - uParam0->f_1);
			unk_0x3DBE2A7AF9E71C82(uParam0, 2);
		}
	}
}

void func_36(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_18() - fParam1);
	unk_0x3DBE2A7AF9E71C82(uParam0, 1);
	unk_0xCD27BF29FB9012E2(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_37(int iParam0)
{
	if (Global_14551)
	{
		func_39(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_38())
	{
		Global_14393.f_1 = 3;
	}
}

int func_38()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_34(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

void func_40()
{
	if (iLocal_236)
	{
		if ((func_17(&uLocal_227) > 5f && func_43() >= 1) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 1))
		{
			switch (iLocal_249)
			{
				case 0:
					func_14(28, iLocal_81[(20 - func_43())], 1);
					iLocal_250 = 0;
					iLocal_249++;
					break;
				
				case 1:
					if (iLocal_250 < 10)
					{
						func_41(28, func_42(iLocal_250));
						iLocal_250++;
					}
					else
					{
						iLocal_249++;
					}
					break;
				
				case 2:
					func_7(28);
					iLocal_249++;
					break;
				
				case 3:
					func_36(&uLocal_227, 0f);
					func_35(&uLocal_227);
					iLocal_236 = 0;
					iLocal_249 = 0;
					func_2();
					break;
				}
			}
	}
}

void func_41(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_44976[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_44976[iVar0 /*203*/].f_10[(Global_44976[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_44976[iVar0 /*203*/].f_10[(Global_44976[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_44976[iVar0 /*203*/].f_10[(Global_44976[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_44976[iVar0 /*203*/].f_10[(Global_44976[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_42(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				return "PW_STRING_1_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				return "PW_STRING_1_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				return "PW_STRING_1_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				return "PW_STRING_1_4";
			}
			break;
		
		case 1:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				return "PW_STRING_2_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				return "PW_STRING_2_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				return "PW_STRING_2_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				return "PW_STRING_2_4";
			}
			break;
		
		case 2:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				return "PW_STRING_3_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				return "PW_STRING_3_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				return "PW_STRING_3_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				return "PW_STRING_3_4";
			}
			break;
		
		case 3:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				return "PW_STRING_4_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				return "PW_STRING_4_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				return "PW_STRING_4_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				return "PW_STRING_4_4";
			}
			break;
		
		case 4:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				return "PW_STRING_5_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				return "PW_STRING_5_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				return "PW_STRING_5_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				return "PW_STRING_5_4";
			}
			break;
		
		case 5:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				return "PW_STRING_6_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				return "PW_STRING_6_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				return "PW_STRING_6_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				return "PW_STRING_6_4";
			}
			break;
		
		case 6:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				return "PW_STRING_7_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				return "PW_STRING_7_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				return "PW_STRING_7_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				return "PW_STRING_7_4";
			}
			break;
		
		case 7:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				return "PW_STRING_8_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				return "PW_STRING_8_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				return "PW_STRING_8_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				return "PW_STRING_8_4";
			}
			break;
		
		case 8:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				return "PW_STRING_9_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				return "PW_STRING_9_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				return "PW_STRING_9_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				return "PW_STRING_9_4";
			}
			break;
		
		case 9:
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				return "PW_STRING_10_1";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26) && !unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				return "PW_STRING_10_2";
			}
			else if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				return "PW_STRING_10_3";
			}
			else if (unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26) && unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				return "PW_STRING_10_4";
			}
			break;
	}
	return "PW_STRING_NONE";
}

int func_43()
{
	return (20 - func_27());
}

void func_44()
{
	switch (iLocal_77)
	{
		case 0:
			if (func_67())
			{
				if ((!func_66() && Global_2542276 == 0) && Global_2542277 == 0)
				{
					iLocal_77 = 1;
				}
			}
			break;
		
		case 1:
			iLocal_231 = func_61(&iLocal_232, 60f, uLocal_251, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_252, iLocal_253);
			if (iLocal_231 == 0)
			{
				iLocal_231 = func_61(&iLocal_232, 60f, uLocal_254, 0.8f, 0.7f, 0.25f, 8f, 0.333f, uLocal_255, iLocal_256);
				if (iLocal_231 == 0)
				{
					iLocal_77 = 7;
				}
				else
				{
					iLocal_77 = 4;
				}
			}
			else
			{
				iLocal_77 = 4;
			}
			break;
		
		case 4:
			if (!func_60(iLocal_232))
			{
				func_59(1);
				iLocal_77 = 5;
			}
			else
			{
				if (!iLocal_234)
				{
				}
				else
				{
					iLocal_234 = 0;
				}
				iLocal_77 = 7;
			}
			break;
		
		case 5:
			switch (iLocal_78)
			{
				case 0:
					func_58("PW_HELP_1", -1);
					if (func_57())
					{
						if (func_34(0))
						{
							func_56(99);
							if (func_55("PW_HELP_1"))
							{
								unk_0xAD91AFD429036CAB("PW_HELP_1");
							}
							iLocal_78 = 1;
						}
					}
					if (unk_0x58FC9C7DF8FE009B(0, 176) || unk_0x58FC9C7DF8FE009B(0, 178))
					{
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_1"))
						{
							unk_0xAD91AFD429036CAB("PW_HELP_1");
						}
						iLocal_77 = 7;
					}
					break;
				
				case 1:
					func_58("PW_HELP_2", -1);
					if (func_53(99))
					{
						iLocal_78 = 0;
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_2"))
						{
							unk_0xAD91AFD429036CAB("PW_HELP_2");
						}
						iLocal_77 = 6;
					}
					if (unk_0x58FC9C7DF8FE009B(0, 177))
					{
						iLocal_78 = 0;
						func_59(0);
						func_54(99);
						if (func_55("PW_HELP_2"))
						{
							unk_0xAD91AFD429036CAB("PW_HELP_2");
						}
						iLocal_77 = 7;
					}
					break;
			}
			break;
		
		case 6:
			func_52(iLocal_232);
			func_49(iLocal_80);
			unk_0x96B68C67633472DC(joaat("num_hidden_packages_7"), func_27(), 1);
			bLocal_233 = true;
			func_46(&uLocal_224);
			func_46(&uLocal_227);
			iLocal_236 = 1;
			iLocal_77 = 7;
			break;
		
		case 7:
			func_45();
			iLocal_77 = 8;
			break;
		
		case 8:
			if (!func_67())
			{
				iLocal_77 = 0;
			}
			break;
	}
}

void func_45()
{
	iLocal_78 = 0;
	iLocal_80 = 0;
	iLocal_231 = 0;
	iLocal_232 = 0;
	iLocal_234 = 0;
	Local_240 = { Local_237 };
	Local_243 = { Local_237 };
	func_59(0);
	func_54(99);
	if (func_55("PW_HELP_1"))
	{
		unk_0xAD91AFD429036CAB("PW_HELP_1");
	}
	if (func_55("PW_HELP_2"))
	{
		unk_0xAD91AFD429036CAB("PW_HELP_2");
	}
}

void func_46(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_48(uParam0);
	}
	else
	{
		func_47(uParam0);
	}
}

void func_47(var uParam0)
{
	func_36(uParam0, 0f);
}

void func_48(var uParam0)
{
	if (!func_20(uParam0))
	{
		func_47(uParam0);
	}
}

void func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = func_51(92);
	Global_2408752[iVar0 /*83*/] = 92;
	StringCopy(&(Global_2408752[iVar0 /*83*/].f_1), func_50(iParam0), 64);
	StringCopy(&(Global_2408752[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

char* func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		
		case 1:
			return "AF_BOAR";
		
		case 2:
			return "AF_BORDERCOLLIE";
		
		case 3:
			return "AF_CAT";
		
		case 4:
			return "AF_CHICKENHAWK";
		
		case 5:
			return "AF_CORMORANT";
		
		case 6:
			return "AF_COW";
		
		case 7:
			return "AF_COYOTE";
		
		case 8:
			return "AF_CROW";
		
		case 9:
			return "AF_DEER";
		
		case 10:
			return "AF_HEN";
		
		case 11:
			return "AF_HUSKY";
		
		case 12:
			return "AF_MOUNT_LION";
		
		case 13:
			return "AF_PIG";
		
		case 14:
			return "AF_RABBIT";
		
		case 15:
			return "AF_POODLE";
		
		case 16:
			return "AF_PUG";
		
		case 17:
			return "AF_RETRIEVER";
		
		case 18:
			return "AF_ROTTWEILER";
		
		case 19:
			return "AF_SEAGULL";
		
		case 20:
			return "AF_WESTIE";
		
		default:
	}
	return "";
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408752[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408752[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_52(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 4);
				iLocal_80 = 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 5);
				iLocal_80 = 3;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 6);
				iLocal_80 = 4;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 7);
				iLocal_80 = 5;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 8);
				iLocal_80 = 6;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 9);
				iLocal_80 = 7;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 10);
				iLocal_80 = 8;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 11);
				iLocal_80 = 9;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 14);
				iLocal_80 = 10;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 16);
				iLocal_80 = 11;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 18);
				iLocal_80 = 12;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 19);
				iLocal_80 = 13;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 21);
				iLocal_80 = 15;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 22);
				iLocal_80 = 16;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 23);
				iLocal_80 = 14;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 24);
				iLocal_80 = 17;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 25);
				iLocal_80 = 18;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 26);
				iLocal_80 = 19;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 29);
				iLocal_80 = 2;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 31);
				iLocal_80 = 20;
			}
			break;
		
		default:
			break;
	}
}

int func_53(int iParam0)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_97173.f_29699[iParam0 /*29*/].f_18 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_54(int iParam0)
{
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		Global_97173.f_29699[iParam0 /*29*/].f_18 = 0;
		return 1;
	}
	return 0;
}

bool func_55(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_56(int iParam0)
{
	Global_14548 = iParam0;
}

int func_57()
{
	if (unk_0x25531002BCF0D968(joaat("appcontacts")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_58(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

void func_59(bool bParam0)
{
	if (bParam0)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 28);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 28);
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 4))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cat_01"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 5))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_chickenhawk"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 6))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cormorant"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 7))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_cow"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 8))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_coyote"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 9))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_crow"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 10))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_deer"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 11))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_hen"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 14))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_husky"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 16))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_mtlion"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 18))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pig"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 19))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_poodle"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 21))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_pug"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 22))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rabbit_01"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 23))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_retriever"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 24))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 25))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_seagull"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 26))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_shepherd"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 29))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("a_c_westy"):
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 31))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		default:
			iLocal_234 = 1;
			break;
	}
	return 1;
}

int func_61(int iParam0, float fParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, var uParam8, int iParam9)
{
	int iVar0;
	float fVar1;
	
	iVar0 = unk_0x0738284E79AD465F(fParam1, uParam2, fParam3, fParam4, fParam5, fParam6, fParam7, uParam8, iParam9);
	if (unk_0xFD68187442384158(iVar0))
	{
	}
	if (iVar0 != 0 && func_33(iVar0))
	{
		if (unk_0xF715A8C79E9233AC(iVar0) == 28)
		{
			if (!unk_0x19F2D2C58150C825(iVar0))
			{
				*iParam0 = unk_0x26EA758C2A691D06(iVar0);
				if (func_65(iVar0, 31086))
				{
					fVar1 = func_64(unk_0x507DA4994C3D8EBD(), iVar0, 1);
					if (unk_0xB4D3CFD952BEB647(unk_0x507DA4994C3D8EBD(), iVar0))
					{
					}
					if (func_63(*iParam0))
					{
						if (fVar1 <= IntToFloat(func_62(*iParam0)))
						{
						}
						else
						{
							iVar0 = 0;
						}
					}
					else if (fVar1 <= IntToFloat(func_62(*iParam0)))
					{
					}
					else
					{
						iVar0 = 0;
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("a_c_boar"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_cat_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_chickenhawk"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cormorant"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_cow"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_coyote"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_crow"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_deer"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_hen"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_husky"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_mtlion"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pig"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pigeon"):
			iVar0 = 40;
			break;
		
		case joaat("a_c_poodle"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_pug"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rabbit_01"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_retriever"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_rottweiler"):
		case joaat("a_c_chop"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_seagull"):
			iVar0 = 60;
			break;
		
		case joaat("a_c_shepherd"):
			iVar0 = 30;
			break;
		
		case joaat("a_c_westy"):
			iVar0 = 30;
			break;
		
		default:
			iVar0 = 30;
			break;
	}
	return iVar0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_64(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xE5D56342B0FF1D0D(uParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

int func_65(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	Local_243 = { unk_0xF72E61A2DB753A80(iParam0, unk_0xA8918EDB277FC51C(iParam0, iParam1)) };
	if (iLocal_232 == joaat("a_c_rabbit_01") || iLocal_232 == joaat("a_c_rat"))
	{
		Local_240 = { unk_0xF72E61A2DB753A80(iParam0, unk_0xA8918EDB277FC51C(iParam0, 24816)) };
	}
	else
	{
		Local_240 = { unk_0xF72E61A2DB753A80(iParam0, unk_0xA8918EDB277FC51C(iParam0, 24818)) };
	}
	unk_0xDB39618306E15461(Local_240, &fVar0, &fVar1);
	unk_0xDB39618306E15461(Local_243, &fVar2, &fVar3);
	if ((((fVar0 >= 0.05f && fVar0 <= 0.95f) && (fVar2 >= 0.05f && fVar2 <= 0.95f)) && (fVar1 >= 0.05f && fVar1 <= 0.95f)) && (fVar3 >= 0.05f && fVar3 <= 0.95f))
	{
		return 1;
	}
	return 0;
}

int func_66()
{
	if (unk_0x61D8FEAF64881CDA(Global_2265, 3))
	{
		return 1;
	}
	return 0;
}

int func_67()
{
	if (Global_16728)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	if (unk_0x25531002BCF0D968(joaat("paparazzo3a")) > 0)
	{
		return 1;
	}
	if (unk_0x25531002BCF0D968(joaat("paparazzo3b")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	func_70();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_70()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_73(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_72(unk_0x507DA4994C3D8EBD());
			if (func_71(iVar0) && (!func_74(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_71(Global_97173.f_1729.f_539.f_3213))
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

bool func_71(int iParam0)
{
	return iParam0 < 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_73(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_73(int iParam0)
{
	if (func_71(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_74(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_75(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

int func_76()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_77()
{
	if (!unk_0x61D8FEAF64881CDA(Global_97173.f_8270.f_99, 2))
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_8270.f_99), 2);
	}
	iLocal_246 = 0;
	iLocal_235 = func_31();
	iLocal_81[0] = 249;
	iLocal_81[1] = 250;
	iLocal_81[2] = 251;
	iLocal_81[3] = 252;
	iLocal_81[4] = 253;
	iLocal_81[5] = 254;
	iLocal_81[6] = 255;
	iLocal_81[7] = 256;
	iLocal_81[8] = 257;
	iLocal_81[9] = 258;
	iLocal_81[10] = 259;
	iLocal_81[11] = 260;
	iLocal_81[12] = 261;
	iLocal_81[13] = 262;
	iLocal_81[14] = 263;
	iLocal_81[15] = 264;
	iLocal_81[16] = 265;
	iLocal_81[17] = 266;
	iLocal_81[18] = 267;
	iLocal_81[19] = 268;
	iLocal_81[20] = 269;
}

