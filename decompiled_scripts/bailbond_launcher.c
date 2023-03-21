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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
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
	struct<7> Local_43 = { 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 16;
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
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220 = 0;
	int iLocal_221 = 0;
	bool bLocal_222 = 0;
	int iLocal_223 = 0;
	char* sLocal_224 = NULL;
	int iLocal_225 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	sLocal_224 = "";
	if (unk_0x222F76006659B0EB(unk_0xB4D15BCA2CC28DF9()) > 1)
	{
		unk_0x9C9E32388A7886A2();
	}
	func_264(22);
	if (unk_0xD4BE58A7E3E102AC(18))
	{
		func_261();
	}
	func_253();
	while (true)
	{
		func_250();
		switch (Global_111560.f_24981.f_2)
		{
			case 0:
				if (func_249())
				{
					if (!func_247())
					{
						if (func_225(4, 62, 2, -1, 0))
						{
							if (func_222(Local_43.f_4, Local_43.f_5))
							{
								if (Local_43.f_5)
								{
									func_202(2, 95, 5000, 0, 0);
								}
								iLocal_218 = func_201();
								func_193(&iLocal_218, 0, 0, 0, 10, 0, 0);
								Global_111560.f_24981.f_3 = iLocal_218;
								unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 9);
								Global_111560.f_24981.f_2 = 1;
							}
						}
						else
						{
							unk_0x4EDE34FBADD967A6(2000);
						}
					}
					else
					{
						unk_0x4EDE34FBADD967A6(2000);
					}
				}
				else
				{
					unk_0x4EDE34FBADD967A6(2000);
				}
				break;
			
			case 1:
				if (func_192() == 2)
				{
					func_173(&Local_43, &uLocal_53);
					func_165(Local_43.f_4);
					if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 8))
					{
						if (!func_247())
						{
							unk_0xA1E7A40E1F56E511(&(Global_111560.f_24981), 8);
						}
						else
						{
							unk_0x4EDE34FBADD967A6(2000);
						}
					}
					else if (func_247())
					{
						if (func_155(0))
						{
							if (func_149(&(Local_43.f_6)))
							{
								func_147(Local_43.f_4);
								if (!func_146())
								{
									func_76(unk_0x0037AFCBDC61F351(), 1);
								}
								Global_111560.f_24981.f_2 = 2;
							}
						}
						else
						{
							if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 8))
							{
								unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
							}
							unk_0x4EDE34FBADD967A6(2000);
						}
					}
					else
					{
						func_74(Local_43.f_4);
						unk_0x4EDE34FBADD967A6(2000);
					}
				}
				else
				{
					if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 8))
					{
						unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
					}
					unk_0x4EDE34FBADD967A6(4000);
				}
				break;
			
			case 2:
				if (!unk_0xAB2A82A2838B61B7(iLocal_219))
				{
					func_28(Global_110269);
				}
				break;
			
			case 3:
				if (func_17(Global_111560.f_24981.f_3))
				{
					Global_111560.f_24981.f_2 = 1;
				}
				break;
			
			case 4:
				if (iLocal_225 == 0)
				{
					if (func_17(Global_111560.f_24981.f_3))
					{
						Global_111560.f_24981.f_2 = 0;
					}
				}
				break;
			
			case 5:
				if (iLocal_225 == 0)
				{
					if (func_17(Global_111560.f_24981.f_3))
					{
						if (func_249())
						{
							if (func_225(4, 62, 2, -1, 0))
							{
								if (func_4())
								{
									func_202(2, 95, 5000, 0, 0);
									func_3(22);
									func_1();
									func_261();
								}
							}
							else
							{
								unk_0x4EDE34FBADD967A6(2000);
							}
						}
						else
						{
							unk_0x4EDE34FBADD967A6(2000);
						}
					}
					else
					{
						unk_0x4EDE34FBADD967A6(2000);
					}
				}
				break;
			
			case 6:
				if (iLocal_225 == 0)
				{
					func_3(22);
					func_261();
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[iVar0], iVar1))
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_9080.f_99.f_219[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	iVar0 = 79;
	sVar1 = "BBONDS_DMAIL_K5";
	sVar2 = "BBONDS_DMAIL_C5";
	if (func_14(26, iVar0, 1))
	{
		func_13(26, sVar1, 0);
		func_12(26, sVar2);
		func_5(26);
		return 1;
	}
	return 0;
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51874[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_51874[iVar0 /*203*/].f_9 - 1);
	if (!Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_42574[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_6(1, Global_42574[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_42574[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_42574[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_42574[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_42574[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_51874[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x33D7ABC47E81DCF9())
	{
		return;
	}
	iVar0 = func_192();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x6C607B5286DEE8D9("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x6C607B5286DEE8D9("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x6C607B5286DEE8D9("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x6C607B5286DEE8D9(sParam3);
				if (!unk_0x9591DE0F00127F2A(sParam4))
				{
					unk_0x0AC9F8E1AFCEC860(sParam4);
				}
				if (!unk_0x9591DE0F00127F2A(sParam5))
				{
					unk_0x0AC9F8E1AFCEC860(sParam5);
				}
				if (!unk_0x9591DE0F00127F2A(sParam6))
				{
					unk_0x0AC9F8E1AFCEC860(sParam6);
				}
				if (!unk_0x9591DE0F00127F2A(sParam7))
				{
					unk_0x0AC9F8E1AFCEC860(sParam7);
				}
				if (!unk_0x9591DE0F00127F2A(sParam8))
				{
					unk_0x0AC9F8E1AFCEC860(sParam8);
				}
				if (!unk_0x9591DE0F00127F2A(sParam9))
				{
					unk_0x0AC9F8E1AFCEC860(sParam9);
				}
				if (!unk_0x9591DE0F00127F2A(sParam10))
				{
					unk_0x0AC9F8E1AFCEC860(sParam10);
				}
				if (!unk_0x9591DE0F00127F2A(sParam11))
				{
					unk_0x0AC9F8E1AFCEC860(sParam11);
				}
				if (!unk_0x9591DE0F00127F2A(sParam12))
				{
					unk_0x0AC9F8E1AFCEC860(sParam12);
				}
				if (!unk_0x9591DE0F00127F2A(sParam13))
				{
					unk_0x0AC9F8E1AFCEC860(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0x480C449653B881B1(&cVar2, &cVar2, 0, 2, unk_0xD54FB72F71EFE6C4(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0x480C449653B881B1("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xD54FB72F71EFE6C4(func_8(iParam1)), 0));
		}
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				Global_42566++;
				if (Global_42566 > 16)
				{
					Global_42566 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				Global_42568++;
				if (Global_42568 > 16)
				{
					Global_42568 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				Global_42567++;
				if (Global_42567 > 16)
				{
					Global_42567 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0x9964F5BBD9415AB7(-1, "Notification", &Global_19475, 1);
	}
}

void func_7(var uParam0)
{
	Global_42569[Global_42573] = uParam0;
	Global_21863 = 1;
	Global_21862 = uParam0;
	Global_42573++;
	if (Global_42573 == 3)
	{
		Global_42573 = 0;
	}
}

char* func_8(int iParam0)
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

char* func_9(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[0 /*29*/].f_7));
		
		case 1:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[1 /*29*/].f_7));
		
		case 2:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[2 /*29*/].f_7));
		
		case 7:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[12 /*29*/].f_7));
		
		case 4:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[60 /*29*/].f_7));
		
		case 6:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[62 /*29*/].f_7));
		
		case 3:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[14 /*29*/].f_7));
		
		case 16:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[97 /*29*/].f_7));
		
		case 19:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[99 /*29*/].f_7));
		
		case 15:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[96 /*29*/].f_7));
		
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
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[15 /*29*/].f_7));
		
		case 26:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[30 /*29*/].f_7));
		
		case 27:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[17 /*29*/].f_7));
		
		case 29:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[20 /*29*/].f_7));
		
		case 30:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[43 /*29*/].f_7));
		
		case 31:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[44 /*29*/].f_7));
		
		case 32:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[19 /*29*/].f_7));
		
		case 34:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[40 /*29*/].f_7));
		
		case 36:
			return unk_0xD54FB72F71EFE6C4("CELL_E_381");
		
		case 38:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[64 /*29*/].f_7));
		
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
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[122 /*29*/].f_7));
		
		case 40:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[125 /*29*/].f_7));
		
		case 41:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[113 /*29*/].f_7));
		
		case 42:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[126 /*29*/].f_7));
		
		case 43:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[127 /*29*/].f_7));
		
		case 44:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[124 /*29*/].f_7));
		
		case 45:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[114 /*29*/].f_7));
		
		case 46:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[115 /*29*/].f_7));
		
		case 47:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[116 /*29*/].f_7));
		
		case 48:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[123 /*29*/].f_7));
		
		case 49:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[117 /*29*/].f_7));
		
		case 50:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[118 /*29*/].f_7));
		
		case 51:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[119 /*29*/].f_7));
		
		case 52:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[120 /*29*/].f_7));
		
		case 53:
			return unk_0xD54FB72F71EFE6C4(&(Global_1798[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
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

int func_11(int iParam0)
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
		if (Global_51874[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_51874[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_51874[iVar0 /*203*/].f_1;
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

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51874[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_13(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_51874[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_51874[iVar0 /*203*/].f_10[(Global_51874[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
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
	if (Global_51874[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_51874[iVar0 /*203*/].f_2 = iParam0;
	Global_51874[iVar0 /*203*/].f_10[Global_51874[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_51874[iVar0 /*203*/].f_10[Global_51874[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_51874[iVar0 /*203*/].f_10[Global_51874[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_51874[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51874[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51874[iVar0 /*203*/].f_4[iVar1] == Global_42574[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51874[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51874[iVar0 /*203*/].f_4[Global_51874[iVar0 /*203*/].f_3] = Global_42574[iParam1 /*12*/].f_3;
			Global_51874[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_51874[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_51874[iVar0 /*203*/].f_4[iVar1] == Global_42574[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_51874[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_51874[iVar0 /*203*/].f_4[Global_51874[iVar0 /*203*/].f_3] = Global_42574[iParam1 /*12*/].f_2;
			Global_51874[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_51874[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_51874[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_51874[iVar0 /*203*/].f_4[iVar1], Global_51874[iVar0 /*203*/].f_1, 1, bParam2, 0);
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
		iVar19 = (Global_45899[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_45899[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_42574[iVar20 /*12*/].f_1) };
		if (Global_42574[iVar20 /*12*/].f_2 == iParam0 && !Global_42574[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_42574[iVar20 /*12*/].f_2;
		iVar0 = Global_51512[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_51512[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42566 = (Global_42566 - 1);
						if (Global_42566 < 0)
						{
							Global_42566 = 0;
						}
						break;
					
					case 1:
						Global_42567 = (Global_42567 - 1);
						if (Global_42567 < 0)
						{
							Global_42567 = 0;
						}
						break;
					
					case 2:
						Global_42568 = (Global_42568 - 1);
						if (Global_42568 < 0)
						{
							Global_42568 = 0;
						}
						break;
					}
				}
		}
		Global_51512[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_51512[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_51512[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51512[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_51512[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51512[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_51512[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_51512[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_42566 = (Global_42566 - 1);
						if (Global_42566 < 0)
						{
							Global_42566 = 0;
						}
						break;
					
					case 1:
						Global_42567 = (Global_42567 - 1);
						if (Global_42567 < 0)
						{
							Global_42567 = 0;
						}
						break;
					
					case 2:
						Global_42568 = (Global_42568 - 1);
						if (Global_42568 < 0)
						{
							Global_42568 = 0;
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
			if (Global_51874[iVar24 /*203*/].f_1 == iParam1 && Global_51874[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_51512[iParam0 /*120*/].f_18[iVar0] = Global_51874[iVar23 /*203*/].f_1;
		Global_51512[iParam0 /*120*/].f_1[iVar0] = (Global_51874[iVar23 /*203*/].f_9 - 1);
		Global_51512[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_51512[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_51512[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_51512[iParam0 /*120*/]++;
		iVar25 = Global_51512[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_51874[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_42574[iVar26 /*12*/].f_2;
		if (Global_51874[iVar23 /*203*/].f_10[(Global_51874[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_51874[iVar23 /*203*/].f_10[(Global_51874[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_42574[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_51512[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_51874[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_51874[iVar1 /*203*/] == 0)
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
		if (Global_51874[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_51874[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_51874[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_51874[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_51874[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_51874[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_51512[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_51512[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_51512[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_51512[iVar6 /*120*/].f_18[iVar8] == Global_51874[iVar4 /*203*/].f_1)
							{
								if (Global_51512[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_42566 = (Global_42566 - 1);
											break;
										
										case 1:
											Global_42567 = (Global_42567 - 1);
											break;
										
										case 2:
											Global_42568 = (Global_42568 - 1);
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
	Global_51874[iVar4 /*203*/].f_2 = iParam0;
	Global_51874[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_51874[iVar4 /*203*/] = 1;
	}
	Global_111560.f_21032.f_310++;
	if (Global_111560.f_21032.f_310 == 0)
	{
		Global_111560.f_21032.f_310 = 1;
	}
	Global_51874[iVar4 /*203*/].f_1 = Global_111560.f_21032.f_310;
	Global_51874[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

bool func_17(int iParam0)
{
	return func_18(func_201(), iParam0);
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_26(iParam1) || !func_26(iParam0))
	{
		return 1;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_21(iParam0);
	iVar1 = func_21(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_20(iParam0);
	iVar1 = func_20(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	iVar1 = func_19(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_20(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_21(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_22(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_23(int iParam0)
{
	return iParam0 & 15;
}

var func_24(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_25(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_25(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_20(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_21(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_24(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_23(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_22(iParam0);
	if (iVar5 < 1 || iVar5 > func_27(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_28(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
			unk_0xA1E7A40E1F56E511(&(Global_111560.f_24981), func_73(Local_43.f_4));
			if (iParam0 == 1)
			{
				func_72(0);
				iVar0 = 8;
				unk_0xA1E7A40E1F56E511(&(Global_111560.f_24981), func_71(Local_43.f_4));
			}
			else
			{
				func_72(1);
				iVar0 = 4;
				unk_0x3B76114EC84D5812(&(Global_111560.f_24981), func_71(Local_43.f_4));
				func_202(2, 95, 10000, 0, 0);
				if (Global_92876 == 0)
				{
					func_57(30, 1);
				}
			}
			iLocal_225 = 1;
			sLocal_224 = func_56(Local_43.f_4);
			func_38();
			func_37(&(Local_43.f_6));
			if (func_36())
			{
				if (unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, func_71(Local_43.f_4)))
				{
					iLocal_218 = func_201();
					func_193(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
					Global_111560.f_24981.f_3 = iLocal_218;
					Global_111560.f_24981.f_2 = 5;
					func_1();
				}
				else
				{
					Global_111560.f_24981.f_2 = 6;
					func_1();
				}
			}
			else
			{
				Global_111560.f_24981.f_1 = func_35();
				unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
				func_30();
				iLocal_218 = func_201();
				func_193(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
				Global_111560.f_24981.f_3 = iLocal_218;
				Global_111560.f_24981.f_2 = 4;
				func_1();
			}
			if (iParam0 != 1)
			{
				func_29();
			}
			break;
		
		case 3:
			if (Global_98669 == 10)
			{
				func_147(Local_43.f_4);
			}
			else if (Global_98669 == 13)
			{
				func_38();
				func_37(&(Local_43.f_6));
				unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
				iLocal_218 = func_201();
				iVar0 = 8;
				func_193(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
				Global_111560.f_24981.f_3 = iLocal_218;
				Global_111560.f_24981.f_2 = 3;
				func_38();
				func_1();
			}
			break;
		
		case 0:
			func_38();
			func_37(&(Local_43.f_6));
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
			Global_111560.f_24981.f_2 = 1;
			break;
	}
}

void func_29()
{
	char cVar0[24];
	
	StringCopy(&cVar0, "Maude_PostBailBond", 24);
	unk_0xE9DEB0815374FA4D(&cVar0);
	unk_0x42B7026D73D48D50(&cVar0);
	while (!unk_0x5F74A266852104C3(&cVar0))
	{
		unk_0x42B7026D73D48D50(&cVar0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48(&cVar0, 1424);
	unk_0x0915CE69760E0654(&cVar0);
}

void func_30()
{
	int iVar0;
	
	iLocal_219 = 0;
	Local_43.f_4 = Global_111560.f_24981.f_1;
	Local_43 = { func_34(Local_43.f_4) };
	Local_43.f_3 = func_33(Local_43.f_4);
	Local_43.f_6 = -1;
	iVar0 = Global_111560.f_24981.f_1;
	iVar0 = (iVar0 - 1);
	if (iVar0 >= 0 && unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, func_71(iVar0)))
	{
		Local_43.f_5 = 1;
	}
	else
	{
		Local_43.f_5 = 0;
	}
	Local_43.f_7 = func_31(26, func_32(Local_43.f_4), 0);
}

int func_31(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = Global_42574[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_51874[iVar0 /*203*/].f_9)
	{
		if (Global_51874[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
		{
			if (iVar4 == 0)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
		}
		iVar3++;
	}
	if (iVar2 == -1)
	{
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 16)
	{
		if ((Global_51512[iVar1 /*120*/].f_86[iVar3] && Global_51512[iVar1 /*120*/].f_18[iVar3] == Global_51874[iVar0 /*203*/].f_1) && Global_51512[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_51512[iVar1 /*120*/].f_69[iVar3];
		}
		iVar3++;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		
		case 1:
			return 76;
		
		case 2:
			return 77;
		
		case 3:
			return 78;
		
		default:
	}
	return 79;
}

float func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 150f;
		
		case 1:
			return 150f;
		
		case 2:
			return 150f;
		
		case 3:
			return 150f;
		
		default:
	}
	return 150f;
}

Vector3 func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2956.349f, 2795.955f, 39.9217f;
		
		case 1:
			return 162.5572f, 2289.158f, 93.1489f;
		
		case 2:
			return 515.5f, 5494.33f, 766.77f;
		
		case 3:
			return 1427.972f, 6351.139f, 22.9853f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_37(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

void func_38()
{
	func_55();
	func_47();
	func_43();
	func_42();
	func_41();
	func_40();
	Global_98706 = 0;
	Global_92874 = -1;
	unk_0x3B76114EC84D5812(&(Global_98669.f_20), 17);
	Global_98704 = 0;
	unk_0x87C911B2DB7E78FD(0);
	unk_0x5DAA2C840D7342B4(0);
	unk_0xECBD7388D13DBB07(1);
	unk_0xA137BB8EFDEA995C(1);
	unk_0xD3B9282395791ADE(1);
	func_39(0);
}

void func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_98669.f_20), 13);
	}
}

void func_40()
{
	Global_76817 = { 0f, 0f, 0f };
	Global_76820 = 0f;
	Global_98669.f_21 = 145;
}

void func_41()
{
	StringCopy(&Global_76809, "", 16);
	StringCopy(&Global_76813, "", 16);
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_98669.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_43()
{
	Global_98669 = 13;
	Global_98669.f_1 = -1;
	Global_98669.f_2 = 0;
	Global_98669.f_30 = 0f;
	unk_0x3B76114EC84D5812(&(Global_98669.f_20), 25);
	Global_98703 = 0;
	func_46(0);
	func_45();
	func_44();
	Global_98669.f_18 = -1;
	Global_98669.f_19 = -1;
}

void func_44()
{
	unk_0x3B76114EC84D5812(&(Global_98669.f_20), 22);
	unk_0x3B76114EC84D5812(&(Global_98669.f_20), 8);
}

void func_45()
{
	if (Global_98669.f_16 != 0)
	{
		unk_0x749CA887CB0AFEC9(&(Global_98669.f_16));
		Global_98669.f_16 = 0;
	}
	if (Global_98669.f_17 != 0)
	{
		unk_0x749CA887CB0AFEC9(&(Global_98669.f_17));
		Global_98669.f_17 = 0;
	}
}

void func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41945 = 1;
	}
	else
	{
		Global_41945 = 0;
	}
}

void func_47()
{
	func_48(&Global_105109);
}

void func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_54(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_53(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_53(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_2244[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_2244[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_2244[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_2341[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_52(&(uParam0->f_2884));
	func_50(&(uParam0->f_2890));
	func_49(&(uParam0->f_2980));
}

void func_49(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_50(var uParam0)
{
	func_51(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_51(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_52(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_53(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_54(var uParam0)
{
	*uParam0 = -15;
}

void func_55()
{
	StringCopy(&Global_102117, "", 32);
	func_48(&Global_102125);
}

char* func_56(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BBS_BJ1";
			break;
		
		case 1:
			return "BBS_BJ2";
			break;
		
		case 2:
			return "BBS_BJ3";
			break;
		
		case 3:
			return "BBS_BJ4";
			break;
		
		default:
			break;
	}
	return "";
}

int func_57(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_58(iParam0, iParam1);
}

int func_58(int iParam0, int iParam1)
{
	if (func_70(14) && !func_69(iParam0))
	{
		return 0;
	}
	if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_68(&Global_4269915))
	{
		if (func_66(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_59(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xA123C027757634FD(iParam0))
		{
			return 0;
		}
		if (unk_0x17A6988567C0F4A8(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_59(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_70(14) && !func_69(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
	}
	if (func_65(uParam0) < 0f)
	{
		func_64(uParam0, 0);
	}
	func_62(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_60(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_60(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x17A6988567C0F4A8(iParam1))
	{
		return 0;
	}
	if (func_70(14) && !func_69(iParam1))
	{
		return 0;
	}
	if (func_66(uParam0, iParam1))
	{
		return 0;
	}
	if (func_65(uParam0) < 0f)
	{
		func_64(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_61(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_61(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_62(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63(uParam0, iVar0);
		iVar0++;
	}
	func_64(uParam0, (Global_4269914 - 0.5f));
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_64(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_65(var uParam0)
{
	return uParam0->f_80;
}

bool func_66(var uParam0, int iParam1)
{
	return func_67(uParam0, iParam1) != -1;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_68(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_70(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
		
		case 3:
			return 7;
		
		default:
	}
	return 4;
}

void func_72(bool bParam0)
{
	iLocal_225 = 1;
	bLocal_222 = bParam0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		default:
	}
	return 0;
}

void func_74(int iParam0)
{
	int iVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(Global_111560.f_24981, 9))
	{
		if (func_17(Global_111560.f_24981.f_3))
		{
			if (func_249())
			{
				if (func_225(4, 62, 2, -1, 0))
				{
					iVar0 = func_75(iParam0);
					if (func_14(26, iVar0, 0))
					{
						unk_0xA1E7A40E1F56E511(&(Global_111560.f_24981), 9);
					}
				}
			}
		}
	}
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 80;
		
		case 1:
			return 81;
		
		case 2:
			return 82;
		
		case 3:
			return 83;
		
		default:
	}
	return 80;
}

void func_76(char[4] cParam0, int iParam1)
{
	unk_0x3B76114EC84D5812(&(Global_98669.f_20), 17);
	func_77(cParam0, iParam1, 0);
}

void func_77(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_98669 != 10 && Global_98669 != 9)
	{
		StringCopy(&Global_102117, cParam0, 32);
		func_79(&Global_102125, cParam0, 0, "Start", iParam1, iParam2);
		func_78();
		Global_92877 = 0;
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	Global_105109 = Global_102125;
	Global_105109.f_1 = Global_102125.f_1;
	Global_105109.f_6 = Global_102125.f_6;
	Global_105109.f_7 = Global_102125.f_7;
	Global_105109.f_8 = Global_102125.f_8;
	Global_105109.f_2 = Global_102125.f_2;
	Global_105109.f_3 = Global_102125.f_3;
	Global_105109.f_4 = Global_102125.f_4;
	Global_105109.f_5 = Global_102125.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105109.f_9[iVar1] = Global_102125.f_9[iVar1];
		Global_105109.f_13[iVar1] = Global_102125.f_13[iVar1];
		Global_105109.f_17[iVar1] = Global_102125.f_17[iVar1];
		Global_105109.f_21[iVar1] = Global_102125.f_21[iVar1];
		Global_105109.f_25[0 /*295*/][iVar1 /*98*/] = { Global_102125.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_105109.f_25[1 /*295*/][iVar1 /*98*/] = { Global_102125.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105109.f_616[iVar1 /*65*/][iVar0] = Global_102125.f_616[iVar1 /*65*/][iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_13[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_26[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_105109.f_616[iVar1 /*65*/].f_59 = Global_102125.f_616[iVar1 /*65*/].f_59;
		Global_105109.f_616[iVar1 /*65*/].f_60 = Global_102125.f_616[iVar1 /*65*/].f_60;
		Global_105109.f_616[iVar1 /*65*/].f_61 = Global_102125.f_616[iVar1 /*65*/].f_61;
		Global_105109.f_616[iVar1 /*65*/].f_62 = Global_102125.f_616[iVar1 /*65*/].f_62;
		Global_105109.f_616[iVar1 /*65*/].f_63 = Global_102125.f_616[iVar1 /*65*/].f_63;
		Global_105109.f_616[iVar1 /*65*/].f_64 = Global_102125.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105109.f_616[iVar1 /*65*/].f_39[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_49[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105109.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_102125.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105109.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_102125.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105109.f_2244[iVar1 /*32*/][iVar0] = Global_102125.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105109.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_102125.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105109.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_102125.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_105109.f_2341[iVar1] = Global_102125.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105109.f_2838[iVar1 /*15*/][iVar0] = Global_102125.f_2838[iVar1 /*15*/][iVar0];
			Global_105109.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_102125.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_105109.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_102125.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105109.f_2345[iVar1 /*164*/][iVar0] = Global_102125.f_2345[iVar1 /*164*/][iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105109.f_2884 = { Global_102125.f_2884 };
	Global_105109.f_2884.f_3 = Global_102125.f_2884.f_3;
	Global_105109.f_2890 = { Global_102125.f_2890 };
	Global_105109.f_2890.f_3 = { Global_102125.f_2890.f_3 };
	Global_105109.f_2890.f_6 = Global_102125.f_2890.f_6;
	Global_105109.f_2890.f_8 = Global_105109.f_2890.f_8;
	Global_105109.f_2890.f_7 = Global_102125.f_2890.f_7;
	Global_105109.f_2890.f_9 = Global_102125.f_2890.f_9;
	Global_105109.f_2890.f_11 = Global_102125.f_2890.f_11;
	Global_105109.f_2890.f_10 = Global_102125.f_2890.f_10;
	Global_105109.f_2890.f_12 = Global_102125.f_2890.f_12;
	Global_105109.f_2890.f_12.f_1 = { Global_102125.f_2890.f_12.f_1 };
	Global_105109.f_2890.f_12.f_5 = Global_102125.f_2890.f_12.f_5;
	Global_105109.f_2890.f_12.f_6 = Global_102125.f_2890.f_12.f_6;
	Global_105109.f_2890.f_12.f_7 = Global_102125.f_2890.f_12.f_7;
	Global_105109.f_2890.f_12.f_8 = Global_102125.f_2890.f_12.f_8;
	Global_105109.f_2890.f_12.f_9 = { Global_102125.f_2890.f_12.f_9 };
	Global_105109.f_2890.f_12.f_59 = { Global_102125.f_2890.f_12.f_59 };
	Global_105109.f_2890.f_12.f_62 = Global_102125.f_2890.f_12.f_62;
	Global_105109.f_2890.f_12.f_63 = Global_102125.f_2890.f_12.f_63;
	Global_105109.f_2890.f_12.f_64 = Global_102125.f_2890.f_12.f_64;
	Global_105109.f_2890.f_12.f_65 = Global_102125.f_2890.f_12.f_65;
	Global_105109.f_2890.f_12.f_77 = Global_102125.f_2890.f_12.f_77;
	Global_105109.f_2890.f_12.f_66 = Global_102125.f_2890.f_12.f_66;
	Global_105109.f_2890.f_12.f_67 = Global_102125.f_2890.f_12.f_67;
	Global_105109.f_2890.f_12.f_68 = Global_102125.f_2890.f_12.f_68;
	Global_105109.f_2890.f_12.f_69 = Global_102125.f_2890.f_12.f_69;
	Global_105109.f_2890.f_12.f_71 = Global_102125.f_2890.f_12.f_71;
	Global_105109.f_2890.f_12.f_72 = Global_102125.f_2890.f_12.f_72;
	Global_105109.f_2890.f_12.f_73 = Global_102125.f_2890.f_12.f_73;
	Global_105109.f_2890.f_12.f_74 = Global_102125.f_2890.f_12.f_74;
	Global_105109.f_2890.f_12.f_75 = Global_102125.f_2890.f_12.f_75;
	Global_105109.f_2890.f_12.f_76 = Global_102125.f_2890.f_12.f_76;
	Global_105109.f_2980 = Global_102125.f_2980;
	Global_105109.f_2980.f_1 = Global_102125.f_2980.f_1;
	Global_105109.f_2980.f_2 = Global_102125.f_2980.f_2;
	Global_105109.f_2980.f_3 = Global_102125.f_2980.f_3;
}

void func_79(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_192();
	uParam0->f_1 = func_201();
	unk_0x602EEE246F99F562(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		func_118(&(uParam0->f_2884), 0);
		func_117(unk_0x0FA8183DAD2B3203());
		func_110(unk_0x0FA8183DAD2B3203(), 0);
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111560.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_108())
		{
			func_101(unk_0x0FA8183DAD2B3203(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98394[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98394[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98394[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98394[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98394[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98394[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98394[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98394[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98394[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98394[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111560.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111560.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x367DA79FE620711B(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x367DA79FE620711B(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x367DA79FE620711B(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x367DA79FE620711B(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x367DA79FE620711B(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0x367DA79FE620711B(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111560.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58645[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111560.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111560.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111560.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x367DA79FE620711B(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	unk_0x367DA79FE620711B(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	unk_0x367DA79FE620711B(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_81(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_80(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_80(var uParam0)
{
	*uParam0 = Global_94548;
	uParam0->f_1 = Global_94549;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_81(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x0FA8183DAD2B3203();
	}
	if (unk_0xD4B321D9096B01FC(iParam2))
	{
		uParam1->f_5 = func_98(iParam2);
	}
	if (func_95(iParam2, &iVar0, iParam3, iParam5))
	{
		func_82(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD4B321D9096B01FC(iVar0))
	{
		if (!unk_0xF4B969E0807E76C7(iVar0, 0))
		{
			if (unk_0x759DEE4D113EC07E(iVar0, joaat("skylift")) && unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iVar0, 0))
			{
				func_82(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_82(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xD960230552BC4165(iParam2, 0))
	{
		func_84(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_83(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98669.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_84(var uParam0, int iParam1, int iParam2)
{
	func_91(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_87(iParam1, 145, 0);
	uParam0->f_11 = func_86(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_85(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
		uParam0->f_6 = unk_0xD2809C7F7FD79247(iParam1);
		uParam0->f_3 = { unk_0x93DC424F261951D6(iParam1) };
		if (unk_0x42A24CB7B8A08E11(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76301 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_484[iVar0]))
		{
			if (iParam0 == Global_75396.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 145;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96040[iVar0])
				{
					if (iParam2 == 0 || unk_0x7F375072508F738F(iParam0) == func_88(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_90(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_89(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_89(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111560.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111560.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_90(int iParam0)
{
	return iParam0 < 3;
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		func_51(uParam1);
		uParam1->f_66 = unk_0x7F375072508F738F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x8D762F81855E767B(iParam0), 16);
		*uParam1 = unk_0x15573EDB7C261B90(iParam0);
		unk_0xA0D7A86C25861B15(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x419E9D2174D7719D(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD71E7132121C0D3E(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xE3ED8ECBFAC24D1B(iParam0);
		uParam1->f_67 = unk_0xFAFC58D85092C270(iParam0);
		uParam1->f_69 = unk_0x20ACED1EFBCD772F(iParam0);
		uParam1->f_70 = unk_0x53B8ABE899D7A6D5(iParam0);
		unk_0xBF4B7EDAACFA006E(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3D70A45CE998115E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xABAE008A600C0215(iParam0, 2))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 28);
		}
		if (unk_0xABAE008A600C0215(iParam0, 3))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 29);
		}
		if (unk_0xABAE008A600C0215(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 30);
		}
		if (unk_0xABAE008A600C0215(iParam0, 1))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_94(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7A0A412D276E522A(iParam0, 0))
		{
			uParam1->f_68 = unk_0x331921060784BA6D(iParam0);
		}
		if (unk_0x31337ABC07783F10(uParam1->f_66))
		{
			if (unk_0x0B70023E8CF129D6(iParam0))
			{
				switch (unk_0x80560A645560481F(iParam0))
				{
					case 3:
					case 0:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDD2D40FFFA144057(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 9);
		}
		if (unk_0x0064CADA7C0E1595(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 10);
		}
		if (unk_0x2C905D7AE4F3E3EA(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 13);
			unk_0xD6427EDEA38DA83A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x86932E0F4CD07767(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 12);
		}
		func_93(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_92(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7B2058C6797B2C04(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 11);
		}
		if (unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave") && unk_0x607A7A0DD7EB666D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 27);
		}
	}
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_93(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD960230552BC4165(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6AA7F87D45193D03(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				switch (unk_0xD1A3841ED22A9A4F(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF05B9E4C6631EA28(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			if (iParam0 == unk_0x0FA8183DAD2B3203())
			{
				*uParam1 = unk_0x9B79A29933E4A8FA();
			}
			else
			{
				*uParam1 = unk_0x4D57D3E5ECE15A41(iParam0, 1);
			}
			if (unk_0xD4B321D9096B01FC(*uParam1))
			{
				if (unk_0xD960230552BC4165(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(*uParam1, 1), unk_0xACE5E491FC1B0D37(iParam0, 1), 1) < 100f)
					{
						if (unk_0x759DEE4D113EC07E(*uParam1, joaat("taxi")))
						{
							if (unk_0x300C62F79A4441EB(*uParam1, -1, 0) != iParam0 && unk_0x300C62F79A4441EB(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_96(*uParam1, func_192(), 1))
						{
							uVar0 = unk_0x0037AFCBDC61F351();
							if (!unk_0x2553916E420E8EF0(uVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5294582CE404D3F4(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x145DAE1A4D0EA05D(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x607A7A0DD7EB666D(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x759DEE4D113EC07E(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_97(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iVar9], 0))
		{
			if (unk_0x89C1B63B3CB1739A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_99(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_99(int iParam0)
{
	if (func_90(iParam0))
	{
		return func_100(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_100(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_101(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = func_98(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_107(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_106(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_90(iVar0))
		{
			uParam1->f_59 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x393E9918BC37548A() && unk_0x7F375072508F738F(iParam0) == unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			if (func_105(161, iParam3))
			{
				uParam1->f_59 = func_102(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_102(752, iParam3, 0);
			}
			uParam1->f_60 = func_102(753, iParam3, 0);
			uParam1->f_61 = func_102(754, iParam3, 0);
		}
		if (unk_0x393E9918BC37548A() && iParam0 == unk_0x0FA8183DAD2B3203())
		{
			if (func_105(161, iParam3))
			{
				uParam1->f_59 = func_102(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_102(752, iParam3, 0);
			}
		}
	}
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_103(iParam1)];
	if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_103(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_104();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_104()
{
	return Global_1312745;
}

int func_105(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_103(iParam1)];
	if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_106(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_98(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xC74E62D8CDF80E57(iParam0, iParam1);
		*uParam3 = unk_0xB55E657665DF2C6F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xACFB2B501B3CED36(iParam0) && unk_0x69EBBABB3E1DFE04(iParam0) != -1)
				{
					*uParam2 = unk_0x69EBBABB3E1DFE04(iParam0);
					*uParam3 = unk_0x8E2886E911C2F128(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_107(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_98(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xF7BAF104A598DD7E(iParam0, iParam1);
		*uParam3 = unk_0xFFE2C28AD044C475(iParam0, iParam1);
		*uParam4 = unk_0x983E2D322F3F11B7(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_108()
{
	func_109();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_109()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_99(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_98(unk_0x0FA8183DAD2B3203());
			if (func_90(iVar0) && (!func_70(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_90(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

void func_110(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_98(iParam0);
	if (func_90(iVar0) && !unk_0x2BF5E63466422C38(iParam0))
	{
		if (iParam0 == unk_0x0FA8183DAD2B3203())
		{
			func_111(iParam0, &(Global_111560.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111560.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x2C8686E4C6BBAD42(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xB8C11FBB0C3EFC58();
					if (Global_111560.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111560.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x6A6D6F2F2BD9B243(unk_0x7C7787D2D7139A85(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x41410A69AD49AFCD(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x41410A69AD49AFCD(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x41410A69AD49AFCD(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_111(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_116(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x8DF76C2DDD0C74F6(iParam0, func_116(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x65BD637EA0479590(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5AFECC8B67A4CAE5(iParam0, Var4.f_0);
					Var4.f_4 = unk_0xC844B452D019B380(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x381EB99C42833B26(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_114(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xF484FDC5C64733BF(iParam0, Var4.f_0, iVar2))
						{
							unk_0xA1E7A40E1F56E511(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_114(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0xC71F7DF3A350F7BC();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xF361E8FFC872484A(iVar9, &Var11) && !func_113(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0xC095980A527DC92E(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x65BD637EA0479590(iParam0, Var4.f_0);
					if (unk_0x980642D66B4A4C61(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x5AFECC8B67A4CAE5(iParam0, Var4.f_0);
						Var4.f_4 = unk_0xC844B452D019B380(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x381EB99C42833B26(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x6E2A2D341D785598(iVar9))
					{
						if (unk_0x0575653A26C467A1(iVar9, iVar1, &Var50))
						{
							if (!func_112(Var50.f_3))
							{
								if (unk_0xF484FDC5C64733BF(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xA1E7A40E1F56E511(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x980642D66B4A4C61(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_113(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
			case joaat("weapon_raycarbine"):
			case joaat("weapon_rayminigun"):
			case joaat("weapon_raypistol"):
			case joaat("weapon_navyrevolver"):
			case joaat("weapon_ceramicpistol"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_115(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x6E2A2D341D785598(iVar1))
					{
						if (unk_0x0575653A26C467A1(iVar1, iVar2, &Var43))
						{
							if (!func_112(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_115(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xC71F7DF3A350F7BC();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xF361E8FFC872484A(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = func_98(iParam0);
	if (func_90(iVar0) && !unk_0x2BF5E63466422C38(iParam0))
	{
		Global_111560.f_2358.f_539.f_294[iVar0] = unk_0xCEF1BE9754DAD684(iParam0);
	}
}

void func_118(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
	uParam0->f_3 = unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203());
	uParam0->f_5 = unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203());
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		uParam0->f_4 = unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x222F76006659B0EB(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_76825, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_76825, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_76825, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_76825, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x1B15167A6E6F7820(unk_0x0FA8183DAD2B3203()) == unk_0x2BA8B1187A604700(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_122(&iVar0))
		{
			if (func_120(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_192();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_119(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_119(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE785232D8E9EEFBC(Param0))
	{
		iVar0 = unk_0x2BA8B1187A604700(Param4, sParam3);
		if (!unk_0x61837007ACF2F2C2(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xD25FDDC46D3D91C5(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_120(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_121(*uParam1, 0f, 0f, 0f, 0);
}

bool func_121(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_122(var uParam0)
{
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0) && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		if (func_145())
		{
			*uParam0 = func_128(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 6, -1, 0, 1, -1);
			if (func_127(*uParam0) && !func_123(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_123(int iParam0)
{
	return func_124(iParam0, 0, 1);
}

int func_124(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_126() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_102(func_125(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_126()
{
	return Global_30736;
}

int func_127(int iParam0)
{
	return func_124(iParam0, 5, 1);
}

int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_144(iVar0))
		{
			if (!bParam5 || func_143(iVar0))
			{
				fVar1 = unk_0xD34AF93E9BCF12F0(Param0, func_129(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_129(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_140(Global_100764);
			break;
		
		case 46:
			if (Global_1590285 != func_139())
			{
				if (func_138(Global_1590285))
				{
					return func_131(2, 2);
				}
				else if (func_130(Global_1590285))
				{
					return func_131(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696181;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_130(int iParam0)
{
	if (iParam0 != func_139())
	{
		if ((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_131(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590285 != func_139())
	{
		if (iParam1 == 3)
		{
			if (func_132(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 4))
			{
				if (func_132(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 5))
			{
				if (func_132(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_132(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_137(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_137(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_135(iParam0) };
	}
	else
	{
		Var12 = { func_134(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_133(Var18, -Var0.f_3.f_2) };
	Var18 = { func_133(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x16DECC52D9360F1E(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_133(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_134(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_135(int iParam0)
{
	return func_136(iParam0);
}

struct<6> func_136(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_137(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_138(int iParam0)
{
	if (iParam0 != func_139())
	{
		if ((unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_255, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	return -1;
}

Vector3 func_140(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_141() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_141()
{
	return func_142(unk_0x7C7787D2D7139A85());
}

var func_142(int iParam0)
{
	return unk_0x2E938CC56931C5D4(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

int func_143(int iParam0)
{
	return func_124(iParam0, 0, 0);
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_145()
{
	return Global_98721.f_345 > 0;
}

int func_146()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

void func_147(int iParam0)
{
	struct<6> Var0;
	
	Var0 = { func_148(iParam0) };
	unk_0x42B7026D73D48D50(&Var0);
	while (!unk_0x5F74A266852104C3(&Var0))
	{
		unk_0x42B7026D73D48D50(&Var0);
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_219 = unk_0xB8BA7F44DF1575E1(&Var0, &Local_43, 8, 29500);
	unk_0x0915CE69760E0654(&Var0);
}

struct<6> func_148(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BailBond1", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "BailBond2", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "BailBond3", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "BailBond4", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = func_150(uParam0, 0, 4, 0, 0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_154(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x74DBD46763D0F643(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_152(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_151(uParam0, iParam4);
		}
	}
	return 2;
}

void func_151(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_152(int iParam0)
{
	return func_153(iParam0, Global_41396);
}

int func_153(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_152(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_155(bool bParam0)
{
	if (unk_0xFF392459DD4CD797())
	{
		return 0;
	}
	if (Global_30738)
	{
		return 0;
	}
	if (func_70(6) || func_70(7))
	{
		return 0;
	}
	if (func_192() != 2)
	{
		return 0;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_152(4))
		{
			return 0;
		}
		if (unk_0x86652FD1CD2DBA07())
		{
			return 0;
		}
		if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
			{
				return 0;
			}
		}
		if (unk_0x33D7ABC47E81DCF9())
		{
			return 0;
		}
		if (Global_73784)
		{
			return 0;
		}
		if (func_158() || func_157())
		{
			return 0;
		}
		if (func_156())
		{
			return 0;
		}
	}
	return 1;
}

int func_156()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

int func_157()
{
	if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				iVar0 = func_192();
				if (!func_90(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_158()) || Global_110607) || Global_30738) || func_164()) || func_163(8, -1)) || func_145()) || func_162()) || func_156()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1) || func_158()) || Global_30738) || func_164()) || func_163(8, -1)) || func_156()) || func_145()) || func_162()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0xEC9DA7D08BCA2C06(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_158()) || Global_110607) || Global_30738) || func_164()) || func_163(8, -1)) || func_156()) || func_145()) || func_162()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0)) || func_158()) || Global_110607) || Global_30738) || func_164()) || func_163(8, -1)) || func_145()) || func_162()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || func_163(8, -1)) || func_157()) || func_161()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_163(8, -1) || func_145()) || func_162()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0x16587C6F71675106() && unk_0xD2F18A1388CC0E5C() != 3) && unk_0x9995D24FB0AFE632() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
						{
							if ((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_158()) || Global_30738) || func_164()) || func_163(8, -1)) || func_162()) || func_156()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || func_158()) || func_162()) || Global_110607) || Global_30738) || func_164()) || Global_42561) || func_163(8, -1)) || func_156()) || func_161()) || func_157()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x98E76A2D5D526CF9(unk_0x0FA8183DAD2B3203(), 0) || !unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) || !unk_0xB5ACA45580455592(unk_0x7C7787D2D7139A85())) || !unk_0xBF28CCACDDFF5346()) || unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0)) || unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203())) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1)) || unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203())) || unk_0x833B0C8009274D84(unk_0x0FA8183DAD2B3203())) || unk_0xDC58B22FD83FE49F(unk_0x0FA8183DAD2B3203())) || unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1)) || unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85())) || func_158()) || Global_110607) || Global_30738) || func_164()) || func_163(8, -1)) || func_156()) || func_161()) || func_145()) || func_162()) || func_157())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_160()
{
	return Global_98708.f_1;
}

int func_161()
{
	if (Global_95621 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

bool func_162()
{
	return Global_98721.f_346 > 0;
}

bool func_163(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

var func_164()
{
	return Global_1312873;
}

void func_165(int iParam0)
{
	if (Global_111560.f_24981.f_1 == 0)
	{
		if (!func_172(14))
		{
			if (!iLocal_51)
			{
				if (func_31(26, func_32(iParam0), 0))
				{
					func_169("AM_H_BAILBONDS", 1, 0, -1, 10000, 4, 0, 0, 0);
					iLocal_51 = 1;
				}
			}
			else
			{
				switch (func_167("AM_H_BAILBONDS"))
				{
					case 2:
						iLocal_51 = 0;
						break;
					
					case 1:
						func_166(14);
						break;
					}
				}
			}
	}
}

void func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

int func_167(char* sParam0)
{
	if (unk_0x2553916E420E8EF0(sParam0, &Global_110203))
	{
		return 1;
	}
	if (func_168(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_168(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0x2553916E420E8EF0(uParam0, &(Global_111560.f_20405[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_169(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_170(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_170(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x2553916E420E8EF0(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0x2553916E420E8EF0(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_171();
	}
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_173(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_31(26, func_32(uParam0->f_4), 0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if ((!func_191() && !unk_0x01891E23361FD324(unk_0x0FA8183DAD2B3203())) && !unk_0xA99E47125B44409B())
				{
					func_190(uParam1, 2, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
					if (func_174(uParam1, func_189(uParam0->f_4), func_188(uParam0->f_4), 4, 0, 0, 0))
					{
						uParam0->f_7 = 1;
					}
				}
				else
				{
					uParam0->f_7 = 1;
				}
			}
			else
			{
				uParam0->f_7 = 1;
			}
		}
	}
}

bool func_174(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_187(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_175(sParam2, iParam3, 0);
}

int func_175(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_186();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_163(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_185();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_184();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_183())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_182())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_181();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_180();
		func_176();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_186();
	}
	return 0;
}

void func_176()
{
	if (!func_177())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_177()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_139())
	{
		return 0;
	}
	if (func_178(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0)
{
	return func_179(iParam0, 20);
}

bool func_179(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_181()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_182()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_184()
{
	if (func_70(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_192();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_185()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

void func_186()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_187(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1_TE";
		
		case 1:
			return "BB2_TE";
		
		case 2:
			return "BB3_TE";
		
		case 3:
			return "BB4_TE";
		
		default:
	}
	return "NULL";
}

char* func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BB1AUD";
		
		case 1:
			return "BB2AUD";
		
		case 2:
			return "BB3AUD";
		
		case 3:
			return "BB4AUD";
		
		default:
	}
	return "NULL";
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

int func_191()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	func_109();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_24(*iParam0);
	iVar1 = func_23(*iParam0);
	iVar2 = func_22(*iParam0);
	iVar3 = func_21(*iParam0);
	iVar4 = func_20(*iParam0);
	iVar5 = func_19(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_27(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_27(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_194(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_200(uParam0, iParam1);
	func_199(uParam0, iParam2);
	func_198(uParam0, iParam3);
	func_197(uParam0, iParam5);
	func_196(uParam0, iParam4);
	func_195(uParam0, iParam6);
}

void func_195(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_196(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_23(*uParam0);
	iVar1 = func_24(*uParam0);
	if (iParam1 < 1 || iParam1 > func_27(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_197(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_198(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_199(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_200(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_201()
{
	var uVar0;
	
	func_200(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_199(&uVar0, unk_0x8F7802EF0E800F47());
	func_198(&uVar0, unk_0xA63165E74E9A042B());
	func_196(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_197(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_195(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_202(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_221(iParam0) == 3)
	{
		return;
	}
	if (func_221(iParam0) == 4)
	{
		return;
	}
	func_203(func_221(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x367DA79FE620711B(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x41410A69AD49AFCD(iVar1, iVar0, 1);
	}
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_220();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_219(99, 1);
					func_218(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_218(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_218(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_216(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_212(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_218(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_218(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_212(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_218(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_218(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_218(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_218(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_218(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_218(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_218(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xB4D15BCA2CC28DF9())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_218(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_218(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_218(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_218(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_212(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_218(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_218(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_218(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_218(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_218(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_211(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_219(95, iParam3);
					break;
				
				case 1:
					func_219(97, iParam3);
					break;
				
				case 2:
					func_219(96, iParam3);
					break;
			}
			func_219(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_206(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_206(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_218(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_218(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_218(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_205(iParam0);
	if (Global_41396 == 15)
	{
		func_204(0);
	}
	return 1;
}

void func_204(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_206(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_210(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_210(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_210(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_210(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_209(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_209(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_209(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_209(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_209(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_209(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0) || unk_0xA2BC31158C8CEFD2(Global_2097152[func_208() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x3B76114EC84D5812(&(Global_111560.f_20559.f_471), iParam0);
		unk_0x3B76114EC84D5812(&(Global_2097152[func_208() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x6C607B5286DEE8D9("COUP_RED");
		unk_0x0AC9F8E1AFCEC860(func_207(iParam0));
		unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_208()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_103(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_210(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_104();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_211(int iParam0)
{
	func_219(93, iParam0);
	func_219(29, iParam0);
	func_219(30, iParam0);
}

bool func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_213(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_213(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_213(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_213(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x71EC776E812C6A0A();
		iVar1 = func_102(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x71EC776E812C6A0A();
		iVar3 = func_102(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x71EC776E812C6A0A();
		iVar5 = func_102(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x71EC776E812C6A0A();
		iVar7 = func_102(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x71EC776E812C6A0A();
		iVar9 = func_102(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x71EC776E812C6A0A();
		iVar11 = func_102(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x393E9918BC37548A())
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_20559.f_471, iParam0);
	}
	return unk_0xA2BC31158C8CEFD2(Global_2097152[func_208() /*10828*/].f_6168.f_10, iParam0);
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_104();
	}
	iVar1 = func_215(iParam0, iParam1);
	uVar2 = func_214(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_104();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_216(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x17A6988567C0F4A8(27))
	{
		return 0;
	}
	if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
		func_217(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_57(27, 1);
	return 1;
}

int func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x7FA0488109D2A795(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x968D4E056664C967(iParam0, iParam1);
	}
	return 0;
}

void func_218(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_219(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_220()
{
	int iVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_221(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

int func_222(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	iVar0 = func_32(iParam0);
	sVar1 = func_224(iParam0, bParam1);
	sVar2 = func_223(iParam0);
	if (func_14(26, iVar0, 1))
	{
		func_13(26, sVar1, 0);
		func_12(26, sVar2);
		func_5(26);
		return 1;
	}
	return 0;
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BBONDS_DMAIL_C1";
		
		case 1:
			return "BBONDS_DMAIL_C2";
		
		case 2:
			return "BBONDS_DMAIL_C3";
		
		case 3:
			return "BBONDS_DMAIL_C4";
		
		default:
	}
	return "NULL";
}

char* func_224(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K1";
			}
			else
			{
				return "BBONDS_DMAIL_N1";
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K2";
			}
			else
			{
				return "BBONDS_DMAIL_N2";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K3";
			}
			else
			{
				return "BBONDS_DMAIL_N3";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "BBONDS_DMAIL_K4";
			}
			else
			{
				return "BBONDS_DMAIL_N4";
			}
			break;
	}
	return "NULL";
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!unk_0xBF28CCACDDFF5346())
	{
		return 0;
	}
	if (func_246())
	{
		return 0;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x330AA53EE85E1453(unk_0x0FA8183DAD2B3203()) != -1)
		{
			return 0;
		}
	}
	if (unk_0x04C7A9862FF737E9())
	{
		return 0;
	}
	if (func_245() && iParam2 < 4)
	{
		return 0;
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (func_243(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0xA2BC31158C8CEFD2(iParam0, func_108()) && !unk_0xA2BC31158C8CEFD2(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_76575)
	{
		return 0;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_94706)
	{
		return 0;
	}
	if ((func_158() || (Global_22211.f_4 && Global_22211.f_104 == 4)) || func_157())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(iParam4, 18))
	{
		if (!unk_0xA2BC31158C8CEFD2(iParam0, func_108()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 1)
		{
			return 0;
		}
		if (unk_0xAF5E782C9FEC8AE6())
		{
			return 0;
		}
		if (Global_95627)
		{
			return 0;
		}
		if (func_236(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (unk_0xA2BC31158C8CEFD2(iParam0, func_108()))
			{
				iVar1 = func_233(func_192());
				iVar2 = func_233(iParam1);
				iVar3 = func_232(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_111560.f_18098.f_175[iVar3 /*19*/].f_8 == 1 || Global_111560.f_18098.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_231(&(Global_111560.f_18098.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_228(&(Global_111560.f_18098.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 2)
	{
		return 0;
	}
	if (func_156())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(iParam4, 3))
	{
		if (Global_110607)
		{
			return 0;
		}
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
			{
				return 0;
			}
		}
		if (Global_110270.f_19 != 0)
		{
			return 0;
		}
		if (Global_41396 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_227(unk_0x0FA8183DAD2B3203(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_192();
	if (func_90(iVar4))
	{
		unk_0xB7AEB865047E4CC6(unk_0x0FA8183DAD2B3203(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_99(1);
						iVar22[1] = func_99(2);
						break;
					
					case 1:
						iVar22[0] = func_99(0);
						iVar22[1] = func_99(2);
						break;
					
					case 2:
						iVar22[0] = func_99(0);
						iVar22[1] = func_99(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_99(1);
				iVar22[1] = func_99(2);
				break;
			
			case 6:
				iVar22[0] = func_226(12);
				iVar22[1] = func_99(1);
				break;
			
			case 7:
				iVar22[0] = func_226(12);
				iVar22[1] = func_99(0);
				break;
			
			case 8:
				iVar22[0] = func_99(0);
				iVar22[1] = func_99(1);
				break;
			
			case 9:
				iVar22[0] = func_99(0);
				iVar22[1] = func_99(2);
				break;
			
			case 10:
				iVar22[0] = func_226(23);
				iVar22[1] = func_99(0);
				break;
			
			case 11:
				iVar22[0] = func_226(23);
				iVar22[1] = func_99(0);
				break;
			
			default:
				if (func_90(iParam1))
				{
					iVar22[0] = func_99(iParam1);
				}
				else
				{
					iVar22[0] = func_226(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (unk_0xD4B321D9096B01FC(uVar5[iVar26]))
					{
						if (unk_0x7F375072508F738F(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!unk_0xF4B969E0807E76C7(uVar5[iVar26], 0))
							{
								if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
								{
									if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(uVar5[iVar26], 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_96177[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_96177[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_96177[2];
						break;
				}
				if (unk_0xD4B321D9096B01FC(iVar27))
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iVar27, 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_98594[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_98594[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_98594[2];
						break;
				}
				if (unk_0xD4B321D9096B01FC(iVar27))
				{
					if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
					{
						if (unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iVar27, 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_226(int iParam0)
{
	if (!func_90(iParam0))
	{
		return func_100(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_227(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar5;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { Global_41397[iParam1 /*5*/] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_227(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

float func_228(var uParam0)
{
	if (func_231(uParam0))
	{
		if (func_230(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_229(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_229(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x393E9918BC37548A())
	{
		iVar2 = unk_0x169A8AC9F93C2727();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

bool func_230(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

bool func_231(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

int func_232(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_233(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_235())
	{
		return func_234(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_235())
	{
		return 6;
	}
	if (iParam0 == 168)
	{
		return 6;
	}
	return 6;
}

var func_234(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_11;
}

int func_235()
{
	if (Global_30736 == 0 || Global_30736 == 2)
	{
		return 167;
	}
	return 161;
}

int func_236(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		iVar36 = func_242();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 2) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_18569[iVar32 /*6*/], 3))
			{
				func_237(iVar32, &Var0);
				fVar35 = unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_237(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_238(uParam1, "Abigail1", func_240(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 1:
			func_238(uParam1, "Abigail2", func_240(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 2:
			func_238(uParam1, "Barry1", func_240(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 3:
			func_238(uParam1, "Barry2", func_240(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 4:
			func_238(uParam1, "Barry3", func_240(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 5:
			func_238(uParam1, "Barry3A", func_240(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 6:
			func_238(uParam1, "Barry3C", func_240(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 7:
			func_238(uParam1, "Barry4", func_240(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_239(iParam0), 0, 0);
			break;
		
		case 8:
			func_238(uParam1, "Dreyfuss1", func_240(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 9:
			func_238(uParam1, "Epsilon1", func_240(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 10:
			func_238(uParam1, "Epsilon2", func_240(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 11:
			func_238(uParam1, "Epsilon3", func_240(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 12:
			func_238(uParam1, "Epsilon4", func_240(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 13:
			func_238(uParam1, "Epsilon5", func_240(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 14:
			func_238(uParam1, "Epsilon6", func_240(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 15:
			func_238(uParam1, "Epsilon7", func_240(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 16:
			func_238(uParam1, "Epsilon8", func_240(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 17:
			func_238(uParam1, "Extreme1", func_240(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 18:
			func_238(uParam1, "Extreme2", func_240(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 19:
			func_238(uParam1, "Extreme3", func_240(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 20:
			func_238(uParam1, "Extreme4", func_240(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 21:
			func_238(uParam1, "Fanatic1", func_240(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_239(iParam0), 1, 0);
			break;
		
		case 22:
			func_238(uParam1, "Fanatic2", func_240(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_239(iParam0), 1, 0);
			break;
		
		case 23:
			func_238(uParam1, "Fanatic3", func_240(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_239(iParam0), 0, 1);
			break;
		
		case 24:
			func_238(uParam1, "Hao1", func_240(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_239(iParam0), 0, 1);
			break;
		
		case 25:
			func_238(uParam1, "Hunting1", func_240(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 26:
			func_238(uParam1, "Hunting2", func_240(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 27:
			func_238(uParam1, "Josh1", func_240(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 28:
			func_238(uParam1, "Josh2", func_240(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 29:
			func_238(uParam1, "Josh3", func_240(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 30:
			func_238(uParam1, "Josh4", func_240(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 31:
			func_238(uParam1, "Maude1", func_240(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 32:
			func_238(uParam1, "Minute1", func_240(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 33:
			func_238(uParam1, "Minute2", func_240(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 34:
			func_238(uParam1, "Minute3", func_240(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 35:
			func_238(uParam1, "MrsPhilips1", func_240(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 36:
			func_238(uParam1, "MrsPhilips2", func_240(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 37:
			func_238(uParam1, "Nigel1", func_240(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 38:
			func_238(uParam1, "Nigel1A", func_240(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 39:
			func_238(uParam1, "Nigel1B", func_240(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
		
		case 40:
			func_238(uParam1, "Nigel1C", func_240(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
		
		case 41:
			func_238(uParam1, "Nigel1D", func_240(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_239(iParam0), 1, 1);
			break;
		
		case 42:
			func_238(uParam1, "Nigel2", func_240(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 43:
			func_238(uParam1, "Nigel3", func_240(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 1);
			break;
		
		case 44:
			func_238(uParam1, "Omega1", func_240(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 45:
			func_238(uParam1, "Omega2", func_240(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 46:
			func_238(uParam1, "Paparazzo1", func_240(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 47:
			func_238(uParam1, "Paparazzo2", func_240(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 48:
			func_238(uParam1, "Paparazzo3", func_240(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 49:
			func_238(uParam1, "Paparazzo3A", func_240(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 50:
			func_238(uParam1, "Paparazzo3B", func_240(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 51:
			func_238(uParam1, "Paparazzo4", func_240(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 52:
			func_238(uParam1, "Rampage1", func_240(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 54:
			func_238(uParam1, "Rampage3", func_240(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 55:
			func_238(uParam1, "Rampage4", func_240(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 56:
			func_238(uParam1, "Rampage5", func_240(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_239(iParam0), 0, 0);
			break;
		
		case 53:
			func_238(uParam1, "Rampage2", func_240(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_239(iParam0), 1, 0);
			break;
		
		case 57:
			func_238(uParam1, "TheLastOne", func_240(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 58:
			func_238(uParam1, "Tonya1", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 59:
			func_238(uParam1, "Tonya2", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 60:
			func_238(uParam1, "Tonya3", func_240(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 61:
			func_238(uParam1, "Tonya4", func_240(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		case 62:
			func_238(uParam1, "Tonya5", func_240(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_239(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_238(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_240(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_241(iParam0) };
	if (unk_0x9591DE0F00127F2A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_241(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_242()
{
	func_109();
	switch (Global_111560.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_244(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42348[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_245()
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	return 1;
}

int func_246()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		return 0;
	}
	Var0 = { func_248(unk_0x7A8732CFB5113E77()) };
	fVar3 = Local_43.f_3;
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x916AF183F71F17C1(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
			{
				fVar3 = (fVar3 + 50f);
				if (fVar3 > 200f)
				{
					fVar3 = 200f;
				}
			}
		}
	}
	if (unk_0xB7A628320EFF8E47(Var0, Local_43) <= (fVar3 * fVar3))
	{
		return 1;
	}
	return 0;
}

Vector3 func_248(var uParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(uParam0), 0);
}

int func_249()
{
	struct<3> Var0;
	
	if (unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
	{
		return 0;
	}
	Var0 = { func_248(unk_0x7A8732CFB5113E77()) };
	if (unk_0xB7A628320EFF8E47(Var0, 2727.58f, 4144.19f, 43.95f) >= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_250()
{
	char* sVar0;
	
	if (iLocal_225 != 0)
	{
		if (!func_252())
		{
			iLocal_225 = 4;
		}
		switch (iLocal_225)
		{
			case 1:
				uLocal_220 = unk_0x1FAFE9BB9D8960C1("MIDSIZED_MESSAGE");
				iLocal_225 = 2;
				break;
			
			case 2:
				if (bLocal_222)
				{
					sVar0 = "BBS_MPD";
				}
				else
				{
					sVar0 = "BBS_MPK";
				}
				if (unk_0x08EA887200715AD9(uLocal_220))
				{
					unk_0xF1BC72CEC2746995(uLocal_220, "SHOW_SHARD_MIDSIZED_MESSAGE");
					unk_0x759AC38FBC6CCA9E("BBS_MP");
					unk_0x81019766FF500CCA();
					unk_0x759AC38FBC6CCA9E(sVar0);
					unk_0x0AC9F8E1AFCEC860(sLocal_224);
					unk_0x81019766FF500CCA();
					unk_0xAC7C2DE2DDC7AF03();
					iLocal_223 = unk_0x9B35D07DCD0F0B43();
					iLocal_225 = 3;
				}
				break;
			
			case 3:
				if (unk_0x08EA887200715AD9(uLocal_220))
				{
					unk_0x53F520B89860756C(uLocal_220, 255, 255, 255, 255, 0);
					unk_0xF314976CA3E17AC7(4);
					if (!iLocal_221)
					{
						unk_0x9964F5BBD9415AB7(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
						iLocal_221 = 1;
					}
				}
				if ((unk_0x9B35D07DCD0F0B43() - iLocal_223) > 7000)
				{
					if (!iLocal_52)
					{
						unk_0xF1BC72CEC2746995(uLocal_220, "SHARD_ANIM_OUT");
						unk_0xD02F24F3E2DB263A(1);
						unk_0xD435957F6275B434(0.33f);
						unk_0xAC7C2DE2DDC7AF03();
						iLocal_52 = 1;
					}
				}
				if ((unk_0x9B35D07DCD0F0B43() - iLocal_223) > 7500)
				{
					iLocal_225 = 4;
				}
				break;
			
			case 4:
				unk_0x749CA887CB0AFEC9(&uLocal_220);
				iLocal_52 = 0;
				func_251();
				break;
			}
	}
}

void func_251()
{
	iLocal_225 = 0;
	iLocal_221 = 0;
	bLocal_222 = false;
	iLocal_223 = 0;
}

int func_252()
{
	if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		return 0;
	}
	if (unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1))
	{
		return 0;
	}
	if (func_192() != 2)
	{
		return 0;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		return 0;
	}
	return 1;
}

void func_253()
{
	if (Global_111560.f_24981.f_1 == 0)
	{
		if (Global_111560.f_24981.f_2 == -1)
		{
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 0);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 1);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 2);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 3);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 4);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 5);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 6);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 7);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
			unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 9);
			iLocal_218 = func_201();
			func_193(&iLocal_218, 0, 0, 1, 0, 0, 0);
			Global_111560.f_24981.f_3 = iLocal_218;
			Global_111560.f_24981.f_2 = 4;
		}
	}
	if (Global_111560.f_24981.f_2 == 2)
	{
		Global_111560.f_24981.f_2 = 1;
	}
	if (Global_111560.f_24981.f_2 == 1)
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_24981), 8);
	}
	func_251();
	func_30();
	func_254(62, 2, 0);
}

void func_254(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_184();
		if (iParam1 == 4)
		{
			func_260(iParam0, 0, 1);
			func_260(iParam0, 1, 1);
			func_260(iParam0, 2, 1);
			func_259(iParam0, 0, 1);
			func_259(iParam0, 1, 1);
			func_259(iParam0, 2, 1);
		}
		else
		{
			if (func_258(iParam0, iParam1) == 1 && func_257(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_260(iParam0, iVar0, 1);
			func_259(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76577)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_256(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_256(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_255();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_256(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_255();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_256(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_255();
			}
		}
	}
}

void func_255()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xD54FB72F71EFE6C4(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x6C607B5286DEE8D9("");
		StringCopy(&cVar16, unk_0xD54FB72F71EFE6C4(&(Global_7966[1 /*6*/])), 64);
		sVar32 = unk_0xD54FB72F71EFE6C4("CELL_253");
		unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x6C607B5286DEE8D9("CELL_255");
		unk_0x0AC9F8E1AFCEC860(&(Global_7966[1 /*6*/]));
		unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x3B76114EC84D5812(&Global_7356, 0);
}

struct<4> func_256(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_258(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_259(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_261()
{
	if (func_263("AM_H_BAILBONDS"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	func_262(&uLocal_53, 2);
	unk_0x749CA887CB0AFEC9(&uLocal_220);
	if (Local_43.f_6 != -1)
	{
		func_37(&(Local_43.f_6));
	}
	unk_0x9C9E32388A7886A2();
}

void func_262(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_263(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

int func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xA1E7A40E1F56E511(&(Global_111560.f_9080.f_99.f_219[iVar0]), iVar1);
	return 1;
}

