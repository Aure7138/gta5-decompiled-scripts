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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	struct<5> Local_88 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_105 = 1;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = -1;
	var uLocal_111 = 2;
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
	var uLocal_123 = 2;
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
	struct<86> Local_181 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
#endregion

void __EntryFunction__()
{
	struct<10> Var0;
	char cVar10[64];
	int iVar18;
	int iVar19;
	bool bVar20;
	char[] cVar21[8];
	int iVar29;
	bool bVar30;
	
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
	sLocal_19 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	unk_0x9243BAC96D64C050();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_268 = false;
		Global_2394786 = 0;
		if (func_180())
		{
			bLocal_268 = true;
			Var0 = { Global_2394627.f_3 };
			MemCopy(&cVar10, {Var0.f_3}, 8);
			iVar18 = func_179(Global_2394627.f_3);
			iVar19 = unk_0x4F8644AF03D0E0D6();
			bVar20 = Global_2394627.f_13;
			if (bVar20)
			{
				cVar10 = { Global_2394627.f_14 };
			}
			if (Global_2394627.f_24)
			{
				func_178(&Local_88, 1, 1);
				unk_0xE80492A9AC099A93(&(Global_1582048[iVar19 /*324*/].f_31.f_18), 2);
				unk_0xE80492A9AC099A93(&(Global_1582048[iVar19 /*324*/].f_31.f_18), 1);
				unk_0xE80492A9AC099A93(&(Global_1582048[iVar19 /*324*/].f_31.f_18), 3);
				func_177();
				func_176();
				Global_2394627.f_24 = 0;
			}
			if (!func_71(&Local_88, &cVar10, &(Global_1582048[iVar19 /*324*/].f_31.f_18), iVar18, 0, 0, 1, 0, 1, bVar20, 0, 1, 0, 0))
			{
				Global_2394627.f_22 = 0;
				Global_2394627.f_26 = -1;
			}
			else if (Local_88.f_0)
			{
				Global_2394627.f_22 = 1;
				Global_2394627.f_23 = 1;
				if (Global_2394627.f_26 < 0)
				{
					Global_2394627.f_26 = 0;
				}
				else
				{
					Global_2394627.f_26++;
					if (Global_2394627.f_26 >= 10)
					{
						func_70();
					}
				}
			}
			else
			{
				Global_2394627.f_25++;
				if (Global_2394627.f_25 >= 3)
				{
					Global_2394627.f_22 = 1;
					Global_2394627.f_23 = 0;
					if (Global_2394627.f_26 < 0)
					{
						Global_2394627.f_26 = 0;
					}
					else
					{
						Global_2394627.f_26++;
						if (Global_2394627.f_26 >= 10)
						{
							func_70();
							Global_2394627.f_24 = 1;
						}
					}
				}
				else
				{
					Global_2394627.f_24 = 1;
				}
			}
		}
		if (func_69())
		{
			bLocal_268 = true;
			MemCopy(&cVar21, {Global_2394627.f_3.f_3}, 8);
			if (Global_2394627.f_22)
			{
				func_70();
			}
			else
			{
				if (Global_2394627.f_24)
				{
					func_178(&Local_88, 1, 1);
					Global_2394627.f_24 = 0;
				}
				if (!func_66(&Local_88, &cVar21, &Local_181))
				{
					Global_2394627.f_22 = 0;
					Global_2394627.f_26 = -1;
				}
				else if (Local_88.f_0)
				{
					Global_2394627.f_22 = 1;
					Global_2394627.f_23 = 1;
					Global_2394627.f_27 = Local_181.f_65;
					Global_2394627.f_28 = Local_181.f_68;
					Global_2394627.f_29 = { Local_181.f_22 };
					Global_2394627.f_45 = { Local_181.f_38 };
					Global_2398285 = { Local_181 };
				}
				else
				{
					Global_2394627.f_22 = 1;
					Global_2394627.f_23 = 0;
				}
			}
		}
		if (func_65())
		{
			bLocal_268 = true;
			if (Global_2394627.f_22)
			{
				func_70();
			}
			else
			{
				if (Global_2394627.f_24)
				{
					func_178(&Local_88, 1, 1);
					Global_2394627.f_24 = 0;
				}
				iVar29 = Local_88.f_4;
				if (!func_4(&Local_88))
				{
					Global_2394786 = 1;
					if (iVar29 != Local_88.f_4)
					{
						if (Local_88.f_4 == 4)
						{
							iLocal_267 = (unk_0x9CD27B0045628463() + 50000);
						}
					}
					bVar30 = false;
					if (Local_88.f_4 == 4)
					{
						if (unk_0x9CD27B0045628463() > iLocal_267)
						{
							Global_2394627.f_22 = 1;
							Global_2394627.f_23 = 0;
							bVar30 = true;
						}
					}
					if (!bVar30)
					{
						Global_2394627.f_22 = 0;
						Global_2394627.f_26 = -1;
					}
				}
				else if (Local_88.f_0)
				{
					Global_2394627.f_22 = 1;
					Global_2394627.f_23 = 1;
				}
				else
				{
					Global_2394627.f_22 = 1;
					Global_2394627.f_23 = 0;
				}
			}
		}
		if (!bLocal_268)
		{
			if (func_3(unk_0x4F8644AF03D0E0D6()) || func_2(unk_0x4F8644AF03D0E0D6()))
			{
				if (!func_1(unk_0x4F8644AF03D0E0D6(), 1))
				{
					unk_0x1090044AD1DA76FA();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_235.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xA921AA820C25702F(Global_1582048[iParam0 /*324*/].f_235.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 7;
}

bool func_3(int iParam0)
{
	return Global_2413868[iParam0 /*253*/].f_114 == 2;
}

int func_4(bool bParam0)
{
	if (!func_64())
	{
		if (func_61())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_60())
			{
				return 0;
			}
			if (func_59())
			{
				return 0;
			}
			func_58();
			func_57();
			func_56();
			if (func_64())
			{
				unk_0xF98DDE0A8ED09323(true);
			}
			else
			{
				unk_0xF98DDE0A8ED09323(false);
			}
			bParam0->f_13 = Global_2394785;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_55(bParam0, 24);
			break;
		
		case 24:
			if (func_53(bParam0->f_13))
			{
				func_178(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_55(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0xC7397A83F7A2A462(&Global_2394688, bParam0->f_13, true, func_52(0)))
			{
				func_55(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x02ADA21EA2F6918F())
			{
				if (unk_0x941E5306BCD7C2C7())
				{
					*bParam0 = 0;
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = unk_0xEDF7F927136C224B();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xE0A6138401BCB837() > 0)
				{
					func_55(bParam0, 4);
				}
				else
				{
					func_178(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xC87E740D9F3872CC())
			{
				func_57();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_178(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1118)
					{
						if (unk_0x906B778CA1DC72B6() != 0)
						{
							unk_0x9AB9C1CFC8862DFB();
						}
						if (unk_0xA69AC4ADE82B57A4(bParam0->f_7))
						{
							func_5(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_57();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_5(bool bParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	struct<86> Var5;
	int iVar91;
	
	sVar0 = unk_0x906B778CA1DC72B6();
	iVar1 = unk_0xB6B9DDC412FCEEE2(sVar0, "mission");
	sVar2 = unk_0xB6B9DDC412FCEEE2(iVar1, "gen");
	if (func_64())
	{
		if (func_51(unk_0x55AA95F481D694D2(bParam0->f_7)))
		{
			if (unk_0x906B778CA1DC72B6() != 0)
			{
				unk_0x9AB9C1CFC8862DFB();
			}
			return;
		}
	}
	if ((unk_0x78F06F6B1FB5A80C(sVar2, "type") == 0 && unk_0x78F06F6B1FB5A80C(sVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0x906B778CA1DC72B6() != 0)
		{
			unk_0x9AB9C1CFC8862DFB();
		}
		return;
	}
	if (Global_262145.f_6035)
	{
		if (unk_0x78F06F6B1FB5A80C(sVar2, "type") == 0)
		{
			if (unk_0x78F06F6B1FB5A80C(sVar2, "subtype") == 1 || unk_0x78F06F6B1FB5A80C(sVar2, "subtype") == 7)
			{
				if (unk_0x906B778CA1DC72B6() != 0)
				{
					unk_0x9AB9C1CFC8862DFB();
				}
				return;
			}
			iVar3 = unk_0x78F06F6B1FB5A80C(sVar2, "optbs");
			if (unk_0xA921AA820C25702F(iVar3, 4) || unk_0xA921AA820C25702F(iVar3, 12))
			{
				if (unk_0x906B778CA1DC72B6() != 0)
				{
					unk_0x9AB9C1CFC8862DFB();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		Global_794503.f_2 = 0;
		Global_794503.f_108484 = 0;
		func_50();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794503.f_108499[iVar4] = 0;
			Global_794503.f_108485[iVar4] = 0;
			iVar4++;
		}
		if (func_47())
		{
			func_46(1);
			func_46(0);
			func_44(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794503.f_4[bParam0->f_9 /*86*/] = { Var5 };
	if (!func_64())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_4 = unk_0x37025B27D9B658B1(bParam0->f_7, 0);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_67 = func_43(bParam0->f_7);
		Global_794503.f_4[bParam0->f_9 /*86*/].f_66 = unk_0x37025B27D9B658B1(bParam0->f_7, Global_794503.f_4[bParam0->f_9 /*86*/].f_67);
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_5 = unk_0x32DD916F3F7C9672(bParam0->f_7);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { func_42(sVar2, "start") };
	if (unk_0x031C55ED33227371(sVar2, "optbs") == 2)
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_76 = unk_0x78F06F6B1FB5A80C(sVar2, "optbs");
	}
	unk_0xE80492A9AC099A93(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 15);
	unk_0xE80492A9AC099A93(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 18);
	unk_0xE80492A9AC099A93(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 19);
	Global_794503.f_4[bParam0->f_9 /*86*/].f_59 = { func_42(sVar2, "cam") };
	Global_794503.f_4[bParam0->f_9 /*86*/].f_62 = { func_41(sVar2) };
	if (!func_64())
	{
		if (unk_0xF53E48461B71EECB(unk_0x32DD916F3F7C9672(bParam0->f_7)))
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_54 = unk_0x7CF0448787B23758(bParam0->f_7);
		}
		else
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_54 = -1;
		}
	}
	if (unk_0x031C55ED33227371(sVar2, "mgrk") == 2)
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_7 = unk_0x78F06F6B1FB5A80C(sVar2, "mgrk");
	}
	if (unk_0x031C55ED33227371(sVar2, "mght") == 2)
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_8 = unk_0x78F06F6B1FB5A80C(sVar2, "mght");
	}
	Global_794503.f_96153[bParam0->f_9 /*11*/].f_10 = unk_0x78F06F6B1FB5A80C(sVar2, "cncmbs");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_69 = unk_0x78F06F6B1FB5A80C(sVar2, "min");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_71 = unk_0x78F06F6B1FB5A80C(sVar2, "num");
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_71 == -1)
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_71 = 30;
	}
	StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_22), unk_0xBF09786A7FCAB582(bParam0->f_7), 64);
	Global_794503.f_4[bParam0->f_9 /*86*/].f_65 = unk_0x78F06F6B1FB5A80C(sVar2, "type");
	if (func_64())
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), func_40(), 64);
	}
	else
	{
		StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_6), unk_0xCD67AD041A394C9C(bParam0->f_7), 64);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_70 = unk_0x78F06F6B1FB5A80C(sVar2, "rank");
	Global_794503.f_96153[bParam0->f_9 /*11*/] = unk_0x78F06F6B1FB5A80C(sVar2, "tnum");
	if (!func_64())
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_73 = func_39(unk_0x1ACCFBA3D8DAB2EE(bParam0->f_7, 0), unk_0x759299C5BB31D2A9(bParam0->f_7, 0));
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_3 = unk_0x759299C5BB31D2A9(bParam0->f_7, 0);
	}
	Global_794503.f_4[bParam0->f_9 /*86*/].f_75 = unk_0x78F06F6B1FB5A80C(sVar2, "charcon");
	Global_794503.f_4[bParam0->f_9 /*86*/].f_77 = unk_0x78F06F6B1FB5A80C(sVar2, "ltm");
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 6 && !bParam1)
	{
		if (Global_963585.f_598 < 85)
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_68 = Global_963585.f_598;
			Global_963585[Global_794503.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { func_42(sVar2, "area") };
			if (unk_0x031C55ED33227371(sVar2, "rad") == 2)
			{
				Global_963585.f_512[Global_794503.f_4[bParam0->f_9 /*86*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar2, "rad"));
			}
			else
			{
				Global_963585.f_512[Global_794503.f_4[bParam0->f_9 /*86*/].f_68] = unk_0x06610343E73B9727(sVar2, "rad");
			}
			Global_963585.f_256[Global_794503.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { Global_794503.f_4[bParam0->f_9 /*86*/].f_56 };
			Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { Global_794503.f_4[bParam0->f_9 /*86*/].f_59 };
			Global_963585.f_598++;
		}
	}
	else
	{
		Global_794503.f_4[bParam0->f_9 /*86*/].f_68 = unk_0x78F06F6B1FB5A80C(sVar2, "subtype");
	}
	StringCopy(&(Global_794503.f_4[bParam0->f_9 /*86*/]), unk_0x55AA95F481D694D2(bParam0->f_7), 24);
	iVar91 = unk_0xD24D37CC275948CC(&(Global_794503.f_4[bParam0->f_9 /*86*/]));
	Global_794503.f_96153[bParam0->f_9 /*11*/].f_2 = iVar91;
	func_38(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_71), &(Global_794503.f_4[bParam0->f_9 /*86*/].f_69));
	if (func_64())
	{
		if (unk_0x0C515FAB3FF9EA92(unk_0x55AA95F481D694D2(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794503.f_4[bParam0->f_9 /*86*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0x933D6A9EEC1BACD0(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 13);
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 < 13 && !bParam1)
	{
		if (Global_794503.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
		{
			Global_794503.f_108485[Global_794503.f_4[bParam0->f_9 /*86*/].f_65]++;
			if (func_37(bParam0->f_9))
			{
				Global_794503.f_108485[7]++;
			}
			else if (func_36(bParam0->f_9))
			{
				Global_794503.f_108485[4]++;
			}
			else if (func_35(bParam0->f_9))
			{
				Global_794503.f_108485[10]++;
			}
		}
	}
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
	if (!func_64())
	{
		Global_794503.f_96153[bParam0->f_9 /*11*/].f_1 = unk_0xD24D37CC275948CC(unk_0xC0173D6BFF4E0348(bParam0->f_7));
		if ((Global_794503.f_108484 < 5 && Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 0) && Global_794503.f_4[bParam0->f_9 /*86*/].f_68 == 1)
		{
			Global_794503.f_96153[bParam0->f_9 /*11*/].f_9 = Global_794503.f_108484;
			StringCopy(&(Global_794503.f_108453[Global_794503.f_108484 /*6*/]), unk_0xC0173D6BFF4E0348(bParam0->f_7), 24);
			Global_794503.f_108484++;
		}
		func_31(Global_794503.f_96153[bParam0->f_9 /*11*/].f_1, &(Global_794503.f_4[bParam0->f_9 /*86*/].f_76));
		if (bParam1)
		{
			if (unk_0x70EA8DA57840F9BE(bParam0->f_7))
			{
				unk_0x933D6A9EEC1BACD0(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 14);
			}
		}
		else
		{
			if ((unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 15) || unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 18)) || unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 19))
			{
				Global_794503.f_108485[11]++;
			}
			if (unk_0x70EA8DA57840F9BE(bParam0->f_7))
			{
				unk_0x933D6A9EEC1BACD0(&(Global_794503.f_4[bParam0->f_9 /*86*/].f_76), 14);
				if (unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 1) || Global_794503.f_4[bParam0->f_9 /*86*/].f_68 == 2)
				{
					Global_794503.f_108485[9]++;
				}
				if (Global_794503.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
				{
					if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 < 13)
					{
						Global_794503.f_108499[Global_794503.f_4[bParam0->f_9 /*86*/].f_65]++;
					}
				}
				Global_794503.f_96153[bParam0->f_9 /*11*/].f_6 = unk_0x993CBE59D350D225(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		func_29(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14), Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
		func_27(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, 0);
		func_25(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70, unk_0xA921AA820C25702F(Global_794503.f_4[bParam0->f_9 /*86*/].f_76, 14));
		func_6(Global_794503.f_4[bParam0->f_9 /*86*/].f_65, Global_794503.f_4[bParam0->f_9 /*86*/].f_68, Global_794503.f_4[bParam0->f_9 /*86*/].f_75, Global_794503.f_4[bParam0->f_9 /*86*/].f_70);
	}
	if (Global_794503.f_4[bParam0->f_9 /*86*/].f_65 == 6)
	{
		Global_964184[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794503.f_2++;
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_13(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_12(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_7(iVar1, 1);
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_10(iParam0))
	{
		func_9(iParam0, iVar0);
	}
	else
	{
		func_8(iParam0, iVar0);
	}
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1333710 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1333712 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1333713 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1333714 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1333715 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1333716 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1333717 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1333718 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1333719 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1333720 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1333721 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1333722 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1333723 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1333724 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1333725 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1333726 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, true);
	}
}

int func_10(int iParam0)
{
	if (Global_1333709)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_11(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_total_contact_0");
		
		case 19:
			return joaat("mpply_total_contact_1");
		
		case 86:
			return joaat("mpply_total_contact_2");
		
		case 20:
			return joaat("mpply_total_contact_3");
		
		case 31:
			return joaat("mpply_total_contact_4");
		
		case 2:
			return joaat("mpply_total_contact_5");
		
		case 18:
			return joaat("mpply_total_contact_6");
		
		default:
	}
	return -1;
}

int func_13(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		return 0;
	}
	if (iParam1 != 2)
	{
		return 0;
	}
	if (func_19(unk_0x4F8644AF03D0E0D6()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_14(iParam2);
	*uParam3 = 145;
	if (iVar0 != 0)
	{
		*uParam3 = iVar0;
	}
	if (*uParam3 == 145)
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			
			case 17:
				return 19;
			
			case 18:
				return 20;
			
			case 28:
				return 31;
			
			case 75:
				return 12;
			
			default:
		}
		return iParam0;
	}
	iVar0 = func_15(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_17(iVar0);
		if (iParam0 == func_16(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return joaat("gerald");
		
		case 19:
			return joaat("LAMAR");
		
		case 12:
			return joaat("lester");
		
		case 31:
			return -328739832;
		
		case 20:
			return -1984782235;
		
		case 18:
			return joaat("simeon");
		
		case 2:
			return joaat("TREVOR");
		
		case 76:
			return joaat("AGENT14");
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_17(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	uVar1 = func_18(iVar0);
	return uVar1;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
		
		case 1:
			return 19;
		
		case 2:
			return 12;
		
		case 3:
			return 31;
		
		case 4:
			return 20;
		
		case 5:
			return 18;
		
		case 6:
			return 2;
		
		case 7:
			return 76;
		
		default:
	}
	return 19;
}

int func_19(int iParam0)
{
	int iVar0;
	
	iVar0 = func_21(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_20(iVar0, 0);
}

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270026[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270026[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_21(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x4F8644AF03D0E0D6())
			{
				return Global_1333830[func_23(-1)];
			}
			else if (func_22(iParam0))
			{
				return Global_1582048[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1333830[func_23(-1)];
	}
	return 0;
}

int func_22(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA921AA820C25702F(Global_2421967.f_1, iParam0);
	}
	return 1;
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312736;
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		return;
	}
	if (!func_13(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_26(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_7(iVar1, 1);
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_unique_contact_0");
		
		case 19:
			return joaat("mpply_unique_contact_1");
		
		case 86:
			return joaat("mpply_unique_contact_2");
		
		case 20:
			return joaat("mpply_unique_contact_3");
		
		case 31:
			return joaat("mpply_unique_contact_4");
		
		case 2:
			return joaat("mpply_unique_contact_5");
		
		case 18:
			return joaat("mpply_unique_contact_6");
		
		default:
	}
	return -1;
}

void func_27(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_47())
	{
		if (iParam0 == 0)
		{
			if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
			{
				if (func_19(unk_0x4F8644AF03D0E0D6()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_28(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_7(iVar0, 1);
	}
}

int func_28(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_available_races_v");
			}
			else
			{
				return joaat("mpply_available_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_available_dms_v");
			}
			else
			{
				return joaat("mpply_available_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_available_paras_v");
			}
			else
			{
				return joaat("mpply_available_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_available_survival_v");
			}
			else
			{
				return joaat("mpply_available_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_available_ctf_v");
					}
					else
					{
						return joaat("mpply_available_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_available_lts_v");
					}
					else
					{
						return joaat("mpply_available_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_available_versus_v");
					}
					else
					{
						return joaat("mpply_available_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_available_heist_finale_v");
					}
					else
					{
						return joaat("mpply_available_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_available_heist_planv");
					}
					else
					{
						return joaat("mpply_available_heist_plan");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_available_missions_v");
			}
			else
			{
				return joaat("mpply_available_missions");
			}
			break;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_47())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
		{
			if (func_19(unk_0x4F8644AF03D0E0D6()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = func_30(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_7(iVar0, 1);
}

int func_30(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_unique_races_v");
			}
			else
			{
				return joaat("mpply_unique_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_unique_dms_v");
			}
			else
			{
				return joaat("mpply_unique_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_unique_paras_v");
			}
			else
			{
				return joaat("mpply_unique_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_unique_survival_v");
			}
			else
			{
				return joaat("mpply_unique_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_unique_ctf_v");
					}
					else
					{
						return joaat("mpply_unique_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_unique_lts_v");
					}
					else
					{
						return joaat("mpply_unique_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_unique_versus_v");
					}
					else
					{
						return joaat("mpply_unique_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_finale_v");
					}
					else
					{
						return joaat("mpply_unique_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_planning_v");
					}
					else
					{
						return joaat("mpply_unique_heist_planning");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_unique_missions_v");
			}
			else
			{
				return joaat("mpply_unique_missions");
			}
			break;
	}
	return -1;
}

void func_31(int iParam0, int* iParam1)
{
	if (func_34(iParam0))
	{
		unk_0x933D6A9EEC1BACD0(iParam1, 15);
	}
	else if (func_33(iParam0))
	{
		unk_0x933D6A9EEC1BACD0(iParam1, 18);
	}
	else if (func_32(iParam0))
	{
		unk_0x933D6A9EEC1BACD0(iParam1, 19);
	}
}

int func_32(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7217 || iParam0 == Global_262145.f_7218) || iParam0 == Global_262145.f_7219) || iParam0 == Global_262145.f_7220) || iParam0 == Global_262145.f_7221)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7212 || iParam0 == Global_262145.f_7213) || iParam0 == Global_262145.f_7214) || iParam0 == Global_262145.f_7215) || iParam0 == Global_262145.f_7216)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7205 || iParam0 == Global_262145.f_7206) || iParam0 == Global_262145.f_7207) || iParam0 == Global_262145.f_7208) || iParam0 == Global_262145.f_7209) || iParam0 == Global_262145.f_7210) || iParam0 == Global_262145.f_7211)
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_794503.f_4[iParam0 /*86*/].f_76, 3);
}

bool func_36(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_794503.f_4[iParam0 /*86*/].f_76, 10);
}

bool func_37(int iParam0)
{
	return unk_0xA921AA820C25702F(Global_794503.f_4[iParam0 /*86*/].f_76, 7);
}

void func_38(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_39(float fParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = unk_0xF2DB717A73826179((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

char* func_40()
{
	return unk_0x7B5280EBA9840C72("CREATOR_RSC");
}

Vector3 func_41(char* sParam0)
{
	struct<3> Var0;
	
	if (unk_0x031C55ED33227371(sParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x06610343E73B9727(sParam0, "camp");
	}
	else if (unk_0x031C55ED33227371(sParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sParam0, "camp"));
	}
	if (unk_0x031C55ED33227371(sParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x06610343E73B9727(sParam0, "camh");
	}
	else if (unk_0x031C55ED33227371(sParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sParam0, "camh"));
	}
	return Var0;
}

Vector3 func_42(char* sParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x031C55ED33227371(sParam0, sParam1) == 5)
	{
		Var0 = { unk_0x46CD3CB66E0825CC(sParam0, sParam1) };
	}
	else if (unk_0x031C55ED33227371(sParam0, sParam1) == 6)
	{
		iVar3 = unk_0xB6B9DDC412FCEEE2(sParam0, sParam1);
		if (unk_0x031C55ED33227371(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x06610343E73B9727(iVar3, "x");
		}
		if (unk_0x031C55ED33227371(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x06610343E73B9727(iVar3, "y");
		}
		if (unk_0x031C55ED33227371(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x06610343E73B9727(iVar3, "z");
		}
	}
	return Var0;
}

int func_43(int iParam0)
{
	if (unk_0x7FCC39C46C3C03BD(iParam0))
	{
		return 2;
	}
	else if (unk_0x1D610EB0FEA716D9(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_44(bool bParam0)
{
	func_45(joaat("mpply_big_feed_init"), bParam0);
}

void func_45(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x4B33C4243DE0C432(iVar0, bParam1, true);
	}
}

void func_46(bool bParam0)
{
	if (!func_47())
	{
		return;
	}
	if (bParam0)
	{
		func_9(joaat("mpply_unique_races"), 0);
		func_9(joaat("mpply_unique_dms"), 0);
		func_9(joaat("mpply_unique_paras"), 0);
		func_9(joaat("mpply_unique_survival"), 0);
		func_9(joaat("mpply_unique_ctf"), 0);
		func_9(joaat("mpply_unique_lts"), 0);
		func_9(joaat("mpply_unique_versus"), 0);
		func_9(joaat("mpply_unique_missions"), 0);
		func_9(joaat("mpply_unique_heist_planning"), 0);
		func_9(joaat("mpply_unique_heist_finale"), 0);
		func_9(joaat("mpply_available_races"), 0);
		func_9(joaat("mpply_available_dms"), 0);
		func_9(joaat("mpply_available_paras"), 0);
		func_9(joaat("mpply_available_survival"), 0);
		func_9(joaat("mpply_available_lts"), 0);
		func_9(joaat("mpply_available_ctf"), 0);
		func_9(joaat("mpply_available_versus"), 0);
		func_9(joaat("mpply_available_missions"), 0);
		func_9(joaat("mpply_available_heist_plan"), 0);
		func_9(joaat("mpply_available_heist_finale"), 0);
		func_9(joaat("mpply_unique_contact_0"), 0);
		func_9(joaat("mpply_unique_contact_1"), 0);
		func_9(joaat("mpply_unique_contact_2"), 0);
		func_9(joaat("mpply_unique_contact_3"), 0);
		func_9(joaat("mpply_unique_contact_4"), 0);
		func_9(joaat("mpply_unique_contact_5"), 0);
		func_9(joaat("mpply_unique_contact_6"), 0);
		func_9(joaat("mpply_total_contact_0"), 0);
		func_9(joaat("mpply_total_contact_1"), 0);
		func_9(joaat("mpply_total_contact_2"), 0);
		func_9(joaat("mpply_total_contact_3"), 0);
		func_9(joaat("mpply_total_contact_4"), 0);
		func_9(joaat("mpply_total_contact_5"), 0);
		func_9(joaat("mpply_total_contact_6"), 0);
	}
	else
	{
		func_9(joaat("mpply_unique_races_v"), 0);
		func_9(joaat("mpply_unique_dms_v"), 0);
		func_9(joaat("mpply_unique_paras_v"), 0);
		func_9(joaat("mpply_unique_survival_v"), 0);
		func_9(joaat("mpply_unique_ctf_v"), 0);
		func_9(joaat("mpply_unique_lts_v"), 0);
		func_9(joaat("mpply_unique_versus_v"), 0);
		func_9(joaat("mpply_unique_missions_v"), 0);
		func_9(joaat("mpply_unique_heist_planning_v"), 0);
		func_9(joaat("mpply_unique_heist_finale_v"), 0);
		func_9(joaat("mpply_available_races_v"), 0);
		func_9(joaat("mpply_available_dms_v"), 0);
		func_9(joaat("mpply_available_paras_v"), 0);
		func_9(joaat("mpply_available_survival_v"), 0);
		func_9(joaat("mpply_available_lts_v"), 0);
		func_9(joaat("mpply_available_ctf_v"), 0);
		func_9(joaat("mpply_available_versus_v"), 0);
		func_9(joaat("mpply_available_missions_v"), 0);
		func_9(joaat("mpply_available_heist_planv"), 0);
		func_9(joaat("mpply_available_heist_finale_v"), 0);
	}
}

int func_47()
{
	if (func_49() && func_48(0))
	{
		return 1;
	}
	return 0;
}

var func_48(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_49()
{
	return func_48(func_24() + 1);
}

void func_50()
{
	int iVar0;
	
	Global_963585.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_963585[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_963585.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_963585.f_512[iVar0] = 0f;
		iVar0++;
	}
}

int func_51(char* sParam0)
{
	if ((((((((((((((((unk_0x0C515FAB3FF9EA92(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x0C515FAB3FF9EA92(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x0C515FAB3FF9EA92(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x0C515FAB3FF9EA92(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x0C515FAB3FF9EA92(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x0C515FAB3FF9EA92(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x0C515FAB3FF9EA92(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x0C515FAB3FF9EA92(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x0C515FAB3FF9EA92(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x0C515FAB3FF9EA92(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x0C515FAB3FF9EA92(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x0C515FAB3FF9EA92(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x0C515FAB3FF9EA92(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x0C515FAB3FF9EA92(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x0C515FAB3FF9EA92(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x0C515FAB3FF9EA92(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x0C515FAB3FF9EA92(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	int iVar19;
	
	if (Global_262145.f_3740 == 1)
	{
		return 0;
	}
	if (Global_786484 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar19 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786484)
		{
			if (iVar19 == 0)
			{
				if (Global_786484.f_3012[iVar1 /*11*/].f_1 == unk_0xD24D37CC275948CC(&(Global_2394688[iVar0 /*6*/])))
				{
					iVar19 = 1;
					iVar2[iVar0] = iVar1;
				}
			}
			iVar1++;
		}
		if (iVar19 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794503.f_4[(1100 + iVar0) /*86*/] = { Global_786484.f_1[iVar2[iVar0] /*86*/] };
		Global_794503.f_96153[(1100 + iVar0) /*11*/] = { Global_786484.f_3012[iVar2[iVar0] /*11*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1681535.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3398[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_54(1);
	return 1;
}

void func_54(int iParam0)
{
	Global_1681535.f_1783 = iParam0;
}

void func_55(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_56()
{
	struct<86> Var0;
	int iVar86;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar86 = 1100;
	while (iVar86 <= 1117)
	{
		Global_794503.f_4[iVar86 /*86*/] = { Var0 };
		iVar86++;
	}
}

void func_57()
{
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
}

void func_58()
{
	if (func_64())
	{
		unk_0x61A885D3F7CFEE9A();
	}
	else
	{
		unk_0xBA96394A0EECFA65();
	}
}

bool func_59()
{
	return Global_2434309.f_4;
}

int func_60()
{
	if (unk_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (unk_0xD53ACDBEF24A46E8())
	{
		return 1;
	}
	else if (unk_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

int func_61()
{
	if (!func_62())
	{
		return 1;
	}
	return 0;
}

int func_62()
{
	if (func_63())
	{
		return 0;
	}
	if (unk_0x9A4CF4F48AD77302() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_63()
{
	return Global_2435039;
}

bool func_64()
{
	return Global_1572867.f_4;
}

bool func_65()
{
	return Global_2394627.f_2;
}

int func_66(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_60())
			{
				return 0;
			}
			func_58();
			func_57();
			if (func_64())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0xF98DDE0A8ED09323(false);
			}
			func_55(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x815E5E3073DA1D67(sParam1, func_52(0)))
			{
				func_55(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x02ADA21EA2F6918F())
			{
				bParam0->f_40 = unk_0xEDF7F927136C224B();
				if (unk_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = unk_0xEDF7F927136C224B();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xE0A6138401BCB837() > 0)
				{
					if (unk_0xA69AC4ADE82B57A4(0))
					{
						func_67(sParam2, 0);
						func_178(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_178(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_67(char* sParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	
	sVar0 = unk_0x906B778CA1DC72B6();
	iVar1 = unk_0xB6B9DDC412FCEEE2(sVar0, "mission");
	sVar2 = unk_0xB6B9DDC412FCEEE2(iVar1, "gen");
	StringCopy(sParam0, unk_0x55AA95F481D694D2(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0xCD67AD041A394C9C(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0xBF09786A7FCAB582(iParam1), 64);
	sParam0->f_56 = { func_42(sVar2, "start") };
	sParam0->f_59 = { func_42(sVar2, "cam") };
	sParam0->f_62 = { func_41(sVar2) };
	sParam0->f_65 = unk_0x78F06F6B1FB5A80C(sVar2, "type");
	sParam0->f_68 = unk_0x78F06F6B1FB5A80C(sVar2, "subtype");
	sParam0->f_78 = unk_0x78F06F6B1FB5A80C(sVar2, "testcomplete");
	sParam0->f_69 = unk_0x78F06F6B1FB5A80C(sVar2, "min");
	sParam0->f_70 = unk_0x78F06F6B1FB5A80C(sVar2, "rank");
	sParam0->f_71 = unk_0x78F06F6B1FB5A80C(sVar2, "num");
	sParam0->f_73 = func_39(unk_0x1ACCFBA3D8DAB2EE(iParam1, 0), unk_0x759299C5BB31D2A9(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x78F06F6B1FB5A80C(sVar2, "charcon");
	if (func_68() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4694)
		{
			sParam0->f_71 = Global_262145.f_4694;
		}
		if (sParam0->f_69 > Global_262145.f_4694)
		{
			sParam0->f_69 = Global_262145.f_4694;
		}
	}
	if (!func_64())
	{
		iVar3 = unk_0x32DD916F3F7C9672(iParam1);
		if (unk_0xF53E48461B71EECB(iVar3))
		{
			sParam0->f_54 = unk_0x7CF0448787B23758(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x031C55ED33227371(sVar2, "ltm") == 2)
	{
		sParam0->f_77 = unk_0x78F06F6B1FB5A80C(sVar2, "ltm");
	}
	unk_0x933D6A9EEC1BACD0(&(sParam0->f_76), 13);
	func_57();
}

int func_68()
{
	return Global_24444;
}

bool func_69()
{
	return Global_2394627.f_1;
}

void func_70()
{
	struct<61> Var0;
	
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_9 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Global_2394627 = { Var0 };
	StringCopy(&(Global_2394627.f_29), "", 64);
	StringCopy(&(Global_2394627.f_45), "", 64);
	StringCopy(&(Global_2394627.f_14), "", 32);
}

int func_71(var uParam0, char* sParam1, int* iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0x933D6A9EEC1BACD0(iParam2, 3);
		if (!unk_0xA921AA820C25702F(*iParam2, 2))
		{
		}
		unk_0x933D6A9EEC1BACD0(iParam2, 2);
		return 1;
	}
	if ((func_175() && func_174()) || func_173())
	{
		if (!unk_0xA921AA820C25702F(*iParam2, 2))
		{
		}
		unk_0x933D6A9EEC1BACD0(iParam2, 2);
		unk_0x933D6A9EEC1BACD0(iParam2, 1);
		unk_0x933D6A9EEC1BACD0(iParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xA921AA820C25702F(*iParam2, 3))
		{
			unk_0x933D6A9EEC1BACD0(iParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_172())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_171())
		{
			if (unk_0xA921AA820C25702F(*iParam2, 2))
			{
				unk_0x933D6A9EEC1BACD0(iParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (func_59())
		{
			return 0;
		}
	}
	if (!unk_0xA921AA820C25702F(*iParam2, 2))
	{
		if (!unk_0xA921AA820C25702F(*iParam2, 1))
		{
			if (!bParam12)
			{
				func_163(1, 1, bParam11);
			}
			unk_0x933D6A9EEC1BACD0(iParam2, 1);
			func_178(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_83(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_82() || Global_1601761 == 31) || Global_1601761 == 6) || Global_1601761 == 4)
			{
				if (Global_1601761.f_18 < 1)
				{
					Global_1601761.f_18 = 1;
				}
				if (Global_1601761.f_17 < 1)
				{
					Global_1601761.f_17 = 1;
				}
			}
			else if (Global_1601761 == 1)
			{
				Global_1333899.f_4 = 99;
				Global_1333899.f_6 = Global_1601761.f_39;
				Global_1333899.f_7 = Global_1601761.f_30762;
				Global_1333899.f_9 = Global_1601761.f_24919;
				Global_1333899.f_11 = Global_1601761.f_40;
				Global_1333899.f_12 = Global_1601761.f_42;
				Global_1333899.f_13 = Global_1601761.f_44;
				Global_1333899.f_14 = Global_1601761.f_43;
				Global_1333899.f_16 = Global_1601761.f_15;
				Global_1333899.f_5 = Global_1601761.f_37;
				Global_1333899.f_10 = Global_1601761.f_50;
			}
			else if (func_81())
			{
				Global_2475434.f_7 = 9901;
				Global_2475434.f_8 = Global_1601761.f_24822 + 1;
				if (func_80(Global_1601761.f_21441))
				{
					Global_1601761.f_21441 = { Global_1601761.f_54 };
				}
			}
			unk_0x933D6A9EEC1BACD0(iParam2, 2);
			unk_0xE80492A9AC099A93(iParam2, 1);
			unk_0x933D6A9EEC1BACD0(iParam2, 3);
			if (*uParam0)
			{
				func_79();
				func_78();
				if (func_77())
				{
					func_74(Global_1601761.f_13);
				}
				Global_1601761.f_55474 = 1;
			}
			else
			{
				func_176();
			}
			if (!func_73())
			{
				func_72();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		unk_0x933D6A9EEC1BACD0(iParam2, 3);
		if (Global_1601761.f_55474)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_72()
{
	Global_2427935.f_24.f_49 = 1;
}

int func_73()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0xCA042B6957743895(&(Global_1601761.f_55130[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_74(int iParam0)
{
	if (!func_76())
	{
		unk_0x4811BBAC21C5FCD5(2);
		unk_0x5539C3EBF104A53A(true);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x702BC4D605522539((iParam0 / 2));
		func_75();
	}
}

void func_75()
{
	unk_0x933D6A9EEC1BACD0(&(Global_2427935.f_2), 3);
}

bool func_76()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_2, 3);
}

bool func_77()
{
	return unk_0xA921AA820C25702F(Global_2428692.f_1.f_2807, 8);
}

void func_78()
{
	unk_0x933D6A9EEC1BACD0(&Global_2427935, 4);
}

void func_79()
{
	unk_0x933D6A9EEC1BACD0(&Global_2427935, 28);
}

int func_80(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (Global_1601761 == 2 || Global_1601761 == 8)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if ((((((Global_1601761 == 0 || Global_1601761 == 4) || Global_1601761 == 6) || Global_1601761 == 3) || Global_1601761 == 31) || Global_1601761.f_1 == 6) || Global_1601761.f_1 == 5)
	{
		return 1;
	}
	return 0;
}

int func_83(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<16> Var17;
	int iVar33;
	
	if (uParam0->f_26 == 0)
	{
		if (func_59() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_64() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_61())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = func_162(1);
			uParam0->f_25 = func_160(1);
			if (func_60())
			{
				return 0;
			}
			func_58();
			func_57();
			if (func_64() || bParam9)
			{
				unk_0xF98DDE0A8ED09323(true);
			}
			else
			{
				unk_0xF98DDE0A8ED09323(false);
			}
			func_158();
			if (bParam4)
			{
				func_55(uParam0, 11);
			}
			else
			{
				func_55(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_64() || bParam9)
			{
				if (unk_0xC5238C011AF405E4(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1601761.f_55477 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1601761.f_55124), sParam1, 24);
						}
						func_120(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_55(uParam0, 9);
						*uParam0 = 1;
						func_119();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_965455.f_34), sParam1, 24);
							Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_965455.f_12 };
							func_118(&sVar1, &uVar0, &Global_965455);
							if (Global_965455.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_119();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_964222.f_34), sParam1, 24);
							Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_964222.f_12 };
							func_118(&sVar1, &uVar0, &Global_964222);
							uParam0->f_8 = 0;
							if (Global_964222.f_57 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_119();
								return 1;
							}
						}
						func_57();
						unk_0x61A885D3F7CFEE9A();
						unk_0xF98DDE0A8ED09323(true);
						func_117(uParam0);
						func_55(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_119();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_119();
					func_57();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_52(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0xAD6875BBC0FC899C(uParam0->f_5);
				func_55(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x158EC424F35EC469(sParam1, true, func_52(iParam2)))
				{
					func_55(uParam0, 3);
				}
			}
			else if (unk_0x815E5E3073DA1D67(sParam1, func_52(iParam2)))
			{
				func_55(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x02ADA21EA2F6918F())
			{
				uParam0->f_40 = unk_0xEDF7F927136C224B();
				if (unk_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_119();
					return 1;
				}
				if (unk_0xE0A6138401BCB837() > 0)
				{
					if (!bParam12 && !func_115(uParam0->f_24, uParam0->f_25, unk_0xCD67AD041A394C9C(0), unk_0xA7BAB11E7C9C6C5A(0)))
					{
						func_178(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_119();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0xAD6875BBC0FC899C(uParam0->f_5);
						func_55(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0xA69AC4ADE82B57A4(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_965455.f_12), unk_0xBF09786A7FCAB582(0), 32);
								StringCopy(&(Global_965455.f_28), unk_0x55AA95F481D694D2(0), 24);
								StringCopy(&(Global_965455.f_34), sParam1, 24);
								Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_965455.f_12 };
								func_118(&sVar1, &uVar0, &Global_965455);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_964222.f_12), unk_0xBF09786A7FCAB582(0), 32);
								StringCopy(&(Global_964222.f_28), unk_0x55AA95F481D694D2(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_964222.f_12 };
								func_118(&sVar1, &uVar0, &Global_964222);
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_119();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0xA69AC4ADE82B57A4(0))
						{
							if (uParam0->f_16)
							{
								func_113(&sVar1, &uVar0, &Global_965455, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_119();
									return 1;
								}
								StringCopy(&(Global_965455.f_12), unk_0xBF09786A7FCAB582(0), 32);
								StringCopy(&(Global_965455.f_28), unk_0x55AA95F481D694D2(0), 24);
								StringCopy(&(Global_965455.f_34), sParam1, 24);
								Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_965455.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_113(&sVar1, &uVar0, &Global_964222, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_119();
									return 1;
								}
								StringCopy(&(Global_964222.f_12), unk_0xBF09786A7FCAB582(0), 32);
								StringCopy(&(Global_964222.f_28), unk_0x55AA95F481D694D2(0), 24);
								StringCopy(&(Global_964222.f_34), sParam1, 24);
								Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_19 = { Global_964222.f_12 };
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_119();
							return 1;
						}
					}
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_119();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x4C61B39930D045DA(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0x10D373323E5B9C0D();
				}
				if (unk_0x3A3D5568AF297CD5(uParam0->f_5))
				{
					func_55(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_55(uParam0, 0);
					return 0;
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_119();
					return 1;
				}
			}
			else if (func_112() || func_111() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xABA17D7CE615ADBF("FMMC_DOWNLOAD");
					unk_0xBD12F8228410D9B4(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_110())
			{
				return 0;
			}
			if (unk_0x15FF52B809DB2353(uParam0->f_5))
			{
				if (unk_0x22DA66936E0FFF37(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_163(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1601761.f_55477 = 1;
							Global_1601761.f_55470 = 1;
							StringCopy(&(Global_1601761.f_54813), "", 64);
							StringCopy(&(Global_1601761.f_54860), "", 24);
							StringCopy(&(Global_1601761.f_54838), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1601761.f_55124), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1601761.f_54837 = unk_0xD24D37CC275948CC(unk_0xC0173D6BFF4E0348(0));
							if (Global_1601761.f_55477 == 1 || Global_1601761.f_55477 == 2)
							{
								StringCopy(&(Global_1601761.f_54838), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1601761.f_54838), unk_0xCD67AD041A394C9C(0), 24);
							}
							StringCopy(&(Global_1601761.f_54860), unk_0xCD67AD041A394C9C(0), 24);
							Global_1601761.f_55477 = unk_0xA7BAB11E7C9C6C5A(0);
							if ((Global_1601761.f_55477 == 0 || Global_1601761.f_55477 == 3) && unk_0x8C8D2739BA44AF0F(0))
							{
								StringCopy(&(Global_1601761.f_54813), unk_0x6D0DE6A7B5DA71F8(unk_0x4F8644AF03D0E0D6()), 64);
							}
							else if ((unk_0x4D982ADB1978442D() && (Global_1601761.f_55477 == 0 || Global_1601761.f_55477 == 3)) && func_109(&iVar33, &(Global_1601761.f_54860)))
							{
								StringCopy(&(Global_1601761.f_54813), unk_0x6D0DE6A7B5DA71F8(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1601761.f_54813), unk_0x703F12425ECA8BF5(0), 64);
							}
							Global_1601761.f_55144 = unk_0x759299C5BB31D2A9(0, 0);
							Global_1601761.f_55472 = unk_0xAEAB987727C5A8A4(0);
							uParam0->f_23 = func_43(0);
							Global_1601761.f_68081 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1601761.f_55124), unk_0x55AA95F481D694D2(0), 24);
							}
							if (Global_1601761.f_55477 == 0 || Global_1601761.f_55477 == 3)
							{
								if ((unk_0x584770794D758C18(0, &uVar4) && unk_0x6F79B93B0A8E4133(&uVar4, 13)) && unk_0x1A24A179F9B31654(&uVar4))
								{
									Var17 = { Global_1601761.f_54813 };
									func_108(1, Var17);
								}
								else
								{
									func_108(0, Var17);
								}
							}
							else
							{
								func_108(0, Var17);
							}
							Global_1601761.f_6 = func_39(unk_0x1ACCFBA3D8DAB2EE(0, 0), unk_0x759299C5BB31D2A9(0, 0));
							if (unk_0x70EA8DA57840F9BE(uParam0->f_7))
							{
								Global_1601761.f_55471 = unk_0x993CBE59D350D225(0);
								Global_1601761.f_55473 = 1;
							}
							else
							{
								Global_1601761.f_55471 = 0;
								Global_1601761.f_55473 = 0;
							}
							Global_1601761.f_55470 = unk_0x3054F114121C21EA(0);
							uParam0->f_34 = unk_0x32DD916F3F7C9672(0);
							if (!func_64())
							{
								if (unk_0xF53E48461B71EECB(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x7CF0448787B23758(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1601761.f_55143 = uParam0->f_30;
							Global_2428692.f_3955.f_3 = unk_0x4E548C0D7AE39FF9(0, 0);
							Global_2428692.f_3955.f_2 = unk_0x87E5C46C187FE0AE(0, 0);
							if (Global_1601761.f_55477 == 1 || Global_1601761.f_55477 == 2)
							{
								StringCopy(&(Global_1601761.f_54813), func_40(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1601761.f_55124), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_64())
						{
							func_120(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_55(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_120(-1, bParam11, 0, 0);
						}
						if (func_105(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						sVar1 = unk_0x906B778CA1DC72B6();
						iVar2 = unk_0xB6B9DDC412FCEEE2(sVar1, "mission");
						iVar3 = unk_0xB6B9DDC412FCEEE2(iVar2, "gen");
						StringCopy(&(Global_2421967.f_3021), unk_0xBF09786A7FCAB582(0), 32);
						Global_2421967.f_3021.f_8 = unk_0x78F06F6B1FB5A80C(iVar3, "type");
						uParam0->f_17 = unk_0x70EA8DA57840F9BE(0);
						*uParam0 = 1;
						func_119();
						unk_0x8F5EA1C01D65A100(uParam0->f_5);
						func_57();
						return 1;
					}
					unk_0x8F5EA1C01D65A100(uParam0->f_5);
					func_57();
				}
				else if (iParam2 == 0)
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_119();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_119();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_120(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_105(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_103(uParam0, 0, bParam3, 0))
			{
				func_55(uParam0, 0);
				func_57();
				if ((((func_97(Global_1601761.f_54837) && func_82()) && !bParam9) && !unk_0xCA042B6957743895(&(Global_1601761.f_55130[0 /*6*/]))) && (func_112() || (func_92() && !func_91())))
				{
					uParam0->f_8 = 0;
					func_55(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_43(0);
						uParam0->f_21 = unk_0x37025B27D9B658B1(0, uParam0->f_23);
					}
					func_90(&(uParam0->f_41), 0);
					func_55(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_119();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x158EC424F35EC469(&(Global_1601761.f_55130[0 /*6*/]), true, func_52(iParam2)))
			{
				func_55(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x02ADA21EA2F6918F())
			{
				uParam0->f_40 = unk_0xEDF7F927136C224B();
				if (unk_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_119();
					return 1;
				}
				if (unk_0xE0A6138401BCB837() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0xAD6875BBC0FC899C(uParam0->f_5);
					func_55(uParam0, 22);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_119();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0x4C61B39930D045DA(uParam0->f_5))
			{
				if (unk_0x3A3D5568AF297CD5(uParam0->f_5))
				{
					func_55(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_55(uParam0, 0);
					return 0;
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_119();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0x15FF52B809DB2353(uParam0->f_5))
			{
				if (unk_0x22DA66936E0FFF37(uParam0->f_5))
				{
					func_87();
					func_178(uParam0, 1, 0);
					Global_1600516 = 1;
					func_119();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_119();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xA921AA820C25702F(Global_1601761.f_5, 0))
			{
				if (bParam7)
				{
					if (func_86(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_178(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_119();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_119();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_178(uParam0, 1, 1);
				func_119();
				return 1;
			}
			break;
		
		case 10:
			if (func_103(uParam0, 0, bParam3, iParam2))
			{
				func_57();
				func_55(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0xB8322EEB38BE7C26(&(Global_965455.f_1136), Global_965455.f_57, func_52(0)))
				{
					func_55(uParam0, 12);
				}
			}
			else if (unk_0xB8322EEB38BE7C26(&(Global_964222.f_1136), Global_964222.f_57, func_52(0)))
			{
				func_55(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x02ADA21EA2F6918F())
			{
				if (unk_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_119();
					return 1;
				}
				if (unk_0xE0A6138401BCB837() > 0)
				{
					if (uParam0->f_16)
					{
						Global_965455.f_57 = unk_0xE0A6138401BCB837();
					}
					else
					{
						Global_964222.f_57 = unk_0xE0A6138401BCB837();
					}
					uParam0->f_8 = 0;
					func_178(uParam0, 0, bParam8);
					func_117(uParam0);
					func_55(uParam0, 13);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_119();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_64())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_965455.f_57 - 1))
					{
						if (unk_0xC5238C011AF405E4(&(Global_965455.f_1136[uParam0->f_9 /*6*/])))
						{
							func_85(uParam0, &Global_965455);
							unk_0x61A885D3F7CFEE9A();
						}
						uParam0->f_9++;
					}
					func_119();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_964222.f_57 - 1))
					{
						if (unk_0xC5238C011AF405E4(&(Global_964222.f_1136[uParam0->f_9 /*6*/])))
						{
							func_85(uParam0, &Global_964222);
							unk_0x61A885D3F7CFEE9A();
						}
						uParam0->f_9++;
					}
					func_119();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_84(uParam0, &Global_965455))
				{
					if (uParam0->f_27)
					{
						func_178(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_119();
						return 1;
					}
					else
					{
						func_55(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_84(uParam0, &Global_964222))
			{
				if (uParam0->f_27)
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_119();
					return 1;
				}
				else
				{
					func_55(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_55(uParam0, 0);
			func_57();
			func_178(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_119();
			return 1;
			break;
	}
	return 0;
}

int func_84(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_57 - 1))
	{
		if (unk_0xA69AC4ADE82B57A4(uParam0->f_7))
		{
			if (!func_115(uParam0->f_24, uParam0->f_25, unk_0xCD67AD041A394C9C(0), unk_0xA7BAB11E7C9C6C5A(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_85(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_57();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_57)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_85(var uParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	sVar0 = unk_0x906B778CA1DC72B6();
	iVar1 = unk_0xB6B9DDC412FCEEE2(sVar0, "mission");
	sVar2 = unk_0xB6B9DDC412FCEEE2(iVar1, "gen");
	uParam1->f_63[uParam0->f_9 /*67*/].f_45 = { func_42(sVar2, "start") };
	if (func_64())
	{
		StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_12), unk_0x3D2FD9E763B24472(sVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_12), unk_0xBF09786A7FCAB582(uParam0->f_7), 64);
	}
	if (!func_64())
	{
		uParam1->f_63[uParam0->f_9 /*67*/].f_44 = unk_0x7CF0448787B23758(uParam0->f_7);
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_66 = unk_0xA7BAB11E7C9C6C5A(uParam0->f_7);
	uParam1->f_63[uParam0->f_9 /*67*/].f_56 = unk_0x78F06F6B1FB5A80C(sVar2, "min");
	uParam1->f_63[uParam0->f_9 /*67*/].f_59 = unk_0x78F06F6B1FB5A80C(sVar2, "tnum");
	uParam1->f_63[uParam0->f_9 /*67*/].f_60 = unk_0x78F06F6B1FB5A80C(sVar2, "num");
	uParam1->f_63[uParam0->f_9 /*67*/].f_54 = unk_0x78F06F6B1FB5A80C(sVar2, "type");
	uParam1->f_63[uParam0->f_9 /*67*/].f_55 = unk_0x78F06F6B1FB5A80C(sVar2, "subtype");
	uParam1->f_63[uParam0->f_9 /*67*/].f_48 = { func_42(sVar2, "cam") };
	uParam1->f_63[uParam0->f_9 /*67*/].f_51 = { func_41(sVar2) };
	uParam1->f_63[uParam0->f_9 /*67*/].f_57 = func_43(uParam0->f_7);
	StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/].f_6), unk_0x703F12425ECA8BF5(uParam0->f_7), 24);
	if (!func_64())
	{
		uParam1->f_63[uParam0->f_9 /*67*/].f_61 = func_39(unk_0x1ACCFBA3D8DAB2EE(uParam0->f_7, 0), unk_0x759299C5BB31D2A9(uParam0->f_7, 0));
	}
	if (func_68() != 2)
	{
		if (uParam1->f_63[uParam0->f_9 /*67*/].f_60 > Global_262145.f_4694)
		{
			uParam1->f_63[uParam0->f_9 /*67*/].f_60 = Global_262145.f_4694;
		}
		if (uParam1->f_63[uParam0->f_9 /*67*/].f_56 > Global_262145.f_4694)
		{
			uParam1->f_63[uParam0->f_9 /*67*/].f_56 = Global_262145.f_4694;
		}
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_58 = unk_0x78F06F6B1FB5A80C(sVar2, "rank");
	func_38(uParam1->f_63[uParam0->f_9 /*67*/].f_54, &(uParam1->f_63[uParam0->f_9 /*67*/].f_60), &(uParam1->f_63[uParam0->f_9 /*67*/].f_56));
	if (uParam1->f_6 < uParam1->f_63[uParam0->f_9 /*67*/].f_56)
	{
		uParam1->f_6 = uParam1->f_63[uParam0->f_9 /*67*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_63[uParam0->f_9 /*67*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_63[uParam0->f_9 /*67*/].f_60;
	}
	uParam1->f_63[uParam0->f_9 /*67*/].f_65 = 1;
	unk_0x933D6A9EEC1BACD0(&(uParam1->f_63[uParam0->f_9 /*67*/].f_64), 13);
	StringCopy(&(uParam1->f_63[uParam0->f_9 /*67*/]), unk_0x55AA95F481D694D2(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
	if (!func_64())
	{
		StringCopy(&(uParam1->f_1136[uParam0->f_9 /*6*/]), unk_0x55AA95F481D694D2(uParam0->f_9), 24);
		if (unk_0x70EA8DA57840F9BE(uParam0->f_9))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_63[uParam0->f_9 /*67*/].f_64), 14);
			if (unk_0x906B778CA1DC72B6() != 0)
			{
				unk_0x9AB9C1CFC8862DFB();
			}
		}
	}
}

int func_86(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x487EB90B98E9FB19(*uParam0);
			}
			unk_0x0A46AF8A78DC5E0A();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x4862437A486F91B0(sParam1, iParam3, iParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0x1670F8D05056F257(unk_0xBAF6BABF9E7CCC13(0, iParam3)))
			{
				case 1:
					return 0;
				
				case 0:
					uParam0->f_3 = 1;
					return 1;
				
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							unk_0x487EB90B98E9FB19(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_87()
{
	char* sVar0;
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
	char cVar16[16];
	var* uVar20[4];
	var* uVar25[4];
	var* uVar30[4];
	var* uVar35[4];
	var* uVar40[4];
	var* uVar45[4];
	var* uVar50[4];
	var* uVar55[4];
	var* uVar60[4];
	var* uVar65[4];
	var* uVar70[4];
	var* uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82[8];
	int iVar91;
	int iVar92[8];
	struct<11> Var101;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	struct<3> Var194;
	
	sVar0 = unk_0x906B778CA1DC72B6();
	iVar1 = unk_0xB6B9DDC412FCEEE2(sVar0, "mission");
	iVar2 = unk_0xB6B9DDC412FCEEE2(iVar1, "endcon");
	iVar3 = unk_0xB6B9DDC412FCEEE2(iVar1, "ene");
	iVar4 = unk_0x78F06F6B1FB5A80C(iVar3, "no");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar3, "loc");
	iVar6 = unk_0xB6B9DDC412FCEEE2(iVar1, "goto");
	iVar7 = unk_0x78F06F6B1FB5A80C(iVar6, "no");
	iVar8 = unk_0xB6B9DDC412FCEEE2(iVar1, "veh");
	iVar9 = unk_0x78F06F6B1FB5A80C(iVar8, "no");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar8, "loc");
	iVar11 = unk_0xB6B9DDC412FCEEE2(iVar1, "obj");
	iVar12 = unk_0x78F06F6B1FB5A80C(iVar11, "no");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1601761.f_18 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1600516.f_1[iVar14] = unk_0x3E5AE19425CD74BE(unk_0x7A983AA9DA2659ED(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x7A983AA9DA2659ED(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x7A983AA9DA2659ED(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x7A983AA9DA2659ED(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1600516.f_1[iVar14] - 1))
			{
				Global_1600516.f_6[iVar14 /*18*/][iVar15] = unk_0x3E5AE19425CD74BE(uVar25[iVar14], iVar15);
				Global_1600516.f_79[iVar14 /*18*/][iVar15] = unk_0x3E5AE19425CD74BE(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1600516.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1600516.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
				}
				iVar15++;
			}
		}
		iVar14++;
	}
	Var101 = 8;
	Var101.f_1 = 10;
	Var101.f_1.f_11 = 10;
	Var101.f_1.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	iVar80 = 0;
	while (iVar80 <= (Global_1601761.f_18 - 1))
	{
		iVar91 = 0;
		iVar81 = 0;
		iVar190 = 0;
		iVar192 = 0;
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar92[iVar14] = -1;
			iVar82[iVar14] = 0;
			iVar191 = 0;
			while (iVar191 < 10)
			{
				Var101[iVar14 /*11*/][iVar191] = 0;
				iVar191++;
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < Global_1600516.f_1[iVar80])
		{
			if ((!unk_0xA921AA820C25702F(Global_1600516.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0xA921AA820C25702F(Global_1600516.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x7A983AA9DA2659ED(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x7A983AA9DA2659ED(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x3E5AE19425CD74BE(uVar60[iVar80], iVar14);
			iVar193 = unk_0x3E5AE19425CD74BE(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA921AA820C25702F(Global_1600516.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA921AA820C25702F(Global_1600516.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_89(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1683467.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x8D2064E5B64A628A(iVar10, iVar14) };
					Global_1683467.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1683467.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_88(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x7A983AA9DA2659ED(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x7A983AA9DA2659ED(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x3E5AE19425CD74BE(uVar70[iVar80], iVar14);
			iVar193 = unk_0x3E5AE19425CD74BE(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA921AA820C25702F(Global_1600516.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA921AA820C25702F(Global_1600516.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_89(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1683467.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x8D2064E5B64A628A(iVar13, iVar14) };
					Global_1683467.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1683467.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_88(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x7A983AA9DA2659ED(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x7A983AA9DA2659ED(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x7A983AA9DA2659ED(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x3E5AE19425CD74BE(uVar50[iVar80], iVar14);
			iVar15 = unk_0x3E5AE19425CD74BE(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA921AA820C25702F(Global_1600516.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA921AA820C25702F(Global_1600516.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_89(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1683467.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x8D2064E5B64A628A(uVar55[iVar80], iVar14) };
					Global_1683467.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1683467.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_88(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x7A983AA9DA2659ED(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x7A983AA9DA2659ED(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x3E5AE19425CD74BE(uVar40[iVar80], iVar14);
			iVar15 = unk_0x3E5AE19425CD74BE(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA921AA820C25702F(Global_1600516.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA921AA820C25702F(Global_1600516.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_89(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1683467.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
						{
							iVar190 = iVar191;
							iVar192 = 1;
						}
						iVar191++;
					}
					if (iVar192 == 0)
					{
						iVar82[iVar91]++;
					}
					Var194 = { unk_0x8D2064E5B64A628A(iVar5, iVar14) };
					Global_1683467.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1683467.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1683467.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1683467.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_88(iVar15, 2) };
				}
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar191 = 0;
			while (iVar191 < 10)
			{
				if (Global_1683467.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1683467.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1683467.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1683467.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1683467.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0x906B778CA1DC72B6() != 0)
	{
		unk_0x9AB9C1CFC8862DFB();
	}
}

Vector3 func_88(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 2:
			Var0.f_0 = 255;
			Var0.f_1 = 70;
			Var0.f_2 = 70;
			break;
		
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			else if (iParam1 == 4)
			{
				Var0.f_0 = 200;
				Var0.f_1 = 200;
				Var0.f_2 = 50;
			}
			break;
		
		case 5:
			Var0.f_0 = 200;
			Var0.f_1 = 200;
			Var0.f_2 = 50;
			break;
		
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 13:
			Var0.f_0 = 70;
			Var0.f_1 = 255;
			Var0.f_2 = 70;
			break;
		
		default:
			Var0.f_0 = 255;
			Var0.f_1 = 255;
			Var0.f_2 = 255;
			break;
	}
	return Var0;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_90(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<6> Var4;
	struct<8> Var10;
	struct<16> Var18;
	
	if (*uParam0 != 0)
	{
		unk_0x487EB90B98E9FB19(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var10}, 16);
		uParam0->f_36 = { Var18 };
	}
}

bool func_91()
{
	return Global_2427935.f_591;
}

int func_92()
{
	if (((func_96() || func_95()) || func_94()) || func_93())
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return unk_0xA921AA820C25702F(Global_2427935, 1);
}

bool func_94()
{
	return unk_0xA921AA820C25702F(Global_2427935, 2);
}

bool func_95()
{
	return unk_0xA921AA820C25702F(Global_2427935, 20);
}

var func_96()
{
	return Global_2427935.f_570;
}

int func_97(int iParam0)
{
	if ((((func_102(iParam0) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0)) || func_98(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98(int iParam0)
{
	return iParam0 == Global_262145.f_6847;
}

bool func_99(int iParam0)
{
	return iParam0 == Global_262145.f_6841;
}

bool func_100(int iParam0)
{
	return iParam0 == Global_262145.f_6835;
}

bool func_101(int iParam0)
{
	return iParam0 == Global_262145.f_6828;
}

bool func_102(int iParam0)
{
	return iParam0 == Global_262145.f_6823;
}

int func_103(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	if (func_61())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_64())
	{
		return 1;
	}
	if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam3 == 0)
	{
		return 1;
	}
	switch (uParam0->f_19)
	{
		case 0:
			func_57();
			func_104();
			Global_1672819.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1672844.f_5 = 0;
				Global_1672844.f_4 = 0;
				Global_1672844.f_1 = 0;
				Global_1672844.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1672844.f_5 = 0;
				uParam0->f_19 = 1;
				return 0;
			}
			if (uParam0->f_18 == 0 || uParam0->f_18 == 1)
			{
				uParam0->f_19 = 1;
			}
			else if (uParam0->f_18 == 2)
			{
				uParam0->f_19 = 2;
			}
			break;
		
		case 1:
			if (unk_0x9CB0BFA7A9342C3D(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					sVar0 = unk_0x906B778CA1DC72B6();
					Global_1672850 = unk_0x78F06F6B1FB5A80C(sVar0, "pt");
					Global_1672850.f_1 = unk_0x78F06F6B1FB5A80C(sVar0, "pu");
					Global_1672850.f_2 = unk_0x78F06F6B1FB5A80C(sVar0, "ft");
					Global_1672850.f_3 = unk_0x78F06F6B1FB5A80C(sVar0, "fu");
					Global_1672850.f_4 = unk_0x78F06F6B1FB5A80C(sVar0, "qt");
					Global_1672850.f_5 = unk_0x78F06F6B1FB5A80C(sVar0, "qu");
				}
				else
				{
					sVar0 = unk_0x906B778CA1DC72B6();
					Global_1672819.f_10 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "dt"));
					Global_1672819.f_11 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "du"));
					Global_1672819.f_9 = (Global_1672819.f_10 / Global_1672819.f_11);
					Global_1672819.f_13 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "pt"));
					Global_1672819.f_14 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "pu"));
					Global_971494 = unk_0xF2DB717A73826179(Global_1672819.f_14);
					Global_1672819.f_12 = (Global_1672819.f_13 / Global_1672819.f_14);
					Global_1672819.f_15 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "qt"));
					Global_1672819.f_17 = unk_0xBBDA792448DB5A89(unk_0x78F06F6B1FB5A80C(sVar0, "qu"));
					Global_1672819.f_16 = (Global_1672819.f_15 / Global_1672819.f_17);
				}
				if (unk_0x906B778CA1DC72B6() != 0)
				{
					unk_0x9AB9C1CFC8862DFB();
				}
				if (uParam0->f_18 == 0)
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
					return 1;
				}
			}
			else
			{
				uParam0->f_8++;
				if (uParam0->f_8 > 5)
				{
					uParam0->f_19 = 0;
					uParam0->f_8 = 0;
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0x70EA8DA57840F9BE(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x52818819057F2B40(iParam1))
					{
						sVar0 = unk_0x906B778CA1DC72B6();
						if (iParam3 == 0)
						{
							Global_1672819 = unk_0x78F06F6B1FB5A80C(sVar0, "quit");
							Global_1672819.f_2 = unk_0x78F06F6B1FB5A80C(sVar0, "ply");
							Global_1672819.f_8 = unk_0x78F06F6B1FB5A80C(sVar0, "fl");
							if (Global_1672819.f_2 > 0)
							{
								Global_1672819.f_5 = 1;
							}
							unk_0x9AB9C1CFC8862DFB();
						}
						else if (iParam3 == 4)
						{
							Global_1672844.f_5 = unk_0x1186940ED72FFEEC(sVar0, "won");
							Global_1672844.f_4 = unk_0x78F06F6B1FB5A80C(sVar0, "ply");
							Global_1672844.f_1 = unk_0x78F06F6B1FB5A80C(sVar0, "quit");
							Global_1672844.f_2 = unk_0x78F06F6B1FB5A80C(sVar0, "fl");
						}
						uParam0->f_19 = 0;
						return 1;
					}
					else
					{
						uParam0->f_8++;
						if (uParam0->f_8 > 100)
						{
							uParam0->f_19 = 0;
							uParam0->f_8 = 0;
							return 1;
						}
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
			else
			{
				uParam0->f_19 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_104()
{
	Global_1672819 = 0;
	Global_1672819.f_2 = 0;
	Global_1672819.f_8 = 0;
	Global_1672819.f_3 = 0;
	Global_1672819.f_6 = 0;
}

int func_105(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_107() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_64() && iParam1 == 0) && !bParam3)
			{
				if (Global_1601761.f_55477 == 0)
				{
					if (Global_1601761 == 0)
					{
						if (((((Global_1601761.f_1 != 6 && !unk_0xA921AA820C25702F(Global_1601761.f_3, 20)) && !unk_0xA921AA820C25702F(Global_1601761.f_3, 21)) && !unk_0xA921AA820C25702F(Global_1601761.f_3, 22)) && !unk_0xA921AA820C25702F(Global_1601761.f_3, 23)) && Global_1601761.f_1 != 5)
						{
							func_178(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_119();
							unk_0x8F5EA1C01D65A100(uParam0->f_5);
							func_57();
							return 1;
						}
					}
					else if (Global_1601761 != 2 && Global_1601761 != 1)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_119();
						unk_0x8F5EA1C01D65A100(uParam0->f_5);
						func_57();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1601761 == 0 && Global_1601761.f_1 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_64())
		{
			if (!unk_0xF53E48461B71EECB(unk_0x32DD916F3F7C9672(0)))
			{
				Global_1601761.f_55468 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_106();
	}
	func_55(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_106()
{
	unk_0x933D6A9EEC1BACD0(&(Global_2427935.f_24.f_3), 7);
}

bool func_107()
{
	return unk_0x812595A0644CE1DE(-1762644250);
}

void func_108(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2436747, "", 64);
	}
	else
	{
		Global_2436747 = { Param1 };
	}
	Global_2436746 = iParam0;
}

int func_109(var uParam0, char* sParam1)
{
	var uVar0;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	unk_0xA0FD21BED61E5C4C(sParam1, &uVar0, 13);
	if (unk_0x6F79B93B0A8E4133(&uVar0, 13) && unk_0x0F10B05DDF8D16E9(&uVar0))
	{
		*uParam0 = unk_0xCE5F689CF5A0A49D(&uVar0);
		if (unk_0xB8DFD30D6973E135(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_110()
{
	return Global_2427935.f_24.f_47;
}

int func_111()
{
	return Global_2434993;
}

bool func_112()
{
	return Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_165 != 0;
}

void func_113(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var* uVar51[16];
	
	*uParam0 = unk_0x906B778CA1DC72B6();
	iVar1 = unk_0xB6B9DDC412FCEEE2(*uParam0, "data");
	iVar2 = unk_0xB6B9DDC412FCEEE2(iVar1, "trg");
	*uParam1 = unk_0x7A983AA9DA2659ED(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x031C55ED33227371(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x1186940ED72FFEEC(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x1186940ED72FFEEC(iVar1, "open");
	Var3 = { func_114(unk_0xCD67AD041A394C9C(0)) };
	unk_0xEEE6EACBE8874FBA(&Var16, 35, &Var3);
	uParam2->f_40 = { Var16.f_1 };
	uParam2->f_56 = Var16.f_0;
	uParam2->f_4 = unk_0x78F06F6B1FB5A80C(iVar2, "scr");
	uParam2->f_5 = unk_0x78F06F6B1FB5A80C(iVar2, "time");
	uParam2->f_1 = unk_0x78F06F6B1FB5A80C(iVar1, "cash");
	uParam2->f_57 = unk_0x065DB281590CEA2D(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_57 - 1))
	{
		uVar51[iVar0] = unk_0x8B5FADCC4E3A145F(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1136[iVar0 /*6*/]), unk_0x3D2FD9E763B24472(uVar51[iVar0], "cid"), 24);
		uParam2->f_63[iVar0 /*67*/].f_62 = unk_0x78F06F6B1FB5A80C(uVar51[iVar0], "scr");
		uParam2->f_63[iVar0 /*67*/].f_63 = unk_0x78F06F6B1FB5A80C(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_114(char* sParam0)
{
	struct<13> Var0;
	
	unk_0xDCD51DD8F87AEC5C(sParam0, &Var0, 13);
	return Var0;
}

int func_115(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_114(sParam2) };
		Var13 = { func_116(unk_0x4F8644AF03D0E0D6()) };
		if (bParam1)
		{
			if (unk_0x57DBA049E110F217(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x1A24A179F9B31654(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x4D982ADB1978442D())
		{
			if (unk_0x57DBA049E110F217(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0xCCA4318E1AB03F1F(&Var0) && unk_0xB57A49545BA53CE7(&Var0))
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
			Var13 = { func_116(unk_0x4F8644AF03D0E0D6()) };
			if (!unk_0x57DBA049E110F217(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_116(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

void func_117(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_965455.f_6 = 0;
		Global_965455.f_7 = 32;
	}
	else
	{
		Global_964222.f_6 = 0;
		Global_964222.f_7 = 32;
	}
}

void func_118(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var* uVar1[16];
	
	*uParam0 = unk_0x906B778CA1DC72B6();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x7A983AA9DA2659ED(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_57 = unk_0x065DB281590CEA2D(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_57 - 1))
	{
		uVar1[iVar0] = unk_0x8B5FADCC4E3A145F(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1136[iVar0 /*6*/]), unk_0x3D2FD9E763B24472(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x1186940ED72FFEEC(*uParam0, "h2h");
	uParam2->f_9 = unk_0x1186940ED72FFEEC(*uParam0, "ch");
	if (func_64())
	{
		StringCopy(&(uParam2->f_12), unk_0x3D2FD9E763B24472(*uParam0, "name"), 32);
	}
}

void func_119()
{
	Global_2434309.f_8 = 0;
	Global_2434309.f_7 = 0;
}

void func_120(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	sVar0 = unk_0x906B778CA1DC72B6();
	sVar1 = unk_0xB6B9DDC412FCEEE2(sVar0, "mission");
	sVar2 = unk_0xB6B9DDC412FCEEE2(sVar1, "gen");
	Global_1601761.f_55441 = unk_0x78F06F6B1FB5A80C(sVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_155(sVar1, iParam0, bParam1);
		func_154(sVar1);
		func_153(&sVar1);
		func_152(&sVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_82())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_151(sVar1);
			func_150(sVar1);
			func_149(sVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_148(sVar1);
			func_147(sVar2);
			func_146(sVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_145(sVar1);
			func_144(sVar1);
			func_143(sVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_81())
	{
		func_141(sVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_139(sVar1);
		func_138(sVar1);
		func_137(sVar1);
		func_136(sVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_134(sVar1);
		func_133(sVar1);
		func_131(sVar1);
		func_127(sVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1601761 == 1)
	{
		func_150(sVar1);
		func_126(sVar1);
	}
	else
	{
		func_121(sVar1);
	}
	unk_0xE80492A9AC099A93(&(Global_1601761.f_3), 15);
	unk_0xE80492A9AC099A93(&(Global_1601761.f_3), 18);
	unk_0xE80492A9AC099A93(&(Global_1601761.f_3), 19);
	if (func_34(Global_1601761.f_54837))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1601761.f_3), 15);
	}
	else if (func_33(Global_1601761.f_54837))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1601761.f_3), 18);
	}
	else if (func_32(Global_1601761.f_54837))
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1601761.f_3), 19);
	}
}

void func_121(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var* uVar14[4];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var* uVar50[4];
	var* uVar55[4];
	var* uVar60[4];
	var* uVar65[4];
	var* uVar70[4];
	var* uVar75[4];
	var* uVar80[4];
	var* uVar85[4];
	var* uVar90[4];
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	var* uVar153[5];
	var* uVar159[5];
	var* uVar165[5];
	var* uVar171[5];
	var* uVar177[5];
	var* uVar183[5];
	var* uVar189[5];
	var* uVar195[5];
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;
	int iVar209;
	int iVar210;
	int iVar211;
	int iVar212;
	int iVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	int iVar217;
	int iVar218;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	var* uVar226[2];
	var* uVar229[2];
	
	iVar6 = unk_0xB6B9DDC412FCEEE2(sParam0, "ene");
	Global_1601761.f_35169 = unk_0x78F06F6B1FB5A80C(iVar6, "no");
	if (unk_0x031C55ED33227371(iVar6, "spcap") == 2 && unk_0x78F06F6B1FB5A80C(iVar6, "spcap") != 0)
	{
		Global_1601761.f_35170 = unk_0x78F06F6B1FB5A80C(iVar6, "spcap");
	}
	else
	{
		Global_1601761.f_35170 = 50;
	}
	Global_1601761.f_35172 = unk_0x78F06F6B1FB5A80C(iVar6, "time");
	Global_1601761.f_35173 = unk_0x78F06F6B1FB5A80C(iVar6, "pal");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar6, "loc");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar6, "head");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar6, "rng");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar6, "model");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar6, "gun");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar6, "skill");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar6, "rsp");
	if (Global_1601761 == 1)
	{
		uVar14[0] = unk_0x7A983AA9DA2659ED(iVar6, "team");
	}
	iVar19 = unk_0x7A983AA9DA2659ED(iVar6, "wep");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar6, "hlt");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar6, "lghlt");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar6, "veh");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar6, "foll");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar6, "iaim");
	iVar25 = unk_0x7A983AA9DA2659ED(iVar6, "iaimt");
	iVar26 = unk_0x7A983AA9DA2659ED(iVar6, "iaimr");
	iVar27 = unk_0x7A983AA9DA2659ED(iVar6, "sanim");
	iVar28 = unk_0x7A983AA9DA2659ED(iVar6, "sat");
	iVar29 = unk_0x7A983AA9DA2659ED(iVar6, "saru");
	iVar30 = unk_0x7A983AA9DA2659ED(iVar6, "sara");
	iVar31 = unk_0x7A983AA9DA2659ED(iVar6, "satt");
	iVar32 = unk_0x7A983AA9DA2659ED(iVar6, "whost");
	iVar33 = unk_0x7A983AA9DA2659ED(iVar6, "flee");
	iVar34 = unk_0x7A983AA9DA2659ED(iVar6, "frr");
	iVar35 = unk_0x7A983AA9DA2659ED(iVar6, "pfrmr");
	iVar36 = unk_0x7A983AA9DA2659ED(iVar6, "psnt");
	iVar37 = unk_0x7A983AA9DA2659ED(iVar6, "psnei");
	iVar38 = unk_0x7A983AA9DA2659ED(iVar6, "p2sp");
	iVar39 = unk_0x7A983AA9DA2659ED(iVar6, "p2sh");
	iVar40 = unk_0x7A983AA9DA2659ED(iVar6, "accu");
	iVar41 = unk_0x7A983AA9DA2659ED(iVar6, "lgacc");
	iVar42 = unk_0x7A983AA9DA2659ED(iVar6, "cmsty");
	iVar43 = unk_0x7A983AA9DA2659ED(iVar6, "pedbs");
	iVar44 = unk_0x7A983AA9DA2659ED(iVar6, "pbstwo");
	iVar45 = unk_0x7A983AA9DA2659ED(iVar6, "pbs3");
	iVar46 = unk_0x7A983AA9DA2659ED(iVar6, "pbs4");
	iVar47 = unk_0x7A983AA9DA2659ED(iVar6, "pbs5");
	iVar48 = unk_0x7A983AA9DA2659ED(iVar6, "pbs6");
	iVar49 = unk_0x7A983AA9DA2659ED(iVar6, "pbs7");
	if (func_82())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1601761.f_18 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar50[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar55[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar60[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar153[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar159[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar165[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar171[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar183[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar177[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar189[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar195[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			iVar3++;
		}
		iVar95 = unk_0x7A983AA9DA2659ED(iVar6, "objt");
		iVar96 = unk_0x7A983AA9DA2659ED(iVar6, "team");
		iVar97 = unk_0x7A983AA9DA2659ED(iVar6, "spawn");
		iVar98 = unk_0x7A983AA9DA2659ED(iVar6, "acts");
		iVar99 = unk_0x7A983AA9DA2659ED(iVar6, "objt2");
		iVar100 = unk_0x7A983AA9DA2659ED(iVar6, "team2");
		iVar101 = unk_0x7A983AA9DA2659ED(iVar6, "spawn2");
		iVar102 = unk_0x7A983AA9DA2659ED(iVar6, "acts2");
		iVar103 = unk_0x7A983AA9DA2659ED(iVar6, "objt3");
		iVar104 = unk_0x7A983AA9DA2659ED(iVar6, "team3");
		iVar105 = unk_0x7A983AA9DA2659ED(iVar6, "spawn3");
		iVar106 = unk_0x7A983AA9DA2659ED(iVar6, "acts3");
		iVar107 = unk_0x7A983AA9DA2659ED(iVar6, "objt4");
		iVar108 = unk_0x7A983AA9DA2659ED(iVar6, "team4");
		iVar109 = unk_0x7A983AA9DA2659ED(iVar6, "spawn4");
		iVar110 = unk_0x7A983AA9DA2659ED(iVar6, "acts4");
		iVar111 = unk_0x7A983AA9DA2659ED(iVar6, "act");
		iVar112 = unk_0x7A983AA9DA2659ED(iVar6, "pper");
		iVar113 = unk_0x7A983AA9DA2659ED(iVar6, "infr");
		iVar114 = unk_0x7A983AA9DA2659ED(iVar6, "cca");
		iVar115 = unk_0x7A983AA9DA2659ED(iVar6, "ccid");
		iVar116 = unk_0x7A983AA9DA2659ED(iVar6, "gfr");
		iVar117 = unk_0x7A983AA9DA2659ED(iVar6, "msr");
		iVar118 = unk_0x7A983AA9DA2659ED(iVar6, "bnr");
		iVar119 = unk_0x7A983AA9DA2659ED(iVar6, "phor");
		iVar120 = unk_0x7A983AA9DA2659ED(iVar6, "folr");
		iVar122 = unk_0x7A983AA9DA2659ED(iVar6, "pcvl");
		iVar123 = unk_0x7A983AA9DA2659ED(iVar6, "pcvr");
		iVar121 = unk_0x7A983AA9DA2659ED(iVar6, "pdfw");
		iVar127 = unk_0x7A983AA9DA2659ED(iVar6, "pvdp1");
		iVar128 = unk_0x7A983AA9DA2659ED(iVar6, "pvdp2");
		iVar124 = unk_0x7A983AA9DA2659ED(iVar6, "paaw");
		iVar125 = unk_0x7A983AA9DA2659ED(iVar6, "paav1");
		iVar126 = unk_0x7A983AA9DA2659ED(iVar6, "paav2");
		iVar129 = unk_0x7A983AA9DA2659ED(iVar6, "dt");
		iVar130 = unk_0x7A983AA9DA2659ED(iVar6, "do");
		iVar131 = unk_0x7A983AA9DA2659ED(iVar6, "dtim");
		iVar132 = unk_0x7A983AA9DA2659ED(iVar6, "dln");
		iVar133 = unk_0x7A983AA9DA2659ED(iVar6, "pvsp");
		iVar139 = unk_0x7A983AA9DA2659ED(iVar6, "drge");
		iVar140 = unk_0x7A983AA9DA2659ED(iVar6, "agrot");
		iVar141 = unk_0x7A983AA9DA2659ED(iVar6, "gtds");
		iVar142 = unk_0x7A983AA9DA2659ED(iVar6, "pstat");
		iVar143 = unk_0x7A983AA9DA2659ED(iVar6, "pstar");
		iVar144 = unk_0x7A983AA9DA2659ED(iVar6, "dmv");
		iVar145 = unk_0x7A983AA9DA2659ED(iVar6, "let");
		iVar146 = unk_0x7A983AA9DA2659ED(iVar6, "escr");
		iVar147 = unk_0x7A983AA9DA2659ED(iVar6, "actr");
		iVar148 = unk_0x7A983AA9DA2659ED(iVar6, "actv");
		iVar149 = unk_0x7A983AA9DA2659ED(iVar6, "actv2");
		iVar150 = unk_0x7A983AA9DA2659ED(iVar6, "actv3");
		iVar151 = unk_0x7A983AA9DA2659ED(iVar6, "actv4");
		iVar152 = unk_0x7A983AA9DA2659ED(iVar6, "actv5");
		iVar201 = unk_0x7A983AA9DA2659ED(iVar6, "pedct");
		iVar203 = unk_0x7A983AA9DA2659ED(iVar6, "pdcra");
		iVar202 = unk_0x7A983AA9DA2659ED(iVar6, "pedcr");
		iVar204 = unk_0x7A983AA9DA2659ED(iVar6, "pedbc");
		iVar205 = unk_0x7A983AA9DA2659ED(iVar6, "avrad");
		iVar206 = unk_0x7A983AA9DA2659ED(iVar6, "pedst");
		iVar207 = unk_0x7A983AA9DA2659ED(iVar6, "gotor");
		iVar208 = unk_0x7A983AA9DA2659ED(iVar6, "invbs");
		iVar209 = unk_0x7A983AA9DA2659ED(iVar6, "gort");
		iVar210 = unk_0x7A983AA9DA2659ED(iVar6, "gorr");
		iVar211 = unk_0x7A983AA9DA2659ED(iVar6, "gorw");
		iVar212 = unk_0x7A983AA9DA2659ED(iVar6, "cstnm");
		iVar213 = unk_0x7A983AA9DA2659ED(iVar6, "psctt");
		iVar214 = unk_0x7A983AA9DA2659ED(iVar6, "pscto");
		iVar215 = unk_0x7A983AA9DA2659ED(iVar6, "pscta");
		iVar216 = unk_0x7A983AA9DA2659ED(iVar6, "psctac");
		iVar217 = unk_0x7A983AA9DA2659ED(iVar6, "psctv");
		iVar218 = unk_0x7A983AA9DA2659ED(iVar6, "pscth");
		iVar219 = unk_0x7A983AA9DA2659ED(iVar6, "psctot");
		iVar220 = unk_0x7A983AA9DA2659ED(iVar6, "psctoi");
		iVar221 = unk_0x7A983AA9DA2659ED(iVar6, "pscatd");
		iVar222 = unk_0x7A983AA9DA2659ED(iVar6, "cutsc");
		iVar223 = unk_0x7A983AA9DA2659ED(iVar6, "cutsh");
		iVar224 = unk_0x7A983AA9DA2659ED(iVar6, "nmpass");
		iVar225 = unk_0x7A983AA9DA2659ED(iVar6, "nmfail");
		iVar134 = unk_0x7A983AA9DA2659ED(iVar6, "pmcp");
		iVar135 = unk_0x7A983AA9DA2659ED(iVar6, "pmcf");
		iVar136 = unk_0x7A983AA9DA2659ED(iVar6, "pambv");
		iVar137 = unk_0x7A983AA9DA2659ED(iVar6, "pwrpt");
		iVar138 = unk_0x7A983AA9DA2659ED(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar226[iVar1] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar229[iVar1] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_35169 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1601761.f_35174[iVar0 /*268*/] = { unk_0x8D2064E5B64A628A(iVar7, iVar0) };
			Global_1601761.f_35174[iVar0 /*268*/].f_3 = unk_0xC0C527B525D7CFB5(iVar8, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_4 = unk_0xC0C527B525D7CFB5(iVar9, iVar0);
			iVar2 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_13 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_13 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_13 = iVar2;
			}
			if (!func_81() && !func_125())
			{
				if (!unk_0xC0296A2EDF545E92(Global_1601761.f_35174[iVar0 /*268*/].f_13))
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_13 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_14 = iVar2;
			iVar2 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_15 = iVar2;
			if (Global_1601761 == 1)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_16[0] = unk_0x3E5AE19425CD74BE(uVar14[0], iVar0);
			}
			Global_1601761.f_35174[iVar0 /*268*/].f_49 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_35 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_36 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
			if (unk_0x3A0014ADB172A3C5(iVar21, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_37 = unk_0x3E5AE19425CD74BE(iVar21, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_37 = -1;
			}
			Global_1601761.f_35174[iVar0 /*268*/].f_55 = unk_0x3E5AE19425CD74BE(iVar22, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_31 = unk_0x3E5AE19425CD74BE(iVar13, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_38 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_39 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_40 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_41 = unk_0x3E5AE19425CD74BE(iVar27, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_42 = unk_0x3E5AE19425CD74BE(iVar28, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_43 = unk_0x3E5AE19425CD74BE(iVar29, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_44 = unk_0xC0C527B525D7CFB5(iVar30, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_45 = unk_0x3E5AE19425CD74BE(iVar31, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_48 = unk_0x3E5AE19425CD74BE(iVar32, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_46 = unk_0x3E5AE19425CD74BE(iVar33, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_5 = unk_0xC0C527B525D7CFB5(iVar34, iVar0);
			if ((unk_0x3A0014ADB172A3C5(iVar35, iVar0) == 3 && unk_0x3A0014ADB172A3C5(iVar36, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar37, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_6 = unk_0xC0C527B525D7CFB5(iVar35, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_7 = unk_0x3E5AE19425CD74BE(iVar36, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_8 = unk_0x3E5AE19425CD74BE(iVar37, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_6 = 0f;
				Global_1601761.f_35174[iVar0 /*268*/].f_7 = 0;
				Global_1601761.f_35174[iVar0 /*268*/].f_8 = -1;
			}
			if (unk_0x3A0014ADB172A3C5(iVar38, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar39, iVar0) == 3)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_9 = { unk_0x8D2064E5B64A628A(iVar38, iVar0) };
				Global_1601761.f_35174[iVar0 /*268*/].f_12 = unk_0xC0C527B525D7CFB5(iVar39, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_9 = { 0f, 0f, 0f };
				Global_1601761.f_35174[iVar0 /*268*/].f_12 = 0f;
			}
			Global_1601761.f_35174[iVar0 /*268*/].f_33 = unk_0x3E5AE19425CD74BE(iVar40, iVar0);
			if (unk_0x3A0014ADB172A3C5(iVar41, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_34 = unk_0x3E5AE19425CD74BE(iVar41, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_34 = -1;
			}
			Global_1601761.f_35174[iVar0 /*268*/].f_47 = unk_0x3E5AE19425CD74BE(iVar42, iVar0);
			Global_1601761.f_35174[iVar0 /*268*/].f_178 = unk_0x3E5AE19425CD74BE(iVar43, iVar0);
			if (unk_0x3A0014ADB172A3C5(iVar44, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_179 = unk_0x3E5AE19425CD74BE(iVar44, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_179 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar45, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_180 = unk_0x3E5AE19425CD74BE(iVar45, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_180 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar46, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_181 = unk_0x3E5AE19425CD74BE(iVar46, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_181 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar47, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_182 = unk_0x3E5AE19425CD74BE(iVar47, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_182 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar48, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_183 = unk_0x3E5AE19425CD74BE(iVar48, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_183 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar49, iVar0) == 2)
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_184 = unk_0x3E5AE19425CD74BE(iVar49, iVar0);
			}
			else
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_184 = 0;
			}
			if (func_82())
			{
				Global_1601761.f_35174[iVar0 /*268*/].f_56 = unk_0x3E5AE19425CD74BE(iVar95, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_57 = unk_0x3E5AE19425CD74BE(iVar96, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_58 = unk_0x3E5AE19425CD74BE(iVar97, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_60 = unk_0x3E5AE19425CD74BE(iVar98, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar99, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_151 = unk_0x3E5AE19425CD74BE(iVar99, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_148 = unk_0x3E5AE19425CD74BE(iVar100, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_154 = unk_0x3E5AE19425CD74BE(iVar101, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_157 = unk_0x3E5AE19425CD74BE(iVar102, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_152 = unk_0x3E5AE19425CD74BE(iVar103, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_149 = unk_0x3E5AE19425CD74BE(iVar104, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_155 = unk_0x3E5AE19425CD74BE(iVar105, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_158 = unk_0x3E5AE19425CD74BE(iVar106, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_153 = unk_0x3E5AE19425CD74BE(iVar107, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_150 = unk_0x3E5AE19425CD74BE(iVar108, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_156 = unk_0x3E5AE19425CD74BE(iVar109, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_159 = unk_0x3E5AE19425CD74BE(iVar110, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_151 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_148 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_154 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_157 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_152 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_149 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_155 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_158 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_153 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_150 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_156 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_159 = 0;
				}
				Global_1601761.f_35174[iVar0 /*268*/].f_59 = unk_0x3E5AE19425CD74BE(iVar111, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar112, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_190 = unk_0x3E5AE19425CD74BE(iVar112, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_190 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar113, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_191 = unk_0x3E5AE19425CD74BE(iVar113, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_191 = 250;
				}
				if (unk_0x3A0014ADB172A3C5(iVar114, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_194 = unk_0x3E5AE19425CD74BE(iVar114, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_194 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar115, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_195 = unk_0x3E5AE19425CD74BE(iVar115, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_195 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar116, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_196 = unk_0x3E5AE19425CD74BE(iVar116, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_196 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar117, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_192 = unk_0x3E5AE19425CD74BE(iVar117, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_192 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar118, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_193 = unk_0x3E5AE19425CD74BE(iVar118, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_193 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar119, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_248 = unk_0x3E5AE19425CD74BE(iVar119, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_248 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar120, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_249 = unk_0x3E5AE19425CD74BE(iVar120, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_249 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar122, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_197 = { unk_0x8D2064E5B64A628A(iVar122, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_197 = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar123, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_200 = { unk_0x8D2064E5B64A628A(iVar123, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_200 = { 0f, 0f, 0f };
				}
				if ((unk_0x3A0014ADB172A3C5(iVar127, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar128, iVar0) == 5) && unk_0x3A0014ADB172A3C5(iVar121, iVar0) == 3)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_208 = { unk_0x8D2064E5B64A628A(iVar127, iVar0) };
					Global_1601761.f_35174[iVar0 /*268*/].f_211 = { unk_0x8D2064E5B64A628A(iVar128, iVar0) };
					Global_1601761.f_35174[iVar0 /*268*/].f_214 = unk_0xC0C527B525D7CFB5(iVar121, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_208 = { 0f, 0f, 0f };
					Global_1601761.f_35174[iVar0 /*268*/].f_211 = { 0f, 0f, 0f };
					Global_1601761.f_35174[iVar0 /*268*/].f_214 = 1f;
				}
				if ((unk_0x3A0014ADB172A3C5(iVar124, iVar0) == 3 && unk_0x3A0014ADB172A3C5(iVar125, iVar0) == 5) && unk_0x3A0014ADB172A3C5(iVar126, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_173 = unk_0xC0C527B525D7CFB5(iVar124, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_167 = { unk_0x8D2064E5B64A628A(iVar125, iVar0) };
					Global_1601761.f_35174[iVar0 /*268*/].f_170 = { unk_0x8D2064E5B64A628A(iVar126, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_173 = 0f;
					Global_1601761.f_35174[iVar0 /*268*/].f_167 = { 0f, 0f, 0f };
					Global_1601761.f_35174[iVar0 /*268*/].f_170 = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar133, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_220 = unk_0x3E5AE19425CD74BE(iVar133, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_220 = 0;
				}
				Global_1601761.f_35174[iVar0 /*268*/].f_204 = unk_0x3E5AE19425CD74BE(iVar129, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_203 = unk_0x3E5AE19425CD74BE(iVar130, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_205 = unk_0x3E5AE19425CD74BE(iVar131, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_206 = unk_0x3E5AE19425CD74BE(iVar132, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_207 = unk_0x3E5AE19425CD74BE(iVar139, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_215 = unk_0x3E5AE19425CD74BE(iVar140, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_174 = unk_0x3E5AE19425CD74BE(iVar141, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_32 = unk_0x3E5AE19425CD74BE(iVar144, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_165 = unk_0x3E5AE19425CD74BE(iVar145, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_175 = unk_0x3E5AE19425CD74BE(iVar146, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_166 = unk_0x3E5AE19425CD74BE(iVar147, iVar0);
				Global_1601761.f_35174[iVar0 /*268*/].f_61 = { unk_0x8D2064E5B64A628A(iVar148, iVar0) };
				Global_1601761.f_35174[iVar0 /*268*/].f_61 = { unk_0x8D2064E5B64A628A(iVar148, iVar0) };
				if (unk_0x3A0014ADB172A3C5(iVar149, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[0 /*3*/] = { unk_0x8D2064E5B64A628A(iVar149, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar150, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[1 /*3*/] = { unk_0x8D2064E5B64A628A(iVar150, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar151, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[2 /*3*/] = { unk_0x8D2064E5B64A628A(iVar151, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar152, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[3 /*3*/] = { unk_0x8D2064E5B64A628A(iVar152, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_64[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar142, iVar0) == 2 && unk_0x3A0014ADB172A3C5(iVar143, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_176 = unk_0x3E5AE19425CD74BE(iVar142, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_177 = unk_0x3E5AE19425CD74BE(iVar143, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_176 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_177 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x3A0014ADB172A3C5(uVar153[iVar3], iVar0) == 2)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_78[iVar3] = unk_0x3E5AE19425CD74BE(uVar153[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_78[iVar3] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(uVar159[iVar3], iVar0) == 2)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_84[iVar3] = unk_0x3E5AE19425CD74BE(uVar159[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_84[iVar3] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(uVar165[iVar3], iVar0) == 5 && unk_0x3A0014ADB172A3C5(uVar171[iVar3], iVar0) == 2)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_90[iVar3 /*3*/] = { unk_0x8D2064E5B64A628A(uVar165[iVar3], iVar0) };
						Global_1601761.f_35174[iVar0 /*268*/].f_106[iVar3] = unk_0x3E5AE19425CD74BE(uVar171[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_90[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1601761.f_35174[iVar0 /*268*/].f_106[iVar3] = 3;
					}
					if (unk_0x3A0014ADB172A3C5(uVar177[iVar3], iVar0) == 2)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_124[iVar3] = unk_0x3E5AE19425CD74BE(uVar177[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_124[iVar3] = -1;
					}
					if (unk_0x3A0014ADB172A3C5(uVar183[iVar3], iVar0) == 3)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_112[iVar3] = unk_0xC0C527B525D7CFB5(uVar183[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_112[iVar3] = 0f;
					}
					if (unk_0x3A0014ADB172A3C5(uVar189[iVar3], iVar0) == 3)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_118[iVar3] = unk_0xC0C527B525D7CFB5(uVar189[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_118[iVar3] = 0f;
					}
					if (unk_0x3A0014ADB172A3C5(uVar195[iVar3], iVar0) == 3)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_130[iVar3] = unk_0xC0C527B525D7CFB5(uVar195[iVar3], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_130[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x3A0014ADB172A3C5(iVar202, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_216 = unk_0x3E5AE19425CD74BE(iVar202, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_216 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar201, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_217 = unk_0x3E5AE19425CD74BE(iVar201, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_217 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar203, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_218 = unk_0x3E5AE19425CD74BE(iVar203, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_218 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar206, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_219 = unk_0x3E5AE19425CD74BE(iVar206, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_219 = -3;
				}
				if (unk_0x3A0014ADB172A3C5(iVar204, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_235 = unk_0x3E5AE19425CD74BE(iVar204, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_235 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar205, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_77 = unk_0x3E5AE19425CD74BE(iVar205, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_77 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar207, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_50 = unk_0x3E5AE19425CD74BE(iVar207, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_50 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar208, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_51 = unk_0x3E5AE19425CD74BE(iVar208, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_51 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar212, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_147 = unk_0x3E5AE19425CD74BE(iVar212, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_147 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar134, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_233 = unk_0x3E5AE19425CD74BE(iVar134, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_233 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar135, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_234 = unk_0x3E5AE19425CD74BE(iVar135, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_234 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar136, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_250 = unk_0x3E5AE19425CD74BE(iVar136, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_250 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar137, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_256 = unk_0x3E5AE19425CD74BE(iVar137, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_256 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar138, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_257 = unk_0x3E5AE19425CD74BE(iVar138, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_257 = -1;
				}
				if ((unk_0x3A0014ADB172A3C5(iVar213, iVar0) == 2 && unk_0x3A0014ADB172A3C5(iVar214, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar215, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_136 = unk_0x3E5AE19425CD74BE(iVar213, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_137 = unk_0x3E5AE19425CD74BE(iVar214, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_139 = unk_0x3E5AE19425CD74BE(iVar215, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_136 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_137 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_139 = 0;
				}
				if ((unk_0x3A0014ADB172A3C5(iVar219, iVar0) == 2 && unk_0x3A0014ADB172A3C5(iVar220, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar221, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_144 = unk_0x3E5AE19425CD74BE(iVar219, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_145 = unk_0x3E5AE19425CD74BE(iVar220, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_146 = unk_0x3E5AE19425CD74BE(iVar221, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_144 = 0;
					Global_1601761.f_35174[iVar0 /*268*/].f_145 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_146 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar216, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_138 = unk_0x3E5AE19425CD74BE(iVar216, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_138 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar217, iVar0) == 5)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_140 = { unk_0x8D2064E5B64A628A(iVar217, iVar0) };
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_140 = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(iVar218, iVar0) == 3)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_143 = unk_0xC0C527B525D7CFB5(iVar218, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_143 = 0f;
				}
				if ((unk_0x3A0014ADB172A3C5(iVar209, iVar0) == 2 && unk_0x3A0014ADB172A3C5(iVar210, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar211, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_52 = unk_0x3E5AE19425CD74BE(iVar209, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_53 = unk_0x3E5AE19425CD74BE(iVar210, iVar0);
					Global_1601761.f_35174[iVar0 /*268*/].f_54 = unk_0x3E5AE19425CD74BE(iVar211, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_52 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_53 = -1;
					Global_1601761.f_35174[iVar0 /*268*/].f_54 = joaat("weapon_pistol");
				}
				if (Global_1601761.f_1 != 6 && unk_0x3A0014ADB172A3C5(iVar222, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_246 = unk_0x3E5AE19425CD74BE(iVar222, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_246 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar224, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_231 = unk_0x3E5AE19425CD74BE(iVar224, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_231 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar225, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_232 = unk_0x3E5AE19425CD74BE(iVar225, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_232 = -1;
				}
				if (Global_1601761.f_1 != 6 && unk_0x3A0014ADB172A3C5(iVar223, iVar0) == 2)
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_247 = unk_0x3E5AE19425CD74BE(iVar223, iVar0);
				}
				else
				{
					Global_1601761.f_35174[iVar0 /*268*/].f_247 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x3A0014ADB172A3C5(uVar226[iVar1], iVar0) == 5)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_258[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar226[iVar1], iVar0) };
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_258[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x3A0014ADB172A3C5(uVar229[iVar1], iVar0) == 3)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_265[iVar1] = unk_0xC0C527B525D7CFB5(uVar229[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_265[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1601761.f_18 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1601761.f_35174[iVar0 /*268*/].f_16[iVar3] = unk_0x3E5AE19425CD74BE(uVar14[iVar3], iVar0);
						Global_1601761.f_35174[iVar0 /*268*/].f_21[iVar3] = unk_0x3E5AE19425CD74BE(uVar50[iVar3], iVar0);
						Global_1601761.f_35174[iVar0 /*268*/].f_26[iVar3] = unk_0x3E5AE19425CD74BE(uVar55[iVar3], iVar0);
						if (Global_1601761.f_35174[iVar0 /*268*/].f_26[iVar3] == -1)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_26[iVar3] = 99999;
						}
						if (unk_0x3A0014ADB172A3C5(uVar60[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_185[iVar3] = unk_0x3E5AE19425CD74BE(uVar60[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_185[iVar3] = -1;
						}
						if (unk_0x3A0014ADB172A3C5(uVar65[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_160[iVar3] = unk_0x3E5AE19425CD74BE(uVar65[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_160[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar70[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_221[iVar3] = unk_0x3E5AE19425CD74BE(uVar70[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_221[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar75[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_226[iVar3] = unk_0x3E5AE19425CD74BE(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_226[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar80[iVar3], iVar0) == 2 && unk_0x3A0014ADB172A3C5(uVar85[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_236[iVar3] = unk_0x3E5AE19425CD74BE(uVar80[iVar3], iVar0);
							Global_1601761.f_35174[iVar0 /*268*/].f_241[iVar3] = unk_0x3E5AE19425CD74BE(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_236[iVar3] = -1;
							Global_1601761.f_35174[iVar0 /*268*/].f_241[iVar3] = -1;
						}
						if (unk_0x3A0014ADB172A3C5(uVar90[iVar3], iVar0) == 2)
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_251[iVar3] = unk_0x3E5AE19425CD74BE(uVar90[iVar3], iVar0);
						}
						else if (unk_0xA921AA820C25702F(Global_1601761.f_21238[iVar3 /*3*/][func_124(iVar0)], func_123(iVar0)))
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_251[iVar3] = -1;
						}
						else
						{
							Global_1601761.f_35174[iVar0 /*268*/].f_251[iVar3] = -2;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_122(&iVar6);
}

void func_122(int iParam0)
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
	
	Global_1601761.f_51406[0] = unk_0x78F06F6B1FB5A80C(*iParam0, "no0");
	iVar1 = unk_0x7A983AA9DA2659ED(*iParam0, "loc0");
	iVar2 = unk_0x7A983AA9DA2659ED(*iParam0, "head0");
	iVar3 = unk_0x7A983AA9DA2659ED(*iParam0, "bit0");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_51406[0] - 1))
	{
		Global_1601761.f_51893[0 /*233*/][iVar0 /*8*/] = { unk_0x8D2064E5B64A628A(iVar1, iVar0) };
		Global_1601761.f_51893[0 /*233*/][iVar0 /*8*/].f_3 = unk_0xC0C527B525D7CFB5(iVar2, iVar0);
		Global_1601761.f_51893[0 /*233*/][iVar0 /*8*/].f_5 = unk_0x3E5AE19425CD74BE(iVar3, iVar0);
		iVar0++;
	}
	Global_1601761.f_51406[1] = unk_0x78F06F6B1FB5A80C(*iParam0, "no1");
	iVar4 = unk_0x7A983AA9DA2659ED(*iParam0, "loc1");
	iVar5 = unk_0x7A983AA9DA2659ED(*iParam0, "head1");
	iVar6 = unk_0x7A983AA9DA2659ED(*iParam0, "bit1");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_51406[1] - 1))
	{
		Global_1601761.f_51893[1 /*233*/][iVar0 /*8*/] = { unk_0x8D2064E5B64A628A(iVar4, iVar0) };
		Global_1601761.f_51893[1 /*233*/][iVar0 /*8*/].f_3 = unk_0xC0C527B525D7CFB5(iVar5, iVar0);
		Global_1601761.f_51893[1 /*233*/][iVar0 /*8*/].f_5 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		iVar0++;
	}
	Global_1601761.f_51406[2] = unk_0x78F06F6B1FB5A80C(*iParam0, "no2");
	iVar7 = unk_0x7A983AA9DA2659ED(*iParam0, "loc2");
	iVar8 = unk_0x7A983AA9DA2659ED(*iParam0, "head2");
	iVar9 = unk_0x7A983AA9DA2659ED(*iParam0, "bit2");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_51406[2] - 1))
	{
		Global_1601761.f_51893[2 /*233*/][iVar0 /*8*/] = { unk_0x8D2064E5B64A628A(iVar7, iVar0) };
		Global_1601761.f_51893[2 /*233*/][iVar0 /*8*/].f_3 = unk_0xC0C527B525D7CFB5(iVar8, iVar0);
		Global_1601761.f_51893[2 /*233*/][iVar0 /*8*/].f_5 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		iVar0++;
	}
	Global_1601761.f_51406[3] = unk_0x78F06F6B1FB5A80C(*iParam0, "no3");
	iVar10 = unk_0x7A983AA9DA2659ED(*iParam0, "loc3");
	iVar11 = unk_0x7A983AA9DA2659ED(*iParam0, "head3");
	iVar12 = unk_0x7A983AA9DA2659ED(*iParam0, "bit3");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_51406[3] - 1))
	{
		Global_1601761.f_51893[3 /*233*/][iVar0 /*8*/] = { unk_0x8D2064E5B64A628A(iVar10, iVar0) };
		Global_1601761.f_51893[3 /*233*/][iVar0 /*8*/].f_3 = unk_0xC0C527B525D7CFB5(iVar11, iVar0);
		Global_1601761.f_51893[3 /*233*/][iVar0 /*8*/].f_5 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
		iVar0++;
	}
}

int func_123(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_124(iParam0) * 31);
}

int func_124(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_125()
{
	if (Global_1601761 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xB6B9DDC412FCEEE2(sParam0, "ene");
	Global_1601761.f_51405 = unk_0x78F06F6B1FB5A80C(iVar1, "no");
	Global_1601761.f_24875 = unk_0x78F06F6B1FB5A80C(iVar1, "veh");
	iVar2 = unk_0x7A983AA9DA2659ED(iVar1, "loc");
	iVar3 = unk_0x7A983AA9DA2659ED(iVar1, "head");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar1, "team");
	if (Global_1601761.f_51405 > 60)
	{
		Global_1601761.f_51405 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_51405 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1601761.f_51412[iVar0 /*8*/] = { unk_0x8D2064E5B64A628A(iVar2, iVar0) };
			Global_1601761.f_51412[iVar0 /*8*/].f_3 = unk_0xC0C527B525D7CFB5(iVar3, iVar0);
			Global_1601761.f_51412[iVar0 /*8*/].f_4 = unk_0x3E5AE19425CD74BE(iVar4, iVar0);
		}
		iVar0++;
	}
	func_122(&iVar1);
}

void func_127(char* sParam0)
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	iVar2 = unk_0xB6B9DDC412FCEEE2(sParam0, "dprop");
	Global_1601761.f_30147 = func_130(unk_0x78F06F6B1FB5A80C(iVar2, "no"), 0, 20);
	iVar3 = unk_0x7A983AA9DA2659ED(iVar2, "loc");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar2, "vRot");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar2, "head");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar2, "model");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar2, "asst");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar2, "asso");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar2, "asss");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar2, "pasc");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar2, "asst2");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar2, "asso2");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar2, "asss2");
	iVar14 = unk_0x7A983AA9DA2659ED(iVar2, "pasc2");
	iVar15 = unk_0x7A983AA9DA2659ED(iVar2, "asst3");
	iVar16 = unk_0x7A983AA9DA2659ED(iVar2, "asso3");
	iVar17 = unk_0x7A983AA9DA2659ED(iVar2, "asss3");
	iVar18 = unk_0x7A983AA9DA2659ED(iVar2, "pasc3");
	iVar19 = unk_0x7A983AA9DA2659ED(iVar2, "asst4");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar2, "asso4");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar2, "asss4");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar2, "pasc4");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar2, "prpct");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar2, "prpcr");
	iVar25 = unk_0x7A983AA9DA2659ED(iVar2, "prcra");
	iVar26 = unk_0x7A983AA9DA2659ED(iVar2, "prpbs");
	if (Global_1601761.f_30147 > 20)
	{
		Global_1601761.f_30147 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_30147 - 1))
	{
		Global_1601761.f_30149[iVar0 /*29*/] = { unk_0x8D2064E5B64A628A(iVar3, iVar0) };
		Global_1601761.f_30149[iVar0 /*29*/].f_3 = { unk_0x8D2064E5B64A628A(iVar4, iVar0) };
		Global_1601761.f_30149[iVar0 /*29*/].f_6 = unk_0xC0C527B525D7CFB5(iVar5, iVar0);
		Global_1601761.f_30149[iVar0 /*29*/].f_8 = -1;
		iVar1 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		Global_1601761.f_30149[iVar0 /*29*/].f_7 = func_129(iVar1);
		if (!unk_0xC0296A2EDF545E92(Global_1601761.f_30149[iVar0 /*29*/].f_7))
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1601761.f_30149[iVar0 /*29*/].f_10 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		Global_1601761.f_30149[iVar0 /*29*/].f_9 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
		Global_1601761.f_30149[iVar0 /*29*/].f_11 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		if (Global_1601761.f_30149[iVar0 /*29*/].f_11 == -1)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_11 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_17 = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_20 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_23 = unk_0x3E5AE19425CD74BE(iVar13, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_18 = unk_0x3E5AE19425CD74BE(iVar15, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_21 = unk_0x3E5AE19425CD74BE(iVar16, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_24 = unk_0x3E5AE19425CD74BE(iVar17, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_19 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_22 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_25 = unk_0x3E5AE19425CD74BE(iVar21, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_20 = -1;
			Global_1601761.f_30149[iVar0 /*29*/].f_17 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_23 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_21 = -1;
			Global_1601761.f_30149[iVar0 /*29*/].f_18 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_24 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_22 = -1;
			Global_1601761.f_30149[iVar0 /*29*/].f_19 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_25 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_12 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_26 = unk_0x3E5AE19425CD74BE(iVar14, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_27 = unk_0x3E5AE19425CD74BE(iVar18, iVar0);
			Global_1601761.f_30149[iVar0 /*29*/].f_28 = unk_0x3E5AE19425CD74BE(iVar22, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_12 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_26 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_27 = 0;
			Global_1601761.f_30149[iVar0 /*29*/].f_28 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar24, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_13 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_13 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar23, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_14 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_14 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar25, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_15 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_15 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar26, iVar0) == 2)
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_16 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
		}
		else
		{
			Global_1601761.f_30149[iVar0 /*29*/].f_16 = 0;
		}
		iVar0++;
	}
	iVar27 = iVar0;
	if (func_128() || Global_1601761 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1601761.f_24921 - 1))
		{
			Global_1601761.f_30149[iVar27 /*29*/] = { Global_1601761.f_24924[iVar0 /*84*/] };
			Global_1601761.f_30149[iVar27 /*29*/].f_3 = { Global_1601761.f_24924[iVar0 /*84*/].f_4 };
			Global_1601761.f_30149[iVar27 /*29*/].f_6 = Global_1601761.f_24924[iVar0 /*84*/].f_3;
			Global_1601761.f_30149[iVar27 /*29*/].f_8 = iVar0;
			Global_1601761.f_30149[iVar27 /*29*/].f_7 = joaat("prop_container_ld_pu");
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				Global_1601761.f_24924[iVar27 /*84*/].f_16[iVar28] = 0;
				Global_1601761.f_24924[iVar27 /*84*/].f_21[iVar28] = 99999;
				iVar28++;
			}
			Global_1601761.f_30148++;
			Global_1601761.f_30147++;
			iVar27++;
			iVar0++;
		}
	}
}

int func_128()
{
	if (Global_1601761 == 0 && Global_1601761.f_1 == 5)
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return joaat("lts_prop_lts_offroad_tyres01");
	}
	else if (iParam0 == joaat("prop_elecbox_24"))
	{
		return joaat("lts_prop_lts_elecbox_24");
	}
	else if (iParam0 == joaat("prop_elecbox_24b"))
	{
		return joaat("lts_prop_lts_elecbox_24b");
	}
	else if (iParam0 == joaat("prop_mp_ramp_01_tu"))
	{
		return joaat("lts_prop_lts_ramp_01");
	}
	else if (iParam0 == joaat("prop_mp_ramp_02_tu"))
	{
		return joaat("lts_prop_lts_ramp_02");
	}
	else if (iParam0 == joaat("prop_mp_ramp_03_tu"))
	{
		return joaat("lts_prop_lts_ramp_03");
	}
	else if (iParam0 == joaat("prop_bush_lrg_01e_cr"))
	{
		return joaat("prop_bush_lrg_01e_cr");
	}
	else if (iParam0 == joaat("prop_bush_med_03_cr"))
	{
		return joaat("prop_bush_med_03_cr");
	}
	if ((unk_0xA72BC0B675B1519E() || unk_0x4D982ADB1978442D()) || unk_0x48AF36444B965238())
	{
		if (iParam0 == -56302774)
		{
			return joaat("prop_tree_fallen_02");
		}
		if (iParam0 == -1924165356)
		{
			return joaat("prop_log_break_01");
		}
		if (iParam0 == 1837927001)
		{
			return joaat("prop_plant_group_04_cr");
		}
		if (iParam0 == -960602868)
		{
			return joaat("prop_bush_lrg_01c_cr");
		}
		if (iParam0 == -72825120)
		{
			return joaat("prop_bush_lrg_01e_cr2");
		}
		if (iParam0 == -713058190)
		{
			return joaat("prop_bush_med_03_cr2");
		}
	}
	else if (unk_0xF6201B4DAF662A9D() || unk_0xCCA1072C29D096C2())
	{
		if (iParam0 == joaat("prop_tree_fallen_02"))
		{
			return -56302774;
		}
		if (iParam0 == joaat("prop_log_break_01"))
		{
			return -1924165356;
		}
		if (iParam0 == joaat("prop_plant_group_04_cr"))
		{
			return 1837927001;
		}
		if (iParam0 == joaat("prop_bush_lrg_01c_cr"))
		{
			return -960602868;
		}
		if (iParam0 == joaat("prop_bush_lrg_01e_cr2"))
		{
			return -72825120;
		}
		if (iParam0 == joaat("prop_bush_med_03_cr2"))
		{
			return -713058190;
		}
	}
	return iParam0;
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_131(char* sParam0)
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	iVar2 = unk_0xB6B9DDC412FCEEE2(sParam0, "prop");
	Global_1601761.f_27014 = unk_0x78F06F6B1FB5A80C(iVar2, "no");
	iVar3 = unk_0x7A983AA9DA2659ED(iVar2, "loc");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar2, "vRot");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar2, "head");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar2, "model");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar2, "asst");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar2, "asso");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar2, "asss");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar2, "pasc");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar2, "asst2");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar2, "asso2");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar2, "asss2");
	iVar14 = unk_0x7A983AA9DA2659ED(iVar2, "pasc2");
	iVar15 = unk_0x7A983AA9DA2659ED(iVar2, "asst3");
	iVar16 = unk_0x7A983AA9DA2659ED(iVar2, "asso3");
	iVar17 = unk_0x7A983AA9DA2659ED(iVar2, "asss3");
	iVar18 = unk_0x7A983AA9DA2659ED(iVar2, "pasc3");
	iVar19 = unk_0x7A983AA9DA2659ED(iVar2, "asst4");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar2, "asso4");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar2, "asss4");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar2, "pasc4");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar2, "aldel");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar2, "alsnd");
	iVar25 = unk_0x7A983AA9DA2659ED(iVar2, "flvfx");
	iVar26 = unk_0x7A983AA9DA2659ED(iVar2, "prpct");
	iVar27 = unk_0x7A983AA9DA2659ED(iVar2, "prpcr");
	iVar28 = unk_0x7A983AA9DA2659ED(iVar2, "prcra");
	iVar29 = unk_0x7A983AA9DA2659ED(iVar2, "prpbs");
	if (Global_1601761.f_27014 > 100)
	{
		Global_1601761.f_27014 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_27014 - 1))
	{
		Global_1601761.f_27015[iVar0 /*31*/] = { unk_0x8D2064E5B64A628A(iVar3, iVar0) };
		Global_1601761.f_27015[iVar0 /*31*/].f_3 = { unk_0x8D2064E5B64A628A(iVar4, iVar0) };
		Global_1601761.f_27015[iVar0 /*31*/].f_6 = unk_0xC0C527B525D7CFB5(iVar5, iVar0);
		iVar1 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		Global_1601761.f_27015[iVar0 /*31*/].f_7 = func_129(iVar1);
		if (!unk_0xC0296A2EDF545E92(Global_1601761.f_27015[iVar0 /*31*/].f_7))
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1601761.f_27015[iVar0 /*31*/].f_9 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		Global_1601761.f_27015[iVar0 /*31*/].f_8 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
		Global_1601761.f_27015[iVar0 /*31*/].f_10 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		if (Global_1601761.f_27015[iVar0 /*31*/].f_10 == -1)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_10 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 2)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_19 = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_22 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_25 = unk_0x3E5AE19425CD74BE(iVar13, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_20 = unk_0x3E5AE19425CD74BE(iVar15, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_23 = unk_0x3E5AE19425CD74BE(iVar16, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_26 = unk_0x3E5AE19425CD74BE(iVar17, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_21 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_24 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_27 = unk_0x3E5AE19425CD74BE(iVar21, iVar0);
		}
		else
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_22 = -1;
			Global_1601761.f_27015[iVar0 /*31*/].f_19 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_25 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_23 = -1;
			Global_1601761.f_27015[iVar0 /*31*/].f_20 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_26 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_24 = -1;
			Global_1601761.f_27015[iVar0 /*31*/].f_21 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 2)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_11 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_28 = unk_0x3E5AE19425CD74BE(iVar14, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_29 = unk_0x3E5AE19425CD74BE(iVar18, iVar0);
			Global_1601761.f_27015[iVar0 /*31*/].f_30 = unk_0x3E5AE19425CD74BE(iVar22, iVar0);
		}
		else
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_11 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_28 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_29 = 0;
			Global_1601761.f_27015[iVar0 /*31*/].f_30 = 0;
		}
		Global_1601761.f_27015[iVar0 /*31*/].f_12 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
		if (Global_1601761.f_27015[iVar0 /*31*/].f_12 > 0 && Global_1601761.f_27015[iVar0 /*31*/].f_12 < 1000)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_12 = func_132(Global_1601761.f_27015[iVar0 /*31*/].f_12);
		}
		Global_1601761.f_27015[iVar0 /*31*/].f_13 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
		Global_1601761.f_27015[iVar0 /*31*/].f_14 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
		if (unk_0x3A0014ADB172A3C5(iVar27, iVar0) == 2)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_15 = unk_0x3E5AE19425CD74BE(iVar27, iVar0);
		}
		else
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar26, iVar0) == 2)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_16 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
		}
		else
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar28, iVar0) == 2)
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_17 = unk_0x3E5AE19425CD74BE(iVar28, iVar0);
		}
		else
		{
			Global_1601761.f_27015[iVar0 /*31*/].f_17 = -1;
		}
		Global_1601761.f_27015[iVar0 /*31*/].f_18 = unk_0x3E5AE19425CD74BE(iVar29, iVar0);
		iVar0++;
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5000;
		
		case 2:
			return 10000;
		
		case 3:
			return 20000;
		
		case 4:
			return 30000;
		
		case 5:
			return 45000;
		
		case 6:
			return 60000;
		
		default:
	}
	return 0;
}

void func_133(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	var* uVar60[4];
	var* uVar65[4];
	var* uVar70[4];
	var* uVar75[4];
	var* uVar80[4];
	var* uVar85[4];
	var* uVar90[4];
	var* uVar95[2];
	var* uVar98[2];
	int iVar101;
	
	iVar6 = unk_0xB6B9DDC412FCEEE2(sParam0, "veh");
	Global_1601761.f_31584 = unk_0x78F06F6B1FB5A80C(iVar6, "no");
	Global_1601761.f_31585 = unk_0x78F06F6B1FB5A80C(iVar6, "time");
	Global_1601761.f_31586 = unk_0x78F06F6B1FB5A80C(iVar6, "pal");
	iVar7 = unk_0xB6B9DDC412FCEEE2(sParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1601761.f_18 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1601761.f_72[iVar3 /*5254*/].f_38 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1601761.f_35021[iVar0 /*5*/][iVar3] = unk_0x78F06F6B1FB5A80C(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1601761.f_21136[iVar0 /*5*/][iVar3] = unk_0x78F06F6B1FB5A80C(iVar7, &cVar4);
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x7A983AA9DA2659ED(iVar6, "loc");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar6, "head");
	iVar16 = unk_0x7A983AA9DA2659ED(iVar6, "model");
	iVar17 = unk_0x7A983AA9DA2659ED(iVar6, "col");
	iVar18 = unk_0x7A983AA9DA2659ED(iVar6, "rsp");
	if (func_82())
	{
		iVar10 = unk_0x7A983AA9DA2659ED(iVar6, "vrr");
		iVar11 = unk_0x7A983AA9DA2659ED(iVar6, "vrmr");
		iVar12 = unk_0x7A983AA9DA2659ED(iVar6, "vsnt");
		iVar13 = unk_0x7A983AA9DA2659ED(iVar6, "vsnei");
		iVar14 = unk_0x7A983AA9DA2659ED(iVar6, "v2sp");
		iVar15 = unk_0x7A983AA9DA2659ED(iVar6, "v2sh");
		iVar19 = unk_0x7A983AA9DA2659ED(iVar6, "objt");
		iVar20 = unk_0x7A983AA9DA2659ED(iVar6, "team");
		iVar21 = unk_0x7A983AA9DA2659ED(iVar6, "spwn");
		iVar22 = unk_0x7A983AA9DA2659ED(iVar6, "objt2");
		iVar23 = unk_0x7A983AA9DA2659ED(iVar6, "team2");
		iVar24 = unk_0x7A983AA9DA2659ED(iVar6, "spwn2");
		iVar25 = unk_0x7A983AA9DA2659ED(iVar6, "objt3");
		iVar26 = unk_0x7A983AA9DA2659ED(iVar6, "team3");
		iVar27 = unk_0x7A983AA9DA2659ED(iVar6, "spwn3");
		iVar28 = unk_0x7A983AA9DA2659ED(iVar6, "objt4");
		iVar29 = unk_0x7A983AA9DA2659ED(iVar6, "team4");
		iVar30 = unk_0x7A983AA9DA2659ED(iVar6, "spwn4");
		Global_1601761.f_27013 = unk_0x78F06F6B1FB5A80C(iVar6, "nocr");
		iVar31 = unk_0x7A983AA9DA2659ED(iVar6, "liv");
		iVar32 = unk_0x7A983AA9DA2659ED(iVar6, "colc");
		iVar33 = unk_0x7A983AA9DA2659ED(iVar6, "col2");
		Global_1601761.f_31587 = unk_0x78F06F6B1FB5A80C(iVar6, "burst");
		iVar34 = unk_0x7A983AA9DA2659ED(iVar6, "hlth");
		iVar35 = unk_0x7A983AA9DA2659ED(iVar6, "enghp");
		iVar36 = unk_0x7A983AA9DA2659ED(iVar6, "ptrhp");
		iVar37 = unk_0x7A983AA9DA2659ED(iVar6, "bdyhp");
		iVar38 = unk_0x7A983AA9DA2659ED(iVar6, "drbs");
		iVar39 = unk_0x7A983AA9DA2659ED(iVar6, "vbs2");
		iVar40 = unk_0x7A983AA9DA2659ED(iVar6, "vbs3");
		iVar41 = unk_0x7A983AA9DA2659ED(iVar6, "vebs");
		iVar42 = unk_0x7A983AA9DA2659ED(iVar6, "vehct");
		iVar44 = unk_0x7A983AA9DA2659ED(iVar6, "vhcra");
		iVar43 = unk_0x7A983AA9DA2659ED(iVar6, "vehcr");
		iVar45 = unk_0x7A983AA9DA2659ED(iVar6, "vehbc");
		iVar46 = unk_0x7A983AA9DA2659ED(iVar6, "vehbr");
		iVar47 = unk_0x7A983AA9DA2659ED(iVar6, "vcnm");
		iVar48 = unk_0x7A983AA9DA2659ED(iVar6, "vehap");
		iVar49 = unk_0x7A983AA9DA2659ED(iVar6, "vehat");
		iVar50 = unk_0x7A983AA9DA2659ED(iVar6, "vehdu");
		iVar51 = unk_0x7A983AA9DA2659ED(iVar6, "vldt");
		iVar52 = unk_0x7A983AA9DA2659ED(iVar6, "vldr");
		iVar53 = unk_0x7A983AA9DA2659ED(iVar6, "cutsc");
		iVar54 = unk_0x7A983AA9DA2659ED(iVar6, "cutsh");
		iVar58 = unk_0x7A983AA9DA2659ED(iVar6, "nmpass");
		iVar59 = unk_0x7A983AA9DA2659ED(iVar6, "nmfail");
		iVar55 = unk_0x7A983AA9DA2659ED(iVar6, "vmcp");
		iVar56 = unk_0x7A983AA9DA2659ED(iVar6, "vmcf");
		iVar57 = unk_0x7A983AA9DA2659ED(iVar6, "gotor");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar95[iVar1] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar98[iVar1] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			iVar1++;
		}
		iVar101 = unk_0x7A983AA9DA2659ED(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1601761.f_18 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar60[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0x7A983AA9DA2659ED(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_31584 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1601761.f_31588[iVar0 /*104*/] = { unk_0x8D2064E5B64A628A(iVar8, iVar0) };
			Global_1601761.f_31588[iVar0 /*104*/].f_3 = unk_0xC0C527B525D7CFB5(iVar9, iVar0);
			iVar2 = unk_0x3E5AE19425CD74BE(iVar16, iVar0);
			Global_1601761.f_31588[iVar0 /*104*/].f_12 = iVar2;
			if (!func_81())
			{
				if (!unk_0xC0296A2EDF545E92(Global_1601761.f_31588[iVar0 /*104*/].f_12))
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_12 = joaat("baller");
				}
			}
			Global_1601761.f_31588[iVar0 /*104*/].f_23 = unk_0x3E5AE19425CD74BE(iVar17, iVar0);
			Global_1601761.f_31588[iVar0 /*104*/].f_27 = unk_0x3E5AE19425CD74BE(iVar18, iVar0);
			if (func_82())
			{
				if (((unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 3 && unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 3) && unk_0x3A0014ADB172A3C5(iVar12, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar13, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_4 = unk_0xC0C527B525D7CFB5(iVar10, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_5 = unk_0xC0C527B525D7CFB5(iVar11, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_6 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_7 = unk_0x3E5AE19425CD74BE(iVar13, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_4 = 100f;
					Global_1601761.f_31588[iVar0 /*104*/].f_5 = 0f;
					Global_1601761.f_31588[iVar0 /*104*/].f_6 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_7 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar14, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar15, iVar0) == 3)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_8 = { unk_0x8D2064E5B64A628A(iVar14, iVar0) };
					Global_1601761.f_31588[iVar0 /*104*/].f_11 = unk_0xC0C527B525D7CFB5(iVar15, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_8 = { 0f, 0f, 0f };
					Global_1601761.f_31588[iVar0 /*104*/].f_11 = 0f;
				}
				Global_1601761.f_31588[iVar0 /*104*/].f_33 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
				Global_1601761.f_31588[iVar0 /*104*/].f_34 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
				Global_1601761.f_31588[iVar0 /*104*/].f_35 = unk_0x3E5AE19425CD74BE(iVar21, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar22, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_58 = unk_0x3E5AE19425CD74BE(iVar22, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_55 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_61 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_59 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_56 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_62 = unk_0x3E5AE19425CD74BE(iVar27, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_60 = unk_0x3E5AE19425CD74BE(iVar28, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_57 = unk_0x3E5AE19425CD74BE(iVar29, iVar0);
					Global_1601761.f_31588[iVar0 /*104*/].f_63 = unk_0x3E5AE19425CD74BE(iVar30, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_58 = -1;
					Global_1601761.f_31588[iVar0 /*104*/].f_55 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_61 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_59 = -1;
					Global_1601761.f_31588[iVar0 /*104*/].f_56 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_62 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_60 = -1;
					Global_1601761.f_31588[iVar0 /*104*/].f_57 = 0;
					Global_1601761.f_31588[iVar0 /*104*/].f_63 = 0;
				}
				Global_1601761.f_31588[iVar0 /*104*/].f_26 = unk_0x3E5AE19425CD74BE(iVar31, iVar0);
				Global_1601761.f_31588[iVar0 /*104*/].f_28 = unk_0x3E5AE19425CD74BE(iVar34, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar35, iVar0) == 3 && unk_0xC0C527B525D7CFB5(iVar35, iVar0) > 0f)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_29 = unk_0xC0C527B525D7CFB5(iVar35, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_29 = 1001f;
				}
				if (unk_0x3A0014ADB172A3C5(iVar36, iVar0) == 3 && unk_0xC0C527B525D7CFB5(iVar36, iVar0) > 0f)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_30 = unk_0xC0C527B525D7CFB5(iVar36, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_30 = 1001f;
				}
				if (unk_0x3A0014ADB172A3C5(iVar37, iVar0) == 3 && unk_0xC0C527B525D7CFB5(iVar37, iVar0) > 0f)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_31 = unk_0xC0C527B525D7CFB5(iVar37, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_31 = 1001f;
				}
				Global_1601761.f_31588[iVar0 /*104*/].f_36 = unk_0x3E5AE19425CD74BE(iVar38, iVar0);
				Global_1601761.f_31588[iVar0 /*104*/].f_37 = unk_0x3E5AE19425CD74BE(iVar39, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar40, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_38 = unk_0x3E5AE19425CD74BE(iVar40, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_38 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar32, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_25 = unk_0x3E5AE19425CD74BE(iVar32, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_25 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar33, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_24 = unk_0x3E5AE19425CD74BE(iVar33, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_24 = -1;
				}
				Global_1601761.f_31588[iVar0 /*104*/].f_92 = unk_0x3E5AE19425CD74BE(iVar41, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar43, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_52 = unk_0x3E5AE19425CD74BE(iVar43, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_52 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar42, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_53 = unk_0x3E5AE19425CD74BE(iVar42, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_53 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar44, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_54 = unk_0x3E5AE19425CD74BE(iVar44, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_54 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar47, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_64 = unk_0x3E5AE19425CD74BE(iVar47, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_64 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar55, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_82 = unk_0x3E5AE19425CD74BE(iVar55, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_82 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar56, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_83 = unk_0x3E5AE19425CD74BE(iVar56, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_83 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar48, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_65 = unk_0x3E5AE19425CD74BE(iVar48, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_65 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar49, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_66 = unk_0x3E5AE19425CD74BE(iVar49, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_66 = 1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar50, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_79 = unk_0x3E5AE19425CD74BE(iVar50, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_79 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar51, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_80 = unk_0x3E5AE19425CD74BE(iVar51, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_80 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar52, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_81 = unk_0x3E5AE19425CD74BE(iVar52, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_81 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar45, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_40 = unk_0x3E5AE19425CD74BE(iVar45, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_40 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar46, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_41 = unk_0x3E5AE19425CD74BE(iVar46, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_41 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar57, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_32 = unk_0x3E5AE19425CD74BE(iVar57, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_32 = 0;
				}
				if (Global_1601761.f_1 != 6 && unk_0x3A0014ADB172A3C5(iVar53, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_90 = unk_0x3E5AE19425CD74BE(iVar53, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_90 = -1;
				}
				if (Global_1601761.f_1 != 6 && unk_0x3A0014ADB172A3C5(iVar54, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_91 = unk_0x3E5AE19425CD74BE(iVar54, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_91 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar58, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_77 = unk_0x3E5AE19425CD74BE(iVar58, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_77 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar59, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_78 = unk_0x3E5AE19425CD74BE(iVar59, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_78 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x3A0014ADB172A3C5(uVar95[iVar1], iVar0) == 5)
					{
						Global_1601761.f_31588[iVar0 /*104*/].f_94[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar95[iVar1], iVar0) };
					}
					else
					{
						Global_1601761.f_31588[iVar0 /*104*/].f_94[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x3A0014ADB172A3C5(uVar98[iVar1], iVar0) == 3)
					{
						Global_1601761.f_31588[iVar0 /*104*/].f_101[iVar1] = unk_0xC0C527B525D7CFB5(uVar98[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_31588[iVar0 /*104*/].f_101[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x3A0014ADB172A3C5(iVar101, iVar0) == 2)
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_93 = unk_0x3E5AE19425CD74BE(iVar101, iVar0);
				}
				else
				{
					Global_1601761.f_31588[iVar0 /*104*/].f_93 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1601761.f_18 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1601761.f_31588[iVar0 /*104*/].f_13[iVar3] = unk_0x3E5AE19425CD74BE(uVar60[iVar3], iVar0);
						Global_1601761.f_31588[iVar0 /*104*/].f_18[iVar3] = unk_0x3E5AE19425CD74BE(uVar65[iVar3], iVar0);
						if (Global_1601761.f_31588[iVar0 /*104*/].f_18[iVar3] == -1)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_18[iVar3] = 99999;
						}
						if (unk_0x3A0014ADB172A3C5(uVar70[iVar3], iVar0) == 2)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_84[iVar3] = unk_0x3E5AE19425CD74BE(uVar70[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_84[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar75[iVar3], iVar0) == 2)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_67[iVar3] = unk_0x3E5AE19425CD74BE(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_67[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar80[iVar3], iVar0) == 2)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_72[iVar3] = unk_0x3E5AE19425CD74BE(uVar80[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_72[iVar3] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar85[iVar3], iVar0) == 2)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_42[iVar3] = unk_0x3E5AE19425CD74BE(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_42[iVar3] = -1;
						}
						if (unk_0x3A0014ADB172A3C5(uVar90[iVar3], iVar0) == 2)
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_47[iVar3] = unk_0x3E5AE19425CD74BE(uVar90[iVar3], iVar0);
						}
						else
						{
							Global_1601761.f_31588[iVar0 /*104*/].f_47[iVar3] = -1;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_134(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	
	iVar5 = unk_0xB6B9DDC412FCEEE2(sParam0, "weap");
	Global_1601761.f_30759 = unk_0x78F06F6B1FB5A80C(iVar5, "no");
	if (Global_1601761 == 0)
	{
		if (Global_1601761.f_30759 > 40)
		{
			Global_1601761.f_30759 = 40;
		}
	}
	else if (Global_1601761.f_30759 > 40)
	{
		Global_1601761.f_30759 = 40;
	}
	Global_1601761.f_30761 = unk_0x78F06F6B1FB5A80C(iVar5, "time");
	Global_1601761.f_30762 = unk_0x78F06F6B1FB5A80C(iVar5, "pal");
	Global_1601761.f_41 = unk_0x78F06F6B1FB5A80C(iVar5, "blip");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar5, "loc");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar5, "head");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar5, "type");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar5, "sub");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar5, "bits");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar5, "brest1");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar5, "brest2");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar5, "brest3");
	iVar14 = unk_0x7A983AA9DA2659ED(iVar5, "brest4");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_30759 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1601761.f_30763[iVar0 /*20*/] = { unk_0x8D2064E5B64A628A(iVar6, iVar0) };
			Global_1601761.f_30763[iVar0 /*20*/].f_3 = unk_0xC0C527B525D7CFB5(iVar7, iVar0);
			iVar1 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
			Global_1601761.f_30763[iVar0 /*20*/].f_12 = iVar1;
			if (!func_135(Global_1601761.f_30763[iVar0 /*20*/].f_12))
			{
				if (Global_1601761.f_30763[iVar0 /*20*/].f_12 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1601761.f_30763[iVar0 /*20*/].f_12 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1601761.f_30763[iVar0 /*20*/].f_12 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1601761.f_30763[iVar0 /*20*/].f_4 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
			Global_1601761.f_30763[iVar0 /*20*/].f_6 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
			if (unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 1)
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[0] = unk_0x50C1B2874E50C114(iVar11, iVar0);
			}
			else
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[0] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar12, iVar0) == 1)
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[1] = unk_0x50C1B2874E50C114(iVar12, iVar0);
			}
			else
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar13, iVar0) == 1)
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[2] = unk_0x50C1B2874E50C114(iVar13, iVar0);
			}
			else
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[2] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar14, iVar0) == 1)
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[3] = unk_0x50C1B2874E50C114(iVar14, iVar0);
			}
			else
			{
				Global_1601761.f_30763[iVar0 /*20*/].f_7[3] = 0;
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar15 = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x3A0014ADB172A3C5(iVar15, iVar2) == 2)
				{
					Global_1601761.f_30763[iVar0 /*20*/].f_13[iVar2] = unk_0x3E5AE19425CD74BE(iVar15, iVar2);
				}
				else
				{
					Global_1601761.f_30763[iVar0 /*20*/].f_13[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_health_standard"):
		case joaat("pickup_armour_standard"):
		case joaat("pickup_health_snack"):
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
		case joaat("pickup_weapon_pistol"):
		case joaat("pickup_weapon_combatpistol"):
		case joaat("pickup_weapon_pistol50"):
		case joaat("pickup_weapon_appistol"):
		case joaat("pickup_weapon_microsmg"):
		case joaat("pickup_weapon_smg"):
		case joaat("pickup_weapon_assaultsmg"):
		case joaat("pickup_weapon_assaultrifle"):
		case joaat("pickup_weapon_carbinerifle"):
		case 1491498856:
		case joaat("pickup_weapon_advancedrifle"):
		case joaat("pickup_weapon_mg"):
		case joaat("pickup_weapon_combatmg"):
		case 975696266:
		case joaat("pickup_weapon_pumpshotgun"):
		case joaat("pickup_weapon_sawnoffshotgun"):
		case joaat("pickup_weapon_bullpupshotgun"):
		case joaat("pickup_weapon_assaultshotgun"):
		case joaat("pickup_weapon_sniperrifle"):
		case 1061513000:
		case joaat("pickup_weapon_heavysniper"):
		case joaat("pickup_weapon_grenadelauncher"):
		case joaat("pickup_weapon_rpg"):
		case joaat("pickup_weapon_minigun"):
		case joaat("pickup_weapon_grenade"):
		case joaat("pickup_weapon_smokegrenade"):
		case joaat("pickup_weapon_stickybomb"):
		case joaat("pickup_weapon_molotov"):
		case joaat("pickup_weapon_stungun"):
		case -660082779:
		case -695202657:
		case joaat("pickup_weapon_fireextinguisher"):
		case joaat("pickup_weapon_petrolcan"):
		case joaat("pickup_weapon_loudhailer"):
		case joaat("pickup_weapon_knife"):
		case joaat("pickup_weapon_nightstick"):
		case joaat("pickup_weapon_hammer"):
		case joaat("pickup_weapon_bat"):
		case joaat("pickup_weapon_crowbar"):
		case joaat("pickup_weapon_golfclub"):
		case joaat("pickup_ammo_bullet_mp"):
		case joaat("pickup_ammo_missile_mp"):
		case joaat("pickup_ammo_grenadelauncher_mp"):
		case joaat("pickup_ammo_pistol"):
		case joaat("pickup_ammo_smg"):
		case joaat("pickup_ammo_rifle"):
		case joaat("pickup_ammo_mg"):
		case joaat("pickup_ammo_shotgun"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("pickup_ammo_sniper"):
		case joaat("pickup_ammo_grenadelauncher"):
		case joaat("pickup_ammo_rpg"):
		case joaat("pickup_ammo_minigun"):
		case 610630637:
		case -1883407879:
		case joaat("pickup_ammo_flaregun"):
		case joaat("pickup_ammo_firework"):
		case -1892342586:
		case 2001257022:
		case joaat("pickup_vehicle_health_standard"):
		case joaat("pickup_vehicle_health_standard_low_glow"):
		case joaat("pickup_vehicle_armour_standard"):
		case joaat("pickup_vehicle_weapon_pistol"):
		case joaat("pickup_vehicle_weapon_combatpistol"):
		case joaat("pickup_vehicle_weapon_pistol50"):
		case joaat("pickup_vehicle_weapon_appistol"):
		case joaat("pickup_vehicle_weapon_microsmg"):
		case joaat("pickup_vehicle_weapon_smg"):
		case joaat("pickup_vehicle_weapon_sawnoff"):
		case joaat("pickup_vehicle_weapon_assaultsmg"):
		case joaat("pickup_vehicle_weapon_grenade"):
		case joaat("pickup_vehicle_weapon_smokegrenade"):
		case joaat("pickup_vehicle_weapon_stickybomb"):
		case joaat("pickup_vehicle_weapon_molotov"):
		case joaat("pickup_vehicle_custom_script"):
		case joaat("pickup_vehicle_custom_script_low_glow"):
		case joaat("pickup_vehicle_money_variable"):
		case joaat("pickup_portable_crate_unfixed"):
		case joaat("pickup_portable_crate_unfixed_low_glow"):
		case joaat("pickup_portable_package"):
		case joaat("pickup_portable_dlc_vehicle_package"):
		case joaat("pickup_submarine"):
		case joaat("pickup_parachute"):
		case joaat("pickup_custom_script"):
		case joaat("pickup_handcuff_key"):
		case joaat("pickup_camera"):
		case joaat("pickup_weapon_bottle"):
		case joaat("pickup_weapon_specialcarbine"):
		case joaat("pickup_weapon_snspistol"):
		case joaat("pickup_weapon_bullpuprifle"):
		case joaat("pickup_weapon_heavypistol"):
		case joaat("pickup_weapon_dagger"):
		case joaat("pickup_weapon_vintagepistol"):
		case joaat("pickup_weapon_gusenberg"):
		case joaat("pickup_weapon_firework"):
		case joaat("pickup_weapon_musket"):
		case joaat("pickup_weapon_hatchet"):
		case joaat("pickup_weapon_railgun"):
		case joaat("pickup_weapon_heavyshotgun"):
		case joaat("pickup_weapon_marksmanrifle"):
			return 1;
		
		default:
	}
	return 0;
}

void func_136(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	var* uVar57[4];
	var* uVar62[4];
	var* uVar67[4];
	var* uVar72[4];
	
	iVar5 = unk_0xB6B9DDC412FCEEE2(sParam0, "obj");
	Global_1601761.f_24921 = unk_0x78F06F6B1FB5A80C(iVar5, "no");
	Global_1601761.f_24922 = unk_0x78F06F6B1FB5A80C(iVar5, "pal");
	Global_1601761.f_24923 = unk_0x78F06F6B1FB5A80C(iVar5, "rtm");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar5, "loc");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar5, "head");
	iVar14 = unk_0x7A983AA9DA2659ED(iVar5, "model");
	iVar15 = unk_0x7A983AA9DA2659ED(iVar5, "ped");
	iVar16 = unk_0x7A983AA9DA2659ED(iVar5, "rsp");
	iVar17 = unk_0x7A983AA9DA2659ED(iVar5, "rot");
	iVar18 = unk_0x7A983AA9DA2659ED(iVar5, "cont");
	iVar19 = unk_0x7A983AA9DA2659ED(iVar5, "valu");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar5, "ammoforwep");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar5, "cpup");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar5, "cpupr");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar5, "cpupt");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar5, "bits");
	if (func_82())
	{
		iVar8 = unk_0x7A983AA9DA2659ED(iVar5, "obrr");
		iVar9 = unk_0x7A983AA9DA2659ED(iVar5, "obrmr");
		iVar10 = unk_0x7A983AA9DA2659ED(iVar5, "osnt");
		iVar11 = unk_0x7A983AA9DA2659ED(iVar5, "osnei");
		iVar12 = unk_0x7A983AA9DA2659ED(iVar5, "o2sp");
		iVar13 = unk_0x7A983AA9DA2659ED(iVar5, "o2sh");
		iVar25 = unk_0x7A983AA9DA2659ED(iVar5, "mgbs");
		iVar26 = unk_0x7A983AA9DA2659ED(iVar5, "objct");
		iVar27 = unk_0x7A983AA9DA2659ED(iVar5, "team");
		iVar28 = unk_0x7A983AA9DA2659ED(iVar5, "spwn");
		iVar29 = unk_0x7A983AA9DA2659ED(iVar5, "objct2");
		iVar30 = unk_0x7A983AA9DA2659ED(iVar5, "team2");
		iVar31 = unk_0x7A983AA9DA2659ED(iVar5, "spwn2");
		iVar32 = unk_0x7A983AA9DA2659ED(iVar5, "objct3");
		iVar33 = unk_0x7A983AA9DA2659ED(iVar5, "team3");
		iVar34 = unk_0x7A983AA9DA2659ED(iVar5, "spwn3");
		iVar35 = unk_0x7A983AA9DA2659ED(iVar5, "objct4");
		iVar36 = unk_0x7A983AA9DA2659ED(iVar5, "team4");
		iVar37 = unk_0x7A983AA9DA2659ED(iVar5, "spwn4");
		iVar38 = unk_0x7A983AA9DA2659ED(iVar5, "hlt");
		iVar39 = unk_0x7A983AA9DA2659ED(iVar5, "obb");
		iVar40 = unk_0x7A983AA9DA2659ED(iVar5, "obbc");
		iVar41 = unk_0x7A983AA9DA2659ED(iVar5, "objclt");
		iVar42 = unk_0x7A983AA9DA2659ED(iVar5, "objcr");
		iVar43 = unk_0x7A983AA9DA2659ED(iVar5, "obcra");
		iVar44 = unk_0x7A983AA9DA2659ED(iVar5, "objcnm");
		iVar45 = unk_0x7A983AA9DA2659ED(iVar5, "objap");
		iVar46 = unk_0x7A983AA9DA2659ED(iVar5, "obint");
		iVar47 = unk_0x7A983AA9DA2659ED(iVar5, "obrom");
		iVar48 = unk_0x7A983AA9DA2659ED(iVar5, "inco");
		iVar49 = unk_0x7A983AA9DA2659ED(iVar5, "inhsh");
		iVar50 = unk_0x7A983AA9DA2659ED(iVar5, "vehpu");
		iVar51 = unk_0x7A983AA9DA2659ED(iVar5, "airpu");
		iVar54 = unk_0x7A983AA9DA2659ED(iVar5, "gotor");
		iVar55 = unk_0x7A983AA9DA2659ED(iVar5, "nmpass");
		iVar56 = unk_0x7A983AA9DA2659ED(iVar5, "nmfail");
		iVar52 = unk_0x7A983AA9DA2659ED(iVar5, "omcp");
		iVar53 = unk_0x7A983AA9DA2659ED(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1601761.f_18 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar57[iVar2] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar62[iVar2] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar67[iVar2] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar72[iVar2] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_24921 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1601761.f_24924[iVar0 /*84*/] = { unk_0x8D2064E5B64A628A(iVar6, iVar0) };
			Global_1601761.f_24924[iVar0 /*84*/].f_3 = unk_0xC0C527B525D7CFB5(iVar7, iVar0);
			iVar1 = unk_0x3E5AE19425CD74BE(iVar14, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_15 = iVar1;
			if (Global_1601761.f_24924[iVar0 /*84*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1601761.f_24924[iVar0 /*84*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0xC0296A2EDF545E92(Global_1601761.f_24924[iVar0 /*84*/].f_15))
			{
				Global_1601761.f_24924[iVar0 /*84*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_1601761.f_24924[iVar0 /*84*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_1601761.f_24924[iVar0 /*84*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1601761.f_24924[iVar0 /*84*/].f_15 == joaat("prop_cctv_cam_07a"))
			{
				Global_1601761.f_24924[iVar0 /*84*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1601761.f_24924[iVar0 /*84*/].f_26 = unk_0x3E5AE19425CD74BE(iVar16, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_4 = { unk_0x8D2064E5B64A628A(iVar17, iVar0) };
			Global_1601761.f_24924[iVar0 /*84*/].f_30 = unk_0x3E5AE19425CD74BE(iVar15, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_42 = unk_0x3E5AE19425CD74BE(iVar18, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_43 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_44 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_45 = unk_0x3E5AE19425CD74BE(iVar21, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_46 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_47 = unk_0x3E5AE19425CD74BE(iVar22, iVar0);
			Global_1601761.f_24924[iVar0 /*84*/].f_40 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
			if (unk_0x3A0014ADB172A3C5(iVar51, iVar0) == 2)
			{
				if (unk_0x3E5AE19425CD74BE(iVar51, iVar0) == 1)
				{
					if (!unk_0xA921AA820C25702F(Global_1601761.f_24924[iVar0 /*84*/].f_40, 4))
					{
						unk_0x933D6A9EEC1BACD0(&(Global_1601761.f_24924[iVar0 /*84*/].f_40), 4);
					}
				}
			}
			if (func_82())
			{
				if (((unk_0x3A0014ADB172A3C5(iVar8, iVar0) == 3 && unk_0x3A0014ADB172A3C5(iVar9, iVar0) == 3) && unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 2) && unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_7 = unk_0xC0C527B525D7CFB5(iVar8, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_8 = unk_0xC0C527B525D7CFB5(iVar9, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_9 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_10 = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_7 = 50f;
					Global_1601761.f_24924[iVar0 /*84*/].f_8 = 0f;
					Global_1601761.f_24924[iVar0 /*84*/].f_9 = 0;
					Global_1601761.f_24924[iVar0 /*84*/].f_10 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar12, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar13, iVar0) == 3)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_11 = { unk_0x8D2064E5B64A628A(iVar12, iVar0) };
					Global_1601761.f_24924[iVar0 /*84*/].f_14 = unk_0xC0C527B525D7CFB5(iVar13, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_11 = { 0f, 0f, 0f };
					Global_1601761.f_24924[iVar0 /*84*/].f_14 = 0f;
				}
				Global_1601761.f_24924[iVar0 /*84*/].f_41 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
				Global_1601761.f_24924[iVar0 /*84*/].f_31 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
				Global_1601761.f_24924[iVar0 /*84*/].f_32 = unk_0x3E5AE19425CD74BE(iVar27, iVar0);
				Global_1601761.f_24924[iVar0 /*84*/].f_33 = unk_0x3E5AE19425CD74BE(iVar28, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar29, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_55 = unk_0x3E5AE19425CD74BE(iVar29, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_52 = unk_0x3E5AE19425CD74BE(iVar30, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_58 = unk_0x3E5AE19425CD74BE(iVar31, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_56 = unk_0x3E5AE19425CD74BE(iVar32, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_53 = unk_0x3E5AE19425CD74BE(iVar33, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_59 = unk_0x3E5AE19425CD74BE(iVar34, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_57 = unk_0x3E5AE19425CD74BE(iVar35, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_54 = unk_0x3E5AE19425CD74BE(iVar36, iVar0);
					Global_1601761.f_24924[iVar0 /*84*/].f_60 = unk_0x3E5AE19425CD74BE(iVar37, iVar0);
				}
				Global_1601761.f_24924[iVar0 /*84*/].f_27 = unk_0x3E5AE19425CD74BE(iVar38, iVar0);
				Global_1601761.f_24924[iVar0 /*84*/].f_28 = unk_0x3E5AE19425CD74BE(iVar39, iVar0);
				Global_1601761.f_24924[iVar0 /*84*/].f_34 = unk_0x3E5AE19425CD74BE(iVar50, iVar0);
				if (unk_0x3A0014ADB172A3C5(iVar40, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_29 = unk_0x3E5AE19425CD74BE(iVar40, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_29 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar42, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_48 = unk_0x3E5AE19425CD74BE(iVar42, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_48 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar41, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_49 = unk_0x3E5AE19425CD74BE(iVar41, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_49 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar43, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_50 = unk_0x3E5AE19425CD74BE(iVar43, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_50 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar44, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_76 = unk_0x3E5AE19425CD74BE(iVar44, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_76 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar52, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_73 = unk_0x3E5AE19425CD74BE(iVar52, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_73 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar53, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_74 = unk_0x3E5AE19425CD74BE(iVar53, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_74 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar45, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_77 = unk_0x3E5AE19425CD74BE(iVar45, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_77 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar46, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_78 = unk_0x3E5AE19425CD74BE(iVar46, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_78 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar47, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_79 = unk_0x3E5AE19425CD74BE(iVar47, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_79 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar48, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar49, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_80 = { unk_0x8D2064E5B64A628A(iVar48, iVar0) };
					Global_1601761.f_24924[iVar0 /*84*/].f_83 = unk_0x3E5AE19425CD74BE(iVar49, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_80 = { 0f, 0f, 0f };
					Global_1601761.f_24924[iVar0 /*84*/].f_83 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar54, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_51 = unk_0x3E5AE19425CD74BE(iVar54, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_51 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(iVar55, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_71 = unk_0x3E5AE19425CD74BE(iVar55, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_71 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(iVar56, iVar0) == 2)
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_72 = unk_0x3E5AE19425CD74BE(iVar56, iVar0);
				}
				else
				{
					Global_1601761.f_24924[iVar0 /*84*/].f_72 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1601761.f_18 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1601761.f_24924[iVar0 /*84*/].f_16[iVar2] = unk_0x3E5AE19425CD74BE(uVar57[iVar2], iVar0);
						Global_1601761.f_24924[iVar0 /*84*/].f_21[iVar2] = unk_0x3E5AE19425CD74BE(uVar62[iVar2], iVar0);
						if (Global_1601761.f_24924[iVar0 /*84*/].f_21[iVar2] == -1)
						{
							Global_1601761.f_24924[iVar0 /*84*/].f_21[iVar2] = 99999;
						}
						if (unk_0x3A0014ADB172A3C5(uVar67[iVar2], iVar0) == 2)
						{
							Global_1601761.f_24924[iVar0 /*84*/].f_61[iVar2] = unk_0x3E5AE19425CD74BE(uVar67[iVar2], iVar0);
						}
						else
						{
							Global_1601761.f_24924[iVar0 /*84*/].f_61[iVar2] = 0;
						}
						if (unk_0x3A0014ADB172A3C5(uVar72[iVar2], iVar0) == 2)
						{
							Global_1601761.f_24924[iVar0 /*84*/].f_66[iVar2] = unk_0x3E5AE19425CD74BE(uVar72[iVar2], iVar0);
						}
						else
						{
							Global_1601761.f_24924[iVar0 /*84*/].f_66[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_137(char* sParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var* uVar10[4];
	var* uVar15[4];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	iVar6 = unk_0xB6B9DDC412FCEEE2(sParam0, "zone");
	Global_1601761.f_55145 = unk_0x78F06F6B1FB5A80C(iVar6, "no");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar6, "vto");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar6, "vld");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar6, "zntp");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar6, "znbs");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar6, "znwd");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar6, "znwvd");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar6, "znatp");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar6, "znwid");
	iVar25 = unk_0x7A983AA9DA2659ED(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x7A983AA9DA2659ED(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x7A983AA9DA2659ED(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1601761.f_55145 > 10)
	{
		Global_1601761.f_55145 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_55145 - 1))
	{
		Global_1601761.f_55162[iVar0 /*26*/][0 /*3*/] = { unk_0x8D2064E5B64A628A(iVar7, iVar0) };
		Global_1601761.f_55162[iVar0 /*26*/][1 /*3*/] = { unk_0x8D2064E5B64A628A(iVar8, iVar0) };
		Global_1601761.f_55162[iVar0 /*26*/].f_9 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x3A0014ADB172A3C5(uVar10[iVar1], iVar0) == 2)
			{
				Global_1601761.f_55162[iVar0 /*26*/].f_10[iVar1] = unk_0x3E5AE19425CD74BE(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1601761.f_55162[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x3A0014ADB172A3C5(uVar15[iVar1], iVar0) == 2)
			{
				Global_1601761.f_55162[iVar0 /*26*/].f_15[iVar1] = unk_0x3E5AE19425CD74BE(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1601761.f_55162[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x3A0014ADB172A3C5(iVar20, iVar0) == 2)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_20 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar21, iVar0) == 3)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_22 = unk_0xC0C527B525D7CFB5(iVar21, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar22, iVar0) == 3)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_23 = unk_0xC0C527B525D7CFB5(iVar22, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar23, iVar0) == 2)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_8 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar24, iVar0) == 3)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_7 = unk_0xC0C527B525D7CFB5(iVar24, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar25, iVar0) == 2)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_21 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
		}
		else
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_138(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xB6B9DDC412FCEEE2(sParam0, "usj");
	Global_1601761.f_54520 = unk_0x78F06F6B1FB5A80C(iVar1, "no");
	iVar2 = unk_0x7A983AA9DA2659ED(iVar1, "vto");
	iVar3 = unk_0x7A983AA9DA2659ED(iVar1, "vld");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar1, "vcm");
	if (Global_1601761.f_54520 > 10)
	{
		Global_1601761.f_54520 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_54520 - 1))
	{
		Global_1601761.f_54521[iVar0 /*9*/] = { unk_0x8D2064E5B64A628A(iVar2, iVar0) };
		Global_1601761.f_54521[iVar0 /*9*/].f_3 = { unk_0x8D2064E5B64A628A(iVar3, iVar0) };
		Global_1601761.f_54521[iVar0 /*9*/].f_6 = { unk_0x8D2064E5B64A628A(iVar4, iVar0) };
		iVar0++;
	}
}

void func_139(char* sParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var* uVar27[4];
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0xB6B9DDC412FCEEE2(sParam0, "ddtrig");
	Global_1601761.f_58465 = unk_0x78F06F6B1FB5A80C(iVar4, "no");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar4, "id");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar4, "fid");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar4, "rule");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar4, "team");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar4, "pos");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar4, "rad");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar4, "tdel");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar4, "tpnt");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar4, "crkls");
	iVar14 = unk_0x7A983AA9DA2659ED(iVar4, "fcsped");
	iVar15 = unk_0x7A983AA9DA2659ED(iVar4, "prty");
	iVar16 = unk_0x7A983AA9DA2659ED(iVar4, "dbs");
	iVar17 = unk_0x7A983AA9DA2659ED(iVar4, "dbs2");
	iVar18 = unk_0x7A983AA9DA2659ED(iVar4, "dspk");
	iVar19 = unk_0x7A983AA9DA2659ED(iVar4, "dspk2");
	iVar20 = unk_0x7A983AA9DA2659ED(iVar4, "panim");
	iVar21 = unk_0x7A983AA9DA2659ED(iVar4, "blok");
	iVar22 = unk_0x7A983AA9DA2659ED(iVar4, "root");
	iVar23 = unk_0x7A983AA9DA2659ED(iVar4, "mgveh");
	iVar24 = unk_0x7A983AA9DA2659ED(iVar4, "vehtg");
	iVar25 = unk_0x7A983AA9DA2659ED(iVar4, "prerq");
	iVar26 = unk_0x7A983AA9DA2659ED(iVar4, "vehdm");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1601761.f_58465 > 69)
	{
		Global_1601761.f_58465 = 69;
	}
	if (unk_0x3A0014ADB172A3C5(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1601761.f_58465 - 1))
		{
			if (unk_0x3A0014ADB172A3C5(iVar8, iVar0) == 2)
			{
				func_140(&(Global_1601761.f_55480[iVar0 /*39*/]), iVar0);
				if (iVar6 != 0 && unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_1 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/] = unk_0x3E5AE19425CD74BE(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_2 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_3 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_5 = { unk_0x8D2064E5B64A628A(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_8 = unk_0xC0C527B525D7CFB5(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_4 = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_11 = unk_0x3E5AE19425CD74BE(iVar12, iVar0);
				}
				if (iVar15 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_12 = unk_0x3E5AE19425CD74BE(iVar15, iVar0);
				}
				if (iVar16 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_9 = unk_0x3E5AE19425CD74BE(iVar16, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_10 = unk_0x3E5AE19425CD74BE(iVar17, iVar0);
				}
				if (iVar23 != 0 && unk_0x3A0014ADB172A3C5(iVar23, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_16 = unk_0x3E5AE19425CD74BE(iVar23, iVar0);
				}
				if (iVar13 != 0 && unk_0x3A0014ADB172A3C5(iVar13, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_20 = unk_0x3E5AE19425CD74BE(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x3A0014ADB172A3C5(iVar14, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_21 = unk_0x3E5AE19425CD74BE(iVar14, iVar0);
				}
				if (iVar18 != 0 && unk_0x3A0014ADB172A3C5(iVar18, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_13 = unk_0x3E5AE19425CD74BE(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x3A0014ADB172A3C5(iVar19, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_14 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x3A0014ADB172A3C5(iVar20, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_15 = unk_0x3E5AE19425CD74BE(iVar20, iVar0);
				}
				if (iVar24 != 0 && unk_0x3A0014ADB172A3C5(iVar24, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_17 = unk_0x3E5AE19425CD74BE(iVar24, iVar0);
				}
				if (iVar25 != 0 && unk_0x3A0014ADB172A3C5(iVar25, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_18 = unk_0x3E5AE19425CD74BE(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x3A0014ADB172A3C5(iVar26, iVar0) == 2)
				{
					Global_1601761.f_55480[iVar0 /*39*/].f_19 = unk_0x3E5AE19425CD74BE(iVar26, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar27[iVar1] != 0 && unk_0x3A0014ADB172A3C5(uVar27[iVar1], iVar0) == 2)
					{
						Global_1601761.f_55480[iVar0 /*39*/].f_22[iVar1] = unk_0x3E5AE19425CD74BE(uVar27[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar21 != 0)
				{
					StringCopy(&(Global_1601761.f_55480[iVar0 /*39*/].f_27), unk_0xD3F2FFEB8D836F52(iVar21, iVar0), 24);
				}
				if (iVar22 != 0)
				{
					StringCopy(&(Global_1601761.f_55480[iVar0 /*39*/].f_33), unk_0xD3F2FFEB8D836F52(iVar22, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1601761.f_58465 - 1))
		{
			Global_1601761.f_55480[iVar0 /*39*/] = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_2 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_3 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_5 = { 0f, 0f, 0f };
			Global_1601761.f_55480[iVar0 /*39*/].f_8 = 3f;
			Global_1601761.f_55480[iVar0 /*39*/].f_4 = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_11 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_20 = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_12 = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_9 = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_10 = 0;
			Global_1601761.f_55480[iVar0 /*39*/].f_13 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_14 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_15 = 0;
			StringCopy(&(Global_1601761.f_55480[iVar0 /*39*/].f_27), "", 24);
			StringCopy(&(Global_1601761.f_55480[iVar0 /*39*/].f_33), "", 24);
			Global_1601761.f_55480[iVar0 /*39*/].f_16 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_17 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_18 = -1;
			Global_1601761.f_55480[iVar0 /*39*/].f_19 = 0;
			iVar0++;
		}
	}
	if (unk_0x031C55ED33227371(sParam0, "dtmp") == 2)
	{
		Global_1601761.f_58461[0] = unk_0x78F06F6B1FB5A80C(sParam0, "dtmp");
	}
	else
	{
		Global_1601761.f_58461[0] = 0;
	}
	if (unk_0x031C55ED33227371(sParam0, "dtmp2") == 2)
	{
		Global_1601761.f_58461[1] = unk_0x78F06F6B1FB5A80C(sParam0, "dtmp2");
	}
	else
	{
		Global_1601761.f_58461[1] = 0;
	}
	if (unk_0x031C55ED33227371(sParam0, "dtmp3") == 2)
	{
		Global_1601761.f_58461[2] = unk_0x78F06F6B1FB5A80C(sParam0, "dtmp3");
	}
	else
	{
		Global_1601761.f_58461[2] = 0;
	}
}

void func_140(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = 3f;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = -1;
	uParam0->f_14 = -1;
	uParam0->f_15 = 0;
	uParam0->f_16 = -1;
	uParam0->f_18 = -1;
	uParam0->f_17 = -1;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	StringCopy(&(uParam0->f_27), "", 24);
	StringCopy(&(uParam0->f_33), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_22[iVar0] = -1;
		iVar0++;
	}
	if (iParam1 != -1)
	{
		unk_0xE80492A9AC099A93(&(Global_1601761.f_58461[(iParam1 / 32)]), (iParam1 % 32));
	}
}

void func_141(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var* uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var* uVar12[3];
	int iVar16;
	char[] cVar17[8];
	
	iVar2 = unk_0xB6B9DDC412FCEEE2(sParam0, "race");
	Global_1601761.f_24821 = unk_0x78F06F6B1FB5A80C(iVar2, "chp");
	iVar3 = (Global_1601761.f_24821 - 1);
	Global_1601761.f_24822 = unk_0x78F06F6B1FB5A80C(iVar2, "lap");
	Global_1601761.f_24823 = unk_0x78F06F6B1FB5A80C(iVar2, "type");
	Global_1601761.f_24824 = unk_0x78F06F6B1FB5A80C(iVar2, "gtar");
	Global_1601761.f_24868 = unk_0x06610343E73B9727(iVar2, "head");
	Global_1601761.f_24869 = unk_0x06610343E73B9727(iVar2, "lrgs");
	Global_1601761.f_24870 = unk_0x06610343E73B9727(iVar2, "udgs");
	Global_1601761.f_24871 = unk_0x06610343E73B9727(iVar2, "gw");
	Global_1601761.f_24872 = unk_0x06610343E73B9727(iVar2, "gl");
	Global_1601761.f_24873 = unk_0x78F06F6B1FB5A80C(iVar2, "lanes");
	Global_1601761.f_21441 = { unk_0x46CD3CB66E0825CC(iVar2, "grid") };
	Global_1601761.f_24826 = unk_0x78F06F6B1FB5A80C(iVar2, "icv");
	Global_1601761.f_24828 = unk_0x78F06F6B1FB5A80C(iVar2, "tri1");
	Global_1601761.f_24829 = unk_0x78F06F6B1FB5A80C(iVar2, "tri2");
	Global_1601761.f_24830 = unk_0x78F06F6B1FB5A80C(iVar2, "clbs");
	Global_1601761.f_24867 = unk_0x78F06F6B1FB5A80C(iVar2, "ptp");
	Global_1601761.f_24865 = unk_0x78F06F6B1FB5A80C(iVar2, "strtg");
	Global_1601761.f_24866 = unk_0x78F06F6B1FB5A80C(iVar2, "rcdam");
	Global_1601761.f_22640 = unk_0x06610343E73B9727(iVar2, "rdis");
	Global_1601761.f_24863 = unk_0x78F06F6B1FB5A80C(iVar2, "gridty");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar2, "chh");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar2, "chs");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar2, "chl");
	uVar7 = unk_0x7A983AA9DA2659ED(iVar2, "rsp");
	if (Global_1601761.f_24823 == 8)
	{
		Global_1601761.f_24821 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_80(unk_0x8D2064E5B64A628A(iVar6, iVar0)))
			{
				Global_1601761.f_24821++;
			}
			iVar0++;
		}
		iVar3 = Global_1601761.f_24821;
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1601761.f_24823 == 8)
			{
				iVar8 = func_142(iVar6, iVar8);
			}
			else
			{
				iVar8 = iVar0;
			}
			Global_1601761.f_22145[iVar0 /*3*/] = { unk_0x8D2064E5B64A628A(iVar6, iVar8) };
			Global_1601761.f_22427[iVar0] = unk_0xC0C527B525D7CFB5(iVar4, iVar8);
			if (unk_0x3A0014ADB172A3C5(iVar5, iVar8) == 3)
			{
				Global_1601761.f_22569[iVar0] = unk_0xC0C527B525D7CFB5(iVar5, iVar8);
			}
			else
			{
				Global_1601761.f_22569[iVar0] = 1f;
			}
			if (Global_1601761.f_22569[iVar0] < 1f)
			{
				Global_1601761.f_22569[iVar0] = 1f;
			}
			Global_1601761.f_22356[iVar0] = unk_0x50C1B2874E50C114(uVar7, iVar8);
			iVar8++;
		}
		iVar0++;
	}
	iVar9 = unk_0x7A983AA9DA2659ED(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_13 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
			Global_1601761.f_24876[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar10 = unk_0x7A983AA9DA2659ED(iVar2, "aveh");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
		Global_1601761.f_24831[iVar0] = iVar1;
		Global_1601761.f_24847[iVar0] = 0;
		Global_1601761.f_24847[iVar0] = unk_0x3E5AE19425CD74BE(iVar11, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar17, "vspn", 8);
		StringIntConCat(&cVar17, iVar0, 8);
		uVar12[iVar0] = unk_0x7A983AA9DA2659ED(iVar2, &cVar17);
		iVar16 = 0;
		while (iVar16 <= iVar3)
		{
			Global_1601761.f_21444[iVar16 /*10*/][iVar0 /*3*/] = { unk_0x8D2064E5B64A628A(uVar12[iVar0], iVar16) };
			iVar16++;
		}
		iVar0++;
	}
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_80(unk_0x8D2064E5B64A628A(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0xB6B9DDC412FCEEE2(sParam0, "dhprop");
	Global_1601761.f_68080 = unk_0x78F06F6B1FB5A80C(iVar1, "no");
	iVar2 = unk_0x7A983AA9DA2659ED(iVar1, "pos");
	iVar3 = unk_0x7A983AA9DA2659ED(iVar1, "mn");
	if (Global_1601761.f_68080 > 25)
	{
		Global_1601761.f_68080 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_68080 - 1))
	{
		if (unk_0x3A0014ADB172A3C5(iVar2, iVar0) == 5)
		{
			Global_1601761.f_67979[iVar0 /*4*/] = { unk_0x8D2064E5B64A628A(iVar2, iVar0) };
			Global_1601761.f_67979[iVar0 /*4*/].f_3 = unk_0x3E5AE19425CD74BE(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_144(char* sParam0)
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
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0xB6B9DDC412FCEEE2(sParam0, "ddblip");
	Global_1601761.f_67978 = unk_0x78F06F6B1FB5A80C(iVar1, "no");
	iVar2 = unk_0x7A983AA9DA2659ED(iVar1, "pos");
	iVar3 = unk_0x7A983AA9DA2659ED(iVar1, "rule");
	iVar4 = unk_0x7A983AA9DA2659ED(iVar1, "team");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar1, "type");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar1, "size");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar1, "veh");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar1, "clr");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar1, "bits");
	if (Global_1601761.f_67978 > 10)
	{
		Global_1601761.f_67978 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_67978 - 1))
	{
		if (unk_0x3A0014ADB172A3C5(iVar2, iVar0) == 5)
		{
			Global_1601761.f_67877[iVar0 /*10*/] = { unk_0x8D2064E5B64A628A(iVar2, iVar0) };
			Global_1601761.f_67877[iVar0 /*10*/].f_3 = unk_0x3E5AE19425CD74BE(iVar3, iVar0);
			Global_1601761.f_67877[iVar0 /*10*/].f_4 = unk_0x3E5AE19425CD74BE(iVar4, iVar0);
			Global_1601761.f_67877[iVar0 /*10*/].f_8 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
			Global_1601761.f_67877[iVar0 /*10*/].f_9 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		}
		if (unk_0x3A0014ADB172A3C5(iVar5, iVar0) == 2)
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_6 = unk_0x3E5AE19425CD74BE(iVar5, iVar0);
		}
		else
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 2)
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_5 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		}
		else
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x3A0014ADB172A3C5(iVar7, iVar0) == 2)
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_7 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		}
		else
		{
			Global_1601761.f_67877[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_145(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var* uVar14[5];
	var* uVar20[5];
	var* uVar26[5];
	var* uVar32[5];
	var* uVar38[5];
	var* uVar44[5];
	var* uVar50[5];
	var* uVar56[5];
	int iVar62;
	var* uVar63[5];
	var* uVar69[5];
	var* uVar75[5];
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0xB6B9DDC412FCEEE2(sParam0, "mocap");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar5, "name");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar5, "bits");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar5, "bits2");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar5, "timer");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar5, "rng");
	iVar11 = unk_0x7A983AA9DA2659ED(iVar5, "ccp");
	iVar12 = unk_0x7A983AA9DA2659ED(iVar5, "ccr");
	iVar13 = unk_0x7A983AA9DA2659ED(iVar5, "ccs");
	iVar62 = unk_0x7A983AA9DA2659ED(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1601761.f_64918[iVar0 /*434*/]), unk_0xD3F2FFEB8D836F52(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_64918[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x3A0014ADB172A3C5(iVar7, iVar0) == 2)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_16 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar8, iVar0) == 2)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_17 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar62, iVar0) == 2)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_424 = unk_0x3E5AE19425CD74BE(iVar62, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar9, iVar0) == 2)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_61 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 2)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_62 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar11, iVar0) == 5)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_54 = { unk_0x8D2064E5B64A628A(iVar11, iVar0) };
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x3A0014ADB172A3C5(iVar12, iVar0) == 3)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_60 = unk_0xC0C527B525D7CFB5(iVar12, iVar0);
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar13, iVar0) == 5)
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_57 = { unk_0x8D2064E5B64A628A(iVar13, iVar0) };
		}
		else
		{
			Global_1601761.f_64918[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x7A983AA9DA2659ED(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x3A0014ADB172A3C5(uVar14[iVar0], iVar1) == 5)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar20[iVar0], iVar1) == 5)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar26[iVar0], iVar1) == 3)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_44[iVar1] = unk_0xC0C527B525D7CFB5(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar32[iVar0], iVar1) == 3)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_49[iVar1] = unk_0xC0C527B525D7CFB5(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x3A0014ADB172A3C5(uVar63[iVar0], iVar2) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_425[iVar2] = unk_0x3E5AE19425CD74BE(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x3A0014ADB172A3C5(uVar69[iVar0], iVar2) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_430[iVar2] = unk_0x3E5AE19425CD74BE(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar75[iVar0], iVar2) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_432[iVar2] = unk_0x3E5AE19425CD74BE(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x3A0014ADB172A3C5(uVar38[iVar0], iVar1) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x3E5AE19425CD74BE(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x3A0014ADB172A3C5(uVar44[iVar0], iVar1) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x3E5AE19425CD74BE(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x3A0014ADB172A3C5(uVar50[iVar0], iVar1) == 2)
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x3E5AE19425CD74BE(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xD3F2FFEB8D836F52(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1601761.f_64918[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_146(char* sParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var* uVar11[5];
	var* uVar17[5];
	var* uVar23[5];
	var* uVar29[5];
	var* uVar35[5];
	var* uVar41[5];
	var* uVar47[5];
	var* uVar53[5];
	var* uVar59[5];
	var* uVar65[5];
	var* uVar71[5];
	var* uVar77[5];
	var* uVar83[5];
	var* uVar89[5];
	var* uVar95[5];
	var* uVar101[5];
	var* uVar107[5];
	var* uVar113[5];
	var* uVar119[5];
	var* uVar125[5];
	var* uVar131[5];
	var* uVar137[5];
	var* uVar143[5];
	var* uVar149[5];
	var* uVar155[5];
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0xB6B9DDC412FCEEE2(sParam0, "cuts");
	iVar5 = unk_0x7A983AA9DA2659ED(iVar4, "name");
	iVar6 = unk_0x7A983AA9DA2659ED(iVar4, "bits");
	iVar7 = unk_0x7A983AA9DA2659ED(iVar4, "shot");
	iVar8 = unk_0x7A983AA9DA2659ED(iVar4, "anim");
	iVar9 = unk_0x7A983AA9DA2659ED(iVar4, "midp");
	iVar10 = unk_0x7A983AA9DA2659ED(iVar4, "rng");
	iVar161 = unk_0x7A983AA9DA2659ED(iVar4, "train");
	iVar162 = unk_0x7A983AA9DA2659ED(iVar4, "trahl");
	iVar163 = unk_0x7A983AA9DA2659ED(iVar4, "traou");
	iVar164 = unk_0x7A983AA9DA2659ED(iVar4, "trapo");
	iVar165 = unk_0x7A983AA9DA2659ED(iVar4, "ccp");
	iVar166 = unk_0x7A983AA9DA2659ED(iVar4, "ccr");
	iVar167 = unk_0x7A983AA9DA2659ED(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x3A0014ADB172A3C5(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/]), unk_0xD3F2FFEB8D836F52(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_4 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_5 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar7, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_43 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar8, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_42 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar9, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_44 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar10, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_735 = unk_0x3E5AE19425CD74BE(iVar10, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar165, iVar0) == 5)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_728 = { unk_0x8D2064E5B64A628A(iVar165, iVar0) };
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0x3A0014ADB172A3C5(iVar166, iVar0) == 3)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_731 = unk_0xC0C527B525D7CFB5(iVar166, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar167, iVar0) == 5)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_732 = { unk_0x8D2064E5B64A628A(iVar167, iVar0) };
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0x3A0014ADB172A3C5(iVar161, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_436 = unk_0x3E5AE19425CD74BE(iVar161, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar162, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_438 = unk_0x3E5AE19425CD74BE(iVar162, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar163, iVar0) == 2)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_437 = unk_0x3E5AE19425CD74BE(iVar163, iVar0);
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar164, iVar0) == 5)
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_439 = { unk_0x8D2064E5B64A628A(iVar164, iVar0) };
		}
		else
		{
			Global_1601761.f_58572[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x7A983AA9DA2659ED(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x3A0014ADB172A3C5(uVar95[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar101[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar89[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_32[iVar1] = unk_0xC0C527B525D7CFB5(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar107[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_37[iVar1] = unk_0xC0C527B525D7CFB5(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x3A0014ADB172A3C5(uVar11[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_45[iVar1] = unk_0x3E5AE19425CD74BE(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar17[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_66[iVar1] = unk_0x3E5AE19425CD74BE(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar23[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar29[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar35[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar41[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar47[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_331[iVar1] = unk_0xC0C527B525D7CFB5(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar53[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_352[iVar1] = unk_0xC0C527B525D7CFB5(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar71[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_373[iVar1] = unk_0x3E5AE19425CD74BE(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar77[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_394[iVar1] = unk_0x3E5AE19425CD74BE(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar83[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_415[iVar1] = unk_0xC0C527B525D7CFB5(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar113[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_524[iVar1] = unk_0x3E5AE19425CD74BE(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0x3A0014ADB172A3C5(uVar119[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar125[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar131[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar131[iVar0], iVar1) };
				Global_1601761.f_68122[iVar1] = Global_1601761.f_58572[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1601761.f_68143[iVar1] = Global_1601761.f_58572[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1601761.f_68164[iVar1] = Global_1601761.f_58572[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar137[iVar0], iVar1) == 5)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0x8D2064E5B64A628A(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x3A0014ADB172A3C5(uVar143[iVar0], iVar1) == 3)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_503[iVar1] = unk_0xC0C527B525D7CFB5(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0x3A0014ADB172A3C5(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0xD3F2FFEB8D836F52(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x3A0014ADB172A3C5(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0xD3F2FFEB8D836F52(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1601761.f_58572[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x3A0014ADB172A3C5(uVar59[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0x3E5AE19425CD74BE(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x3A0014ADB172A3C5(uVar65[iVar0], iVar1) == 2)
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0x3E5AE19425CD74BE(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1601761.f_58572[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_147(char* sParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xB6B9DDC412FCEEE2(sParam0, "eoir") == 0 || unk_0xB6B9DDC412FCEEE2(sParam0, "eoep") == 0)
	{
		return;
	}
	iVar7 = unk_0x7A983AA9DA2659ED(sParam0, "eoid");
	iVar8 = unk_0x7A983AA9DA2659ED(sParam0, "eoet");
	iVar9 = unk_0xB6B9DDC412FCEEE2(sParam0, "eoir");
	iVar10 = unk_0xB6B9DDC412FCEEE2(sParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x3A0014ADB172A3C5(iVar7, iVar0) == 2)
		{
			Global_1601761.f_52894[iVar0] = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
		}
		else
		{
			Global_1601761.f_52894[iVar0] = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar8, iVar0) == 2)
		{
			Global_1601761.f_52863[iVar0] = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
		}
		else
		{
			Global_1601761.f_52863[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar3, "eor", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar2, 16);
				if (unk_0x031C55ED33227371(iVar9, &cVar3) == 2)
				{
					Global_1601761.f_52925[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0x78F06F6B1FB5A80C(iVar9, &cVar3);
				}
				else
				{
					Global_1601761.f_52925[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar3, "eop", 16);
				StringIntConCat(&cVar3, iVar0, 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar2, 16);
				if (unk_0x031C55ED33227371(iVar10, &cVar3) == 2)
				{
					Global_1601761.f_53706[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0x78F06F6B1FB5A80C(iVar10, &cVar3);
				}
				else
				{
					Global_1601761.f_52925[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_148(char* sParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var* uVar8[4];
	var* uVar13[4];
	var* uVar18[4];
	var* uVar23[4];
	var* uVar28[4];
	
	sVar4 = unk_0xB6B9DDC412FCEEE2(sParam0, "kill");
	iVar5 = unk_0x7A983AA9DA2659ED(sVar4, "no");
	iVar6 = unk_0x7A983AA9DA2659ED(sVar4, "mcp");
	iVar7 = unk_0x7A983AA9DA2659ED(sVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1601761.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1601761.f_24810[iVar1] = unk_0x3E5AE19425CD74BE(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1601761.f_24810[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1601761.f_24316[iVar0 /*29*/][iVar1] = unk_0x3E5AE19425CD74BE(uVar8[iVar1], iVar0);
					Global_1601761.f_24316[iVar0 /*29*/].f_5[iVar1] = unk_0x3E5AE19425CD74BE(uVar13[iVar1], iVar0);
					if (Global_1601761.f_24316[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1601761.f_24316[iVar0 /*29*/].f_10[iVar1] = unk_0x3E5AE19425CD74BE(uVar18[iVar1], iVar0);
					if (unk_0x3A0014ADB172A3C5(uVar23[iVar1], iVar0) == 2)
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_15[iVar1] = unk_0x3E5AE19425CD74BE(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(uVar28[iVar1], iVar0) == 2)
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_20[iVar1] = unk_0x3E5AE19425CD74BE(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(iVar6, iVar0) == 2)
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_28 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
					}
					else
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x3A0014ADB172A3C5(iVar7, iVar0) == 2)
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_27 = unk_0x3E5AE19425CD74BE(iVar7, iVar0);
					}
					else
					{
						Global_1601761.f_24316[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_149(char* sParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	char* sVar4;
	var* uVar5[4];
	var* uVar10[4];
	var* uVar15[4];
	var* uVar20[4];
	var* uVar25[4];
	var* uVar30[4];
	var* uVar35[4];
	var* uVar40[4];
	var* uVar45[4];
	var* uVar50[4];
	var* uVar55[4];
	var* uVar60[4];
	var* uVar65[4];
	var* uVar70[4];
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	
	sVar4 = unk_0xB6B9DDC412FCEEE2(sParam0, "goto");
	Global_1601761.f_24816[0] = unk_0x78F06F6B1FB5A80C(sVar4, "no");
	Global_1601761.f_4 = unk_0x78F06F6B1FB5A80C(sVar4, "atrig");
	iVar75 = unk_0x7A983AA9DA2659ED(sVar4, "lmcp");
	iVar76 = unk_0x7A983AA9DA2659ED(sVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1601761.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x7A983AA9DA2659ED(sVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1601761.f_24816[0] - 1))
			{
				if (iVar0 < 16)
				{
					Global_1601761.f_22641[iVar0 /*93*/].f_1[0 /*3*/] = { unk_0x8D2064E5B64A628A(uVar5[iVar1], iVar0) };
					Global_1601761.f_22641[iVar0 /*93*/].f_14[0] = unk_0xC0C527B525D7CFB5(uVar10[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_57[iVar1] = unk_0x3E5AE19425CD74BE(uVar15[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_62[iVar1] = unk_0x3E5AE19425CD74BE(uVar20[iVar1], iVar0);
					if (Global_1601761.f_22641[iVar0 /*93*/].f_62[iVar1] == -1)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_62[iVar1] = 99999;
					}
					Global_1601761.f_22641[iVar0 /*93*/].f_67[iVar1] = unk_0x3E5AE19425CD74BE(uVar25[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_46[iVar1] = unk_0xC0C527B525D7CFB5(uVar55[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_72[iVar1] = unk_0x3E5AE19425CD74BE(uVar30[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_35[iVar1] = unk_0x3E5AE19425CD74BE(uVar35[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_51 = unk_0x3E5AE19425CD74BE(uVar50[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_30[0] = unk_0x3E5AE19425CD74BE(uVar40[iVar1], iVar0);
					Global_1601761.f_22641[iVar0 /*93*/].f_40[0] = unk_0x3E5AE19425CD74BE(uVar45[iVar1], iVar0);
					if (unk_0x3A0014ADB172A3C5(iVar75, iVar0) == 2)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_89 = unk_0x3E5AE19425CD74BE(iVar75, iVar0);
					}
					else
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_89 = -1;
					}
					if (unk_0x3A0014ADB172A3C5(iVar76, iVar0) == 2)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_90 = unk_0x3E5AE19425CD74BE(iVar76, iVar0);
					}
					else
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_90 = -1;
					}
					if (unk_0x3A0014ADB172A3C5(uVar60[iVar1], iVar0) == 2)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_52[iVar1] = unk_0x3E5AE19425CD74BE(uVar60[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_52[iVar1] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(uVar65[iVar1], iVar0) == 2)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_77[iVar1] = unk_0x3E5AE19425CD74BE(uVar65[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_77[iVar1] = 0;
					}
					if (unk_0x3A0014ADB172A3C5(uVar70[iVar1], iVar0) == 2)
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_82[iVar1] = unk_0x3E5AE19425CD74BE(uVar70[iVar1], iVar0);
					}
					else
					{
						Global_1601761.f_22641[iVar0 /*93*/].f_82[iVar1] = 0;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar77 = unk_0x7A983AA9DA2659ED(sVar4, "locbc");
	iVar78 = unk_0x7A983AA9DA2659ED(sVar4, "loc2rd");
	iVar79 = unk_0x7A983AA9DA2659ED(sVar4, "locdir");
	iVar80 = unk_0x7A983AA9DA2659ED(sVar4, "loctol");
	iVar81 = unk_0x7A983AA9DA2659ED(sVar4, "lochgt");
	iVar82 = unk_0x7A983AA9DA2659ED(sVar4, "locart");
	iVar83 = unk_0x7A983AA9DA2659ED(sVar4, "locaa1");
	iVar84 = unk_0x7A983AA9DA2659ED(sVar4, "locaa2");
	iVar85 = unk_0x7A983AA9DA2659ED(sVar4, "locaaw");
	iVar86 = unk_0x7A983AA9DA2659ED(sVar4, "nmpass");
	iVar87 = unk_0x7A983AA9DA2659ED(sVar4, "nmfail");
	iVar88 = unk_0x7A983AA9DA2659ED(sVar4, "locstd");
	iVar89 = unk_0x7A983AA9DA2659ED(sVar4, "locstm");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_24816[0] - 1))
	{
		if (unk_0x3A0014ADB172A3C5(iVar77, iVar0) == 2)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_45 = unk_0x3E5AE19425CD74BE(iVar77, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_45 = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar78, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_19 = unk_0xC0C527B525D7CFB5(iVar78, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_19 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar79, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_27 = unk_0xC0C527B525D7CFB5(iVar79, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_27 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar80, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_28 = unk_0xC0C527B525D7CFB5(iVar80, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_28 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar81, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_29 = unk_0xC0C527B525D7CFB5(iVar81, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_29 = 0f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar82, iVar0) == 2)
		{
			Global_1601761.f_22641[iVar0 /*93*/] = unk_0x3E5AE19425CD74BE(iVar82, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/] = 0;
		}
		if (unk_0x3A0014ADB172A3C5(iVar86, iVar0) == 2)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_87 = unk_0x3E5AE19425CD74BE(iVar86, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_87 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar87, iVar0) == 2)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_88 = unk_0x3E5AE19425CD74BE(iVar87, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_88 = -1;
		}
		if (unk_0x3A0014ADB172A3C5(iVar88, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_92 = unk_0xC0C527B525D7CFB5(iVar88, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_92 = 10.5f;
		}
		if (unk_0x3A0014ADB172A3C5(iVar89, iVar0) == 2)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_91 = unk_0x3E5AE19425CD74BE(iVar89, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_91 = 0;
		}
		if ((unk_0x3A0014ADB172A3C5(iVar83, iVar0) == 5 && unk_0x3A0014ADB172A3C5(iVar84, iVar0) == 5) && unk_0x3A0014ADB172A3C5(iVar85, iVar0) == 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_20 = { unk_0x8D2064E5B64A628A(iVar83, iVar0) };
			Global_1601761.f_22641[iVar0 /*93*/].f_23 = { unk_0x8D2064E5B64A628A(iVar84, iVar0) };
			Global_1601761.f_22641[iVar0 /*93*/].f_26 = unk_0xC0C527B525D7CFB5(iVar85, iVar0);
		}
		else
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_20 = { 0f, 0f, 0f };
			Global_1601761.f_22641[iVar0 /*93*/].f_23 = { 0f, 0f, 0f };
			Global_1601761.f_22641[iVar0 /*93*/].f_26 = 1f;
		}
		iVar0++;
	}
}

void func_150(char* sParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x031C55ED33227371(sParam0, "cover") == 6)
	{
		sVar1 = unk_0xB6B9DDC412FCEEE2(sParam0, "cover");
		Global_1601761.f_26976 = unk_0x78F06F6B1FB5A80C(sVar1, "no");
		iVar2 = unk_0x7A983AA9DA2659ED(sVar1, "loc");
		iVar3 = unk_0x7A983AA9DA2659ED(sVar1, "dir");
		iVar4 = unk_0x7A983AA9DA2659ED(sVar1, "use");
		iVar5 = unk_0x7A983AA9DA2659ED(sVar1, "high");
		iVar6 = unk_0x7A983AA9DA2659ED(sVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1601761.f_26976 - 1))
		{
			Global_1601761.f_26977[iVar0 /*7*/] = { unk_0x8D2064E5B64A628A(iVar2, iVar0) };
			Global_1601761.f_26977[iVar0 /*7*/].f_3 = unk_0xC0C527B525D7CFB5(iVar3, iVar0);
			Global_1601761.f_26977[iVar0 /*7*/].f_4 = unk_0x3E5AE19425CD74BE(iVar4, iVar0);
			Global_1601761.f_26977[iVar0 /*7*/].f_5 = unk_0x3E5AE19425CD74BE(iVar5, iVar0);
			Global_1601761.f_26977[iVar0 /*7*/].f_6 = unk_0x3E5AE19425CD74BE(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_151(char* sParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var* uVar6;
	var* uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var* uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var* uVar16;
	int iVar17;
	var* uVar18;
	int iVar19;
	
	sVar2 = unk_0xB6B9DDC412FCEEE2(sParam0, "door");
	Global_1601761.f_26689 = unk_0x78F06F6B1FB5A80C(sVar2, "no");
	iVar3 = unk_0x7A983AA9DA2659ED(sVar2, "loc");
	iVar4 = unk_0x7A983AA9DA2659ED(sVar2, "fopen");
	iVar5 = unk_0x7A983AA9DA2659ED(sVar2, "model");
	uVar6 = unk_0x7A983AA9DA2659ED(sVar2, "lock");
	uVar7 = unk_0x7A983AA9DA2659ED(sVar2, "swing");
	iVar8 = unk_0x7A983AA9DA2659ED(sVar2, "udrle");
	iVar9 = unk_0x7A983AA9DA2659ED(sVar2, "udtem");
	iVar10 = unk_0x7A983AA9DA2659ED(sVar2, "udrat");
	uVar11 = unk_0x7A983AA9DA2659ED(sVar2, "swingu");
	iVar12 = unk_0x7A983AA9DA2659ED(sVar2, "audst");
	iVar13 = unk_0x7A983AA9DA2659ED(sVar2, "aurt");
	iVar14 = unk_0x7A983AA9DA2659ED(sVar2, "uaudst");
	iVar15 = unk_0x7A983AA9DA2659ED(sVar2, "uaurt");
	uVar16 = unk_0x7A983AA9DA2659ED(sVar2, "lfp");
	iVar17 = unk_0x7A983AA9DA2659ED(sVar2, "dtime");
	uVar18 = unk_0x7A983AA9DA2659ED(sVar2, "mid");
	iVar19 = unk_0x7A983AA9DA2659ED(sVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1601761.f_26689 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1601761.f_26690[iVar0 /*19*/] = { unk_0x8D2064E5B64A628A(iVar3, iVar0) };
			Global_1601761.f_26690[iVar0 /*19*/].f_3 = unk_0xC0C527B525D7CFB5(iVar4, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_14 = unk_0x50C1B2874E50C114(uVar6, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_15 = unk_0x50C1B2874E50C114(uVar7, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_5 = unk_0x3E5AE19425CD74BE(iVar8, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_6 = unk_0x3E5AE19425CD74BE(iVar9, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_13 = unk_0xC0C527B525D7CFB5(iVar10, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_16 = unk_0x50C1B2874E50C114(uVar11, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_8 = unk_0xC0C527B525D7CFB5(iVar13, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_9 = unk_0xC0C527B525D7CFB5(iVar12, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_10 = unk_0xC0C527B525D7CFB5(iVar15, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_11 = unk_0xC0C527B525D7CFB5(iVar14, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_12 = unk_0x50C1B2874E50C114(uVar16, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_18 = unk_0x3E5AE19425CD74BE(iVar19, iVar0);
			iVar1 = unk_0x3E5AE19425CD74BE(iVar5, iVar0);
			Global_1601761.f_26690[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x3A0014ADB172A3C5(iVar17, iVar0) == 2)
			{
				Global_1601761.f_26690[iVar0 /*19*/].f_7 = unk_0x3E5AE19425CD74BE(iVar17, iVar0);
			}
			else
			{
				Global_1601761.f_26690[iVar0 /*19*/].f_7 = 0;
			}
			Global_1601761.f_26690[iVar0 /*19*/].f_17 = unk_0x50C1B2874E50C114(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_152(char* sParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var* uVar14[4];
	var* uVar19[4];
	var* uVar24[4];
	var* uVar29[4];
	var* uVar34[4];
	var* uVar39[4];
	var* uVar44[4];
	var* uVar49[4];
	var* uVar54[4];
	var* uVar59[4];
	var* uVar64[4];
	var* uVar69[4];
	var* uVar74[4];
	var* uVar79[4];
	var* uVar84[4];
	var* uVar89[4];
	var* uVar94[4];
	var* uVar99[4];
	var* uVar104[4];
	var* uVar109[4];
	var* uVar114[4];
	var* uVar119[4];
	var* uVar124[4];
	var* uVar129[4];
	var* uVar134[4];
	var* uVar139[4];
	var* uVar144[4];
	var* uVar149[4];
	var* uVar154[4];
	var* uVar159[4];
	var* uVar164[4];
	var* uVar169[4];
	var* uVar174[4];
	var* uVar179[4];
	var* uVar184[4];
	var* uVar189[4];
	var* uVar194[4];
	var* uVar199[4];
	var* uVar204[4];
	var* uVar209[4];
	var* uVar214[4];
	var* uVar219[4];
	var* uVar224[4];
	var* uVar229[4];
	var* uVar234[4];
	var* uVar239[4];
	var* uVar244[4];
	var* uVar249[4];
	var* uVar254[4];
	var* uVar259[4];
	var* uVar264[4];
	var* uVar269[4];
	var* uVar274[4];
	var* uVar279[4];
	var* uVar284[4];
	var* uVar289[4];
	var* uVar294[4];
	var* uVar299[4];
	var* uVar304[4];
	var* uVar309[4];
	var* uVar314[4];
	var* uVar319[4];
	var* uVar324[4];
	var* uVar329[4];
	var* uVar334[4];
	var* uVar339[4];
	var* uVar344[4];
	var* uVar349[4];
	var* uVar354[4];
	var* uVar359[4];
	var* uVar364[4];
	var* uVar369[4];
	var* uVar374[4];
	var* uVar379[4];
	var* uVar384[4];
	var* uVar389[4];
	var* uVar394[4];
	var* uVar399[4];
	var* uVar404[4];
	var* uVar409[4];
	var* uVar414[4];
	var* uVar419[4];
	var* uVar424[4];
	var* uVar429[4];
	var* uVar434[4];
	var* uVar439[4];
	var* uVar444[4];
	var* uVar449[4];
	var* uVar454[4];
	var* uVar459[4];
	var* uVar464[4];
	var* uVar469[4];
	var* uVar474[4];
	var* uVar479[4];
	var* uVar484[4];
	var* uVar489[4];
	var* uVar494[4];
	var* uVar499[4];
	var* uVar504[4];
	var* uVar509[4];
	var* uVar514[4];
	var* uVar519[4];
	var* uVar524[4];
	var* uVar529[4];
	var* uVar534[4];
	var* uVar539[4];
	var* uVar544[4];
	var* uVar549[4];
	var* uVar554[4];
	var* uVar559[4];
	var* uVar564[4];
	var* uVar569[4];
	var* uVar574[4];
	var* uVar579[4];
	var* uVar584[4];
	var* uVar589[4];
	var* uVar594[4];
	var* uVar599[4];
	var* uVar604[4];
	var* uVar609[4];
	var* uVar614[4];
	var* uVar619[4];
	int iVar624;
	int iVar625;
	int iVar626;
	int iVar627;
	
	sVar0 = unk_0xB6B9DDC412FCEEE2(*sParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_1601761.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar14[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar19[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar24[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar29[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar34[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar584[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar589[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar594[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar599[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar604[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar609[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar614[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar39[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar44[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar49[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar54[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar59[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar69[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar64[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar74[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar79[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "swptm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "swpop", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar619[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar7 = true;
				uVar224[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar229[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar234[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar239[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar244[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar249[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar254[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x031C55ED33227371(sVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar259[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			}
			StringCopy(&cVar3, "gbnum", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar269[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbngn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar274[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gblgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbcol", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mcstr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar294[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mcmp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar309[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "aumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar299[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mpaumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar304[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbmax", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbngm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gblgm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar324[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbvhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar329[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbaie", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar264[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gacc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar334[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gfld", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar339[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbat", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar344[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar349[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar354[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "gbaw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar359[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar364[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar369[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar374[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "txt5", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar379[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "fail", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar384[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bfm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar399[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "wwm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar389[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "vss", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar394[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "tsc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar404[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "mcry", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar409[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar414[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar419[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "destv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar424[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar429[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar434[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar499[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar504[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar509[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar514[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar519[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar524[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar529[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar534[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar539[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar544[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar549[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar439[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar444[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar464[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar449[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar454[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar459[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar469[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar474[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar479[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar484[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar489[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar494[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar554[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar559[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar564[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar569[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar579[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar574[iVar1] = unk_0x7A983AA9DA2659ED(sVar0, &cVar3);
			iVar624 = unk_0x7A983AA9DA2659ED(sVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1601761.f_72[iVar1 /*5254*/].f_38 - 1))
			{
				if (uVar14[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_205[iVar2] = unk_0x3E5AE19425CD74BE(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_205[iVar2] = 0;
				}
				if (uVar19[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1627[iVar2] = unk_0x3E5AE19425CD74BE(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1627[iVar2] = 0;
				}
				if (uVar29[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1699[iVar2] = unk_0x3E5AE19425CD74BE(uVar29[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1699[iVar2] = 0;
				}
				if (uVar34[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1717[iVar2] = unk_0x3E5AE19425CD74BE(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1717[iVar2] = 0;
				}
				if (uVar24[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_2594[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar24[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_2594[iVar2 /*16*/]), "", 64);
				}
				if (uVar39[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_149[iVar2] = unk_0x3E5AE19425CD74BE(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_149[iVar2] = 0;
				}
				if (uVar44[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_167[iVar2] = unk_0x3E5AE19425CD74BE(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_167[iVar2] = 0;
				}
				if (uVar584[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5074[iVar2] = unk_0x3E5AE19425CD74BE(uVar584[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5074[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar589[iVar1], iVar2) == 2 && Global_1601761.f_1 != 6)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5092[iVar2] = unk_0x3E5AE19425CD74BE(uVar589[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5092[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar594[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5110[iVar2] = unk_0x3E5AE19425CD74BE(uVar594[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5110[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar599[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5128[iVar2] = unk_0x3E5AE19425CD74BE(uVar599[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5128[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar604[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5182[iVar2] = unk_0x3E5AE19425CD74BE(uVar604[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5182[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar609[iVar1], iVar2) == 2)
				{
					iVar625 = unk_0x3E5AE19425CD74BE(uVar609[iVar1], iVar2);
					if (iVar625 > 0)
					{
						Global_1601761.f_72[iVar1 /*5254*/].f_5146[iVar2] = iVar625;
					}
					else
					{
						Global_1601761.f_72[iVar1 /*5254*/].f_5146[iVar2] = 0;
					}
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5146[iVar2] = 0;
				}
				if (uVar614[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5164[iVar2] = unk_0x3E5AE19425CD74BE(uVar614[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5164[iVar2] = 0;
				}
				if (Global_1601761.f_72[iVar1 /*5254*/].f_167[iVar2] == 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_167[iVar2] = -1;
				}
				if (uVar49[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_187[iVar2] = unk_0x3E5AE19425CD74BE(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_187[iVar2] = 0;
				}
				if (uVar69[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1753[iVar2] = unk_0x3E5AE19425CD74BE(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1753[iVar2] = 0;
				}
				if (uVar64[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1735[iVar2] = unk_0x3E5AE19425CD74BE(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1735[iVar2] = 0;
				}
				if (uVar74[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1775[iVar2] = unk_0x3E5AE19425CD74BE(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1775[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar79[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1795[iVar2] = unk_0x3E5AE19425CD74BE(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1795[iVar2] = 10000;
				}
				if (unk_0x3A0014ADB172A3C5(uVar84[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1831[iVar2] = unk_0x3E5AE19425CD74BE(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1831[iVar2] = -1;
				}
				if (uVar54[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_223[iVar2] = unk_0x3E5AE19425CD74BE(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_223[iVar2] = 0;
				}
				if (uVar59[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_241[iVar2] = unk_0x3E5AE19425CD74BE(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_241[iVar2] = 0;
				}
				if (uVar134[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_295[iVar2] = unk_0x3E5AE19425CD74BE(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_295[iVar2] = 0;
				}
				if (uVar89[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_259[iVar2] = unk_0x3E5AE19425CD74BE(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_259[iVar2] = 0;
				}
				if (uVar94[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_277[iVar2] = unk_0x3E5AE19425CD74BE(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_277[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar104[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1813[iVar2] = unk_0x3E5AE19425CD74BE(uVar104[iVar1], iVar2);
				}
				else if (unk_0x3A0014ADB172A3C5(iVar624, iVar1) == 2 && iVar624 != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1813[iVar2] = unk_0x3E5AE19425CD74BE(iVar624, iVar1);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1813[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar99[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_331[iVar2] = unk_0x3E5AE19425CD74BE(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_331[iVar2] = -1;
				}
				if (uVar109[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_313[iVar2] = unk_0x3E5AE19425CD74BE(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_313[iVar2] = 0;
				}
				if (uVar114[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_349[iVar2] = unk_0x3E5AE19425CD74BE(uVar114[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_349[iVar2] = 0;
				}
				if (uVar119[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5020[iVar2] = unk_0x3E5AE19425CD74BE(uVar119[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5020[iVar2] = 0;
				}
				if (uVar124[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5038[iVar2] = unk_0x3E5AE19425CD74BE(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5038[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar129[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5056[iVar2] = unk_0x3E5AE19425CD74BE(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5056[iVar2] = 0;
				}
				if (uVar139[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2224[iVar2 /*3*/] = { unk_0x8D2064E5B64A628A(uVar139[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2224[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_128())
				{
					if (uVar144[iVar1] != 0)
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_2867[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar144[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_2867[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar149[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2276[iVar2 /*3*/] = { unk_0x8D2064E5B64A628A(uVar149[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2276[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar154[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2346[iVar2] = unk_0x3E5AE19425CD74BE(uVar154[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2346[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar159[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2382[iVar2] = unk_0x3E5AE19425CD74BE(uVar159[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2382[iVar2] = 0;
				}
				if (uVar204[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1849[iVar2] = unk_0x3E5AE19425CD74BE(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1849[iVar2] = 0;
				}
				if (uVar199[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2328[iVar2] = unk_0xC0C527B525D7CFB5(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2328[iVar2] = 0f;
				}
				if (uVar209[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2528[iVar2] = unk_0x3E5AE19425CD74BE(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2528[iVar2] = 0;
				}
				if (uVar214[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2546[iVar2] = unk_0x3E5AE19425CD74BE(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2546[iVar2] = 0;
				}
				if (uVar219[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2564[iVar2] = unk_0x3E5AE19425CD74BE(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2564[iVar2] = 0;
				}
				if (bVar7)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][0] = unk_0x3E5AE19425CD74BE(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][1] = unk_0x3E5AE19425CD74BE(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][2] = unk_0x3E5AE19425CD74BE(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][3] = unk_0x3E5AE19425CD74BE(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4847[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][0] = unk_0x3E5AE19425CD74BE(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][1] = unk_0x3E5AE19425CD74BE(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][2] = unk_0x3E5AE19425CD74BE(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4951[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar164[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2364[iVar2] = unk_0x3E5AE19425CD74BE(uVar164[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2364[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar169[iVar1], iVar2) == 3)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2400[iVar2] = unk_0xC0C527B525D7CFB5(uVar169[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2400[iVar2] = -1f;
				}
				if (unk_0x3A0014ADB172A3C5(uVar174[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2438[iVar2] = unk_0x3E5AE19425CD74BE(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2438[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar179[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2420[iVar2] = unk_0x3E5AE19425CD74BE(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2420[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar184[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5200[iVar2] = unk_0x3E5AE19425CD74BE(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5200[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar189[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5218[iVar2] = unk_0x3E5AE19425CD74BE(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5218[iVar2] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar194[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5236[iVar2] = unk_0x3E5AE19425CD74BE(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_5236[iVar2] = 0;
				}
				if (uVar244[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4933[iVar2] = unk_0x3E5AE19425CD74BE(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_4933[iVar2] = 0;
				}
				if (uVar269[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1868[iVar2] = unk_0x3E5AE19425CD74BE(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1868[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar274[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2152[iVar2] = unk_0x3E5AE19425CD74BE(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2152[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar279[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2188[iVar2] = unk_0x3E5AE19425CD74BE(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2188[iVar2] = 0;
				}
				if (uVar284[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1904[iVar2] = unk_0x3E5AE19425CD74BE(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1904[iVar2] = 0;
				}
				if (uVar289[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1886[iVar2] = unk_0x3E5AE19425CD74BE(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1886[iVar2] = 0;
				}
				if (uVar294[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2456[iVar2] = unk_0x3E5AE19425CD74BE(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2456[iVar2] = 0;
				}
				if (uVar299[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2492[iVar2] = unk_0x3E5AE19425CD74BE(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2492[iVar2] = 0;
				}
				if (uVar304[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2510[iVar2] = unk_0x3E5AE19425CD74BE(uVar304[iVar1], iVar2);
				}
				else if (Global_1601761.f_72[iVar1 /*5254*/].f_2492[iVar2] != 0 && unk_0xA921AA820C25702F(Global_1601761.f_72[iVar1 /*5254*/].f_2564[iVar2], 8))
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2510[iVar2] = Global_1601761.f_72[iVar1 /*5254*/].f_2492[iVar2];
					Global_1601761.f_72[iVar1 /*5254*/].f_2492[iVar2] = 0;
					unk_0xE80492A9AC099A93(&(Global_1601761.f_72[iVar1 /*5254*/].f_2564[iVar2]), 8);
				}
				if (uVar309[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2474[iVar2] = unk_0x3E5AE19425CD74BE(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2474[iVar2] = 0;
				}
				if (uVar314[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2044[iVar2] = unk_0x3E5AE19425CD74BE(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2044[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar319[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2170[iVar2] = unk_0x3E5AE19425CD74BE(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2170[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar324[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2206[iVar2] = unk_0x3E5AE19425CD74BE(uVar324[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2206[iVar2] = 0;
				}
				if (uVar264[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2134[iVar2] = unk_0x3E5AE19425CD74BE(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2134[iVar2] = 0;
				}
				if (uVar329[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2062[iVar2] = unk_0x3E5AE19425CD74BE(uVar329[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2062[iVar2] = 100;
				}
				if (uVar334[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2098[iVar2] = unk_0x3E5AE19425CD74BE(uVar334[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2098[iVar2] = 0;
				}
				if (uVar339[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2116[iVar2] = unk_0x3E5AE19425CD74BE(uVar339[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2116[iVar2] = 0;
				}
				if (uVar344[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2080[iVar2] = unk_0x3E5AE19425CD74BE(uVar344[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2080[iVar2] = 0;
				}
				if (uVar349[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1922[iVar2 /*3*/] = { unk_0x8D2064E5B64A628A(uVar349[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1922[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar354[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1974[iVar2 /*3*/] = { unk_0x8D2064E5B64A628A(uVar354[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1974[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar359[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2026[iVar2] = unk_0xC0C527B525D7CFB5(uVar359[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_2026[iVar2] = 0f;
				}
				if (uVar364[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3140[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar364[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3140[iVar2 /*16*/]), "", 64);
				}
				if (!func_128())
				{
					if (uVar369[iVar1] != 0)
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3619[iVar2 /*6*/]), unk_0xD3F2FFEB8D836F52(uVar369[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3619[iVar2 /*6*/]), "", 24);
					}
					if (uVar374[iVar1] != 0)
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3413[iVar2 /*6*/]), unk_0xD3F2FFEB8D836F52(uVar374[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3413[iVar2 /*6*/]), "", 24);
					}
					if (uVar379[iVar1] != 0)
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3516[iVar2 /*6*/]), unk_0xD3F2FFEB8D836F52(uVar379[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3516[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar384[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3722[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar384[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3722[iVar2 /*16*/]), "", 64);
				}
				if (uVar399[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3995[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar399[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_3995[iVar2 /*16*/]), "", 64);
				}
				if (uVar389[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4268[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar389[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4268[iVar2 /*16*/]), "", 64);
				}
				if (uVar394[iVar1] != 0)
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4541[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(uVar394[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4541[iVar2 /*16*/]), "", 64);
				}
				if (uVar404[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1645[iVar2] = unk_0x3E5AE19425CD74BE(uVar404[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1645[iVar2] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar619[iVar1], iVar2) == 2)
				{
					if (unk_0x3E5AE19425CD74BE(uVar619[iVar1], iVar2) > 1)
					{
						Global_1601761.f_72[iVar1 /*5254*/].f_1681[iVar2] = unk_0x3E5AE19425CD74BE(uVar619[iVar1], iVar2);
					}
					else
					{
						Global_1601761.f_72[iVar1 /*5254*/].f_1681[iVar2] = 1;
					}
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1681[iVar2] = 1;
				}
				if (uVar409[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1663[iVar2] = unk_0x3E5AE19425CD74BE(uVar409[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1663[iVar2] = 0;
				}
				if (uVar449[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_3 = { unk_0x8D2064E5B64A628A(uVar449[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar454[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_6 = { unk_0x8D2064E5B64A628A(uVar454[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar459[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_10 = unk_0xC0C527B525D7CFB5(uVar459[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar464[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_13 = { unk_0x8D2064E5B64A628A(uVar464[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar439[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/] = { unk_0x8D2064E5B64A628A(uVar439[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (unk_0x3A0014ADB172A3C5(uVar444[iVar1], iVar2) == 3)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_9 = unk_0xC0C527B525D7CFB5(uVar444[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar499[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/] = { unk_0x8D2064E5B64A628A(uVar499[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar509[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_3 = { unk_0x8D2064E5B64A628A(uVar509[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar504[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_6 = { unk_0x8D2064E5B64A628A(uVar504[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar519[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_10 = unk_0xC0C527B525D7CFB5(uVar519[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_10 = 0f;
				}
				if (unk_0x3A0014ADB172A3C5(uVar514[iVar1], iVar2) == 3)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_9 = unk_0xC0C527B525D7CFB5(uVar514[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar424[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_3 = { unk_0x8D2064E5B64A628A(uVar424[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar429[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_6 = { unk_0x8D2064E5B64A628A(uVar429[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar434[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_10 = unk_0xC0C527B525D7CFB5(uVar434[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar414[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/] = { unk_0x8D2064E5B64A628A(uVar414[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar419[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_9 = unk_0xC0C527B525D7CFB5(uVar419[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1155[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar574[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1547[iVar2 /*3*/] = { unk_0x8D2064E5B64A628A(uVar574[iVar1], iVar2) };
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1547[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar579[iVar1] != 0)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1599[iVar2] = unk_0xC0C527B525D7CFB5(uVar579[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_1599[iVar2] = 0f;
				}
				if (unk_0x3A0014ADB172A3C5(uVar469[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_19 = unk_0x3E5AE19425CD74BE(uVar469[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar474[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_17 = unk_0x3E5AE19425CD74BE(uVar474[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar479[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_18 = unk_0x3E5AE19425CD74BE(uVar479[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar484[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_20 = unk_0x3E5AE19425CD74BE(uVar484[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar489[iVar1], iVar2) == 2 && unk_0x3A0014ADB172A3C5(uVar494[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_21 = unk_0x3E5AE19425CD74BE(uVar489[iVar1], iVar2);
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_22 = unk_0x3E5AE19425CD74BE(uVar494[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_21 = 0;
					Global_1601761.f_72[iVar1 /*5254*/].f_371[iVar2 /*23*/].f_22 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar524[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_19 = unk_0x3E5AE19425CD74BE(uVar524[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar529[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_17 = unk_0x3E5AE19425CD74BE(uVar529[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar534[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_18 = unk_0x3E5AE19425CD74BE(uVar534[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar539[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_20 = unk_0x3E5AE19425CD74BE(uVar539[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar544[iVar1], iVar2) == 2 && unk_0x3A0014ADB172A3C5(uVar549[iVar1], iVar2) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_21 = unk_0x3E5AE19425CD74BE(uVar544[iVar1], iVar2);
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_22 = unk_0x3E5AE19425CD74BE(uVar549[iVar1], iVar2);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_21 = 0;
					Global_1601761.f_72[iVar1 /*5254*/].f_763[iVar2 /*23*/].f_22 = -1;
				}
				iVar2++;
			}
			iVar626 = 0;
			while (iVar626 <= 44)
			{
				if (unk_0x3A0014ADB172A3C5(uVar554[iVar1], iVar626) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_42[iVar626] = unk_0x3E5AE19425CD74BE(uVar554[iVar1], iVar626);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_42[iVar626] = 0;
				}
				if (unk_0x3A0014ADB172A3C5(uVar559[iVar1], iVar626) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_91[iVar626] = unk_0x3E5AE19425CD74BE(uVar559[iVar1], iVar626);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_91[iVar626] = 0;
				}
				iVar626++;
			}
			iVar627 = 0;
			while (iVar627 <= 3)
			{
				if (unk_0x3A0014ADB172A3C5(uVar564[iVar1], iVar627) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_139[iVar627] = unk_0x3E5AE19425CD74BE(uVar564[iVar1], iVar627);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_139[iVar627] = -1;
				}
				if (unk_0x3A0014ADB172A3C5(uVar569[iVar1], iVar627) == 2)
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_144[iVar627] = unk_0x3E5AE19425CD74BE(uVar569[iVar1], iVar627);
				}
				else
				{
					Global_1601761.f_72[iVar1 /*5254*/].f_144[iVar627] = -1;
				}
				iVar627++;
			}
		}
		iVar1++;
	}
}

void func_153(char* sParam0)
{
	char* sVar0;
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var* uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	var* uVar99[1];
	
	sVar0 = unk_0xB6B9DDC412FCEEE2(*sParam0, "endcon");
	iVar3 = unk_0x7A983AA9DA2659ED(sVar0, "stpos");
	iVar4 = unk_0x7A983AA9DA2659ED(sVar0, "delr");
	iVar5 = unk_0x7A983AA9DA2659ED(sVar0, "epos");
	iVar6 = unk_0x7A983AA9DA2659ED(sVar0, "endr");
	iVar7 = unk_0x7A983AA9DA2659ED(sVar0, "vareapos");
	iVar8 = unk_0x7A983AA9DA2659ED(sVar0, "arear");
	iVar9 = unk_0x7A983AA9DA2659ED(sVar0, "time");
	iVar10 = unk_0x7A983AA9DA2659ED(sVar0, "plkr");
	iVar11 = unk_0x7A983AA9DA2659ED(sVar0, "pekr");
	iVar12 = unk_0x7A983AA9DA2659ED(sVar0, "vhkr");
	iVar13 = unk_0x7A983AA9DA2659ED(sVar0, "obkr");
	iVar14 = unk_0x7A983AA9DA2659ED(sVar0, "dr");
	iVar15 = unk_0x7A983AA9DA2659ED(sVar0, "pedr");
	iVar16 = unk_0x7A983AA9DA2659ED(sVar0, "vedr");
	iVar17 = unk_0x7A983AA9DA2659ED(sVar0, "obdr");
	iVar18 = unk_0x7A983AA9DA2659ED(sVar0, "lwmbs");
	iVar19 = unk_0x7A983AA9DA2659ED(sVar0, "flmbs");
	iVar20 = unk_0x7A983AA9DA2659ED(sVar0, "vdoibs");
	iVar21 = unk_0x7A983AA9DA2659ED(sVar0, "vdohu");
	iVar22 = unk_0x7A983AA9DA2659ED(sVar0, "tmbts");
	iVar23 = unk_0x7A983AA9DA2659ED(sVar0, "swmbs");
	iVar24 = unk_0x7A983AA9DA2659ED(sVar0, "gbmbs");
	iVar25 = unk_0x7A983AA9DA2659ED(sVar0, "pcbd");
	iVar26 = unk_0x7A983AA9DA2659ED(sVar0, "lwbs");
	iVar27 = unk_0x7A983AA9DA2659ED(sVar0, "woabs");
	iVar28 = unk_0x7A983AA9DA2659ED(sVar0, "fwoabs");
	iVar29 = unk_0x7A983AA9DA2659ED(sVar0, "fail");
	iVar30 = unk_0x7A983AA9DA2659ED(sVar0, "vehrsp");
	iVar31 = unk_0x7A983AA9DA2659ED(sVar0, "mtlr");
	iVar32 = unk_0x7A983AA9DA2659ED(sVar0, "mslr");
	iVar33 = unk_0x7A983AA9DA2659ED(sVar0, "plyl");
	iVar34 = unk_0x7A983AA9DA2659ED(sVar0, "shd");
	iVar35 = unk_0x7A983AA9DA2659ED(sVar0, "spar");
	iVar36 = unk_0x7A983AA9DA2659ED(sVar0, "boud");
	iVar37 = unk_0x7A983AA9DA2659ED(sVar0, "bla");
	iVar38 = unk_0x7A983AA9DA2659ED(sVar0, "wla");
	iVar39 = unk_0x7A983AA9DA2659ED(sVar0, "patm");
	iVar40 = unk_0x7A983AA9DA2659ED(sVar0, "bnd2");
	iVar41 = unk_0x7A983AA9DA2659ED(sVar0, "bla2");
	iVar42 = unk_0x7A983AA9DA2659ED(sVar0, "wla2");
	iVar43 = unk_0x7A983AA9DA2659ED(sVar0, "pat2");
	iVar44 = unk_0x7A983AA9DA2659ED(sVar0, "inv");
	iVar45 = unk_0x7A983AA9DA2659ED(sVar0, "inv2");
	iVar46 = unk_0x7A983AA9DA2659ED(sVar0, "invsw");
	iVar47 = unk_0x7A983AA9DA2659ED(sVar0, "invtm");
	iVar48 = unk_0x7A983AA9DA2659ED(sVar0, "invrl");
	iVar49 = unk_0x7A983AA9DA2659ED(sVar0, "sinv");
	iVar50 = unk_0x7A983AA9DA2659ED(sVar0, "sinv2");
	iVar51 = unk_0x7A983AA9DA2659ED(sVar0, "ppk");
	iVar52 = unk_0x7A983AA9DA2659ED(sVar0, "mts");
	iVar53 = unk_0x7A983AA9DA2659ED(sVar0, "spwia");
	iVar54 = unk_0x7A983AA9DA2659ED(sVar0, "pcl");
	iVar55 = unk_0x7A983AA9DA2659ED(sVar0, "ocl");
	iVar56 = unk_0x7A983AA9DA2659ED(sVar0, "arrt");
	iVar57 = unk_0x7A983AA9DA2659ED(sVar0, "numpt");
	bVar59 = true;
	if (unk_0x031C55ED33227371(sVar0, "mnumpt") != 2)
	{
		bVar59 = false;
		iVar58 = unk_0x7A983AA9DA2659ED(sVar0, "mnumpt");
	}
	iVar60 = unk_0x7A983AA9DA2659ED(sVar0, "tcp");
	iVar61 = unk_0x7A983AA9DA2659ED(sVar0, "tcr");
	iVar62 = unk_0x7A983AA9DA2659ED(sVar0, "abits");
	iVar63 = unk_0x7A983AA9DA2659ED(sVar0, "sdobs");
	iVar64 = unk_0x7A983AA9DA2659ED(sVar0, "edobs");
	iVar65 = unk_0x7A983AA9DA2659ED(sVar0, "dogps");
	iVar66 = unk_0x7A983AA9DA2659ED(sVar0, "teamv");
	iVar67 = unk_0x7A983AA9DA2659ED(sVar0, "teamrvc");
	iVar68 = unk_0x7A983AA9DA2659ED(sVar0, "mcvbs");
	iVar69 = unk_0x7A983AA9DA2659ED(sVar0, "mcpbs");
	iVar70 = unk_0x7A983AA9DA2659ED(sVar0, "mcgbs");
	iVar71 = unk_0x7A983AA9DA2659ED(sVar0, "rpgbs");
	iVar72 = unk_0x7A983AA9DA2659ED(sVar0, "mcpbs1");
	iVar73 = unk_0x7A983AA9DA2659ED(sVar0, "mcpbs2");
	iVar74 = unk_0x7A983AA9DA2659ED(sVar0, "mcgbs1");
	iVar75 = unk_0x7A983AA9DA2659ED(sVar0, "mcgbs2");
	iVar76 = unk_0x7A983AA9DA2659ED(sVar0, "rpgbs1");
	iVar77 = unk_0x7A983AA9DA2659ED(sVar0, "rpgbs2");
	iVar78 = unk_0x7A983AA9DA2659ED(sVar0, "inpts");
	iVar79 = unk_0x7A983AA9DA2659ED(sVar0, "ldsf1");
	iVar80 = unk_0x7A983AA9DA2659ED(sVar0, "ldsf2");
	iVar81 = 1;
	if (unk_0x031C55ED33227371(sVar0, "tehlh") == 7)
	{
		iVar82 = unk_0x7A983AA9DA2659ED(sVar0, "tehlh");
		iVar81 = 1;
	}
	else
	{
		iVar81 = 0;
	}
	iVar83 = unk_0x7A983AA9DA2659ED(sVar0, "spsy1");
	iVar84 = unk_0x7A983AA9DA2659ED(sVar0, "spsy2");
	iVar85 = unk_0x7A983AA9DA2659ED(sVar0, "tenms");
	iVar86 = unk_0x7A983AA9DA2659ED(sVar0, "csttn");
	iVar87 = unk_0x7A983AA9DA2659ED(sVar0, "nrl");
	iVar88 = unk_0x7A983AA9DA2659ED(sVar0, "tstrt");
	iVar89 = unk_0x7A983AA9DA2659ED(sVar0, "tstop");
	uVar90 = unk_0x7A983AA9DA2659ED(sVar0, "sms");
	iVar91 = unk_0x7A983AA9DA2659ED(sVar0, "tblpv1");
	iVar92 = unk_0x7A983AA9DA2659ED(sVar0, "tblpv2");
	iVar93 = unk_0x7A983AA9DA2659ED(sVar0, "tblpv3");
	iVar94 = unk_0x7A983AA9DA2659ED(sVar0, "tblpv4");
	iVar95 = unk_0x7A983AA9DA2659ED(sVar0, "thudv1");
	iVar96 = unk_0x7A983AA9DA2659ED(sVar0, "thudv2");
	iVar97 = unk_0x7A983AA9DA2659ED(sVar0, "thudv3");
	iVar98 = unk_0x7A983AA9DA2659ED(sVar0, "thudv4");
	iVar1 = 0;
	while (iVar1 <= (unk_0x065DB281590CEA2D(uVar90) - 1))
	{
		uVar99[iVar1] = unk_0x8B5FADCC4E3A145F(uVar90, iVar1);
		Global_1601761.f_21282[iVar1 /*38*/] = unk_0x78F06F6B1FB5A80C(uVar99[iVar1], "team");
		Global_1601761.f_21282[iVar1 /*38*/].f_1 = unk_0x78F06F6B1FB5A80C(uVar99[iVar1], "rule");
		Global_1601761.f_21282[iVar1 /*38*/].f_2 = unk_0x78F06F6B1FB5A80C(uVar99[iVar1], "time");
		StringCopy(&(Global_1601761.f_21282[iVar1 /*38*/].f_4[0 /*16*/]), unk_0x3D2FD9E763B24472(uVar99[iVar1], "txt0"), 64);
		StringCopy(&(Global_1601761.f_21282[iVar1 /*38*/].f_4[1 /*16*/]), unk_0x3D2FD9E763B24472(uVar99[iVar1], "txt1"), 64);
		Global_1601761.f_21282[iVar1 /*38*/].f_3 = unk_0x78F06F6B1FB5A80C(uVar99[iVar1], "delay");
		Global_1601761.f_21282[iVar1 /*38*/].f_37 = unk_0x78F06F6B1FB5A80C(uVar99[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1601761.f_18 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar66 != 0)
			{
				iVar2 = unk_0x3E5AE19425CD74BE(iVar66, iVar1);
				Global_1601761.f_24876[iVar1] = iVar2;
			}
			else
			{
				Global_1601761.f_24876[iVar1] = 0;
			}
			if (iVar67 != 0)
			{
				Global_1601761.f_24914[iVar1] = unk_0x3E5AE19425CD74BE(iVar67, iVar1);
			}
			else
			{
				Global_1601761.f_24914[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/] = { unk_0x8D2064E5B64A628A(iVar3, iVar1) };
			}
			if (iVar18 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1772 = unk_0x3E5AE19425CD74BE(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1793 = unk_0x3E5AE19425CD74BE(iVar19, iVar1);
			}
			if (iVar20 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2418 = unk_0x3E5AE19425CD74BE(iVar20, iVar1);
			}
			if (unk_0x3A0014ADB172A3C5(iVar21, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2419 = unk_0x3E5AE19425CD74BE(iVar21, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2419 = 0;
			}
			if (iVar22 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2582 = unk_0x3E5AE19425CD74BE(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1774 = unk_0x3E5AE19425CD74BE(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1867 = unk_0x3E5AE19425CD74BE(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2591 = unk_0x3E5AE19425CD74BE(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1771 = unk_0x3E5AE19425CD74BE(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1773 = unk_0x3E5AE19425CD74BE(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1794 = unk_0x3E5AE19425CD74BE(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2592 = unk_0x3E5AE19425CD74BE(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2593 = unk_0x3E5AE19425CD74BE(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_32 = unk_0x3E5AE19425CD74BE(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_33 = unk_0x3E5AE19425CD74BE(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_35 = unk_0x3E5AE19425CD74BE(iVar33, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1620 = unk_0x3E5AE19425CD74BE(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1618 = unk_0x3E5AE19425CD74BE(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1617 = unk_0x3E5AE19425CD74BE(iVar37, iVar1);
			}
			if ((unk_0x3A0014ADB172A3C5(iVar39, iVar1) == 2 && unk_0x3E5AE19425CD74BE(iVar39, iVar1) != 0) && iVar39 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1619 = unk_0x3E5AE19425CD74BE(iVar39, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1619 = 60000;
			}
			if (unk_0x3A0014ADB172A3C5(iVar40, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1624 = unk_0x3E5AE19425CD74BE(iVar40, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1624 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar41, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1623 = unk_0x3E5AE19425CD74BE(iVar41, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1623 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar43, iVar1) == 2 && unk_0x3E5AE19425CD74BE(iVar43, iVar1) != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1625 = unk_0x3E5AE19425CD74BE(iVar43, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1625 = 60000;
			}
			if (unk_0x3A0014ADB172A3C5(iVar42, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1626 = unk_0x3E5AE19425CD74BE(iVar42, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1626 = 0;
			}
			if (iVar44 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_40 = unk_0x3E5AE19425CD74BE(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_41 = unk_0x3E5AE19425CD74BE(iVar45, iVar1);
			}
			if (unk_0x3A0014ADB172A3C5(iVar46, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_88 = unk_0x3E5AE19425CD74BE(iVar46, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_88 = -1;
			}
			if (unk_0x3A0014ADB172A3C5(iVar47, iVar1) == 2 && unk_0x3A0014ADB172A3C5(iVar48, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_137 = unk_0x3E5AE19425CD74BE(iVar47, iVar1);
				Global_1601761.f_72[iVar1 /*5254*/].f_138 = unk_0x3E5AE19425CD74BE(iVar48, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_137 = -1;
				Global_1601761.f_72[iVar1 /*5254*/].f_138 = -1;
			}
			if (iVar49 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_89 = unk_0x3E5AE19425CD74BE(iVar49, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_90 = unk_0x3E5AE19425CD74BE(iVar50, iVar1);
			}
			if (iVar51 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_36 = unk_0x3E5AE19425CD74BE(iVar51, iVar1);
			}
			if (iVar52 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_37 = unk_0x3E5AE19425CD74BE(iVar52, iVar1);
			}
			if (iVar53 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1621 = unk_0x3E5AE19425CD74BE(iVar53, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_1622 = unk_0x3E5AE19425CD74BE(iVar38, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_3 = unk_0xC0C527B525D7CFB5(iVar34, iVar1);
			}
			if (iVar54 != 0)
			{
				Global_1601761.f_21089[iVar1] = unk_0x3E5AE19425CD74BE(iVar54, iVar1);
			}
			if (iVar55 != 0)
			{
				Global_1601761.f_21094[iVar1] = unk_0x3E5AE19425CD74BE(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_34 = unk_0x3E5AE19425CD74BE(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1601761.f_20[iVar1] = unk_0x3E5AE19425CD74BE(iVar57, iVar1);
			}
			if (Global_1601761.f_20[iVar1] < 1)
			{
				Global_1601761.f_20[iVar1] = 1;
			}
			if (bVar59)
			{
				Global_1601761.f_25[iVar1] = 0;
			}
			else
			{
				if (iVar58 != 0)
				{
					Global_1601761.f_25[iVar1] = unk_0x3E5AE19425CD74BE(iVar58, iVar1);
				}
				if (Global_1601761.f_25[iVar1] < 0)
				{
					Global_1601761.f_25[iVar1] = 0;
				}
			}
			if (iVar60 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_4 = { unk_0x8D2064E5B64A628A(iVar60, iVar1) };
			}
			if (iVar61 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_7 = { unk_0x8D2064E5B64A628A(iVar61, iVar1) };
			}
			if (iVar62 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_367 = unk_0x3E5AE19425CD74BE(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_368 = unk_0x3E5AE19425CD74BE(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_369 = unk_0x3E5AE19425CD74BE(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_370 = unk_0x3E5AE19425CD74BE(iVar65, iVar1);
			}
			if (unk_0x3A0014ADB172A3C5(iVar79, iVar1) == 2 && iVar79 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_185 = unk_0x3E5AE19425CD74BE(iVar79, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_185 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar80, iVar1) == 2 && iVar80 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_186 = unk_0x3E5AE19425CD74BE(iVar80, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_186 = 0;
			}
			if (iVar68 != 0)
			{
				Global_1601761.f_21277[iVar1] = unk_0x3E5AE19425CD74BE(iVar68, iVar1);
			}
			if (iVar69 != 0)
			{
				Global_1601761.f_21233[iVar1] = unk_0x3E5AE19425CD74BE(iVar69, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_1601761.f_21264[iVar1 /*3*/][0] = unk_0x3E5AE19425CD74BE(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_1601761.f_21264[iVar1 /*3*/][1] = unk_0x3E5AE19425CD74BE(iVar73, iVar1);
			}
			if (Global_1601761.f_21233[iVar1] != 0 && Global_1601761.f_21264[iVar1 /*3*/][0] == 0)
			{
				Global_1601761.f_21264[iVar1 /*3*/][0] = Global_1601761.f_21233[iVar1];
			}
			if (iVar70 != 0)
			{
				Global_1601761.f_21228[iVar1] = unk_0x3E5AE19425CD74BE(iVar70, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1601761.f_21251[iVar1 /*3*/][0] = unk_0x3E5AE19425CD74BE(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1601761.f_21251[iVar1 /*3*/][1] = unk_0x3E5AE19425CD74BE(iVar75, iVar1);
			}
			if (Global_1601761.f_21228[iVar1] != 0 && Global_1601761.f_21251[iVar1 /*3*/][0] == 0)
			{
				Global_1601761.f_21251[iVar1 /*3*/][0] = Global_1601761.f_21228[iVar1];
			}
			if (iVar71 != 0)
			{
				Global_1601761.f_21223[iVar1] = unk_0x3E5AE19425CD74BE(iVar71, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1601761.f_21238[iVar1 /*3*/][0] = unk_0x3E5AE19425CD74BE(iVar76, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_1601761.f_21238[iVar1 /*3*/][1] = unk_0x3E5AE19425CD74BE(iVar77, iVar1);
			}
			if (Global_1601761.f_21223[iVar1] != 0 && Global_1601761.f_21238[iVar1 /*3*/][0] == 0)
			{
				Global_1601761.f_21238[iVar1 /*3*/][0] = Global_1601761.f_21223[iVar1];
			}
			if (iVar78 != 0)
			{
				Global_1601761.f_21104[iVar1] = unk_0x3E5AE19425CD74BE(iVar78, iVar1);
			}
			if (iVar81 && iVar82 != 0)
			{
				Global_1601761.f_21131[iVar1] = unk_0x3E5AE19425CD74BE(iVar82, iVar1);
			}
			else
			{
				Global_1601761.f_21131[iVar1] = 3;
			}
			if (iVar83 != 0)
			{
				StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4814[0 /*16*/]), unk_0xD3F2FFEB8D836F52(iVar83, iVar1), 64);
			}
			if (iVar84 != 0)
			{
				StringCopy(&(Global_1601761.f_72[iVar1 /*5254*/].f_4814[1 /*16*/]), unk_0xD3F2FFEB8D836F52(iVar84, iVar1), 64);
			}
			if (iVar85 != 0)
			{
				Global_1601761.f_21109[iVar1] = unk_0x3E5AE19425CD74BE(iVar85, iVar1);
			}
			if (iVar86 != 0)
			{
				StringCopy(&(Global_1601761.f_21114[iVar1 /*4*/]), unk_0xD3F2FFEB8D836F52(iVar86, iVar1), 16);
			}
			if (unk_0x3A0014ADB172A3C5(iVar88, iVar1) == 2 && iVar88 != 0)
			{
				Global_1601761.f_58467[iVar1] = unk_0x3E5AE19425CD74BE(iVar88, iVar1);
			}
			if (unk_0x3A0014ADB172A3C5(iVar89, iVar1) == 2 && iVar89 != 0)
			{
				Global_1601761.f_58472[iVar1] = unk_0x3E5AE19425CD74BE(iVar89, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_14 = unk_0x3E5AE19425CD74BE(iVar4, iVar1);
			}
			if (iVar5 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_15 = { unk_0x8D2064E5B64A628A(iVar5, iVar1) };
			}
			if (iVar6 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_18 = unk_0x3E5AE19425CD74BE(iVar6, iVar1);
			}
			if (iVar7 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_19 = { unk_0x8D2064E5B64A628A(iVar7, iVar1) };
			}
			if (iVar8 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_22 = unk_0x3E5AE19425CD74BE(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_23 = unk_0x3E5AE19425CD74BE(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_24 = unk_0x3E5AE19425CD74BE(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_25 = unk_0x3E5AE19425CD74BE(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_26 = unk_0x3E5AE19425CD74BE(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_27 = unk_0x3E5AE19425CD74BE(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_28 = unk_0x3E5AE19425CD74BE(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_29 = unk_0x3E5AE19425CD74BE(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_30 = unk_0x3E5AE19425CD74BE(iVar16, iVar1);
			}
			if (iVar17 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_31 = unk_0x3E5AE19425CD74BE(iVar17, iVar1);
			}
			if (iVar87 != 0)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_38 = unk_0x3E5AE19425CD74BE(iVar87, iVar1);
			}
			if (unk_0x3A0014ADB172A3C5(iVar91, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2583 = unk_0x3E5AE19425CD74BE(iVar91, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2583 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar92, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2584 = unk_0x3E5AE19425CD74BE(iVar92, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2584 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar93, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2585 = unk_0x3E5AE19425CD74BE(iVar93, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2585 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar94, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2586 = unk_0x3E5AE19425CD74BE(iVar94, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2586 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar95, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2587 = unk_0x3E5AE19425CD74BE(iVar95, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2587 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar96, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2588 = unk_0x3E5AE19425CD74BE(iVar96, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2588 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar97, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2589 = unk_0x3E5AE19425CD74BE(iVar97, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2589 = 0;
			}
			if (unk_0x3A0014ADB172A3C5(iVar98, iVar1) == 2)
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2590 = unk_0x3E5AE19425CD74BE(iVar98, iVar1);
			}
			else
			{
				Global_1601761.f_72[iVar1 /*5254*/].f_2590 = 0;
			}
		}
		iVar1++;
	}
}

void func_154(char* sParam0)
{
	char* sVar0;
	
	sVar0 = unk_0xB6B9DDC412FCEEE2(sParam0, "rule");
	Global_1601761.f_37 = unk_0x78F06F6B1FB5A80C(sVar0, "time");
	Global_1601761.f_39 = unk_0x78F06F6B1FB5A80C(sVar0, "score");
	Global_1601761.f_50 = unk_0x78F06F6B1FB5A80C(sVar0, "prule");
	Global_1601761.f_30760 = unk_0x78F06F6B1FB5A80C(sVar0, "ptyp");
	Global_1601761.f_40 = unk_0x78F06F6B1FB5A80C(sVar0, "blip");
	Global_1601761.f_42 = unk_0x78F06F6B1FB5A80C(sVar0, "tag");
	Global_1601761.f_43 = unk_0x78F06F6B1FB5A80C(sVar0, "voice");
	Global_1601761.f_44 = unk_0x78F06F6B1FB5A80C(sVar0, "radio");
	Global_1601761.f_45 = unk_0x78F06F6B1FB5A80C(sVar0, "aim");
	Global_1601761.f_24919 = unk_0x78F06F6B1FB5A80C(sVar0, "pol");
	Global_1601761.f_33 = unk_0x78F06F6B1FB5A80C(sVar0, "liv");
	Global_1601761.f_24825 = unk_0x78F06F6B1FB5A80C(sVar0, "traf");
	Global_1601761.f_55444 = unk_0x78F06F6B1FB5A80C(sVar0, "tod");
	Global_1601761.f_55429 = unk_0x78F06F6B1FB5A80C(sVar0, "weth");
	Global_1601761.f_55446 = unk_0x78F06F6B1FB5A80C(sVar0, "apeds");
	Global_1601761.f_55445 = unk_0x78F06F6B1FB5A80C(sVar0, "vehd");
	Global_1601761.f_48 = unk_0x78F06F6B1FB5A80C(sVar0, "vdm");
	Global_1601761.f_46 = unk_0x78F06F6B1FB5A80C(sVar0, "tdm");
	Global_1601761.f_21089[0] = unk_0x78F06F6B1FB5A80C(sVar0, "pcr");
	Global_1601761.f_21094[0] = unk_0x78F06F6B1FB5A80C(sVar0, "ocr");
}

void func_155(char* sParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	char cVar3[16];
	int iVar7;
	char[] cVar8[8];
	char cVar10[16];
	int iVar14;
	int iVar15;
	char cVar16[16];
	int iVar20;
	var* uVar21;
	int iVar22;
	int iVar23;
	char* sVar24;
	int iVar25;
	char* sVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	
	sVar0 = unk_0xB6B9DDC412FCEEE2(sParam0, "gen");
	Global_1601761 = unk_0x78F06F6B1FB5A80C(sVar0, "type");
	Global_1601761.f_7 = unk_0x1186940ED72FFEEC(sVar0, "ngjob");
	unk_0xA921AA820C25702F(Global_1601761.f_5, 0);
	bVar1 = unk_0x1186940ED72FFEEC(sVar0, "photo");
	if (bVar1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_1601761.f_5), 0);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_1601761.f_5), 0);
	}
	if (unk_0x031C55ED33227371(sVar0, "ivm") == 2)
	{
		Global_1601761.f_24875 = unk_0x78F06F6B1FB5A80C(sVar0, "ivm");
	}
	if (unk_0x031C55ED33227371(sVar0, "fixcam") == 2)
	{
		Global_1601761.f_58480 = unk_0x78F06F6B1FB5A80C(sVar0, "fixcam");
	}
	else
	{
		Global_1601761.f_58480 = 0;
	}
	Global_1601761.f_3 = unk_0x78F06F6B1FB5A80C(sVar0, "optbs");
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		Global_1601761.f_21321[iVar2 /*7*/] = unk_0x78F06F6B1FB5A80C(sVar0, "trainbs");
		Global_1601761.f_21321[iVar2 /*7*/].f_1 = { unk_0x46CD3CB66E0825CC(sVar0, "trainsp") };
		Global_1601761.f_21321[iVar2 /*7*/].f_4 = { unk_0x46CD3CB66E0825CC(sVar0, "trainep") };
		iVar2++;
	}
	Global_1601761.f_63 = { unk_0x46CD3CB66E0825CC(sVar0, "camo") };
	Global_1601761.f_66 = { unk_0x46CD3CB66E0825CC(sVar0, "camro") };
	Global_1601761.f_57 = { unk_0x46CD3CB66E0825CC(sVar0, "cam") };
	Global_1601761.f_69 = unk_0x06610343E73B9727(sVar0, "camh");
	Global_1601761.f_54812 = unk_0x06610343E73B9727(sVar0, "dmbds");
	Global_1601761.f_51 = { unk_0x46CD3CB66E0825CC(sVar0, "phpo") };
	StringCopy(&(Global_1601761.f_54995[0 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, "szTag"), 64);
	StringCopy(&cVar3, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar3, "nrcid", 16);
			StringIntConCat(&cVar3, iVar2, 16);
			StringCopy(&(Global_1601761.f_55130[iVar2 /*6*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar3), 24);
			iVar2++;
		}
	}
	if (func_82())
	{
		Global_1601761.f_1 = unk_0x78F06F6B1FB5A80C(sVar0, "subtype");
		Global_1601761.f_58477 = unk_0x78F06F6B1FB5A80C(sVar0, "testcomplete");
		if ((Global_1601761.f_1 == 6 || Global_1601761.f_1 == 5) || Global_1601761.f_1 == 4)
		{
			if (unk_0x031C55ED33227371(sVar0, "teamBal") == 2)
			{
				Global_1601761.f_58479 = unk_0x78F06F6B1FB5A80C(sVar0, "numRounds");
			}
			else
			{
				Global_1601761.f_58479 = 1;
			}
			if (Global_1601761.f_58479 < 1)
			{
				Global_1601761.f_58479 = 1;
			}
		}
		if (unk_0x031C55ED33227371(sVar0, "teamBal") == 2)
		{
			Global_1601761.f_58481 = unk_0x78F06F6B1FB5A80C(sVar0, "teamBal");
		}
		else
		{
			Global_1601761.f_58481 = 5;
		}
	}
	Global_1601761.f_58478 = unk_0x78F06F6B1FB5A80C(sVar0, "testcomplete");
	Global_1601761.f_38 = unk_0x78F06F6B1FB5A80C(sVar0, "endtype");
	Global_1601761.f_9 = unk_0x78F06F6B1FB5A80C(sVar0, "menubs");
	if (unk_0x031C55ED33227371(sVar0, "ovrpc") == 2)
	{
		Global_1601761.f_35171 = unk_0x78F06F6B1FB5A80C(sVar0, "ovrpc");
	}
	else
	{
		Global_1601761.f_35171 = -1;
	}
	Global_1601761.f_10 = unk_0x78F06F6B1FB5A80C(sVar0, "menubs2");
	if (unk_0x031C55ED33227371(sVar0, "menubs3") == 2)
	{
		Global_1601761.f_11 = unk_0x78F06F6B1FB5A80C(sVar0, "menubs3");
	}
	else
	{
		Global_1601761.f_11 = 0;
	}
	Global_1601761.f_12 = unk_0x78F06F6B1FB5A80C(sVar0, "cncmbs");
	Global_1601761.f_69889 = unk_0x78F06F6B1FB5A80C(sVar0, "todhr");
	Global_1601761.f_69890 = unk_0x78F06F6B1FB5A80C(sVar0, "todmn");
	Global_1601761.f_8 = unk_0x78F06F6B1FB5A80C(sVar0, "cmpts");
	Global_1601761.f_36 = unk_0x78F06F6B1FB5A80C(sVar0, "rank");
	Global_1601761.f_55448 = unk_0x78F06F6B1FB5A80C(sVar0, "charcon");
	Global_1601761.f_55448 = unk_0x78F06F6B1FB5A80C(sVar0, "char");
	Global_1601761.f_55450 = unk_0x78F06F6B1FB5A80C(sVar0, "xpr");
	Global_1601761.f_55451 = unk_0x78F06F6B1FB5A80C(sVar0, "cshr");
	Global_1601761.f_55455 = unk_0x78F06F6B1FB5A80C(sVar0, "ctsc");
	if (unk_0x031C55ED33227371(sVar0, "ecsbs") == 2)
	{
		Global_1601761.f_67089.f_16 = unk_0x78F06F6B1FB5A80C(sVar0, "ecsbs");
	}
	else
	{
		Global_1601761.f_67089.f_16 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "ecsbs2") == 2)
	{
		Global_1601761.f_67089.f_17 = unk_0x78F06F6B1FB5A80C(sVar0, "ecsbs2");
	}
	else
	{
		Global_1601761.f_67089.f_17 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "ecsrng") == 2)
	{
		Global_1601761.f_67089.f_62 = unk_0x78F06F6B1FB5A80C(sVar0, "ecsrng");
	}
	else
	{
		Global_1601761.f_67089.f_62 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "ecscp") == 5)
	{
		Global_1601761.f_67089.f_54 = { unk_0x46CD3CB66E0825CC(sVar0, "ecscp") };
	}
	else
	{
		Global_1601761.f_67089.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x031C55ED33227371(sVar0, "ecscr") == 3)
	{
		Global_1601761.f_67089.f_60 = unk_0x06610343E73B9727(sVar0, "ecscr");
	}
	else
	{
		Global_1601761.f_67089.f_60 = 0f;
	}
	if (unk_0x031C55ED33227371(sVar0, "ecscs") == 5)
	{
		Global_1601761.f_67089.f_57 = { unk_0x46CD3CB66E0825CC(sVar0, "ecscs") };
	}
	else
	{
		Global_1601761.f_67089.f_57 = { 0f, 0f, 0f };
	}
	iVar7 = 0;
	while (iVar7 <= 29)
	{
		StringCopy(&cVar8, "ecein", 8);
		StringIntConCat(&cVar8, iVar7, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/].f_1 = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar8, "ecetp", 8);
		StringIntConCat(&cVar8, iVar7, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/] = -1;
		}
		StringCopy(&cVar8, "ecebs", 8);
		StringIntConCat(&cVar8, iVar7, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/].f_2 = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67089.f_63[iVar7 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar8, "ecehn", 8);
		StringIntConCat(&cVar8, iVar7, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_67089.f_63[iVar7 /*12*/].f_4), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 32);
		}
		else
		{
			StringCopy(&(Global_1601761.f_67089.f_63[iVar7 /*12*/].f_4), "", 32);
		}
		iVar7++;
	}
	if (unk_0x031C55ED33227371(sVar0, "clbscr") == 2)
	{
		Global_1601761.f_68082 = unk_0x78F06F6B1FB5A80C(sVar0, "clbscr");
	}
	else
	{
		Global_1601761.f_68082 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "disar") == 2)
	{
		Global_1601761.f_68083 = unk_0x78F06F6B1FB5A80C(sVar0, "disar");
	}
	else
	{
		Global_1601761.f_68083 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "rlopt") == 2)
	{
		Global_1601761.f_67871 = unk_0x78F06F6B1FB5A80C(sVar0, "rlopt");
	}
	else
	{
		Global_1601761.f_67871 = 0;
	}
	iVar14 = unk_0x78F06F6B1FB5A80C(sVar0, "gpmn");
	Global_1601761.f_71 = iVar14;
	iVar15 = unk_0x78F06F6B1FB5A80C(sVar0, "musx");
	if (iVar15 != -1)
	{
		Global_1601761.f_55443 = iVar15;
	}
	else
	{
		Global_1601761.f_55443 = -1;
	}
	Global_1601761.f_55442 = unk_0x78F06F6B1FB5A80C(sVar0, "ausc");
	Global_1601761.f_14 = unk_0x78F06F6B1FB5A80C(sVar0, "minNu");
	Global_1601761.f_13 = unk_0x78F06F6B1FB5A80C(sVar0, "num");
	if (Global_1601761.f_13 == -1)
	{
		Global_1601761.f_13 = 30;
	}
	Global_1601761.f_15 = unk_0x78F06F6B1FB5A80C(sVar0, "time");
	Global_1601761.f_54 = { unk_0x46CD3CB66E0825CC(sVar0, "start") };
	StringCopy(&cVar16, "apart", 16);
	Global_1601761.f_67523 = { unk_0x46CD3CB66E0825CC(sVar0, &cVar16) };
	Global_1601761.f_67537 = unk_0x78F06F6B1FB5A80C(sVar0, "apwbs");
	Global_1601761.f_67526 = unk_0x78F06F6B1FB5A80C(sVar0, "wrploc");
	Global_1601761.f_67540 = unk_0x78F06F6B1FB5A80C(sVar0, "twrst");
	Global_1601761.f_67538 = unk_0x78F06F6B1FB5A80C(sVar0, "iplop");
	Global_1601761.f_67539 = unk_0x78F06F6B1FB5A80C(sVar0, "intop");
	if (unk_0x031C55ED33227371(sVar0, "copteam") == 2)
	{
		Global_1601761.f_24920 = unk_0x78F06F6B1FB5A80C(sVar0, "copteam");
	}
	else
	{
		Global_1601761.f_24920 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1601761.f_55146), unk_0x3D2FD9E763B24472(sVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1601761.f_55146), "", 64);
	}
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		iVar20 = 0;
		while (iVar20 <= 1)
		{
			StringCopy(&cVar8, "t", 8);
			StringIntConCat(&cVar8, iVar14, 8);
			StringConCat(&cVar8, "fs", 8);
			StringIntConCat(&cVar8, iVar20, 8);
			if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
			{
				StringCopy(&(Global_1601761.f_70113[iVar14 /*33*/][iVar20 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
			}
			else
			{
				StringCopy(&(Global_1601761.f_70113[iVar14 /*33*/][iVar20 /*16*/]), "", 64);
			}
			iVar20++;
		}
		StringCopy(&cVar8, "dmaskg", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_55434[iVar14] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_55434[iVar14] = 0;
		}
		StringCopy(&cVar8, "tmrfs", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_70048[iVar14 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_70048[iVar14 /*16*/]), "", 64);
		}
		StringCopy(&cVar8, "tmtss", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_70246[iVar14 /*6*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 24);
		}
		else
		{
			StringCopy(&(Global_1601761.f_70246[iVar14 /*6*/]), "", 24);
		}
		StringCopy(&cVar8, "tmtsr", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_70271[iVar14] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_70271[iVar14] = 0;
		}
		StringCopy(&cVar8, "pmscid", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_68084[iVar14] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_68084[iVar14] = -1;
		}
		StringCopy(&cVar8, "qran", 8);
		StringIntConCat(&cVar8, iVar14, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_55456[iVar14] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_55456[iVar14] = -1;
		}
		iVar14++;
	}
	if (unk_0x031C55ED33227371(sVar0, "vsclout") == 2)
	{
		Global_1601761.f_58532 = unk_0x78F06F6B1FB5A80C(sVar0, "vsclout");
	}
	else
	{
		Global_1601761.f_58532 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "vsthout") == 2)
	{
		Global_1601761.f_58533 = unk_0x78F06F6B1FB5A80C(sVar0, "vsthout");
	}
	else
	{
		Global_1601761.f_58533 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "dspteam") == 2)
	{
		Global_1601761.f_68107 = unk_0x78F06F6B1FB5A80C(sVar0, "dspteam");
	}
	else
	{
		Global_1601761.f_68107 = -1;
	}
	if (!func_64() && !func_157())
	{
		if (unk_0xF53E48461B71EECB(iParam1))
		{
			StringCopy(&(Global_1601761.f_54844), unk_0x3D2FD9E763B24472(sVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_54844), func_156(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1601761.f_54844), unk_0x3D2FD9E763B24472(sVar0, "nm"), 64);
	}
	Global_1601761.f_55478 = unk_0x78F06F6B1FB5A80C(sVar0, "mgrk");
	Global_1601761.f_55479 = unk_0x78F06F6B1FB5A80C(sVar0, "mght");
	StringCopy(&(Global_1601761.f_54866[0 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[1 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[2 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[3 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[4 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[5 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[6 /*16*/]), "", 64);
	StringCopy(&(Global_1601761.f_54866[7 /*16*/]), "", 64);
	uVar21 = unk_0x7A983AA9DA2659ED(sVar0, "dec");
	iVar22 = unk_0x43E4111189E54F0E(unk_0xD3F2FFEB8D836F52(uVar21, 0));
	if (iParam1 == -1 || unk_0xF53E48461B71EECB(iParam1))
	{
		if (iVar22 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x065DB281590CEA2D(iVar21) - 1))
			{
				StringCopy(&(Global_1601761.f_54866[iVar2 /*16*/]), unk_0xD3F2FFEB8D836F52(iVar21, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar24 = unk_0xD3F2FFEB8D836F52(iVar21, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar22 > (63 * iVar2))
				{
					if (iVar22 > (63 * iVar2) + 63)
					{
						iVar23 = (63 * iVar2) + 63;
					}
					else
					{
						iVar23 = iVar22;
					}
					StringCopy(&(Global_1601761.f_54866[iVar2 /*16*/]), unk_0xCE94AEBA5D82908A(sVar24, (63 * iVar2), iVar23), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1601761.f_54866[0 /*16*/]), func_156(), 64);
	}
	Global_1601761.f_18 = unk_0x78F06F6B1FB5A80C(sVar0, "tnum");
	Global_1601761.f_19 = unk_0x78F06F6B1FB5A80C(sVar0, "mtnum");
	if (Global_1601761 == 1)
	{
		if (Global_1601761.f_18 > 4)
		{
			Global_1601761.f_18 = 4;
		}
	}
	else if (Global_1601761.f_18 > 4)
	{
		Global_1601761.f_18 = 4;
	}
	Global_1601761.f_51411 = unk_0x78F06F6B1FB5A80C(sVar0, "atmdm");
	Global_1601761.f_32 = unk_0x78F06F6B1FB5A80C(sVar0, "trel");
	Global_1601761.f_55452 = unk_0x78F06F6B1FB5A80C(sVar0, "ltm");
	Global_1601761.f_60 = { unk_0x46CD3CB66E0825CC(sVar0, "vcpr") };
	if (unk_0x031C55ED33227371(sVar0, "hstat") == 2)
	{
		Global_1601761.f_55423 = unk_0x78F06F6B1FB5A80C(sVar0, "hstat");
	}
	else
	{
		Global_1601761.f_55423 = 0;
	}
	iVar25 = 0;
	while (iVar25 <= 19)
	{
		StringCopy(&cVar8, "rzpos", 8);
		StringIntConCat(&cVar8, iVar25, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_35107[iVar25 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_35107[iVar25 /*3*/] = { 0f, 0f, 0f };
		}
		iVar25++;
	}
	if (unk_0x031C55ED33227371(sVar0, "numzr") == 2)
	{
		Global_1601761.f_35168 = unk_0x78F06F6B1FB5A80C(sVar0, "numzr");
	}
	else
	{
		Global_1601761.f_35168 = 0;
	}
	sVar26 = unk_0xB6B9DDC412FCEEE2(sParam0, "ene");
	iVar27 = unk_0x78F06F6B1FB5A80C(sVar26, "no");
	if (unk_0x031C55ED33227371(sVar0, "hpped") == 2 && iVar27 > unk_0x78F06F6B1FB5A80C(sVar0, "hpped"))
	{
		Global_1601761.f_51402 = unk_0x78F06F6B1FB5A80C(sVar0, "hpped");
	}
	else
	{
		Global_1601761.f_51402 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "hpped2") == 2 && iVar27 > unk_0x78F06F6B1FB5A80C(sVar0, "hpped2"))
	{
		Global_1601761.f_51403 = unk_0x78F06F6B1FB5A80C(sVar0, "hpped2");
	}
	else
	{
		Global_1601761.f_51403 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "hpped3") == 2 && iVar27 > unk_0x78F06F6B1FB5A80C(sVar0, "hpped3"))
	{
		Global_1601761.f_51404 = unk_0x78F06F6B1FB5A80C(sVar0, "hpped3");
	}
	else
	{
		Global_1601761.f_51404 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "tshd") == 2)
	{
		Global_1601761.f_55475 = unk_0x78F06F6B1FB5A80C(sVar0, "tshd");
	}
	else
	{
		Global_1601761.f_55475 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "atspos") == 5)
	{
		Global_1601761.f_69946 = { unk_0x46CD3CB66E0825CC(sVar0, "atspos") };
	}
	else
	{
		Global_1601761.f_69946 = { 0f, 0f, 0f };
	}
	if (unk_0x031C55ED33227371(sVar0, "atscmp") == 5)
	{
		Global_1601761.f_69940 = { unk_0x46CD3CB66E0825CC(sVar0, "atscmp") };
	}
	else
	{
		Global_1601761.f_69940 = { 0f, 0f, 0f };
	}
	if (unk_0x031C55ED33227371(sVar0, "atscmr") == 5)
	{
		Global_1601761.f_69943 = { unk_0x46CD3CB66E0825CC(sVar0, "atscmr") };
	}
	else
	{
		Global_1601761.f_69943 = { 0f, 0f, 0f };
	}
	if (unk_0x031C55ED33227371(sVar0, "atsfov") == 3)
	{
		Global_1601761.f_69949 = unk_0x06610343E73B9727(sVar0, "atsfov");
	}
	else
	{
		Global_1601761.f_69949 = 45f;
	}
	if (unk_0x031C55ED33227371(sVar0, "atshed") == 3)
	{
		Global_1601761.f_69950 = unk_0x06610343E73B9727(sVar0, "atshed");
	}
	else
	{
		Global_1601761.f_69950 = 0f;
	}
	if (unk_0x031C55ED33227371(sVar0, "atsveh") == 2)
	{
		Global_1601761.f_69951 = unk_0x78F06F6B1FB5A80C(sVar0, "atsveh");
	}
	else
	{
		Global_1601761.f_69951 = 0;
	}
	Global_1601761.f_17 = Global_1601761.f_18;
	if (unk_0x031C55ED33227371(sVar0, "hpdt1") == 2)
	{
		Global_1601761.f_55424[0] = unk_0x78F06F6B1FB5A80C(sVar0, "hpdt1");
	}
	else
	{
		Global_1601761.f_55424[0] = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hpdt2") == 2)
	{
		Global_1601761.f_55424[1] = unk_0x78F06F6B1FB5A80C(sVar0, "hpdt2");
	}
	else
	{
		Global_1601761.f_55424[1] = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "vdt") == 2)
	{
		Global_1601761.f_55427 = unk_0x78F06F6B1FB5A80C(sVar0, "vdt");
	}
	else
	{
		Global_1601761.f_55427 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrbs") == 2)
	{
		Global_1601761.f_68089 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrbs");
	}
	else
	{
		Global_1601761.f_68089 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrtt") == 2)
	{
		Global_1601761.f_68090 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrtt");
	}
	else
	{
		Global_1601761.f_68090 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrttm") == 2)
	{
		Global_1601761.f_68091 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrttm");
	}
	else
	{
		Global_1601761.f_68091 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrtrl") == 2)
	{
		Global_1601761.f_68092 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrtrl");
	}
	else
	{
		Global_1601761.f_68092 = -1;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrpdt") == 2)
	{
		Global_1601761.f_68094 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrpdt");
	}
	else
	{
		Global_1601761.f_68094 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrvdt") == 2)
	{
		Global_1601761.f_68096 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrvdt");
	}
	else
	{
		Global_1601761.f_68096 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrkt") == 2)
	{
		Global_1601761.f_68098 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrkt");
	}
	else
	{
		Global_1601761.f_68098 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hbrph") == 2)
	{
		Global_1601761.f_68101 = unk_0x78F06F6B1FB5A80C(sVar0, "hbrph");
	}
	else
	{
		Global_1601761.f_68101 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "hecam") == 2)
	{
		Global_1601761.f_68102 = unk_0x78F06F6B1FB5A80C(sVar0, "hecam");
	}
	else
	{
		Global_1601761.f_68102 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "sdrvm") == 2)
	{
		Global_1601761.f_70289 = unk_0x78F06F6B1FB5A80C(sVar0, "sdrvm");
	}
	else
	{
		Global_1601761.f_70289 = 10000;
	}
	if (((unk_0x031C55ED33227371(sVar0, "hmmtt") == 2 && unk_0x031C55ED33227371(sVar0, "hmmts") == 2) && unk_0x031C55ED33227371(sVar0, "hmmte") == 2) && unk_0x031C55ED33227371(sVar0, "hmmth") == 2)
	{
		Global_1601761.f_68103 = unk_0x78F06F6B1FB5A80C(sVar0, "hmmtt");
		Global_1601761.f_68104 = unk_0x78F06F6B1FB5A80C(sVar0, "hmmts");
		Global_1601761.f_68105 = unk_0x78F06F6B1FB5A80C(sVar0, "hmmte");
		Global_1601761.f_68106 = unk_0x78F06F6B1FB5A80C(sVar0, "hmmth");
	}
	else
	{
		Global_1601761.f_68103 = 0;
		Global_1601761.f_68104 = 0;
		Global_1601761.f_68105 = 0;
		Global_1601761.f_68106 = 0;
	}
	if (unk_0x031C55ED33227371(sVar0, "tstrm") == 2)
	{
		Global_1601761.f_69888 = unk_0x78F06F6B1FB5A80C(sVar0, "tstrm");
	}
	else
	{
		Global_1601761.f_69888 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar8, "dtspk", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_58172[iVar2 /*8*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 32);
		}
		else
		{
			StringCopy(&(Global_1601761.f_58172[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar8, "cspnm", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_51255[iVar2 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_51255[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar8, "csvnm", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_51304[iVar2 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_51304[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar8, "csonm", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_51353[iVar2 /*16*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_51353[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar28 = 0;
	while (iVar28 <= 3)
	{
		StringCopy(&cVar8, "ofit1", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58506[iVar28 /*5*/][0] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58506[iVar28 /*5*/][0] = 0;
		}
		StringCopy(&cVar8, "ofit2", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58506[iVar28 /*5*/][1] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58506[iVar28 /*5*/][1] = 0;
		}
		StringCopy(&cVar8, "ofit3", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58506[iVar28 /*5*/][2] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58506[iVar28 /*5*/][2] = 0;
		}
		StringCopy(&cVar8, "ofit4", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58506[iVar28 /*5*/][3] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58506[iVar28 /*5*/][3] = 0;
		}
		StringCopy(&cVar8, "ofs1", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58549[iVar28 /*2*/][0] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58549[iVar28 /*2*/][0] = 0;
		}
		StringCopy(&cVar8, "mask1", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58563[iVar28 /*2*/][0] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58563[iVar28 /*2*/][0] = 0;
		}
		StringCopy(&cVar8, "gear", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58534[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58534[iVar28] = 0;
		}
		StringCopy(&cVar8, "geard", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58539[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58539[iVar28] = -1;
		}
		StringCopy(&cVar8, "apwfr", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67527[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67527[iVar28] = -1;
		}
		StringCopy(&cVar8, "apwlr", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67532[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67532[iVar28] = -1;
		}
		StringCopy(&cVar8, "tcmin", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2 && !func_128())
		{
			Global_1601761.f_67866[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67866[iVar28] = 0;
		}
		StringCopy(&cVar8, "tmrsp", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67872[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67872[iVar28] = 0;
		}
		StringCopy(&cVar8, "tmvhp", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_24909[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_24909[iVar28] = 100;
		}
		StringCopy(&cVar8, "pmpos", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_54487[iVar28 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_54487[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar8, "pmpoi", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_54500[iVar28 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_54500[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar8, "pmrad", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 3)
		{
			Global_1601761.f_54513[iVar28] = unk_0x06610343E73B9727(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_54513[iVar28] = 0f;
		}
		StringCopy(&cVar8, "dfofit", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58527[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58527[iVar28] = -1;
		}
		StringCopy(&cVar8, "dfstyl", 8);
		StringIntConCat(&cVar8, iVar28, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_58558[iVar28] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_58558[iVar28] = -1;
		}
		iVar29 = 0;
		while (iVar29 <= 1)
		{
			StringCopy(&cVar10, "trstp", 16);
			StringIntConCat(&cVar10, iVar28, 16);
			if (iVar29 > 0)
			{
				StringIntConCat(&cVar10, iVar29, 16);
			}
			if (unk_0x031C55ED33227371(sVar0, &cVar10) == 5)
			{
				Global_1601761.f_54612[iVar28 /*27*/][iVar29 /*13*/][0 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar10) };
			}
			else
			{
				Global_1601761.f_54612[iVar28 /*27*/][iVar29 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar10, "trsth", 16);
			StringIntConCat(&cVar10, iVar28, 16);
			if (iVar29 > 0)
			{
				StringIntConCat(&cVar10, iVar29, 16);
			}
			if (unk_0x031C55ED33227371(sVar0, &cVar10) == 3)
			{
				Global_1601761.f_54721[iVar28 /*11*/][iVar29 /*5*/][0] = unk_0x06610343E73B9727(sVar0, &cVar10);
			}
			else
			{
				Global_1601761.f_54721[iVar28 /*11*/][iVar29 /*5*/][0] = 0f;
			}
			iVar30 = 0;
			while (iVar30 <= 3)
			{
				StringCopy(&cVar10, "trstp", 16);
				StringIntConCat(&cVar10, iVar28, 16);
				StringIntConCat(&cVar10, iVar29, 16);
				StringConCat(&cVar10, "n", 16);
				StringIntConCat(&cVar10, iVar30, 16);
				if (unk_0x031C55ED33227371(sVar0, &cVar10) == 5)
				{
					Global_1601761.f_54612[iVar28 /*27*/][iVar29 /*13*/][iVar30 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar10) };
				}
				else
				{
					Global_1601761.f_54612[iVar28 /*27*/][iVar29 /*13*/][iVar30 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar10, "trsth", 16);
				StringIntConCat(&cVar10, iVar28, 16);
				StringIntConCat(&cVar10, iVar29, 16);
				StringConCat(&cVar10, "n", 16);
				StringIntConCat(&cVar10, iVar30, 16);
				if (unk_0x031C55ED33227371(sVar0, &cVar10) == 3)
				{
					Global_1601761.f_54721[iVar28 /*11*/][iVar29 /*5*/][iVar30] = unk_0x06610343E73B9727(sVar0, &cVar10);
				}
				else
				{
					Global_1601761.f_54721[iVar28 /*11*/][iVar29 /*5*/][iVar30] = 0f;
				}
				iVar30++;
			}
			StringCopy(&cVar8, "trsrl", 8);
			StringIntConCat(&cVar8, iVar28, 8);
			StringIntConCat(&cVar8, iVar29, 8);
			if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
			{
				Global_1601761.f_70276[iVar28 /*3*/][iVar29] = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
			}
			else
			{
				Global_1601761.f_70276[iVar28 /*3*/][iVar29] = 0;
			}
			iVar29++;
		}
		iVar29 = 0;
		while (iVar29 <= 3)
		{
			StringCopy(&cVar8, "pvp", 8);
			StringIntConCat(&cVar8, iVar28, 8);
			if (iVar29 > 0)
			{
				StringIntConCat(&cVar8, iVar29, 8);
			}
			if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
			{
				Global_1601761.f_69953[iVar28 /*13*/][iVar29 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
			}
			else
			{
				Global_1601761.f_69953[iVar28 /*13*/][iVar29 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar8, "pvh", 8);
			StringIntConCat(&cVar8, iVar28, 8);
			if (iVar29 > 0)
			{
				StringIntConCat(&cVar8, iVar29, 8);
			}
			if (unk_0x031C55ED33227371(sVar0, &cVar8) == 3)
			{
				Global_1601761.f_70006[iVar28 /*5*/][iVar29] = unk_0x06610343E73B9727(sVar0, &cVar8);
			}
			else
			{
				Global_1601761.f_70006[iVar28 /*5*/][iVar29] = -1f;
			}
			iVar29++;
		}
		StringCopy(&cVar8, "tscpos", 8);
		if (iVar28 > 0)
		{
			StringIntConCat(&cVar8, iVar28, 8);
		}
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_69891[iVar28 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_69891[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar8, "tscrot", 8);
		if (iVar28 > 0)
		{
			StringIntConCat(&cVar8, iVar28, 8);
		}
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_69904[iVar28 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_69904[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar8, "tspos", 8);
		if (iVar28 > 0)
		{
			StringIntConCat(&cVar8, iVar28, 8);
		}
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 5)
		{
			Global_1601761.f_69917[iVar28 /*3*/] = { unk_0x46CD3CB66E0825CC(sVar0, &cVar8) };
		}
		else
		{
			Global_1601761.f_69917[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar8, "tscfov", 8);
		if (iVar28 > 0)
		{
			StringIntConCat(&cVar8, iVar28, 8);
		}
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 3)
		{
			Global_1601761.f_69930[iVar28] = unk_0x06610343E73B9727(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_69930[iVar28] = 45f;
		}
		StringCopy(&cVar8, "tshead", 8);
		if (iVar28 > 0)
		{
			StringIntConCat(&cVar8, iVar28, 8);
		}
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 3)
		{
			Global_1601761.f_69935[iVar28] = unk_0x06610343E73B9727(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_69935[iVar28] = 0f;
		}
		iVar28++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar8, "pnid", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 4)
		{
			StringCopy(&(Global_1601761.f_67541[iVar2 /*18*/]), unk_0x3D2FD9E763B24472(sVar0, &cVar8), 64);
		}
		else
		{
			StringCopy(&(Global_1601761.f_67541[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar8, "pnlv", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2)
		{
			Global_1601761.f_67541[iVar2 /*18*/].f_16 = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67541[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar8, "pnvr", 8);
		StringIntConCat(&cVar8, iVar2, 8);
		if (unk_0x031C55ED33227371(sVar0, &cVar8) == 2 && !unk_0xCA042B6957743895(&(Global_1601761.f_67541[iVar2 /*18*/])))
		{
			Global_1601761.f_67541[iVar2 /*18*/].f_17 = unk_0x78F06F6B1FB5A80C(sVar0, &cVar8);
		}
		else
		{
			Global_1601761.f_67541[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
}

char* func_156()
{
	return unk_0x7B5280EBA9840C72("CREATOR_NO_T");
}

bool func_157()
{
	return unk_0xA921AA820C25702F(Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/].f_116, 0);
}

void func_158()
{
	if (func_159())
	{
		Global_2434309.f_8 = 0;
	}
	Global_2434309.f_7 = 1;
}

bool func_159()
{
	return unk_0xA921AA820C25702F(Global_2427935.f_2, 11);
}

int func_160(int iParam0)
{
	if (unk_0xCCA1072C29D096C2() || (unk_0xA72BC0B675B1519E() && iParam0 == 0))
	{
		if (unk_0x72D918C99BCACC54(1) == 0 || unk_0xAEEF48CDF5B6CE7C(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_161() == 0)
	{
		return 0;
	}
	return 1;
}

int func_161()
{
	if (unk_0xCCA1072C29D096C2() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (unk_0xF6201B4DAF662A9D() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if ((unk_0xA72BC0B675B1519E() && unk_0x1353F87E89946207() == 0) && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (unk_0x4D982ADB1978442D() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	if (unk_0x48AF36444B965238() && unk_0x25CB5A9F37BFD063())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (unk_0xCCA1072C29D096C2() || (unk_0xA72BC0B675B1519E() && iParam0 == 0))
	{
		if (unk_0x72D918C99BCACC54(0) == 0 || unk_0xAEEF48CDF5B6CE7C(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_161() == 0)
	{
		return 0;
	}
	return 1;
}

void func_163(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1601761.f_55471 = 0;
	if (bParam0)
	{
		Global_1601761.f_35171 = -1;
		Global_1601761.f_9 = 0;
		Global_1601761.f_10 = 0;
		Global_1601761.f_11 = 0;
		Global_1601761.f_67871 = 0;
		Global_1601761.f_8 = 0;
		Global_1601761.f_13 = 0;
		Global_1601761.f_38 = 0;
		Global_1601761.f_15 = 0;
		Global_1601761.f_37 = 0;
		Global_1601761.f_39 = 0;
		Global_1601761.f_40 = 0;
		Global_1601761.f_42 = 0;
		Global_1601761.f_43 = 0;
		Global_1601761.f_44 = 0;
		Global_1601761.f_45 = 0;
		Global_1601761.f_17 = 0;
		Global_1601761.f_18 = 1;
		Global_1601761.f_4 = 0;
		Global_1601761.f_33 = 0;
		Global_1601761.f_36 = 1;
		Global_1601761.f_14 = 0;
		Global_1601761.f_55448 = 0;
		Global_1601761.f_55451 = 0;
		Global_1601761.f_55450 = 0;
		Global_1601761.f_55447 = 0;
		if (bParam1)
		{
			Global_1601761.f_3 = 0;
		}
		Global_1601761.f_2 = 0;
		Global_1601761.f_21282[0 /*38*/] = -1;
		Global_1601761.f_21282[0 /*38*/].f_1 = -1;
		Global_1601761.f_21282[0 /*38*/].f_2 = 0;
		Global_1601761.f_21282[0 /*38*/].f_3 = 0;
		Global_1601761.f_55452 = 0;
		Global_1601761.f_55453 = 0;
		Global_1601761.f_55454 = 0;
		Global_1601761.f_55443 = -1;
		Global_1601761.f_55442 = 0;
		Global_1601761.f_49 = 0;
		Global_1601761.f_57 = { 0f, 0f, 0f };
		Global_1601761.f_60 = { 0f, 0f, 0f };
		Global_1601761.f_63 = { 0f, 0f, 0f };
		Global_1601761.f_66 = { 0f, 0f, 0f };
		Global_1601761.f_69 = 0f;
		Global_1601761.f_54812 = 0f;
		Global_1601761.f_71 = 0;
		Global_1601761.f_55470 = 0;
		Global_1601761.f_68083 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1601761.f_24847[iVar0] = 0;
			Global_1601761.f_24831[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1601761.f_58172[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1601761.f_69888 = 0;
	Global_1601761.f_32 = 0;
	Global_1601761.f_51 = { 0f, 0f, 0f };
	Global_1601761.f_68082 = -1;
	Global_1601761.f_55449 = 0f;
	StringCopy(&(Global_1601761.f_54844), "", 64);
	StringCopy(&(Global_1601761.f_55146), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1601761.f_55130[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1601761.f_54866[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_170();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1601761.f_21282[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_25[iVar0] = 0;
		Global_1601761.f_67866[iVar0] = 0;
		Global_1601761.f_20[iVar0] = 1;
		Global_1601761.f_54487[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_54500[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_54513[iVar0] = 0f;
		Global_1601761.f_69891[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_69904[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_69917[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_69930[iVar0] = 45f;
		Global_1601761.f_69935[iVar0] = 0f;
		StringCopy(&(Global_1601761.f_70246[iVar0 /*6*/]), "", 24);
		Global_1601761.f_70271[iVar0] = 0;
		StringCopy(&(Global_1601761.f_70048[iVar0 /*16*/]), "", 64);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1601761.f_70113[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		iVar0++;
	}
	Global_1601761.f_69940 = { 0f, 0f, 0f };
	Global_1601761.f_69943 = { 0f, 0f, 0f };
	Global_1601761.f_69946 = { 0f, 0f, 0f };
	Global_1601761.f_69949 = 45f;
	Global_1601761.f_69950 = 0f;
	Global_1601761.f_69951 = 0;
	Global_1601761.f_70289 = 10000;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1601761.f_51255[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1601761.f_51304[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1601761.f_51353[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_168(&(Global_1601761.f_58572[iVar0 /*1269*/]));
		func_166(&(Global_1601761.f_64918[iVar0 /*434*/]));
		iVar0++;
	}
	func_166(&(Global_1601761.f_67089));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1601761.f_67979[iVar0 /*4*/].f_3 = 0;
		Global_1601761.f_67979[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1601761.f_68080 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1601761.f_35107[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1601761.f_35168 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_140(&(Global_1601761.f_55480[iVar0 /*39*/]), iVar0);
		iVar0++;
	}
	Global_1601761.f_58461[0] = 0;
	Global_1601761.f_58461[1] = 0;
	Global_1601761.f_58465 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_165(&(Global_1601761.f_67877[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1601761.f_1 = 0;
	Global_1601761.f_55423 = 0;
	Global_1601761.f_67871 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_55456[iVar0] = -1;
		Global_1601761.f_68084[iVar0] = -1;
		iVar0++;
	}
	Global_1601761.f_55478 = 0;
	Global_1601761.f_55479 = 0;
	Global_1601761.f_68121 = 0.5f;
	Global_1601761.f_58479 = 1;
	Global_1601761.f_58481 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1601761.f_68122[iVar0] = 0f;
		Global_1601761.f_68143[iVar0] = 0f;
		Global_1601761.f_68164[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_24876[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_24914[iVar0] = -1;
		iVar0++;
	}
	Global_1600516 = 0;
	Global_1601761.f_5 = 0;
	Global_1601761.f_55429 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_21251[iVar0 /*3*/][0] = 0;
		Global_1601761.f_21251[iVar0 /*3*/][1] = 0;
		Global_1601761.f_21238[iVar0 /*3*/][0] = 0;
		Global_1601761.f_21238[iVar0 /*3*/][1] = 0;
		Global_1601761.f_21264[iVar0 /*3*/][0] = 0;
		Global_1601761.f_21264[iVar0 /*3*/][1] = 0;
		Global_1601761.f_21277[iVar0] = 0;
		Global_1601761.f_58506[iVar0 /*5*/][0] = 0;
		Global_1601761.f_58506[iVar0 /*5*/][1] = 0;
		Global_1601761.f_58506[iVar0 /*5*/][2] = 0;
		Global_1601761.f_58549[iVar0 /*2*/][0] = 0;
		Global_1601761.f_58563[iVar0 /*2*/][0] = 0;
		Global_1601761.f_72[iVar0 /*5254*/] = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_4 = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_7 = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_11 = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_14 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_15 = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_18 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_19 = { 0f, 0f, 0f };
		Global_1601761.f_72[iVar0 /*5254*/].f_22 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_23 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_35 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_24 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_25 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_26 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_27 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_28 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_29 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_30 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_31 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_32 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_33 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_38 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_1771 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1773 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1794 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1867 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2591 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1772 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1774 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2592 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_40 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_41 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_89 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_90 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2593 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_36 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_37 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1619 = 60000;
		Global_1601761.f_72[iVar0 /*5254*/].f_1625 = 60000;
		Global_1601761.f_72[iVar0 /*5254*/].f_2418 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_185 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_186 = 0;
		Global_1601761.f_21089[iVar0] = 0;
		Global_1601761.f_21094[iVar0] = 0;
		Global_1601761.f_21099[iVar0] = 0;
		Global_1601761.f_21109[iVar0] = 0;
		StringCopy(&(Global_1601761.f_21114[iVar0 /*4*/]), "", 16);
		Global_1601761.f_21131[iVar0] = 3;
		Global_1601761.f_21104[iVar0] = 0;
		Global_1601761.f_58467[iVar0] = 0;
		Global_1601761.f_58472[iVar0] = 0;
		Global_1601761.f_24909[iVar0] = 100;
		Global_1601761.f_72[iVar0 /*5254*/].f_2582 = 0;
		Global_1600516.f_1[iVar0] = 0;
		Global_1601761.f_58534[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1601761.f_54612[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1601761.f_54721[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			Global_1601761.f_70276[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_69953[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_70006[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 44)
		{
			Global_1601761.f_72[iVar0 /*5254*/].f_42[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_91[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_72[iVar0 /*5254*/].f_139[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_144[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1601761.f_21321[iVar1 /*7*/] = 0;
			Global_1601761.f_21321[iVar1 /*7*/].f_1 = { 0f, 0f, 0f };
			Global_1601761.f_21321[iVar1 /*7*/].f_4 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_2528[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2546[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2564[iVar1] = 0;
			Global_1601761.f_35021[iVar1 /*5*/][iVar0] = 0;
			Global_1601761.f_21136[iVar1 /*5*/][iVar0] = -1;
			StringCopy(&(Global_1600516.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1600516.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_205[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1627[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1645[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1663[iVar1] = 1;
			Global_1601761.f_72[iVar0 /*5254*/].f_1735[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1753[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1795[iVar1] = 10000;
			Global_1601761.f_72[iVar0 /*5254*/].f_1775[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1831[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_1681[iVar1] = 1;
			Global_1601761.f_72[iVar0 /*5254*/].f_1849[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1868[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2152[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2188[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1904[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1886[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2044[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2170[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2206[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2098[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2116[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2062[iVar1] = 100;
			Global_1601761.f_72[iVar0 /*5254*/].f_1922[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_1974[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_2026[iVar1] = 0f;
			Global_1601761.f_72[iVar0 /*5254*/].f_2080[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2134[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_259[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_277[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_295[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_331[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_313[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_349[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5020[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5038[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5056[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5074[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_5092[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_5110[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_5128[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5146[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5164[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5182[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_2456[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2474[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2492[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2510[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_223[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_241[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1699[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_1717[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_149[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_167[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_187[iVar1] = 0;
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_2594[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_2867[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3140[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3619[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3413[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3516[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_4814[0 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_4814[1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3722[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_3995[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_4268[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1601761.f_72[iVar0 /*5254*/].f_4541[iVar1 /*16*/]), "", 64);
			Global_1601761.f_72[iVar0 /*5254*/].f_2346[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2382[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2364[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_2224[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_2276[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_9 = 0f;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_10 = 0f;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_19 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_17 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_18 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_20 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_21 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_371[iVar1 /*23*/].f_22 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_9 = 0f;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_10 = 0f;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_19 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_17 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_18 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_20 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_21 = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_763[iVar1 /*23*/].f_22 = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_2328[iVar1] = 3f;
			Global_1601761.f_72[iVar0 /*5254*/].f_1813[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_2400[iVar1] = 10.5f;
			Global_1601761.f_72[iVar0 /*5254*/].f_4847[iVar1 /*5*/][0] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4847[iVar1 /*5*/][1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4847[iVar1 /*5*/][2] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4847[iVar1 /*5*/][3] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4933[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_4951[iVar1 /*4*/][0] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4951[iVar1 /*4*/][1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_4951[iVar1 /*4*/][2] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_2420[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5200[iVar1] = 0;
			Global_1601761.f_72[iVar0 /*5254*/].f_5218[iVar1] = -1;
			Global_1601761.f_72[iVar0 /*5254*/].f_5236[iVar1] = 0;
			iVar1++;
		}
		Global_1601761.f_72[iVar0 /*5254*/].f_1618 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1624 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1617 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1623 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1620 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1621 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1622 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_1626 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_367 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_368 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_137 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_138 = -1;
		Global_1601761.f_72[iVar0 /*5254*/].f_2583 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2584 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2585 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2586 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2587 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2588 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2589 = 0;
		Global_1601761.f_72[iVar0 /*5254*/].f_2590 = 0;
		iVar0++;
	}
	Global_1601761.f_54 = { 0f, 0f, 0f };
	Global_1601761.f_21441 = { 0f, 0f, 0f };
	Global_1601761.f_70 = 0f;
	Global_1601761.f_67523 = { 0f, 0f, 0f };
	Global_1601761.f_55424[0] = 0;
	Global_1601761.f_55424[1] = 0;
	Global_1601761.f_55427 = 0;
	Global_1601761.f_55423 = 0;
	Global_1601761.f_68089 = 0;
	Global_1601761.f_68090 = 0;
	Global_1601761.f_68091 = 0;
	Global_1601761.f_68092 = 0;
	Global_1601761.f_68094 = 0;
	Global_1601761.f_68096 = 0;
	Global_1601761.f_68098 = 0;
	Global_1601761.f_68101 = 0;
	Global_1601761.f_68102 = 0;
	Global_1601761.f_68103 = 0;
	Global_1601761.f_68104 = 0;
	Global_1601761.f_68105 = 0;
	Global_1601761.f_68106 = 0;
	Global_1601761.f_68111 = -1;
	Global_1601761.f_68112 = -1;
	Global_1601761.f_68113 = -1;
	Global_1601761.f_68114 = -1;
	Global_1601761.f_68115 = -1;
	Global_1601761.f_68116 = -1;
	Global_1601761.f_68117 = -1;
	Global_1601761.f_68118 = -1;
	Global_1601761.f_68119 = -1;
	Global_1601761.f_68120 = -1;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1601761.f_22145[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_21444[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_21444[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_21444[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_22427[iVar0] = 0f;
		Global_1601761.f_22569[iVar0] = 1f;
		iVar0++;
	}
	Global_1601761.f_24821 = 0;
	if (bParam0)
	{
		Global_1601761.f_24822 = 0;
		Global_1601761.f_24830 = 0;
	}
	Global_1601761.f_24828 = 0;
	Global_1601761.f_24829 = 0;
	Global_1601761.f_24868 = 0f;
	Global_1601761.f_27014 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1601761.f_27015[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1601761.f_27015[iVar0 /*31*/].f_6 = 0f;
		Global_1601761.f_27015[iVar0 /*31*/].f_7 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_9 = -1;
		Global_1601761.f_27015[iVar0 /*31*/].f_8 = -1;
		Global_1601761.f_27015[iVar0 /*31*/].f_10 = 1;
		Global_1601761.f_27015[iVar0 /*31*/].f_18 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_12 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_13 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_14 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_11 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_28 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_29 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_30 = 0;
		Global_1601761.f_27015[iVar0 /*31*/].f_15 = -1;
		Global_1601761.f_27015[iVar0 /*31*/].f_16 = -1;
		Global_1601761.f_27015[iVar0 /*31*/].f_17 = -1;
		iVar0++;
	}
	Global_1601761.f_30147 = 0;
	Global_1601761.f_30148 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1601761.f_30149[iVar0 /*29*/] = { 0f, 0f, 0f };
		Global_1601761.f_30149[iVar0 /*29*/].f_6 = 0f;
		Global_1601761.f_30149[iVar0 /*29*/].f_7 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_8 = -1;
		Global_1601761.f_30149[iVar0 /*29*/].f_10 = -1;
		Global_1601761.f_30149[iVar0 /*29*/].f_9 = -1;
		Global_1601761.f_30149[iVar0 /*29*/].f_11 = 1;
		Global_1601761.f_30149[iVar0 /*29*/].f_16 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_12 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_26 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_27 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_28 = 0;
		Global_1601761.f_30149[iVar0 /*29*/].f_13 = -1;
		Global_1601761.f_30149[iVar0 /*29*/].f_14 = -1;
		Global_1601761.f_30149[iVar0 /*29*/].f_15 = -1;
		iVar0++;
	}
	Global_1601761.f_26689 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1601761.f_26690[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1601761.f_26690[iVar0 /*19*/].f_3 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_4 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_14 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_12 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_15 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_16 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_6 = -1;
		Global_1601761.f_26690[iVar0 /*19*/].f_5 = -1;
		Global_1601761.f_26690[iVar0 /*19*/].f_13 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_8 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_9 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_10 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_11 = 0f;
		Global_1601761.f_26690[iVar0 /*19*/].f_7 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_17 = 0;
		Global_1601761.f_26690[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1601761.f_26976 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1601761.f_26977[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1601761.f_26977[iVar0 /*7*/].f_3 = 0f;
		Global_1601761.f_26977[iVar0 /*7*/].f_4 = 0;
		Global_1601761.f_26977[iVar0 /*7*/].f_5 = 0;
		Global_1601761.f_26977[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1601761.f_24869 = 3.5f;
		Global_1601761.f_24870 = 7f;
		Global_1601761.f_24871 = 0f;
		Global_1601761.f_24872 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1601761.f_24876[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1601761.f_24914[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1601761.f_55461 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_24810[iVar0] = 0;
		Global_1601761.f_58527[iVar0] = -1;
		Global_1601761.f_58558[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1601761.f_24316[iVar1 /*29*/][iVar0] = 0;
			Global_1601761.f_24316[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1601761.f_24316[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1601761.f_24316[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1601761.f_24316[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1601761.f_67872[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1601761.f_24919 = 1;
	}
	Global_1601761.f_24921 = 0;
	Global_1601761.f_24922 = 0;
	Global_1601761.f_24923 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1601761.f_24924[iVar0 /*84*/] = { 0f, 0f, 0f };
		Global_1601761.f_24924[iVar0 /*84*/].f_4 = { 0f, 0f, 0f };
		Global_1601761.f_24924[iVar0 /*84*/].f_3 = 0f;
		Global_1601761.f_24924[iVar0 /*84*/].f_7 = 50f;
		Global_1601761.f_24924[iVar0 /*84*/].f_8 = 0f;
		Global_1601761.f_24924[iVar0 /*84*/].f_9 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_10 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_11 = { 0f, 0f, 0f };
		Global_1601761.f_24924[iVar0 /*84*/].f_14 = 0f;
		Global_1601761.f_24924[iVar0 /*84*/].f_15 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_26 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_28 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_29 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_30 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_41 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_40 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_42 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_43 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_44 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_45 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_46 = 60;
		Global_1601761.f_24924[iVar0 /*84*/].f_47 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_34 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_31 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_32 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_33 = 0;
		Global_1601761.f_24924[iVar0 /*84*/].f_48 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_49 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_50 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_78 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_79 = -1;
		Global_1601761.f_24924[iVar0 /*84*/].f_80 = { 0f, 0f, 0f };
		Global_1601761.f_24924[iVar0 /*84*/].f_83 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_24924[iVar0 /*84*/].f_16[iVar1] = 0;
			Global_1601761.f_24924[iVar0 /*84*/].f_21[iVar1] = 99999;
			Global_1601761.f_24924[iVar0 /*84*/].f_61[iVar1] = 0;
			Global_1601761.f_24924[iVar0 /*84*/].f_66[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1601761.f_67541[iVar0 /*18*/]), "", 64);
		Global_1601761.f_67541[iVar0 /*18*/].f_16 = 0;
		Global_1601761.f_67541[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1601761.f_30759 = 0;
	Global_1601761.f_30760 = 0;
	if (bParam0)
	{
		if (func_82() && !func_128())
		{
			Global_1601761.f_30761 = -1;
		}
		else
		{
			Global_1601761.f_30761 = 0;
		}
	}
	Global_1601761.f_30762 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1601761.f_30763[iVar0 /*20*/] = { 0f, 0f, 0f };
		Global_1601761.f_30763[iVar0 /*20*/].f_3 = 0f;
		Global_1601761.f_30763[iVar0 /*20*/].f_12 = 76;
		Global_1601761.f_30763[iVar0 /*20*/].f_4 = 0;
		Global_1601761.f_30763[iVar0 /*20*/].f_5 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_30763[iVar0 /*20*/].f_7[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_164();
	Global_1601761.f_51402 = -1;
	Global_1601761.f_51403 = -1;
	Global_1601761.f_51404 = -1;
	Global_1601761.f_55475 = -1;
	Global_1601761.f_31584 = 0;
	Global_1601761.f_27013 = 0;
	if (bParam0)
	{
		Global_1601761.f_24875 = -1;
		Global_1601761.f_24826 = -1;
	}
	Global_1601761.f_31585 = 0;
	Global_1601761.f_31586 = 0;
	Global_1601761.f_31587 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1601761.f_31588[iVar0 /*104*/] = { 0f, 0f, 0f };
		Global_1601761.f_31588[iVar0 /*104*/].f_3 = 0f;
		Global_1601761.f_31588[iVar0 /*104*/].f_4 = 50f;
		Global_1601761.f_31588[iVar0 /*104*/].f_5 = 0f;
		Global_1601761.f_31588[iVar0 /*104*/].f_6 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_7 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_8 = { 0f, 0f, 0f };
		Global_1601761.f_31588[iVar0 /*104*/].f_11 = 0f;
		Global_1601761.f_31588[iVar0 /*104*/].f_12 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_23 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_24 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_25 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_27 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_28 = 100;
		Global_1601761.f_31588[iVar0 /*104*/].f_29 = 1001f;
		Global_1601761.f_31588[iVar0 /*104*/].f_30 = 1001f;
		Global_1601761.f_31588[iVar0 /*104*/].f_36 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_93 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_37 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_38 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_26 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_40 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_33 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_34 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_35 = 0;
		Global_1601761.f_31588[iVar0 /*104*/].f_52 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_53 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_91 = -1;
		Global_1601761.f_31588[iVar0 /*104*/].f_90 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1601761.f_31588[iVar0 /*104*/].f_94[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_31588[iVar0 /*104*/].f_101[iVar1] = 0f;
			iVar1++;
		}
		Global_1601761.f_31588[iVar0 /*104*/].f_54 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_31588[iVar0 /*104*/].f_13[iVar1] = 0;
			Global_1601761.f_31588[iVar0 /*104*/].f_18[iVar1] = 99999;
			Global_1601761.f_31588[iVar0 /*104*/].f_84[iVar1] = 0;
			Global_1601761.f_31588[iVar0 /*104*/].f_67[iVar1] = 0;
			Global_1601761.f_31588[iVar0 /*104*/].f_72[iVar1] = 0;
			Global_1601761.f_31588[iVar0 /*104*/].f_42[iVar1] = -1;
			Global_1601761.f_31588[iVar0 /*104*/].f_47[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	Global_1601761.f_54520 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1601761.f_54521[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1601761.f_54521[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1601761.f_54521[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1601761.f_51405 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1601761.f_51412[iVar0 /*8*/] = { 0f, 0f, 0f };
		Global_1601761.f_51412[iVar0 /*8*/].f_3 = 0f;
		Global_1601761.f_51412[iVar0 /*8*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_51406[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/] = { 0f, 0f, 0f };
			Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/].f_3 = 0f;
			Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/].f_4 = 0;
			Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/].f_5 = 0;
			if (unk_0x7239B21A38F536BA(Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/].f_7))
			{
				unk_0x9614299DCB53E54B(&(Global_1601761.f_51893[iVar0 /*233*/][iVar1 /*8*/].f_7));
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_1601761.f_35169 = 0;
	Global_1601761.f_35172 = 0;
	Global_1601761.f_35173 = 0;
	Global_1601761.f_35170 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1601761.f_35174[iVar0 /*268*/].f_38 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_48 = 0;
		Global_1601761.f_35174[iVar0 /*268*/] = { 0f, 0f, 0f };
		Global_1601761.f_35174[iVar0 /*268*/].f_3 = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_4 = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_13 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_14 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_15 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_31 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_35 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_36 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_37 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_204 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_203 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_205 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_206 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_207 = 20;
		Global_1601761.f_35174[iVar0 /*268*/].f_215 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_55 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_46 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_33 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_34 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_47 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_178 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_179 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_180 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_181 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_182 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_183 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_184 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_32 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_5 = 50f;
		Global_1601761.f_35174[iVar0 /*268*/].f_6 = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_7 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_8 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_9 = { 0f, 0f, 0f };
		Global_1601761.f_35174[iVar0 /*268*/].f_12 = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_165 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_60 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_157 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_158 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_159 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_165 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_175 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_166 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_174 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_61 = { 0f, 0f, 0f };
		Global_1601761.f_35174[iVar0 /*268*/].f_56 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_57 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_59 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_58 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_235 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_77 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_190 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_51 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_191 = 250;
		Global_1601761.f_35174[iVar0 /*268*/].f_194 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_195 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_248 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_196 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_249 = 4;
		Global_1601761.f_35174[iVar0 /*268*/].f_220 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_144 = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_145 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_146 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_216 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_217 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_218 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_247 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_246 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_147 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_35174[iVar0 /*268*/].f_16[iVar1] = 0;
			Global_1601761.f_35174[iVar0 /*268*/].f_21[iVar1] = 2;
			Global_1601761.f_35174[iVar0 /*268*/].f_26[iVar1] = 99999;
			Global_1601761.f_35174[iVar0 /*268*/].f_185[iVar1] = -1;
			Global_1601761.f_35174[iVar0 /*268*/].f_221[iVar1] = 0;
			Global_1601761.f_35174[iVar0 /*268*/].f_226[iVar1] = 0;
			Global_1601761.f_35174[iVar0 /*268*/].f_236[iVar1] = -1;
			Global_1601761.f_35174[iVar0 /*268*/].f_241[iVar1] = -1;
			Global_1601761.f_35174[iVar0 /*268*/].f_251[iVar1] = -2;
			Global_1601761.f_35174[iVar0 /*268*/].f_160[iVar1] = 0;
			iVar1++;
		}
		Global_1601761.f_35174[iVar0 /*268*/].f_112[0] = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_118[0] = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_130[0] = 0f;
		Global_1601761.f_35174[iVar0 /*268*/].f_78[0] = 0;
		Global_1601761.f_35174[iVar0 /*268*/].f_84[0] = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_90[0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_35174[iVar0 /*268*/].f_106[0] = 3;
		Global_1601761.f_35174[iVar0 /*268*/].f_124[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_35174[iVar0 /*268*/].f_64[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_35174[iVar0 /*268*/].f_78[iVar1 + 1] = 0;
			Global_1601761.f_35174[iVar0 /*268*/].f_112[iVar1 + 1] = 0f;
			Global_1601761.f_35174[iVar0 /*268*/].f_118[iVar1 + 1] = 0f;
			Global_1601761.f_35174[iVar0 /*268*/].f_130[iVar1 + 1] = 0f;
			Global_1601761.f_35174[iVar0 /*268*/].f_84[iVar1 + 1] = -1;
			Global_1601761.f_35174[iVar0 /*268*/].f_90[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_35174[iVar0 /*268*/].f_106[iVar1 + 1] = 3;
			Global_1601761.f_35174[iVar0 /*268*/].f_124[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1601761.f_35174[iVar0 /*268*/].f_258[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_35174[iVar0 /*268*/].f_265[iVar1] = 0f;
			iVar1++;
		}
		Global_1601761.f_35174[iVar0 /*268*/].f_176 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_177 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_250 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_256 = -1;
		Global_1601761.f_35174[iVar0 /*268*/].f_257 = -1;
		iVar0++;
	}
	Global_1601761.f_51405 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1601761.f_51412[iVar0 /*8*/] = { 0f, 0f, 0f };
		Global_1601761.f_51412[iVar0 /*8*/].f_3 = 0f;
		Global_1601761.f_51412[iVar0 /*8*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1601761.f_24816[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Global_1601761.f_22641[iVar0 /*93*/].f_51 = 0;
		Global_1601761.f_22641[iVar0 /*93*/].f_45 = 0;
		Global_1601761.f_22641[iVar0 /*93*/].f_19 = 0f;
		Global_1601761.f_22641[iVar0 /*93*/].f_27 = 0f;
		Global_1601761.f_22641[iVar0 /*93*/].f_28 = 0f;
		Global_1601761.f_22641[iVar0 /*93*/].f_29 = 0f;
		Global_1601761.f_22641[iVar0 /*93*/] = 0;
		Global_1601761.f_22641[iVar0 /*93*/].f_20 = { 0f, 0f, 0f };
		Global_1601761.f_22641[iVar0 /*93*/].f_23 = { 0f, 0f, 0f };
		Global_1601761.f_22641[iVar0 /*93*/].f_26 = 1f;
		Global_1601761.f_22641[iVar0 /*93*/].f_92 = 10.5f;
		Global_1601761.f_22641[iVar0 /*93*/].f_91 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_22641[iVar0 /*93*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1601761.f_22641[iVar0 /*93*/].f_14[iVar1] = 0f;
			Global_1601761.f_22641[iVar0 /*93*/].f_35[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_40[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_30[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_57[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_62[iVar1] = 99999;
			Global_1601761.f_22641[iVar0 /*93*/].f_67[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_72[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_52[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_77[iVar1] = 0;
			Global_1601761.f_22641[iVar0 /*93*/].f_82[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1601761.f_54518 = 0;
	Global_1601761.f_31 = 0;
	Global_1601761.f_69889 = 12;
	Global_1601761.f_69890 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_67527[iVar0] = -1;
		Global_1601761.f_67532[iVar0] = -1;
		iVar0++;
	}
	Global_1601761.f_24920 = 0;
	Global_1601761.f_68107 = -1;
	Global_1601761.f_58532 = -1;
	Global_1601761.f_58533 = -1;
	Global_1601761.f_67537 = 0;
	Global_1601761.f_67526 = 0;
	Global_1601761.f_67539 = 0;
	Global_1601761.f_67538 = 0;
	Global_1601761.f_67540 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1601761.f_55434[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1601761.f_52894[iVar3] = -1;
		Global_1601761.f_52863[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 4)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1601761.f_52925[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				Global_1601761.f_53706[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	
	Global_1601761.f_55145 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1601761.f_55162[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_55162[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1601761.f_55162[iVar0 /*26*/].f_9 = 0;
		Global_1601761.f_55162[iVar0 /*26*/].f_20 = 0;
		Global_1601761.f_55162[iVar0 /*26*/].f_22 = 0f;
		Global_1601761.f_55162[iVar0 /*26*/].f_23 = 0f;
		Global_1601761.f_55162[iVar0 /*26*/].f_21 = 0;
		Global_1601761.f_55162[iVar0 /*26*/].f_7 = 0f;
		Global_1601761.f_55162[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1601761.f_55162[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_165(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	*uParam0 = { 0f, 0f, 0f };
}

void func_166(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_54 = { 0f, 0f, 0f };
	sParam0->f_60 = 0f;
	sParam0->f_57 = { 0f, 0f, 0f };
	sParam0->f_61 = 0;
	sParam0->f_62 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_424 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_425[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_430[iVar0] = 0;
		sParam0->f_432[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_167(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_167(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_168(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_6[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_19[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_32[iVar0] = 0f;
		sParam0->f_37[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_1097 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1098[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1103[iVar0] = 0;
		sParam0->f_1105[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_43 = 0;
	sParam0->f_42 = 0;
	sParam0->f_44 = 0;
	sParam0->f_735 = 0;
	sParam0->f_436 = 0;
	sParam0->f_437 = 0;
	sParam0->f_438 = 0;
	sParam0->f_439 = { 0f, 0f, 0f };
	sParam0->f_728 = { 0f, 0f, 0f };
	sParam0->f_731 = 0f;
	sParam0->f_732 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_169(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_167(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_169(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_45[iParam1] = 0;
		sParam0->f_66[iParam1] = 0;
		sParam0->f_87[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_148[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_209[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_270[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_331[iParam1] = 0f;
		sParam0->f_352[iParam1] = 0f;
		sParam0->f_373[iParam1] = 0;
		sParam0->f_394[iParam1] = -1;
		sParam0->f_415[iParam1] = 0f;
		sParam0->f_442[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_503[iParam1] = 0f;
		StringCopy(&(sParam0->f_1107[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1188[iParam1 /*4*/]), "", 16);
	}
}

void func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1601761.f_54995[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_171()
{
	if (unk_0xB0034A223497FFCB())
	{
		if (Global_1312433)
		{
			return 1;
		}
	}
	else if (Global_1312433)
	{
		Global_1312433 = 0;
	}
	return 0;
}

bool func_172()
{
	return unk_0xA921AA820C25702F(Global_964222.f_8, 0);
}

bool func_173()
{
	return unk_0xA921AA820C25702F(Global_2427935, 4);
}

bool func_174()
{
	return unk_0xA921AA820C25702F(Global_2427935, 28);
}

var func_175()
{
	return Global_2427935.f_564;
}

void func_176()
{
	unk_0xE80492A9AC099A93(&Global_2427935, 4);
}

void func_177()
{
	unk_0xE80492A9AC099A93(&Global_2427935, 28);
}

void func_178(bool bParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;
	
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_31 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	Global_1572884[0] = 0;
	Global_1572884[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_55(bParam0, 0);
	}
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 53:
			return 15;
		
		case 60:
			return 8;
		
		case 54:
			return 14;
		
		case 58:
			return 122;
		
		case 61:
			return 1;
		
		case 59:
			return 5;
		
		case 62:
			return 6;
		
		case 55:
			return 11;
		
		case 63:
			return 0;
		
		case 64:
			return 2;
		
		case 56:
			return 13;
		
		case 65:
			return 3;
		
		case 57:
			return 12;
		
		default:
	}
	return 129;
}

bool func_180()
{
	return Global_2394627;
}

