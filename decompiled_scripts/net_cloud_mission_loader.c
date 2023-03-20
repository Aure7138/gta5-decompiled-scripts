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
	struct<87> Local_181 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_268 = 0;
	bool bLocal_269 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<10> Var1;
	char cVar11[64];
	int iVar19;
	int iVar20;
	bool bVar21;
	char[] cVar22[8];
	int iVar30;
	bool bVar31;
	
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
	unk_0x15378F974E08496E();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_269 = false;
		bVar0 = func_202();
		Global_2394686.f_3 = 0;
		Global_2394846 = 0;
		if (func_201())
		{
			bLocal_269 = true;
			Var1 = { Global_2394686.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_200(Global_2394686.f_4);
			iVar20 = unk_0x1329891157A54C63();
			bVar21 = Global_2394686.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394686.f_15 };
			}
			if (Global_2394686.f_25)
			{
				func_199(&Local_88, 1, 1);
				unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar20 /*400*/].f_39.f_18), 2);
				unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar20 /*400*/].f_39.f_18), 1);
				unk_0xC69E84EBBD7166E6(&(Global_1585045[iVar20 /*400*/].f_39.f_18), 3);
				func_198();
				func_197();
				Global_2394686.f_25 = 0;
			}
			if (!func_86(&Local_88, &cVar11, &(Global_1585045[iVar20 /*400*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 0))
			{
				Global_2394686.f_23 = 0;
				Global_2394686.f_27 = -1;
				if (bVar0)
				{
					func_199(&Local_88, 1, 1);
					unk_0xE49B1D309943CA0E();
					func_85();
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 0;
					if (Global_2394686.f_27 < 0)
					{
						Global_2394686.f_27 = 0;
					}
					else
					{
						Global_2394686.f_27++;
						if (Global_2394686.f_27 >= 10)
						{
							func_84();
							Global_2394686.f_25 = 1;
						}
					}
				}
			}
			else if (Local_88.f_0)
			{
				Global_2394686.f_23 = 1;
				Global_2394686.f_24 = 1;
				if (Global_2394686.f_27 < 0)
				{
					Global_2394686.f_27 = 0;
				}
				else
				{
					Global_2394686.f_27++;
					if (Global_2394686.f_27 >= 10)
					{
						func_84();
					}
				}
			}
			else
			{
				Global_2394686.f_26++;
				if (Global_2394686.f_26 >= 3)
				{
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 0;
					if (Global_2394686.f_27 < 0)
					{
						Global_2394686.f_27 = 0;
					}
					else
					{
						Global_2394686.f_27++;
						if (Global_2394686.f_27 >= 10)
						{
							func_84();
							Global_2394686.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394686.f_25 = 1;
				}
			}
		}
		if (func_83())
		{
			bLocal_269 = true;
			MemCopy(&cVar22, {Global_2394686.f_4.f_3}, 8);
			if (Global_2394686.f_23)
			{
				func_84();
			}
			else
			{
				if (Global_2394686.f_25)
				{
					func_199(&Local_88, 1, 1);
					Global_2394686.f_25 = 0;
				}
				if (!func_79(&Local_88, &cVar22, &Local_181))
				{
					Global_2394686.f_23 = 0;
					Global_2394686.f_27 = -1;
				}
				else if (Local_88.f_0)
				{
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 1;
					Global_2394686.f_28 = Local_181.f_65;
					Global_2394686.f_29 = Local_181.f_68;
					Global_2394686.f_30 = { Local_181.f_22 };
					Global_2394686.f_46 = { Local_181.f_38 };
					Global_2398345 = { Local_181 };
				}
				else
				{
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 0;
				}
			}
		}
		if (func_78())
		{
			bLocal_269 = true;
			if (Global_2394686.f_23)
			{
				func_84();
			}
			else
			{
				if (Global_2394686.f_25)
				{
					func_199(&Local_88, 1, 1);
					Global_2394686.f_25 = 0;
				}
				iVar30 = Local_88.f_4;
				if (!func_4(&Local_88))
				{
					Global_2394846 = 1;
					if (iVar30 != Local_88.f_4)
					{
						if (Local_88.f_4 == 4)
						{
							iLocal_268 = (unk_0x48E480685981C7D4() + 50000);
						}
					}
					bVar31 = false;
					if (Local_88.f_4 == 4)
					{
						if (unk_0x48E480685981C7D4() > iLocal_268)
						{
							Global_2394686.f_23 = 1;
							Global_2394686.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394686.f_23 = 0;
						Global_2394686.f_27 = -1;
					}
				}
				else if (Local_88.f_0)
				{
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 1;
				}
				else
				{
					Global_2394686.f_23 = 1;
					Global_2394686.f_24 = 0;
				}
			}
		}
		if (!bLocal_269)
		{
			if (func_3(unk_0x1329891157A54C63()) || func_2(unk_0x1329891157A54C63()))
			{
				if (!func_1(unk_0x1329891157A54C63(), 1))
				{
					unk_0xC23A229F78DAD92A();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_3(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

int func_4(bool bParam0)
{
	if (!func_77())
	{
		if (func_74())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_73())
			{
				return 0;
			}
			if (func_72())
			{
				return 0;
			}
			func_71();
			func_70();
			func_69();
			if (func_77())
			{
				unk_0x2F82C871E3759172(1);
			}
			else
			{
				unk_0x2F82C871E3759172(0);
			}
			bParam0->f_13 = Global_2394845;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_68(bParam0, 24);
			break;
		
		case 24:
			if (func_66(bParam0->f_13))
			{
				func_199(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_68(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x74D428C56CB5F581(&Global_2394748, bParam0->f_13, 1, func_65(0)))
			{
				func_68(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x9A9EDEED724C46B0())
			{
				if (unk_0x2D974C51834ED418())
				{
					*bParam0 = 0;
				}
				else
				{
					func_199(bParam0, 1, 1);
					bParam0->f_40 = unk_0x7225BAAA2E0445CB();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xD62FF0DEBF65EC41() > 0)
				{
					func_68(bParam0, 4);
				}
				else
				{
					func_199(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x90749815AFD03334())
			{
				func_70();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_199(bParam0, 1, 1);
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
						if (unk_0x8BE02EEFCBD13E2E() != 0)
						{
							unk_0x9BE3E13B1F3F1100();
						}
						if (unk_0xBE34D6C7947A4F3B(bParam0->f_7))
						{
							func_5(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_70();
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<87> Var5;
	int iVar92;
	
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(iVar0, "mission");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "gen");
	if (func_77())
	{
		if (func_64(unk_0x7972C301FEBB4957(bParam0->f_7)))
		{
			if (unk_0x8BE02EEFCBD13E2E() != 0)
			{
				unk_0x9BE3E13B1F3F1100();
			}
			return;
		}
	}
	if ((unk_0x6ED9878D7F475A3E(iVar2, "type") == 0 && unk_0x6ED9878D7F475A3E(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0x8BE02EEFCBD13E2E() != 0)
		{
			unk_0x9BE3E13B1F3F1100();
		}
		return;
	}
	if (Global_262145.f_6084)
	{
		if (unk_0x6ED9878D7F475A3E(iVar2, "type") == 0)
		{
			if (unk_0x6ED9878D7F475A3E(iVar2, "subtype") == 1 || unk_0x6ED9878D7F475A3E(iVar2, "subtype") == 7)
			{
				if (unk_0x8BE02EEFCBD13E2E() != 0)
				{
					unk_0x9BE3E13B1F3F1100();
				}
				return;
			}
			iVar3 = unk_0x6ED9878D7F475A3E(iVar2, "optbs");
			if (unk_0x236D8AD7EE179F46(iVar3, 4) || unk_0x236D8AD7EE179F46(iVar3, 12))
			{
				if (unk_0x8BE02EEFCBD13E2E() != 0)
				{
					unk_0x9BE3E13B1F3F1100();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_63();
		Global_794573.f_2 = 0;
		Global_794573.f_110732 = 0;
		func_62();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794573.f_110747[iVar4] = 0;
			Global_794573.f_110733[iVar4] = 0;
			iVar4++;
		}
		if (func_59())
		{
			func_58(1);
			func_58(0);
			func_56(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794573.f_4[bParam0->f_9 /*87*/] = { Var5 };
	if (!func_77())
	{
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_4 = unk_0x0F41667633BB4D9C(bParam0->f_7, 0);
		Global_794573.f_4[bParam0->f_9 /*87*/].f_67 = func_55(bParam0->f_7);
		Global_794573.f_4[bParam0->f_9 /*87*/].f_66 = unk_0x0F41667633BB4D9C(bParam0->f_7, Global_794573.f_4[bParam0->f_9 /*87*/].f_67);
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_5 = unk_0x19ADEAD327A08074(bParam0->f_7);
	}
	Global_794573.f_4[bParam0->f_9 /*87*/].f_56 = { func_54(iVar2, "start") };
	if (unk_0x0D5F4F1912AC26E7(iVar2, "optbs") == 2)
	{
		Global_794573.f_4[bParam0->f_9 /*87*/].f_76 = unk_0x6ED9878D7F475A3E(iVar2, "optbs");
	}
	unk_0xC69E84EBBD7166E6(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 15);
	unk_0xC69E84EBBD7166E6(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 18);
	unk_0xC69E84EBBD7166E6(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 19);
	unk_0xC69E84EBBD7166E6(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 28);
	unk_0xC69E84EBBD7166E6(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 27);
	Global_794573.f_4[bParam0->f_9 /*87*/].f_59 = { func_54(iVar2, "cam") };
	Global_794573.f_4[bParam0->f_9 /*87*/].f_62 = { func_53(iVar2) };
	if (!func_77())
	{
		if (unk_0x4E64C704D99A9C41(unk_0x19ADEAD327A08074(bParam0->f_7)))
		{
			Global_794573.f_4[bParam0->f_9 /*87*/].f_54 = unk_0xC0E59AE5A08C8279(bParam0->f_7);
		}
		else
		{
			Global_794573.f_4[bParam0->f_9 /*87*/].f_54 = -1;
		}
	}
	if (unk_0x0D5F4F1912AC26E7(iVar2, "mgrk") == 2)
	{
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_7 = unk_0x6ED9878D7F475A3E(iVar2, "mgrk");
	}
	if (unk_0x0D5F4F1912AC26E7(iVar2, "mght") == 2)
	{
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_8 = unk_0x6ED9878D7F475A3E(iVar2, "mght");
	}
	Global_794573.f_97271[bParam0->f_9 /*12*/].f_10 = unk_0x6ED9878D7F475A3E(iVar2, "cncmbs");
	Global_794573.f_4[bParam0->f_9 /*87*/].f_69 = unk_0x6ED9878D7F475A3E(iVar2, "min");
	Global_794573.f_4[bParam0->f_9 /*87*/].f_71 = unk_0x6ED9878D7F475A3E(iVar2, "num");
	if (Global_794573.f_4[bParam0->f_9 /*87*/].f_71 == -1)
	{
		Global_794573.f_4[bParam0->f_9 /*87*/].f_71 = 30;
	}
	StringCopy(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_22), unk_0x9F0F1DA7341B8B34(bParam0->f_7), 64);
	Global_794573.f_4[bParam0->f_9 /*87*/].f_65 = unk_0x6ED9878D7F475A3E(iVar2, "type");
	if (func_77())
	{
		StringCopy(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_6), func_52(), 64);
	}
	else
	{
		StringCopy(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_6), unk_0x6ECFE95B5E16E283(bParam0->f_7), 64);
	}
	Global_794573.f_4[bParam0->f_9 /*87*/].f_70 = unk_0x6ED9878D7F475A3E(iVar2, "rank");
	Global_794573.f_97271[bParam0->f_9 /*12*/] = unk_0x6ED9878D7F475A3E(iVar2, "tnum");
	if (!func_77())
	{
		Global_794573.f_4[bParam0->f_9 /*87*/].f_73 = func_51(unk_0x6995A3356FFC8D14(bParam0->f_7, 0), unk_0xBB71019D61FD43A5(bParam0->f_7, 0));
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_3 = unk_0xBB71019D61FD43A5(bParam0->f_7, 0);
	}
	Global_794573.f_4[bParam0->f_9 /*87*/].f_75 = unk_0x6ED9878D7F475A3E(iVar2, "charcon");
	Global_794573.f_4[bParam0->f_9 /*87*/].f_78 = unk_0x6ED9878D7F475A3E(iVar2, "ltm");
	if (Global_794573.f_4[bParam0->f_9 /*87*/].f_65 == 6 && !bParam1)
	{
		if (Global_966920.f_598 < 85)
		{
			Global_794573.f_4[bParam0->f_9 /*87*/].f_68 = Global_966920.f_598;
			Global_966920[Global_794573.f_4[bParam0->f_9 /*87*/].f_68 /*3*/] = { func_54(iVar2, "area") };
			if (unk_0x0D5F4F1912AC26E7(iVar2, "rad") == 2)
			{
				Global_966920.f_512[Global_794573.f_4[bParam0->f_9 /*87*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar2, "rad"));
			}
			else
			{
				Global_966920.f_512[Global_794573.f_4[bParam0->f_9 /*87*/].f_68] = unk_0x22B9EF9E61A2066C(iVar2, "rad");
			}
			Global_966920.f_256[Global_794573.f_4[bParam0->f_9 /*87*/].f_68 /*3*/] = { Global_794573.f_4[bParam0->f_9 /*87*/].f_56 };
			Global_794573.f_4[bParam0->f_9 /*87*/].f_56 = { Global_794573.f_4[bParam0->f_9 /*87*/].f_59 };
			Global_966920.f_598++;
		}
	}
	else
	{
		Global_794573.f_4[bParam0->f_9 /*87*/].f_68 = unk_0x6ED9878D7F475A3E(iVar2, "subtype");
	}
	StringCopy(&(Global_794573.f_4[bParam0->f_9 /*87*/]), unk_0x7972C301FEBB4957(bParam0->f_7), 24);
	iVar92 = unk_0x8DAF7A748E41AD46(&(Global_794573.f_4[bParam0->f_9 /*87*/]));
	Global_794573.f_97271[bParam0->f_9 /*12*/].f_2 = iVar92;
	func_50(Global_794573.f_4[bParam0->f_9 /*87*/].f_65, &(Global_794573.f_4[bParam0->f_9 /*87*/].f_71), &(Global_794573.f_4[bParam0->f_9 /*87*/].f_69));
	if (func_77())
	{
		if (unk_0xD994929E13CC1ED5(unk_0x7972C301FEBB4957(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794573.f_4[bParam0->f_9 /*87*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xF3148AAF69AF9CBC(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 13);
	if (Global_794573.f_4[bParam0->f_9 /*87*/].f_65 < 13 && !bParam1)
	{
		if (Global_794573.f_4[bParam0->f_9 /*87*/].f_70 <= 1000)
		{
			Global_794573.f_110733[Global_794573.f_4[bParam0->f_9 /*87*/].f_65]++;
			if (func_49(bParam0->f_9))
			{
				Global_794573.f_110733[7]++;
			}
			else if (func_48(bParam0->f_9))
			{
				Global_794573.f_110733[4]++;
			}
			else if (func_47(bParam0->f_9))
			{
				Global_794573.f_110733[10]++;
			}
		}
	}
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
	}
	if (!func_77())
	{
		Global_794573.f_97271[bParam0->f_9 /*12*/].f_1 = unk_0x8DAF7A748E41AD46(unk_0x0FDA098CBF54C7DF(bParam0->f_7));
		if ((Global_794573.f_110732 < 5 && Global_794573.f_4[bParam0->f_9 /*87*/].f_65 == 0) && Global_794573.f_4[bParam0->f_9 /*87*/].f_68 == 1)
		{
			Global_794573.f_97271[bParam0->f_9 /*12*/].f_9 = Global_794573.f_110732;
			StringCopy(&(Global_794573.f_110701[Global_794573.f_110732 /*6*/]), unk_0x0FDA098CBF54C7DF(bParam0->f_7), 24);
			Global_794573.f_110732++;
		}
		func_35(Global_794573.f_97271[bParam0->f_9 /*12*/].f_1, &(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), &(Global_794573.f_4[bParam0->f_9 /*87*/].f_77));
		func_31(Global_794573.f_97271[bParam0->f_9 /*12*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0xA2A030BB648525DF(bParam0->f_7))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 14);
			}
		}
		else
		{
			if ((((((((((unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 15) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 18)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 19)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 28)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 27)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 0)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 1)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 2)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 3)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 4)) || unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_77, 5))
			{
				Global_794573.f_110733[11]++;
			}
			if (unk_0xA2A030BB648525DF(bParam0->f_7))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_794573.f_4[bParam0->f_9 /*87*/].f_76), 14);
				if (unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 1) || Global_794573.f_4[bParam0->f_9 /*87*/].f_68 == 2)
				{
					Global_794573.f_110733[9]++;
				}
				if (Global_794573.f_4[bParam0->f_9 /*87*/].f_70 <= 1000)
				{
					if (Global_794573.f_4[bParam0->f_9 /*87*/].f_65 < 13)
					{
						Global_794573.f_110747[Global_794573.f_4[bParam0->f_9 /*87*/].f_65]++;
					}
				}
				Global_794573.f_97271[bParam0->f_9 /*12*/].f_6 = unk_0xFBDDE51DDAF7FA45(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		if (func_59())
		{
			func_29(Global_794573.f_4[bParam0->f_9 /*87*/].f_65, Global_794573.f_4[bParam0->f_9 /*87*/].f_68, unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 14), Global_794573.f_4[bParam0->f_9 /*87*/].f_70, 0);
			func_27(Global_794573.f_4[bParam0->f_9 /*87*/].f_65, Global_794573.f_4[bParam0->f_9 /*87*/].f_68, Global_794573.f_4[bParam0->f_9 /*87*/].f_70, 0);
			func_25(Global_794573.f_4[bParam0->f_9 /*87*/].f_65, Global_794573.f_4[bParam0->f_9 /*87*/].f_68, Global_794573.f_4[bParam0->f_9 /*87*/].f_75, Global_794573.f_4[bParam0->f_9 /*87*/].f_70, unk_0x236D8AD7EE179F46(Global_794573.f_4[bParam0->f_9 /*87*/].f_76, 14));
			func_6(Global_794573.f_4[bParam0->f_9 /*87*/].f_65, Global_794573.f_4[bParam0->f_9 /*87*/].f_68, Global_794573.f_4[bParam0->f_9 /*87*/].f_75, Global_794573.f_4[bParam0->f_9 /*87*/].f_70);
		}
	}
	if (Global_794573.f_4[bParam0->f_9 /*87*/].f_65 == 6)
	{
		Global_967519[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794573.f_2++;
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
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
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = iParam1;
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
		unk_0x123B783056E76C4E(iVar0, iParam1, 1);
	}
}

int func_10(int iParam0)
{
	if (Global_1343551)
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
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
	if (func_19(unk_0x1329891157A54C63()) < iParam4)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_23(-1)];
			}
			else if (func_22(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_23(-1)];
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
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312729;
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
	
	if (func_59())
	{
		if (iParam0 == 0)
		{
			if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
			{
				if (func_19(unk_0x1329891157A54C63()) < iParam2)
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
	
	if (!func_59())
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
			if (func_19(unk_0x1329891157A54C63()) < iParam3)
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

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= 1100)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7304[iVar0])
		{
			Global_794573.f_110688[0 /*11*/][iVar0] = iParam1;
			Global_794573.f_4[iParam1 /*87*/].f_56 = { func_34(0, iVar0) };
			Global_794573.f_4[iParam1 /*87*/].f_59 = { func_33(0, iVar0) };
			Global_794573.f_4[iParam1 /*87*/].f_62 = { func_32(0, iVar0) };
			Global_794573.f_97271[iParam1 /*12*/].f_11 = 0;
			Global_794573.f_4[iParam1 /*87*/].f_68 = 8;
			Global_794573.f_4[iParam1 /*87*/].f_75 = 0;
			Global_794573.f_4[iParam1 /*87*/].f_78 = 16777215;
			Global_794573.f_4[iParam1 /*87*/].f_73 = -1;
			if (Global_794573.f_110688[0 /*11*/].f_9 <= iVar0)
			{
				Global_794573.f_110688[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_7313[iVar0])
		{
			Global_794573.f_97271[iParam1 /*12*/].f_11 = 0;
			Global_794573.f_4[iParam1 /*87*/].f_68 = 8;
			Global_794573.f_4[iParam1 /*87*/].f_75 = 0;
			Global_794573.f_4[iParam1 /*87*/].f_78 = 16777215;
			Global_794573.f_4[iParam1 /*87*/].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -15.6168f, 0.1008f, -149.8604f;
				
				case 1:
					return 3.5927f, 0.1008f, 156.3615f;
				
				case 2:
					return 3.4157f, 0.112f, 16.4938f;
				
				case 3:
					return 5.3856f, 0f, 112.9827f;
				
				case 4:
					return 4.2705f, 0f, 19.1749f;
				
				case 5:
					return -5.2724f, 0f, 42.8827f;
				
				case 6:
					return 12.4243f, 0f, 57.4707f;
				
				case 7:
					return -15.6168f, 0.1008f, -149.8604f;
				
				default:
			}
			return 2.8273f, 0f, 0.0625f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -209.1766f, -1305.476f, 34.7404f;
				
				case 1:
					return -1601.532f, -1039.506f, 17.2286f;
				
				case 2:
					return -8.6889f, -1727.83f, 30.3896f;
				
				case 3:
					return 1997.496f, 3054.69f, 54.605f;
				
				case 4:
					return 967.5151f, -1735.46f, 32.0426f;
				
				case 5:
					return 779.6009f, -1424.604f, 32.9774f;
				
				case 6:
					return -331.129f, -1492.046f, 30.3228f;
				
				case 7:
					return -209.1766f, -1305.476f, 34.7404f;
				
				default:
			}
			return -61.784f, -1538.702f, 43.8935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -210.4709f, -1306.318f, 30.336f;
				
				case 1:
					return -1598.327f, -1040.538f, 12.0183f;
				
				case 2:
					return -21.2711f, -1732.453f, 28.304f;
				
				case 3:
					return 1992.482f, 3058.078f, 46.0576f;
				
				case 4:
					return 960.3523f, -1745.844f, 30.2208f;
				
				case 5:
					return 775.7347f, -1367.343f, 25.5669f;
				
				case 6:
					return -321.3307f, -1495.598f, 29.6536f;
				
				case 7:
					return -210.4709f, -1306.318f, 30.336f;
				
				default:
			}
			return -210.4709f, -1306.318f, 30.336f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_35(int iParam0, var uParam1, var uParam2)
{
	if (func_46(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam1, 15);
	}
	else if (func_45(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam1, 18);
	}
	else if (func_44(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam1, 19);
	}
	else if (func_43(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam1, 28);
	}
	else if (func_42(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam1, 27);
	}
	else if (func_41(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 0);
	}
	else if (func_40(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 1);
	}
	else if (func_39(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 2);
	}
	else if (func_38(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 3);
	}
	else if (func_37(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 4);
	}
	else if (func_36(iParam0))
	{
		unk_0xF3148AAF69AF9CBC(uParam2, 5);
	}
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7355[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7377[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7366[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7344[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7333[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7322[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
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

int func_43(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7288[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7283 || iParam0 == Global_262145.f_7284) || iParam0 == Global_262145.f_7285) || iParam0 == Global_262145.f_7286) || iParam0 == Global_262145.f_7287)
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7278 || iParam0 == Global_262145.f_7279) || iParam0 == Global_262145.f_7280) || iParam0 == Global_262145.f_7281) || iParam0 == Global_262145.f_7282)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7271 || iParam0 == Global_262145.f_7272) || iParam0 == Global_262145.f_7273) || iParam0 == Global_262145.f_7274) || iParam0 == Global_262145.f_7275) || iParam0 == Global_262145.f_7276) || iParam0 == Global_262145.f_7277)
	{
		return 1;
	}
	return 0;
}

bool func_47(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_794573.f_4[iParam0 /*87*/].f_76, 3);
}

bool func_48(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_794573.f_4[iParam0 /*87*/].f_76, 10);
}

bool func_49(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_794573.f_4[iParam0 /*87*/].f_76, 7);
}

void func_50(int iParam0, var uParam1, var uParam2)
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

int func_51(float fParam0, int iParam1)
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

var func_52()
{
	return unk_0x46E7F5908F815DDC("CREATOR_RSC");
}

Vector3 func_53(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x0D5F4F1912AC26E7(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x22B9EF9E61A2066C(iParam0, "camp");
	}
	else if (unk_0x0D5F4F1912AC26E7(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iParam0, "camp"));
	}
	if (unk_0x0D5F4F1912AC26E7(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x22B9EF9E61A2066C(iParam0, "camh");
	}
	else if (unk_0x0D5F4F1912AC26E7(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_54(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x0D5F4F1912AC26E7(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0xE0BDF113BD17440C(iParam0, sParam1) };
	}
	else if (unk_0x0D5F4F1912AC26E7(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0xDCDDFBE975CF2B6C(iParam0, sParam1);
		if (unk_0x0D5F4F1912AC26E7(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x22B9EF9E61A2066C(iVar3, "x");
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x22B9EF9E61A2066C(iVar3, "y");
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x22B9EF9E61A2066C(iVar3, "z");
		}
	}
	return Var0;
}

int func_55(int iParam0)
{
	if (unk_0x83F76253FC9019D0(iParam0))
	{
		return 2;
	}
	else if (unk_0xBA5B0594EBC3C679(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_56(int iParam0)
{
	func_57(joaat("mpply_big_feed_init"), iParam0);
}

void func_57(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x20026873DF8DB72A(iVar0, uParam1, 1);
	}
}

void func_58(bool bParam0)
{
	if (!func_59())
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

int func_59()
{
	if (func_61() && func_60(0))
	{
		return 1;
	}
	return 0;
}

var func_60(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_61()
{
	return func_60(func_24() + 1);
}

void func_62()
{
	int iVar0;
	
	Global_966920.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_966920[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_966920.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_966920.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794573.f_110688[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794573.f_110688[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_64(char* sParam0)
{
	if ((((((((((((((((unk_0xD994929E13CC1ED5(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0xD994929E13CC1ED5(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0xD994929E13CC1ED5(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0xD994929E13CC1ED5(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0xD994929E13CC1ED5(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0xD994929E13CC1ED5(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0xD994929E13CC1ED5(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0xD994929E13CC1ED5(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0xD994929E13CC1ED5(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0xD994929E13CC1ED5(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0xD994929E13CC1ED5(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0xD994929E13CC1ED5(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0xD994929E13CC1ED5(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0xD994929E13CC1ED5(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0xD994929E13CC1ED5(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0xD994929E13CC1ED5(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0xD994929E13CC1ED5(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_65(int iParam0)
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

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	int iVar19;
	
	if (Global_262145.f_3759 == 1)
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
				if (Global_786484.f_3047[iVar1 /*12*/].f_1 == unk_0x8DAF7A748E41AD46(&(Global_2394748[iVar0 /*6*/])))
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
		Global_794573.f_4[(1100 + iVar0) /*87*/] = { Global_786484.f_1[iVar2[iVar0] /*87*/] };
		Global_794573.f_97271[(1100 + iVar0) /*12*/] = { Global_786484.f_3047[iVar2[iVar0] /*12*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1699240.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3468[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_67(1);
	return 1;
}

void func_67(int iParam0)
{
	Global_1699240.f_1784 = iParam0;
}

void func_68(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_69()
{
	struct<87> Var0;
	int iVar87;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar87 = 1100;
	while (iVar87 <= 1117)
	{
		Global_794573.f_4[iVar87 /*87*/] = { Var0 };
		iVar87++;
	}
}

void func_70()
{
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
	}
}

void func_71()
{
	if (func_77())
	{
		unk_0xF9C483CA7AFB7A7C();
	}
	else
	{
		unk_0x9B2249D5D0B54E9B();
	}
}

bool func_72()
{
	return Global_2435406.f_4;
}

int func_73()
{
	if (unk_0xC8EC0AD55DF1C9EA())
	{
		return 1;
	}
	else if (unk_0x4F63B47A2DE11C82())
	{
		return 1;
	}
	else if (unk_0xF934A69B628212A0())
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	if (!func_75())
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	if (func_76())
	{
		return 0;
	}
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_76()
{
	return Global_2437061;
}

bool func_77()
{
	return Global_1572867.f_4;
}

bool func_78()
{
	return Global_2394686.f_2;
}

int func_79(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_73())
			{
				return 0;
			}
			func_71();
			func_70();
			if (func_77())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x2F82C871E3759172(0);
			}
			func_68(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x5D156E35FDB22C1B(sParam1, func_65(0)))
			{
				func_68(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x9A9EDEED724C46B0())
			{
				bParam0->f_40 = unk_0x7225BAAA2E0445CB();
				if (unk_0x2D974C51834ED418())
				{
				}
				else
				{
					func_199(bParam0, 1, 1);
					bParam0->f_40 = unk_0x7225BAAA2E0445CB();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xD62FF0DEBF65EC41() > 0)
				{
					if (unk_0xBE34D6C7947A4F3B(0))
					{
						func_80(sParam2, 0);
						func_199(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_199(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_80(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(iVar0, "mission");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "gen");
	StringCopy(sParam0, unk_0x7972C301FEBB4957(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x6ECFE95B5E16E283(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x9F0F1DA7341B8B34(iParam1), 64);
	sParam0->f_56 = { func_54(iVar2, "start") };
	sParam0->f_59 = { func_54(iVar2, "cam") };
	sParam0->f_62 = { func_53(iVar2) };
	sParam0->f_65 = unk_0x6ED9878D7F475A3E(iVar2, "type");
	sParam0->f_68 = unk_0x6ED9878D7F475A3E(iVar2, "subtype");
	sParam0->f_79 = unk_0x6ED9878D7F475A3E(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x6ED9878D7F475A3E(iVar2, "min");
	sParam0->f_70 = unk_0x6ED9878D7F475A3E(iVar2, "rank");
	sParam0->f_71 = unk_0x6ED9878D7F475A3E(iVar2, "num");
	sParam0->f_73 = func_51(unk_0x6995A3356FFC8D14(iParam1, 0), unk_0xBB71019D61FD43A5(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x6ED9878D7F475A3E(iVar2, "charcon");
	if (func_82(unk_0x8DAF7A748E41AD46(unk_0x0FDA098CBF54C7DF(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_81() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4736)
		{
			sParam0->f_71 = Global_262145.f_4736;
		}
		if (sParam0->f_69 > Global_262145.f_4736)
		{
			sParam0->f_69 = Global_262145.f_4736;
		}
	}
	if (!func_77())
	{
		iVar3 = unk_0x19ADEAD327A08074(iParam1);
		if (unk_0x4E64C704D99A9C41(iVar3))
		{
			sParam0->f_54 = unk_0xC0E59AE5A08C8279(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x0D5F4F1912AC26E7(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x6ED9878D7F475A3E(iVar2, "ltm");
	}
	unk_0xF3148AAF69AF9CBC(&(sParam0->f_76), 13);
	func_70();
}

int func_81()
{
	return Global_24946;
}

int func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7304[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_83()
{
	return Global_2394686.f_1;
}

void func_84()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394686 = { Var0 };
	StringCopy(&(Global_2394686.f_30), "", 64);
	StringCopy(&(Global_2394686.f_46), "", 64);
	StringCopy(&(Global_2394686.f_15), "", 32);
}

void func_85()
{
	Global_2435406.f_8 = 0;
	Global_2435406.f_7 = 0;
}

int func_86(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xF3148AAF69AF9CBC(uParam2, 3);
		if (!unk_0x236D8AD7EE179F46(*uParam2, 2))
		{
		}
		unk_0xF3148AAF69AF9CBC(uParam2, 2);
		return 1;
	}
	if ((func_196() && func_195()) || func_194())
	{
		if (!unk_0x236D8AD7EE179F46(*uParam2, 2))
		{
		}
		unk_0xF3148AAF69AF9CBC(uParam2, 2);
		unk_0xF3148AAF69AF9CBC(uParam2, 1);
		unk_0xF3148AAF69AF9CBC(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(*uParam2, 3))
		{
			unk_0xF3148AAF69AF9CBC(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_193())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_192())
		{
			if (unk_0x236D8AD7EE179F46(*uParam2, 2))
			{
				unk_0xF3148AAF69AF9CBC(uParam2, 3);
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
		if (func_72())
		{
			return 0;
		}
	}
	if (!unk_0x236D8AD7EE179F46(*uParam2, 2))
	{
		if (!unk_0x236D8AD7EE179F46(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_183(1, 1, bParam11);
			}
			unk_0xF3148AAF69AF9CBC(uParam2, 1);
			func_199(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_100(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_99() || Global_1607808 == 31) || Global_1607808 == 6) || Global_1607808 == 4)
			{
				if (Global_1607808.f_22 < 1)
				{
					Global_1607808.f_22 = 1;
				}
				if (Global_1607808.f_21 < 1)
				{
					Global_1607808.f_21 = 1;
				}
				if (!func_98())
				{
					func_97();
				}
			}
			else if (Global_1607808 == 1)
			{
				Global_1343741.f_4 = 99;
				Global_1343741.f_6 = Global_1607808.f_43;
				Global_1343741.f_7 = Global_1607808.f_35720;
				Global_1343741.f_9 = Global_1607808.f_29288;
				Global_1343741.f_11 = Global_1607808.f_44;
				Global_1343741.f_12 = Global_1607808.f_46;
				Global_1343741.f_13 = Global_1607808.f_48;
				Global_1343741.f_14 = Global_1607808.f_47;
				Global_1343741.f_16 = Global_1607808.f_19;
				Global_1343741.f_5 = Global_1607808.f_41;
				Global_1343741.f_10 = Global_1607808.f_54;
			}
			else if (func_96())
			{
				Global_2480901.f_7 = 9901;
				Global_2480901.f_8 = Global_1607808.f_28667 + 1;
				if (func_95(Global_1607808.f_25142))
				{
					Global_1607808.f_25142 = { Global_1607808.f_58 };
				}
			}
			unk_0xF3148AAF69AF9CBC(uParam2, 2);
			unk_0xC69E84EBBD7166E6(uParam2, 1);
			unk_0xF3148AAF69AF9CBC(uParam2, 3);
			if (*uParam0)
			{
				func_94();
				func_93();
				if (func_92())
				{
					func_89(Global_1607808.f_17);
				}
				Global_1607808.f_64064 = 1;
			}
			else
			{
				func_197();
			}
			if (!func_88())
			{
				func_87();
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
		unk_0xF3148AAF69AF9CBC(uParam2, 3);
		if (Global_1607808.f_64064)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_87()
{
	Global_2428865.f_26.f_49 = 1;
}

int func_88()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_63714[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_89(int iParam0)
{
	if (!func_91())
	{
		unk_0x3756B6607192289F(2);
		unk_0x9C9C254E91A65651(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x3224B6FE7D026A6F((iParam0 / 2));
		func_90();
	}
}

void func_90()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2428865.f_2), 3);
}

bool func_91()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_2, 3);
}

bool func_92()
{
	return unk_0x236D8AD7EE179F46(Global_2429626.f_1.f_2808, 8);
}

void func_93()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 4);
}

void func_94()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 28);
}

int func_95(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (Global_1607808 == 2 || Global_1607808 == 8)
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	Global_1690163.f_5 = 0;
	Global_1690163.f_11 = -1;
}

int func_98()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1607808.f_22)
	{
		iVar1 = 0;
		while (iVar1 < Global_1607808.f_22)
		{
			if (Global_1607808.f_29[iVar0] != Global_1607808.f_29[iVar1])
			{
				return 0;
			}
			else if (Global_1607808.f_24[iVar0] != Global_1607808.f_24[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_99()
{
	if ((((((Global_1607808 == 0 || Global_1607808 == 4) || Global_1607808 == 6) || Global_1607808 == 3) || Global_1607808 == 31) || Global_1607808.f_2 == 6) || Global_1607808.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_100(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<16> Var17;
	int iVar33;
	
	if (uParam0->f_26 == 0)
	{
		if (func_72() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_77() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_74())
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
			uParam0->f_24 = func_182(1);
			uParam0->f_25 = func_180(1);
			if (func_73())
			{
				return 0;
			}
			func_71();
			func_70();
			if (func_77() || bParam9)
			{
				unk_0x2F82C871E3759172(1);
			}
			else
			{
				unk_0x2F82C871E3759172(0);
			}
			func_178();
			if (bParam4)
			{
				func_68(uParam0, 11);
			}
			else
			{
				func_68(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_77() || bParam9)
			{
				if (unk_0x74D72079A2BA9807(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1607808.f_64069 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1607808.f_63708), sParam1, 24);
						}
						func_136(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_68(uParam0, 9);
						*uParam0 = 1;
						func_85();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_968814.f_42), sParam1, 24);
							Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_968814.f_12 };
							func_135(&iVar1, &uVar0, &Global_968814);
							if (Global_968814.f_65 == 0)
							{
								func_199(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_70();
								func_85();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_967557.f_42), sParam1, 24);
							Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_967557.f_12 };
							func_135(&iVar1, &uVar0, &Global_967557);
							uParam0->f_8 = 0;
							if (Global_967557.f_65 == 0)
							{
								func_199(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_70();
								func_85();
								return 1;
							}
						}
						func_70();
						unk_0xF9C483CA7AFB7A7C();
						unk_0x2F82C871E3759172(1);
						func_134(uParam0);
						func_68(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_85();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_85();
					func_70();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_65(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0xB9F0BDDFEFE7158E(uParam0->f_5);
				func_68(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x829D6A5974343F79(sParam1, 1, func_65(iParam2)))
				{
					func_68(uParam0, 3);
				}
			}
			else if (unk_0x5D156E35FDB22C1B(sParam1, func_65(iParam2)))
			{
				func_68(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x9A9EDEED724C46B0())
			{
				uParam0->f_40 = unk_0x7225BAAA2E0445CB();
				if (unk_0x2D974C51834ED418())
				{
				}
				else
				{
					func_199(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7225BAAA2E0445CB();
					*uParam0 = 0;
					func_85();
					return 1;
				}
				if (unk_0xD62FF0DEBF65EC41() > 0)
				{
					if (!bParam12 && !func_132(uParam0->f_24, uParam0->f_25, unk_0x6ECFE95B5E16E283(0), unk_0x77F57E2DD3A1100B(0)))
					{
						func_199(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_85();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0xB9F0BDDFEFE7158E(uParam0->f_5);
						func_68(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0xBE34D6C7947A4F3B(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_968814.f_12), unk_0x9F0F1DA7341B8B34(0), 64);
								StringCopy(&(Global_968814.f_36), unk_0x7972C301FEBB4957(0), 24);
								StringCopy(&(Global_968814.f_42), sParam1, 24);
								Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_968814.f_12 };
								func_135(&iVar1, &uVar0, &Global_968814);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_967557.f_12), unk_0x9F0F1DA7341B8B34(0), 64);
								StringCopy(&(Global_967557.f_36), unk_0x7972C301FEBB4957(0), 24);
								StringCopy(&(Global_967557.f_42), sParam1, 24);
								Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_967557.f_12 };
								func_135(&iVar1, &uVar0, &Global_967557);
								uParam0->f_8 = 0;
							}
							func_70();
							func_68(uParam0, 10);
						}
						else
						{
							func_199(uParam0, 1, 1);
							*uParam0 = 0;
							func_85();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0xBE34D6C7947A4F3B(0))
						{
							if (uParam0->f_16)
							{
								func_130(&iVar1, &uVar0, &Global_968814, iParam6);
								if (iParam6 == 1)
								{
									func_199(uParam0, 1, 1);
									*uParam0 = 1;
									func_85();
									return 1;
								}
								StringCopy(&(Global_968814.f_12), unk_0x9F0F1DA7341B8B34(0), 64);
								StringCopy(&(Global_968814.f_36), unk_0x7972C301FEBB4957(0), 24);
								StringCopy(&(Global_968814.f_42), sParam1, 24);
								Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_968814.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_130(&iVar1, &uVar0, &Global_967557, iParam6);
								if (iParam6 == 1)
								{
									func_199(uParam0, 1, 1);
									*uParam0 = 1;
									func_85();
									return 1;
								}
								StringCopy(&(Global_967557.f_12), unk_0x9F0F1DA7341B8B34(0), 64);
								StringCopy(&(Global_967557.f_36), unk_0x7972C301FEBB4957(0), 24);
								StringCopy(&(Global_967557.f_42), sParam1, 24);
								Global_1585045[unk_0x1329891157A54C63() /*400*/].f_19 = { Global_967557.f_12 };
								uParam0->f_8 = 0;
							}
							func_70();
							func_68(uParam0, 10);
						}
						else
						{
							func_199(uParam0, 1, 1);
							*uParam0 = 0;
							func_85();
							return 1;
						}
					}
				}
				else
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					func_85();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD3ED767E7D934ECF(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0x81B3DBD3862D4A7D();
				}
				if (unk_0x1E28DC354C3021D6(uParam0->f_5))
				{
					func_68(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_68(uParam0, 0);
					return 0;
				}
				else
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					func_85();
					return 1;
				}
			}
			else if (func_129() || func_128() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0x91418342B226A788("FMMC_DOWNLOAD");
					unk_0x15F4C49B01222ABB(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_127())
			{
				return 0;
			}
			if (unk_0xF2D0190A9D95DDA7(uParam0->f_5))
			{
				if (unk_0x13413F682F6E1BE3(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_183(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1607808.f_64069 = 1;
							Global_1607808.f_64060 = 1;
							StringCopy(&(Global_1607808.f_63397), "", 64);
							StringCopy(&(Global_1607808.f_63444), "", 24);
							StringCopy(&(Global_1607808.f_63422), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1607808.f_63708), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1607808.f_63421 = unk_0x8DAF7A748E41AD46(unk_0x0FDA098CBF54C7DF(0));
							if (Global_1607808.f_64069 == 1 || Global_1607808.f_64069 == 2)
							{
								StringCopy(&(Global_1607808.f_63422), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1607808.f_63422), unk_0x6ECFE95B5E16E283(0), 24);
							}
							StringCopy(&(Global_1607808.f_63444), unk_0x6ECFE95B5E16E283(0), 24);
							Global_1607808.f_64069 = unk_0x77F57E2DD3A1100B(0);
							if ((Global_1607808.f_64069 == 0 || Global_1607808.f_64069 == 3) && unk_0xAB6F3E3EDFFFD557(0))
							{
								StringCopy(&(Global_1607808.f_63397), unk_0xB67DF8F35744CF60(unk_0x1329891157A54C63()), 64);
							}
							else if ((unk_0x3F0C224D3CC05EF2() && (Global_1607808.f_64069 == 0 || Global_1607808.f_64069 == 3)) && func_126(&iVar33, &(Global_1607808.f_63444)))
							{
								StringCopy(&(Global_1607808.f_63397), unk_0xB67DF8F35744CF60(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1607808.f_63397), unk_0x840038A4D157DB8D(0), 64);
							}
							Global_1607808.f_63728 = unk_0xBB71019D61FD43A5(0, 0);
							Global_1607808.f_64062 = unk_0x45E855D869C042B9(0);
							uParam0->f_23 = func_55(0);
							Global_1607808.f_77092 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1607808.f_63708), unk_0x7972C301FEBB4957(0), 24);
							}
							if (Global_1607808.f_64069 == 0 || Global_1607808.f_64069 == 3)
							{
								if ((unk_0x67639F6FBBBA3AF0(0, &uVar4) && unk_0x7BD139E6ED31A2EB(&uVar4, 13)) && unk_0x5762EE910D467202(&uVar4))
								{
									Var17 = { Global_1607808.f_63397 };
									func_125(1, Var17);
								}
								else
								{
									func_125(0, Var17);
								}
							}
							else
							{
								func_125(0, Var17);
							}
							Global_1607808.f_8 = func_51(unk_0x6995A3356FFC8D14(0, 0), unk_0xBB71019D61FD43A5(0, 0));
							if (unk_0xA2A030BB648525DF(uParam0->f_7))
							{
								Global_1607808.f_64061 = unk_0xFBDDE51DDAF7FA45(0);
								Global_1607808.f_64063 = 1;
							}
							else
							{
								Global_1607808.f_64061 = 0;
								Global_1607808.f_64063 = 0;
							}
							Global_1607808.f_64060 = unk_0xA0C77BBF734FF66F(0);
							uParam0->f_34 = unk_0x19ADEAD327A08074(0);
							if (!func_77())
							{
								if (unk_0x4E64C704D99A9C41(uParam0->f_34))
								{
									uParam0->f_30 = unk_0xC0E59AE5A08C8279(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1607808.f_63727 = uParam0->f_30;
							Global_2429626.f_4001.f_3 = unk_0xDB64E59ACA5D37F4(0, 0);
							Global_2429626.f_4001.f_2 = unk_0x72EED313DE419604(0, 0);
							if (Global_1607808.f_64069 == 1 || Global_1607808.f_64069 == 2)
							{
								StringCopy(&(Global_1607808.f_63397), func_52(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1607808.f_63708), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_77())
						{
							func_136(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_68(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_136(-1, bParam11, 0, 0);
						}
						if (func_122(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0x8BE02EEFCBD13E2E();
						iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "mission");
						iVar3 = unk_0xDCDDFBE975CF2B6C(iVar2, "gen");
						StringCopy(&(Global_2422670.f_3136), unk_0x9F0F1DA7341B8B34(0), 32);
						Global_2422670.f_3136.f_8 = unk_0x6ED9878D7F475A3E(iVar3, "type");
						uParam0->f_17 = unk_0xA2A030BB648525DF(0);
						*uParam0 = 1;
						func_85();
						unk_0x1E982967BE82CA6C(uParam0->f_5);
						func_70();
						return 1;
					}
					unk_0x1E982967BE82CA6C(uParam0->f_5);
					func_70();
				}
				else if (iParam2 == 0)
				{
					func_199(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_85();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_199(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_85();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_136(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_122(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_120(uParam0, 0, bParam3, 0))
			{
				func_68(uParam0, 0);
				func_70();
				if ((((func_114(Global_1607808.f_63421) && func_99()) && !bParam9) && !unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_63714[0 /*6*/]))) && (func_129() || (func_109() && !func_108())))
				{
					uParam0->f_8 = 0;
					func_68(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_55(0);
						uParam0->f_21 = unk_0x0F41667633BB4D9C(0, uParam0->f_23);
					}
					func_107(&(uParam0->f_41), 0);
					func_68(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_199(uParam0, 1, 0);
					func_85();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x829D6A5974343F79(&(Global_1607808.f_63714[0 /*6*/]), 1, func_65(iParam2)))
			{
				func_68(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x9A9EDEED724C46B0())
			{
				uParam0->f_40 = unk_0x7225BAAA2E0445CB();
				if (unk_0x2D974C51834ED418())
				{
				}
				else
				{
					func_199(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7225BAAA2E0445CB();
					*uParam0 = 0;
					func_85();
					return 1;
				}
				if (unk_0xD62FF0DEBF65EC41() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0xB9F0BDDFEFE7158E(uParam0->f_5);
					func_68(uParam0, 22);
				}
				else
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					func_85();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xD3ED767E7D934ECF(uParam0->f_5))
			{
				if (unk_0x1E28DC354C3021D6(uParam0->f_5))
				{
					func_68(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_68(uParam0, 0);
					return 0;
				}
				else
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					func_85();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xF2D0190A9D95DDA7(uParam0->f_5))
			{
				if (unk_0x13413F682F6E1BE3(uParam0->f_5))
				{
					func_104();
					func_199(uParam0, 1, 0);
					Global_1606563 = 1;
					func_85();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_199(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_85();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0x236D8AD7EE179F46(Global_1607808.f_7, 0))
			{
				if (bParam7)
				{
					if (func_103(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_199(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_85();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_199(uParam0, 1, 0);
					func_85();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_199(uParam0, 1, 1);
				func_85();
				return 1;
			}
			break;
		
		case 10:
			if (func_120(uParam0, 0, bParam3, iParam2))
			{
				func_70();
				func_68(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x32DDEEDC80F06B0F(&(Global_968814.f_1160), Global_968814.f_65, func_65(0)))
				{
					func_68(uParam0, 12);
				}
			}
			else if (unk_0x32DDEEDC80F06B0F(&(Global_967557.f_1160), Global_967557.f_65, func_65(0)))
			{
				func_68(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x9A9EDEED724C46B0())
			{
				if (unk_0x2D974C51834ED418())
				{
				}
				else
				{
					func_199(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7225BAAA2E0445CB();
					*uParam0 = 0;
					func_85();
					return 1;
				}
				if (unk_0xD62FF0DEBF65EC41() > 0)
				{
					if (uParam0->f_16)
					{
						Global_968814.f_65 = unk_0xD62FF0DEBF65EC41();
					}
					else
					{
						Global_967557.f_65 = unk_0xD62FF0DEBF65EC41();
					}
					uParam0->f_8 = 0;
					func_199(uParam0, 0, bParam8);
					func_134(uParam0);
					func_68(uParam0, 13);
				}
				else
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					func_85();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_77())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_968814.f_65 - 1))
					{
						if (unk_0x74D72079A2BA9807(&(Global_968814.f_1160[uParam0->f_9 /*6*/])))
						{
							func_102(uParam0, &Global_968814);
							unk_0xF9C483CA7AFB7A7C();
						}
						uParam0->f_9++;
					}
					func_85();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_967557.f_65 - 1))
					{
						if (unk_0x74D72079A2BA9807(&(Global_967557.f_1160[uParam0->f_9 /*6*/])))
						{
							func_102(uParam0, &Global_967557);
							unk_0xF9C483CA7AFB7A7C();
						}
						uParam0->f_9++;
					}
					func_85();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_101(uParam0, &Global_968814))
				{
					if (uParam0->f_27)
					{
						func_199(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_85();
						return 1;
					}
					else
					{
						func_68(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_101(uParam0, &Global_967557))
			{
				if (uParam0->f_27)
				{
					func_199(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_85();
					return 1;
				}
				else
				{
					func_68(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_68(uParam0, 0);
			func_70();
			func_199(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_85();
			return 1;
			break;
	}
	return 0;
}

int func_101(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0xBE34D6C7947A4F3B(uParam0->f_7))
		{
			if (!func_132(uParam0->f_24, uParam0->f_25, unk_0x6ECFE95B5E16E283(0), unk_0x77F57E2DD3A1100B(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_102(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_70();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_65)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_102(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(iVar0, "mission");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "gen");
	uParam1->f_71[uParam0->f_9 /*68*/].f_45 = { func_54(iVar2, "start") };
	if (func_77())
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*68*/].f_12), unk_0xE41666201B707589(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*68*/].f_12), unk_0x9F0F1DA7341B8B34(uParam0->f_7), 64);
	}
	if (!func_77())
	{
		uParam1->f_71[uParam0->f_9 /*68*/].f_44 = unk_0xC0E59AE5A08C8279(uParam0->f_7);
	}
	uParam1->f_71[uParam0->f_9 /*68*/].f_67 = unk_0x77F57E2DD3A1100B(uParam0->f_7);
	uParam1->f_71[uParam0->f_9 /*68*/].f_56 = unk_0x6ED9878D7F475A3E(iVar2, "min");
	uParam1->f_71[uParam0->f_9 /*68*/].f_59 = unk_0x6ED9878D7F475A3E(iVar2, "tnum");
	uParam1->f_71[uParam0->f_9 /*68*/].f_60 = unk_0x6ED9878D7F475A3E(iVar2, "num");
	uParam1->f_71[uParam0->f_9 /*68*/].f_54 = unk_0x6ED9878D7F475A3E(iVar2, "type");
	uParam1->f_71[uParam0->f_9 /*68*/].f_55 = unk_0x6ED9878D7F475A3E(iVar2, "subtype");
	uParam1->f_71[uParam0->f_9 /*68*/].f_48 = { func_54(iVar2, "cam") };
	uParam1->f_71[uParam0->f_9 /*68*/].f_51 = { func_53(iVar2) };
	uParam1->f_71[uParam0->f_9 /*68*/].f_57 = func_55(uParam0->f_7);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*68*/].f_6), unk_0x840038A4D157DB8D(uParam0->f_7), 24);
	if (!func_77())
	{
		uParam1->f_71[uParam0->f_9 /*68*/].f_61 = func_51(unk_0x6995A3356FFC8D14(uParam0->f_7, 0), unk_0xBB71019D61FD43A5(uParam0->f_7, 0));
	}
	if (func_81() != 2)
	{
		if (uParam1->f_71[uParam0->f_9 /*68*/].f_60 > Global_262145.f_4736)
		{
			uParam1->f_71[uParam0->f_9 /*68*/].f_60 = Global_262145.f_4736;
		}
		if (uParam1->f_71[uParam0->f_9 /*68*/].f_56 > Global_262145.f_4736)
		{
			uParam1->f_71[uParam0->f_9 /*68*/].f_56 = Global_262145.f_4736;
		}
	}
	uParam1->f_71[uParam0->f_9 /*68*/].f_58 = unk_0x6ED9878D7F475A3E(iVar2, "rank");
	func_50(uParam1->f_71[uParam0->f_9 /*68*/].f_54, &(uParam1->f_71[uParam0->f_9 /*68*/].f_60), &(uParam1->f_71[uParam0->f_9 /*68*/].f_56));
	if (uParam1->f_6 < uParam1->f_71[uParam0->f_9 /*68*/].f_56)
	{
		uParam1->f_6 = uParam1->f_71[uParam0->f_9 /*68*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_71[uParam0->f_9 /*68*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_71[uParam0->f_9 /*68*/].f_60;
	}
	uParam1->f_71[uParam0->f_9 /*68*/].f_66 = 1;
	unk_0xF3148AAF69AF9CBC(&(uParam1->f_71[uParam0->f_9 /*68*/].f_64), 13);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*68*/]), unk_0x7972C301FEBB4957(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
	}
	if (!func_77())
	{
		StringCopy(&(uParam1->f_1160[uParam0->f_9 /*6*/]), unk_0x7972C301FEBB4957(uParam0->f_9), 24);
		if (unk_0xA2A030BB648525DF(uParam0->f_9))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_71[uParam0->f_9 /*68*/].f_64), 14);
			if (unk_0x8BE02EEFCBD13E2E() != 0)
			{
				unk_0x9BE3E13B1F3F1100();
			}
		}
	}
}

int func_103(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x2EDF753A649EE477(*uParam0);
			}
			unk_0x07FC7C843837B591();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0xE7735C651E1B62A4(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xA5F3C3859DF63181(unk_0x9B2133056C853CCD(0, uParam3)))
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
							unk_0x2EDF753A649EE477(*uParam0);
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

void func_104()
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
	char cVar16[16];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
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
	
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(iVar0, "mission");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "endcon");
	iVar3 = unk_0xDCDDFBE975CF2B6C(iVar1, "ene");
	iVar4 = unk_0x6ED9878D7F475A3E(iVar3, "no");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar3, "loc");
	iVar6 = unk_0xDCDDFBE975CF2B6C(iVar1, "goto");
	iVar7 = unk_0x6ED9878D7F475A3E(iVar6, "no");
	iVar8 = unk_0xDCDDFBE975CF2B6C(iVar1, "veh");
	iVar9 = unk_0x6ED9878D7F475A3E(iVar8, "no");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar8, "loc");
	iVar11 = unk_0xDCDDFBE975CF2B6C(iVar1, "obj");
	iVar12 = unk_0x6ED9878D7F475A3E(iVar11, "no");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1607808.f_22 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1606563.f_1[iVar14] = unk_0x09E288B6CD41A6F0(unk_0xEBB80152B94CE1CB(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0xEBB80152B94CE1CB(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0xEBB80152B94CE1CB(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0xEBB80152B94CE1CB(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1606563.f_1[iVar14] - 1))
			{
				Global_1606563.f_6[iVar14 /*18*/][iVar15] = unk_0x09E288B6CD41A6F0(uVar25[iVar14], iVar15);
				Global_1606563.f_79[iVar14 /*18*/][iVar15] = unk_0x09E288B6CD41A6F0(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1606563.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0x48416761101A75AD(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1606563.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1607808.f_22 - 1))
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
		while (iVar14 < Global_1606563.f_1[iVar80])
		{
			if ((!unk_0x236D8AD7EE179F46(Global_1606563.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0x236D8AD7EE179F46(Global_1606563.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0xEBB80152B94CE1CB(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0xEBB80152B94CE1CB(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x09E288B6CD41A6F0(uVar60[iVar80], iVar14);
			iVar193 = unk_0x09E288B6CD41A6F0(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x236D8AD7EE179F46(Global_1606563.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x236D8AD7EE179F46(Global_1606563.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_106(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1701173.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x426E928726A693EA(iVar10, iVar14) };
					Global_1701173.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1701173.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_105(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0xEBB80152B94CE1CB(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0xEBB80152B94CE1CB(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x09E288B6CD41A6F0(uVar70[iVar80], iVar14);
			iVar193 = unk_0x09E288B6CD41A6F0(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x236D8AD7EE179F46(Global_1606563.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x236D8AD7EE179F46(Global_1606563.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_106(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1701173.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x426E928726A693EA(iVar13, iVar14) };
					Global_1701173.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1701173.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_105(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0xEBB80152B94CE1CB(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0xEBB80152B94CE1CB(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0xEBB80152B94CE1CB(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x09E288B6CD41A6F0(uVar50[iVar80], iVar14);
			iVar15 = unk_0x09E288B6CD41A6F0(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x236D8AD7EE179F46(Global_1606563.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x236D8AD7EE179F46(Global_1606563.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_106(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1701173.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x426E928726A693EA(uVar55[iVar80], iVar14) };
					Global_1701173.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1701173.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_105(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0xEBB80152B94CE1CB(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0xEBB80152B94CE1CB(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x09E288B6CD41A6F0(uVar40[iVar80], iVar14);
			iVar15 = unk_0x09E288B6CD41A6F0(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x236D8AD7EE179F46(Global_1606563.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x236D8AD7EE179F46(Global_1606563.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_106(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1701173.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0x426E928726A693EA(iVar5, iVar14) };
					Global_1701173.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1701173.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1701173.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1701173.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_105(iVar15, 2) };
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
				if (Global_1701173.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1701173.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1701173.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1701173.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1701173.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0x8BE02EEFCBD13E2E() != 0)
	{
		unk_0x9BE3E13B1F3F1100();
	}
}

Vector3 func_105(int iParam0, int iParam1)
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

int func_106(int iParam0, int iParam1, int iParam2)
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

void func_107(var uParam0, bool bParam1)
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
		unk_0x2EDF753A649EE477(*uParam0);
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

bool func_108()
{
	return Global_2428865.f_594;
}

int func_109()
{
	if (((func_113() || func_112()) || func_111()) || func_110())
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 1);
}

bool func_111()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 2);
}

bool func_112()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 20);
}

var func_113()
{
	return Global_2428865.f_573;
}

int func_114(int iParam0)
{
	if ((((func_119(iParam0) || func_118(iParam0)) || func_117(iParam0)) || func_116(iParam0)) || func_115(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_115(int iParam0)
{
	return iParam0 == Global_262145.f_6902;
}

bool func_116(int iParam0)
{
	return iParam0 == Global_262145.f_6896;
}

bool func_117(int iParam0)
{
	return iParam0 == Global_262145.f_6890;
}

bool func_118(int iParam0)
{
	return iParam0 == Global_262145.f_6883;
}

bool func_119(int iParam0)
{
	return iParam0 == Global_262145.f_6878;
}

int func_120(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_74())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_77())
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
			func_70();
			func_121();
			Global_1690123.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1690148.f_5 = 0;
				Global_1690148.f_4 = 0;
				Global_1690148.f_1 = 0;
				Global_1690148.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1690148.f_5 = 0;
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
			if (unk_0x93854FECBC1CB0A7(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0x8BE02EEFCBD13E2E();
					Global_1690154 = unk_0x6ED9878D7F475A3E(iVar0, "pt");
					Global_1690154.f_1 = unk_0x6ED9878D7F475A3E(iVar0, "pu");
					Global_1690154.f_2 = unk_0x6ED9878D7F475A3E(iVar0, "ft");
					Global_1690154.f_3 = unk_0x6ED9878D7F475A3E(iVar0, "fu");
					Global_1690154.f_4 = unk_0x6ED9878D7F475A3E(iVar0, "qt");
					Global_1690154.f_5 = unk_0x6ED9878D7F475A3E(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0x8BE02EEFCBD13E2E();
					Global_1690123.f_10 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "dt"));
					Global_1690123.f_11 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "du"));
					Global_1690123.f_9 = (Global_1690123.f_10 / Global_1690123.f_11);
					Global_1690123.f_13 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "pt"));
					Global_1690123.f_14 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "pu"));
					Global_975518 = unk_0xF2DB717A73826179(Global_1690123.f_14);
					Global_1690123.f_12 = (Global_1690123.f_13 / Global_1690123.f_14);
					Global_1690123.f_15 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "qt"));
					Global_1690123.f_17 = unk_0xBBDA792448DB5A89(unk_0x6ED9878D7F475A3E(iVar0, "qu"));
					Global_1690123.f_16 = (Global_1690123.f_15 / Global_1690123.f_17);
				}
				if (unk_0x8BE02EEFCBD13E2E() != 0)
				{
					unk_0x9BE3E13B1F3F1100();
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
			if (unk_0xA2A030BB648525DF(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x693D340E678D3640(iParam1))
					{
						iVar0 = unk_0x8BE02EEFCBD13E2E();
						if (iParam3 == 0)
						{
							Global_1690123 = unk_0x6ED9878D7F475A3E(iVar0, "quit");
							Global_1690123.f_2 = unk_0x6ED9878D7F475A3E(iVar0, "ply");
							Global_1690123.f_8 = unk_0x6ED9878D7F475A3E(iVar0, "fl");
							if (Global_1690123.f_2 > 0)
							{
								Global_1690123.f_5 = 1;
							}
							unk_0x9BE3E13B1F3F1100();
						}
						else if (iParam3 == 4)
						{
							Global_1690148.f_5 = unk_0xEFDDDC39448CB097(iVar0, "won");
							Global_1690148.f_4 = unk_0x6ED9878D7F475A3E(iVar0, "ply");
							Global_1690148.f_1 = unk_0x6ED9878D7F475A3E(iVar0, "quit");
							Global_1690148.f_2 = unk_0x6ED9878D7F475A3E(iVar0, "fl");
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

void func_121()
{
	Global_1690123 = 0;
	Global_1690123.f_2 = 0;
	Global_1690123.f_8 = 0;
	Global_1690123.f_3 = 0;
	Global_1690123.f_6 = 0;
}

int func_122(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_124() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_77() && iParam1 == 0) && !bParam3)
			{
				if (Global_1607808.f_64069 == 0)
				{
					if (Global_1607808 == 0)
					{
						if (((((Global_1607808.f_2 != 6 && !unk_0x236D8AD7EE179F46(Global_1607808.f_4, 20)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_4, 21)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_4, 22)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_4, 23)) && Global_1607808.f_2 != 5)
						{
							func_199(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_85();
							unk_0x1E982967BE82CA6C(uParam0->f_5);
							func_70();
							return 1;
						}
					}
					else if (Global_1607808 != 2 && Global_1607808 != 1)
					{
						func_199(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_85();
						unk_0x1E982967BE82CA6C(uParam0->f_5);
						func_70();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1607808 == 0 && Global_1607808.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_77())
		{
			if (!unk_0x4E64C704D99A9C41(unk_0x19ADEAD327A08074(0)))
			{
				Global_1607808.f_64058 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_123();
	}
	func_68(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_123()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2428865.f_26.f_3), 7);
}

bool func_124()
{
	return unk_0x2D6859674806FDCE(-1762644250);
}

void func_125(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2438932, "", 64);
	}
	else
	{
		Global_2438932 = { Param1 };
	}
	Global_2438931 = iParam0;
}

int func_126(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0xB318FDA0D1ABDB20(uParam1))
	{
		return 0;
	}
	unk_0xC3FF8FEA4F22B327(uParam1, &uVar0, 13);
	if (unk_0x7BD139E6ED31A2EB(&uVar0, 13) && unk_0x7628BE3C0E25C192(&uVar0))
	{
		*uParam0 = unk_0x9919379E0C2E8BD3(&uVar0);
		if (unk_0xA89AE5060232966A(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_127()
{
	return Global_2428865.f_26.f_47;
}

int func_128()
{
	return Global_2437012;
}

bool func_129()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

void func_130(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(*uParam0, "data");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "trg");
	*uParam1 = unk_0xEBB80152B94CE1CB(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x0D5F4F1912AC26E7(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0xEFDDDC39448CB097(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0xEFDDDC39448CB097(iVar1, "open");
	Var3 = { func_131(unk_0x6ECFE95B5E16E283(0)) };
	unk_0xEF956A1EC046AA4A(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x6ED9878D7F475A3E(iVar2, "scr");
	uParam2->f_5 = unk_0x6ED9878D7F475A3E(iVar2, "time");
	uParam2->f_1 = unk_0x6ED9878D7F475A3E(iVar1, "cash");
	uParam2->f_65 = unk_0x03B5FEE1D0E289A0(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0xC190162B06FBA317(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1160[iVar0 /*6*/]), unk_0xE41666201B707589(uVar51[iVar0], "cid"), 24);
		uParam2->f_71[iVar0 /*68*/].f_62 = unk_0x6ED9878D7F475A3E(uVar51[iVar0], "scr");
		uParam2->f_71[iVar0 /*68*/].f_63 = unk_0x6ED9878D7F475A3E(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_131(var uParam0)
{
	struct<13> Var0;
	
	unk_0xACDA348B13135667(uParam0, &Var0, 13);
	return Var0;
}

int func_132(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_131(sParam2) };
		Var13 = { func_133(unk_0x1329891157A54C63()) };
		if (bParam1)
		{
			if (unk_0x4F493F24AAFFC673(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x5762EE910D467202(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x3F0C224D3CC05EF2())
		{
			if (unk_0x4F493F24AAFFC673(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x674C42E5AE485B7E(&Var0) && unk_0x02F6979593134AF6(&Var0))
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
			Var13 = { func_133(unk_0x1329891157A54C63()) };
			if (!unk_0x4F493F24AAFFC673(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_133(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

void func_134(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_968814.f_6 = 0;
		Global_968814.f_7 = 32;
	}
	else
	{
		Global_967557.f_6 = 0;
		Global_967557.f_7 = 32;
	}
}

void func_135(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0x8BE02EEFCBD13E2E();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0xEBB80152B94CE1CB(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x03B5FEE1D0E289A0(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0xC190162B06FBA317(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1160[iVar0 /*6*/]), unk_0xE41666201B707589(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0xEFDDDC39448CB097(*uParam0, "h2h");
	uParam2->f_9 = unk_0xEFDDDC39448CB097(*uParam0, "ch");
	if (func_77())
	{
		StringCopy(&(uParam2->f_12), unk_0xE41666201B707589(*uParam0, "name"), 64);
	}
}

void func_136(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x8BE02EEFCBD13E2E();
	iVar1 = unk_0xDCDDFBE975CF2B6C(iVar0, "mission");
	iVar2 = unk_0xDCDDFBE975CF2B6C(iVar1, "gen");
	Global_1607808.f_64031 = unk_0x6ED9878D7F475A3E(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_173(iVar1, iParam0, bParam1);
		func_172(iVar1);
		func_171(&iVar1);
		func_170(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_99())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_169(iVar1);
			func_168(iVar1);
			func_167(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_166(iVar1);
			func_165(iVar2);
			func_164(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_163(iVar1);
			func_162(iVar1);
			func_161(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_96())
	{
		func_159(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_157(iVar1);
		func_156(iVar1);
		func_155(iVar1);
		func_154(iVar1);
		func_153(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_151(iVar1);
		func_150(iVar1);
		func_148(iVar1);
		func_144(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1607808 == 1)
	{
		func_168(iVar1);
		func_143(iVar1);
	}
	else
	{
		func_138(iVar1);
	}
	unk_0xC69E84EBBD7166E6(&(Global_1607808.f_4), 15);
	unk_0xC69E84EBBD7166E6(&(Global_1607808.f_4), 18);
	unk_0xC69E84EBBD7166E6(&(Global_1607808.f_4), 19);
	unk_0xC69E84EBBD7166E6(&(Global_1607808.f_4), 28);
	unk_0xC69E84EBBD7166E6(&(Global_1607808.f_4), 27);
	if (func_46(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_4), 15);
	}
	else if (func_45(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_4), 18);
	}
	else if (func_44(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_4), 19);
	}
	else if (func_43(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_4), 28);
	}
	else if (func_42(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_4), 27);
	}
	else if (func_41(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 0);
	}
	else if (func_40(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 1);
	}
	else if (func_39(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 2);
	}
	else if (func_38(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 3);
	}
	else if (func_37(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 4);
	}
	else if (func_36(Global_1607808.f_63421))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_5), 5);
	}
	func_137(Global_1607808.f_63421);
}

void func_137(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7304[iVar0] || iParam0 == Global_262145.f_7313[iVar0])
		{
			Global_1607808.f_58 = { func_34(0, iVar0) };
			Global_1607808.f_61 = { func_33(0, iVar0) };
			Var1 = { func_32(0, iVar0) };
			Global_1607808.f_73 = Var1.f_2;
			Global_1607808.f_1 = 0;
			Global_1607808.f_2 = 8;
			Global_1607808.f_64038 = 0;
			Global_1607808.f_64042 = 16777215;
		}
		iVar0++;
	}
}

void func_138(int iParam0)
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
	var uVar14[4];
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
	var uVar51[4];
	var uVar56[4];
	var uVar61[4];
	var uVar66[4];
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	var uVar86[4];
	var uVar91[4];
	var uVar96[4];
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
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	var uVar160[5];
	var uVar166[5];
	var uVar172[5];
	var uVar178[5];
	var uVar184[5];
	var uVar190[5];
	var uVar196[5];
	var uVar202[5];
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
	int iVar226;
	int iVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	int iVar231;
	int iVar232;
	int iVar233;
	int iVar234;
	int iVar235;
	int iVar236;
	int iVar237;
	var uVar238[2];
	var uVar241[2];
	
	iVar6 = unk_0xDCDDFBE975CF2B6C(iParam0, "ene");
	Global_1607808.f_40762 = unk_0x6ED9878D7F475A3E(iVar6, "no");
	if (unk_0x0D5F4F1912AC26E7(iVar6, "spcap") == 2 && unk_0x6ED9878D7F475A3E(iVar6, "spcap") != 0)
	{
		Global_1607808.f_40763 = unk_0x6ED9878D7F475A3E(iVar6, "spcap");
	}
	else
	{
		Global_1607808.f_40763 = 50;
	}
	Global_1607808.f_40765 = unk_0x6ED9878D7F475A3E(iVar6, "time");
	Global_1607808.f_40766 = unk_0x6ED9878D7F475A3E(iVar6, "pal");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar6, "loc");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar6, "head");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar6, "rng");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar6, "model");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar6, "gun");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar6, "skill");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar6, "rsp");
	if (Global_1607808 == 1)
	{
		uVar14[0] = unk_0xEBB80152B94CE1CB(iVar6, "team");
	}
	iVar19 = unk_0xEBB80152B94CE1CB(iVar6, "wep");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar6, "hlt");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar6, "lghlt");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar6, "veh");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar6, "foll");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar6, "iaim");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar6, "iaimt");
	iVar26 = unk_0xEBB80152B94CE1CB(iVar6, "iaimr");
	iVar27 = unk_0xEBB80152B94CE1CB(iVar6, "sanim");
	iVar28 = unk_0xEBB80152B94CE1CB(iVar6, "sat");
	iVar29 = unk_0xEBB80152B94CE1CB(iVar6, "saru");
	iVar30 = unk_0xEBB80152B94CE1CB(iVar6, "sara");
	iVar31 = unk_0xEBB80152B94CE1CB(iVar6, "satt");
	iVar32 = unk_0xEBB80152B94CE1CB(iVar6, "whost");
	iVar33 = unk_0xEBB80152B94CE1CB(iVar6, "flee");
	iVar34 = unk_0xEBB80152B94CE1CB(iVar6, "frr");
	iVar35 = unk_0xEBB80152B94CE1CB(iVar6, "pfrmr");
	iVar36 = unk_0xEBB80152B94CE1CB(iVar6, "psnt");
	iVar37 = unk_0xEBB80152B94CE1CB(iVar6, "psnei");
	iVar38 = unk_0xEBB80152B94CE1CB(iVar6, "p2sp");
	iVar39 = unk_0xEBB80152B94CE1CB(iVar6, "p2sh");
	iVar40 = unk_0xEBB80152B94CE1CB(iVar6, "accu");
	iVar41 = unk_0xEBB80152B94CE1CB(iVar6, "lgacc");
	iVar42 = unk_0xEBB80152B94CE1CB(iVar6, "cmsty");
	iVar43 = unk_0xEBB80152B94CE1CB(iVar6, "pedbs");
	iVar44 = unk_0xEBB80152B94CE1CB(iVar6, "pbstwo");
	iVar45 = unk_0xEBB80152B94CE1CB(iVar6, "pbs3");
	iVar46 = unk_0xEBB80152B94CE1CB(iVar6, "pbs4");
	iVar47 = unk_0xEBB80152B94CE1CB(iVar6, "pbs5");
	iVar48 = unk_0xEBB80152B94CE1CB(iVar6, "pbs6");
	iVar49 = unk_0xEBB80152B94CE1CB(iVar6, "pbs7");
	iVar50 = unk_0xEBB80152B94CE1CB(iVar6, "pbs8");
	if (func_99())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1607808.f_22 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar51[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar56[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar61[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar66[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar160[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar166[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar172[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar178[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar190[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar184[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar196[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar202[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			iVar3++;
		}
		iVar101 = unk_0xEBB80152B94CE1CB(iVar6, "objt");
		iVar102 = unk_0xEBB80152B94CE1CB(iVar6, "team");
		iVar103 = unk_0xEBB80152B94CE1CB(iVar6, "spawn");
		iVar104 = unk_0xEBB80152B94CE1CB(iVar6, "acts");
		iVar105 = unk_0xEBB80152B94CE1CB(iVar6, "objt2");
		iVar106 = unk_0xEBB80152B94CE1CB(iVar6, "team2");
		iVar107 = unk_0xEBB80152B94CE1CB(iVar6, "spawn2");
		iVar108 = unk_0xEBB80152B94CE1CB(iVar6, "acts2");
		iVar109 = unk_0xEBB80152B94CE1CB(iVar6, "objt3");
		iVar110 = unk_0xEBB80152B94CE1CB(iVar6, "team3");
		iVar111 = unk_0xEBB80152B94CE1CB(iVar6, "spawn3");
		iVar112 = unk_0xEBB80152B94CE1CB(iVar6, "acts3");
		iVar113 = unk_0xEBB80152B94CE1CB(iVar6, "objt4");
		iVar114 = unk_0xEBB80152B94CE1CB(iVar6, "team4");
		iVar115 = unk_0xEBB80152B94CE1CB(iVar6, "spawn4");
		iVar116 = unk_0xEBB80152B94CE1CB(iVar6, "acts4");
		iVar117 = unk_0xEBB80152B94CE1CB(iVar6, "act");
		iVar118 = unk_0xEBB80152B94CE1CB(iVar6, "pper");
		iVar119 = unk_0xEBB80152B94CE1CB(iVar6, "infr");
		iVar120 = unk_0xEBB80152B94CE1CB(iVar6, "cca");
		iVar121 = unk_0xEBB80152B94CE1CB(iVar6, "ccid");
		iVar122 = unk_0xEBB80152B94CE1CB(iVar6, "gfr");
		iVar123 = unk_0xEBB80152B94CE1CB(iVar6, "msr");
		iVar124 = unk_0xEBB80152B94CE1CB(iVar6, "bnr");
		iVar125 = unk_0xEBB80152B94CE1CB(iVar6, "phor");
		iVar126 = unk_0xEBB80152B94CE1CB(iVar6, "folr");
		iVar128 = unk_0xEBB80152B94CE1CB(iVar6, "pcvl");
		iVar129 = unk_0xEBB80152B94CE1CB(iVar6, "pcvr");
		iVar127 = unk_0xEBB80152B94CE1CB(iVar6, "pdfw");
		iVar133 = unk_0xEBB80152B94CE1CB(iVar6, "pvdp1");
		iVar134 = unk_0xEBB80152B94CE1CB(iVar6, "pvdp2");
		iVar130 = unk_0xEBB80152B94CE1CB(iVar6, "paaw");
		iVar131 = unk_0xEBB80152B94CE1CB(iVar6, "paav1");
		iVar132 = unk_0xEBB80152B94CE1CB(iVar6, "paav2");
		iVar135 = unk_0xEBB80152B94CE1CB(iVar6, "dt");
		iVar136 = unk_0xEBB80152B94CE1CB(iVar6, "do");
		iVar137 = unk_0xEBB80152B94CE1CB(iVar6, "dtim");
		iVar138 = unk_0xEBB80152B94CE1CB(iVar6, "dln");
		iVar139 = unk_0xEBB80152B94CE1CB(iVar6, "pvsp");
		iVar145 = unk_0xEBB80152B94CE1CB(iVar6, "drge");
		iVar146 = unk_0xEBB80152B94CE1CB(iVar6, "agrot");
		iVar147 = unk_0xEBB80152B94CE1CB(iVar6, "gtds");
		iVar148 = unk_0xEBB80152B94CE1CB(iVar6, "pstat");
		iVar149 = unk_0xEBB80152B94CE1CB(iVar6, "pstar");
		iVar150 = unk_0xEBB80152B94CE1CB(iVar6, "dmv");
		iVar151 = unk_0xEBB80152B94CE1CB(iVar6, "blkr");
		iVar152 = unk_0xEBB80152B94CE1CB(iVar6, "let");
		iVar153 = unk_0xEBB80152B94CE1CB(iVar6, "escr");
		iVar154 = unk_0xEBB80152B94CE1CB(iVar6, "actr");
		iVar155 = unk_0xEBB80152B94CE1CB(iVar6, "actv");
		iVar156 = unk_0xEBB80152B94CE1CB(iVar6, "actv2");
		iVar157 = unk_0xEBB80152B94CE1CB(iVar6, "actv3");
		iVar158 = unk_0xEBB80152B94CE1CB(iVar6, "actv4");
		iVar159 = unk_0xEBB80152B94CE1CB(iVar6, "actv5");
		iVar208 = unk_0xEBB80152B94CE1CB(iVar6, "pedct");
		iVar210 = unk_0xEBB80152B94CE1CB(iVar6, "pdcra");
		iVar209 = unk_0xEBB80152B94CE1CB(iVar6, "pedcr");
		iVar211 = unk_0xEBB80152B94CE1CB(iVar6, "pedcv");
		iVar212 = unk_0xEBB80152B94CE1CB(iVar6, "pedbc");
		iVar213 = unk_0xEBB80152B94CE1CB(iVar6, "pdbps");
		iVar214 = unk_0xEBB80152B94CE1CB(iVar6, "avrad");
		iVar215 = unk_0xEBB80152B94CE1CB(iVar6, "pedst");
		iVar216 = unk_0xEBB80152B94CE1CB(iVar6, "gotor");
		iVar217 = unk_0xEBB80152B94CE1CB(iVar6, "invbs");
		iVar218 = unk_0xEBB80152B94CE1CB(iVar6, "gort");
		iVar219 = unk_0xEBB80152B94CE1CB(iVar6, "gorr");
		iVar220 = unk_0xEBB80152B94CE1CB(iVar6, "gorw");
		iVar221 = unk_0xEBB80152B94CE1CB(iVar6, "cstnm");
		iVar222 = unk_0xEBB80152B94CE1CB(iVar6, "pspdl");
		iVar223 = unk_0xEBB80152B94CE1CB(iVar6, "psgr");
		iVar224 = unk_0xEBB80152B94CE1CB(iVar6, "pssgr");
		iVar225 = unk_0xEBB80152B94CE1CB(iVar6, "psctt");
		iVar226 = unk_0xEBB80152B94CE1CB(iVar6, "pscto");
		iVar227 = unk_0xEBB80152B94CE1CB(iVar6, "pscta");
		iVar228 = unk_0xEBB80152B94CE1CB(iVar6, "psctac");
		iVar229 = unk_0xEBB80152B94CE1CB(iVar6, "psctv");
		iVar230 = unk_0xEBB80152B94CE1CB(iVar6, "pscth");
		iVar231 = unk_0xEBB80152B94CE1CB(iVar6, "psctot");
		iVar232 = unk_0xEBB80152B94CE1CB(iVar6, "psctoi");
		iVar233 = unk_0xEBB80152B94CE1CB(iVar6, "pscatd");
		iVar234 = unk_0xEBB80152B94CE1CB(iVar6, "cutsc");
		iVar235 = unk_0xEBB80152B94CE1CB(iVar6, "cutsh");
		iVar236 = unk_0xEBB80152B94CE1CB(iVar6, "nmpass");
		iVar237 = unk_0xEBB80152B94CE1CB(iVar6, "nmfail");
		iVar140 = unk_0xEBB80152B94CE1CB(iVar6, "pmcp");
		iVar141 = unk_0xEBB80152B94CE1CB(iVar6, "pmcf");
		iVar142 = unk_0xEBB80152B94CE1CB(iVar6, "pambv");
		iVar143 = unk_0xEBB80152B94CE1CB(iVar6, "pwrpt");
		iVar144 = unk_0xEBB80152B94CE1CB(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar238[iVar1] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar241[iVar1] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_40762 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1607808.f_40767[iVar0 /*286*/] = { unk_0x426E928726A693EA(iVar7, iVar0) };
			Global_1607808.f_40767[iVar0 /*286*/].f_3 = unk_0x649362E253C7BDC7(iVar8, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_4 = unk_0x649362E253C7BDC7(iVar9, iVar0);
			if (Global_1607808.f_40767[iVar0 /*286*/].f_4 < 0.75f)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_4 = 0.75f;
			}
			iVar2 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_14 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_14 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_14 = iVar2;
			}
			if (!func_96() && !func_142())
			{
				if (!unk_0x5FA5FCC70B2BAD3C(Global_1607808.f_40767[iVar0 /*286*/].f_14))
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_14 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_15 = iVar2;
			iVar2 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_16 = iVar2;
			if (Global_1607808 == 1)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_17[0] = unk_0x09E288B6CD41A6F0(uVar14[0], iVar0);
			}
			Global_1607808.f_40767[iVar0 /*286*/].f_50 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_36 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_37 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
			if (unk_0xD36974570396CA9B(iVar21, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_38 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_38 = -1;
			}
			Global_1607808.f_40767[iVar0 /*286*/].f_56 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_32 = unk_0x09E288B6CD41A6F0(iVar13, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_39 = unk_0x09E288B6CD41A6F0(iVar24, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_40 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_41 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_42 = unk_0x09E288B6CD41A6F0(iVar27, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_43 = unk_0x09E288B6CD41A6F0(iVar28, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_44 = unk_0x09E288B6CD41A6F0(iVar29, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_45 = unk_0x649362E253C7BDC7(iVar30, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_46 = unk_0x09E288B6CD41A6F0(iVar31, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_49 = unk_0x09E288B6CD41A6F0(iVar32, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_47 = unk_0x09E288B6CD41A6F0(iVar33, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_5 = unk_0x649362E253C7BDC7(iVar34, iVar0);
			if ((unk_0xD36974570396CA9B(iVar35, iVar0) == 3 && unk_0xD36974570396CA9B(iVar36, iVar0) == 2) && unk_0xD36974570396CA9B(iVar37, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_6 = unk_0x649362E253C7BDC7(iVar35, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_7 = unk_0x09E288B6CD41A6F0(iVar36, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_8 = unk_0x09E288B6CD41A6F0(iVar37, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_6 = 0f;
				Global_1607808.f_40767[iVar0 /*286*/].f_7 = 0;
				Global_1607808.f_40767[iVar0 /*286*/].f_8 = -1;
			}
			if (unk_0xD36974570396CA9B(iVar38, iVar0) == 5 && unk_0xD36974570396CA9B(iVar39, iVar0) == 3)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_9 = { unk_0x426E928726A693EA(iVar38, iVar0) };
				Global_1607808.f_40767[iVar0 /*286*/].f_12 = unk_0x649362E253C7BDC7(iVar39, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
				Global_1607808.f_40767[iVar0 /*286*/].f_12 = 0f;
			}
			Global_1607808.f_40767[iVar0 /*286*/].f_34 = unk_0x09E288B6CD41A6F0(iVar40, iVar0);
			if (unk_0xD36974570396CA9B(iVar41, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_35 = unk_0x09E288B6CD41A6F0(iVar41, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_35 = -1;
			}
			Global_1607808.f_40767[iVar0 /*286*/].f_48 = unk_0x09E288B6CD41A6F0(iVar42, iVar0);
			Global_1607808.f_40767[iVar0 /*286*/].f_188 = unk_0x09E288B6CD41A6F0(iVar43, iVar0);
			if (unk_0xD36974570396CA9B(iVar44, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_189 = unk_0x09E288B6CD41A6F0(iVar44, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_189 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar45, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_190 = unk_0x09E288B6CD41A6F0(iVar45, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_190 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar46, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_191 = unk_0x09E288B6CD41A6F0(iVar46, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_191 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar47, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_192 = unk_0x09E288B6CD41A6F0(iVar47, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_192 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar48, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_193 = unk_0x09E288B6CD41A6F0(iVar48, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_193 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar49, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_194 = unk_0x09E288B6CD41A6F0(iVar49, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_194 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar50, iVar0) == 2)
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_195 = unk_0x09E288B6CD41A6F0(iVar50, iVar0);
			}
			else
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_195 = 0;
			}
			if (func_99())
			{
				Global_1607808.f_40767[iVar0 /*286*/].f_57 = unk_0x09E288B6CD41A6F0(iVar101, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_58 = unk_0x09E288B6CD41A6F0(iVar102, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_59 = unk_0x09E288B6CD41A6F0(iVar103, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_63 = unk_0x09E288B6CD41A6F0(iVar104, iVar0);
				if (unk_0xD36974570396CA9B(iVar105, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_161 = unk_0x09E288B6CD41A6F0(iVar105, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_158 = unk_0x09E288B6CD41A6F0(iVar106, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_164 = unk_0x09E288B6CD41A6F0(iVar107, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_167 = unk_0x09E288B6CD41A6F0(iVar108, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_162 = unk_0x09E288B6CD41A6F0(iVar109, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_159 = unk_0x09E288B6CD41A6F0(iVar110, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_165 = unk_0x09E288B6CD41A6F0(iVar111, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_168 = unk_0x09E288B6CD41A6F0(iVar112, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_163 = unk_0x09E288B6CD41A6F0(iVar113, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_160 = unk_0x09E288B6CD41A6F0(iVar114, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_166 = unk_0x09E288B6CD41A6F0(iVar115, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_169 = unk_0x09E288B6CD41A6F0(iVar116, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_161 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_158 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_164 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_167 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_162 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_159 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_165 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_168 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_163 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_160 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_166 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_169 = 0;
				}
				Global_1607808.f_40767[iVar0 /*286*/].f_62 = unk_0x09E288B6CD41A6F0(iVar117, iVar0);
				if (unk_0xD36974570396CA9B(iVar118, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_201 = unk_0x09E288B6CD41A6F0(iVar118, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_201 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar119, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_202 = unk_0x09E288B6CD41A6F0(iVar119, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_202 = 250;
				}
				if (unk_0xD36974570396CA9B(iVar120, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_205 = unk_0x09E288B6CD41A6F0(iVar120, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_205 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar121, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_206 = unk_0x09E288B6CD41A6F0(iVar121, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_206 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar122, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_207 = unk_0x09E288B6CD41A6F0(iVar122, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_207 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar123, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_203 = unk_0x09E288B6CD41A6F0(iVar123, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_203 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar124, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_204 = unk_0x09E288B6CD41A6F0(iVar124, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_204 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar125, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_266 = unk_0x09E288B6CD41A6F0(iVar125, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_266 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar126, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_267 = unk_0x09E288B6CD41A6F0(iVar126, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_267 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar128, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_208 = { unk_0x426E928726A693EA(iVar128, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_208 = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar129, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_211 = { unk_0x426E928726A693EA(iVar129, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_211 = { 0f, 0f, 0f };
				}
				if ((unk_0xD36974570396CA9B(iVar133, iVar0) == 5 && unk_0xD36974570396CA9B(iVar134, iVar0) == 5) && unk_0xD36974570396CA9B(iVar127, iVar0) == 3)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_219 = { unk_0x426E928726A693EA(iVar133, iVar0) };
					Global_1607808.f_40767[iVar0 /*286*/].f_222 = { unk_0x426E928726A693EA(iVar134, iVar0) };
					Global_1607808.f_40767[iVar0 /*286*/].f_225 = unk_0x649362E253C7BDC7(iVar127, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_219 = { 0f, 0f, 0f };
					Global_1607808.f_40767[iVar0 /*286*/].f_222 = { 0f, 0f, 0f };
					Global_1607808.f_40767[iVar0 /*286*/].f_225 = 1f;
				}
				if ((unk_0xD36974570396CA9B(iVar130, iVar0) == 3 && unk_0xD36974570396CA9B(iVar131, iVar0) == 5) && unk_0xD36974570396CA9B(iVar132, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_183 = unk_0x649362E253C7BDC7(iVar130, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_177 = { unk_0x426E928726A693EA(iVar131, iVar0) };
					Global_1607808.f_40767[iVar0 /*286*/].f_180 = { unk_0x426E928726A693EA(iVar132, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_183 = 0f;
					Global_1607808.f_40767[iVar0 /*286*/].f_177 = { 0f, 0f, 0f };
					Global_1607808.f_40767[iVar0 /*286*/].f_180 = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar139, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_237 = unk_0x09E288B6CD41A6F0(iVar139, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_237 = 0;
				}
				Global_1607808.f_40767[iVar0 /*286*/].f_215 = unk_0x09E288B6CD41A6F0(iVar135, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_214 = unk_0x09E288B6CD41A6F0(iVar136, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_216 = unk_0x09E288B6CD41A6F0(iVar137, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_217 = unk_0x09E288B6CD41A6F0(iVar138, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_218 = unk_0x09E288B6CD41A6F0(iVar145, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_226 = unk_0x09E288B6CD41A6F0(iVar146, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_184 = unk_0x09E288B6CD41A6F0(iVar147, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_33 = unk_0x09E288B6CD41A6F0(iVar150, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_13 = unk_0x649362E253C7BDC7(iVar151, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_175 = unk_0x09E288B6CD41A6F0(iVar152, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_185 = unk_0x09E288B6CD41A6F0(iVar153, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_176 = unk_0x09E288B6CD41A6F0(iVar154, iVar0);
				Global_1607808.f_40767[iVar0 /*286*/].f_64 = { unk_0x426E928726A693EA(iVar155, iVar0) };
				Global_1607808.f_40767[iVar0 /*286*/].f_64 = { unk_0x426E928726A693EA(iVar155, iVar0) };
				if (unk_0xD36974570396CA9B(iVar156, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[0 /*3*/] = { unk_0x426E928726A693EA(iVar156, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar157, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[1 /*3*/] = { unk_0x426E928726A693EA(iVar157, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar158, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[2 /*3*/] = { unk_0x426E928726A693EA(iVar158, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar159, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[3 /*3*/] = { unk_0x426E928726A693EA(iVar159, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_67[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar148, iVar0) == 2 && unk_0xD36974570396CA9B(iVar149, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_186 = unk_0x09E288B6CD41A6F0(iVar148, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_187 = unk_0x09E288B6CD41A6F0(iVar149, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_186 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_187 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0xD36974570396CA9B(uVar160[iVar3], iVar0) == 2)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_81[iVar3] = unk_0x09E288B6CD41A6F0(uVar160[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_81[iVar3] = 0;
					}
					if (unk_0xD36974570396CA9B(uVar166[iVar3], iVar0) == 2)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_87[iVar3] = unk_0x09E288B6CD41A6F0(uVar166[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_87[iVar3] = 0;
					}
					if (unk_0xD36974570396CA9B(uVar172[iVar3], iVar0) == 5 && unk_0xD36974570396CA9B(uVar178[iVar3], iVar0) == 2)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_93[iVar3 /*3*/] = { unk_0x426E928726A693EA(uVar172[iVar3], iVar0) };
						Global_1607808.f_40767[iVar0 /*286*/].f_109[iVar3] = unk_0x09E288B6CD41A6F0(uVar178[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_93[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1607808.f_40767[iVar0 /*286*/].f_109[iVar3] = 3;
					}
					if (unk_0xD36974570396CA9B(uVar184[iVar3], iVar0) == 2)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_127[iVar3] = unk_0x09E288B6CD41A6F0(uVar184[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_127[iVar3] = -1;
					}
					if (unk_0xD36974570396CA9B(uVar190[iVar3], iVar0) == 3)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_115[iVar3] = unk_0x649362E253C7BDC7(uVar190[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_115[iVar3] = 0f;
					}
					if (unk_0xD36974570396CA9B(uVar196[iVar3], iVar0) == 3)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_121[iVar3] = unk_0x649362E253C7BDC7(uVar196[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_121[iVar3] = 0f;
					}
					if (unk_0xD36974570396CA9B(uVar202[iVar3], iVar0) == 3)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_133[iVar3] = unk_0x649362E253C7BDC7(uVar202[iVar3], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_133[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0xD36974570396CA9B(iVar209, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_227 = unk_0x09E288B6CD41A6F0(iVar209, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_227 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar208, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_228 = unk_0x09E288B6CD41A6F0(iVar208, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_228 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar211, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_230 = unk_0x09E288B6CD41A6F0(iVar211, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_230 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar210, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_229 = unk_0x09E288B6CD41A6F0(iVar210, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_229 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar215, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_236 = unk_0x09E288B6CD41A6F0(iVar215, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_236 = -3;
				}
				if (unk_0xD36974570396CA9B(iVar212, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_252 = unk_0x09E288B6CD41A6F0(iVar212, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_252 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar213, iVar0) == 3)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_263 = unk_0x649362E253C7BDC7(iVar213, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_263 = 1f;
				}
				if (unk_0xD36974570396CA9B(iVar214, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_80 = unk_0x09E288B6CD41A6F0(iVar214, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_80 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar216, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_51 = unk_0x09E288B6CD41A6F0(iVar216, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_51 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar217, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_52 = unk_0x09E288B6CD41A6F0(iVar217, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_52 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar221, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_156 = unk_0x09E288B6CD41A6F0(iVar221, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_156 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar222, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_157 = unk_0x09E288B6CD41A6F0(iVar222, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_157 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar223, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_60 = unk_0x09E288B6CD41A6F0(iVar223, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_60 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar224, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_61 = unk_0x09E288B6CD41A6F0(iVar224, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_61 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar140, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_250 = unk_0x09E288B6CD41A6F0(iVar140, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_250 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar141, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_251 = unk_0x09E288B6CD41A6F0(iVar141, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_251 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar142, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_268 = unk_0x09E288B6CD41A6F0(iVar142, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_268 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar143, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_274 = unk_0x09E288B6CD41A6F0(iVar143, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_274 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar144, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_275 = unk_0x09E288B6CD41A6F0(iVar144, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_275 = -1;
				}
				if ((unk_0xD36974570396CA9B(iVar225, iVar0) == 2 && unk_0xD36974570396CA9B(iVar226, iVar0) == 2) && unk_0xD36974570396CA9B(iVar227, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_145 = unk_0x09E288B6CD41A6F0(iVar225, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_146 = unk_0x09E288B6CD41A6F0(iVar226, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_148 = unk_0x09E288B6CD41A6F0(iVar227, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_145 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_146 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_148 = 0;
				}
				if ((unk_0xD36974570396CA9B(iVar231, iVar0) == 2 && unk_0xD36974570396CA9B(iVar232, iVar0) == 2) && unk_0xD36974570396CA9B(iVar233, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_153 = unk_0x09E288B6CD41A6F0(iVar231, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_154 = unk_0x09E288B6CD41A6F0(iVar232, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_155 = unk_0x09E288B6CD41A6F0(iVar233, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_153 = 0;
					Global_1607808.f_40767[iVar0 /*286*/].f_154 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_155 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar228, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_147 = unk_0x09E288B6CD41A6F0(iVar228, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_147 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar229, iVar0) == 5)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_149 = { unk_0x426E928726A693EA(iVar229, iVar0) };
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_149 = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(iVar230, iVar0) == 3)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_152 = unk_0x649362E253C7BDC7(iVar230, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_152 = 0f;
				}
				if ((unk_0xD36974570396CA9B(iVar218, iVar0) == 2 && unk_0xD36974570396CA9B(iVar219, iVar0) == 2) && unk_0xD36974570396CA9B(iVar220, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_53 = unk_0x09E288B6CD41A6F0(iVar218, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_54 = unk_0x09E288B6CD41A6F0(iVar219, iVar0);
					Global_1607808.f_40767[iVar0 /*286*/].f_55 = unk_0x09E288B6CD41A6F0(iVar220, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_53 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_54 = -1;
					Global_1607808.f_40767[iVar0 /*286*/].f_55 = joaat("weapon_pistol");
				}
				if (Global_1607808.f_2 != 6 && unk_0xD36974570396CA9B(iVar234, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_264 = unk_0x09E288B6CD41A6F0(iVar234, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_264 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar236, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_248 = unk_0x09E288B6CD41A6F0(iVar236, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_248 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar237, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_249 = unk_0x09E288B6CD41A6F0(iVar237, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_249 = -1;
				}
				if (Global_1607808.f_2 != 6 && unk_0xD36974570396CA9B(iVar235, iVar0) == 2)
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_265 = unk_0x09E288B6CD41A6F0(iVar235, iVar0);
				}
				else
				{
					Global_1607808.f_40767[iVar0 /*286*/].f_265 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xD36974570396CA9B(uVar238[iVar1], iVar0) == 5)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_276[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar238[iVar1], iVar0) };
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xD36974570396CA9B(uVar241[iVar1], iVar0) == 3)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_283[iVar1] = unk_0x649362E253C7BDC7(uVar241[iVar1], iVar0);
					}
					else
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_283[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1607808.f_22 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1607808.f_40767[iVar0 /*286*/].f_17[iVar3] = unk_0x09E288B6CD41A6F0(uVar14[iVar3], iVar0);
						Global_1607808.f_40767[iVar0 /*286*/].f_22[iVar3] = unk_0x09E288B6CD41A6F0(uVar51[iVar3], iVar0);
						Global_1607808.f_40767[iVar0 /*286*/].f_27[iVar3] = unk_0x09E288B6CD41A6F0(uVar56[iVar3], iVar0);
						if (Global_1607808.f_40767[iVar0 /*286*/].f_27[iVar3] == -1)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_27[iVar3] = 99999;
						}
						if (unk_0xD36974570396CA9B(uVar61[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_196[iVar3] = unk_0x09E288B6CD41A6F0(uVar61[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_196[iVar3] = -1;
						}
						if (unk_0xD36974570396CA9B(uVar66[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_170[iVar3] = unk_0x09E288B6CD41A6F0(uVar66[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_170[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar71[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_238[iVar3] = unk_0x09E288B6CD41A6F0(uVar71[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_238[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar76[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_243[iVar3] = unk_0x09E288B6CD41A6F0(uVar76[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_243[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar81[iVar3], iVar0) == 2 && unk_0xD36974570396CA9B(uVar86[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_253[iVar3] = unk_0x09E288B6CD41A6F0(uVar81[iVar3], iVar0);
							Global_1607808.f_40767[iVar0 /*286*/].f_258[iVar3] = unk_0x09E288B6CD41A6F0(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_253[iVar3] = -1;
							Global_1607808.f_40767[iVar0 /*286*/].f_258[iVar3] = -1;
						}
						if (unk_0xD36974570396CA9B(uVar91[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_269[iVar3] = unk_0x09E288B6CD41A6F0(uVar91[iVar3], iVar0);
						}
						else if (unk_0x236D8AD7EE179F46(Global_1607808.f_24246[iVar3 /*3*/][func_141(iVar0)], func_140(iVar0)))
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_269[iVar3] = -1;
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_269[iVar3] = -2;
						}
						if (unk_0xD36974570396CA9B(uVar96[iVar3], iVar0) == 2)
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_231[iVar3] = unk_0x09E288B6CD41A6F0(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_40767[iVar0 /*286*/].f_231[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_139(&iVar6);
}

void func_139(int iParam0)
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
	
	Global_1607808.f_58199[0] = unk_0x6ED9878D7F475A3E(*iParam0, "no0");
	iVar1 = unk_0xEBB80152B94CE1CB(*iParam0, "loc0");
	iVar2 = unk_0xEBB80152B94CE1CB(*iParam0, "head0");
	iVar3 = unk_0xEBB80152B94CE1CB(*iParam0, "bit0");
	iVar4 = unk_0xEBB80152B94CE1CB(*iParam0, "veh0");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_58199[0] - 1))
	{
		Global_1607808.f_58746[0 /*262*/][iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar1, iVar0) };
		Global_1607808.f_58746[0 /*262*/][iVar0 /*9*/].f_3 = unk_0x649362E253C7BDC7(iVar2, iVar0);
		Global_1607808.f_58746[0 /*262*/][iVar0 /*9*/].f_5 = unk_0x09E288B6CD41A6F0(iVar3, iVar0);
		if (unk_0xD36974570396CA9B(iVar4, iVar0) == 2)
		{
			Global_1607808.f_58746[0 /*262*/][iVar0 /*9*/].f_7 = unk_0x09E288B6CD41A6F0(iVar4, iVar0);
		}
		else
		{
			Global_1607808.f_58746[0 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1607808.f_58199[1] = unk_0x6ED9878D7F475A3E(*iParam0, "no1");
	iVar5 = unk_0xEBB80152B94CE1CB(*iParam0, "loc1");
	iVar6 = unk_0xEBB80152B94CE1CB(*iParam0, "head1");
	iVar7 = unk_0xEBB80152B94CE1CB(*iParam0, "bit1");
	iVar8 = unk_0xEBB80152B94CE1CB(*iParam0, "veh1");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_58199[1] - 1))
	{
		Global_1607808.f_58746[1 /*262*/][iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar5, iVar0) };
		Global_1607808.f_58746[1 /*262*/][iVar0 /*9*/].f_3 = unk_0x649362E253C7BDC7(iVar6, iVar0);
		Global_1607808.f_58746[1 /*262*/][iVar0 /*9*/].f_5 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		if (unk_0xD36974570396CA9B(iVar8, iVar0) == 2)
		{
			Global_1607808.f_58746[1 /*262*/][iVar0 /*9*/].f_7 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		}
		else
		{
			Global_1607808.f_58746[1 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1607808.f_58199[2] = unk_0x6ED9878D7F475A3E(*iParam0, "no2");
	iVar9 = unk_0xEBB80152B94CE1CB(*iParam0, "loc2");
	iVar10 = unk_0xEBB80152B94CE1CB(*iParam0, "head2");
	iVar11 = unk_0xEBB80152B94CE1CB(*iParam0, "bit2");
	iVar12 = unk_0xEBB80152B94CE1CB(*iParam0, "veh2");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_58199[2] - 1))
	{
		Global_1607808.f_58746[2 /*262*/][iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar9, iVar0) };
		Global_1607808.f_58746[2 /*262*/][iVar0 /*9*/].f_3 = unk_0x649362E253C7BDC7(iVar10, iVar0);
		Global_1607808.f_58746[2 /*262*/][iVar0 /*9*/].f_5 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
		if (unk_0xD36974570396CA9B(iVar12, iVar0) == 2)
		{
			Global_1607808.f_58746[2 /*262*/][iVar0 /*9*/].f_7 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
		}
		else
		{
			Global_1607808.f_58746[2 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1607808.f_58199[3] = unk_0x6ED9878D7F475A3E(*iParam0, "no3");
	iVar13 = unk_0xEBB80152B94CE1CB(*iParam0, "loc3");
	iVar14 = unk_0xEBB80152B94CE1CB(*iParam0, "head3");
	iVar15 = unk_0xEBB80152B94CE1CB(*iParam0, "bit3");
	iVar16 = unk_0xEBB80152B94CE1CB(*iParam0, "veh3");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_58199[3] - 1))
	{
		Global_1607808.f_58746[3 /*262*/][iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar13, iVar0) };
		Global_1607808.f_58746[3 /*262*/][iVar0 /*9*/].f_3 = unk_0x649362E253C7BDC7(iVar14, iVar0);
		Global_1607808.f_58746[3 /*262*/][iVar0 /*9*/].f_5 = unk_0x09E288B6CD41A6F0(iVar15, iVar0);
		if (unk_0xD36974570396CA9B(iVar16, iVar0) == 2)
		{
			Global_1607808.f_58746[3 /*262*/][iVar0 /*9*/].f_7 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
		}
		else
		{
			Global_1607808.f_58746[3 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
}

int func_140(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_141(iParam0) * 31);
}

int func_141(int iParam0)
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

int func_142()
{
	if (Global_1607808 == 6)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xDCDDFBE975CF2B6C(iParam0, "ene");
	Global_1607808.f_58198 = unk_0x6ED9878D7F475A3E(iVar1, "no");
	Global_1607808.f_29238 = unk_0x6ED9878D7F475A3E(iVar1, "veh");
	iVar2 = unk_0xEBB80152B94CE1CB(iVar1, "loc");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar1, "head");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar1, "team");
	if (Global_1607808.f_58198 > 60)
	{
		Global_1607808.f_58198 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_58198 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1607808.f_58205[iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar2, iVar0) };
			Global_1607808.f_58205[iVar0 /*9*/].f_3 = unk_0x649362E253C7BDC7(iVar3, iVar0);
			Global_1607808.f_58205[iVar0 /*9*/].f_4 = unk_0x09E288B6CD41A6F0(iVar4, iVar0);
		}
		iVar0++;
	}
	func_139(&iVar1);
}

void func_144(int iParam0)
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
	
	iVar2 = unk_0xDCDDFBE975CF2B6C(iParam0, "dprop");
	Global_1607808.f_35105 = func_147(unk_0x6ED9878D7F475A3E(iVar2, "no"), 0, 100);
	iVar3 = unk_0xEBB80152B94CE1CB(iVar2, "loc");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar2, "vRot");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar2, "head");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar2, "model");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar2, "asst");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar2, "asso");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar2, "asss");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar2, "pasc");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar2, "asst2");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar2, "asso2");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar2, "asss2");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar2, "pasc2");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar2, "asst3");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar2, "asso3");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar2, "asss3");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar2, "pasc3");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar2, "asst4");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar2, "asso4");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar2, "asss4");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar2, "pasc4");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar2, "prpct");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar2, "prpcr");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar2, "prcra");
	iVar26 = unk_0xEBB80152B94CE1CB(iVar2, "prpbs");
	if (Global_1607808.f_35105 > 20)
	{
		Global_1607808.f_35105 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_35105 - 1))
	{
		Global_1607808.f_35107[iVar0 /*29*/] = { unk_0x426E928726A693EA(iVar3, iVar0) };
		Global_1607808.f_35107[iVar0 /*29*/].f_3 = { unk_0x426E928726A693EA(iVar4, iVar0) };
		Global_1607808.f_35107[iVar0 /*29*/].f_6 = unk_0x649362E253C7BDC7(iVar5, iVar0);
		Global_1607808.f_35107[iVar0 /*29*/].f_8 = -1;
		iVar1 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
		Global_1607808.f_35107[iVar0 /*29*/].f_7 = func_146(iVar1);
		if (!unk_0x5FA5FCC70B2BAD3C(Global_1607808.f_35107[iVar0 /*29*/].f_7))
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1607808.f_35107[iVar0 /*29*/].f_10 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		Global_1607808.f_35107[iVar0 /*29*/].f_9 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		Global_1607808.f_35107[iVar0 /*29*/].f_11 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		if (Global_1607808.f_35107[iVar0 /*29*/].f_11 == -1)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_11 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar11, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_17 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_20 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_23 = unk_0x09E288B6CD41A6F0(iVar13, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_18 = unk_0x09E288B6CD41A6F0(iVar15, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_21 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_24 = unk_0x09E288B6CD41A6F0(iVar17, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_19 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_22 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_25 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_20 = -1;
			Global_1607808.f_35107[iVar0 /*29*/].f_17 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_23 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_21 = -1;
			Global_1607808.f_35107[iVar0 /*29*/].f_18 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_24 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_22 = -1;
			Global_1607808.f_35107[iVar0 /*29*/].f_19 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_25 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar10, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_12 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_26 = unk_0x09E288B6CD41A6F0(iVar14, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_27 = unk_0x09E288B6CD41A6F0(iVar18, iVar0);
			Global_1607808.f_35107[iVar0 /*29*/].f_28 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_12 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_26 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_27 = 0;
			Global_1607808.f_35107[iVar0 /*29*/].f_28 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar24, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_13 = unk_0x09E288B6CD41A6F0(iVar24, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_13 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar23, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_14 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_14 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar25, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_15 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_15 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar26, iVar0) == 2)
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_16 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
		}
		else
		{
			Global_1607808.f_35107[iVar0 /*29*/].f_16 = 0;
		}
		iVar0++;
	}
	iVar27 = iVar0;
	if (func_145() || Global_1607808 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1607808.f_29290 - 1))
		{
			Global_1607808.f_35107[iVar27 /*29*/] = { Global_1607808.f_29293[iVar0 /*88*/] };
			Global_1607808.f_35107[iVar27 /*29*/].f_3 = { Global_1607808.f_29293[iVar0 /*88*/].f_4 };
			Global_1607808.f_35107[iVar27 /*29*/].f_6 = Global_1607808.f_29293[iVar0 /*88*/].f_3;
			Global_1607808.f_35107[iVar27 /*29*/].f_8 = iVar0;
			Global_1607808.f_35107[iVar27 /*29*/].f_7 = joaat("prop_container_ld_pu");
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				Global_1607808.f_29293[iVar27 /*88*/].f_16[iVar28] = 0;
				Global_1607808.f_29293[iVar27 /*88*/].f_21[iVar28] = 99999;
				iVar28++;
			}
			Global_1607808.f_35106++;
			Global_1607808.f_35105++;
			iVar27++;
			iVar0++;
		}
	}
}

int func_145()
{
	if (Global_1607808 == 0 && Global_1607808.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
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
	if ((unk_0xEC209B562C5EFDB2() || unk_0x3F0C224D3CC05EF2()) || unk_0x913B1C01C1BA6C6F())
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
	else if (unk_0x9800AF1CCAFA4639() || unk_0x211AF631627DE2C5())
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

int func_147(int iParam0, int iParam1, int iParam2)
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

void func_148(int iParam0)
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
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	
	iVar2 = unk_0xDCDDFBE975CF2B6C(iParam0, "prop");
	Global_1607808.f_31467 = unk_0x6ED9878D7F475A3E(iVar2, "no");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar2, "loc");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar2, "vRot");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar2, "head");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar2, "model");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar2, "asst");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar2, "asso");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar2, "asss");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar2, "pasc");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar2, "asst2");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar2, "asso2");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar2, "asss2");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar2, "pasc2");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar2, "asst3");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar2, "asso3");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar2, "asss3");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar2, "pasc3");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar2, "asst4");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar2, "asso4");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar2, "asss4");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar2, "pasc4");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar2, "bpbid");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar2, "bpbip");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar2, "bpbpt");
	iVar26 = unk_0xEBB80152B94CE1CB(iVar2, "aldel");
	iVar27 = unk_0xEBB80152B94CE1CB(iVar2, "alsnd");
	iVar28 = unk_0xEBB80152B94CE1CB(iVar2, "flvfx");
	iVar29 = unk_0xEBB80152B94CE1CB(iVar2, "prpct");
	iVar30 = unk_0xEBB80152B94CE1CB(iVar2, "prpcr");
	iVar31 = unk_0xEBB80152B94CE1CB(iVar2, "prcra");
	iVar32 = unk_0xEBB80152B94CE1CB(iVar2, "prpbs");
	iVar33 = unk_0xEBB80152B94CE1CB(iVar2, "prers");
	if (Global_1607808.f_31467 > 100)
	{
		Global_1607808.f_31467 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_31467 - 1))
	{
		Global_1607808.f_31468[iVar0 /*36*/] = { unk_0x426E928726A693EA(iVar3, iVar0) };
		Global_1607808.f_31468[iVar0 /*36*/].f_3 = { unk_0x426E928726A693EA(iVar4, iVar0) };
		Global_1607808.f_31468[iVar0 /*36*/].f_6 = unk_0x649362E253C7BDC7(iVar5, iVar0);
		iVar1 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
		Global_1607808.f_31468[iVar0 /*36*/].f_7 = func_146(iVar1);
		if (!unk_0x5FA5FCC70B2BAD3C(Global_1607808.f_31468[iVar0 /*36*/].f_7))
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1607808.f_31468[iVar0 /*36*/].f_9 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		Global_1607808.f_31468[iVar0 /*36*/].f_8 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		Global_1607808.f_31468[iVar0 /*36*/].f_10 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		if (Global_1607808.f_31468[iVar0 /*36*/].f_10 == -1)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_10 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar23, iVar0) == 1)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_33 = unk_0x4C89B1DF90D9092F(iVar23, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_33 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar24, iVar0) == 1)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_34 = unk_0x4C89B1DF90D9092F(iVar24, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_34 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar25, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_35 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_35 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar11, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_20 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_23 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_26 = unk_0x09E288B6CD41A6F0(iVar13, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_21 = unk_0x09E288B6CD41A6F0(iVar15, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_24 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_27 = unk_0x09E288B6CD41A6F0(iVar17, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_22 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_25 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_28 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_23 = -1;
			Global_1607808.f_31468[iVar0 /*36*/].f_20 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_26 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_24 = -1;
			Global_1607808.f_31468[iVar0 /*36*/].f_21 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_27 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_25 = -1;
			Global_1607808.f_31468[iVar0 /*36*/].f_22 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_28 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar10, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_11 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_29 = unk_0x09E288B6CD41A6F0(iVar14, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_30 = unk_0x09E288B6CD41A6F0(iVar18, iVar0);
			Global_1607808.f_31468[iVar0 /*36*/].f_31 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_11 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_29 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_30 = 0;
			Global_1607808.f_31468[iVar0 /*36*/].f_31 = 0;
		}
		Global_1607808.f_31468[iVar0 /*36*/].f_12 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
		if (Global_1607808.f_31468[iVar0 /*36*/].f_12 > 0 && Global_1607808.f_31468[iVar0 /*36*/].f_12 < 1000)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_12 = func_149(Global_1607808.f_31468[iVar0 /*36*/].f_12);
		}
		Global_1607808.f_31468[iVar0 /*36*/].f_13 = unk_0x09E288B6CD41A6F0(iVar27, iVar0);
		Global_1607808.f_31468[iVar0 /*36*/].f_14 = unk_0x09E288B6CD41A6F0(iVar28, iVar0);
		if (unk_0xD36974570396CA9B(iVar30, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_15 = unk_0x09E288B6CD41A6F0(iVar30, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_15 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar29, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_16 = unk_0x09E288B6CD41A6F0(iVar29, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_16 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar31, iVar0) == 2)
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_17 = unk_0x09E288B6CD41A6F0(iVar31, iVar0);
		}
		else
		{
			Global_1607808.f_31468[iVar0 /*36*/].f_17 = -1;
		}
		Global_1607808.f_31468[iVar0 /*36*/].f_18 = unk_0x09E288B6CD41A6F0(iVar32, iVar0);
		Global_1607808.f_31468[iVar0 /*36*/].f_19 = unk_0x09E288B6CD41A6F0(iVar33, iVar0);
		iVar0++;
	}
}

int func_149(int iParam0)
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

void func_150(int iParam0)
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
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	var uVar68[4];
	var uVar73[4];
	var uVar78[4];
	var uVar83[4];
	var uVar88[4];
	var uVar93[4];
	var uVar98[4];
	var uVar103[4];
	var uVar108[2];
	var uVar111[2];
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	
	iVar6 = unk_0xDCDDFBE975CF2B6C(iParam0, "veh");
	Global_1607808.f_36583 = unk_0x6ED9878D7F475A3E(iVar6, "no");
	Global_1607808.f_36584 = unk_0x6ED9878D7F475A3E(iVar6, "time");
	Global_1607808.f_36585 = unk_0x6ED9878D7F475A3E(iVar6, "pal");
	iVar7 = unk_0xDCDDFBE975CF2B6C(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1607808.f_22 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1607808.f_77[iVar3 /*6002*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1607808.f_40614[iVar0 /*5*/][iVar3] = unk_0x6ED9878D7F475A3E(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1607808.f_24144[iVar0 /*5*/][iVar3] = unk_0x6ED9878D7F475A3E(iVar7, &cVar4);
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0xEBB80152B94CE1CB(iVar6, "loc");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar6, "head");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar6, "model");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar6, "col");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar6, "rsp");
	if (func_99())
	{
		iVar10 = unk_0xEBB80152B94CE1CB(iVar6, "vrr");
		iVar11 = unk_0xEBB80152B94CE1CB(iVar6, "vrmr");
		iVar12 = unk_0xEBB80152B94CE1CB(iVar6, "vsnt");
		iVar13 = unk_0xEBB80152B94CE1CB(iVar6, "vsnei");
		iVar14 = unk_0xEBB80152B94CE1CB(iVar6, "v2sp");
		iVar15 = unk_0xEBB80152B94CE1CB(iVar6, "v2sh");
		iVar19 = unk_0xEBB80152B94CE1CB(iVar6, "objt");
		iVar20 = unk_0xEBB80152B94CE1CB(iVar6, "team");
		iVar21 = unk_0xEBB80152B94CE1CB(iVar6, "spwn");
		iVar22 = unk_0xEBB80152B94CE1CB(iVar6, "objt2");
		iVar23 = unk_0xEBB80152B94CE1CB(iVar6, "team2");
		iVar24 = unk_0xEBB80152B94CE1CB(iVar6, "spwn2");
		iVar25 = unk_0xEBB80152B94CE1CB(iVar6, "objt3");
		iVar26 = unk_0xEBB80152B94CE1CB(iVar6, "team3");
		iVar27 = unk_0xEBB80152B94CE1CB(iVar6, "spwn3");
		iVar28 = unk_0xEBB80152B94CE1CB(iVar6, "objt4");
		iVar29 = unk_0xEBB80152B94CE1CB(iVar6, "team4");
		iVar30 = unk_0xEBB80152B94CE1CB(iVar6, "spwn4");
		Global_1607808.f_31466 = unk_0x6ED9878D7F475A3E(iVar6, "nocr");
		iVar31 = unk_0xEBB80152B94CE1CB(iVar6, "crgdm");
		iVar32 = unk_0xEBB80152B94CE1CB(iVar6, "liv");
		iVar33 = unk_0xEBB80152B94CE1CB(iVar6, "modps");
		iVar34 = unk_0xEBB80152B94CE1CB(iVar6, "colc");
		iVar35 = unk_0xEBB80152B94CE1CB(iVar6, "col2");
		iVar36 = unk_0xEBB80152B94CE1CB(iVar6, "col3");
		Global_1607808.f_36586 = unk_0x6ED9878D7F475A3E(iVar6, "burst");
		iVar37 = unk_0xEBB80152B94CE1CB(iVar6, "hlth");
		iVar38 = unk_0xEBB80152B94CE1CB(iVar6, "enghp");
		iVar39 = unk_0xEBB80152B94CE1CB(iVar6, "ptrhp");
		iVar40 = unk_0xEBB80152B94CE1CB(iVar6, "bdyhp");
		iVar41 = unk_0xEBB80152B94CE1CB(iVar6, "drbs");
		iVar42 = unk_0xEBB80152B94CE1CB(iVar6, "vbs2");
		iVar43 = unk_0xEBB80152B94CE1CB(iVar6, "vbs3");
		iVar44 = unk_0xEBB80152B94CE1CB(iVar6, "vbs4");
		iVar45 = unk_0xEBB80152B94CE1CB(iVar6, "vebs");
		iVar46 = unk_0xEBB80152B94CE1CB(iVar6, "vehct");
		iVar49 = unk_0xEBB80152B94CE1CB(iVar6, "vhcra");
		iVar47 = unk_0xEBB80152B94CE1CB(iVar6, "vehcr");
		iVar48 = unk_0xEBB80152B94CE1CB(iVar6, "vehcv");
		iVar50 = unk_0xEBB80152B94CE1CB(iVar6, "vehbc");
		iVar51 = unk_0xEBB80152B94CE1CB(iVar6, "vehbr");
		iVar52 = unk_0xEBB80152B94CE1CB(iVar6, "vspdl");
		iVar53 = unk_0xEBB80152B94CE1CB(iVar6, "vsgr");
		iVar54 = unk_0xEBB80152B94CE1CB(iVar6, "vssgr");
		iVar55 = unk_0xEBB80152B94CE1CB(iVar6, "vcnm");
		iVar56 = unk_0xEBB80152B94CE1CB(iVar6, "vehap");
		iVar57 = unk_0xEBB80152B94CE1CB(iVar6, "vehat");
		iVar58 = unk_0xEBB80152B94CE1CB(iVar6, "vehdu");
		iVar59 = unk_0xEBB80152B94CE1CB(iVar6, "vldt");
		iVar60 = unk_0xEBB80152B94CE1CB(iVar6, "vldr");
		iVar61 = unk_0xEBB80152B94CE1CB(iVar6, "cutsc");
		iVar62 = unk_0xEBB80152B94CE1CB(iVar6, "cutsh");
		iVar66 = unk_0xEBB80152B94CE1CB(iVar6, "nmpass");
		iVar67 = unk_0xEBB80152B94CE1CB(iVar6, "nmfail");
		iVar63 = unk_0xEBB80152B94CE1CB(iVar6, "vmcp");
		iVar64 = unk_0xEBB80152B94CE1CB(iVar6, "vmcf");
		iVar65 = unk_0xEBB80152B94CE1CB(iVar6, "gotor");
		iVar115 = unk_0xEBB80152B94CE1CB(iVar6, "vphrang");
		iVar116 = unk_0xEBB80152B94CE1CB(iVar6, "vtmhrn");
		iVar117 = unk_0xEBB80152B94CE1CB(iVar6, "vdrpovr");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar108[iVar1] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar111[iVar1] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			iVar1++;
		}
		iVar114 = unk_0xEBB80152B94CE1CB(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1607808.f_22 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar68[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar73[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar78[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar83[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar88[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar93[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar98[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar103[iVar3] = unk_0xEBB80152B94CE1CB(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_36583 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1607808.f_36587[iVar0 /*122*/] = { unk_0x426E928726A693EA(iVar8, iVar0) };
			Global_1607808.f_36587[iVar0 /*122*/].f_3 = unk_0x649362E253C7BDC7(iVar9, iVar0);
			iVar2 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
			Global_1607808.f_36587[iVar0 /*122*/].f_12 = iVar2;
			if (!func_96())
			{
				if (!unk_0x5FA5FCC70B2BAD3C(Global_1607808.f_36587[iVar0 /*122*/].f_12))
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_12 = joaat("baller");
				}
			}
			Global_1607808.f_36587[iVar0 /*122*/].f_23 = unk_0x09E288B6CD41A6F0(iVar17, iVar0);
			Global_1607808.f_36587[iVar0 /*122*/].f_29 = unk_0x09E288B6CD41A6F0(iVar18, iVar0);
			if (func_99())
			{
				if (((unk_0xD36974570396CA9B(iVar10, iVar0) == 3 && unk_0xD36974570396CA9B(iVar11, iVar0) == 3) && unk_0xD36974570396CA9B(iVar12, iVar0) == 2) && unk_0xD36974570396CA9B(iVar13, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_4 = unk_0x649362E253C7BDC7(iVar10, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_5 = unk_0x649362E253C7BDC7(iVar11, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_6 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_7 = unk_0x09E288B6CD41A6F0(iVar13, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_4 = 100f;
					Global_1607808.f_36587[iVar0 /*122*/].f_5 = 0f;
					Global_1607808.f_36587[iVar0 /*122*/].f_6 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_7 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar14, iVar0) == 5 && unk_0xD36974570396CA9B(iVar15, iVar0) == 3)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_8 = { unk_0x426E928726A693EA(iVar14, iVar0) };
					Global_1607808.f_36587[iVar0 /*122*/].f_11 = unk_0x649362E253C7BDC7(iVar15, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_8 = { 0f, 0f, 0f };
					Global_1607808.f_36587[iVar0 /*122*/].f_11 = 0f;
				}
				Global_1607808.f_36587[iVar0 /*122*/].f_36 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
				Global_1607808.f_36587[iVar0 /*122*/].f_37 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
				Global_1607808.f_36587[iVar0 /*122*/].f_38 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
				if (unk_0xD36974570396CA9B(iVar22, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_71 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_68 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_74 = unk_0x09E288B6CD41A6F0(iVar24, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_72 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_69 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_75 = unk_0x09E288B6CD41A6F0(iVar27, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_73 = unk_0x09E288B6CD41A6F0(iVar28, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_70 = unk_0x09E288B6CD41A6F0(iVar29, iVar0);
					Global_1607808.f_36587[iVar0 /*122*/].f_76 = unk_0x09E288B6CD41A6F0(iVar30, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_71 = -1;
					Global_1607808.f_36587[iVar0 /*122*/].f_68 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_74 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_72 = -1;
					Global_1607808.f_36587[iVar0 /*122*/].f_69 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_75 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_73 = -1;
					Global_1607808.f_36587[iVar0 /*122*/].f_70 = 0;
					Global_1607808.f_36587[iVar0 /*122*/].f_76 = 0;
				}
				Global_1607808.f_36587[iVar0 /*122*/].f_27 = unk_0x09E288B6CD41A6F0(iVar32, iVar0);
				if (unk_0xD36974570396CA9B(iVar33, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_28 = unk_0x09E288B6CD41A6F0(iVar33, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_28 = -1;
				}
				Global_1607808.f_36587[iVar0 /*122*/].f_30 = unk_0x09E288B6CD41A6F0(iVar37, iVar0);
				if (unk_0xD36974570396CA9B(iVar38, iVar0) == 3 && unk_0x649362E253C7BDC7(iVar38, iVar0) > 0f)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_31 = unk_0x649362E253C7BDC7(iVar38, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_31 = 1001f;
				}
				if (unk_0xD36974570396CA9B(iVar31, iVar0) == 3 && unk_0x649362E253C7BDC7(iVar31, iVar0) >= 0f)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_34 = unk_0x649362E253C7BDC7(iVar31, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_34 = 1.5f;
				}
				if (unk_0xD36974570396CA9B(iVar39, iVar0) == 3 && unk_0x649362E253C7BDC7(iVar39, iVar0) > 0f)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_32 = unk_0x649362E253C7BDC7(iVar39, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_32 = 1001f;
				}
				if (unk_0xD36974570396CA9B(iVar40, iVar0) == 3 && unk_0x649362E253C7BDC7(iVar40, iVar0) > 0f)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_33 = unk_0x649362E253C7BDC7(iVar40, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_33 = 1001f;
				}
				Global_1607808.f_36587[iVar0 /*122*/].f_41 = unk_0x09E288B6CD41A6F0(iVar41, iVar0);
				Global_1607808.f_36587[iVar0 /*122*/].f_42 = unk_0x09E288B6CD41A6F0(iVar42, iVar0);
				if (unk_0xD36974570396CA9B(iVar43, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_43 = unk_0x09E288B6CD41A6F0(iVar43, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_43 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar44, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_44 = unk_0x09E288B6CD41A6F0(iVar44, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_44 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar34, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_26 = unk_0x09E288B6CD41A6F0(iVar34, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_26 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar35, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_24 = unk_0x09E288B6CD41A6F0(iVar35, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_24 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar36, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_25 = unk_0x09E288B6CD41A6F0(iVar36, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_25 = -1;
				}
				Global_1607808.f_36587[iVar0 /*122*/].f_105 = unk_0x09E288B6CD41A6F0(iVar45, iVar0);
				if (unk_0xD36974570396CA9B(iVar47, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_58 = unk_0x09E288B6CD41A6F0(iVar47, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_58 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar46, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_59 = unk_0x09E288B6CD41A6F0(iVar46, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_59 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar49, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_60 = unk_0x09E288B6CD41A6F0(iVar49, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_60 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar48, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_61 = unk_0x09E288B6CD41A6F0(iVar48, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_61 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar52, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_67 = unk_0x09E288B6CD41A6F0(iVar52, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_67 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar53, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_39 = unk_0x09E288B6CD41A6F0(iVar53, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_39 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar54, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_40 = unk_0x09E288B6CD41A6F0(iVar54, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_40 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar55, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_77 = unk_0x09E288B6CD41A6F0(iVar55, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_77 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar63, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_95 = unk_0x09E288B6CD41A6F0(iVar63, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_95 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar64, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_96 = unk_0x09E288B6CD41A6F0(iVar64, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_96 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar56, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_78 = unk_0x09E288B6CD41A6F0(iVar56, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_78 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar57, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_79 = unk_0x09E288B6CD41A6F0(iVar57, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_79 = 1;
				}
				if (unk_0xD36974570396CA9B(iVar58, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_92 = unk_0x09E288B6CD41A6F0(iVar58, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_92 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar59, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_93 = unk_0x09E288B6CD41A6F0(iVar59, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_93 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar60, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_94 = unk_0x09E288B6CD41A6F0(iVar60, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_94 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar50, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_46 = unk_0x09E288B6CD41A6F0(iVar50, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_46 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar51, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_47 = unk_0x09E288B6CD41A6F0(iVar51, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_47 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar65, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_35 = unk_0x09E288B6CD41A6F0(iVar65, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_35 = 0;
				}
				if (Global_1607808.f_2 != 6 && unk_0xD36974570396CA9B(iVar61, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_103 = unk_0x09E288B6CD41A6F0(iVar61, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_103 = -1;
				}
				if (Global_1607808.f_2 != 6 && unk_0xD36974570396CA9B(iVar62, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_104 = unk_0x09E288B6CD41A6F0(iVar62, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_104 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar66, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_90 = unk_0x09E288B6CD41A6F0(iVar66, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_90 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar67, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_91 = unk_0x09E288B6CD41A6F0(iVar67, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_91 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xD36974570396CA9B(uVar108[iVar1], iVar0) == 5)
					{
						Global_1607808.f_36587[iVar0 /*122*/].f_107[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar108[iVar1], iVar0) };
					}
					else
					{
						Global_1607808.f_36587[iVar0 /*122*/].f_107[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xD36974570396CA9B(uVar111[iVar1], iVar0) == 3)
					{
						Global_1607808.f_36587[iVar0 /*122*/].f_114[iVar1] = unk_0x649362E253C7BDC7(uVar111[iVar1], iVar0);
					}
					else
					{
						Global_1607808.f_36587[iVar0 /*122*/].f_114[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0xD36974570396CA9B(iVar114, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_106 = unk_0x09E288B6CD41A6F0(iVar114, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_106 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar115, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_117 = unk_0x09E288B6CD41A6F0(iVar115, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_117 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar116, iVar0) == 2)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_118 = unk_0x09E288B6CD41A6F0(iVar116, iVar0);
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_118 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar117, iVar0) == 5)
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_119 = { unk_0x426E928726A693EA(iVar117, iVar0) };
				}
				else
				{
					Global_1607808.f_36587[iVar0 /*122*/].f_119 = { 0f, 0f, 0f };
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1607808.f_22 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1607808.f_36587[iVar0 /*122*/].f_13[iVar3] = unk_0x09E288B6CD41A6F0(uVar68[iVar3], iVar0);
						Global_1607808.f_36587[iVar0 /*122*/].f_18[iVar3] = unk_0x09E288B6CD41A6F0(uVar73[iVar3], iVar0);
						if (Global_1607808.f_36587[iVar0 /*122*/].f_18[iVar3] == -1)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_18[iVar3] = 99999;
						}
						if (unk_0xD36974570396CA9B(uVar78[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_97[iVar3] = unk_0x09E288B6CD41A6F0(uVar78[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_97[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar83[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_80[iVar3] = unk_0x09E288B6CD41A6F0(uVar83[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_80[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar88[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_85[iVar3] = unk_0x09E288B6CD41A6F0(uVar88[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_85[iVar3] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar93[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_48[iVar3] = unk_0x09E288B6CD41A6F0(uVar93[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_48[iVar3] = -1;
						}
						if (unk_0xD36974570396CA9B(uVar98[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_53[iVar3] = unk_0x09E288B6CD41A6F0(uVar98[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_53[iVar3] = -1;
						}
						if (unk_0xD36974570396CA9B(uVar103[iVar3], iVar0) == 2)
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_62[iVar3] = unk_0x09E288B6CD41A6F0(uVar103[iVar3], iVar0);
						}
						else
						{
							Global_1607808.f_36587[iVar0 /*122*/].f_62[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_151(int iParam0)
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
	
	iVar5 = unk_0xDCDDFBE975CF2B6C(iParam0, "weap");
	Global_1607808.f_35717 = unk_0x6ED9878D7F475A3E(iVar5, "no");
	if (Global_1607808 == 0)
	{
		if (Global_1607808.f_35717 > 40)
		{
			Global_1607808.f_35717 = 40;
		}
	}
	else if (Global_1607808.f_35717 > 40)
	{
		Global_1607808.f_35717 = 40;
	}
	Global_1607808.f_35719 = unk_0x6ED9878D7F475A3E(iVar5, "time");
	Global_1607808.f_35720 = unk_0x6ED9878D7F475A3E(iVar5, "pal");
	Global_1607808.f_45 = unk_0x6ED9878D7F475A3E(iVar5, "blip");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar5, "loc");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar5, "head");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar5, "type");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar5, "sub");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar5, "bits");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar5, "clip");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar5, "brest1");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar5, "brest2");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar5, "brest3");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar5, "brest4");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar5, "dmgmult");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_35717 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1607808.f_35721[iVar0 /*21*/] = { unk_0x426E928726A693EA(iVar6, iVar0) };
			Global_1607808.f_35721[iVar0 /*21*/].f_3 = unk_0x649362E253C7BDC7(iVar7, iVar0);
			iVar1 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
			Global_1607808.f_35721[iVar0 /*21*/].f_13 = iVar1;
			if (!func_152(Global_1607808.f_35721[iVar0 /*21*/].f_13))
			{
				if (Global_1607808.f_35721[iVar0 /*21*/].f_13 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1607808.f_35721[iVar0 /*21*/].f_13 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1607808.f_35721[iVar0 /*21*/].f_13 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1607808.f_35721[iVar0 /*21*/].f_4 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
			Global_1607808.f_35721[iVar0 /*21*/].f_6 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
			Global_1607808.f_35721[iVar0 /*21*/].f_5 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
			if (unk_0xD36974570396CA9B(iVar12, iVar0) == 1)
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[0] = unk_0x4C89B1DF90D9092F(iVar12, iVar0);
			}
			else
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[0] = 0;
			}
			if (unk_0xD36974570396CA9B(iVar13, iVar0) == 1)
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[1] = unk_0x4C89B1DF90D9092F(iVar13, iVar0);
			}
			else
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[1] = 0;
			}
			if (unk_0xD36974570396CA9B(iVar14, iVar0) == 1)
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[2] = unk_0x4C89B1DF90D9092F(iVar14, iVar0);
			}
			else
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[2] = 0;
			}
			if (unk_0xD36974570396CA9B(iVar15, iVar0) == 1)
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[3] = unk_0x4C89B1DF90D9092F(iVar15, iVar0);
			}
			else
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_8[3] = 0;
			}
			if (unk_0xD36974570396CA9B(iVar16, iVar0) == 3)
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_7 = unk_0x649362E253C7BDC7(iVar16, iVar0);
			}
			else
			{
				Global_1607808.f_35721[iVar0 /*21*/].f_7 = 1f;
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar17 = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0xD36974570396CA9B(iVar17, iVar2) == 2)
				{
					Global_1607808.f_35721[iVar0 /*21*/].f_14[iVar2] = unk_0x09E288B6CD41A6F0(iVar17, iVar2);
				}
				else
				{
					Global_1607808.f_35721[iVar0 /*21*/].f_14[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_152(int iParam0)
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
		case joaat("pickup_weapon_hominglauncher"):
		case joaat("pickup_weapon_proxmine"):
		case joaat("pickup_weapon_hatchet"):
		case joaat("pickup_weapon_railgun"):
		case joaat("pickup_weapon_flaregun"):
		case joaat("pickup_weapon_bullpupshotgun"):
		case joaat("pickup_weapon_machinepistol"):
		case joaat("pickup_weapon_marksmanpistol"):
		case joaat("pickup_weapon_heavyshotgun"):
		case joaat("pickup_weapon_marksmanrifle"):
		case joaat("pickup_weapon_machete"):
		case joaat("pickup_weapon_flashlight"):
		case joaat("pickup_weapon_knuckle"):
		case joaat("pickup_weapon_combatpdw"):
			return 1;
		
		default:
	}
	return 0;
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0xDCDDFBE975CF2B6C(iParam0, "ptemp");
	Global_1607808.f_81458 = unk_0x6ED9878D7F475A3E(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_81458 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD36974570396CA9B(uVar5[iVar0], iVar1) == 5)
			{
				Global_1607808.f_79327[iVar0 /*213*/][iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_79327[iVar0 /*213*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar16[iVar0], iVar1) == 5)
			{
				Global_1607808.f_79327[iVar0 /*213*/].f_91[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_79327[iVar0 /*213*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar27[iVar0], iVar1) == 2)
			{
				Global_1607808.f_79327[iVar0 /*213*/].f_182[iVar1] = unk_0x09E288B6CD41A6F0(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_79327[iVar0 /*213*/].f_182[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_154(int iParam0)
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	var uVar61[4];
	var uVar66[4];
	var uVar71[4];
	var uVar76[4];
	
	iVar5 = unk_0xDCDDFBE975CF2B6C(iParam0, "obj");
	Global_1607808.f_29290 = unk_0x6ED9878D7F475A3E(iVar5, "no");
	Global_1607808.f_29291 = unk_0x6ED9878D7F475A3E(iVar5, "pal");
	Global_1607808.f_29292 = unk_0x6ED9878D7F475A3E(iVar5, "rtm");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar5, "loc");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar5, "head");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar5, "model");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar5, "ped");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar5, "rsp");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar5, "rot");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar5, "cont");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar5, "valu");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar5, "ammoforwep");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar5, "cpup");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar5, "cpupr");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar5, "cpupt");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar5, "bits");
	if (func_99())
	{
		iVar8 = unk_0xEBB80152B94CE1CB(iVar5, "obrr");
		iVar9 = unk_0xEBB80152B94CE1CB(iVar5, "obrmr");
		iVar10 = unk_0xEBB80152B94CE1CB(iVar5, "osnt");
		iVar11 = unk_0xEBB80152B94CE1CB(iVar5, "osnei");
		iVar12 = unk_0xEBB80152B94CE1CB(iVar5, "o2sp");
		iVar13 = unk_0xEBB80152B94CE1CB(iVar5, "o2sh");
		iVar25 = unk_0xEBB80152B94CE1CB(iVar5, "mgbs");
		iVar26 = unk_0xEBB80152B94CE1CB(iVar5, "objct");
		iVar27 = unk_0xEBB80152B94CE1CB(iVar5, "team");
		iVar28 = unk_0xEBB80152B94CE1CB(iVar5, "spwn");
		iVar29 = unk_0xEBB80152B94CE1CB(iVar5, "objct2");
		iVar30 = unk_0xEBB80152B94CE1CB(iVar5, "team2");
		iVar31 = unk_0xEBB80152B94CE1CB(iVar5, "spwn2");
		iVar32 = unk_0xEBB80152B94CE1CB(iVar5, "objct3");
		iVar33 = unk_0xEBB80152B94CE1CB(iVar5, "team3");
		iVar34 = unk_0xEBB80152B94CE1CB(iVar5, "spwn3");
		iVar35 = unk_0xEBB80152B94CE1CB(iVar5, "objct4");
		iVar36 = unk_0xEBB80152B94CE1CB(iVar5, "team4");
		iVar37 = unk_0xEBB80152B94CE1CB(iVar5, "spwn4");
		iVar38 = unk_0xEBB80152B94CE1CB(iVar5, "hlt");
		iVar39 = unk_0xEBB80152B94CE1CB(iVar5, "obb");
		iVar40 = unk_0xEBB80152B94CE1CB(iVar5, "obbc");
		iVar41 = unk_0xEBB80152B94CE1CB(iVar5, "objclt");
		iVar42 = unk_0xEBB80152B94CE1CB(iVar5, "objcr");
		iVar43 = unk_0xEBB80152B94CE1CB(iVar5, "obcra");
		iVar44 = unk_0xEBB80152B94CE1CB(iVar5, "ospdl");
		iVar45 = unk_0xEBB80152B94CE1CB(iVar5, "osgr");
		iVar46 = unk_0xEBB80152B94CE1CB(iVar5, "ossgr");
		iVar47 = unk_0xEBB80152B94CE1CB(iVar5, "objcnm");
		iVar48 = unk_0xEBB80152B94CE1CB(iVar5, "objap");
		iVar49 = unk_0xEBB80152B94CE1CB(iVar5, "objapt");
		iVar50 = unk_0xEBB80152B94CE1CB(iVar5, "obint");
		iVar51 = unk_0xEBB80152B94CE1CB(iVar5, "obrom");
		iVar52 = unk_0xEBB80152B94CE1CB(iVar5, "inco");
		iVar53 = unk_0xEBB80152B94CE1CB(iVar5, "inhsh");
		iVar54 = unk_0xEBB80152B94CE1CB(iVar5, "vehpu");
		iVar55 = unk_0xEBB80152B94CE1CB(iVar5, "airpu");
		iVar58 = unk_0xEBB80152B94CE1CB(iVar5, "gotor");
		iVar59 = unk_0xEBB80152B94CE1CB(iVar5, "nmpass");
		iVar60 = unk_0xEBB80152B94CE1CB(iVar5, "nmfail");
		iVar56 = unk_0xEBB80152B94CE1CB(iVar5, "omcp");
		iVar57 = unk_0xEBB80152B94CE1CB(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1607808.f_22 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar61[iVar2] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar66[iVar2] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar71[iVar2] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar76[iVar2] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_29290 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1607808.f_29293[iVar0 /*88*/] = { unk_0x426E928726A693EA(iVar6, iVar0) };
			Global_1607808.f_29293[iVar0 /*88*/].f_3 = unk_0x649362E253C7BDC7(iVar7, iVar0);
			iVar1 = unk_0x09E288B6CD41A6F0(iVar14, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_15 = iVar1;
			if (Global_1607808.f_29293[iVar0 /*88*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1607808.f_29293[iVar0 /*88*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0x5FA5FCC70B2BAD3C(Global_1607808.f_29293[iVar0 /*88*/].f_15))
			{
				Global_1607808.f_29293[iVar0 /*88*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_1607808.f_29293[iVar0 /*88*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_1607808.f_29293[iVar0 /*88*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1607808.f_29293[iVar0 /*88*/].f_15 == joaat("prop_cctv_cam_07a"))
			{
				Global_1607808.f_29293[iVar0 /*88*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1607808.f_29293[iVar0 /*88*/].f_26 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_4 = { unk_0x426E928726A693EA(iVar17, iVar0) };
			Global_1607808.f_29293[iVar0 /*88*/].f_30 = unk_0x09E288B6CD41A6F0(iVar15, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_44 = unk_0x09E288B6CD41A6F0(iVar18, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_45 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_46 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_47 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_48 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_49 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
			Global_1607808.f_29293[iVar0 /*88*/].f_42 = unk_0x09E288B6CD41A6F0(iVar24, iVar0);
			if (unk_0xD36974570396CA9B(iVar55, iVar0) == 2)
			{
				if (unk_0x09E288B6CD41A6F0(iVar55, iVar0) == 1)
				{
					if (!unk_0x236D8AD7EE179F46(Global_1607808.f_29293[iVar0 /*88*/].f_42, 4))
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_29293[iVar0 /*88*/].f_42), 4);
					}
				}
			}
			if (func_99())
			{
				if (((unk_0xD36974570396CA9B(iVar8, iVar0) == 3 && unk_0xD36974570396CA9B(iVar9, iVar0) == 3) && unk_0xD36974570396CA9B(iVar10, iVar0) == 2) && unk_0xD36974570396CA9B(iVar11, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_7 = unk_0x649362E253C7BDC7(iVar8, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_8 = unk_0x649362E253C7BDC7(iVar9, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_9 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_10 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_7 = 50f;
					Global_1607808.f_29293[iVar0 /*88*/].f_8 = 0f;
					Global_1607808.f_29293[iVar0 /*88*/].f_9 = 0;
					Global_1607808.f_29293[iVar0 /*88*/].f_10 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar12, iVar0) == 5 && unk_0xD36974570396CA9B(iVar13, iVar0) == 3)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_11 = { unk_0x426E928726A693EA(iVar12, iVar0) };
					Global_1607808.f_29293[iVar0 /*88*/].f_14 = unk_0x649362E253C7BDC7(iVar13, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_11 = { 0f, 0f, 0f };
					Global_1607808.f_29293[iVar0 /*88*/].f_14 = 0f;
				}
				Global_1607808.f_29293[iVar0 /*88*/].f_43 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
				Global_1607808.f_29293[iVar0 /*88*/].f_31 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
				Global_1607808.f_29293[iVar0 /*88*/].f_32 = unk_0x09E288B6CD41A6F0(iVar27, iVar0);
				Global_1607808.f_29293[iVar0 /*88*/].f_33 = unk_0x09E288B6CD41A6F0(iVar28, iVar0);
				if (unk_0xD36974570396CA9B(iVar29, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_58 = unk_0x09E288B6CD41A6F0(iVar29, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_55 = unk_0x09E288B6CD41A6F0(iVar30, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_61 = unk_0x09E288B6CD41A6F0(iVar31, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_59 = unk_0x09E288B6CD41A6F0(iVar32, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_56 = unk_0x09E288B6CD41A6F0(iVar33, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_62 = unk_0x09E288B6CD41A6F0(iVar34, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_60 = unk_0x09E288B6CD41A6F0(iVar35, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_57 = unk_0x09E288B6CD41A6F0(iVar36, iVar0);
					Global_1607808.f_29293[iVar0 /*88*/].f_63 = unk_0x09E288B6CD41A6F0(iVar37, iVar0);
				}
				Global_1607808.f_29293[iVar0 /*88*/].f_27 = unk_0x09E288B6CD41A6F0(iVar38, iVar0);
				Global_1607808.f_29293[iVar0 /*88*/].f_28 = unk_0x09E288B6CD41A6F0(iVar39, iVar0);
				Global_1607808.f_29293[iVar0 /*88*/].f_36 = unk_0x09E288B6CD41A6F0(iVar54, iVar0);
				if (unk_0xD36974570396CA9B(iVar40, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_29 = unk_0x09E288B6CD41A6F0(iVar40, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_29 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar42, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_50 = unk_0x09E288B6CD41A6F0(iVar42, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_50 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar41, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_51 = unk_0x09E288B6CD41A6F0(iVar41, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_51 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar43, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_52 = unk_0x09E288B6CD41A6F0(iVar43, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_52 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar44, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_54 = unk_0x09E288B6CD41A6F0(iVar44, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_54 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar45, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_34 = unk_0x09E288B6CD41A6F0(iVar45, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_34 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar46, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_35 = unk_0x09E288B6CD41A6F0(iVar46, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_35 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar47, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_79 = unk_0x09E288B6CD41A6F0(iVar47, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_79 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar56, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_76 = unk_0x09E288B6CD41A6F0(iVar56, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_76 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar57, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_77 = unk_0x09E288B6CD41A6F0(iVar57, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_77 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar48, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_80 = unk_0x09E288B6CD41A6F0(iVar48, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_80 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar49, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_81 = unk_0x09E288B6CD41A6F0(iVar49, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_81 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar50, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_82 = unk_0x09E288B6CD41A6F0(iVar50, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_82 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar51, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_83 = unk_0x09E288B6CD41A6F0(iVar51, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_83 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar52, iVar0) == 5 && unk_0xD36974570396CA9B(iVar53, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_84 = { unk_0x426E928726A693EA(iVar52, iVar0) };
					Global_1607808.f_29293[iVar0 /*88*/].f_87 = unk_0x09E288B6CD41A6F0(iVar53, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_84 = { 0f, 0f, 0f };
					Global_1607808.f_29293[iVar0 /*88*/].f_87 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar58, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_53 = unk_0x09E288B6CD41A6F0(iVar58, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_53 = 0;
				}
				if (unk_0xD36974570396CA9B(iVar59, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_74 = unk_0x09E288B6CD41A6F0(iVar59, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_74 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar60, iVar0) == 2)
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_75 = unk_0x09E288B6CD41A6F0(iVar60, iVar0);
				}
				else
				{
					Global_1607808.f_29293[iVar0 /*88*/].f_75 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1607808.f_22 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1607808.f_29293[iVar0 /*88*/].f_16[iVar2] = unk_0x09E288B6CD41A6F0(uVar61[iVar2], iVar0);
						Global_1607808.f_29293[iVar0 /*88*/].f_21[iVar2] = unk_0x09E288B6CD41A6F0(uVar66[iVar2], iVar0);
						if (Global_1607808.f_29293[iVar0 /*88*/].f_21[iVar2] == -1)
						{
							Global_1607808.f_29293[iVar0 /*88*/].f_21[iVar2] = 99999;
						}
						if (unk_0xD36974570396CA9B(uVar71[iVar2], iVar0) == 2)
						{
							Global_1607808.f_29293[iVar0 /*88*/].f_64[iVar2] = unk_0x09E288B6CD41A6F0(uVar71[iVar2], iVar0);
						}
						else
						{
							Global_1607808.f_29293[iVar0 /*88*/].f_64[iVar2] = 0;
						}
						if (unk_0xD36974570396CA9B(uVar76[iVar2], iVar0) == 2)
						{
							Global_1607808.f_29293[iVar0 /*88*/].f_69[iVar2] = unk_0x09E288B6CD41A6F0(uVar76[iVar2], iVar0);
						}
						else
						{
							Global_1607808.f_29293[iVar0 /*88*/].f_69[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	iVar6 = unk_0xDCDDFBE975CF2B6C(iParam0, "zone");
	Global_1607808.f_63729 = unk_0x6ED9878D7F475A3E(iVar6, "no");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar6, "vto");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar6, "vld");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar6, "zntp");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar6, "znbs");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar6, "znwd");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar6, "znwvd");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar6, "znatp");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar6, "znwid");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0xEBB80152B94CE1CB(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0xEBB80152B94CE1CB(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1607808.f_63729 > 10)
	{
		Global_1607808.f_63729 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_63729 - 1))
	{
		Global_1607808.f_63752[iVar0 /*26*/][0 /*3*/] = { unk_0x426E928726A693EA(iVar7, iVar0) };
		Global_1607808.f_63752[iVar0 /*26*/][1 /*3*/] = { unk_0x426E928726A693EA(iVar8, iVar0) };
		Global_1607808.f_63752[iVar0 /*26*/].f_9 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD36974570396CA9B(uVar10[iVar1], iVar0) == 2)
			{
				Global_1607808.f_63752[iVar0 /*26*/].f_10[iVar1] = unk_0x09E288B6CD41A6F0(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1607808.f_63752[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0xD36974570396CA9B(uVar15[iVar1], iVar0) == 2)
			{
				Global_1607808.f_63752[iVar0 /*26*/].f_15[iVar1] = unk_0x09E288B6CD41A6F0(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1607808.f_63752[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0xD36974570396CA9B(iVar20, iVar0) == 2)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_20 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar21, iVar0) == 3)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_22 = unk_0x649362E253C7BDC7(iVar21, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar22, iVar0) == 3)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_23 = unk_0x649362E253C7BDC7(iVar22, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar23, iVar0) == 2)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_8 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar24, iVar0) == 3)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_7 = unk_0x649362E253C7BDC7(iVar24, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar25, iVar0) == 2)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_21 = unk_0x09E288B6CD41A6F0(iVar25, iVar0);
		}
		else
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xDCDDFBE975CF2B6C(iParam0, "usj");
	Global_1607808.f_62995 = unk_0x6ED9878D7F475A3E(iVar1, "no");
	iVar2 = unk_0xEBB80152B94CE1CB(iVar1, "vto");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar1, "vld");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar1, "vcm");
	if (Global_1607808.f_62995 > 10)
	{
		Global_1607808.f_62995 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_62995 - 1))
	{
		Global_1607808.f_62996[iVar0 /*9*/] = { unk_0x426E928726A693EA(iVar2, iVar0) };
		Global_1607808.f_62996[iVar0 /*9*/].f_3 = { unk_0x426E928726A693EA(iVar3, iVar0) };
		Global_1607808.f_62996[iVar0 /*9*/].f_6 = { unk_0x426E928726A693EA(iVar4, iVar0) };
		iVar0++;
	}
}

void func_157(int iParam0)
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
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30[4];
	int iVar35;
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0xDCDDFBE975CF2B6C(iParam0, "ddtrig");
	Global_1607808.f_67402 = unk_0x6ED9878D7F475A3E(iVar4, "no");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar4, "id");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar4, "fid");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar4, "rule");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar4, "team");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar4, "pos");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar4, "rad");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar4, "tdel");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar4, "tpnt");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar4, "crkls");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar4, "spveh");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar4, "skprs");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar4, "fcsped");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar4, "prty");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar4, "dbs");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar4, "dbs2");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar4, "drole");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar4, "dspk");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar4, "dspk2");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar4, "panim");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar4, "blok");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar4, "root");
	iVar26 = unk_0xEBB80152B94CE1CB(iVar4, "mgveh");
	iVar27 = unk_0xEBB80152B94CE1CB(iVar4, "vehtg");
	iVar28 = unk_0xEBB80152B94CE1CB(iVar4, "prerq");
	iVar29 = unk_0xEBB80152B94CE1CB(iVar4, "vehdm");
	iVar35 = unk_0xEBB80152B94CE1CB(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar30[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1607808.f_67402 > 69)
	{
		Global_1607808.f_67402 = 69;
	}
	if (unk_0xD36974570396CA9B(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1607808.f_67402 - 1))
		{
			if (unk_0xD36974570396CA9B(iVar8, iVar0) == 2)
			{
				func_158(&(Global_1607808.f_64072[iVar0 /*44*/]), iVar0);
				if (iVar6 != 0 && unk_0xD36974570396CA9B(iVar6, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_1 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/] = unk_0x09E288B6CD41A6F0(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_2 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_3 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_6 = { unk_0x426E928726A693EA(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_9 = unk_0x649362E253C7BDC7(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_5 = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_12 = unk_0x09E288B6CD41A6F0(iVar12, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_13 = unk_0x09E288B6CD41A6F0(iVar17, iVar0);
				}
				if (iVar18 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_10 = unk_0x09E288B6CD41A6F0(iVar18, iVar0);
				}
				if (iVar19 != 0)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_11 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0xD36974570396CA9B(iVar20, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_4 = unk_0x09E288B6CD41A6F0(iVar20, iVar0);
				}
				else
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_4 = 0;
				}
				if (iVar26 != 0 && unk_0xD36974570396CA9B(iVar26, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_17 = unk_0x09E288B6CD41A6F0(iVar26, iVar0);
				}
				if (iVar13 != 0 && unk_0xD36974570396CA9B(iVar13, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_21 = unk_0x09E288B6CD41A6F0(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0xD36974570396CA9B(iVar14, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_28 = unk_0x09E288B6CD41A6F0(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0xD36974570396CA9B(iVar15, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_29 = unk_0x09E288B6CD41A6F0(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0xD36974570396CA9B(iVar16, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_22 = unk_0x09E288B6CD41A6F0(iVar16, iVar0);
				}
				if (iVar21 != 0 && unk_0xD36974570396CA9B(iVar21, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_14 = unk_0x09E288B6CD41A6F0(iVar21, iVar0);
				}
				if (iVar22 != 0 && unk_0xD36974570396CA9B(iVar22, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_15 = unk_0x09E288B6CD41A6F0(iVar22, iVar0);
				}
				if (iVar23 != 0 && unk_0xD36974570396CA9B(iVar23, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_16 = unk_0x09E288B6CD41A6F0(iVar23, iVar0);
				}
				if (iVar27 != 0 && unk_0xD36974570396CA9B(iVar27, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_18 = unk_0x09E288B6CD41A6F0(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0xD36974570396CA9B(iVar28, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_19 = unk_0x09E288B6CD41A6F0(iVar28, iVar0);
				}
				if (iVar29 != 0 && unk_0xD36974570396CA9B(iVar29, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_20 = unk_0x09E288B6CD41A6F0(iVar29, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar30[iVar1] != 0 && unk_0xD36974570396CA9B(uVar30[iVar1], iVar0) == 2)
					{
						Global_1607808.f_64072[iVar0 /*44*/].f_23[iVar1] = unk_0x09E288B6CD41A6F0(uVar30[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar35 != 0 && unk_0xD36974570396CA9B(iVar35, iVar0) == 2)
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_42 = unk_0x09E288B6CD41A6F0(iVar35, iVar0);
				}
				else
				{
					Global_1607808.f_64072[iVar0 /*44*/].f_42 = 0;
				}
				if (iVar24 != 0)
				{
					StringCopy(&(Global_1607808.f_64072[iVar0 /*44*/].f_30), unk_0x48416761101A75AD(iVar24, iVar0), 24);
				}
				if (iVar25 != 0)
				{
					StringCopy(&(Global_1607808.f_64072[iVar0 /*44*/].f_36), unk_0x48416761101A75AD(iVar25, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1607808.f_67402 - 1))
		{
			Global_1607808.f_64072[iVar0 /*44*/] = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_2 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_3 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_6 = { 0f, 0f, 0f };
			Global_1607808.f_64072[iVar0 /*44*/].f_9 = 3f;
			Global_1607808.f_64072[iVar0 /*44*/].f_5 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_12 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_21 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_28 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_29 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_13 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_10 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_11 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_4 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_14 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_15 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_16 = 0;
			StringCopy(&(Global_1607808.f_64072[iVar0 /*44*/].f_30), "", 24);
			StringCopy(&(Global_1607808.f_64072[iVar0 /*44*/].f_36), "", 24);
			Global_1607808.f_64072[iVar0 /*44*/].f_17 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_18 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_19 = -1;
			Global_1607808.f_64072[iVar0 /*44*/].f_20 = 0;
			Global_1607808.f_64072[iVar0 /*44*/].f_42 = 0;
			iVar0++;
		}
	}
	if (unk_0x0D5F4F1912AC26E7(iParam0, "dtmp") == 2)
	{
		Global_1607808.f_67398[0] = unk_0x6ED9878D7F475A3E(iParam0, "dtmp");
	}
	else
	{
		Global_1607808.f_67398[0] = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iParam0, "dtmp2") == 2)
	{
		Global_1607808.f_67398[1] = unk_0x6ED9878D7F475A3E(iParam0, "dtmp2");
	}
	else
	{
		Global_1607808.f_67398[1] = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iParam0, "dtmp3") == 2)
	{
		Global_1607808.f_67398[2] = unk_0x6ED9878D7F475A3E(iParam0, "dtmp3");
	}
	else
	{
		Global_1607808.f_67398[2] = 0;
	}
}

void func_158(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 3f;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = 0;
	uParam0->f_14 = -1;
	uParam0->f_15 = -1;
	uParam0->f_16 = 0;
	uParam0->f_17 = -1;
	uParam0->f_19 = -1;
	uParam0->f_18 = -1;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = 0;
	uParam0->f_22 = -1;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_36), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_23[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_42 = 0;
	if (iParam1 != -1)
	{
		unk_0xC69E84EBBD7166E6(&(Global_1607808.f_67398[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0xFBACB273AA628CC5(uParam0->f_43))
	{
		unk_0x0A8175F24237A3D4(&(uParam0->f_43));
	}
}

void func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	int iVar16;
	char[] cVar17[8];
	
	iVar2 = unk_0xDCDDFBE975CF2B6C(iParam0, "race");
	Global_1607808.f_28666 = unk_0x6ED9878D7F475A3E(iVar2, "chp");
	iVar3 = (Global_1607808.f_28666 - 1);
	Global_1607808.f_28667 = unk_0x6ED9878D7F475A3E(iVar2, "lap");
	Global_1607808.f_28668 = unk_0x6ED9878D7F475A3E(iVar2, "type");
	if (func_81() == 2)
	{
		if (Global_1607808.f_28668 == 6)
		{
			Global_1607808.f_28668 = 0;
		}
		else if (Global_1607808.f_28668 == 7)
		{
			Global_1607808.f_28668 = 1;
		}
	}
	Global_1607808.f_28669 = unk_0x6ED9878D7F475A3E(iVar2, "gtar");
	Global_1607808.f_29231 = unk_0x22B9EF9E61A2066C(iVar2, "head");
	Global_1607808.f_29232 = unk_0x22B9EF9E61A2066C(iVar2, "lrgs");
	Global_1607808.f_29233 = unk_0x22B9EF9E61A2066C(iVar2, "udgs");
	Global_1607808.f_29234 = unk_0x22B9EF9E61A2066C(iVar2, "gw");
	Global_1607808.f_29235 = unk_0x22B9EF9E61A2066C(iVar2, "gl");
	Global_1607808.f_29236 = unk_0x6ED9878D7F475A3E(iVar2, "lanes");
	Global_1607808.f_25142 = { unk_0xE0BDF113BD17440C(iVar2, "grid") };
	Global_1607808.f_28671 = unk_0x6ED9878D7F475A3E(iVar2, "icv");
	Global_1607808.f_28673 = unk_0x6ED9878D7F475A3E(iVar2, "tri1");
	Global_1607808.f_28674 = unk_0x6ED9878D7F475A3E(iVar2, "tri2");
	Global_1607808.f_28675 = unk_0x6ED9878D7F475A3E(iVar2, "clbs");
	Global_1607808.f_29230 = unk_0x6ED9878D7F475A3E(iVar2, "ptp");
	Global_1607808.f_29228 = unk_0x6ED9878D7F475A3E(iVar2, "strtg");
	Global_1607808.f_29229 = unk_0x6ED9878D7F475A3E(iVar2, "rcdam");
	Global_1607808.f_26341 = unk_0x22B9EF9E61A2066C(iVar2, "rdis");
	Global_1607808.f_29226 = unk_0x6ED9878D7F475A3E(iVar2, "gridty");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar2, "chh");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar2, "chs");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar2, "chl");
	uVar7 = unk_0xEBB80152B94CE1CB(iVar2, "rsp");
	if (Global_1607808.f_28668 == 8)
	{
		Global_1607808.f_28666 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_95(unk_0x426E928726A693EA(iVar6, iVar0)))
			{
				Global_1607808.f_28666++;
			}
			iVar0++;
		}
		iVar3 = Global_1607808.f_28666;
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1607808.f_28668 == 8)
			{
				iVar8 = func_160(iVar6, iVar8);
			}
			else
			{
				iVar8 = iVar0;
			}
			Global_1607808.f_25846[iVar0 /*3*/] = { unk_0x426E928726A693EA(iVar6, iVar8) };
			Global_1607808.f_26128[iVar0] = unk_0x649362E253C7BDC7(iVar4, iVar8);
			if (unk_0xD36974570396CA9B(iVar5, iVar8) == 3)
			{
				Global_1607808.f_26270[iVar0] = unk_0x649362E253C7BDC7(iVar5, iVar8);
			}
			else
			{
				Global_1607808.f_26270[iVar0] = 1f;
			}
			if (Global_1607808.f_26270[iVar0] < 1f)
			{
				Global_1607808.f_26270[iVar0] = 1f;
			}
			Global_1607808.f_26057[iVar0] = unk_0x4C89B1DF90D9092F(uVar7, iVar8);
			iVar8++;
		}
		iVar0++;
	}
	iVar9 = unk_0xEBB80152B94CE1CB(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_17 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
			Global_1607808.f_29239[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar10 = unk_0xEBB80152B94CE1CB(iVar2, "aveh");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
		Global_1607808.f_28676[iVar0] = iVar1;
		Global_1607808.f_28692[iVar0] = 0;
		Global_1607808.f_28692[iVar0] = unk_0x09E288B6CD41A6F0(iVar11, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar17, "vspn", 8);
		StringIntConCat(&cVar17, iVar0, 8);
		uVar12[iVar0] = unk_0xEBB80152B94CE1CB(iVar2, &cVar17);
		iVar16 = 0;
		while (iVar16 <= iVar3)
		{
			Global_1607808.f_25145[iVar16 /*10*/][iVar0 /*3*/] = { unk_0x426E928726A693EA(uVar12[iVar0], iVar16) };
			iVar16++;
		}
		iVar0++;
	}
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_95(unk_0x426E928726A693EA(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0xDCDDFBE975CF2B6C(iParam0, "dhprop");
	Global_1607808.f_77091 = unk_0x6ED9878D7F475A3E(iVar1, "no");
	iVar2 = unk_0xEBB80152B94CE1CB(iVar1, "pos");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar1, "mn");
	if (Global_1607808.f_77091 > 25)
	{
		Global_1607808.f_77091 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_77091 - 1))
	{
		if (unk_0xD36974570396CA9B(iVar2, iVar0) == 5)
		{
			Global_1607808.f_76990[iVar0 /*4*/] = { unk_0x426E928726A693EA(iVar2, iVar0) };
			Global_1607808.f_76990[iVar0 /*4*/].f_3 = unk_0x09E288B6CD41A6F0(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_162(int iParam0)
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
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0xDCDDFBE975CF2B6C(iParam0, "ddblip");
	Global_1607808.f_76989 = unk_0x6ED9878D7F475A3E(iVar1, "no");
	iVar2 = unk_0xEBB80152B94CE1CB(iVar1, "pos");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar1, "rule");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar1, "team");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar1, "type");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar1, "size");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar1, "veh");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar1, "clr");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar1, "bits");
	if (Global_1607808.f_76989 > 10)
	{
		Global_1607808.f_76989 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_76989 - 1))
	{
		if (unk_0xD36974570396CA9B(iVar2, iVar0) == 5)
		{
			Global_1607808.f_76888[iVar0 /*10*/] = { unk_0x426E928726A693EA(iVar2, iVar0) };
			Global_1607808.f_76888[iVar0 /*10*/].f_3 = unk_0x09E288B6CD41A6F0(iVar3, iVar0);
			Global_1607808.f_76888[iVar0 /*10*/].f_4 = unk_0x09E288B6CD41A6F0(iVar4, iVar0);
			Global_1607808.f_76888[iVar0 /*10*/].f_8 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
			Global_1607808.f_76888[iVar0 /*10*/].f_9 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		}
		if (unk_0xD36974570396CA9B(iVar5, iVar0) == 2)
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_6 = unk_0x09E288B6CD41A6F0(iVar5, iVar0);
		}
		else
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar6, iVar0) == 2)
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_5 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
		}
		else
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0xD36974570396CA9B(iVar7, iVar0) == 2)
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_7 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		}
		else
		{
			Global_1607808.f_76888[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_163(int iParam0)
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
	var uVar14[5];
	var uVar20[5];
	var uVar26[5];
	var uVar32[5];
	var uVar38[5];
	var uVar44[5];
	var uVar50[5];
	var uVar56[5];
	int iVar62;
	var uVar63[5];
	var uVar69[5];
	var uVar75[5];
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0xDCDDFBE975CF2B6C(iParam0, "mocap");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar5, "name");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar5, "bits");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar5, "bits2");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar5, "timer");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar5, "rng");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar5, "ccp");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar5, "ccr");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar5, "ccs");
	iVar62 = unk_0xEBB80152B94CE1CB(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xD36974570396CA9B(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1607808.f_73908[iVar0 /*434*/]), unk_0x48416761101A75AD(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_73908[iVar0 /*434*/]), "", 64);
		}
		if (unk_0xD36974570396CA9B(iVar7, iVar0) == 2)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_16 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar8, iVar0) == 2)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_17 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar62, iVar0) == 2)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_424 = unk_0x09E288B6CD41A6F0(iVar62, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar9, iVar0) == 2)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_61 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar10, iVar0) == 2)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_62 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar11, iVar0) == 5)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_54 = { unk_0x426E928726A693EA(iVar11, iVar0) };
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0xD36974570396CA9B(iVar12, iVar0) == 3)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_60 = unk_0x649362E253C7BDC7(iVar12, iVar0);
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar13, iVar0) == 5)
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_57 = { unk_0x426E928726A693EA(iVar13, iVar0) };
		}
		else
		{
			Global_1607808.f_73908[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0xEBB80152B94CE1CB(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD36974570396CA9B(uVar14[iVar0], iVar1) == 5)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar20[iVar0], iVar1) == 5)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar26[iVar0], iVar1) == 3)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_44[iVar1] = unk_0x649362E253C7BDC7(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar32[iVar0], iVar1) == 3)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_49[iVar1] = unk_0x649362E253C7BDC7(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0xD36974570396CA9B(uVar63[iVar0], iVar2) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_425[iVar2] = unk_0x09E288B6CD41A6F0(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0xD36974570396CA9B(uVar69[iVar0], iVar2) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_430[iVar2] = unk_0x09E288B6CD41A6F0(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar75[iVar0], iVar2) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_432[iVar2] = unk_0x09E288B6CD41A6F0(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD36974570396CA9B(uVar38[iVar0], iVar1) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x09E288B6CD41A6F0(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xD36974570396CA9B(uVar44[iVar0], iVar1) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x09E288B6CD41A6F0(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0xD36974570396CA9B(uVar50[iVar0], iVar1) == 2)
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x09E288B6CD41A6F0(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0xD36974570396CA9B(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0x48416761101A75AD(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1607808.f_73908[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_164(int iParam0)
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
	var uVar11[5];
	var uVar17[5];
	var uVar23[5];
	var uVar29[5];
	var uVar35[5];
	var uVar41[5];
	var uVar47[5];
	var uVar53[5];
	var uVar59[5];
	var uVar65[5];
	var uVar71[5];
	var uVar77[5];
	var uVar83[5];
	var uVar89[5];
	var uVar95[5];
	var uVar101[5];
	var uVar107[5];
	var uVar113[5];
	var uVar119[5];
	var uVar125[5];
	var uVar131[5];
	var uVar137[5];
	var uVar143[5];
	var uVar149[5];
	var uVar155[5];
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0xDCDDFBE975CF2B6C(iParam0, "cuts");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar4, "name");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar4, "bits");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar4, "shot");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar4, "anim");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar4, "midp");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar4, "rng");
	iVar161 = unk_0xEBB80152B94CE1CB(iVar4, "train");
	iVar162 = unk_0xEBB80152B94CE1CB(iVar4, "trahl");
	iVar163 = unk_0xEBB80152B94CE1CB(iVar4, "traou");
	iVar164 = unk_0xEBB80152B94CE1CB(iVar4, "trapo");
	iVar165 = unk_0xEBB80152B94CE1CB(iVar4, "ccp");
	iVar166 = unk_0xEBB80152B94CE1CB(iVar4, "ccr");
	iVar167 = unk_0xEBB80152B94CE1CB(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xD36974570396CA9B(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/]), unk_0x48416761101A75AD(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0xD36974570396CA9B(iVar6, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_4 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar6, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_5 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar7, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_43 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar8, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_42 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar9, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_44 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar10, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_735 = unk_0x09E288B6CD41A6F0(iVar10, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar165, iVar0) == 5)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_728 = { unk_0x426E928726A693EA(iVar165, iVar0) };
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0xD36974570396CA9B(iVar166, iVar0) == 3)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_731 = unk_0x649362E253C7BDC7(iVar166, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar167, iVar0) == 5)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_732 = { unk_0x426E928726A693EA(iVar167, iVar0) };
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0xD36974570396CA9B(iVar161, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_436 = unk_0x09E288B6CD41A6F0(iVar161, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar162, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_438 = unk_0x09E288B6CD41A6F0(iVar162, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar163, iVar0) == 2)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_437 = unk_0x09E288B6CD41A6F0(iVar163, iVar0);
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar164, iVar0) == 5)
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_439 = { unk_0x426E928726A693EA(iVar164, iVar0) };
		}
		else
		{
			Global_1607808.f_67562[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD36974570396CA9B(uVar95[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar101[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar89[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_32[iVar1] = unk_0x649362E253C7BDC7(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar107[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_37[iVar1] = unk_0x649362E253C7BDC7(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0xD36974570396CA9B(uVar11[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_45[iVar1] = unk_0x09E288B6CD41A6F0(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar17[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_66[iVar1] = unk_0x09E288B6CD41A6F0(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar23[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar29[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar35[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar41[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar47[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_331[iVar1] = unk_0x649362E253C7BDC7(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar53[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_352[iVar1] = unk_0x649362E253C7BDC7(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar71[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_373[iVar1] = unk_0x09E288B6CD41A6F0(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar77[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_394[iVar1] = unk_0x09E288B6CD41A6F0(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar83[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_415[iVar1] = unk_0x649362E253C7BDC7(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar113[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_524[iVar1] = unk_0x09E288B6CD41A6F0(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0xD36974570396CA9B(uVar119[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar125[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar131[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar131[iVar0], iVar1) };
				Global_1607808.f_77135[iVar1] = Global_1607808.f_67562[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1607808.f_77156[iVar1] = Global_1607808.f_67562[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1607808.f_77177[iVar1] = Global_1607808.f_67562[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar137[iVar0], iVar1) == 5)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0x426E928726A693EA(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD36974570396CA9B(uVar143[iVar0], iVar1) == 3)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_503[iVar1] = unk_0x649362E253C7BDC7(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0xD36974570396CA9B(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0x48416761101A75AD(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0xD36974570396CA9B(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0x48416761101A75AD(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1607808.f_67562[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD36974570396CA9B(uVar59[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0x09E288B6CD41A6F0(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xD36974570396CA9B(uVar65[iVar0], iVar1) == 2)
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0x09E288B6CD41A6F0(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1607808.f_67562[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0xDCDDFBE975CF2B6C(iParam0, "eoir") == 0 || unk_0xDCDDFBE975CF2B6C(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0xEBB80152B94CE1CB(iParam0, "eoid");
	iVar9 = unk_0xEBB80152B94CE1CB(iParam0, "eoet");
	iVar10 = unk_0xDCDDFBE975CF2B6C(iParam0, "eoir");
	iVar11 = unk_0xDCDDFBE975CF2B6C(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0xD36974570396CA9B(iVar8, iVar0) == 2)
		{
			Global_1607808.f_59869[iVar0] = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
		}
		else
		{
			Global_1607808.f_59869[iVar0] = -1;
		}
		if (unk_0xD36974570396CA9B(iVar9, iVar0) == 2)
		{
			Global_1607808.f_59838[iVar0] = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
		}
		else
		{
			Global_1607808.f_59838[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 9)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x0D5F4F1912AC26E7(iVar10, &cVar4) == 2)
				{
					Global_1607808.f_59900[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x6ED9878D7F475A3E(iVar10, &cVar4);
				}
				else
				{
					Global_1607808.f_59900[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x0D5F4F1912AC26E7(iVar11, &cVar4) == 2)
				{
					Global_1607808.f_61431[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x6ED9878D7F475A3E(iVar11, &cVar4);
				}
				else
				{
					Global_1607808.f_59900[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		iVar12 = Global_1607808.f_59869[iVar0];
		iVar13 = Global_1607808.f_59838[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1607808.f_59869[iVar3] == iVar12) && Global_1607808.f_59838[iVar3] == iVar13)
				{
					Global_1607808.f_59838[iVar3] = -1;
					Global_1607808.f_59869[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 9)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1607808.f_59900[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							Global_1607808.f_61431[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							iVar2++;
						}
						iVar1++;
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_166(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	
	iVar4 = unk_0xDCDDFBE975CF2B6C(iParam0, "kill");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar4, "no");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar4, "mcp");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1607808.f_22 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1607808.f_28655[iVar1] = unk_0x09E288B6CD41A6F0(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1607808.f_28655[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1607808.f_28161[iVar0 /*29*/][iVar1] = unk_0x09E288B6CD41A6F0(uVar8[iVar1], iVar0);
					Global_1607808.f_28161[iVar0 /*29*/].f_5[iVar1] = unk_0x09E288B6CD41A6F0(uVar13[iVar1], iVar0);
					if (Global_1607808.f_28161[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1607808.f_28161[iVar0 /*29*/].f_10[iVar1] = unk_0x09E288B6CD41A6F0(uVar18[iVar1], iVar0);
					if (unk_0xD36974570396CA9B(uVar23[iVar1], iVar0) == 2)
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_15[iVar1] = unk_0x09E288B6CD41A6F0(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0xD36974570396CA9B(uVar28[iVar1], iVar0) == 2)
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_20[iVar1] = unk_0x09E288B6CD41A6F0(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0xD36974570396CA9B(iVar6, iVar0) == 2)
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_28 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
					}
					else
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0xD36974570396CA9B(iVar7, iVar0) == 2)
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_27 = unk_0x09E288B6CD41A6F0(iVar7, iVar0);
					}
					else
					{
						Global_1607808.f_28161[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
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
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	
	iVar4 = unk_0xDCDDFBE975CF2B6C(iParam0, "goto");
	Global_1607808.f_28661[0] = unk_0x6ED9878D7F475A3E(iVar4, "no");
	Global_1607808.f_6 = unk_0x6ED9878D7F475A3E(iVar4, "atrig");
	iVar80 = unk_0xEBB80152B94CE1CB(iVar4, "lmcp");
	iVar81 = unk_0xEBB80152B94CE1CB(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1607808.f_22 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0xEBB80152B94CE1CB(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1607808.f_28661[0] - 1))
			{
				Global_1607808.f_26342[iVar0 /*101*/].f_1[0 /*3*/] = { unk_0x426E928726A693EA(uVar5[iVar1], iVar0) };
				Global_1607808.f_26342[iVar0 /*101*/].f_14[0] = unk_0x649362E253C7BDC7(uVar10[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_61[iVar1] = unk_0x09E288B6CD41A6F0(uVar15[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_66[iVar1] = unk_0x09E288B6CD41A6F0(uVar20[iVar1], iVar0);
				if (Global_1607808.f_26342[iVar0 /*101*/].f_66[iVar1] == -1)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_66[iVar1] = 99999;
				}
				Global_1607808.f_26342[iVar0 /*101*/].f_71[iVar1] = unk_0x09E288B6CD41A6F0(uVar25[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_47[iVar1] = unk_0x649362E253C7BDC7(uVar60[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_76[iVar1] = unk_0x09E288B6CD41A6F0(uVar30[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_36[iVar1] = unk_0x09E288B6CD41A6F0(uVar35[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_52 = unk_0x09E288B6CD41A6F0(uVar50[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_31[0] = unk_0x09E288B6CD41A6F0(uVar40[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_41[0] = unk_0x09E288B6CD41A6F0(uVar45[iVar1], iVar0);
				Global_1607808.f_26342[iVar0 /*101*/].f_97 = unk_0x649362E253C7BDC7(uVar55[iVar1], iVar0);
				if (unk_0xD36974570396CA9B(iVar80, iVar0) == 2)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_93 = unk_0x09E288B6CD41A6F0(iVar80, iVar0);
				}
				else
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_93 = -1;
				}
				if (unk_0xD36974570396CA9B(iVar81, iVar0) == 2)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_94 = unk_0x09E288B6CD41A6F0(iVar81, iVar0);
				}
				else
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_94 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar65[iVar1], iVar0) == 2)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_56[iVar1] = unk_0x09E288B6CD41A6F0(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_56[iVar1] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar70[iVar1], iVar0) == 2)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_81[iVar1] = unk_0x09E288B6CD41A6F0(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_81[iVar1] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar75[iVar1], iVar0) == 2)
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_86[iVar1] = unk_0x09E288B6CD41A6F0(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1607808.f_26342[iVar0 /*101*/].f_86[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0xEBB80152B94CE1CB(iVar4, "locbc");
	iVar83 = unk_0xEBB80152B94CE1CB(iVar4, "loc2rd");
	iVar84 = unk_0xEBB80152B94CE1CB(iVar4, "loclbr");
	iVar85 = unk_0xEBB80152B94CE1CB(iVar4, "locdir");
	iVar86 = unk_0xEBB80152B94CE1CB(iVar4, "loctol");
	iVar87 = unk_0xEBB80152B94CE1CB(iVar4, "lochgt");
	iVar88 = unk_0xEBB80152B94CE1CB(iVar4, "locart");
	iVar89 = unk_0xEBB80152B94CE1CB(iVar4, "locaa1");
	iVar90 = unk_0xEBB80152B94CE1CB(iVar4, "locaa2");
	iVar91 = unk_0xEBB80152B94CE1CB(iVar4, "locaaw");
	iVar92 = unk_0xEBB80152B94CE1CB(iVar4, "nmpass");
	iVar93 = unk_0xEBB80152B94CE1CB(iVar4, "nmfail");
	iVar94 = unk_0xEBB80152B94CE1CB(iVar4, "locstd");
	iVar95 = unk_0xEBB80152B94CE1CB(iVar4, "locstm");
	iVar96 = unk_0xEBB80152B94CE1CB(iVar4, "lcbs2");
	iVar97 = unk_0xEBB80152B94CE1CB(iVar4, "locti");
	iVar98 = unk_0xEBB80152B94CE1CB(iVar4, "locgc");
	iVar99 = unk_0xEBB80152B94CE1CB(iVar4, "loclto");
	iVar100 = unk_0xEBB80152B94CE1CB(iVar4, "locloo");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_28661[0] - 1))
	{
		if (unk_0xD36974570396CA9B(iVar82, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_46 = unk_0x09E288B6CD41A6F0(iVar82, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_46 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar83, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_20 = unk_0x649362E253C7BDC7(iVar83, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_20 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar84, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_19 = unk_0x649362E253C7BDC7(iVar84, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_19 = 1f;
		}
		if (unk_0xD36974570396CA9B(iVar85, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_28 = unk_0x649362E253C7BDC7(iVar85, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_28 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar86, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_29 = unk_0x649362E253C7BDC7(iVar86, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_29 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar87, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_30 = unk_0x649362E253C7BDC7(iVar87, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_30 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar97, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_54 = unk_0x649362E253C7BDC7(iVar97, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_54 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar98, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_55 = unk_0x649362E253C7BDC7(iVar98, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_55 = 0f;
		}
		if (unk_0xD36974570396CA9B(iVar88, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/] = unk_0x09E288B6CD41A6F0(iVar88, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/] = 0;
		}
		if (unk_0xD36974570396CA9B(iVar92, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_91 = unk_0x09E288B6CD41A6F0(iVar92, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_91 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar93, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_92 = unk_0x09E288B6CD41A6F0(iVar93, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_92 = -1;
		}
		if (unk_0xD36974570396CA9B(iVar94, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_96 = unk_0x649362E253C7BDC7(iVar94, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_96 = 10.5f;
		}
		if (unk_0xD36974570396CA9B(iVar95, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_95 = unk_0x09E288B6CD41A6F0(iVar95, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_95 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar96, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_53 = unk_0x09E288B6CD41A6F0(iVar96, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_53 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar100, iVar0) == 2)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_98 = unk_0x09E288B6CD41A6F0(iVar100, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_98 = 0;
		}
		if (unk_0xD36974570396CA9B(iVar100, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_99 = unk_0x649362E253C7BDC7(iVar99, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_99 = 0f;
		}
		if ((unk_0xD36974570396CA9B(iVar89, iVar0) == 5 && unk_0xD36974570396CA9B(iVar90, iVar0) == 5) && unk_0xD36974570396CA9B(iVar91, iVar0) == 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_21 = { unk_0x426E928726A693EA(iVar89, iVar0) };
			Global_1607808.f_26342[iVar0 /*101*/].f_24 = { unk_0x426E928726A693EA(iVar90, iVar0) };
			Global_1607808.f_26342[iVar0 /*101*/].f_27 = unk_0x649362E253C7BDC7(iVar91, iVar0);
		}
		else
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_21 = { 0f, 0f, 0f };
			Global_1607808.f_26342[iVar0 /*101*/].f_24 = { 0f, 0f, 0f };
			Global_1607808.f_26342[iVar0 /*101*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x0D5F4F1912AC26E7(iParam0, "cover") == 6)
	{
		iVar1 = unk_0xDCDDFBE975CF2B6C(iParam0, "cover");
		Global_1607808.f_31429 = unk_0x6ED9878D7F475A3E(iVar1, "no");
		iVar2 = unk_0xEBB80152B94CE1CB(iVar1, "loc");
		iVar3 = unk_0xEBB80152B94CE1CB(iVar1, "dir");
		iVar4 = unk_0xEBB80152B94CE1CB(iVar1, "use");
		iVar5 = unk_0xEBB80152B94CE1CB(iVar1, "high");
		iVar6 = unk_0xEBB80152B94CE1CB(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1607808.f_31429 - 1))
		{
			Global_1607808.f_31430[iVar0 /*7*/] = { unk_0x426E928726A693EA(iVar2, iVar0) };
			Global_1607808.f_31430[iVar0 /*7*/].f_3 = unk_0x649362E253C7BDC7(iVar3, iVar0);
			Global_1607808.f_31430[iVar0 /*7*/].f_4 = unk_0x09E288B6CD41A6F0(iVar4, iVar0);
			Global_1607808.f_31430[iVar0 /*7*/].f_5 = unk_0x09E288B6CD41A6F0(iVar5, iVar0);
			Global_1607808.f_31430[iVar0 /*7*/].f_6 = unk_0x09E288B6CD41A6F0(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	
	iVar2 = unk_0xDCDDFBE975CF2B6C(iParam0, "door");
	Global_1607808.f_31142 = unk_0x6ED9878D7F475A3E(iVar2, "no");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar2, "loc");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar2, "fopen");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar2, "model");
	uVar6 = unk_0xEBB80152B94CE1CB(iVar2, "lock");
	uVar7 = unk_0xEBB80152B94CE1CB(iVar2, "swing");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar2, "udrle");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar2, "udtem");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar2, "udrat");
	uVar11 = unk_0xEBB80152B94CE1CB(iVar2, "swingu");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar2, "audst");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar2, "aurt");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar2, "uaudst");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar2, "uaurt");
	uVar16 = unk_0xEBB80152B94CE1CB(iVar2, "lfp");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar2, "dtime");
	uVar18 = unk_0xEBB80152B94CE1CB(iVar2, "mid");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1607808.f_31142 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1607808.f_31143[iVar0 /*19*/] = { unk_0x426E928726A693EA(iVar3, iVar0) };
			Global_1607808.f_31143[iVar0 /*19*/].f_3 = unk_0x649362E253C7BDC7(iVar4, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_14 = unk_0x4C89B1DF90D9092F(uVar6, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_15 = unk_0x4C89B1DF90D9092F(uVar7, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_5 = unk_0x09E288B6CD41A6F0(iVar8, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_6 = unk_0x09E288B6CD41A6F0(iVar9, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_13 = unk_0x649362E253C7BDC7(iVar10, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_16 = unk_0x4C89B1DF90D9092F(uVar11, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_8 = unk_0x649362E253C7BDC7(iVar13, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_9 = unk_0x649362E253C7BDC7(iVar12, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_10 = unk_0x649362E253C7BDC7(iVar15, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_11 = unk_0x649362E253C7BDC7(iVar14, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_12 = unk_0x4C89B1DF90D9092F(uVar16, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_18 = unk_0x09E288B6CD41A6F0(iVar19, iVar0);
			iVar1 = unk_0x09E288B6CD41A6F0(iVar5, iVar0);
			Global_1607808.f_31143[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0xD36974570396CA9B(iVar17, iVar0) == 2)
			{
				Global_1607808.f_31143[iVar0 /*19*/].f_7 = unk_0x09E288B6CD41A6F0(iVar17, iVar0);
			}
			else
			{
				Global_1607808.f_31143[iVar0 /*19*/].f_7 = 0;
			}
			Global_1607808.f_31143[iVar0 /*19*/].f_17 = unk_0x4C89B1DF90D9092F(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	var uVar85[4];
	var uVar90[4];
	var uVar95[4];
	var uVar100[4];
	var uVar105[4];
	var uVar110[4];
	var uVar115[4];
	var uVar120[4];
	var uVar125[4];
	var uVar130[4];
	var uVar135[4];
	var uVar140[4];
	var uVar145[4];
	var uVar150[4];
	var uVar155[4];
	var uVar160[4];
	var uVar165[4];
	var uVar170[4];
	var uVar175[4];
	var uVar180[4];
	var uVar185[4];
	var uVar190[4];
	var uVar195[4];
	var uVar200[4];
	var uVar205[4];
	var uVar210[4];
	var uVar215[4];
	var uVar220[4];
	var uVar225[4];
	var uVar230[4];
	var uVar235[4];
	var uVar240[4];
	var uVar245[4];
	var uVar250[4];
	var uVar255[4];
	var uVar260[4];
	var uVar265[4];
	var uVar270[4];
	var uVar275[4];
	var uVar280[4];
	var uVar285[4];
	var uVar290[4];
	var uVar295[4];
	var uVar300[4];
	var uVar305[4];
	struct<5> Var310;
	var uVar331[4];
	var uVar336[4];
	var uVar341[4];
	var uVar346[4];
	var uVar351[4];
	var uVar356[4];
	var uVar361[4];
	var uVar366[4];
	var uVar371[4];
	var uVar376[4];
	var uVar381[4];
	var uVar386[4];
	var uVar391[4];
	var uVar396[4];
	var uVar401[4];
	var uVar406[4];
	var uVar411[4];
	var uVar416[4];
	var uVar421[4];
	var uVar426[4];
	var uVar431[4];
	var uVar436[4];
	var uVar441[4];
	var uVar446[4];
	var uVar451[4];
	var uVar456[4];
	var uVar461[4];
	var uVar466[4];
	var uVar471[4];
	var uVar476[4];
	var uVar481[4];
	var uVar486[4];
	var uVar491[4];
	var uVar496[4];
	var uVar501[4];
	var uVar506[4];
	var uVar511[4];
	var uVar516[4];
	var uVar521[4];
	var uVar526[4];
	var uVar531[4];
	var uVar536[4];
	var uVar541[4];
	var uVar546[4];
	var uVar551[4];
	var uVar556[4];
	var uVar561[4];
	var uVar566[4];
	var uVar571[4];
	var uVar576[4];
	var uVar581[4];
	var uVar586[4];
	var uVar591[4];
	var uVar596[4];
	var uVar601[4];
	var uVar606[4];
	var uVar611[4];
	var uVar616[4];
	var uVar621[4];
	var uVar626[4];
	var uVar631[4];
	var uVar636[4];
	var uVar641[4];
	var uVar646[4];
	var uVar651[4];
	var uVar656[4];
	var uVar661[4];
	var uVar666[4];
	var uVar671[4];
	var uVar676[4];
	var uVar681[4];
	var uVar686[4];
	var uVar691[4];
	var uVar696[4];
	var uVar701[4];
	var uVar706[4];
	var uVar711[4];
	var uVar716[4];
	var uVar721[4];
	var uVar726[4];
	var uVar731[4];
	var uVar736[4];
	var uVar741[4];
	var uVar746[4];
	var uVar751[4];
	var uVar756[4];
	var uVar761[4];
	var uVar766[4];
	int iVar771;
	int iVar772;
	int iVar773;
	int iVar774;
	
	iVar0 = unk_0xDCDDFBE975CF2B6C(*iParam0, "endcon");
	Var310 = 4;
	Var310.f_1 = 4;
	Var310.f_1.f_5 = 4;
	Var310.f_1.f_5.f_5 = 4;
	Var310.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1607808.f_22 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "rloft", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "diagwf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar751[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar756[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhsi", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar761[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhsd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar766[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "minspd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdlp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdmx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar716[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "prmg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar721[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "traf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar726[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "pden", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar731[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "shdtxt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar736[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "hitsnd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar741[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar275[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar270[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "rdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar746[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar305[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar245[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar250[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar255[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar260[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar280[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar285[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0D5F4F1912AC26E7(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar290[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar295[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar341[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar346[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar351[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar356[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar361[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar366[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar371[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar386[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar376[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar381[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar391[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar396[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar401[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar336[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "sia", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "stiam", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmiam2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "sim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmi2m", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "fleer", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			StringCopy(&cVar4, "fleev", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var310[iVar1 /*5*/][iVar3] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar331[iVar3] = unk_0xEBB80152B94CE1CB(iVar0, &cVar4);
				iVar3++;
			}
			iVar771 = unk_0xEBB80152B94CE1CB(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1607808.f_77[iVar1 /*6002*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_454[iVar2] = unk_0x09E288B6CD41A6F0(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_454[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar20[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_472[iVar2] = unk_0x09E288B6CD41A6F0(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_472[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2057[iVar2] = unk_0x09E288B6CD41A6F0(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2057[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2129[iVar2] = unk_0x09E288B6CD41A6F0(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2129[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2147[iVar2] = unk_0x09E288B6CD41A6F0(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2147[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3288[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3288[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_398[iVar2] = unk_0x09E288B6CD41A6F0(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_398[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_416[iVar2] = unk_0x09E288B6CD41A6F0(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_416[iVar2] = 0;
				}
				if (uVar701[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5786[iVar2] = unk_0x09E288B6CD41A6F0(uVar701[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5786[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar706[iVar1], iVar2) == 2 && Global_1607808.f_2 != 6)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5804[iVar2] = unk_0x09E288B6CD41A6F0(uVar706[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5804[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar711[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5822[iVar2] = unk_0x09E288B6CD41A6F0(uVar711[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5822[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar751[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1981[iVar2] = unk_0x09E288B6CD41A6F0(uVar751[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1981[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar756[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1999[iVar2] = unk_0x09E288B6CD41A6F0(uVar756[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1999[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar761[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2017[iVar2] = unk_0x09E288B6CD41A6F0(uVar761[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2017[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar766[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2035[iVar2] = unk_0x09E288B6CD41A6F0(uVar766[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2035[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar716[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5840[iVar2] = unk_0x09E288B6CD41A6F0(uVar716[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5840[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar721[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5858[iVar2] = unk_0x09E288B6CD41A6F0(uVar721[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5858[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar726[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5912[iVar2] = unk_0x09E288B6CD41A6F0(uVar726[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5912[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar731[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5930[iVar2] = unk_0x09E288B6CD41A6F0(uVar731[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5930[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar736[iVar1], iVar2) == 2)
				{
					iVar772 = unk_0x09E288B6CD41A6F0(uVar736[iVar1], iVar2);
					if (iVar772 > 0)
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_5876[iVar2] = iVar772;
					}
					else
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_5876[iVar2] = 0;
					}
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5876[iVar2] = 0;
				}
				if (uVar741[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5894[iVar2] = unk_0x09E288B6CD41A6F0(uVar741[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5894[iVar2] = 0;
				}
				if (Global_1607808.f_77[iVar1 /*6002*/].f_416[iVar2] == 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_416[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_436[iVar2] = unk_0x09E288B6CD41A6F0(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_436[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2183[iVar2] = unk_0x09E288B6CD41A6F0(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2183[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2165[iVar2] = unk_0x09E288B6CD41A6F0(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2165[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2205[iVar2] = unk_0x09E288B6CD41A6F0(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2205[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar85[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2225[iVar2] = unk_0x09E288B6CD41A6F0(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2225[iVar2] = 10000;
				}
				if (unk_0xD36974570396CA9B(uVar90[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2261[iVar2] = unk_0x09E288B6CD41A6F0(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2261[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_526[iVar2] = unk_0x09E288B6CD41A6F0(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_526[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_544[iVar2] = unk_0x09E288B6CD41A6F0(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_544[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_598[iVar2] = unk_0x09E288B6CD41A6F0(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_598[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_562[iVar2] = unk_0x09E288B6CD41A6F0(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_562[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_580[iVar2] = unk_0x09E288B6CD41A6F0(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_580[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar110[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2243[iVar2] = unk_0x09E288B6CD41A6F0(uVar110[iVar1], iVar2);
				}
				else if (unk_0xD36974570396CA9B(iVar771, iVar1) == 2 && iVar771 != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2243[iVar2] = unk_0x09E288B6CD41A6F0(iVar771, iVar1);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2243[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar105[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_634[iVar2] = unk_0x09E288B6CD41A6F0(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_634[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar275[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_508[iVar2] = unk_0x09E288B6CD41A6F0(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_508[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar270[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_490[iVar2] = unk_0x09E288B6CD41A6F0(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_490[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_616[iVar2] = unk_0x09E288B6CD41A6F0(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_616[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_652[iVar2] = unk_0x09E288B6CD41A6F0(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_652[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5732[iVar2] = unk_0x09E288B6CD41A6F0(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5732[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5750[iVar2] = unk_0x09E288B6CD41A6F0(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5750[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar135[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5768[iVar2] = unk_0x09E288B6CD41A6F0(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5768[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2672[iVar2 /*3*/] = { unk_0x426E928726A693EA(uVar145[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2672[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_145())
				{
					if (uVar150[iVar1] != 0)
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3561[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar150[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3561[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar155[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2724[iVar2 /*3*/] = { unk_0x426E928726A693EA(uVar155[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2724[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2794[iVar2] = unk_0x09E288B6CD41A6F0(uVar160[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2794[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar165[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2830[iVar2] = unk_0x09E288B6CD41A6F0(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2830[iVar2] = 0;
				}
				if (uVar210[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2279[iVar2] = unk_0x09E288B6CD41A6F0(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2279[iVar2] = 0;
				}
				if (uVar205[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2776[iVar2] = unk_0x649362E253C7BDC7(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2776[iVar2] = 0f;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2994[iVar2] = unk_0x09E288B6CD41A6F0(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2994[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3012[iVar2] = unk_0x09E288B6CD41A6F0(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3012[iVar2] = 0;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3030[iVar2] = unk_0x09E288B6CD41A6F0(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3030[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar230[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3048[iVar2] = unk_0x09E288B6CD41A6F0(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3048[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar235[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3066[iVar2] = unk_0x09E288B6CD41A6F0(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3066[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar240[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_37[iVar2] = unk_0x09E288B6CD41A6F0(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0xD36974570396CA9B(Var310[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_3122[iVar2 /*5*/][iVar3] = unk_0x09E288B6CD41A6F0(Var310[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_3122[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0xD36974570396CA9B(uVar331[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3208[iVar3 /*16*/]), unk_0x48416761101A75AD(uVar331[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3208[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0xD36974570396CA9B(uVar300[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3086[iVar2] = unk_0x09E288B6CD41A6F0(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3086[iVar2] = Global_1607808.f_77[iVar1 /*6002*/].f_1973;
				}
				if (unk_0xD36974570396CA9B(uVar305[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3104[iVar2] = unk_0x09E288B6CD41A6F0(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_3104[iVar2] = Global_1607808.f_77[iVar1 /*6002*/].f_2055;
				}
				if (bVar8)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][0] = unk_0x09E288B6CD41A6F0(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][1] = unk_0x09E288B6CD41A6F0(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][2] = unk_0x09E288B6CD41A6F0(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][3] = unk_0x09E288B6CD41A6F0(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5541[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][0] = unk_0x09E288B6CD41A6F0(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][1] = unk_0x09E288B6CD41A6F0(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][2] = unk_0x09E288B6CD41A6F0(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5645[iVar2 /*4*/][2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar295[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5714[iVar2] = unk_0x09E288B6CD41A6F0(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5714[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar170[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2812[iVar2] = unk_0x09E288B6CD41A6F0(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2812[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar175[iVar1], iVar2) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2848[iVar2] = unk_0x649362E253C7BDC7(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2848[iVar2] = -1f;
				}
				if (unk_0xD36974570396CA9B(uVar180[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2886[iVar2] = unk_0x09E288B6CD41A6F0(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2886[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar185[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2868[iVar2] = unk_0x09E288B6CD41A6F0(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2868[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar190[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5948[iVar2] = unk_0x09E288B6CD41A6F0(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5948[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar195[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5966[iVar2] = unk_0x09E288B6CD41A6F0(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5966[iVar2] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar200[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5984[iVar2] = unk_0x09E288B6CD41A6F0(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5984[iVar2] = 0;
				}
				if (uVar265[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5627[iVar2] = unk_0x09E288B6CD41A6F0(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_5627[iVar2] = 0;
				}
				if (uVar341[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2298[iVar2] = unk_0x09E288B6CD41A6F0(uVar341[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2298[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar346[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2582[iVar2] = unk_0x09E288B6CD41A6F0(uVar346[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2582[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar351[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2618[iVar2] = unk_0x09E288B6CD41A6F0(uVar351[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2618[iVar2] = 0;
				}
				if (uVar356[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2334[iVar2] = unk_0x09E288B6CD41A6F0(uVar356[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2334[iVar2] = 0;
				}
				if (uVar361[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2316[iVar2] = unk_0x09E288B6CD41A6F0(uVar361[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2316[iVar2] = 0;
				}
				if (uVar366[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2904[iVar2] = unk_0x09E288B6CD41A6F0(uVar366[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2904[iVar2] = 0;
				}
				if (uVar371[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2976[iVar2] = unk_0x09E288B6CD41A6F0(uVar371[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2976[iVar2] = -1;
				}
				if (uVar376[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2940[iVar2] = unk_0x09E288B6CD41A6F0(uVar376[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2940[iVar2] = 0;
				}
				if (uVar381[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2958[iVar2] = unk_0x09E288B6CD41A6F0(uVar381[iVar1], iVar2);
				}
				else if (Global_1607808.f_77[iVar1 /*6002*/].f_2940[iVar2] != 0 && unk_0x236D8AD7EE179F46(Global_1607808.f_77[iVar1 /*6002*/].f_3030[iVar2], 8))
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2958[iVar2] = Global_1607808.f_77[iVar1 /*6002*/].f_2940[iVar2];
					Global_1607808.f_77[iVar1 /*6002*/].f_2940[iVar2] = 0;
					unk_0xC69E84EBBD7166E6(&(Global_1607808.f_77[iVar1 /*6002*/].f_3030[iVar2]), 8);
				}
				if (uVar386[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2922[iVar2] = unk_0x09E288B6CD41A6F0(uVar386[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2922[iVar2] = 0;
				}
				if (uVar391[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2474[iVar2] = unk_0x09E288B6CD41A6F0(uVar391[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2474[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar396[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2600[iVar2] = unk_0x09E288B6CD41A6F0(uVar396[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2600[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar401[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2636[iVar2] = unk_0x09E288B6CD41A6F0(uVar401[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2636[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar441[iVar1], iVar2) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2654[iVar2] = unk_0x649362E253C7BDC7(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2654[iVar2] = -1f;
				}
				if (uVar336[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2564[iVar2] = unk_0x09E288B6CD41A6F0(uVar336[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2564[iVar2] = 0;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2492[iVar2] = unk_0x09E288B6CD41A6F0(uVar406[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2492[iVar2] = 100;
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2528[iVar2] = unk_0x09E288B6CD41A6F0(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2528[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2546[iVar2] = unk_0x09E288B6CD41A6F0(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2546[iVar2] = 0;
				}
				if (uVar421[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2510[iVar2] = unk_0x09E288B6CD41A6F0(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2510[iVar2] = 0;
				}
				if (uVar426[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2352[iVar2 /*3*/] = { unk_0x426E928726A693EA(uVar426[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2352[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar431[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2404[iVar2 /*3*/] = { unk_0x426E928726A693EA(uVar431[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2404[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2456[iVar2] = unk_0x649362E253C7BDC7(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2456[iVar2] = 0f;
				}
				if (uVar446[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3834[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar446[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_3834[iVar2 /*16*/]), "", 64);
				}
				if (!func_145())
				{
					if (uVar451[iVar1] != 0)
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4313[iVar2 /*6*/]), unk_0x48416761101A75AD(uVar451[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4313[iVar2 /*6*/]), "", 24);
					}
					if (uVar456[iVar1] != 0)
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4107[iVar2 /*6*/]), unk_0x48416761101A75AD(uVar456[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4107[iVar2 /*6*/]), "", 24);
					}
					if (uVar461[iVar1] != 0)
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4210[iVar2 /*6*/]), unk_0x48416761101A75AD(uVar461[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4210[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar466[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4416[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar466[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4416[iVar2 /*16*/]), "", 64);
				}
				if (uVar481[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4689[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar481[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4689[iVar2 /*16*/]), "", 64);
				}
				if (uVar471[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4962[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar471[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_4962[iVar2 /*16*/]), "", 64);
				}
				if (uVar476[iVar1] != 0)
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_5235[iVar2 /*16*/]), unk_0x48416761101A75AD(uVar476[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_5235[iVar2 /*16*/]), "", 64);
				}
				if (uVar486[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2075[iVar2] = unk_0x09E288B6CD41A6F0(uVar486[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2075[iVar2] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar746[iVar1], iVar2) == 2)
				{
					if (unk_0x09E288B6CD41A6F0(uVar746[iVar1], iVar2) > 1)
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_2111[iVar2] = unk_0x09E288B6CD41A6F0(uVar746[iVar1], iVar2);
					}
					else
					{
						Global_1607808.f_77[iVar1 /*6002*/].f_2111[iVar2] = 1;
					}
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2111[iVar2] = 1;
				}
				if (uVar491[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2093[iVar2] = unk_0x09E288B6CD41A6F0(uVar491[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_2093[iVar2] = 0;
				}
				if (uVar531[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_3 = { unk_0x426E928726A693EA(uVar531[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar536[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_6 = { unk_0x426E928726A693EA(uVar536[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar541[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_10 = unk_0x649362E253C7BDC7(uVar541[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_10 = 0f;
				}
				if (uVar546[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_13 = { unk_0x426E928726A693EA(uVar546[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar521[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/] = { unk_0x426E928726A693EA(uVar521[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD36974570396CA9B(uVar526[iVar1], iVar2) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_9 = unk_0x649362E253C7BDC7(uVar526[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_9 = 0f;
				}
				if (uVar611[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_13 = { unk_0x426E928726A693EA(uVar611[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar586[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/] = { unk_0x426E928726A693EA(uVar586[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/] = { 0f, 0f, 0f };
				}
				if (uVar596[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_3 = { unk_0x426E928726A693EA(uVar596[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar591[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_6 = { unk_0x426E928726A693EA(uVar591[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar606[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_10 = unk_0x649362E253C7BDC7(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_10 = 0f;
				}
				if (unk_0xD36974570396CA9B(uVar601[iVar1], iVar2) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_9 = unk_0x649362E253C7BDC7(uVar601[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_9 = 0f;
				}
				if (uVar506[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_3 = { unk_0x426E928726A693EA(uVar506[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar511[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_6 = { unk_0x426E928726A693EA(uVar511[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar516[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_10 = unk_0x649362E253C7BDC7(uVar516[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_10 = 0f;
				}
				if (uVar496[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/] = { unk_0x426E928726A693EA(uVar496[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/] = { 0f, 0f, 0f };
				}
				if (uVar501[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_9 = unk_0x649362E253C7BDC7(uVar501[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1492[iVar2 /*24*/].f_9 = 0f;
				}
				if (uVar691[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1901[iVar2 /*3*/] = { unk_0x426E928726A693EA(uVar691[iVar1], iVar2) };
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1901[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar696[iVar1] != 0)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1953[iVar2] = unk_0x649362E253C7BDC7(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1953[iVar2] = 0f;
				}
				if (unk_0xD36974570396CA9B(uVar551[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_19 = unk_0x09E288B6CD41A6F0(uVar551[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_19 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar556[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_17 = unk_0x09E288B6CD41A6F0(uVar556[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_17 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar561[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_18 = unk_0x09E288B6CD41A6F0(uVar561[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_18 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar566[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_20 = unk_0x09E288B6CD41A6F0(uVar566[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_20 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar571[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_23 = unk_0x09E288B6CD41A6F0(uVar571[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_23 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar576[iVar1], iVar2) == 2 && unk_0xD36974570396CA9B(uVar581[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_21 = unk_0x09E288B6CD41A6F0(uVar576[iVar1], iVar2);
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_22 = unk_0x09E288B6CD41A6F0(uVar581[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_21 = 0;
					Global_1607808.f_77[iVar1 /*6002*/].f_674[iVar2 /*24*/].f_22 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar616[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_19 = unk_0x09E288B6CD41A6F0(uVar616[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_19 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar621[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_17 = unk_0x09E288B6CD41A6F0(uVar621[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_17 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar626[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_18 = unk_0x09E288B6CD41A6F0(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_18 = -1;
				}
				if (unk_0xD36974570396CA9B(uVar631[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_20 = unk_0x09E288B6CD41A6F0(uVar631[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_20 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar636[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_23 = unk_0x09E288B6CD41A6F0(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_23 = 0;
				}
				if (unk_0xD36974570396CA9B(uVar641[iVar1], iVar2) == 2 && unk_0xD36974570396CA9B(uVar646[iVar1], iVar2) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_21 = unk_0x09E288B6CD41A6F0(uVar641[iVar1], iVar2);
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_22 = unk_0x09E288B6CD41A6F0(uVar646[iVar1], iVar2);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_21 = 0;
					Global_1607808.f_77[iVar1 /*6002*/].f_1083[iVar2 /*24*/].f_22 = -1;
				}
				iVar2++;
			}
			iVar773 = 0;
			while (iVar773 <= 51)
			{
				if (unk_0xD36974570396CA9B(uVar651[iVar1], iVar773) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_61[iVar773] = unk_0x09E288B6CD41A6F0(uVar651[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_61[iVar773] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar656[iVar1], iVar773) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_170[iVar773] = unk_0x09E288B6CD41A6F0(uVar656[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_170[iVar773] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar661[iVar1], iVar773) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_280[iVar773] = unk_0x09E288B6CD41A6F0(uVar661[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_280[iVar773] = 0;
				}
				if (unk_0xD36974570396CA9B(uVar666[iVar1], iVar773) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_114[iVar773] = unk_0x649362E253C7BDC7(uVar666[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_114[iVar773] = 1f;
				}
				if (unk_0xD36974570396CA9B(uVar671[iVar1], iVar773) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_223[iVar773] = unk_0x649362E253C7BDC7(uVar671[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_223[iVar773] = 1f;
				}
				if (unk_0xD36974570396CA9B(uVar676[iVar1], iVar773) == 3)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_333[iVar773] = unk_0x649362E253C7BDC7(uVar676[iVar1], iVar773);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_333[iVar773] = 1f;
				}
				iVar773++;
			}
			iVar774 = 0;
			while (iVar774 <= 3)
			{
				if (unk_0xD36974570396CA9B(uVar681[iVar1], iVar774) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_388[iVar774] = unk_0x09E288B6CD41A6F0(uVar681[iVar1], iVar774);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_388[iVar774] = -1;
				}
				if (unk_0xD36974570396CA9B(uVar686[iVar1], iVar774) == 2)
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_393[iVar774] = unk_0x09E288B6CD41A6F0(uVar686[iVar1], iVar774);
				}
				else
				{
					Global_1607808.f_77[iVar1 /*6002*/].f_393[iVar774] = -1;
				}
				iVar774++;
			}
		}
		iVar1++;
	}
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
	int iVar59;
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
	bool bVar70;
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
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	var uVar104;
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
	var uVar117[10];
	
	iVar0 = unk_0xDCDDFBE975CF2B6C(*iParam0, "endcon");
	iVar3 = unk_0xEBB80152B94CE1CB(iVar0, "stpos");
	iVar4 = unk_0xEBB80152B94CE1CB(iVar0, "delr");
	iVar5 = unk_0xEBB80152B94CE1CB(iVar0, "epos");
	iVar6 = unk_0xEBB80152B94CE1CB(iVar0, "endr");
	iVar7 = unk_0xEBB80152B94CE1CB(iVar0, "vareapos");
	iVar8 = unk_0xEBB80152B94CE1CB(iVar0, "arear");
	iVar9 = unk_0xEBB80152B94CE1CB(iVar0, "time");
	iVar10 = unk_0xEBB80152B94CE1CB(iVar0, "plkr");
	iVar11 = unk_0xEBB80152B94CE1CB(iVar0, "pekr");
	iVar12 = unk_0xEBB80152B94CE1CB(iVar0, "vhkr");
	iVar13 = unk_0xEBB80152B94CE1CB(iVar0, "obkr");
	iVar14 = unk_0xEBB80152B94CE1CB(iVar0, "dr");
	iVar15 = unk_0xEBB80152B94CE1CB(iVar0, "pedr");
	iVar16 = unk_0xEBB80152B94CE1CB(iVar0, "vedr");
	iVar17 = unk_0xEBB80152B94CE1CB(iVar0, "obdr");
	iVar18 = unk_0xEBB80152B94CE1CB(iVar0, "lwmbs");
	iVar19 = unk_0xEBB80152B94CE1CB(iVar0, "flmbs");
	iVar20 = unk_0xEBB80152B94CE1CB(iVar0, "vdoibs");
	iVar21 = unk_0xEBB80152B94CE1CB(iVar0, "vdohu");
	iVar22 = unk_0xEBB80152B94CE1CB(iVar0, "tmbts");
	iVar23 = unk_0xEBB80152B94CE1CB(iVar0, "tmbt2");
	iVar24 = unk_0xEBB80152B94CE1CB(iVar0, "swmbs");
	iVar25 = unk_0xEBB80152B94CE1CB(iVar0, "gbmbs");
	iVar26 = unk_0xEBB80152B94CE1CB(iVar0, "pcbd");
	iVar27 = unk_0xEBB80152B94CE1CB(iVar0, "lwbs");
	iVar28 = unk_0xEBB80152B94CE1CB(iVar0, "wodia");
	iVar29 = unk_0xEBB80152B94CE1CB(iVar0, "repcr");
	iVar30 = unk_0xEBB80152B94CE1CB(iVar0, "woabs");
	iVar31 = unk_0xEBB80152B94CE1CB(iVar0, "fwoabs");
	iVar32 = unk_0xEBB80152B94CE1CB(iVar0, "fail");
	iVar33 = unk_0xEBB80152B94CE1CB(iVar0, "vehrsp");
	iVar34 = unk_0xEBB80152B94CE1CB(iVar0, "mtlr");
	iVar35 = unk_0xEBB80152B94CE1CB(iVar0, "mslr");
	iVar36 = unk_0xEBB80152B94CE1CB(iVar0, "mlpl");
	iVar37 = unk_0xEBB80152B94CE1CB(iVar0, "plyl");
	iVar38 = unk_0xEBB80152B94CE1CB(iVar0, "shd");
	iVar39 = unk_0xEBB80152B94CE1CB(iVar0, "spar");
	iVar40 = unk_0xEBB80152B94CE1CB(iVar0, "2spar");
	iVar41 = unk_0xEBB80152B94CE1CB(iVar0, "boud");
	iVar42 = unk_0xEBB80152B94CE1CB(iVar0, "bla");
	iVar43 = unk_0xEBB80152B94CE1CB(iVar0, "wla");
	iVar44 = unk_0xEBB80152B94CE1CB(iVar0, "patm");
	iVar45 = unk_0xEBB80152B94CE1CB(iVar0, "bnd2");
	iVar46 = unk_0xEBB80152B94CE1CB(iVar0, "bla2");
	iVar47 = unk_0xEBB80152B94CE1CB(iVar0, "wla2");
	iVar48 = unk_0xEBB80152B94CE1CB(iVar0, "pat2");
	iVar49 = unk_0xEBB80152B94CE1CB(iVar0, "inv");
	iVar50 = unk_0xEBB80152B94CE1CB(iVar0, "inv2");
	iVar51 = unk_0xEBB80152B94CE1CB(iVar0, "invsw");
	iVar52 = unk_0xEBB80152B94CE1CB(iVar0, "invtm");
	iVar53 = unk_0xEBB80152B94CE1CB(iVar0, "invrl");
	iVar54 = unk_0xEBB80152B94CE1CB(iVar0, "inv2tm");
	iVar55 = unk_0xEBB80152B94CE1CB(iVar0, "inv2rl");
	iVar56 = unk_0xEBB80152B94CE1CB(iVar0, "sinv");
	iVar57 = unk_0xEBB80152B94CE1CB(iVar0, "sinv2");
	iVar58 = unk_0xEBB80152B94CE1CB(iVar0, "minv");
	iVar59 = unk_0xEBB80152B94CE1CB(iVar0, "minv2");
	iVar60 = unk_0xEBB80152B94CE1CB(iVar0, "ppk");
	iVar61 = unk_0xEBB80152B94CE1CB(iVar0, "mts");
	iVar62 = unk_0xEBB80152B94CE1CB(iVar0, "spwia");
	iVar63 = unk_0xEBB80152B94CE1CB(iVar0, "2spwia");
	iVar64 = unk_0xEBB80152B94CE1CB(iVar0, "pcl");
	iVar65 = unk_0xEBB80152B94CE1CB(iVar0, "ocl");
	iVar66 = unk_0xEBB80152B94CE1CB(iVar0, "arrt");
	iVar67 = unk_0xEBB80152B94CE1CB(iVar0, "numpt");
	iVar68 = unk_0xEBB80152B94CE1CB(iVar0, "ptint");
	bVar70 = true;
	if (unk_0x0D5F4F1912AC26E7(iVar0, "mnumpt") != 2)
	{
		bVar70 = false;
		iVar69 = unk_0xEBB80152B94CE1CB(iVar0, "mnumpt");
	}
	iVar71 = unk_0xEBB80152B94CE1CB(iVar0, "tcp");
	iVar72 = unk_0xEBB80152B94CE1CB(iVar0, "tcr");
	iVar73 = unk_0xEBB80152B94CE1CB(iVar0, "abits");
	iVar74 = unk_0xEBB80152B94CE1CB(iVar0, "sdobs");
	iVar75 = unk_0xEBB80152B94CE1CB(iVar0, "edobs");
	iVar76 = unk_0xEBB80152B94CE1CB(iVar0, "dogps");
	iVar77 = unk_0xEBB80152B94CE1CB(iVar0, "teamv");
	iVar78 = unk_0xEBB80152B94CE1CB(iVar0, "teamrvc");
	iVar79 = unk_0xEBB80152B94CE1CB(iVar0, "mcvbs");
	iVar80 = unk_0xEBB80152B94CE1CB(iVar0, "mcobs");
	iVar81 = unk_0xEBB80152B94CE1CB(iVar0, "mcpbs");
	iVar82 = unk_0xEBB80152B94CE1CB(iVar0, "mcgbs");
	iVar83 = unk_0xEBB80152B94CE1CB(iVar0, "rpgbs");
	iVar84 = unk_0xEBB80152B94CE1CB(iVar0, "mcpbs1");
	iVar85 = unk_0xEBB80152B94CE1CB(iVar0, "mcpbs2");
	iVar86 = unk_0xEBB80152B94CE1CB(iVar0, "mcgbs1");
	iVar87 = unk_0xEBB80152B94CE1CB(iVar0, "mcgbs2");
	iVar88 = unk_0xEBB80152B94CE1CB(iVar0, "rpgbs1");
	iVar89 = unk_0xEBB80152B94CE1CB(iVar0, "rpgbs2");
	iVar90 = unk_0xEBB80152B94CE1CB(iVar0, "inpts");
	iVar91 = unk_0xEBB80152B94CE1CB(iVar0, "ldsf1");
	iVar92 = unk_0xEBB80152B94CE1CB(iVar0, "ldsf2");
	iVar93 = 1;
	if (unk_0x0D5F4F1912AC26E7(iVar0, "tehlh") == 7)
	{
		iVar94 = unk_0xEBB80152B94CE1CB(iVar0, "tehlh");
		iVar93 = 1;
	}
	else
	{
		iVar93 = 0;
	}
	iVar95 = unk_0xEBB80152B94CE1CB(iVar0, "tehrn");
	iVar96 = unk_0xEBB80152B94CE1CB(iVar0, "spsy1");
	iVar97 = unk_0xEBB80152B94CE1CB(iVar0, "spsy2");
	iVar98 = unk_0xEBB80152B94CE1CB(iVar0, "tenms");
	iVar99 = unk_0xEBB80152B94CE1CB(iVar0, "csttn");
	iVar100 = unk_0xEBB80152B94CE1CB(iVar0, "cstrn");
	iVar101 = unk_0xEBB80152B94CE1CB(iVar0, "nrl");
	iVar102 = unk_0xEBB80152B94CE1CB(iVar0, "tstrt");
	iVar103 = unk_0xEBB80152B94CE1CB(iVar0, "tstop");
	uVar104 = unk_0xEBB80152B94CE1CB(iVar0, "sms");
	iVar105 = unk_0xEBB80152B94CE1CB(iVar0, "tblpv1");
	iVar106 = unk_0xEBB80152B94CE1CB(iVar0, "tblpv2");
	iVar107 = unk_0xEBB80152B94CE1CB(iVar0, "tblpv3");
	iVar108 = unk_0xEBB80152B94CE1CB(iVar0, "tblpv4");
	iVar109 = unk_0xEBB80152B94CE1CB(iVar0, "thudv1");
	iVar110 = unk_0xEBB80152B94CE1CB(iVar0, "thudv2");
	iVar111 = unk_0xEBB80152B94CE1CB(iVar0, "thudv3");
	iVar112 = unk_0xEBB80152B94CE1CB(iVar0, "thudv4");
	iVar113 = unk_0xEBB80152B94CE1CB(iVar0, "rcst1q");
	iVar114 = unk_0xEBB80152B94CE1CB(iVar0, "rcst2q");
	iVar115 = unk_0xEBB80152B94CE1CB(iVar0, "rcst3q");
	iVar116 = unk_0xEBB80152B94CE1CB(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0x03B5FEE1D0E289A0(uVar104) - 1))
	{
		uVar117[iVar1] = unk_0xC190162B06FBA317(uVar104, iVar1);
		Global_1607808.f_24295[iVar1 /*38*/] = unk_0x6ED9878D7F475A3E(uVar117[iVar1], "team");
		Global_1607808.f_24295[iVar1 /*38*/].f_1 = unk_0x6ED9878D7F475A3E(uVar117[iVar1], "rule");
		Global_1607808.f_24295[iVar1 /*38*/].f_2 = unk_0x6ED9878D7F475A3E(uVar117[iVar1], "time");
		StringCopy(&(Global_1607808.f_24295[iVar1 /*38*/].f_4[0 /*16*/]), unk_0xE41666201B707589(uVar117[iVar1], "txt0"), 64);
		StringCopy(&(Global_1607808.f_24295[iVar1 /*38*/].f_4[1 /*16*/]), unk_0xE41666201B707589(uVar117[iVar1], "txt1"), 64);
		Global_1607808.f_24295[iVar1 /*38*/].f_3 = unk_0x6ED9878D7F475A3E(uVar117[iVar1], "delay");
		Global_1607808.f_24295[iVar1 /*38*/].f_37 = unk_0x6ED9878D7F475A3E(uVar117[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1607808.f_22 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar77 != 0)
			{
				uVar2 = unk_0x09E288B6CD41A6F0(iVar77, iVar1);
				Global_1607808.f_29239[iVar1] = uVar2;
			}
			else
			{
				Global_1607808.f_29239[iVar1] = 0;
			}
			if (iVar78 != 0)
			{
				Global_1607808.f_29277[iVar1] = unk_0x09E288B6CD41A6F0(iVar78, iVar1);
			}
			else
			{
				Global_1607808.f_29277[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/] = { unk_0x426E928726A693EA(iVar3, iVar1) };
			}
			if (iVar18 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2202 = unk_0x09E288B6CD41A6F0(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2223 = unk_0x09E288B6CD41A6F0(iVar19, iVar1);
			}
			if (iVar20 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2866 = unk_0x09E288B6CD41A6F0(iVar20, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar21, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2867 = unk_0x09E288B6CD41A6F0(iVar21, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2867 = 0;
			}
			if (iVar22 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3084 = unk_0x09E288B6CD41A6F0(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3085 = unk_0x09E288B6CD41A6F0(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2204 = unk_0x09E288B6CD41A6F0(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2297 = unk_0x09E288B6CD41A6F0(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3285 = unk_0x09E288B6CD41A6F0(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2201 = unk_0x09E288B6CD41A6F0(iVar27, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2203 = unk_0x09E288B6CD41A6F0(iVar30, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1979 = unk_0x09E288B6CD41A6F0(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1980 = unk_0x09E288B6CD41A6F0(iVar29, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2224 = unk_0x09E288B6CD41A6F0(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3286 = unk_0x09E288B6CD41A6F0(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3287 = unk_0x09E288B6CD41A6F0(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_32 = unk_0x09E288B6CD41A6F0(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_33 = unk_0x09E288B6CD41A6F0(iVar35, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar36, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_34 = unk_0x09E288B6CD41A6F0(iVar36, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_34 = 0;
			}
			if (iVar37 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_36 = unk_0x09E288B6CD41A6F0(iVar37, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1974 = unk_0x09E288B6CD41A6F0(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1976 = unk_0x09E288B6CD41A6F0(iVar40, iVar1);
			}
			if (iVar41 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1972 = unk_0x09E288B6CD41A6F0(iVar41, iVar1);
			}
			if (iVar42 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1971 = unk_0x09E288B6CD41A6F0(iVar42, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar44, iVar1) == 2 && iVar44 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1973 = unk_0x09E288B6CD41A6F0(iVar44, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1973 = 60000;
			}
			if (unk_0xD36974570396CA9B(iVar45, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2054 = unk_0x09E288B6CD41A6F0(iVar45, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2054 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar46, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2053 = unk_0x09E288B6CD41A6F0(iVar46, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2053 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar48, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2055 = unk_0x09E288B6CD41A6F0(iVar48, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2055 = 60000;
			}
			if (unk_0xD36974570396CA9B(iVar47, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2056 = unk_0x09E288B6CD41A6F0(iVar47, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_2056 = 0;
			}
			if (iVar49 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_59 = unk_0x09E288B6CD41A6F0(iVar49, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_60 = unk_0x09E288B6CD41A6F0(iVar50, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar51, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_167 = unk_0x09E288B6CD41A6F0(iVar51, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_167 = -1;
			}
			if (unk_0xD36974570396CA9B(iVar52, iVar1) == 2 && unk_0xD36974570396CA9B(iVar53, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_276 = unk_0x09E288B6CD41A6F0(iVar52, iVar1);
				Global_1607808.f_77[iVar1 /*6002*/].f_277 = unk_0x09E288B6CD41A6F0(iVar53, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_276 = -1;
				Global_1607808.f_77[iVar1 /*6002*/].f_277 = -1;
			}
			if (iVar56 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_168 = unk_0x09E288B6CD41A6F0(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_169 = unk_0x09E288B6CD41A6F0(iVar57, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar54, iVar1) == 2 && unk_0xD36974570396CA9B(iVar55, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_386 = unk_0x09E288B6CD41A6F0(iVar54, iVar1);
				Global_1607808.f_77[iVar1 /*6002*/].f_387 = unk_0x09E288B6CD41A6F0(iVar55, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_386 = -1;
				Global_1607808.f_77[iVar1 /*6002*/].f_387 = -1;
			}
			if (iVar58 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_278 = unk_0x09E288B6CD41A6F0(iVar58, iVar1);
			}
			if (iVar59 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_279 = unk_0x09E288B6CD41A6F0(iVar59, iVar1);
			}
			if (iVar60 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_55 = unk_0x09E288B6CD41A6F0(iVar60, iVar1);
			}
			if (iVar61 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_56 = unk_0x09E288B6CD41A6F0(iVar61, iVar1);
			}
			if (iVar62 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1975 = unk_0x09E288B6CD41A6F0(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1977 = unk_0x09E288B6CD41A6F0(iVar63, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_1978 = unk_0x09E288B6CD41A6F0(iVar43, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3 = unk_0x649362E253C7BDC7(iVar38, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1607808.f_24086[iVar1] = unk_0x09E288B6CD41A6F0(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1607808.f_24091[iVar1] = unk_0x09E288B6CD41A6F0(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_35 = unk_0x09E288B6CD41A6F0(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_1607808.f_24[iVar1] = unk_0x09E288B6CD41A6F0(iVar67, iVar1);
			}
			if (Global_1607808.f_24[iVar1] < 1)
			{
				Global_1607808.f_24[iVar1] = 1;
			}
			if (iVar68 != 0)
			{
				Global_1607808.f_25137[iVar1] = unk_0x09E288B6CD41A6F0(iVar68, iVar1);
			}
			else
			{
				Global_1607808.f_25137[iVar1] = -1;
			}
			if (bVar70)
			{
				Global_1607808.f_29[iVar1] = 0;
			}
			else
			{
				if (iVar69 != 0)
				{
					Global_1607808.f_29[iVar1] = unk_0x09E288B6CD41A6F0(iVar69, iVar1);
				}
				if (Global_1607808.f_29[iVar1] < 0)
				{
					Global_1607808.f_29[iVar1] = 0;
				}
			}
			if (iVar71 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_4 = { unk_0x426E928726A693EA(iVar71, iVar1) };
			}
			if (iVar72 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_7 = { unk_0x426E928726A693EA(iVar72, iVar1) };
			}
			if (iVar73 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_670 = unk_0x09E288B6CD41A6F0(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_671 = unk_0x09E288B6CD41A6F0(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_672 = unk_0x09E288B6CD41A6F0(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_673 = unk_0x09E288B6CD41A6F0(iVar76, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar91, iVar1) == 2 && iVar91 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_434 = unk_0x09E288B6CD41A6F0(iVar91, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_434 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar92, iVar1) == 2 && iVar92 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_435 = unk_0x09E288B6CD41A6F0(iVar92, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_435 = 0;
			}
			if (iVar79 != 0)
			{
				Global_1607808.f_24285[iVar1] = unk_0x09E288B6CD41A6F0(iVar79, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar80, iVar1) == 2)
			{
				Global_1607808.f_24290[iVar1] = unk_0x09E288B6CD41A6F0(iVar80, iVar1);
			}
			else
			{
				Global_1607808.f_24290[iVar1] = 0;
			}
			if (iVar81 != 0)
			{
				Global_1607808.f_24241[iVar1] = unk_0x09E288B6CD41A6F0(iVar81, iVar1);
			}
			if (iVar84 != 0)
			{
				Global_1607808.f_24272[iVar1 /*3*/][0] = unk_0x09E288B6CD41A6F0(iVar84, iVar1);
			}
			if (iVar85 != 0)
			{
				Global_1607808.f_24272[iVar1 /*3*/][1] = unk_0x09E288B6CD41A6F0(iVar85, iVar1);
			}
			if (Global_1607808.f_24241[iVar1] != 0 && Global_1607808.f_24272[iVar1 /*3*/][0] == 0)
			{
				Global_1607808.f_24272[iVar1 /*3*/][0] = Global_1607808.f_24241[iVar1];
			}
			if (iVar82 != 0)
			{
				Global_1607808.f_24236[iVar1] = unk_0x09E288B6CD41A6F0(iVar82, iVar1);
			}
			if (iVar86 != 0)
			{
				Global_1607808.f_24259[iVar1 /*3*/][0] = unk_0x09E288B6CD41A6F0(iVar86, iVar1);
			}
			if (iVar87 != 0)
			{
				Global_1607808.f_24259[iVar1 /*3*/][1] = unk_0x09E288B6CD41A6F0(iVar87, iVar1);
			}
			if (Global_1607808.f_24236[iVar1] != 0 && Global_1607808.f_24259[iVar1 /*3*/][0] == 0)
			{
				Global_1607808.f_24259[iVar1 /*3*/][0] = Global_1607808.f_24236[iVar1];
			}
			if (iVar83 != 0)
			{
				Global_1607808.f_24231[iVar1] = unk_0x09E288B6CD41A6F0(iVar83, iVar1);
			}
			if (iVar88 != 0)
			{
				Global_1607808.f_24246[iVar1 /*3*/][0] = unk_0x09E288B6CD41A6F0(iVar88, iVar1);
			}
			if (iVar89 != 0)
			{
				Global_1607808.f_24246[iVar1 /*3*/][1] = unk_0x09E288B6CD41A6F0(iVar89, iVar1);
			}
			if (Global_1607808.f_24231[iVar1] != 0 && Global_1607808.f_24246[iVar1 /*3*/][0] == 0)
			{
				Global_1607808.f_24246[iVar1 /*3*/][0] = Global_1607808.f_24231[iVar1];
			}
			if (iVar90 != 0)
			{
				Global_1607808.f_24102[iVar1] = unk_0x09E288B6CD41A6F0(iVar90, iVar1);
			}
			if (iVar93 && iVar94 != 0)
			{
				Global_1607808.f_24134[iVar1] = unk_0x09E288B6CD41A6F0(iVar94, iVar1);
			}
			else
			{
				Global_1607808.f_24134[iVar1] = 3;
			}
			if (unk_0xD36974570396CA9B(iVar95, iVar1) == 2)
			{
				Global_1607808.f_24139[iVar1] = unk_0x09E288B6CD41A6F0(iVar95, iVar1);
			}
			if (iVar96 != 0)
			{
				StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_5508[0 /*16*/]), unk_0x48416761101A75AD(iVar96, iVar1), 64);
			}
			if (iVar97 != 0)
			{
				StringCopy(&(Global_1607808.f_77[iVar1 /*6002*/].f_5508[1 /*16*/]), unk_0x48416761101A75AD(iVar97, iVar1), 64);
			}
			if (iVar98 != 0)
			{
				Global_1607808.f_24107[iVar1] = unk_0x09E288B6CD41A6F0(iVar98, iVar1);
			}
			if (iVar99 != 0)
			{
				StringCopy(&(Global_1607808.f_24112[iVar1 /*4*/]), unk_0x48416761101A75AD(iVar99, iVar1), 16);
			}
			if (iVar100 != 0)
			{
				Global_1607808.f_24129[iVar1] = unk_0x09E288B6CD41A6F0(iVar100, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar102, iVar1) == 2 && iVar102 != 0)
			{
				Global_1607808.f_67404[iVar1] = unk_0x09E288B6CD41A6F0(iVar102, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar103, iVar1) == 2 && iVar103 != 0)
			{
				Global_1607808.f_67409[iVar1] = unk_0x09E288B6CD41A6F0(iVar103, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_14 = unk_0x09E288B6CD41A6F0(iVar4, iVar1);
			}
			if (iVar5 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_15 = { unk_0x426E928726A693EA(iVar5, iVar1) };
			}
			if (iVar6 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_18 = unk_0x09E288B6CD41A6F0(iVar6, iVar1);
			}
			if (iVar7 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_19 = { unk_0x426E928726A693EA(iVar7, iVar1) };
			}
			if (iVar8 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_22 = unk_0x09E288B6CD41A6F0(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_23 = unk_0x09E288B6CD41A6F0(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_24 = unk_0x09E288B6CD41A6F0(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_25 = unk_0x09E288B6CD41A6F0(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_26 = unk_0x09E288B6CD41A6F0(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_27 = unk_0x09E288B6CD41A6F0(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_28 = unk_0x09E288B6CD41A6F0(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_29 = unk_0x09E288B6CD41A6F0(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_30 = unk_0x09E288B6CD41A6F0(iVar16, iVar1);
			}
			if (iVar17 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_31 = unk_0x09E288B6CD41A6F0(iVar17, iVar1);
			}
			if (iVar101 != 0)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_57 = unk_0x09E288B6CD41A6F0(iVar101, iVar1);
			}
			if (unk_0xD36974570396CA9B(iVar105, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3273 = unk_0x09E288B6CD41A6F0(iVar105, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3273 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar106, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3274 = unk_0x09E288B6CD41A6F0(iVar106, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3274 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar107, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3275 = unk_0x09E288B6CD41A6F0(iVar107, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3275 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar108, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3276 = unk_0x09E288B6CD41A6F0(iVar108, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3276 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar109, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3277 = unk_0x09E288B6CD41A6F0(iVar109, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3277 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar110, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3278 = unk_0x09E288B6CD41A6F0(iVar110, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3278 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar111, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3279 = unk_0x09E288B6CD41A6F0(iVar111, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3279 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar112, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3280 = unk_0x09E288B6CD41A6F0(iVar112, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3280 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar113, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3281 = unk_0x09E288B6CD41A6F0(iVar113, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3281 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar114, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3282 = unk_0x09E288B6CD41A6F0(iVar114, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3282 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar115, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3283 = unk_0x09E288B6CD41A6F0(iVar115, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3283 = 0;
			}
			if (unk_0xD36974570396CA9B(iVar116, iVar1) == 2)
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3284 = unk_0x09E288B6CD41A6F0(iVar116, iVar1);
			}
			else
			{
				Global_1607808.f_77[iVar1 /*6002*/].f_3284 = 0;
			}
		}
		iVar1++;
	}
}

void func_172(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xDCDDFBE975CF2B6C(iParam0, "rule");
	Global_1607808.f_41 = unk_0x6ED9878D7F475A3E(iVar0, "time");
	Global_1607808.f_43 = unk_0x6ED9878D7F475A3E(iVar0, "score");
	Global_1607808.f_54 = unk_0x6ED9878D7F475A3E(iVar0, "prule");
	Global_1607808.f_35718 = unk_0x6ED9878D7F475A3E(iVar0, "ptyp");
	Global_1607808.f_44 = unk_0x6ED9878D7F475A3E(iVar0, "blip");
	Global_1607808.f_46 = unk_0x6ED9878D7F475A3E(iVar0, "tag");
	Global_1607808.f_47 = unk_0x6ED9878D7F475A3E(iVar0, "voice");
	Global_1607808.f_48 = unk_0x6ED9878D7F475A3E(iVar0, "radio");
	Global_1607808.f_49 = unk_0x6ED9878D7F475A3E(iVar0, "aim");
	Global_1607808.f_29288 = unk_0x6ED9878D7F475A3E(iVar0, "pol");
	Global_1607808.f_37 = unk_0x6ED9878D7F475A3E(iVar0, "liv");
	Global_1607808.f_28670 = unk_0x6ED9878D7F475A3E(iVar0, "traf");
	Global_1607808.f_64034 = unk_0x6ED9878D7F475A3E(iVar0, "tod");
	Global_1607808.f_64019 = unk_0x6ED9878D7F475A3E(iVar0, "weth");
	Global_1607808.f_64036 = unk_0x6ED9878D7F475A3E(iVar0, "apeds");
	Global_1607808.f_64035 = unk_0x6ED9878D7F475A3E(iVar0, "vehd");
	Global_1607808.f_52 = unk_0x6ED9878D7F475A3E(iVar0, "vdm");
	Global_1607808.f_50 = unk_0x6ED9878D7F475A3E(iVar0, "tdm");
	Global_1607808.f_24086[0] = unk_0x6ED9878D7F475A3E(iVar0, "pcr");
	Global_1607808.f_24091[0] = unk_0x6ED9878D7F475A3E(iVar0, "ocr");
}

void func_173(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char cVar7[16];
	int iVar11;
	char[] cVar12[8];
	char cVar14[16];
	int iVar18;
	int iVar19;
	char cVar20[16];
	int iVar24;
	int iVar25;
	var uVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	char cVar33[16];
	char cVar37[16];
	int iVar41;
	int iVar42;
	int iVar43;
	
	iVar3 = unk_0xDCDDFBE975CF2B6C(iParam0, "gen");
	Global_1607808 = unk_0x6ED9878D7F475A3E(iVar3, "type");
	Global_1607808.f_9 = unk_0xEFDDDC39448CB097(iVar3, "ngjob");
	unk_0x236D8AD7EE179F46(Global_1607808.f_7, 0);
	bVar4 = unk_0xEFDDDC39448CB097(iVar3, "photo");
	if (bVar4)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1607808.f_7), 0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1607808.f_7), 0);
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ivm") == 2)
	{
		Global_1607808.f_29238 = unk_0x6ED9878D7F475A3E(iVar3, "ivm");
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "fixcam") == 2)
	{
		Global_1607808.f_67417 = unk_0x6ED9878D7F475A3E(iVar3, "fixcam");
	}
	else
	{
		Global_1607808.f_67417 = 0;
	}
	Global_1607808.f_4 = unk_0x6ED9878D7F475A3E(iVar3, "optbs");
	Global_1607808.f_67 = { unk_0xE0BDF113BD17440C(iVar3, "camo") };
	Global_1607808.f_70 = { unk_0xE0BDF113BD17440C(iVar3, "camro") };
	Global_1607808.f_61 = { unk_0xE0BDF113BD17440C(iVar3, "cam") };
	Global_1607808.f_73 = unk_0x22B9EF9E61A2066C(iVar3, "camh");
	Global_1607808.f_63396 = unk_0x22B9EF9E61A2066C(iVar3, "dmbds");
	Global_1607808.f_55 = { unk_0xE0BDF113BD17440C(iVar3, "phpo") };
	StringCopy(&(Global_1607808.f_63579[0 /*16*/]), unk_0xE41666201B707589(iVar3, "szTag"), 64);
	StringCopy(&cVar7, "nrcid", 16);
	if (bParam2)
	{
		iVar5 = 0;
		while (iVar5 <= 1)
		{
			StringCopy(&cVar7, "nrcid", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			StringCopy(&(Global_1607808.f_63714[iVar5 /*6*/]), unk_0xE41666201B707589(iVar3, &cVar7), 24);
			iVar5++;
		}
	}
	if (func_99())
	{
		Global_1607808.f_2 = unk_0x6ED9878D7F475A3E(iVar3, "subtype");
		Global_1607808.f_67414 = unk_0x6ED9878D7F475A3E(iVar3, "testcomplete");
		if ((Global_1607808.f_2 == 6 || Global_1607808.f_2 == 5) || Global_1607808.f_2 == 4)
		{
			if (unk_0x0D5F4F1912AC26E7(iVar3, "teamBal") == 2)
			{
				Global_1607808.f_67416 = unk_0x6ED9878D7F475A3E(iVar3, "numRounds");
			}
			else
			{
				Global_1607808.f_67416 = 1;
			}
			if (Global_1607808.f_67416 < 1)
			{
				Global_1607808.f_67416 = 1;
			}
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, "teamBal") == 2)
		{
			Global_1607808.f_67418 = unk_0x6ED9878D7F475A3E(iVar3, "teamBal");
		}
		else
		{
			Global_1607808.f_67418 = 5;
		}
	}
	Global_1607808.f_67415 = unk_0x6ED9878D7F475A3E(iVar3, "testcomplete");
	Global_1607808.f_42 = unk_0x6ED9878D7F475A3E(iVar3, "endtype");
	Global_1607808.f_11 = unk_0x6ED9878D7F475A3E(iVar3, "menubs");
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ovrpc") == 2)
	{
		Global_1607808.f_40764 = unk_0x6ED9878D7F475A3E(iVar3, "ovrpc");
	}
	else
	{
		Global_1607808.f_40764 = -1;
	}
	Global_1607808.f_12 = unk_0x6ED9878D7F475A3E(iVar3, "menubs2");
	if (unk_0x0D5F4F1912AC26E7(iVar3, "menubs3") == 2)
	{
		Global_1607808.f_13 = unk_0x6ED9878D7F475A3E(iVar3, "menubs3");
	}
	else
	{
		Global_1607808.f_13 = 0;
	}
	Global_1607808.f_14 = unk_0x6ED9878D7F475A3E(iVar3, "menubs4");
	Global_1607808.f_15 = unk_0x6ED9878D7F475A3E(iVar3, "menubs5");
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hptfb") == 2)
	{
		Global_1607808.f_76 = unk_0x6ED9878D7F475A3E(iVar3, "hptfb");
	}
	else
	{
		Global_1607808.f_76 = 0;
	}
	Global_1607808.f_29287 = unk_0x6ED9878D7F475A3E(iVar3, "teamvbs");
	Global_1607808.f_16 = unk_0x6ED9878D7F475A3E(iVar3, "cncmbs");
	Global_1607808.f_78902 = unk_0x6ED9878D7F475A3E(iVar3, "todhr");
	Global_1607808.f_78903 = unk_0x6ED9878D7F475A3E(iVar3, "todmn");
	Global_1607808.f_10 = unk_0x6ED9878D7F475A3E(iVar3, "cmpts");
	Global_1607808.f_40 = unk_0x6ED9878D7F475A3E(iVar3, "rank");
	Global_1607808.f_64038 = unk_0x6ED9878D7F475A3E(iVar3, "charcon");
	Global_1607808.f_64038 = unk_0x6ED9878D7F475A3E(iVar3, "char");
	Global_1607808.f_64040 = unk_0x6ED9878D7F475A3E(iVar3, "xpr");
	Global_1607808.f_64041 = unk_0x6ED9878D7F475A3E(iVar3, "cshr");
	Global_1607808.f_64045 = unk_0x6ED9878D7F475A3E(iVar3, "ctsc");
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecsbs") == 2)
	{
		Global_1607808.f_76079.f_16 = unk_0x6ED9878D7F475A3E(iVar3, "ecsbs");
	}
	else
	{
		Global_1607808.f_76079.f_16 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecsbs2") == 2)
	{
		Global_1607808.f_76079.f_17 = unk_0x6ED9878D7F475A3E(iVar3, "ecsbs2");
	}
	else
	{
		Global_1607808.f_76079.f_17 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecsrng") == 2)
	{
		Global_1607808.f_76079.f_62 = unk_0x6ED9878D7F475A3E(iVar3, "ecsrng");
	}
	else
	{
		Global_1607808.f_76079.f_62 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecscp") == 5)
	{
		Global_1607808.f_76079.f_54 = { unk_0xE0BDF113BD17440C(iVar3, "ecscp") };
	}
	else
	{
		Global_1607808.f_76079.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecscr") == 3)
	{
		Global_1607808.f_76079.f_60 = unk_0x22B9EF9E61A2066C(iVar3, "ecscr");
	}
	else
	{
		Global_1607808.f_76079.f_60 = 0f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ecscs") == 5)
	{
		Global_1607808.f_76079.f_57 = { unk_0xE0BDF113BD17440C(iVar3, "ecscs") };
	}
	else
	{
		Global_1607808.f_76079.f_57 = { 0f, 0f, 0f };
	}
	iVar11 = 0;
	while (iVar11 <= 29)
	{
		StringCopy(&cVar12, "ecein", 8);
		StringIntConCat(&cVar12, iVar11, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/].f_1 = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar12, "ecetp", 8);
		StringIntConCat(&cVar12, iVar11, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/] = -1;
		}
		StringCopy(&cVar12, "ecebs", 8);
		StringIntConCat(&cVar12, iVar11, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/].f_2 = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76079.f_63[iVar11 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar12, "ecehn", 8);
		StringIntConCat(&cVar12, iVar11, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_76079.f_63[iVar11 /*12*/].f_4), unk_0xE41666201B707589(iVar3, &cVar12), 32);
		}
		else
		{
			StringCopy(&(Global_1607808.f_76079.f_63[iVar11 /*12*/].f_4), "", 32);
		}
		iVar11++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "clbscr") == 2)
	{
		Global_1607808.f_77093 = unk_0x6ED9878D7F475A3E(iVar3, "clbscr");
	}
	else
	{
		Global_1607808.f_77093 = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "disar") == 2)
	{
		Global_1607808.f_77094 = unk_0x6ED9878D7F475A3E(iVar3, "disar");
	}
	else
	{
		Global_1607808.f_77094 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "rlopt") == 2)
	{
		Global_1607808.f_76882 = unk_0x6ED9878D7F475A3E(iVar3, "rlopt");
	}
	else
	{
		Global_1607808.f_76882 = 0;
	}
	iVar18 = unk_0x6ED9878D7F475A3E(iVar3, "gpmn");
	Global_1607808.f_75 = iVar18;
	iVar19 = unk_0x6ED9878D7F475A3E(iVar3, "musx");
	if (iVar19 != -1)
	{
		Global_1607808.f_64033 = iVar19;
	}
	else
	{
		Global_1607808.f_64033 = -1;
	}
	Global_1607808.f_64032 = unk_0x6ED9878D7F475A3E(iVar3, "ausc");
	Global_1607808.f_18 = unk_0x6ED9878D7F475A3E(iVar3, "minNu");
	Global_1607808.f_17 = unk_0x6ED9878D7F475A3E(iVar3, "num");
	if (Global_1607808.f_17 == -1)
	{
		Global_1607808.f_17 = 30;
	}
	Global_1607808.f_19 = unk_0x6ED9878D7F475A3E(iVar3, "time");
	Global_1607808.f_58 = { unk_0xE0BDF113BD17440C(iVar3, "start") };
	StringCopy(&cVar20, "apart", 16);
	Global_1607808.f_76513 = { unk_0xE0BDF113BD17440C(iVar3, &cVar20) };
	Global_1607808.f_76527 = unk_0x6ED9878D7F475A3E(iVar3, "apwbs");
	Global_1607808.f_76516 = unk_0x6ED9878D7F475A3E(iVar3, "wrploc");
	Global_1607808.f_76530 = unk_0x6ED9878D7F475A3E(iVar3, "twrst");
	Global_1607808.f_76528 = unk_0x6ED9878D7F475A3E(iVar3, "iplop");
	Global_1607808.f_76529 = unk_0x6ED9878D7F475A3E(iVar3, "intop");
	if (unk_0x0D5F4F1912AC26E7(iVar3, "copteam") == 2)
	{
		Global_1607808.f_29289 = unk_0x6ED9878D7F475A3E(iVar3, "copteam");
	}
	else
	{
		Global_1607808.f_29289 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "pttl") == 4)
	{
		StringCopy(&(Global_1607808.f_63730), unk_0xE41666201B707589(iVar3, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1607808.f_63730), "", 64);
	}
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		iVar24 = 0;
		while (iVar24 <= 1)
		{
			StringCopy(&cVar12, "t", 8);
			StringIntConCat(&cVar12, iVar18, 8);
			StringConCat(&cVar12, "fs", 8);
			StringIntConCat(&cVar12, iVar24, 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
			{
				StringCopy(&(Global_1607808.f_79126[iVar18 /*33*/][iVar24 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
			}
			else
			{
				StringCopy(&(Global_1607808.f_79126[iVar18 /*33*/][iVar24 /*16*/]), "", 64);
			}
			iVar24++;
		}
		iVar24 = 0;
		while (iVar24 <= 21)
		{
			StringCopy(&cVar12, "t", 8);
			StringIntConCat(&cVar12, iVar18, 8);
			StringConCat(&cVar12, "vl", 8);
			StringIntConCat(&cVar12, iVar24, 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
			{
				Global_1607808.f_28708[iVar18 /*23*/][iVar24] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_28708[iVar18 /*23*/][iVar24] = 0;
			}
			iVar24++;
		}
		StringCopy(&cVar12, "t", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		StringConCat(&cVar12, "dvl", 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_29174[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_29174[iVar18] = 0;
		}
		StringCopy(&cVar12, "t", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		StringConCat(&cVar12, "dv", 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_29179[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_29179[iVar18] = 0;
		}
		iVar25 = 0;
		while (iVar25 <= 3)
		{
			iVar24 = 0;
			while (iVar24 <= 21)
			{
				StringCopy(&cVar12, "t", 8);
				StringIntConCat(&cVar12, iVar18, 8);
				StringIntConCat(&cVar12, iVar25, 8);
				StringConCat(&cVar12, "rv", 8);
				StringIntConCat(&cVar12, iVar24, 8);
				if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
				{
					Global_1607808.f_28801[iVar18 /*93*/][iVar25 /*23*/][iVar24] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
				}
				else
				{
					Global_1607808.f_28801[iVar18 /*93*/][iVar25 /*23*/][iVar24] = 0;
				}
				iVar24++;
			}
			StringCopy(&cVar12, "t", 8);
			StringIntConCat(&cVar12, iVar18, 8);
			StringIntConCat(&cVar12, iVar25, 8);
			StringConCat(&cVar12, "dvl", 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
			{
				Global_1607808.f_29184[iVar18 /*5*/][iVar25] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_29184[iVar18 /*5*/][iVar25] = 0;
			}
			StringCopy(&cVar12, "t", 8);
			StringIntConCat(&cVar12, iVar18, 8);
			StringIntConCat(&cVar12, iVar25, 8);
			StringConCat(&cVar12, "dv", 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
			{
				Global_1607808.f_29205[iVar18 /*5*/][iVar25] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_29205[iVar18 /*5*/][iVar25] = 0;
			}
			iVar25++;
		}
		iVar0 = 0;
		while (iVar0 < 22)
		{
			iVar2 = func_176(iVar0);
			while (iVar2 <= 31)
			{
				if (unk_0x236D8AD7EE179F46(Global_1607808.f_28708[iVar18 /*23*/][iVar0], iVar2))
				{
					unk_0xC69E84EBBD7166E6(&(Global_1607808.f_28708[iVar18 /*23*/][iVar0]), iVar2);
					if (Global_1607808.f_29174[iVar18] == iVar0 && Global_1607808.f_29179[iVar18] == iVar2)
					{
						Global_1607808.f_29174[iVar18] = 0;
						Global_1607808.f_29179[iVar18] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x236D8AD7EE179F46(Global_1607808.f_28801[iVar18 /*93*/][iVar1 /*23*/][iVar0], iVar2))
					{
						unk_0xC69E84EBBD7166E6(&(Global_1607808.f_28801[iVar18 /*93*/][iVar1 /*23*/][iVar0]), iVar2);
						if (Global_1607808.f_29184[iVar18 /*5*/][iVar1] == iVar0 && Global_1607808.f_29205[iVar18 /*5*/][iVar1] == iVar2)
						{
							Global_1607808.f_29184[iVar18 /*5*/][iVar1] = 0;
							Global_1607808.f_29205[iVar18 /*5*/][iVar1] = 0;
						}
					}
					iVar1++;
				}
				iVar2++;
			}
			iVar0++;
		}
		StringCopy(&cVar12, "dmaskg", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_64024[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_64024[iVar18] = 0;
		}
		StringCopy(&cVar12, "ofovr", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67557[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67557[iVar18] = -1;
		}
		StringCopy(&cVar12, "tmrfs", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_79061[iVar18 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_79061[iVar18 /*16*/]), "", 64);
		}
		StringCopy(&cVar12, "tmtss", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_79259[iVar18 /*6*/]), unk_0xE41666201B707589(iVar3, &cVar12), 24);
		}
		else
		{
			StringCopy(&(Global_1607808.f_79259[iVar18 /*6*/]), "", 24);
		}
		StringCopy(&cVar12, "tmtsr", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_79284[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_79284[iVar18] = 0;
		}
		StringCopy(&cVar12, "pmscid", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_77095[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_77095[iVar18] = -1;
		}
		StringCopy(&cVar12, "qran", 8);
		StringIntConCat(&cVar12, iVar18, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_64046[iVar18] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_64046[iVar18] = -1;
		}
		iVar18++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "ctmrs") == 4)
	{
		StringCopy(&(Global_1607808.f_63746), unk_0xE41666201B707589(iVar3, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1607808.f_63746), "", 24);
	}
	iVar5 = 0;
	while (iVar5 < 5)
	{
		StringCopy(&cVar12, "avss", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		Global_1607808.f_67505[iVar5] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		iVar5++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vsclout") == 2)
	{
		Global_1607808.f_67511[0] = unk_0x6ED9878D7F475A3E(iVar3, "vsclout");
	}
	else
	{
		Global_1607808.f_67511[0] = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vsthout") == 2)
	{
		Global_1607808.f_67511[1] = unk_0x6ED9878D7F475A3E(iVar3, "vsthout");
	}
	else
	{
		Global_1607808.f_67511[1] = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vshwout") == 2)
	{
		Global_1607808.f_67511[3] = unk_0x6ED9878D7F475A3E(iVar3, "vshwout");
	}
	else
	{
		Global_1607808.f_67511[3] = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vsenout") == 2)
	{
		Global_1607808.f_67511[2] = unk_0x6ED9878D7F475A3E(iVar3, "vsenout");
	}
	else
	{
		Global_1607808.f_67511[2] = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vstgout") == 2)
	{
		Global_1607808.f_67511[4] = unk_0x6ED9878D7F475A3E(iVar3, "vstgout");
	}
	else
	{
		Global_1607808.f_67511[4] = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "alfutvs") == 2)
	{
		Global_1607808.f_67517 = unk_0x6ED9878D7F475A3E(iVar3, "alfutvs");
	}
	else
	{
		Global_1607808.f_67517 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vsdfstc") == 2)
	{
		Global_1607808.f_67518 = unk_0x6ED9878D7F475A3E(iVar3, "vsdfstc");
	}
	else if (((!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 23) && !unk_0x236D8AD7EE179F46(Global_1607808.f_12, 24)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_13, 31)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_14, 8))
	{
		Global_1607808.f_67518 = -1;
	}
	else if (((!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 23) && unk_0x236D8AD7EE179F46(Global_1607808.f_12, 24)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_13, 31)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_14, 8))
	{
		Global_1607808.f_67518 = 0;
	}
	else if (((unk_0x236D8AD7EE179F46(Global_1607808.f_12, 23) && !unk_0x236D8AD7EE179F46(Global_1607808.f_12, 24)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_13, 31)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_14, 8))
	{
		Global_1607808.f_67518 = 1;
	}
	else if (((!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 23) && !unk_0x236D8AD7EE179F46(Global_1607808.f_12, 24)) && unk_0x236D8AD7EE179F46(Global_1607808.f_13, 31)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_14, 8))
	{
		Global_1607808.f_67518 = 2;
	}
	else if (((!unk_0x236D8AD7EE179F46(Global_1607808.f_12, 23) && !unk_0x236D8AD7EE179F46(Global_1607808.f_12, 24)) && !unk_0x236D8AD7EE179F46(Global_1607808.f_13, 31)) && unk_0x236D8AD7EE179F46(Global_1607808.f_14, 8))
	{
		Global_1607808.f_67518 = 3;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "dspteam") == 2)
	{
		Global_1607808.f_77118 = unk_0x6ED9878D7F475A3E(iVar3, "dspteam");
	}
	else
	{
		Global_1607808.f_77118 = -1;
	}
	if (!func_77() && !func_175())
	{
		if (unk_0x4E64C704D99A9C41(iParam1))
		{
			StringCopy(&(Global_1607808.f_63428), unk_0xE41666201B707589(iVar3, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_63428), func_174(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1607808.f_63428), unk_0xE41666201B707589(iVar3, "nm"), 64);
	}
	Global_1607808.f_64070 = unk_0x6ED9878D7F475A3E(iVar3, "mgrk");
	Global_1607808.f_64071 = unk_0x6ED9878D7F475A3E(iVar3, "mght");
	StringCopy(&(Global_1607808.f_63450[0 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[1 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[2 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[3 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[4 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[5 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[6 /*16*/]), "", 64);
	StringCopy(&(Global_1607808.f_63450[7 /*16*/]), "", 64);
	uVar26 = unk_0xEBB80152B94CE1CB(iVar3, "dec");
	iVar27 = unk_0xA84EEA1DAC64D0D5(unk_0x48416761101A75AD(uVar26, 0));
	if (iParam1 == -1 || unk_0x4E64C704D99A9C41(iParam1))
	{
		if (iVar27 <= 63)
		{
			iVar5 = 0;
			while (iVar5 <= (unk_0x03B5FEE1D0E289A0(iVar26) - 1))
			{
				StringCopy(&(Global_1607808.f_63450[iVar5 /*16*/]), unk_0x48416761101A75AD(iVar26, iVar5), 64);
				iVar5++;
			}
		}
		else
		{
			sVar29 = unk_0x48416761101A75AD(iVar26, 0);
			iVar5 = 0;
			while (iVar5 <= 7)
			{
				if (iVar27 > (63 * iVar5))
				{
					if (iVar27 > (63 * iVar5) + 63)
					{
						iVar28 = (63 * iVar5) + 63;
					}
					else
					{
						iVar28 = iVar27;
					}
					StringCopy(&(Global_1607808.f_63450[iVar5 /*16*/]), unk_0x15A4E0B07B96AB6F(sVar29, (63 * iVar5), iVar28), 64);
				}
				iVar5++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1607808.f_63450[0 /*16*/]), func_174(), 64);
	}
	Global_1607808.f_22 = unk_0x6ED9878D7F475A3E(iVar3, "tnum");
	Global_1607808.f_23 = unk_0x6ED9878D7F475A3E(iVar3, "mtnum");
	if ((Global_1607808 == 0 && Global_2428865.f_545.f_11 != 0) && Global_1607808.f_22 != Global_2428865.f_545.f_11)
	{
		Global_1607808.f_22 = Global_2428865.f_545.f_11;
	}
	if (Global_1607808 == 1)
	{
		if (Global_1607808.f_22 > 4)
		{
			Global_1607808.f_22 = 4;
		}
	}
	else if (Global_1607808.f_22 > 4)
	{
		Global_1607808.f_22 = 4;
	}
	Global_1607808.f_58204 = unk_0x6ED9878D7F475A3E(iVar3, "atmdm");
	Global_1607808.f_36 = unk_0x6ED9878D7F475A3E(iVar3, "trel");
	Global_1607808.f_64042 = unk_0x6ED9878D7F475A3E(iVar3, "ltm");
	Global_1607808.f_64 = { unk_0xE0BDF113BD17440C(iVar3, "vcpr") };
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hstat") == 2)
	{
		Global_1607808.f_64013 = unk_0x6ED9878D7F475A3E(iVar3, "hstat");
	}
	else
	{
		Global_1607808.f_64013 = 0;
	}
	iVar30 = 0;
	while (iVar30 <= 19)
	{
		StringCopy(&cVar12, "rzpos", 8);
		StringIntConCat(&cVar12, iVar30, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_40700[iVar30 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_40700[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		iVar30++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "numzr") == 2)
	{
		Global_1607808.f_40761 = unk_0x6ED9878D7F475A3E(iVar3, "numzr");
	}
	else
	{
		Global_1607808.f_40761 = 0;
	}
	iVar31 = unk_0xDCDDFBE975CF2B6C(iParam0, "ene");
	iVar32 = unk_0x6ED9878D7F475A3E(iVar31, "no");
	iVar5 = 0;
	while (iVar5 < 5)
	{
		StringCopy(&cVar12, "hpped", 8);
		if (iVar5 > 0)
		{
			StringIntConCat(&cVar12, iVar5 + 1, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2 && iVar32 > unk_0x6ED9878D7F475A3E(iVar3, &cVar12))
		{
			Global_1607808.f_58075[iVar5] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_58075[iVar5] = -1;
		}
		iVar5++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "rsgmx") == 2 && unk_0x0D5F4F1912AC26E7(iVar3, "rsgnu") == 2)
	{
		Global_1607808.f_58081 = unk_0x6ED9878D7F475A3E(iVar3, "rsgmx");
		Global_1607808.f_58082 = unk_0x6ED9878D7F475A3E(iVar3, "rsgnu");
		Global_1607808.f_58083 = unk_0x6ED9878D7F475A3E(iVar3, "rsgbs");
		if (Global_1607808.f_58081 > 0 && Global_1607808.f_58082 != 0)
		{
			iVar5 = 0;
			while (iVar5 <= (Global_1607808.f_58081 - 1))
			{
				if (iVar5 < 10)
				{
					StringCopy(&cVar12, "rsg", 8);
					StringIntConCat(&cVar12, iVar5, 8);
					MemCopy(&cVar33, {cVar12}, 4);
					StringConCat(&cVar33, "mx", 16);
					MemCopy(&cVar37, {cVar12}, 4);
					StringConCat(&cVar37, "nu", 16);
					if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar33) == 2 && unk_0x0D5F4F1912AC26E7(iVar3, &cVar37) == 2)
					{
						Global_1607808.f_58084[iVar5] = unk_0x6ED9878D7F475A3E(iVar3, &cVar33);
						Global_1607808.f_58095[iVar5] = unk_0x6ED9878D7F475A3E(iVar3, &cVar37);
						MemCopy(&cVar33, {cVar12}, 4);
						StringConCat(&cVar33, "bs", 16);
						Global_1607808.f_58106[iVar5] = unk_0x6ED9878D7F475A3E(iVar3, &cVar33);
					}
				}
				iVar5++;
			}
		}
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "tshd") == 2)
	{
		Global_1607808.f_64065 = unk_0x6ED9878D7F475A3E(iVar3, "tshd");
	}
	else
	{
		Global_1607808.f_64065 = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "mrd") == 2)
	{
		Global_1607808.f_64066 = unk_0x6ED9878D7F475A3E(iVar3, "mrd");
	}
	else
	{
		Global_1607808.f_64066 = 15;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "srct") == 2)
	{
		Global_1607808.f_64067 = unk_0x6ED9878D7F475A3E(iVar3, "srct");
	}
	else
	{
		Global_1607808.f_64067 = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atspos") == 5)
	{
		Global_1607808.f_78959 = { unk_0xE0BDF113BD17440C(iVar3, "atspos") };
	}
	else
	{
		Global_1607808.f_78959 = { 0f, 0f, 0f };
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atscmp") == 5)
	{
		Global_1607808.f_78953 = { unk_0xE0BDF113BD17440C(iVar3, "atscmp") };
	}
	else
	{
		Global_1607808.f_78953 = { 0f, 0f, 0f };
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atscmr") == 5)
	{
		Global_1607808.f_78956 = { unk_0xE0BDF113BD17440C(iVar3, "atscmr") };
	}
	else
	{
		Global_1607808.f_78956 = { 0f, 0f, 0f };
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atsfov") == 3)
	{
		Global_1607808.f_78962 = unk_0x22B9EF9E61A2066C(iVar3, "atsfov");
	}
	else
	{
		Global_1607808.f_78962 = 45f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atshed") == 3)
	{
		Global_1607808.f_78963 = unk_0x22B9EF9E61A2066C(iVar3, "atshed");
	}
	else
	{
		Global_1607808.f_78963 = 0f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "atsveh") == 2)
	{
		Global_1607808.f_78964 = unk_0x6ED9878D7F475A3E(iVar3, "atsveh");
	}
	else
	{
		Global_1607808.f_78964 = 0;
	}
	Global_1607808.f_21 = Global_1607808.f_22;
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hpdt1") == 2)
	{
		Global_1607808.f_64014[0] = unk_0x6ED9878D7F475A3E(iVar3, "hpdt1");
	}
	else
	{
		Global_1607808.f_64014[0] = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hpdt2") == 2)
	{
		Global_1607808.f_64014[1] = unk_0x6ED9878D7F475A3E(iVar3, "hpdt2");
	}
	else
	{
		Global_1607808.f_64014[1] = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "vdt") == 2)
	{
		Global_1607808.f_64017 = unk_0x6ED9878D7F475A3E(iVar3, "vdt");
	}
	else
	{
		Global_1607808.f_64017 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrbs") == 2)
	{
		Global_1607808.f_77100 = unk_0x6ED9878D7F475A3E(iVar3, "hbrbs");
	}
	else
	{
		Global_1607808.f_77100 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrtt") == 2)
	{
		Global_1607808.f_77101 = unk_0x6ED9878D7F475A3E(iVar3, "hbrtt");
	}
	else
	{
		Global_1607808.f_77101 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrttm") == 2)
	{
		Global_1607808.f_77102 = unk_0x6ED9878D7F475A3E(iVar3, "hbrttm");
	}
	else
	{
		Global_1607808.f_77102 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrtrl") == 2)
	{
		Global_1607808.f_77103 = unk_0x6ED9878D7F475A3E(iVar3, "hbrtrl");
	}
	else
	{
		Global_1607808.f_77103 = -1;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrpdt") == 2)
	{
		Global_1607808.f_77105 = unk_0x6ED9878D7F475A3E(iVar3, "hbrpdt");
	}
	else
	{
		Global_1607808.f_77105 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrvdt") == 2)
	{
		Global_1607808.f_77107 = unk_0x6ED9878D7F475A3E(iVar3, "hbrvdt");
	}
	else
	{
		Global_1607808.f_77107 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrkt") == 2)
	{
		Global_1607808.f_77109 = unk_0x6ED9878D7F475A3E(iVar3, "hbrkt");
	}
	else
	{
		Global_1607808.f_77109 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hbrph") == 2)
	{
		Global_1607808.f_77112 = unk_0x6ED9878D7F475A3E(iVar3, "hbrph");
	}
	else
	{
		Global_1607808.f_77112 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "hecam") == 2)
	{
		Global_1607808.f_77113 = unk_0x6ED9878D7F475A3E(iVar3, "hecam");
	}
	else
	{
		Global_1607808.f_77113 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "sdrvm") == 2)
	{
		Global_1607808.f_79302 = unk_0x6ED9878D7F475A3E(iVar3, "sdrvm");
	}
	else
	{
		Global_1607808.f_79302 = 10000;
	}
	if (((unk_0x0D5F4F1912AC26E7(iVar3, "hmmtt") == 2 && unk_0x0D5F4F1912AC26E7(iVar3, "hmmts") == 2) && unk_0x0D5F4F1912AC26E7(iVar3, "hmmte") == 2) && unk_0x0D5F4F1912AC26E7(iVar3, "hmmth") == 2)
	{
		Global_1607808.f_77114 = unk_0x6ED9878D7F475A3E(iVar3, "hmmtt");
		Global_1607808.f_77115 = unk_0x6ED9878D7F475A3E(iVar3, "hmmts");
		Global_1607808.f_77116 = unk_0x6ED9878D7F475A3E(iVar3, "hmmte");
		Global_1607808.f_77117 = unk_0x6ED9878D7F475A3E(iVar3, "hmmth");
	}
	else
	{
		Global_1607808.f_77114 = 0;
		Global_1607808.f_77115 = 0;
		Global_1607808.f_77116 = 0;
		Global_1607808.f_77117 = 0;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "tstrm") == 2)
	{
		Global_1607808.f_78901 = unk_0x6ED9878D7F475A3E(iVar3, "tstrm");
	}
	else
	{
		Global_1607808.f_78901 = 0;
	}
	iVar5 = 0;
	while (iVar5 <= 35)
	{
		StringCopy(&cVar12, "dtspk", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_67109[iVar5 /*8*/]), unk_0xE41666201B707589(iVar3, &cVar12), 32);
		}
		else
		{
			StringCopy(&(Global_1607808.f_67109[iVar5 /*8*/]), "", 32);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		StringCopy(&cVar12, "cspnm", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_57928[iVar5 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_57928[iVar5 /*16*/]), "", 64);
		}
		StringCopy(&cVar12, "csvnm", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_57977[iVar5 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_57977[iVar5 /*16*/]), "", 64);
		}
		StringCopy(&cVar12, "csonm", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_58026[iVar5 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_58026[iVar5 /*16*/]), "", 64);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 4)
	{
		StringCopy(&cVar12, "otxsgo", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_58117[iVar5 /*16*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_58117[iVar5 /*16*/]), "", 64);
		}
		iVar5++;
	}
	iVar41 = 0;
	while (iVar41 <= 3)
	{
		iVar6 = 0;
		while (iVar6 <= 12)
		{
			StringCopy(&cVar12, "ofit", 8);
			StringIntConCat(&cVar12, iVar6 + 1, 8);
			StringIntConCat(&cVar12, iVar41, 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
			{
				Global_1607808.f_67443[iVar41 /*14*/][iVar6] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			iVar6++;
		}
		StringCopy(&cVar12, "ofs1", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67534[iVar41 /*2*/][0] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67534[iVar41 /*2*/][0] = 0;
		}
		StringCopy(&cVar12, "mask1", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67548[iVar41 /*2*/][0] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67548[iVar41 /*2*/][0] = 0;
		}
		StringCopy(&cVar12, "gear", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67519[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67519[iVar41] = 0;
		}
		StringCopy(&cVar12, "geard", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67524[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67524[iVar41] = -1;
		}
		StringCopy(&cVar12, "apwfr", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76517[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76517[iVar41] = -1;
		}
		StringCopy(&cVar12, "apwlr", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76522[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76522[iVar41] = -1;
		}
		StringCopy(&cVar12, "tcmin", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2 && !func_145())
		{
			Global_1607808.f_76856[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76856[iVar41] = 0;
		}
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			StringCopy(&cVar12, "trcmn", 8);
			StringIntConCat(&cVar12, iVar6, 8);
			StringIntConCat(&cVar12, iVar41, 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2 && !func_145())
			{
				Global_1607808.f_76861[iVar41 /*5*/][iVar6] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_76861[iVar41 /*5*/][iVar6] = 0;
			}
			iVar6++;
		}
		StringCopy(&cVar12, "tmrsp", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76883[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76883[iVar41] = 0;
		}
		StringCopy(&cVar12, "tmvhp", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_29272[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_29272[iVar41] = 100;
		}
		StringCopy(&cVar12, "tblty", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_29282[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_29282[iVar41] = 0;
		}
		StringCopy(&cVar12, "pmpos", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_62962[iVar41 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_62962[iVar41 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar12, "pmpoi", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_62975[iVar41 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_62975[iVar41 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar12, "pmrad", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 3)
		{
			Global_1607808.f_62988[iVar41] = unk_0x22B9EF9E61A2066C(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_62988[iVar41] = 0f;
		}
		StringCopy(&cVar12, "dfofit", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67500[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67500[iVar41] = -1;
		}
		StringCopy(&cVar12, "dfstyl", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_67543[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_67543[iVar41] = -1;
		}
		StringCopy(&cVar12, "clrovr", 8);
		StringIntConCat(&cVar12, iVar41, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_59833[iVar41] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_59833[iVar41] = -1;
		}
		iVar42 = 0;
		while (iVar42 <= 1)
		{
			StringCopy(&cVar14, "trstp", 16);
			StringIntConCat(&cVar14, iVar41, 16);
			if (iVar42 > 0)
			{
				StringIntConCat(&cVar14, iVar42, 16);
			}
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar14) == 5)
			{
				Global_1607808.f_63087[iVar41 /*27*/][iVar42 /*13*/][0 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar14) };
			}
			else
			{
				Global_1607808.f_63087[iVar41 /*27*/][iVar42 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar14, "trstf", 16);
			StringIntConCat(&cVar14, iVar41, 16);
			if (iVar42 > 0)
			{
				StringIntConCat(&cVar14, iVar42, 16);
			}
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar14) == 5)
			{
				Global_1607808.f_63241[iVar41 /*27*/][iVar42 /*13*/][0 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar14) };
			}
			else
			{
				Global_1607808.f_63241[iVar41 /*27*/][iVar42 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar14, "trsth", 16);
			StringIntConCat(&cVar14, iVar41, 16);
			if (iVar42 > 0)
			{
				StringIntConCat(&cVar14, iVar42, 16);
			}
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar14) == 3)
			{
				Global_1607808.f_63196[iVar41 /*11*/][iVar42 /*5*/][0] = unk_0x22B9EF9E61A2066C(iVar3, &cVar14);
			}
			else
			{
				Global_1607808.f_63196[iVar41 /*11*/][iVar42 /*5*/][0] = 0f;
			}
			iVar43 = 0;
			while (iVar43 <= 3)
			{
				StringCopy(&cVar14, "trstp", 16);
				StringIntConCat(&cVar14, iVar41, 16);
				StringIntConCat(&cVar14, iVar42, 16);
				StringConCat(&cVar14, "n", 16);
				StringIntConCat(&cVar14, iVar43, 16);
				if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar14) == 5)
				{
					Global_1607808.f_63087[iVar41 /*27*/][iVar42 /*13*/][iVar43 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar14) };
				}
				else
				{
					Global_1607808.f_63087[iVar41 /*27*/][iVar42 /*13*/][iVar43 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar14, "trsth", 16);
				StringIntConCat(&cVar14, iVar41, 16);
				StringIntConCat(&cVar14, iVar42, 16);
				StringConCat(&cVar14, "n", 16);
				StringIntConCat(&cVar14, iVar43, 16);
				if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar14) == 3)
				{
					Global_1607808.f_63196[iVar41 /*11*/][iVar42 /*5*/][iVar43] = unk_0x22B9EF9E61A2066C(iVar3, &cVar14);
				}
				else
				{
					Global_1607808.f_63196[iVar41 /*11*/][iVar42 /*5*/][iVar43] = 0f;
				}
				iVar43++;
			}
			StringCopy(&cVar12, "trsrl", 8);
			StringIntConCat(&cVar12, iVar41, 8);
			StringIntConCat(&cVar12, iVar42, 8);
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
			{
				Global_1607808.f_79289[iVar41 /*3*/][iVar42] = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_79289[iVar41 /*3*/][iVar42] = 0;
			}
			iVar42++;
		}
		iVar42 = 0;
		while (iVar42 <= 3)
		{
			StringCopy(&cVar12, "pvp", 8);
			StringIntConCat(&cVar12, iVar41, 8);
			if (iVar42 > 0)
			{
				StringIntConCat(&cVar12, iVar42, 8);
			}
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
			{
				Global_1607808.f_78966[iVar41 /*13*/][iVar42 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
			}
			else
			{
				Global_1607808.f_78966[iVar41 /*13*/][iVar42 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar12, "pvh", 8);
			StringIntConCat(&cVar12, iVar41, 8);
			if (iVar42 > 0)
			{
				StringIntConCat(&cVar12, iVar42, 8);
			}
			if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 3)
			{
				Global_1607808.f_79019[iVar41 /*5*/][iVar42] = unk_0x22B9EF9E61A2066C(iVar3, &cVar12);
			}
			else
			{
				Global_1607808.f_79019[iVar41 /*5*/][iVar42] = -1f;
			}
			iVar42++;
		}
		StringCopy(&cVar12, "tscpos", 8);
		if (iVar41 > 0)
		{
			StringIntConCat(&cVar12, iVar41, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_78904[iVar41 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_78904[iVar41 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar12, "tscrot", 8);
		if (iVar41 > 0)
		{
			StringIntConCat(&cVar12, iVar41, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_78917[iVar41 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_78917[iVar41 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar12, "tspos", 8);
		if (iVar41 > 0)
		{
			StringIntConCat(&cVar12, iVar41, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 5)
		{
			Global_1607808.f_78930[iVar41 /*3*/] = { unk_0xE0BDF113BD17440C(iVar3, &cVar12) };
		}
		else
		{
			Global_1607808.f_78930[iVar41 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar12, "tscfov", 8);
		if (iVar41 > 0)
		{
			StringIntConCat(&cVar12, iVar41, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 3)
		{
			Global_1607808.f_78943[iVar41] = unk_0x22B9EF9E61A2066C(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_78943[iVar41] = 45f;
		}
		StringCopy(&cVar12, "tshead", 8);
		if (iVar41 > 0)
		{
			StringIntConCat(&cVar12, iVar41, 8);
		}
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 3)
		{
			Global_1607808.f_78948[iVar41] = unk_0x22B9EF9E61A2066C(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_78948[iVar41] = 0f;
		}
		iVar41++;
	}
	iVar5 = 0;
	while (iVar5 <= 17)
	{
		StringCopy(&cVar12, "pnid", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 4)
		{
			StringCopy(&(Global_1607808.f_76531[iVar5 /*18*/]), unk_0xE41666201B707589(iVar3, &cVar12), 64);
		}
		else
		{
			StringCopy(&(Global_1607808.f_76531[iVar5 /*18*/]), "", 64);
		}
		StringCopy(&cVar12, "pnlv", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2)
		{
			Global_1607808.f_76531[iVar5 /*18*/].f_16 = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76531[iVar5 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar12, "pnvr", 8);
		StringIntConCat(&cVar12, iVar5, 8);
		if (unk_0x0D5F4F1912AC26E7(iVar3, &cVar12) == 2 && !unk_0xB318FDA0D1ABDB20(&(Global_1607808.f_76531[iVar5 /*18*/])))
		{
			Global_1607808.f_76531[iVar5 /*18*/].f_17 = unk_0x6ED9878D7F475A3E(iVar3, &cVar12);
		}
		else
		{
			Global_1607808.f_76531[iVar5 /*18*/].f_17 = -1;
		}
		iVar5++;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "cposr") == 3)
	{
		Global_1607808.f_79314 = unk_0x22B9EF9E61A2066C(iVar3, "cposr");
	}
	else
	{
		Global_1607808.f_79314 = 60f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "cporv") == 3)
	{
		Global_1607808.f_79317 = unk_0x22B9EF9E61A2066C(iVar3, "cporv");
	}
	else
	{
		Global_1607808.f_79317 = -1f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "fvjhdt") == 2)
	{
		Global_1607808.f_79310 = unk_0x6ED9878D7F475A3E(iVar3, "fvjhdt");
	}
	else
	{
		Global_1607808.f_79310 = 25;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "fvjhmd") == 2)
	{
		Global_1607808.f_79311 = unk_0x6ED9878D7F475A3E(iVar3, "fvjhmd");
	}
	else
	{
		Global_1607808.f_79311 = 5;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "fvjfvd") == 2)
	{
		Global_1607808.f_79312 = unk_0x6ED9878D7F475A3E(iVar3, "fvjfvd");
	}
	else
	{
		Global_1607808.f_79312 = 5;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "fvjfvc") == 2)
	{
		Global_1607808.f_79313 = unk_0x6ED9878D7F475A3E(iVar3, "fvjfvc");
	}
	else
	{
		Global_1607808.f_79313 = 2;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "cpopr") == 3)
	{
		Global_1607808.f_79315 = unk_0x22B9EF9E61A2066C(iVar3, "cpopr");
	}
	else
	{
		Global_1607808.f_79315 = 5f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "cpohr") == 3)
	{
		Global_1607808.f_79316 = unk_0x22B9EF9E61A2066C(iVar3, "cpohr");
	}
	else
	{
		Global_1607808.f_79316 = 60f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "cdrt") == 3)
	{
		Global_1607808.f_79318 = unk_0x22B9EF9E61A2066C(iVar3, "cdrt");
	}
	else
	{
		Global_1607808.f_79318 = -1f;
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "csttl") == 4)
	{
		StringCopy(&(Global_1607808.f_79319), unk_0xE41666201B707589(iVar3, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1607808.f_79319), "", 16);
	}
	if (unk_0x0D5F4F1912AC26E7(iVar3, "csstl") == 4)
	{
		StringCopy(&(Global_1607808.f_79323), unk_0xE41666201B707589(iVar3, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1607808.f_79323), "", 16);
	}
}

var func_174()
{
	return unk_0x46E7F5908F815DDC("CREATOR_NO_T");
}

bool func_175()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 0);
}

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_177(iParam0, iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dilettante");
					break;
				
				case 1:
					iVar0 = joaat("issi2");
					break;
				
				case 2:
					iVar0 = joaat("rhapsody");
					break;
				
				case 3:
					iVar0 = joaat("panto");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("felon2");
					break;
				
				case 1:
					iVar0 = joaat("jackal");
					break;
				
				case 2:
					iVar0 = joaat("zion");
					break;
				
				case 3:
					iVar0 = joaat("oracle");
					break;
				
				case 4:
					iVar0 = joaat("windsor");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("emperor");
					break;
				
				case 1:
					iVar0 = joaat("emperor2");
					break;
				
				case 2:
					iVar0 = joaat("emperor3");
					break;
				
				case 3:
					iVar0 = joaat("fugitive");
					break;
				
				case 4:
					iVar0 = joaat("regina");
					break;
				
				case 5:
					iVar0 = joaat("superd");
					break;
				
				case 6:
					iVar0 = joaat("schafter2");
					break;
				
				case 7:
					iVar0 = joaat("glendale");
					break;
				
				case 8:
					iVar0 = joaat("warrener");
					break;
				
				case 9:
					iVar0 = joaat("asea");
					break;
				
				case 10:
					iVar0 = joaat("futo");
					break;
				
				case 11:
					iVar0 = joaat("surge");
					break;
				
				case 12:
					iVar0 = joaat("primo");
					break;
				
				case 13:
					iVar0 = joaat("primo2");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dominator");
					break;
				
				case 1:
					iVar0 = joaat("gauntlet");
					break;
				
				case 2:
					iVar0 = joaat("phoenix");
					break;
				
				case 3:
					iVar0 = joaat("blade");
					break;
				
				case 4:
					iVar0 = joaat("ratloader2");
					break;
				
				case 5:
					iVar0 = joaat("slamvan");
					break;
				
				case 6:
					iVar0 = joaat("slamvan2");
					break;
				
				case 7:
					iVar0 = joaat("buccaneer");
					break;
				
				case 8:
					iVar0 = joaat("voodoo2");
					break;
				
				case 9:
					iVar0 = joaat("picador");
					break;
				
				case 10:
					iVar0 = joaat("virgo");
					break;
				
				case 11:
					iVar0 = joaat("coquette3");
					break;
				
				case 12:
					iVar0 = joaat("chino");
					break;
				
				case 13:
					iVar0 = joaat("faction");
					break;
				
				case 14:
					iVar0 = joaat("faction2");
					break;
				
				case 15:
					iVar0 = joaat("moonbeam2");
					break;
				
				case 16:
					iVar0 = joaat("chino2");
					break;
				
				case 17:
					iVar0 = joaat("voodoo");
					break;
				
				case 18:
					iVar0 = joaat("buccaneer2");
					break;
				
				case 19:
					iVar0 = joaat("dukes2");
					break;
				
				case 20:
					iVar0 = joaat("moonbeam");
					break;
				
				case 21:
					iVar0 = joaat("lurcher");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("banshee");
					break;
				
				case 1:
					iVar0 = joaat("buffalo");
					break;
				
				case 2:
					iVar0 = joaat("coquette");
					break;
				
				case 3:
					iVar0 = joaat("ninef2");
					break;
				
				case 4:
					iVar0 = joaat("alpha");
					break;
				
				case 5:
					iVar0 = joaat("jester");
					break;
				
				case 6:
					iVar0 = joaat("massacro");
					break;
				
				case 7:
					iVar0 = joaat("furoregt");
					break;
				
				case 8:
					iVar0 = joaat("jester2");
					break;
				
				case 9:
					iVar0 = joaat("massacro2");
					break;
				
				case 10:
					iVar0 = joaat("kuruma");
					break;
				
				case 11:
					iVar0 = joaat("kuruma2");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("manana");
					break;
				
				case 1:
					iVar0 = joaat("stingergt");
					break;
				
				case 2:
					iVar0 = joaat("tornado2");
					break;
				
				case 3:
					iVar0 = joaat("btype");
					break;
				
				case 4:
					iVar0 = joaat("pigalle");
					break;
				
				case 5:
					iVar0 = joaat("coquette2");
					break;
				
				case 6:
					iVar0 = joaat("casco");
					break;
				
				case 7:
					iVar0 = joaat("peyote");
					break;
				
				case 8:
					iVar0 = joaat("tornado");
					break;
				
				case 9:
					iVar0 = joaat("feltzer3");
					break;
				
				case 10:
					iVar0 = joaat("btype2");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("cheetah");
					break;
				
				case 1:
					iVar0 = joaat("entityxf");
					break;
				
				case 2:
					iVar0 = joaat("voltic");
					break;
				
				case 3:
					iVar0 = joaat("turismor");
					break;
				
				case 4:
					iVar0 = joaat("zentorno");
					break;
				
				case 5:
					iVar0 = joaat("osiris");
					break;
				
				case 6:
					iVar0 = joaat("t20");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("baller");
					break;
				
				case 1:
					iVar0 = joaat("baller2");
					break;
				
				case 2:
					iVar0 = joaat("bjxl");
					break;
				
				case 3:
					iVar0 = joaat("cavalcade2");
					break;
				
				case 4:
					iVar0 = joaat("granger");
					break;
				
				case 5:
					iVar0 = joaat("patriot");
					break;
				
				case 6:
					iVar0 = joaat("huntley");
					break;
				
				case 7:
					iVar0 = joaat("dubsta3");
					break;
				
				case 8:
					iVar0 = joaat("gresley");
					break;
				
				case 9:
					iVar0 = joaat("landstalker");
					break;
				
				case 10:
					iVar0 = joaat("seminole");
					break;
				
				case 11:
					iVar0 = joaat("mesa");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("blazer");
					break;
				
				case 1:
					iVar0 = joaat("bodhi2");
					break;
				
				case 2:
					iVar0 = joaat("dune");
					break;
				
				case 3:
					iVar0 = joaat("bfinjection");
					break;
				
				case 4:
					iVar0 = joaat("mesa3");
					break;
				
				case 5:
					iVar0 = joaat("rebel");
					break;
				
				case 6:
					iVar0 = joaat("sadler");
					break;
				
				case 7:
					iVar0 = joaat("ratloader");
					break;
				
				case 8:
					iVar0 = joaat("sandking");
					break;
				
				case 9:
					iVar0 = joaat("bifta");
					break;
				
				case 10:
					iVar0 = joaat("kalahari");
					break;
				
				case 11:
					iVar0 = joaat("monster");
					break;
				
				case 12:
					iVar0 = joaat("technical");
					break;
				
				case 13:
					iVar0 = joaat("brawler");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bati");
					break;
				
				case 1:
					iVar0 = joaat("daemon");
					break;
				
				case 2:
					iVar0 = joaat("faggio2");
					break;
				
				case 3:
					iVar0 = joaat("hexer");
					break;
				
				case 4:
					iVar0 = joaat("nemesis");
					break;
				
				case 5:
					iVar0 = joaat("sanchez");
					break;
				
				case 6:
					iVar0 = joaat("vader");
					break;
				
				case 7:
					iVar0 = joaat("thrust");
					break;
				
				case 8:
					iVar0 = joaat("sovereign");
					break;
				
				case 9:
					iVar0 = joaat("enduro");
					break;
				
				case 10:
					iVar0 = joaat("innovation");
					break;
				
				case 11:
					iVar0 = joaat("hakuchou");
					break;
				
				case 12:
					iVar0 = joaat("lectro");
					break;
				
				case 13:
					iVar0 = joaat("vindicator");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bmx");
					break;
				
				case 1:
					iVar0 = joaat("cruiser");
					break;
				
				case 2:
					iVar0 = joaat("tribike");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("rhino");
					break;
				
				case 1:
					iVar0 = joaat("barracks");
					break;
				
				case 2:
					iVar0 = joaat("barracks2");
					break;
				
				case 3:
					iVar0 = joaat("barracks3");
					break;
				
				case 4:
					iVar0 = joaat("armytanker");
					break;
				
				case 5:
					iVar0 = joaat("cargobob");
					break;
				
				case 6:
					iVar0 = joaat("titan");
					break;
				
				case 7:
					iVar0 = joaat("insurgent");
					break;
				
				case 8:
					iVar0 = joaat("insurgent2");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("police3");
					break;
				
				case 1:
					iVar0 = joaat("policeb");
					break;
				
				case 2:
					iVar0 = joaat("riot");
					break;
				
				case 3:
					iVar0 = joaat("fbi");
					break;
				
				case 4:
					iVar0 = joaat("fbi2");
					break;
				
				case 5:
					iVar0 = joaat("pbus");
					break;
				
				case 6:
					iVar0 = joaat("annihilator");
					break;
				
				case 7:
					iVar0 = joaat("buzzard");
					break;
				
				case 8:
					iVar0 = joaat("polmav");
					break;
				
				case 9:
					iVar0 = joaat("predator");
					break;
				
				case 10:
					iVar0 = joaat("sheriff2");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("ambulance");
					break;
				
				case 1:
					iVar0 = joaat("bus");
					break;
				
				case 2:
					iVar0 = joaat("coach");
					break;
				
				case 3:
					iVar0 = joaat("firetruk");
					break;
				
				case 4:
					iVar0 = joaat("romero");
					break;
				
				case 5:
					iVar0 = joaat("stretch");
					break;
				
				case 6:
					iVar0 = joaat("taxi");
					break;
				
				case 7:
					iVar0 = joaat("trash");
					break;
				
				case 8:
					iVar0 = joaat("trash2");
					break;
				
				case 9:
					iVar0 = joaat("dilettante2");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bulldozer");
					break;
				
				case 1:
					iVar0 = joaat("dump");
					break;
				
				case 2:
					iVar0 = joaat("handler");
					break;
				
				case 3:
					iVar0 = joaat("mixer");
					break;
				
				case 4:
					iVar0 = joaat("tiptruck");
					break;
				
				case 5:
					iVar0 = joaat("rubble");
					break;
				
				case 6:
					iVar0 = joaat("guardian");
					break;
				
				case 7:
					iVar0 = joaat("mixer2");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("airtug");
					break;
				
				case 1:
					iVar0 = joaat("caddy");
					break;
				
				case 2:
					iVar0 = joaat("mower");
					break;
				
				case 3:
					iVar0 = joaat("tractor2");
					break;
				
				case 4:
					iVar0 = joaat("scrap");
					break;
				
				case 5:
					iVar0 = joaat("ripley");
					break;
				
				case 6:
					iVar0 = joaat("forklift");
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bison");
					break;
				
				case 1:
					iVar0 = joaat("benson");
					break;
				
				case 2:
					iVar0 = joaat("boxville2");
					break;
				
				case 3:
					iVar0 = joaat("boxville3");
					break;
				
				case 4:
					iVar0 = joaat("boxville4");
					break;
				
				case 5:
					iVar0 = joaat("gburrito");
					break;
				
				case 6:
					iVar0 = joaat("minivan");
					break;
				
				case 7:
					iVar0 = joaat("mule");
					break;
				
				case 8:
					iVar0 = joaat("mule3");
					break;
				
				case 9:
					iVar0 = joaat("speedo");
					break;
				
				case 10:
					iVar0 = joaat("stockade");
					break;
				
				case 11:
					iVar0 = joaat("taco");
					break;
				
				case 12:
					iVar0 = joaat("camper");
					break;
				
				case 13:
					iVar0 = joaat("journey");
					break;
				
				case 14:
					iVar0 = joaat("surfer");
					break;
				
				case 15:
					iVar0 = joaat("paradise");
					break;
				
				case 16:
					iVar0 = joaat("gburrito2");
					break;
				
				case 17:
					iVar0 = joaat("rumpo");
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("hauler");
					break;
				
				case 1:
					iVar0 = joaat("flatbed");
					break;
				
				case 2:
					iVar0 = joaat("packer");
					break;
				
				case 3:
					iVar0 = joaat("phantom");
					break;
				
				case 4:
					iVar0 = joaat("tanker");
					break;
				
				case 5:
					iVar0 = joaat("tanker2");
					break;
				
				case 6:
					iVar0 = joaat("trailers");
					break;
				
				case 7:
					iVar0 = joaat("trflat");
					break;
				
				case 8:
					iVar0 = joaat("tr2");
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("frogger");
					break;
				
				case 1:
					iVar0 = joaat("maverick");
					break;
				
				case 2:
					iVar0 = joaat("skylift");
					break;
				
				case 3:
					iVar0 = joaat("cargobob2");
					break;
				
				case 4:
					iVar0 = joaat("swift");
					break;
				
				case 5:
					iVar0 = joaat("valkyrie");
					break;
				
				case 6:
					iVar0 = joaat("savage");
					break;
				
				case 7:
					iVar0 = joaat("swift2");
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("cuban800");
					break;
				
				case 1:
					iVar0 = joaat("duster");
					break;
				
				case 2:
					iVar0 = joaat("mammatus");
					break;
				
				case 3:
					iVar0 = joaat("shamal");
					break;
				
				case 4:
					iVar0 = joaat("stunt");
					break;
				
				case 5:
					iVar0 = joaat("velum");
					break;
				
				case 6:
					iVar0 = joaat("jet");
					break;
				
				case 7:
					iVar0 = joaat("vestra");
					break;
				
				case 8:
					iVar0 = joaat("miljet");
					break;
				
				case 9:
					iVar0 = joaat("velum2");
					break;
				
				case 10:
					iVar0 = joaat("luxor2");
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("lazer");
					break;
				
				case 1:
					iVar0 = joaat("besra");
					break;
				
				case 2:
					iVar0 = joaat("hydra");
					break;
				
				case 3:
					iVar0 = joaat("luxor2");
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dinghy");
					break;
				
				case 1:
					iVar0 = joaat("dinghy2");
					break;
				
				case 2:
					iVar0 = joaat("dinghy3");
					break;
				
				case 3:
					iVar0 = joaat("marquis");
					break;
				
				case 4:
					iVar0 = joaat("seashark");
					break;
				
				case 5:
					iVar0 = joaat("submersible");
					break;
				
				case 6:
					iVar0 = joaat("suntrap");
					break;
				
				case 7:
					iVar0 = joaat("tropic");
					break;
				
				case 8:
					iVar0 = joaat("speeder");
					break;
				
				case 9:
					iVar0 = joaat("toro");
					break;
			}
			break;
	}
	return iVar0;
}

void func_178()
{
	if (func_179())
	{
		Global_2435406.f_8 = 0;
	}
	Global_2435406.f_7 = 1;
}

bool func_179()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_2, 11);
}

int func_180(int iParam0)
{
	if (unk_0x211AF631627DE2C5() || (unk_0xEC209B562C5EFDB2() && iParam0 == 0))
	{
		if (unk_0xBEC1291D6B41868E(1) == 0 || unk_0xB37B5777B142DAF2(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBEC1291D6B41868E(1) == 0)
	{
		return 0;
	}
	if (func_181() == 0)
	{
		return 0;
	}
	return 1;
}

int func_181()
{
	if (unk_0x211AF631627DE2C5() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x9800AF1CCAFA4639() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if ((unk_0xEC209B562C5EFDB2() && unk_0x145838334F50DC33() == 0) && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x3F0C224D3CC05EF2() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	if (unk_0x211AF631627DE2C5() || (unk_0xEC209B562C5EFDB2() && iParam0 == 0))
	{
		if (unk_0xBEC1291D6B41868E(0) == 0 || unk_0xB37B5777B142DAF2(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBEC1291D6B41868E(0) == 0)
	{
		return 0;
	}
	if (func_181() == 0)
	{
		return 0;
	}
	return 1;
}

void func_183(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1607808.f_64061 = 0;
	if (bParam0)
	{
		Global_1607808.f_40764 = -1;
		Global_1607808.f_11 = 0;
		Global_1607808.f_12 = 0;
		Global_1607808.f_13 = 0;
		Global_1607808.f_14 = 0;
		Global_1607808.f_15 = 0;
		Global_1607808.f_76 = 0;
		Global_1607808.f_76882 = 0;
		Global_1607808.f_10 = 0;
		Global_1607808.f_17 = 0;
		Global_1607808.f_42 = 0;
		Global_1607808.f_19 = 0;
		Global_1607808.f_41 = 0;
		Global_1607808.f_43 = 0;
		Global_1607808.f_44 = 0;
		Global_1607808.f_46 = 0;
		Global_1607808.f_47 = 0;
		Global_1607808.f_48 = 0;
		Global_1607808.f_49 = 0;
		Global_1607808.f_21 = 0;
		Global_1607808.f_22 = 1;
		Global_1607808.f_6 = 0;
		Global_1607808.f_37 = 0;
		Global_1607808.f_40 = 1;
		Global_1607808.f_18 = 0;
		Global_1607808.f_64038 = 0;
		Global_1607808.f_64041 = 0;
		Global_1607808.f_64040 = 0;
		Global_1607808.f_64037 = 0;
		if (bParam1)
		{
			Global_1607808.f_4 = 0;
			Global_1607808.f_5 = 0;
		}
		Global_1607808.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1607808.f_24295[iVar0 /*38*/] = -1;
			Global_1607808.f_24295[iVar0 /*38*/].f_1 = -1;
			Global_1607808.f_24295[iVar0 /*38*/].f_2 = 0;
			Global_1607808.f_24295[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1607808.f_64042 = 0;
		Global_1607808.f_64043 = 0;
		Global_1607808.f_64044 = 0;
		Global_1607808.f_64033 = -1;
		Global_1607808.f_64032 = 0;
		Global_1607808.f_53 = 0;
		Global_1607808.f_61 = { 0f, 0f, 0f };
		Global_1607808.f_64 = { 0f, 0f, 0f };
		Global_1607808.f_67 = { 0f, 0f, 0f };
		Global_1607808.f_70 = { 0f, 0f, 0f };
		Global_1607808.f_73 = 0f;
		Global_1607808.f_63396 = 0f;
		Global_1607808.f_75 = 0;
		Global_1607808.f_64060 = 0;
		Global_1607808.f_77094 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1607808.f_28692[iVar0] = 0;
			Global_1607808.f_28676[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1607808.f_67505[iVar0] = 0;
		Global_1607808.f_67511[iVar0] = -1;
		iVar0++;
	}
	Global_1607808.f_67517 = 0;
	Global_1607808.f_67518 = -1;
	Global_1607808.f_1 = -1;
	StringCopy(&(Global_1607808.f_63746), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1607808.f_67109[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1607808.f_78901 = 0;
	Global_1607808.f_36 = 0;
	Global_1607808.f_55 = { 0f, 0f, 0f };
	Global_1607808.f_77093 = -1;
	Global_1607808.f_64039 = 0f;
	StringCopy(&(Global_1607808.f_63428), "", 64);
	StringCopy(&(Global_1607808.f_63730), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1607808.f_63714[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1607808.f_63450[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_191();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1607808.f_24295[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_29[iVar0] = 0;
		Global_1607808.f_76856[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_76861[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1607808.f_24[iVar0] = 1;
		Global_1607808.f_62962[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_62975[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_62988[iVar0] = 0f;
		Global_1607808.f_78904[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_78917[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_78930[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_78943[iVar0] = 45f;
		Global_1607808.f_78948[iVar0] = 0f;
		Global_1607808.f_59833[iVar0] = -1;
		StringCopy(&(Global_1607808.f_79259[iVar0 /*6*/]), "", 24);
		Global_1607808.f_79284[iVar0] = 0;
		StringCopy(&(Global_1607808.f_79061[iVar0 /*16*/]), "", 64);
		Global_1607808.f_67557[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1607808.f_79126[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1607808.f_25137[iVar0] = -1;
		iVar0++;
	}
	Global_1607808.f_78953 = { 0f, 0f, 0f };
	Global_1607808.f_78956 = { 0f, 0f, 0f };
	Global_1607808.f_78959 = { 0f, 0f, 0f };
	Global_1607808.f_78962 = 45f;
	Global_1607808.f_78963 = 0f;
	Global_1607808.f_78964 = 0;
	Global_1607808.f_79302 = 10000;
	Global_1607808.f_79314 = 60f;
	Global_1607808.f_79315 = 5f;
	Global_1607808.f_79316 = 60f;
	Global_1607808.f_79317 = -1f;
	Global_1607808.f_79304 = 2;
	Global_1607808.f_79305 = 2;
	Global_1607808.f_79306 = 3000;
	Global_1607808.f_79307 = 150;
	Global_1607808.f_79308 = 3f;
	Global_1607808.f_79309 = 1f;
	Global_1607808.f_79310 = 25;
	Global_1607808.f_79311 = 5;
	Global_1607808.f_79312 = 5;
	Global_1607808.f_79313 = 2000;
	Global_1607808.f_79318 = -1f;
	StringCopy(&(Global_1607808.f_79319), "", 16);
	StringCopy(&(Global_1607808.f_79323), "", 16);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1607808.f_57928[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1607808.f_57977[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1607808.f_58026[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1607808.f_58117[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_189(&(Global_1607808.f_67562[iVar0 /*1269*/]));
		func_187(&(Global_1607808.f_73908[iVar0 /*434*/]));
		iVar0++;
	}
	func_187(&(Global_1607808.f_76079));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1607808.f_76990[iVar0 /*4*/].f_3 = 0;
		Global_1607808.f_76990[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1607808.f_77091 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1607808.f_40700[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1607808.f_40761 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_158(&(Global_1607808.f_64072[iVar0 /*44*/]), iVar0);
		iVar0++;
	}
	Global_1607808.f_67398[0] = 0;
	Global_1607808.f_67398[1] = 0;
	Global_1607808.f_67402 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_186(&(Global_1607808.f_76888[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1607808.f_2 = 0;
	Global_1607808.f_64013 = 0;
	Global_1607808.f_76882 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_64046[iVar0] = -1;
		Global_1607808.f_77095[iVar0] = -1;
		iVar0++;
	}
	Global_1607808.f_64070 = 0;
	Global_1607808.f_64071 = 0;
	Global_1607808.f_77134 = 0.5f;
	Global_1607808.f_67416 = 1;
	Global_1607808.f_67418 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1607808.f_77135[iVar0] = 0f;
		Global_1607808.f_77156[iVar0] = 0f;
		Global_1607808.f_77177[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_29239[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_29277[iVar0] = -1;
		iVar0++;
	}
	Global_1606563 = 0;
	Global_1607808.f_7 = 0;
	Global_1607808.f_64019 = 0;
	Global_1607808.f_24101 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_24259[iVar0 /*3*/][0] = 0;
		Global_1607808.f_24259[iVar0 /*3*/][1] = 0;
		Global_1607808.f_24246[iVar0 /*3*/][0] = 0;
		Global_1607808.f_24246[iVar0 /*3*/][1] = 0;
		Global_1607808.f_24272[iVar0 /*3*/][0] = 0;
		Global_1607808.f_24272[iVar0 /*3*/][1] = 0;
		Global_1607808.f_24285[iVar0] = 0;
		Global_1607808.f_24290[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1607808.f_67443[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1607808.f_67534[iVar0 /*2*/][0] = 0;
		Global_1607808.f_67548[iVar0 /*2*/][0] = 0;
		Global_1607808.f_77[iVar0 /*6002*/] = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_4 = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_7 = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_11 = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_14 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_15 = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_18 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_19 = { 0f, 0f, 0f };
		Global_1607808.f_77[iVar0 /*6002*/].f_22 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_23 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_36 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_24 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_25 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_26 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_27 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_28 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_29 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_30 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_31 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_32 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_33 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_34 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_57 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_2201 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2203 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2224 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2297 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3285 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2202 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2204 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3286 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_59 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_60 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_168 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_169 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_278 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_279 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3287 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_55 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_56 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1973 = 60000;
		Global_1607808.f_77[iVar0 /*6002*/].f_2055 = 60000;
		Global_1607808.f_77[iVar0 /*6002*/].f_2866 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_434 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_435 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1979 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1980 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1607808.f_77[iVar0 /*6002*/].f_1981[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_1999[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2017[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2035[iVar1] = 0;
			iVar1++;
		}
		Global_1607808.f_24086[iVar0] = 0;
		Global_1607808.f_24091[iVar0] = 0;
		Global_1607808.f_24096[iVar0] = -1;
		Global_1607808.f_24107[iVar0] = 0;
		StringCopy(&(Global_1607808.f_24112[iVar0 /*4*/]), "", 16);
		Global_1607808.f_24134[iVar0] = 3;
		Global_1607808.f_24139[iVar0] = -1;
		Global_1607808.f_24102[iVar0] = 0;
		Global_1607808.f_24129[iVar0] = 0;
		Global_1607808.f_67404[iVar0] = 0;
		Global_1607808.f_67409[iVar0] = 0;
		Global_1607808.f_29272[iVar0] = 100;
		Global_1607808.f_29282[iVar0] = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3084 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3085 = 0;
		Global_1606563.f_1[iVar0] = 0;
		Global_1607808.f_67519[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1607808.f_63087[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1607808.f_63196[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1607808.f_63241[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1607808.f_79289[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1607808.f_28708[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1607808.f_28801[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1607808.f_28801[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_78966[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_79019[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 51)
		{
			Global_1607808.f_77[iVar0 /*6002*/].f_61[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_170[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_280[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_114[iVar1] = 1f;
			Global_1607808.f_77[iVar0 /*6002*/].f_223[iVar1] = 1f;
			Global_1607808.f_77[iVar0 /*6002*/].f_333[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_77[iVar0 /*6002*/].f_388[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_393[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1607808.f_24676[iVar1 /*27*/] = 0;
			Global_1607808.f_24676[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1607808.f_24676[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1607808.f_24676[iVar1 /*27*/].f_25 = 0f;
			Global_1607808.f_24676[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1607808.f_24676[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1607808.f_24676[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1607808.f_24676[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1607808.f_77[iVar0 /*6002*/].f_2994[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_3012[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_3030[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_3048[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_3066[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_37[iVar1] = -1;
			Global_1607808.f_40614[iVar1 /*5*/][iVar0] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_3086[iVar1] = 60000;
			Global_1607808.f_77[iVar0 /*6002*/].f_3104[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_3208[iVar2 /*16*/]), "", 64);
				Global_1607808.f_77[iVar0 /*6002*/].f_3122[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1607808.f_24144[iVar1 /*5*/][iVar0] = -1;
			StringCopy(&(Global_1606563.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1606563.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_454[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_472[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2057[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2075[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2093[iVar1] = 1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2165[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2183[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2225[iVar1] = 10000;
			Global_1607808.f_77[iVar0 /*6002*/].f_2205[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2261[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2111[iVar1] = 1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2279[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2298[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2582[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2618[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2334[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2316[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2474[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2600[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2636[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2528[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2546[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2492[iVar1] = 100;
			Global_1607808.f_77[iVar0 /*6002*/].f_2352[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_2404[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_2456[iVar1] = 0f;
			Global_1607808.f_77[iVar0 /*6002*/].f_2510[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2564[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2654[iVar1] = -1f;
			Global_1607808.f_77[iVar0 /*6002*/].f_562[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_580[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_598[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_634[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_490[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_508[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_616[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_652[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5732[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5750[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5768[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5786[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5804[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5822[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5840[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5858[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5876[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5894[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5912[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5930[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2904[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2922[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2940[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2958[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2976[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_526[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_544[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2129[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2147[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_398[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_416[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_436[iVar1] = 0;
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_3288[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_3561[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_3834[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4313[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4107[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4210[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_5508[0 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_5508[1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4416[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4689[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_4962[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1607808.f_77[iVar0 /*6002*/].f_5235[iVar1 /*16*/]), "", 64);
			Global_1607808.f_77[iVar0 /*6002*/].f_2794[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2830[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2812[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2672[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_2724[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_3 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_6 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_9 = 0f;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_10 = 0f;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_19 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_17 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_13 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_18 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_20 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_21 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_674[iVar1 /*24*/].f_22 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/] = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_3 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_6 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_9 = 0f;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_10 = 0f;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_19 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_17 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_13 = { 0f, 0f, 0f };
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_18 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_20 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_21 = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_1083[iVar1 /*24*/].f_22 = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_2776[iVar1] = 3f;
			Global_1607808.f_77[iVar0 /*6002*/].f_2243[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2848[iVar1] = 10.5f;
			Global_1607808.f_77[iVar0 /*6002*/].f_5541[iVar1 /*5*/][0] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5541[iVar1 /*5*/][1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5541[iVar1 /*5*/][2] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5541[iVar1 /*5*/][3] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5627[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5645[iVar1 /*4*/][0] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5645[iVar1 /*4*/][1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5645[iVar1 /*4*/][2] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5714[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_2868[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5948[iVar1] = 0;
			Global_1607808.f_77[iVar0 /*6002*/].f_5966[iVar1] = -1;
			Global_1607808.f_77[iVar0 /*6002*/].f_5984[iVar1] = 0;
			iVar1++;
		}
		Global_1607808.f_77[iVar0 /*6002*/].f_1972 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2054 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1971 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2053 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1974 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1975 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1976 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1977 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_1978 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_2056 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_670 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_671 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_276 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_277 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_386 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_387 = -1;
		Global_1607808.f_77[iVar0 /*6002*/].f_3273 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3274 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3275 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3276 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3277 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3278 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3279 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3280 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3281 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3282 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3283 = 0;
		Global_1607808.f_77[iVar0 /*6002*/].f_3284 = 0;
		iVar0++;
	}
	Global_1607808.f_58081 = 0;
	Global_1607808.f_58082 = 0;
	Global_1607808.f_58083 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1607808.f_58084[iVar0] = 0;
		Global_1607808.f_58095[iVar0] = 0;
		Global_1607808.f_58106[iVar0] = 0;
		iVar0++;
	}
	Global_1607808.f_58 = { 0f, 0f, 0f };
	Global_1607808.f_25142 = { 0f, 0f, 0f };
	Global_1607808.f_74 = 0f;
	Global_1607808.f_76513 = { 0f, 0f, 0f };
	Global_1607808.f_64014[0] = 0;
	Global_1607808.f_64014[1] = 0;
	Global_1607808.f_64017 = 0;
	Global_1607808.f_64013 = 0;
	Global_1607808.f_77100 = 0;
	Global_1607808.f_77101 = 0;
	Global_1607808.f_77102 = 0;
	Global_1607808.f_77103 = 0;
	Global_1607808.f_77105 = 0;
	Global_1607808.f_77107 = 0;
	Global_1607808.f_77109 = 0;
	Global_1607808.f_77112 = 0;
	Global_1607808.f_77113 = 0;
	Global_1607808.f_77114 = 0;
	Global_1607808.f_77115 = 0;
	Global_1607808.f_77116 = 0;
	Global_1607808.f_77117 = 0;
	Global_1607808.f_77123 = -1;
	Global_1607808.f_77124 = -1;
	Global_1607808.f_77125 = -1;
	Global_1607808.f_77126 = -1;
	Global_1607808.f_77127 = -1;
	Global_1607808.f_77128 = -1;
	Global_1607808.f_77129 = -1;
	Global_1607808.f_77130 = -1;
	Global_1607808.f_77131 = -1;
	Global_1607808.f_77132 = -1;
	Global_1607808.f_77133 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1607808.f_25846[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_25145[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_25145[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_25145[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_26128[iVar0] = 0f;
		Global_1607808.f_26270[iVar0] = 1f;
		iVar0++;
	}
	Global_1607808.f_28666 = 0;
	if (bParam0)
	{
		Global_1607808.f_28667 = 0;
		Global_1607808.f_28675 = 0;
	}
	Global_1607808.f_28673 = 0;
	Global_1607808.f_28674 = 0;
	Global_1607808.f_29231 = 0f;
	Global_1607808.f_31467 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1607808.f_31468[iVar0 /*36*/] = { 0f, 0f, 0f };
		Global_1607808.f_31468[iVar0 /*36*/].f_6 = 0f;
		Global_1607808.f_31468[iVar0 /*36*/].f_7 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_9 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_8 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_10 = 1;
		Global_1607808.f_31468[iVar0 /*36*/].f_18 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_12 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_13 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_14 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_11 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_29 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_30 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_31 = 0;
		Global_1607808.f_31468[iVar0 /*36*/].f_15 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_16 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_17 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_19 = -1;
		Global_1607808.f_31468[iVar0 /*36*/].f_32 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_185(&(Global_1607808.f_79327[iVar0 /*213*/]));
		iVar0++;
	}
	Global_1607808.f_81458 = 0;
	Global_1607808.f_35105 = 0;
	Global_1607808.f_35106 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1607808.f_35107[iVar0 /*29*/] = { 0f, 0f, 0f };
		Global_1607808.f_35107[iVar0 /*29*/].f_6 = 0f;
		Global_1607808.f_35107[iVar0 /*29*/].f_7 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_8 = -1;
		Global_1607808.f_35107[iVar0 /*29*/].f_10 = -1;
		Global_1607808.f_35107[iVar0 /*29*/].f_9 = -1;
		Global_1607808.f_35107[iVar0 /*29*/].f_11 = 1;
		Global_1607808.f_35107[iVar0 /*29*/].f_16 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_12 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_26 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_27 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_28 = 0;
		Global_1607808.f_35107[iVar0 /*29*/].f_13 = -1;
		Global_1607808.f_35107[iVar0 /*29*/].f_14 = -1;
		Global_1607808.f_35107[iVar0 /*29*/].f_15 = -1;
		iVar0++;
	}
	Global_1607808.f_31142 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1607808.f_31143[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1607808.f_31143[iVar0 /*19*/].f_3 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_4 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_14 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_12 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_15 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_16 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_6 = -1;
		Global_1607808.f_31143[iVar0 /*19*/].f_5 = -1;
		Global_1607808.f_31143[iVar0 /*19*/].f_13 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_8 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_9 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_10 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_11 = 0f;
		Global_1607808.f_31143[iVar0 /*19*/].f_7 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_17 = 0;
		Global_1607808.f_31143[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1607808.f_31429 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1607808.f_31430[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1607808.f_31430[iVar0 /*7*/].f_3 = 0f;
		Global_1607808.f_31430[iVar0 /*7*/].f_4 = 0;
		Global_1607808.f_31430[iVar0 /*7*/].f_5 = 0;
		Global_1607808.f_31430[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1607808.f_29232 = 3.5f;
		Global_1607808.f_29233 = 7f;
		Global_1607808.f_29234 = 0f;
		Global_1607808.f_29235 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1607808.f_29239[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1607808.f_29277[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1607808.f_64051 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_28655[iVar0] = 0;
		Global_1607808.f_67500[iVar0] = -1;
		Global_1607808.f_67543[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1607808.f_28161[iVar1 /*29*/][iVar0] = 0;
			Global_1607808.f_28161[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1607808.f_28161[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1607808.f_28161[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1607808.f_28161[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1607808.f_76883[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1607808.f_29288 = 1;
	}
	Global_1607808.f_29290 = 0;
	Global_1607808.f_29291 = 0;
	Global_1607808.f_29292 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1607808.f_29293[iVar0 /*88*/] = { 0f, 0f, 0f };
		Global_1607808.f_29293[iVar0 /*88*/].f_4 = { 0f, 0f, 0f };
		Global_1607808.f_29293[iVar0 /*88*/].f_3 = 0f;
		Global_1607808.f_29293[iVar0 /*88*/].f_7 = 50f;
		Global_1607808.f_29293[iVar0 /*88*/].f_8 = 0f;
		Global_1607808.f_29293[iVar0 /*88*/].f_9 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_10 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_11 = { 0f, 0f, 0f };
		Global_1607808.f_29293[iVar0 /*88*/].f_14 = 0f;
		Global_1607808.f_29293[iVar0 /*88*/].f_15 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_26 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_28 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_29 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_30 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_43 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_42 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_44 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_45 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_46 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_47 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_48 = 60;
		Global_1607808.f_29293[iVar0 /*88*/].f_49 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_36 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_31 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_32 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_33 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_54 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_34 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_50 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_51 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_52 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_82 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_83 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_84 = { 0f, 0f, 0f };
		Global_1607808.f_29293[iVar0 /*88*/].f_87 = 0;
		Global_1607808.f_29293[iVar0 /*88*/].f_80 = -1;
		Global_1607808.f_29293[iVar0 /*88*/].f_81 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_29293[iVar0 /*88*/].f_16[iVar1] = 0;
			Global_1607808.f_29293[iVar0 /*88*/].f_21[iVar1] = 99999;
			Global_1607808.f_29293[iVar0 /*88*/].f_64[iVar1] = 0;
			Global_1607808.f_29293[iVar0 /*88*/].f_69[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1607808.f_76531[iVar0 /*18*/]), "", 64);
		Global_1607808.f_76531[iVar0 /*18*/].f_16 = 0;
		Global_1607808.f_76531[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1607808.f_35717 = 0;
	Global_1607808.f_35718 = 0;
	if (bParam0)
	{
		if (func_99() && !func_145())
		{
			Global_1607808.f_35719 = -1;
		}
		else
		{
			Global_1607808.f_35719 = 0;
		}
	}
	Global_1607808.f_35720 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1607808.f_35721[iVar0 /*21*/] = { 0f, 0f, 0f };
		Global_1607808.f_35721[iVar0 /*21*/].f_3 = 0f;
		Global_1607808.f_35721[iVar0 /*21*/].f_13 = 76;
		Global_1607808.f_35721[iVar0 /*21*/].f_4 = 0;
		Global_1607808.f_35721[iVar0 /*21*/].f_5 = 0;
		Global_1607808.f_35721[iVar0 /*21*/].f_7 = 1f;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_35721[iVar0 /*21*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_184();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1607808.f_58075[iVar0] = -1;
		iVar0++;
	}
	Global_1607808.f_64065 = -1;
	Global_1607808.f_64066 = 15;
	Global_1607808.f_64067 = -1;
	Global_1607808.f_36583 = 0;
	Global_1607808.f_31466 = 0;
	if (bParam0)
	{
		Global_1607808.f_29238 = -1;
		Global_1607808.f_28671 = -1;
	}
	Global_1607808.f_36584 = 0;
	Global_1607808.f_36585 = 0;
	Global_1607808.f_36586 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1607808.f_36587[iVar0 /*122*/] = { 0f, 0f, 0f };
		Global_1607808.f_36587[iVar0 /*122*/].f_3 = 0f;
		Global_1607808.f_36587[iVar0 /*122*/].f_4 = 50f;
		Global_1607808.f_36587[iVar0 /*122*/].f_5 = 0f;
		Global_1607808.f_36587[iVar0 /*122*/].f_6 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_7 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_8 = { 0f, 0f, 0f };
		Global_1607808.f_36587[iVar0 /*122*/].f_11 = 0f;
		Global_1607808.f_36587[iVar0 /*122*/].f_12 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_23 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_24 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_25 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_26 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_29 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_30 = 100;
		Global_1607808.f_36587[iVar0 /*122*/].f_31 = 1001f;
		Global_1607808.f_36587[iVar0 /*122*/].f_32 = 1001f;
		Global_1607808.f_36587[iVar0 /*122*/].f_34 = 1.5f;
		Global_1607808.f_36587[iVar0 /*122*/].f_41 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_106 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_42 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_43 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_27 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_28 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_46 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_36 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_37 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_38 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_58 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_59 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_61 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_104 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_103 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1607808.f_36587[iVar0 /*122*/].f_107[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_36587[iVar0 /*122*/].f_114[iVar1] = 0f;
			iVar1++;
		}
		Global_1607808.f_36587[iVar0 /*122*/].f_60 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_67 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_39 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_117 = 0;
		Global_1607808.f_36587[iVar0 /*122*/].f_118 = -1;
		Global_1607808.f_36587[iVar0 /*122*/].f_119 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_36587[iVar0 /*122*/].f_13[iVar1] = 0;
			Global_1607808.f_36587[iVar0 /*122*/].f_18[iVar1] = 99999;
			Global_1607808.f_36587[iVar0 /*122*/].f_97[iVar1] = 0;
			Global_1607808.f_36587[iVar0 /*122*/].f_80[iVar1] = 0;
			Global_1607808.f_36587[iVar0 /*122*/].f_85[iVar1] = 0;
			Global_1607808.f_36587[iVar0 /*122*/].f_48[iVar1] = -1;
			Global_1607808.f_36587[iVar0 /*122*/].f_53[iVar1] = -1;
			Global_1607808.f_36587[iVar0 /*122*/].f_62[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1607808.f_62995 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1607808.f_62996[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1607808.f_62996[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1607808.f_62996[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1607808.f_58198 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1607808.f_58205[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1607808.f_58205[iVar0 /*9*/].f_3 = 0f;
		Global_1607808.f_58205[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_58199[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/] = { 0f, 0f, 0f };
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/].f_3 = 0f;
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/].f_4 = 0;
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/].f_5 = 0;
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/].f_7 = -1;
			Global_1607808.f_58746[iVar0 /*262*/][iVar1 /*9*/].f_8 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1607808.f_40762 = 0;
	Global_1607808.f_40765 = 0;
	Global_1607808.f_40766 = 0;
	Global_1607808.f_40763 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1607808.f_40767[iVar0 /*286*/].f_39 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_49 = 0;
		Global_1607808.f_40767[iVar0 /*286*/] = { 0f, 0f, 0f };
		Global_1607808.f_40767[iVar0 /*286*/].f_3 = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_4 = 0.75f;
		Global_1607808.f_40767[iVar0 /*286*/].f_14 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_15 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_16 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_32 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_36 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_37 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_38 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_215 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_214 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_216 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_217 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_218 = 20;
		Global_1607808.f_40767[iVar0 /*286*/].f_226 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_56 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_47 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_34 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_35 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_48 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_188 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_189 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_190 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_191 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_192 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_193 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_194 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_195 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_33 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_13 = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_5 = 50f;
		Global_1607808.f_40767[iVar0 /*286*/].f_6 = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_7 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_8 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
		Global_1607808.f_40767[iVar0 /*286*/].f_12 = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_175 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_63 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_167 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_168 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_169 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_175 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_185 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_176 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_184 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_64 = { 0f, 0f, 0f };
		Global_1607808.f_40767[iVar0 /*286*/].f_57 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_58 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_62 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_59 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_252 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_263 = 1f;
		Global_1607808.f_40767[iVar0 /*286*/].f_80 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_201 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_52 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_202 = 250;
		Global_1607808.f_40767[iVar0 /*286*/].f_205 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_206 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_266 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_207 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_267 = 4;
		Global_1607808.f_40767[iVar0 /*286*/].f_237 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_153 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_154 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_155 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_227 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_228 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_229 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_230 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_265 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_264 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_156 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_157 = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_60 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_40767[iVar0 /*286*/].f_17[iVar1] = 0;
			Global_1607808.f_40767[iVar0 /*286*/].f_22[iVar1] = 2;
			Global_1607808.f_40767[iVar0 /*286*/].f_27[iVar1] = 99999;
			Global_1607808.f_40767[iVar0 /*286*/].f_196[iVar1] = -1;
			Global_1607808.f_40767[iVar0 /*286*/].f_238[iVar1] = 0;
			Global_1607808.f_40767[iVar0 /*286*/].f_243[iVar1] = 0;
			Global_1607808.f_40767[iVar0 /*286*/].f_253[iVar1] = -1;
			Global_1607808.f_40767[iVar0 /*286*/].f_258[iVar1] = -1;
			Global_1607808.f_40767[iVar0 /*286*/].f_269[iVar1] = -2;
			Global_1607808.f_40767[iVar0 /*286*/].f_170[iVar1] = 0;
			Global_1607808.f_40767[iVar0 /*286*/].f_231[iVar1] = 0;
			iVar1++;
		}
		Global_1607808.f_40767[iVar0 /*286*/].f_115[0] = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_121[0] = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_133[0] = 0f;
		Global_1607808.f_40767[iVar0 /*286*/].f_81[0] = 0;
		Global_1607808.f_40767[iVar0 /*286*/].f_87[0] = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_93[0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_40767[iVar0 /*286*/].f_109[0] = 3;
		Global_1607808.f_40767[iVar0 /*286*/].f_127[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_40767[iVar0 /*286*/].f_67[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_40767[iVar0 /*286*/].f_81[iVar1 + 1] = 0;
			Global_1607808.f_40767[iVar0 /*286*/].f_115[iVar1 + 1] = 0f;
			Global_1607808.f_40767[iVar0 /*286*/].f_121[iVar1 + 1] = 0f;
			Global_1607808.f_40767[iVar0 /*286*/].f_133[iVar1 + 1] = 0f;
			Global_1607808.f_40767[iVar0 /*286*/].f_87[iVar1 + 1] = -1;
			Global_1607808.f_40767[iVar0 /*286*/].f_93[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_40767[iVar0 /*286*/].f_109[iVar1 + 1] = 3;
			Global_1607808.f_40767[iVar0 /*286*/].f_127[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1607808.f_40767[iVar0 /*286*/].f_139[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1607808.f_40767[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_40767[iVar0 /*286*/].f_283[iVar1] = 0f;
			iVar1++;
		}
		Global_1607808.f_40767[iVar0 /*286*/].f_186 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_187 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_268 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_274 = -1;
		Global_1607808.f_40767[iVar0 /*286*/].f_275 = -1;
		iVar0++;
	}
	Global_1607808.f_58198 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1607808.f_58205[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1607808.f_58205[iVar0 /*9*/].f_3 = 0f;
		Global_1607808.f_58205[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1607808.f_28661[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1607808.f_26342[iVar0 /*101*/].f_52 = 0;
		Global_1607808.f_26342[iVar0 /*101*/].f_46 = 0;
		Global_1607808.f_26342[iVar0 /*101*/].f_20 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/].f_28 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/].f_29 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/].f_30 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/].f_54 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/].f_55 = 0f;
		Global_1607808.f_26342[iVar0 /*101*/] = 0;
		Global_1607808.f_26342[iVar0 /*101*/].f_21 = { 0f, 0f, 0f };
		Global_1607808.f_26342[iVar0 /*101*/].f_24 = { 0f, 0f, 0f };
		Global_1607808.f_26342[iVar0 /*101*/].f_27 = 1f;
		Global_1607808.f_26342[iVar0 /*101*/].f_96 = 10.5f;
		Global_1607808.f_26342[iVar0 /*101*/].f_95 = 0;
		Global_1607808.f_26342[iVar0 /*101*/].f_53 = 0;
		Global_1607808.f_26342[iVar0 /*101*/].f_19 = 1f;
		Global_1607808.f_26342[iVar0 /*101*/].f_98 = -1;
		Global_1607808.f_26342[iVar0 /*101*/].f_99 = -1f;
		if (Global_1607808.f_26342[iVar0 /*101*/].f_100 != 0)
		{
			unk_0x91951D41BCE7B10D(Global_1607808.f_26342[iVar0 /*101*/].f_100);
			Global_1607808.f_26342[iVar0 /*101*/].f_100 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_26342[iVar0 /*101*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1607808.f_26342[iVar0 /*101*/].f_14[iVar1] = 0f;
			Global_1607808.f_26342[iVar0 /*101*/].f_36[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_41[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_31[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_61[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_66[iVar1] = 99999;
			Global_1607808.f_26342[iVar0 /*101*/].f_71[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_76[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_56[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_81[iVar1] = 0;
			Global_1607808.f_26342[iVar0 /*101*/].f_86[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1607808.f_62993 = 0;
	Global_1607808.f_35 = 0;
	Global_1607808.f_78902 = 12;
	Global_1607808.f_78903 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_76517[iVar0] = -1;
		Global_1607808.f_76522[iVar0] = -1;
		iVar0++;
	}
	Global_1607808.f_29289 = 0;
	Global_1607808.f_77118 = -1;
	Global_1607808.f_76527 = 0;
	Global_1607808.f_76516 = 0;
	Global_1607808.f_76529 = 0;
	Global_1607808.f_76528 = 0;
	Global_1607808.f_76530 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1607808.f_64024[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1607808.f_59869[iVar3] = -1;
		Global_1607808.f_59838[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1607808.f_59900[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				Global_1607808.f_61431[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
}

void func_184()
{
	int iVar0;
	int iVar1;
	
	Global_1607808.f_63729 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1607808.f_63752[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_63752[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1607808.f_63752[iVar0 /*26*/].f_9 = 0;
		Global_1607808.f_63752[iVar0 /*26*/].f_20 = 0;
		Global_1607808.f_63752[iVar0 /*26*/].f_22 = 0f;
		Global_1607808.f_63752[iVar0 /*26*/].f_23 = 0f;
		Global_1607808.f_63752[iVar0 /*26*/].f_21 = 0;
		Global_1607808.f_63752[iVar0 /*26*/].f_7 = 0f;
		Global_1607808.f_63752[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1607808.f_63752[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_185(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
		uParam0->f_91[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_182[iVar0] = 0;
		iVar0++;
	}
}

void func_186(var uParam0)
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

void func_187(char* sParam0)
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
		func_188(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_188(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_189(char* sParam0)
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
		func_190(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_188(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_190(char* sParam0, int iParam1)
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

void func_191()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1607808.f_63579[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_192()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		if (Global_1312432)
		{
			return 1;
		}
	}
	else if (Global_1312432)
	{
		Global_1312432 = 0;
	}
	return 0;
}

bool func_193()
{
	return unk_0x236D8AD7EE179F46(Global_967557.f_8, 0);
}

bool func_194()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 4);
}

bool func_195()
{
	return unk_0x236D8AD7EE179F46(Global_2428865, 28);
}

var func_196()
{
	return Global_2428865.f_567;
}

void func_197()
{
	unk_0xC69E84EBBD7166E6(&Global_2428865, 4);
}

void func_198()
{
	unk_0xC69E84EBBD7166E6(&Global_2428865, 28);
}

void func_199(bool bParam0, bool bParam1, bool bParam2)
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
		func_68(bParam0, 0);
	}
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 66:
			return 15;
		
		case 73:
			return 8;
		
		case 67:
			return 14;
		
		case 71:
			return 122;
		
		case 74:
			return 1;
		
		case 72:
			return 5;
		
		case 75:
			return 6;
		
		case 68:
			return 11;
		
		case 76:
			return 0;
		
		case 77:
			return 2;
		
		case 69:
			return 13;
		
		case 78:
			return 3;
		
		case 70:
			return 12;
		
		default:
	}
	return 157;
}

bool func_201()
{
	return Global_2394686;
}

var func_202()
{
	return Global_2394686.f_3;
}

