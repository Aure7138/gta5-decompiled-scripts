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
	if (unk_0xFF6891E21E7FC193(unk_0x87F8C006AA576A39()) > 1)
	{
		unk_0x52F20802944F8DCE();
	}
	func_231(22);
	if (unk_0x89522B8E487D4EF9(18))
	{
		func_228();
	}
	func_225();
	while (true)
	{
		func_222();
		switch (Global_99155.f_29435.f_2)
		{
			case 0:
				if (func_221())
				{
					if (!func_219())
					{
						if (func_199(4, 62, 2, -1, 0))
						{
							if (func_196(Local_43.f_4, Local_43.f_5))
							{
								if (Local_43.f_5)
								{
									func_182(2, 94, 5000, 0, 0);
								}
								iLocal_218 = func_181();
								func_173(&iLocal_218, 0, 0, 0, 10, 0, 0);
								Global_99155.f_29435.f_3 = iLocal_218;
								unk_0x73817D396768E4C6(&(Global_99155.f_29435), 9);
								Global_99155.f_29435.f_2 = 1;
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
				if (func_172() == 2)
				{
					func_157(&Local_43, &uLocal_53);
					func_149(Local_43.f_4);
					if (!unk_0xB519E5386FBF69E5(Global_99155.f_29435, 8))
					{
						if (!func_219())
						{
							unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29435), 8);
						}
						else
						{
							unk_0x4EDE34FBADD967A6(2000);
						}
					}
					else if (func_219())
					{
						if (func_139(0))
						{
							if (func_133(&(Local_43.f_6)))
							{
								func_131(Local_43.f_4);
								if (!func_130())
								{
									func_76(unk_0x959E7FA37C0D0892(), 1);
								}
								Global_99155.f_29435.f_2 = 2;
							}
						}
						else
						{
							if (unk_0xB519E5386FBF69E5(Global_99155.f_29435, 8))
							{
								unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
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
					if (unk_0xB519E5386FBF69E5(Global_99155.f_29435, 8))
					{
						unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
					}
					unk_0x4EDE34FBADD967A6(4000);
				}
				break;
			
			case 2:
				if (!unk_0x8DB3F26E5CA85896(iLocal_219))
				{
					func_28(Global_97866);
				}
				break;
			
			case 3:
				if (func_17(Global_99155.f_29435.f_3))
				{
					Global_99155.f_29435.f_2 = 1;
				}
				break;
			
			case 4:
				if (iLocal_225 == 0)
				{
					if (func_17(Global_99155.f_29435.f_3))
					{
						Global_99155.f_29435.f_2 = 0;
					}
				}
				break;
			
			case 5:
				if (iLocal_225 == 0)
				{
					if (func_17(Global_99155.f_29435.f_3))
					{
						if (func_221())
						{
							if (func_199(4, 62, 2, -1, 0))
							{
								if (func_4())
								{
									func_182(2, 94, 5000, 0, 0);
									func_3(22);
									func_1();
									func_228();
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
					func_228();
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
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_2(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
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
	if (unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[iVar0], iVar1))
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_7699.f_99.f_219[iVar0]), iVar1);
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
	if (Global_45982[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_45982[iVar0 /*203*/].f_9 - 1);
	if (!Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_36682[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
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
		func_6(1, Global_36682[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36682[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_36682[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_45982[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (unk_0x2DFE588AA3727FE3())
	{
		return;
	}
	iVar0 = func_172();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL1");
				break;
			
			case 73:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL3");
				break;
			
			case 74:
				unk_0x4A4F36C4EFDE341F("PROPR_INCEMAIL2");
				break;
			
			default:
				unk_0x4A4F36C4EFDE341F(sParam3);
				if (!unk_0xF6917DE0E003509D(sParam4))
				{
					unk_0x9359E7CC54335EB9(sParam4);
				}
				if (!unk_0xF6917DE0E003509D(sParam5))
				{
					unk_0x9359E7CC54335EB9(sParam5);
				}
				if (!unk_0xF6917DE0E003509D(sParam6))
				{
					unk_0x9359E7CC54335EB9(sParam6);
				}
				if (!unk_0xF6917DE0E003509D(sParam7))
				{
					unk_0x9359E7CC54335EB9(sParam7);
				}
				if (!unk_0xF6917DE0E003509D(sParam8))
				{
					unk_0x9359E7CC54335EB9(sParam8);
				}
				if (!unk_0xF6917DE0E003509D(sParam9))
				{
					unk_0x9359E7CC54335EB9(sParam9);
				}
				if (!unk_0xF6917DE0E003509D(sParam10))
				{
					unk_0x9359E7CC54335EB9(sParam10);
				}
				if (!unk_0xF6917DE0E003509D(sParam11))
				{
					unk_0x9359E7CC54335EB9(sParam11);
				}
				if (!unk_0xF6917DE0E003509D(sParam12))
				{
					unk_0x9359E7CC54335EB9(sParam12);
				}
				if (!unk_0xF6917DE0E003509D(sParam13))
				{
					unk_0x9359E7CC54335EB9(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(unk_0x77AD0392EB2D45CC(&cVar2, &cVar2, 0, 2, unk_0xC083A2D1EE1A4BFF(func_8(iParam1)), 0));
		}
		else
		{
			func_7(unk_0x77AD0392EB2D45CC("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, unk_0xC083A2D1EE1A4BFF(func_8(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36674++;
				if (Global_36674 > 16)
				{
					Global_36674 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36676++;
				if (Global_36676 > 16)
				{
					Global_36676 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36675++;
				if (Global_36675 > 16)
				{
					Global_36675 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		unk_0xCC18B241D266EF14(-1, "Notification", &Global_14402, 1);
	}
}

void func_7(var uParam0)
{
	Global_36677[Global_36681] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36681++;
	if (Global_36681 == 3)
	{
		Global_36681 = 0;
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
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[0 /*29*/].f_7));
		
		case 1:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[1 /*29*/].f_7));
		
		case 2:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[2 /*29*/].f_7));
		
		case 7:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[12 /*29*/].f_7));
		
		case 4:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[60 /*29*/].f_7));
		
		case 6:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[62 /*29*/].f_7));
		
		case 3:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[14 /*29*/].f_7));
		
		case 16:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[97 /*29*/].f_7));
		
		case 19:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[99 /*29*/].f_7));
		
		case 15:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[96 /*29*/].f_7));
		
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
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[15 /*29*/].f_7));
		
		case 26:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[30 /*29*/].f_7));
		
		case 27:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[17 /*29*/].f_7));
		
		case 29:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[20 /*29*/].f_7));
		
		case 30:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[43 /*29*/].f_7));
		
		case 31:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[44 /*29*/].f_7));
		
		case 32:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[19 /*29*/].f_7));
		
		case 34:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[40 /*29*/].f_7));
		
		case 36:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[22 /*29*/].f_7));
		
		case 38:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[64 /*29*/].f_7));
		
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
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[122 /*29*/].f_7));
		
		case 40:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[125 /*29*/].f_7));
		
		case 41:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[113 /*29*/].f_7));
		
		case 42:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[126 /*29*/].f_7));
		
		case 43:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[127 /*29*/].f_7));
		
		case 44:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[124 /*29*/].f_7));
		
		case 45:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[114 /*29*/].f_7));
		
		case 46:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[115 /*29*/].f_7));
		
		case 47:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[116 /*29*/].f_7));
		
		case 48:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[123 /*29*/].f_7));
		
		case 49:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[117 /*29*/].f_7));
		
		case 50:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[118 /*29*/].f_7));
		
		case 51:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[119 /*29*/].f_7));
		
		case 52:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[120 /*29*/].f_7));
		
		case 53:
			return unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[121 /*29*/].f_7));
		
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
		if (Global_45982[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_45982[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_45982[iVar0 /*203*/].f_1;
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
	if (Global_45982[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_13(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_45982[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_45982[iVar0 /*203*/].f_10[(Global_45982[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
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
	if (Global_45982[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_45982[iVar0 /*203*/].f_2 = iParam0;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_45982[iVar0 /*203*/].f_10[Global_45982[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_45982[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45982[iVar0 /*203*/].f_4[iVar1] == Global_36682[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45982[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45982[iVar0 /*203*/].f_4[Global_45982[iVar0 /*203*/].f_3] = Global_36682[iParam1 /*12*/].f_3;
			Global_45982[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_45982[iVar0 /*203*/].f_4[iVar1] == Global_36682[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_45982[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_45982[iVar0 /*203*/].f_4[Global_45982[iVar0 /*203*/].f_3] = Global_36682[iParam1 /*12*/].f_2;
			Global_45982[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_45982[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_45982[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_15(Global_45982[iVar0 /*203*/].f_4[iVar1], Global_45982[iVar0 /*203*/].f_1, 1, bParam2, 0);
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
		iVar19 = (Global_40007[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_40007[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_36682[iVar20 /*12*/].f_1) };
		if (Global_36682[iVar20 /*12*/].f_2 == iParam0 && !Global_36682[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36682[iVar20 /*12*/].f_2;
		iVar0 = Global_45620[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_45620[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36674 = (Global_36674 - 1);
						if (Global_36674 < 0)
						{
							Global_36674 = 0;
						}
						break;
					
					case 1:
						Global_36675 = (Global_36675 - 1);
						if (Global_36675 < 0)
						{
							Global_36675 = 0;
						}
						break;
					
					case 2:
						Global_36676 = (Global_36676 - 1);
						if (Global_36676 < 0)
						{
							Global_36676 = 0;
						}
						break;
					}
				}
		}
		Global_45620[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45620[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45620[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45620[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45620[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_45620[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36674 = (Global_36674 - 1);
						if (Global_36674 < 0)
						{
							Global_36674 = 0;
						}
						break;
					
					case 1:
						Global_36675 = (Global_36675 - 1);
						if (Global_36675 < 0)
						{
							Global_36675 = 0;
						}
						break;
					
					case 2:
						Global_36676 = (Global_36676 - 1);
						if (Global_36676 < 0)
						{
							Global_36676 = 0;
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
			if (Global_45982[iVar24 /*203*/].f_1 == iParam1 && Global_45982[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45620[iParam0 /*120*/].f_18[iVar0] = Global_45982[iVar23 /*203*/].f_1;
		Global_45620[iParam0 /*120*/].f_1[iVar0] = (Global_45982[iVar23 /*203*/].f_9 - 1);
		Global_45620[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45620[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45620[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45620[iParam0 /*120*/]++;
		iVar25 = Global_45620[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_45982[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36682[iVar26 /*12*/].f_2;
		if (Global_45982[iVar23 /*203*/].f_10[(Global_45982[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_45982[iVar23 /*203*/].f_10[(Global_45982[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_36682[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_45620[iParam0 /*120*/].f_69[iVar0] && !bParam3)
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
		if (Global_45982[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_45982[iVar1 /*203*/] == 0)
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
		if (Global_45982[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_45982[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_45982[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_45982[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_45982[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_45982[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45620[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45620[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45620[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45620[iVar6 /*120*/].f_18[iVar8] == Global_45982[iVar4 /*203*/].f_1)
							{
								if (Global_45620[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36674 = (Global_36674 - 1);
											break;
										
										case 1:
											Global_36675 = (Global_36675 - 1);
											break;
										
										case 2:
											Global_36676 = (Global_36676 - 1);
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
	Global_45982[iVar4 /*203*/].f_2 = iParam0;
	Global_45982[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_45982[iVar4 /*203*/] = 1;
	}
	Global_99155.f_25486.f_310++;
	if (Global_99155.f_25486.f_310 == 0)
	{
		Global_99155.f_25486.f_310 = 1;
	}
	Global_45982[iVar4 /*203*/].f_1 = Global_99155.f_25486.f_310;
	Global_45982[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

bool func_17(int iParam0)
{
	return func_18(func_181(), iParam0);
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_25(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
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
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29435), func_73(Local_43.f_4));
			if (iParam0 == 1)
			{
				func_72(0);
				iVar0 = 8;
				unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29435), func_71(Local_43.f_4));
			}
			else
			{
				func_72(1);
				iVar0 = 4;
				unk_0x73817D396768E4C6(&(Global_99155.f_29435), func_71(Local_43.f_4));
				func_182(2, 94, 10000, 0, 0);
				if (Global_85535 == 0)
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
				if (unk_0xB519E5386FBF69E5(Global_99155.f_29435, func_71(Local_43.f_4)))
				{
					iLocal_218 = func_181();
					func_173(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
					Global_99155.f_29435.f_3 = iLocal_218;
					Global_99155.f_29435.f_2 = 5;
					func_1();
				}
				else
				{
					Global_99155.f_29435.f_2 = 6;
					func_1();
				}
			}
			else
			{
				Global_99155.f_29435.f_1 = func_35();
				unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
				func_30();
				iLocal_218 = func_181();
				func_173(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
				Global_99155.f_29435.f_3 = iLocal_218;
				Global_99155.f_29435.f_2 = 4;
				func_1();
			}
			if (iParam0 != 1)
			{
				func_29();
			}
			break;
		
		case 3:
			if (Global_91025 == 10)
			{
				func_131(Local_43.f_4);
			}
			else if (Global_91025 == 13)
			{
				func_38();
				func_37(&(Local_43.f_6));
				unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
				iLocal_218 = func_181();
				iVar0 = 8;
				func_173(&iLocal_218, 0, 0, iVar0, 0, 0, 0);
				Global_99155.f_29435.f_3 = iLocal_218;
				Global_99155.f_29435.f_2 = 3;
				func_38();
				func_1();
			}
			break;
		
		case 0:
			func_38();
			func_37(&(Local_43.f_6));
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
			Global_99155.f_29435.f_2 = 1;
			break;
	}
}

void func_29()
{
	char cVar0[24];
	
	StringCopy(&cVar0, "Maude_PostBailBond", 24);
	unk_0xCA3345CE8849CB88(&cVar0);
	unk_0x5BA7CCA84A74BEA3(&cVar0);
	while (!unk_0xD51489677E1B0844(&cVar0))
	{
		unk_0x5BA7CCA84A74BEA3(&cVar0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xE81651AD79516E48(&cVar0, 1424);
	unk_0x307B32C17692E50D(&cVar0);
}

void func_30()
{
	int iVar0;
	
	iLocal_219 = 0;
	Local_43.f_4 = Global_99155.f_29435.f_1;
	Local_43 = { func_34(Local_43.f_4) };
	Local_43.f_3 = func_33(Local_43.f_4);
	Local_43.f_6 = -1;
	iVar0 = Global_99155.f_29435.f_1;
	iVar0 = (iVar0 - 1);
	if (iVar0 >= 0 && unk_0xB519E5386FBF69E5(Global_99155.f_29435, func_71(iVar0)))
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
	iVar1 = Global_36682[iParam1 /*12*/].f_3;
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = -1;
	iVar3 = 0;
	iVar4 = iParam2;
	iVar3 = 0;
	while (iVar3 < Global_45982[iVar0 /*203*/].f_9)
	{
		if (Global_45982[iVar0 /*203*/].f_10[iVar3 /*48*/] == iParam1)
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
		if ((Global_45620[iVar1 /*120*/].f_86[iVar3] && Global_45620[iVar1 /*120*/].f_18[iVar3] == Global_45982[iVar0 /*203*/].f_1) && Global_45620[iVar1 /*120*/].f_1[iVar3] == iVar2)
		{
			return Global_45620[iVar1 /*120*/].f_69[iVar3];
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
		if (!unk_0xB519E5386FBF69E5(Global_99155.f_29435, iVar0))
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
		if (!unk_0xB519E5386FBF69E5(Global_99155.f_29435, iVar0))
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
	if (!*uParam0 == Global_35581)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35580 = 0;
	Global_35582 = 0;
	Global_35619 = 15;
	Global_55575 = 0;
	Global_55576 = 0;
}

void func_38()
{
	func_55();
	func_47();
	func_43();
	func_42();
	func_41();
	func_40();
	Global_91062 = 0;
	Global_85533 = -1;
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 17);
	Global_91060 = 0;
	unk_0xB2F50649D78A758A(0);
	unk_0x753875ECA9A6014E(0);
	unk_0xBE3A91305A4366F2(1);
	unk_0x3795BAD74B7A7E52(1);
	unk_0x411F5C5856A421B7(1);
	func_39(0);
}

void func_39(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 13);
	}
}

void func_40()
{
	Global_69476 = { 0f, 0f, 0f };
	Global_69479 = 0f;
	Global_91025.f_21 = 145;
}

void func_41()
{
	StringCopy(&Global_69468, "", 16);
	StringCopy(&Global_69472, "", 16);
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91025.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_43()
{
	Global_91025 = 13;
	Global_91025.f_1 = -1;
	Global_91025.f_2 = 0;
	Global_91025.f_30 = 0f;
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 25);
	Global_91059 = 0;
	func_46(0);
	func_45();
	func_44();
	Global_91025.f_18 = -1;
	Global_91025.f_19 = -1;
}

void func_44()
{
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 22);
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 8);
}

void func_45()
{
	if (Global_91025.f_16 != 0)
	{
		unk_0x8A86A209B0F0AF7D(&(Global_91025.f_16));
		Global_91025.f_16 = 0;
	}
	if (Global_91025.f_17 != 0)
	{
		unk_0x8A86A209B0F0AF7D(&(Global_91025.f_17));
		Global_91025.f_17 = 0;
	}
}

void func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36168 = 1;
	}
	else
	{
		Global_36168 = 0;
	}
}

void func_47()
{
	func_48(&Global_95220);
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
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_52(&(uParam0->f_2305));
	func_50(&(uParam0->f_2311));
	func_49(&(uParam0->f_2401));
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
	StringCopy(&Global_92807, "", 32);
	func_48(&Global_92815);
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
	if (iParam0 >= 70)
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
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_68(&Global_2558814))
	{
		if (func_66(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_59(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
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
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
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
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
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
	return (*uParam0)[iParam1] == 70;
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
	func_64(uParam0, (Global_2558813 - 0.5f));
}

void func_63(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_64(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_65(var uParam0)
{
	return uParam0->f_72;
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
	return uParam0->f_71 == 1;
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
	return Global_35619 == iParam0;
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
	
	if (!unk_0xB519E5386FBF69E5(Global_99155.f_29435, 9))
	{
		if (func_17(Global_99155.f_29435.f_3))
		{
			if (func_221())
			{
				if (func_199(4, 62, 2, -1, 0))
				{
					iVar0 = func_75(iParam0);
					if (func_14(26, iVar0, 0))
					{
						unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29435), 9);
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
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 17);
	func_77(cParam0, iParam1, 0);
}

void func_77(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91025 != 10 && Global_91025 != 9)
	{
		StringCopy(&Global_92807, cParam0, 32);
		func_79(&Global_92815, cParam0, 0, "Start", iParam1, iParam2);
		func_78();
		Global_85536 = 0;
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	Global_95220 = Global_92815;
	Global_95220.f_1 = Global_92815.f_1;
	Global_95220.f_6 = Global_92815.f_6;
	Global_95220.f_7 = Global_92815.f_7;
	Global_95220.f_8 = Global_92815.f_8;
	Global_95220.f_2 = Global_92815.f_2;
	Global_95220.f_3 = Global_92815.f_3;
	Global_95220.f_4 = Global_92815.f_4;
	Global_95220.f_5 = Global_92815.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95220.f_9[iVar1] = Global_92815.f_9[iVar1];
		Global_95220.f_13[iVar1] = Global_92815.f_13[iVar1];
		Global_95220.f_17[iVar1] = Global_92815.f_17[iVar1];
		Global_95220.f_21[iVar1] = Global_92815.f_21[iVar1];
		Global_95220.f_25[0 /*295*/][iVar1 /*98*/] = { Global_92815.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95220.f_25[1 /*295*/][iVar1 /*98*/] = { Global_92815.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95220.f_616[iVar1 /*65*/][iVar0] = Global_92815.f_616[iVar1 /*65*/][iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_13[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_26[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95220.f_616[iVar1 /*65*/].f_59 = Global_92815.f_616[iVar1 /*65*/].f_59;
		Global_95220.f_616[iVar1 /*65*/].f_60 = Global_92815.f_616[iVar1 /*65*/].f_60;
		Global_95220.f_616[iVar1 /*65*/].f_61 = Global_92815.f_616[iVar1 /*65*/].f_61;
		Global_95220.f_616[iVar1 /*65*/].f_62 = Global_92815.f_616[iVar1 /*65*/].f_62;
		Global_95220.f_616[iVar1 /*65*/].f_63 = Global_92815.f_616[iVar1 /*65*/].f_63;
		Global_95220.f_616[iVar1 /*65*/].f_64 = Global_92815.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95220.f_616[iVar1 /*65*/].f_39[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_49[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95220.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_92815.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95220.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_92815.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95220.f_1665[iVar1 /*32*/][iVar0] = Global_92815.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95220.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_92815.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95220.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_92815.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95220.f_1762[iVar1] = Global_92815.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95220.f_2259[iVar1 /*15*/][iVar0] = Global_92815.f_2259[iVar1 /*15*/][iVar0];
			Global_95220.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_92815.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95220.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_92815.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95220.f_1766[iVar1 /*164*/][iVar0] = Global_92815.f_1766[iVar1 /*164*/][iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95220.f_2305 = { Global_92815.f_2305 };
	Global_95220.f_2305.f_3 = Global_92815.f_2305.f_3;
	Global_95220.f_2311 = { Global_92815.f_2311 };
	Global_95220.f_2311.f_3 = { Global_92815.f_2311.f_3 };
	Global_95220.f_2311.f_6 = Global_92815.f_2311.f_6;
	Global_95220.f_2311.f_8 = Global_95220.f_2311.f_8;
	Global_95220.f_2311.f_7 = Global_92815.f_2311.f_7;
	Global_95220.f_2311.f_9 = Global_92815.f_2311.f_9;
	Global_95220.f_2311.f_11 = Global_92815.f_2311.f_11;
	Global_95220.f_2311.f_10 = Global_92815.f_2311.f_10;
	Global_95220.f_2311.f_12 = Global_92815.f_2311.f_12;
	Global_95220.f_2311.f_12.f_1 = { Global_92815.f_2311.f_12.f_1 };
	Global_95220.f_2311.f_12.f_5 = Global_92815.f_2311.f_12.f_5;
	Global_95220.f_2311.f_12.f_6 = Global_92815.f_2311.f_12.f_6;
	Global_95220.f_2311.f_12.f_7 = Global_92815.f_2311.f_12.f_7;
	Global_95220.f_2311.f_12.f_8 = Global_92815.f_2311.f_12.f_8;
	Global_95220.f_2311.f_12.f_9 = { Global_92815.f_2311.f_12.f_9 };
	Global_95220.f_2311.f_12.f_59 = { Global_92815.f_2311.f_12.f_59 };
	Global_95220.f_2311.f_12.f_62 = Global_92815.f_2311.f_12.f_62;
	Global_95220.f_2311.f_12.f_63 = Global_92815.f_2311.f_12.f_63;
	Global_95220.f_2311.f_12.f_64 = Global_92815.f_2311.f_12.f_64;
	Global_95220.f_2311.f_12.f_65 = Global_92815.f_2311.f_12.f_65;
	Global_95220.f_2311.f_12.f_77 = Global_92815.f_2311.f_12.f_77;
	Global_95220.f_2311.f_12.f_66 = Global_92815.f_2311.f_12.f_66;
	Global_95220.f_2311.f_12.f_67 = Global_92815.f_2311.f_12.f_67;
	Global_95220.f_2311.f_12.f_68 = Global_92815.f_2311.f_12.f_68;
	Global_95220.f_2311.f_12.f_69 = Global_92815.f_2311.f_12.f_69;
	Global_95220.f_2311.f_12.f_71 = Global_92815.f_2311.f_12.f_71;
	Global_95220.f_2311.f_12.f_72 = Global_92815.f_2311.f_12.f_72;
	Global_95220.f_2311.f_12.f_73 = Global_92815.f_2311.f_12.f_73;
	Global_95220.f_2311.f_12.f_74 = Global_92815.f_2311.f_12.f_74;
	Global_95220.f_2311.f_12.f_75 = Global_92815.f_2311.f_12.f_75;
	Global_95220.f_2311.f_12.f_76 = Global_92815.f_2311.f_12.f_76;
	Global_95220.f_2401 = Global_92815.f_2401;
	Global_95220.f_2401.f_1 = Global_92815.f_2401.f_1;
	Global_95220.f_2401.f_2 = Global_92815.f_2401.f_2;
	Global_95220.f_2401.f_3 = Global_92815.f_2401.f_3;
}

void func_79(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_172();
	uParam0->f_1 = func_181();
	unk_0x8F305E87CAD8DE0B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_115(&(uParam0->f_2305), 0);
		func_114(unk_0xE7869D5D7816A9B6());
		func_108(unk_0xE7869D5D7816A9B6(), 0);
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_99155.f_1750.f_539.f_294[iVar1];
		if (iVar1 == func_106())
		{
			func_99(unk_0xE7869D5D7816A9B6(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90815[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90815[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90815[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90815[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90815[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90815[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90815[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90815[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90815[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90815[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_99155.f_25013.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52753[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_99155.f_1750[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x56DCF5665F92F9BD(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_81(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_80(&(uParam0->f_2401));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_80(var uParam0)
{
	*uParam0 = Global_87207;
	uParam0->f_1 = Global_87208;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_81(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xE7869D5D7816A9B6();
	}
	if (unk_0xD51CFE69539DB6D8(iParam2))
	{
		uParam1->f_5 = func_97(iParam2);
	}
	if (func_94(iParam2, &iVar0, iParam3, iParam5))
	{
		func_82(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD51CFE69539DB6D8(iVar0))
	{
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x7579897B912B3328(iVar0, joaat("skylift")) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iVar0, 0))
			{
				func_82(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_82(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC45A34912542C4EB(iParam2, 0))
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
		if (Global_91025.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x1141852D07400777(iParam1, 1) };
		uParam0->f_6 = unk_0x2CAFFCD9F5E16D2F(iParam1);
		uParam0->f_3 = { unk_0x834FF019A048DE2C(iParam1) };
		if (unk_0x22E902D6AF27E232(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69010 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
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
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if (iParam0 == Global_68105.f_484[iVar0])
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_87(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88699[iVar0])
				{
					if (iParam2 == 0 || unk_0x1B2DC87EFB36DF80(iParam0) == func_88(iParam1, iParam2))
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_51(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_93(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_92(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_94(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			if (iParam0 == unk_0xE7869D5D7816A9B6())
			{
				*uParam1 = unk_0xA0B1717D806F4901();
			}
			else
			{
				*uParam1 = unk_0xF0295FF51F2D7803(iParam0, 1);
			}
			if (unk_0xD51CFE69539DB6D8(*uParam1))
			{
				if (unk_0xC45A34912542C4EB(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF18329472591CFE6(unk_0x1141852D07400777(*uParam1, 1), unk_0x1141852D07400777(iParam0, 1), 1) < 100f)
					{
						if (unk_0x7579897B912B3328(*uParam1, joaat("taxi")))
						{
							if (unk_0xBD6B21D725712BDE(*uParam1, -1) != iParam0 && unk_0xBD6B21D725712BDE(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_95(*uParam1, func_172(), 1))
						{
							uVar0 = unk_0x959E7FA37C0D0892();
							if (!unk_0x04E7E853E31F41A3(uVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x51374A0BB2871E6E(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB7AFC499DA70400A(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x4A36D1C22F217975(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x7579897B912B3328(*uParam1, joaat("blimp")))
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

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_96(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_96(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_98(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_98(int iParam0)
{
	if (func_90(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_99(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		iVar0 = func_97(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_105(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_104(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_90(iVar0))
		{
			uParam1->f_59 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x00AAD79B42B3E036() && unk_0x1B2DC87EFB36DF80(iParam0) == unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			if (func_103(161, -1))
			{
				uParam1->f_59 = func_100(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_100(742, Global_69095, 0);
			}
			uParam1->f_60 = func_100(743, Global_69095, 0);
			uParam1->f_61 = func_100(744, Global_69095, 0);
		}
		if (unk_0x00AAD79B42B3E036() && iParam0 == unk_0xE7869D5D7816A9B6())
		{
			if (func_103(161, -1))
			{
				uParam1->f_59 = func_100(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_100(742, Global_69095, 0);
			}
		}
	}
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2466310[iParam0 /*5*/][func_101(iParam1)];
	if (unk_0x56DCF5665F92F9BD(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_102();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

var func_102()
{
	return Global_1312746;
}

int func_103(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486042[iParam0 /*5*/][func_101(iParam1)];
	if (unk_0xA1B21B1D84085DB0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_104(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x83058EDD668C4856(iParam0, iParam1);
		*uParam3 = unk_0x377FCFBE04F73608(iParam0, iParam1);
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
				if (unk_0xAD7645F387EFDC15(iParam0) && unk_0x0B3E0BA36394B459(iParam0) != -1)
				{
					*uParam2 = unk_0x0B3E0BA36394B459(iParam0);
					*uParam3 = unk_0x4F862D22CA6059E9(iParam0);
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

void func_105(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x0CBEED266436AEFF(iParam0, iParam1);
		*uParam3 = unk_0xB9111DA78E2971F6(iParam0, iParam1);
		*uParam4 = unk_0x5B56B32E043336F7(iParam0, iParam1);
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

int func_106()
{
	func_107();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_107()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_98(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_97(unk_0xE7869D5D7816A9B6());
			if (func_90(iVar0) && (!func_70(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_90(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_97(iParam0);
	if (func_90(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		if (iParam0 == unk_0xE7869D5D7816A9B6())
		{
			func_109(iParam0, &(Global_99155.f_1750.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x3E9A9913C8317DB2(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x32C7968FD411D702();
					if (Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_99155.f_1750.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xC4EFB6A96FD4EFD7(unk_0x3F80C6638E3A1A90(), &iVar3);
			if (iVar0 == 0)
			{
				unk_0x39DEDCCD70293F58(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x39DEDCCD70293F58(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x39DEDCCD70293F58(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_109(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_113(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x08B9ED9EC2BBF5E8(iParam0, func_113(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_111(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, iVar2))
						{
							unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_111(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0xEBEB71E208C23D76();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x74CFE4255BC4FBF3(iVar7, &Var9) && !func_110(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xCA0E36ABF4510784(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x8D57B92B1C3958E6(iVar7))
					{
						if (unk_0x71E17ACF157ADB35(iVar7, iVar1, &Var48))
						{
							if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_110(int iParam0)
{
	if (unk_0x00AAD79B42B3E036())
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
				return 1;
				break;
			}
	}
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
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
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
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
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
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
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
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
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
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
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
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
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_112(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x8D57B92B1C3958E6(iVar1))
					{
						if (unk_0x71E17ACF157ADB35(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_112(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEBEB71E208C23D76();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x74CFE4255BC4FBF3(iVar0, uParam1))
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

int func_113(int iParam0)
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

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = func_97(iParam0);
	if (func_90(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		Global_99155.f_1750.f_539.f_294[iVar0] = unk_0xCF6C3B9035370727(iParam0);
	}
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	uParam0->f_3 = unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6());
	uParam0->f_5 = unk_0x3CDEA125E379201E(unk_0xE7869D5D7816A9B6());
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		uParam0->f_4 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
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
	else if (unk_0xFF6891E21E7FC193(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x41D9D981197E60A2(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_119(&iVar0))
		{
			if (func_117(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_172();
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
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_116(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_116(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0EDE95A6D2634A75(Param0))
	{
		iVar0 = unk_0x41D9D981197E60A2(Param4, sParam3);
		if (!unk_0x4443D8D533ACB547(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x1F8C689B25A0EC84(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_117(int iParam0, var uParam1, var uParam2)
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
	}
	return !func_118(*uParam1, 0f, 0f, 0f, 0);
}

bool func_118(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_119(var uParam0)
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_129())
		{
			*uParam0 = func_125(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 5, -1, 0, 1, -1);
			if (func_124(*uParam0) && !func_120(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(int iParam0)
{
	return func_121(iParam0, 0, 1);
}

int func_121(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_123() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_100(func_122(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

int func_123()
{
	return Global_25034;
}

int func_124(int iParam0)
{
	return func_121(iParam0, 5, 1);
}

int func_125(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_128(iVar0))
		{
			if (!bParam5 || func_127(iVar0))
			{
				fVar1 = unk_0xF18329472591CFE6(Param0, func_126(iVar0, 0), 1);
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

Vector3 func_126(int iParam0, bool bParam1)
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
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_127(int iParam0)
{
	return func_121(iParam0, 0, 0);
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
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
	}
	return 5;
}

bool func_129()
{
	return Global_91077.f_296 > 0;
}

int func_130()
{
	if (Global_91025 == 10 || Global_91025 == 9)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	struct<6> Var0;
	
	Var0 = { func_132(iParam0) };
	unk_0x5BA7CCA84A74BEA3(&Var0);
	while (!unk_0xD51489677E1B0844(&Var0))
	{
		unk_0x5BA7CCA84A74BEA3(&Var0);
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_219 = unk_0xB8BA7F44DF1575E1(&Var0, &Local_43, 8, 17000);
	unk_0x307B32C17692E50D(&Var0);
}

struct<6> func_132(int iParam0)
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

int func_133(var uParam0)
{
	int iVar0;
	
	iVar0 = func_134(uParam0, 0, 4, 0, 0);
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88836.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_138(0))
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		unk_0xD30CBD7E69615F8C(unk_0xBFAE5F9DEC53DAE2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6581912D0AD8605D(8);
		}
		Global_35619 = iParam2;
		Global_35581 = *uParam0;
		Global_35582 = iParam4;
		Global_35580 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35580 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35580)
			{
				if (Global_35586[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35581 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_136(iParam2))
		{
			return 0;
		}
		if (Global_35580 == 8)
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		Global_35586[Global_35580 /*4*/] = Global_35583;
		Global_35586[Global_35580 /*4*/].f_1 = iParam1;
		Global_35586[Global_35580 /*4*/].f_2 = iParam2;
		Global_35586[Global_35580 /*4*/].f_3 = 0;
		Global_35580++;
		if (iParam4 != 0)
		{
			func_135(uParam0, iParam4);
		}
	}
	return 2;
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35580 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35580)
	{
		if (Global_35586[iVar0 /*4*/] == *uParam0)
		{
			Global_35586[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_136(int iParam0)
{
	return func_137(iParam0, Global_35619);
}

int func_137(int iParam0, int iParam1)
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

int func_138(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_136(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_139(bool bParam0)
{
	if (unk_0xFCD171641347C2B0())
	{
		return 0;
	}
	if (Global_25036)
	{
		return 0;
	}
	if (func_70(6) || func_70(7))
	{
		return 0;
	}
	if (func_172() != 2)
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!func_136(4))
		{
			return 0;
		}
		if (unk_0x4341FD2C227CC4C0())
		{
			return 0;
		}
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
		if (!func_143(4))
		{
			return 0;
		}
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
			{
				return 0;
			}
		}
		if (unk_0x2DFE588AA3727FE3())
		{
			return 0;
		}
		if (Global_67887)
		{
			return 0;
		}
		if (func_142() || func_141())
		{
			return 0;
		}
		if (func_140())
		{
			return 0;
		}
	}
	return 1;
}

int func_140()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

int func_141()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				iVar0 = func_172();
				if (!func_90(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_142()) || Global_98202) || Global_25036) || func_148()) || func_147(8, -1)) || func_129()) || func_146()) || func_140()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1) || func_142()) || Global_25036) || func_148()) || func_147(8, -1)) || func_140()) || func_129()) || func_146()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_142()) || Global_98202) || Global_25036) || func_148()) || func_147(8, -1)) || func_140()) || func_129()) || func_146()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5) || Global_36166 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_142()) || Global_98202) || Global_25036) || func_148()) || func_147(8, -1)) || func_129()) || func_146()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_142() || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || func_147(8, -1)) || func_141()) || func_145()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_147(8, -1) || func_129()) || func_146()) || func_145()) || func_144())
						{
							return 0;
						}
						if ((unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() != 3) && unk_0x3ABB0F1D57A0AD8C() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
						{
							if ((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_142()) || Global_25036) || func_148()) || func_147(8, -1)) || func_146()) || func_140()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || func_142()) || func_146()) || Global_98202) || Global_25036) || func_148()) || Global_36669) || func_147(8, -1)) || func_140()) || func_145()) || func_141()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_142()) || Global_98202) || Global_25036) || func_148()) || func_147(8, -1)) || func_140()) || func_145()) || func_129()) || func_146()) || func_141())
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

var func_144()
{
	return Global_91064.f_1;
}

int func_145()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 13);
	}
	return 0;
}

bool func_146()
{
	return Global_91077.f_297 > 0;
}

bool func_147(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

var func_148()
{
	return Global_1315909;
}

void func_149(int iParam0)
{
	if (Global_99155.f_29435.f_1 == 0)
	{
		if (!func_156(14))
		{
			if (!iLocal_51)
			{
				if (func_31(26, func_32(iParam0), 0))
				{
					func_153("AM_H_BAILBONDS", 1, 0, -1, 10000, 4, 0, 0, 0);
					iLocal_51 = 1;
				}
			}
			else
			{
				switch (func_151("AM_H_BAILBONDS"))
				{
					case 2:
						iLocal_51 = 0;
						break;
					
					case 1:
						func_150(14);
						break;
					}
				}
			}
	}
}

void func_150(int iParam0)
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
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_24859.f_150[iVar1]), iVar0);
	}
}

int func_151(char* sParam0)
{
	if (unk_0x04E7E853E31F41A3(sParam0, &Global_97800))
	{
		return 1;
	}
	if (func_152(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_152(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(uParam0, &(Global_99155.f_24859[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_153(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_154(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_154(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_155();
	}
}

void func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_156(int iParam0)
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
		return unk_0xB519E5386FBF69E5(Global_99155.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_157(var uParam0, var uParam1)
{
	if (!uParam0->f_7)
	{
		if (func_31(26, func_32(uParam0->f_4), 0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if ((!func_171() && !unk_0x2AA9423D1F896887(unk_0xE7869D5D7816A9B6())) && !unk_0x13ACC601BB29A690())
				{
					func_170(uParam1, 2, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
					if (func_158(uParam1, func_169(uParam0->f_4), func_168(uParam0->f_4), 4, 0, 0, 0))
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

bool func_158(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_167(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_159(sParam2, iParam3, 0);
}

int func_159(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xDA09A6E60FE9645E(0);
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
					func_166();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_147(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_165();
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_164();
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_163())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
				}
			}
			if (func_162())
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_161();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_160();
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
		func_166();
	}
	return 0;
}

void func_160()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_161()
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_162()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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

void func_164()
{
	if (func_70(14))
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_172();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_165()
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

void func_166()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_167(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

char* func_168(int iParam0)
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

char* func_169(int iParam0)
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

void func_170(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

int func_171()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	func_107();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_173(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_174(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_180(uParam0, iParam1);
	func_179(uParam0, iParam2);
	func_178(uParam0, iParam3);
	func_177(uParam0, iParam5);
	func_176(uParam0, iParam4);
	func_175(uParam0, iParam6);
}

void func_175(var uParam0, int iParam1)
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

void func_176(var uParam0, int iParam1)
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

void func_177(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_178(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_181()
{
	var uVar0;
	
	func_180(&uVar0, unk_0x0CE219089BDB83C5());
	func_179(&uVar0, unk_0x1B24A2CA27443F7B());
	func_178(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_176(&uVar0, unk_0x2DA3502053F9E535());
	func_177(&uVar0, unk_0xEB4EA596232DA76E());
	func_175(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_182(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_183(Global_99155.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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
		unk_0x56DCF5665F92F9BD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x39DEDCCD70293F58(iVar1, iVar0, 1);
	}
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_195();
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
					func_194(99, 1);
					func_193(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_193(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_193(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_191(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_190(5))
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
							func_193(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_190(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_193(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_193(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_193(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x87F8C006AA576A39())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_190(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_193(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_193(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_193(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_189(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_194(95, iParam3);
					break;
				
				case 1:
					func_194(97, iParam3);
					break;
				
				case 2:
					func_194(96, iParam3);
					break;
			}
			func_194(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_186(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_186(iVar1);
	}
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_193(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_193(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_193(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
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
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_185(iParam0);
	if (Global_35619 == 15)
	{
		func_184(0);
	}
	return 1;
}

void func_184(bool bParam0)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_186(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_188() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_188() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_187(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_187(int iParam0)
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
		
		default:
	}
	return "";
}

int func_188()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_189(int iParam0)
{
	func_194(93, iParam0);
	func_194(29, iParam0);
	func_194(30, iParam0);
}

bool func_190(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_188() /*10169*/].f_7698.f_10, iParam0);
}

int func_191(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_192(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_57(27, 1);
	return 1;
}

int func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_194(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_195()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	iVar0 = func_32(iParam0);
	sVar1 = func_198(iParam0, bParam1);
	sVar2 = func_197(iParam0);
	if (func_14(26, iVar0, 1))
	{
		func_13(26, sVar1, 0);
		func_12(26, sVar2);
		func_5(26);
		return 1;
	}
	return 0;
}

char* func_197(int iParam0)
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

char* func_198(int iParam0, bool bParam1)
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

int func_199(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	
	if (!unk_0xDE185266FE919B68())
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x3CDEA125E379201E(unk_0xE7869D5D7816A9B6()) != -1)
		{
			return 0;
		}
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		return 0;
	}
	if (func_217() && iParam2 < 4)
	{
		return 0;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (func_215(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0xB519E5386FBF69E5(iParam0, func_106()) && !unk_0xB519E5386FBF69E5(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_69234)
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (Global_87365)
	{
		return 0;
	}
	if ((func_142() || (Global_17118.f_4 && Global_17118.f_104 == 4)) || func_141())
	{
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(iParam4, 18))
	{
		if (!unk_0xB519E5386FBF69E5(iParam0, func_106()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 1)
		{
			return 0;
		}
		if (unk_0x4650ED1E44B3751F())
		{
			return 0;
		}
		if (Global_88286)
		{
			return 0;
		}
		if (func_208(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (unk_0xB519E5386FBF69E5(iParam0, func_106()))
			{
				iVar1 = func_207(func_172());
				iVar2 = func_207(iParam1);
				iVar3 = func_206(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_99155.f_16717.f_175[iVar3 /*19*/].f_8 == 1 || Global_99155.f_16717.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_205(&(Global_99155.f_16717.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_202(&(Global_99155.f_16717.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 2)
	{
		return 0;
	}
	if (func_140())
	{
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(iParam4, 3))
	{
		if (Global_98202)
		{
			return 0;
		}
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
			{
				return 0;
			}
		}
		if (Global_97867.f_19 != 0)
		{
			return 0;
		}
		if (Global_35619 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_201(unk_0xE7869D5D7816A9B6(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_172();
	if (func_90(iVar4))
	{
		unk_0x312FA2EB3948B47C(unk_0xE7869D5D7816A9B6(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_98(1);
						iVar22[1] = func_98(2);
						break;
					
					case 1:
						iVar22[0] = func_98(0);
						iVar22[1] = func_98(2);
						break;
					
					case 2:
						iVar22[0] = func_98(0);
						iVar22[1] = func_98(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_98(1);
				iVar22[1] = func_98(2);
				break;
			
			case 6:
				iVar22[0] = func_200(12);
				iVar22[1] = func_98(1);
				break;
			
			case 7:
				iVar22[0] = func_200(12);
				iVar22[1] = func_98(0);
				break;
			
			case 8:
				iVar22[0] = func_98(0);
				iVar22[1] = func_98(1);
				break;
			
			case 9:
				iVar22[0] = func_98(0);
				iVar22[1] = func_98(2);
				break;
			
			case 10:
				iVar22[0] = func_200(23);
				iVar22[1] = func_98(0);
				break;
			
			case 11:
				iVar22[0] = func_200(23);
				iVar22[1] = func_98(0);
				break;
			
			default:
				if (func_90(iParam1))
				{
					iVar22[0] = func_98(iParam1);
				}
				else
				{
					iVar22[0] = func_200(iParam1);
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
					if (unk_0xD51CFE69539DB6D8(uVar5[iVar26]))
					{
						if (unk_0x1B2DC87EFB36DF80(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!unk_0x76B2D234F1895632(uVar5[iVar26]))
							{
								if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
								{
									if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(uVar5[iVar26], 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) < 6400f)
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
						iVar27 = Global_88836[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_88836[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_88836[2];
						break;
				}
				if (unk_0xD51CFE69539DB6D8(iVar27))
				{
					if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iVar27, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_91015[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_91015[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_91015[2];
						break;
				}
				if (unk_0xD51CFE69539DB6D8(iVar27))
				{
					if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
					{
						if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iVar27, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) < 6400f)
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

int func_200(int iParam0)
{
	if (!func_90(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_201(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar5;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { Global_35620[iParam1 /*5*/] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_201(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

float func_202(var uParam0)
{
	if (func_205(uParam0))
	{
		if (func_204(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_203(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_203(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_204(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_205(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

int func_206(int iParam0, int iParam1)
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

int func_207(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_99155.f_32499[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_208(float fParam0, bool bParam1)
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
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		iVar36 = func_214();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 2) && !unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 3))
			{
				func_209(iVar32, &Var0);
				fVar35 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var0.f_6, 1);
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

void func_209(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_210(uParam1, "Abigail1", func_212(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 1:
			func_210(uParam1, "Abigail2", func_212(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 2:
			func_210(uParam1, "Barry1", func_212(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 3:
			func_210(uParam1, "Barry2", func_212(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 4:
			func_210(uParam1, "Barry3", func_212(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 5:
			func_210(uParam1, "Barry3A", func_212(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 6:
			func_210(uParam1, "Barry3C", func_212(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 7:
			func_210(uParam1, "Barry4", func_212(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_211(iParam0), 0, 0);
			break;
		
		case 8:
			func_210(uParam1, "Dreyfuss1", func_212(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 9:
			func_210(uParam1, "Epsilon1", func_212(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 10:
			func_210(uParam1, "Epsilon2", func_212(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 11:
			func_210(uParam1, "Epsilon3", func_212(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 12:
			func_210(uParam1, "Epsilon4", func_212(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 13:
			func_210(uParam1, "Epsilon5", func_212(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 14:
			func_210(uParam1, "Epsilon6", func_212(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 15:
			func_210(uParam1, "Epsilon7", func_212(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 16:
			func_210(uParam1, "Epsilon8", func_212(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 17:
			func_210(uParam1, "Extreme1", func_212(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 18:
			func_210(uParam1, "Extreme2", func_212(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 19:
			func_210(uParam1, "Extreme3", func_212(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 20:
			func_210(uParam1, "Extreme4", func_212(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 21:
			func_210(uParam1, "Fanatic1", func_212(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_211(iParam0), 1, 0);
			break;
		
		case 22:
			func_210(uParam1, "Fanatic2", func_212(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_211(iParam0), 1, 0);
			break;
		
		case 23:
			func_210(uParam1, "Fanatic3", func_212(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_211(iParam0), 0, 1);
			break;
		
		case 24:
			func_210(uParam1, "Hao1", func_212(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_211(iParam0), 0, 1);
			break;
		
		case 25:
			func_210(uParam1, "Hunting1", func_212(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 26:
			func_210(uParam1, "Hunting2", func_212(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 27:
			func_210(uParam1, "Josh1", func_212(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 28:
			func_210(uParam1, "Josh2", func_212(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 29:
			func_210(uParam1, "Josh3", func_212(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 30:
			func_210(uParam1, "Josh4", func_212(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 31:
			func_210(uParam1, "Maude1", func_212(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 32:
			func_210(uParam1, "Minute1", func_212(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 33:
			func_210(uParam1, "Minute2", func_212(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 34:
			func_210(uParam1, "Minute3", func_212(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 35:
			func_210(uParam1, "MrsPhilips1", func_212(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 36:
			func_210(uParam1, "MrsPhilips2", func_212(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 37:
			func_210(uParam1, "Nigel1", func_212(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 38:
			func_210(uParam1, "Nigel1A", func_212(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 39:
			func_210(uParam1, "Nigel1B", func_212(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_211(iParam0), 1, 1);
			break;
		
		case 40:
			func_210(uParam1, "Nigel1C", func_212(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_211(iParam0), 1, 1);
			break;
		
		case 41:
			func_210(uParam1, "Nigel1D", func_212(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_211(iParam0), 1, 1);
			break;
		
		case 42:
			func_210(uParam1, "Nigel2", func_212(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 43:
			func_210(uParam1, "Nigel3", func_212(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_211(iParam0), 1, 1);
			break;
		
		case 44:
			func_210(uParam1, "Omega1", func_212(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 45:
			func_210(uParam1, "Omega2", func_212(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 46:
			func_210(uParam1, "Paparazzo1", func_212(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 47:
			func_210(uParam1, "Paparazzo2", func_212(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 48:
			func_210(uParam1, "Paparazzo3", func_212(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 49:
			func_210(uParam1, "Paparazzo3A", func_212(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 50:
			func_210(uParam1, "Paparazzo3B", func_212(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 51:
			func_210(uParam1, "Paparazzo4", func_212(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 52:
			func_210(uParam1, "Rampage1", func_212(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 54:
			func_210(uParam1, "Rampage3", func_212(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 55:
			func_210(uParam1, "Rampage4", func_212(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 56:
			func_210(uParam1, "Rampage5", func_212(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_211(iParam0), 0, 0);
			break;
		
		case 53:
			func_210(uParam1, "Rampage2", func_212(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_211(iParam0), 1, 0);
			break;
		
		case 57:
			func_210(uParam1, "TheLastOne", func_212(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 58:
			func_210(uParam1, "Tonya1", func_212(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 59:
			func_210(uParam1, "Tonya2", func_212(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 60:
			func_210(uParam1, "Tonya3", func_212(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 61:
			func_210(uParam1, "Tonya4", func_212(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		case 62:
			func_210(uParam1, "Tonya5", func_212(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_211(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_210(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_211(int iParam0)
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

struct<2> func_212(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_213(iParam0) };
	if (unk_0xF6917DE0E003509D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_213(int iParam0)
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

int func_214()
{
	func_107();
	switch (Global_99155.f_1750.f_539.f_3549)
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

int func_215(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_216(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0)
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
		if (!Global_36472[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36472[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_217()
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	return 1;
}

int func_218()
{
	if (Global_14413.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	struct<3> Var0;
	float fVar3;
	
	if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		return 0;
	}
	Var0 = { func_220(unk_0xBFAE5F9DEC53DAE2()) };
	fVar3 = Local_43.f_3;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()) || unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x47EF9ED961F4F559(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
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

Vector3 func_220(var uParam0)
{
	return unk_0x1141852D07400777(unk_0x91B73D905EA38F6B(uParam0), 0);
}

int func_221()
{
	struct<3> Var0;
	
	if (unk_0x9A3F18713F55FCC4(unk_0xBFAE5F9DEC53DAE2()))
	{
		return 0;
	}
	Var0 = { func_220(unk_0xBFAE5F9DEC53DAE2()) };
	if (unk_0xB7A628320EFF8E47(Var0, 2727.58f, 4144.19f, 43.95f) >= (50f * 50f))
	{
		return 1;
	}
	return 0;
}

void func_222()
{
	char* sVar0;
	
	if (iLocal_225 != 0)
	{
		if (!func_224())
		{
			iLocal_225 = 4;
		}
		switch (iLocal_225)
		{
			case 1:
				uLocal_220 = unk_0xE3C796DC28BC3254("MIDSIZED_MESSAGE");
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
				if (unk_0x4A4851D44CDF03C0(uLocal_220))
				{
					unk_0xA4F3B84032D46C13(uLocal_220, "SHOW_SHARD_MIDSIZED_MESSAGE");
					unk_0x33D37B75FC2BCC8C("BBS_MP");
					unk_0x057886C01DDC535D();
					unk_0x33D37B75FC2BCC8C(sVar0);
					unk_0x9359E7CC54335EB9(sLocal_224);
					unk_0x057886C01DDC535D();
					unk_0xFF141057ED7B4C73();
					iLocal_223 = unk_0x9D40BBF80D8F5E8A();
					iLocal_225 = 3;
				}
				break;
			
			case 3:
				if (unk_0x4A4851D44CDF03C0(uLocal_220))
				{
					unk_0xE2B331FD5EEF4684(uLocal_220, 255, 255, 255, 255, 0);
					unk_0x55C926E686119F55(4);
					if (!iLocal_221)
					{
						unk_0xCC18B241D266EF14(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
						iLocal_221 = 1;
					}
				}
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_223) > 7000)
				{
					if (!iLocal_52)
					{
						unk_0xA4F3B84032D46C13(uLocal_220, "SHARD_ANIM_OUT");
						unk_0x43C93E686A1E92C5(1);
						unk_0x73B039A1CD485226(0.33f);
						unk_0xFF141057ED7B4C73();
						iLocal_52 = 1;
					}
				}
				if ((unk_0x9D40BBF80D8F5E8A() - iLocal_223) > 7500)
				{
					iLocal_225 = 4;
				}
				break;
			
			case 4:
				unk_0x8A86A209B0F0AF7D(&uLocal_220);
				iLocal_52 = 0;
				func_223();
				break;
			}
	}
}

void func_223()
{
	iLocal_225 = 0;
	iLocal_221 = 0;
	bLocal_222 = false;
	iLocal_223 = 0;
}

int func_224()
{
	if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		return 0;
	}
	if (unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1))
	{
		return 0;
	}
	if (func_172() != 2)
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	return 1;
}

void func_225()
{
	if (Global_99155.f_29435.f_1 == 0)
	{
		if (Global_99155.f_29435.f_2 == -1)
		{
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 0);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 1);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 2);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 3);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 4);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 5);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 6);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 7);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
			unk_0x73817D396768E4C6(&(Global_99155.f_29435), 9);
			iLocal_218 = func_181();
			func_173(&iLocal_218, 0, 0, 1, 0, 0, 0);
			Global_99155.f_29435.f_3 = iLocal_218;
			Global_99155.f_29435.f_2 = 4;
		}
	}
	if (Global_99155.f_29435.f_2 == 2)
	{
		Global_99155.f_29435.f_2 = 1;
	}
	if (Global_99155.f_29435.f_2 == 1)
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_29435), 8);
	}
	func_223();
	func_30();
	func_226(62, 2, 0);
}

void func_226(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_164();
		if (iParam1 == 4)
		{
			Global_99155.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_99155.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_99155.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_99155.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_99155.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69236)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_99155.f_32499[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_99155.f_32499[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_227();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_99155.f_32499[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_227();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_99155.f_32499[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_227();
			}
		}
	}
}

void func_227()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC083A2D1EE1A4BFF(&(Global_99155.f_32499[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x4A4F36C4EFDE341F("");
		StringCopy(&cVar16, unk_0xC083A2D1EE1A4BFF(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0xC083A2D1EE1A4BFF("CELL_253");
		unk_0x77AD0392EB2D45CC(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x4A4F36C4EFDE341F("CELL_255");
		unk_0x9359E7CC54335EB9(&(Global_2893[1 /*6*/]));
		unk_0x77AD0392EB2D45CC(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x73817D396768E4C6(&Global_2283, 0);
}

void func_228()
{
	if (func_230("AM_H_BAILBONDS"))
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	func_229(&uLocal_53, 2);
	unk_0x8A86A209B0F0AF7D(&uLocal_220);
	if (Local_43.f_6 != -1)
	{
		func_37(&(Local_43.f_6));
	}
	unk_0x52F20802944F8DCE();
}

void func_229(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_230(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_231(int iParam0)
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
	if (unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[iVar0], iVar1))
	{
		return 0;
	}
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_7699.f_99.f_219[iVar0]), iVar1);
	return 1;
}

