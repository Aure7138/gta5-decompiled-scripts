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
	unk_0x20A629A7D3DC97F2();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_268 = false;
		bVar0 = func_187();
		Global_2394650.f_3 = 0;
		Global_2394810 = 0;
		if (func_186())
		{
			bLocal_268 = true;
			Var1 = { Global_2394650.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_185(Global_2394650.f_4);
			iVar20 = unk_0x1788E93557766241();
			bVar21 = Global_2394650.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394650.f_15 };
			}
			if (Global_2394650.f_25)
			{
				func_184(&Local_88, 1, 1);
				unk_0x29DB79DD4D939B38(&(Global_1583725[iVar20 /*334*/].f_39.f_18), 2);
				unk_0x29DB79DD4D939B38(&(Global_1583725[iVar20 /*334*/].f_39.f_18), 1);
				unk_0x29DB79DD4D939B38(&(Global_1583725[iVar20 /*334*/].f_39.f_18), 3);
				func_183();
				func_182();
				Global_2394650.f_25 = 0;
			}
			if (!func_74(&Local_88, &cVar11, &(Global_1583725[iVar20 /*334*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 0))
			{
				Global_2394650.f_23 = 0;
				Global_2394650.f_27 = -1;
				if (bVar0)
				{
					func_184(&Local_88, 1, 1);
					unk_0x8151D7BE8A9363BB();
					func_73();
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 0;
					if (Global_2394650.f_27 < 0)
					{
						Global_2394650.f_27 = 0;
					}
					else
					{
						Global_2394650.f_27++;
						if (Global_2394650.f_27 >= 10)
						{
							func_72();
							Global_2394650.f_25 = 1;
						}
					}
				}
			}
			else if (Local_88.f_0)
			{
				Global_2394650.f_23 = 1;
				Global_2394650.f_24 = 1;
				if (Global_2394650.f_27 < 0)
				{
					Global_2394650.f_27 = 0;
				}
				else
				{
					Global_2394650.f_27++;
					if (Global_2394650.f_27 >= 10)
					{
						func_72();
					}
				}
			}
			else
			{
				Global_2394650.f_26++;
				if (Global_2394650.f_26 >= 3)
				{
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 0;
					if (Global_2394650.f_27 < 0)
					{
						Global_2394650.f_27 = 0;
					}
					else
					{
						Global_2394650.f_27++;
						if (Global_2394650.f_27 >= 10)
						{
							func_72();
							Global_2394650.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394650.f_25 = 1;
				}
			}
		}
		if (func_71())
		{
			bLocal_268 = true;
			MemCopy(&cVar22, {Global_2394650.f_4.f_3}, 8);
			if (Global_2394650.f_23)
			{
				func_72();
			}
			else
			{
				if (Global_2394650.f_25)
				{
					func_184(&Local_88, 1, 1);
					Global_2394650.f_25 = 0;
				}
				if (!func_68(&Local_88, &cVar22, &Local_181))
				{
					Global_2394650.f_23 = 0;
					Global_2394650.f_27 = -1;
				}
				else if (Local_88.f_0)
				{
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 1;
					Global_2394650.f_28 = Local_181.f_65;
					Global_2394650.f_29 = Local_181.f_68;
					Global_2394650.f_30 = { Local_181.f_22 };
					Global_2394650.f_46 = { Local_181.f_38 };
					Global_2398309 = { Local_181 };
				}
				else
				{
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 0;
				}
			}
		}
		if (func_67())
		{
			bLocal_268 = true;
			if (Global_2394650.f_23)
			{
				func_72();
			}
			else
			{
				if (Global_2394650.f_25)
				{
					func_184(&Local_88, 1, 1);
					Global_2394650.f_25 = 0;
				}
				iVar30 = Local_88.f_4;
				if (!func_4(&Local_88))
				{
					Global_2394810 = 1;
					if (iVar30 != Local_88.f_4)
					{
						if (Local_88.f_4 == 4)
						{
							iLocal_267 = (unk_0x09560C7DE2A384BD() + 50000);
						}
					}
					bVar31 = false;
					if (Local_88.f_4 == 4)
					{
						if (unk_0x09560C7DE2A384BD() > iLocal_267)
						{
							Global_2394650.f_23 = 1;
							Global_2394650.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394650.f_23 = 0;
						Global_2394650.f_27 = -1;
					}
				}
				else if (Local_88.f_0)
				{
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 1;
				}
				else
				{
					Global_2394650.f_23 = 1;
					Global_2394650.f_24 = 0;
				}
			}
		}
		if (!bLocal_268)
		{
			if (func_3(unk_0x1788E93557766241()) || func_2(unk_0x1788E93557766241()))
			{
				if (!func_1(unk_0x1788E93557766241(), 1))
				{
					unk_0x82706E6C897B0FA1();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

bool func_3(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

int func_4(bool bParam0)
{
	if (!func_66())
	{
		if (func_63())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_62())
			{
				return 0;
			}
			if (func_61())
			{
				return 0;
			}
			func_60();
			func_59();
			func_58();
			if (func_66())
			{
				unk_0xAE648B034443E9CB(1);
			}
			else
			{
				unk_0xAE648B034443E9CB(0);
			}
			bParam0->f_13 = Global_2394809;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_57(bParam0, 24);
			break;
		
		case 24:
			if (func_55(bParam0->f_13))
			{
				func_184(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_57(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x3BE64B5CCF045392(&Global_2394712, bParam0->f_13, 1, func_54(0)))
			{
				func_57(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x0D50C8A67A3A7360())
			{
				if (unk_0xE721C39090341063())
				{
					*bParam0 = 0;
				}
				else
				{
					func_184(bParam0, 1, 1);
					bParam0->f_40 = unk_0x9663D280C0703F72();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x2B2BCE4A0580EF40() > 0)
				{
					func_57(bParam0, 4);
				}
				else
				{
					func_184(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x34C049539810DC4B())
			{
				func_59();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_184(bParam0, 1, 1);
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
						if (unk_0xEF4192C98571132D() != 0)
						{
							unk_0x2F698EF7465EAD63();
						}
						if (unk_0x8BE4F9E02AC5E613(bParam0->f_7))
						{
							func_5(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_59();
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
	struct<86> Var5;
	int iVar91;
	
	iVar0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(iVar0, "mission");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "gen");
	if (func_66())
	{
		if (func_53(unk_0x7A6AA45CF8A9ADAD(bParam0->f_7)))
		{
			if (unk_0xEF4192C98571132D() != 0)
			{
				unk_0x2F698EF7465EAD63();
			}
			return;
		}
	}
	if ((unk_0x2E3E2CC20DBC563B(iVar2, "type") == 0 && unk_0x2E3E2CC20DBC563B(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xEF4192C98571132D() != 0)
		{
			unk_0x2F698EF7465EAD63();
		}
		return;
	}
	if (Global_262145.f_6063)
	{
		if (unk_0x2E3E2CC20DBC563B(iVar2, "type") == 0)
		{
			if (unk_0x2E3E2CC20DBC563B(iVar2, "subtype") == 1 || unk_0x2E3E2CC20DBC563B(iVar2, "subtype") == 7)
			{
				if (unk_0xEF4192C98571132D() != 0)
				{
					unk_0x2F698EF7465EAD63();
				}
				return;
			}
			iVar3 = unk_0x2E3E2CC20DBC563B(iVar2, "optbs");
			if (unk_0x889D01384B54BCE3(iVar3, 4) || unk_0x889D01384B54BCE3(iVar3, 12))
			{
				if (unk_0xEF4192C98571132D() != 0)
				{
					unk_0x2F698EF7465EAD63();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		Global_794538.f_2 = 0;
		Global_794538.f_109611 = 0;
		func_52();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794538.f_109626[iVar4] = 0;
			Global_794538.f_109612[iVar4] = 0;
			iVar4++;
		}
		if (func_49())
		{
			func_48(1);
			func_48(0);
			func_46(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794538.f_4[bParam0->f_9 /*86*/] = { Var5 };
	if (!func_66())
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_4 = unk_0xD032DF018B32DA57(bParam0->f_7, 0);
		Global_794538.f_4[bParam0->f_9 /*86*/].f_67 = func_45(bParam0->f_7);
		Global_794538.f_4[bParam0->f_9 /*86*/].f_66 = unk_0xD032DF018B32DA57(bParam0->f_7, Global_794538.f_4[bParam0->f_9 /*86*/].f_67);
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_5 = unk_0xFC772602EE69BB14(bParam0->f_7);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { func_44(iVar2, "start") };
	if (unk_0x77DBDA8A5753BCA3(iVar2, "optbs") == 2)
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_76 = unk_0x2E3E2CC20DBC563B(iVar2, "optbs");
	}
	unk_0x29DB79DD4D939B38(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 15);
	unk_0x29DB79DD4D939B38(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 18);
	unk_0x29DB79DD4D939B38(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 19);
	unk_0x29DB79DD4D939B38(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 28);
	unk_0x29DB79DD4D939B38(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 27);
	Global_794538.f_4[bParam0->f_9 /*86*/].f_59 = { func_44(iVar2, "cam") };
	Global_794538.f_4[bParam0->f_9 /*86*/].f_62 = { func_43(iVar2) };
	if (!func_66())
	{
		if (unk_0x9B9B44C84F93C4BE(unk_0xFC772602EE69BB14(bParam0->f_7)))
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_54 = unk_0x5F7A562FED41038A(bParam0->f_7);
		}
		else
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_54 = -1;
		}
	}
	if (unk_0x77DBDA8A5753BCA3(iVar2, "mgrk") == 2)
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_7 = unk_0x2E3E2CC20DBC563B(iVar2, "mgrk");
	}
	if (unk_0x77DBDA8A5753BCA3(iVar2, "mght") == 2)
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_8 = unk_0x2E3E2CC20DBC563B(iVar2, "mght");
	}
	Global_794538.f_96153[bParam0->f_9 /*12*/].f_10 = unk_0x2E3E2CC20DBC563B(iVar2, "cncmbs");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_69 = unk_0x2E3E2CC20DBC563B(iVar2, "min");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_71 = unk_0x2E3E2CC20DBC563B(iVar2, "num");
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_71 == -1)
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_71 = 30;
	}
	StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_22), unk_0xB442B874B3DFD617(bParam0->f_7), 64);
	Global_794538.f_4[bParam0->f_9 /*86*/].f_65 = unk_0x2E3E2CC20DBC563B(iVar2, "type");
	if (func_66())
	{
		StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_6), func_42(), 64);
	}
	else
	{
		StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_6), unk_0xBF41F092B724D4FE(bParam0->f_7), 64);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_70 = unk_0x2E3E2CC20DBC563B(iVar2, "rank");
	Global_794538.f_96153[bParam0->f_9 /*12*/] = unk_0x2E3E2CC20DBC563B(iVar2, "tnum");
	if (!func_66())
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_73 = func_41(unk_0xAB84FF2518A8FC7E(bParam0->f_7, 0), unk_0xF40A469CD3E69171(bParam0->f_7, 0));
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_3 = unk_0xF40A469CD3E69171(bParam0->f_7, 0);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_75 = unk_0x2E3E2CC20DBC563B(iVar2, "charcon");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_77 = unk_0x2E3E2CC20DBC563B(iVar2, "ltm");
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 6 && !bParam1)
	{
		if (Global_965147.f_598 < 85)
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_68 = Global_965147.f_598;
			Global_965147[Global_794538.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { func_44(iVar2, "area") };
			if (unk_0x77DBDA8A5753BCA3(iVar2, "rad") == 2)
			{
				Global_965147.f_512[Global_794538.f_4[bParam0->f_9 /*86*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar2, "rad"));
			}
			else
			{
				Global_965147.f_512[Global_794538.f_4[bParam0->f_9 /*86*/].f_68] = unk_0xA6F2F8B77922BC0C(iVar2, "rad");
			}
			Global_965147.f_256[Global_794538.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { Global_794538.f_4[bParam0->f_9 /*86*/].f_56 };
			Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { Global_794538.f_4[bParam0->f_9 /*86*/].f_59 };
			Global_965147.f_598++;
		}
	}
	else
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_68 = unk_0x2E3E2CC20DBC563B(iVar2, "subtype");
	}
	StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/]), unk_0x7A6AA45CF8A9ADAD(bParam0->f_7), 24);
	iVar91 = unk_0xB793F1A0B6CC4AE1(&(Global_794538.f_4[bParam0->f_9 /*86*/]));
	Global_794538.f_96153[bParam0->f_9 /*12*/].f_2 = iVar91;
	func_40(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, &(Global_794538.f_4[bParam0->f_9 /*86*/].f_71), &(Global_794538.f_4[bParam0->f_9 /*86*/].f_69));
	if (func_66())
	{
		if (unk_0x9BA82E09A986BA4B(unk_0x7A6AA45CF8A9ADAD(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 13);
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 < 13 && !bParam1)
	{
		if (Global_794538.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
		{
			Global_794538.f_109612[Global_794538.f_4[bParam0->f_9 /*86*/].f_65]++;
			if (func_39(bParam0->f_9))
			{
				Global_794538.f_109612[7]++;
			}
			else if (func_38(bParam0->f_9))
			{
				Global_794538.f_109612[4]++;
			}
			else if (func_37(bParam0->f_9))
			{
				Global_794538.f_109612[10]++;
			}
		}
	}
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
	}
	if (!func_66())
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_1 = unk_0xB793F1A0B6CC4AE1(unk_0x07BF3B5301861BC5(bParam0->f_7));
		if ((Global_794538.f_109611 < 5 && Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 0) && Global_794538.f_4[bParam0->f_9 /*86*/].f_68 == 1)
		{
			Global_794538.f_96153[bParam0->f_9 /*12*/].f_9 = Global_794538.f_109611;
			StringCopy(&(Global_794538.f_109580[Global_794538.f_109611 /*6*/]), unk_0x07BF3B5301861BC5(bParam0->f_7), 24);
			Global_794538.f_109611++;
		}
		func_31(Global_794538.f_96153[bParam0->f_9 /*12*/].f_1, &(Global_794538.f_4[bParam0->f_9 /*86*/].f_76));
		if (bParam1)
		{
			if (unk_0x8C90DCCD81217443(bParam0->f_7))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 14);
			}
		}
		else
		{
			if ((((unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 15) || unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 18)) || unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 19)) || unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 28)) || unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 27))
			{
				Global_794538.f_109612[11]++;
			}
			if (unk_0x8C90DCCD81217443(bParam0->f_7))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 14);
				if (unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 1) || Global_794538.f_4[bParam0->f_9 /*86*/].f_68 == 2)
				{
					Global_794538.f_109612[9]++;
				}
				if (Global_794538.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
				{
					if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 < 13)
					{
						Global_794538.f_109626[Global_794538.f_4[bParam0->f_9 /*86*/].f_65]++;
					}
				}
				Global_794538.f_96153[bParam0->f_9 /*12*/].f_6 = unk_0xEA23E9BC974900CD(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		if (func_49())
		{
			func_29(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 14), Global_794538.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_27(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_25(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_75, Global_794538.f_4[bParam0->f_9 /*86*/].f_70, unk_0x889D01384B54BCE3(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 14));
			func_6(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_75, Global_794538.f_4[bParam0->f_9 /*86*/].f_70);
		}
	}
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 6)
	{
		Global_965746[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794538.f_2++;
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
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
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = iParam1;
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
		unk_0x680350124CC21957(iVar0, iParam1, 1);
	}
}

int func_10(int iParam0)
{
	if (Global_1336370)
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
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	if (func_19(unk_0x1788E93557766241()) < iParam4)
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_23(-1)];
			}
			else if (func_22(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_23(-1)];
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
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
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
	
	if (func_49())
	{
		if (iParam0 == 0)
		{
			if ((iParam1 != 6 && iParam1 != 5) && iParam1 != 4)
			{
				if (func_19(unk_0x1788E93557766241()) < iParam2)
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
	
	if (!func_49())
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
			if (func_19(unk_0x1788E93557766241()) < iParam3)
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

void func_31(int iParam0, var uParam1)
{
	if (func_36(iParam0))
	{
		unk_0xD0E2BFCE93AE3ABD(uParam1, 15);
	}
	else if (func_35(iParam0))
	{
		unk_0xD0E2BFCE93AE3ABD(uParam1, 18);
	}
	else if (func_34(iParam0))
	{
		unk_0xD0E2BFCE93AE3ABD(uParam1, 19);
	}
	else if (func_33(iParam0))
	{
		unk_0xD0E2BFCE93AE3ABD(uParam1, 28);
	}
	else if (func_32(iParam0))
	{
		unk_0xD0E2BFCE93AE3ABD(uParam1, 27);
	}
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7270[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7262[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7257 || iParam0 == Global_262145.f_7258) || iParam0 == Global_262145.f_7259) || iParam0 == Global_262145.f_7260) || iParam0 == Global_262145.f_7261)
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7252 || iParam0 == Global_262145.f_7253) || iParam0 == Global_262145.f_7254) || iParam0 == Global_262145.f_7255) || iParam0 == Global_262145.f_7256)
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7245 || iParam0 == Global_262145.f_7246) || iParam0 == Global_262145.f_7247) || iParam0 == Global_262145.f_7248) || iParam0 == Global_262145.f_7249) || iParam0 == Global_262145.f_7250) || iParam0 == Global_262145.f_7251)
	{
		return 1;
	}
	return 0;
}

bool func_37(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_794538.f_4[iParam0 /*86*/].f_76, 3);
}

bool func_38(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_794538.f_4[iParam0 /*86*/].f_76, 10);
}

bool func_39(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_794538.f_4[iParam0 /*86*/].f_76, 7);
}

void func_40(int iParam0, var uParam1, var uParam2)
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

int func_41(float fParam0, int iParam1)
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

var func_42()
{
	return unk_0x69C910B9EE514763("CREATOR_RSC");
}

Vector3 func_43(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x77DBDA8A5753BCA3(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0xA6F2F8B77922BC0C(iParam0, "camp");
	}
	else if (unk_0x77DBDA8A5753BCA3(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iParam0, "camp"));
	}
	if (unk_0x77DBDA8A5753BCA3(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0xA6F2F8B77922BC0C(iParam0, "camh");
	}
	else if (unk_0x77DBDA8A5753BCA3(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_44(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x77DBDA8A5753BCA3(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x7BC3CDE3564C2FE3(iParam0, sParam1) };
	}
	else if (unk_0x77DBDA8A5753BCA3(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x8140B477AA55A05E(iParam0, sParam1);
		if (unk_0x77DBDA8A5753BCA3(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0xA6F2F8B77922BC0C(iVar3, "x");
		}
		if (unk_0x77DBDA8A5753BCA3(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0xA6F2F8B77922BC0C(iVar3, "y");
		}
		if (unk_0x77DBDA8A5753BCA3(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0xA6F2F8B77922BC0C(iVar3, "z");
		}
	}
	return Var0;
}

int func_45(int iParam0)
{
	if (unk_0xAECC9D1580933D2F(iParam0))
	{
		return 2;
	}
	else if (unk_0xF1DE161D838DFEFE(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_46(int iParam0)
{
	func_47(joaat("mpply_big_feed_init"), iParam0);
}

void func_47(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xA65D74B65C28C5D7(iVar0, uParam1, 1);
	}
}

void func_48(bool bParam0)
{
	if (!func_49())
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

int func_49()
{
	if (func_51() && func_50(0))
	{
		return 1;
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_51()
{
	return func_50(func_24() + 1);
}

void func_52()
{
	int iVar0;
	
	Global_965147.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_965147[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_965147.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_965147.f_512[iVar0] = 0f;
		iVar0++;
	}
}

int func_53(char* sParam0)
{
	if ((((((((((((((((unk_0x9BA82E09A986BA4B(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x9BA82E09A986BA4B(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x9BA82E09A986BA4B(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x9BA82E09A986BA4B(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x9BA82E09A986BA4B(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x9BA82E09A986BA4B(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x9BA82E09A986BA4B(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x9BA82E09A986BA4B(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x9BA82E09A986BA4B(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x9BA82E09A986BA4B(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x9BA82E09A986BA4B(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x9BA82E09A986BA4B(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x9BA82E09A986BA4B(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x9BA82E09A986BA4B(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x9BA82E09A986BA4B(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x9BA82E09A986BA4B(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x9BA82E09A986BA4B(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_54(int iParam0)
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

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[16];
	int iVar19;
	
	if (Global_262145.f_3747 == 1)
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
				if (Global_786484.f_3012[iVar1 /*12*/].f_1 == unk_0xB793F1A0B6CC4AE1(&(Global_2394712[iVar0 /*6*/])))
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
		Global_794538.f_4[(1100 + iVar0) /*86*/] = { Global_786484.f_1[iVar2[iVar0] /*86*/] };
		Global_794538.f_96153[(1100 + iVar0) /*12*/] = { Global_786484.f_3012[iVar2[iVar0] /*12*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1690511.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3433[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_56(1);
	return 1;
}

void func_56(int iParam0)
{
	Global_1690511.f_1784 = iParam0;
}

void func_57(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_58()
{
	struct<86> Var0;
	int iVar86;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar86 = 1100;
	while (iVar86 <= 1117)
	{
		Global_794538.f_4[iVar86 /*86*/] = { Var0 };
		iVar86++;
	}
}

void func_59()
{
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
	}
}

void func_60()
{
	if (func_66())
	{
		unk_0x36142FE3C3CE79DB();
	}
	else
	{
		unk_0x16DC9E28AB7AE83A();
	}
}

bool func_61()
{
	return Global_2435030.f_4;
}

int func_62()
{
	if (unk_0xCF2CECF28900F755())
	{
		return 1;
	}
	else if (unk_0x57626C402F58B179())
	{
		return 1;
	}
	else if (unk_0x7C9A64C089AF7696())
	{
		return 1;
	}
	return 0;
}

int func_63()
{
	if (!func_64())
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	if (func_65())
	{
		return 0;
	}
	if (unk_0xECA1708601B2AF8E() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_65()
{
	return Global_2435628;
}

bool func_66()
{
	return Global_1572867.f_4;
}

bool func_67()
{
	return Global_2394650.f_2;
}

int func_68(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_62())
			{
				return 0;
			}
			func_60();
			func_59();
			if (func_66())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0xAE648B034443E9CB(0);
			}
			func_57(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x5EEF8014A7C1BB2F(sParam1, func_54(0)))
			{
				func_57(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x0D50C8A67A3A7360())
			{
				bParam0->f_40 = unk_0x9663D280C0703F72();
				if (unk_0xE721C39090341063())
				{
				}
				else
				{
					func_184(bParam0, 1, 1);
					bParam0->f_40 = unk_0x9663D280C0703F72();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x2B2BCE4A0580EF40() > 0)
				{
					if (unk_0x8BE4F9E02AC5E613(0))
					{
						func_69(sParam2, 0);
						func_184(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_184(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(iVar0, "mission");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "gen");
	StringCopy(sParam0, unk_0x7A6AA45CF8A9ADAD(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0xBF41F092B724D4FE(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0xB442B874B3DFD617(iParam1), 64);
	sParam0->f_56 = { func_44(iVar2, "start") };
	sParam0->f_59 = { func_44(iVar2, "cam") };
	sParam0->f_62 = { func_43(iVar2) };
	sParam0->f_65 = unk_0x2E3E2CC20DBC563B(iVar2, "type");
	sParam0->f_68 = unk_0x2E3E2CC20DBC563B(iVar2, "subtype");
	sParam0->f_78 = unk_0x2E3E2CC20DBC563B(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x2E3E2CC20DBC563B(iVar2, "min");
	sParam0->f_70 = unk_0x2E3E2CC20DBC563B(iVar2, "rank");
	sParam0->f_71 = unk_0x2E3E2CC20DBC563B(iVar2, "num");
	sParam0->f_73 = func_41(unk_0xAB84FF2518A8FC7E(iParam1, 0), unk_0xF40A469CD3E69171(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x2E3E2CC20DBC563B(iVar2, "charcon");
	if (func_70() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4719)
		{
			sParam0->f_71 = Global_262145.f_4719;
		}
		if (sParam0->f_69 > Global_262145.f_4719)
		{
			sParam0->f_69 = Global_262145.f_4719;
		}
	}
	if (!func_66())
	{
		iVar3 = unk_0xFC772602EE69BB14(iParam1);
		if (unk_0x9B9B44C84F93C4BE(iVar3))
		{
			sParam0->f_54 = unk_0x5F7A562FED41038A(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x77DBDA8A5753BCA3(iVar2, "ltm") == 2)
	{
		sParam0->f_77 = unk_0x2E3E2CC20DBC563B(iVar2, "ltm");
	}
	unk_0xD0E2BFCE93AE3ABD(&(sParam0->f_76), 13);
	func_59();
}

int func_70()
{
	return Global_24446;
}

bool func_71()
{
	return Global_2394650.f_1;
}

void func_72()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394650 = { Var0 };
	StringCopy(&(Global_2394650.f_30), "", 64);
	StringCopy(&(Global_2394650.f_46), "", 64);
	StringCopy(&(Global_2394650.f_15), "", 32);
}

void func_73()
{
	Global_2435030.f_8 = 0;
	Global_2435030.f_7 = 0;
}

int func_74(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
		if (!unk_0x889D01384B54BCE3(*uParam2, 2))
		{
		}
		unk_0xD0E2BFCE93AE3ABD(uParam2, 2);
		return 1;
	}
	if ((func_181() && func_180()) || func_179())
	{
		if (!unk_0x889D01384B54BCE3(*uParam2, 2))
		{
		}
		unk_0xD0E2BFCE93AE3ABD(uParam2, 2);
		unk_0xD0E2BFCE93AE3ABD(uParam2, 1);
		unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0x889D01384B54BCE3(*uParam2, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_177())
		{
			if (unk_0x889D01384B54BCE3(*uParam2, 2))
			{
				unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
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
		if (func_61())
		{
			return 0;
		}
	}
	if (!unk_0x889D01384B54BCE3(*uParam2, 2))
	{
		if (!unk_0x889D01384B54BCE3(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_168(1, 1, bParam11);
			}
			unk_0xD0E2BFCE93AE3ABD(uParam2, 1);
			func_184(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_88(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_87() || Global_1604248 == 31) || Global_1604248 == 6) || Global_1604248 == 4)
			{
				if (Global_1604248.f_19 < 1)
				{
					Global_1604248.f_19 = 1;
				}
				if (Global_1604248.f_18 < 1)
				{
					Global_1604248.f_18 = 1;
				}
				if (!func_86())
				{
					func_85();
				}
			}
			else if (Global_1604248 == 1)
			{
				Global_1336560.f_4 = 99;
				Global_1336560.f_6 = Global_1604248.f_40;
				Global_1336560.f_7 = Global_1604248.f_33513;
				Global_1336560.f_9 = Global_1604248.f_27607;
				Global_1336560.f_11 = Global_1604248.f_41;
				Global_1336560.f_12 = Global_1604248.f_43;
				Global_1336560.f_13 = Global_1604248.f_45;
				Global_1336560.f_14 = Global_1604248.f_44;
				Global_1336560.f_16 = Global_1604248.f_16;
				Global_1336560.f_5 = Global_1604248.f_38;
				Global_1336560.f_10 = Global_1604248.f_51;
			}
			else if (func_84())
			{
				Global_2474289.f_7 = 9901;
				Global_2474289.f_8 = Global_1604248.f_27038 + 1;
				if (func_83(Global_1604248.f_23549))
				{
					Global_1604248.f_23549 = { Global_1604248.f_55 };
				}
			}
			unk_0xD0E2BFCE93AE3ABD(uParam2, 2);
			unk_0x29DB79DD4D939B38(uParam2, 1);
			unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
			if (*uParam0)
			{
				func_82();
				func_81();
				if (func_80())
				{
					func_77(Global_1604248.f_14);
				}
				Global_1604248.f_58890 = 1;
			}
			else
			{
				func_182();
			}
			if (!func_76())
			{
				func_75();
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
		unk_0xD0E2BFCE93AE3ABD(uParam2, 3);
		if (Global_1604248.f_58890)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_75()
{
	Global_2428577.f_26.f_49 = 1;
}

int func_76()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x06771AF7795B3ECF(&(Global_1604248.f_58540[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_77(int iParam0)
{
	if (!func_79())
	{
		unk_0x2D18417FEDDDA519(2);
		unk_0xFF92C248DC168313(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x917EB04C65424128((iParam0 / 2));
		func_78();
	}
}

void func_78()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2428577.f_2), 3);
}

bool func_79()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_2, 3);
}

bool func_80()
{
	return unk_0x889D01384B54BCE3(Global_2429337.f_1.f_2807, 8);
}

void func_81()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 4);
}

void func_82()
{
	unk_0xD0E2BFCE93AE3ABD(&Global_2428577, 28);
}

int func_83(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_84()
{
	if (Global_1604248 == 2 || Global_1604248 == 8)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	Global_1681434.f_5 = 0;
	Global_1681434.f_11 = -1;
}

int func_86()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1604248.f_19)
	{
		iVar1 = 0;
		while (iVar1 < Global_1604248.f_19)
		{
			if (Global_1604248.f_26[iVar0] != Global_1604248.f_26[iVar1])
			{
				return 0;
			}
			else if (Global_1604248.f_21[iVar0] != Global_1604248.f_21[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_87()
{
	if ((((((Global_1604248 == 0 || Global_1604248 == 4) || Global_1604248 == 6) || Global_1604248 == 3) || Global_1604248 == 31) || Global_1604248.f_2 == 6) || Global_1604248.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_88(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)
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
		if (func_61() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_66() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_63())
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
			uParam0->f_24 = func_167(1);
			uParam0->f_25 = func_165(1);
			if (func_62())
			{
				return 0;
			}
			func_60();
			func_59();
			if (func_66() || bParam9)
			{
				unk_0xAE648B034443E9CB(1);
			}
			else
			{
				unk_0xAE648B034443E9CB(0);
			}
			func_163();
			if (bParam4)
			{
				func_57(uParam0, 11);
			}
			else
			{
				func_57(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_66() || bParam9)
			{
				if (unk_0x7267C58CE68D2146(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1604248.f_58894 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1604248.f_58534), sParam1, 24);
						}
						func_124(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_57(uParam0, 9);
						*uParam0 = 1;
						func_73();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_967025.f_42), sParam1, 24);
							Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_967025.f_12 };
							func_123(&iVar1, &uVar0, &Global_967025);
							if (Global_967025.f_65 == 0)
							{
								func_184(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_59();
								func_73();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_965784.f_42), sParam1, 24);
							Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_965784.f_12 };
							func_123(&iVar1, &uVar0, &Global_965784);
							uParam0->f_8 = 0;
							if (Global_965784.f_65 == 0)
							{
								func_184(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_59();
								func_73();
								return 1;
							}
						}
						func_59();
						unk_0x36142FE3C3CE79DB();
						unk_0xAE648B034443E9CB(1);
						func_122(uParam0);
						func_57(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_73();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_73();
					func_59();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_54(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0xA25D1FF2EC7A39E9(uParam0->f_5);
				func_57(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0xA8F92E86994864AD(sParam1, 1, func_54(iParam2)))
				{
					func_57(uParam0, 3);
				}
			}
			else if (unk_0x5EEF8014A7C1BB2F(sParam1, func_54(iParam2)))
			{
				func_57(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x0D50C8A67A3A7360())
			{
				uParam0->f_40 = unk_0x9663D280C0703F72();
				if (unk_0xE721C39090341063())
				{
				}
				else
				{
					func_184(uParam0, 1, 1);
					uParam0->f_40 = unk_0x9663D280C0703F72();
					*uParam0 = 0;
					func_73();
					return 1;
				}
				if (unk_0x2B2BCE4A0580EF40() > 0)
				{
					if (!bParam12 && !func_120(uParam0->f_24, uParam0->f_25, unk_0xBF41F092B724D4FE(0), unk_0xEE811CB95F44D4AB(0)))
					{
						func_184(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_73();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0xA25D1FF2EC7A39E9(uParam0->f_5);
						func_57(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x8BE4F9E02AC5E613(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_967025.f_12), unk_0xB442B874B3DFD617(0), 64);
								StringCopy(&(Global_967025.f_36), unk_0x7A6AA45CF8A9ADAD(0), 24);
								StringCopy(&(Global_967025.f_42), sParam1, 24);
								Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_967025.f_12 };
								func_123(&iVar1, &uVar0, &Global_967025);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_965784.f_12), unk_0xB442B874B3DFD617(0), 64);
								StringCopy(&(Global_965784.f_36), unk_0x7A6AA45CF8A9ADAD(0), 24);
								StringCopy(&(Global_965784.f_42), sParam1, 24);
								Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_965784.f_12 };
								func_123(&iVar1, &uVar0, &Global_965784);
								uParam0->f_8 = 0;
							}
							func_59();
							func_57(uParam0, 10);
						}
						else
						{
							func_184(uParam0, 1, 1);
							*uParam0 = 0;
							func_73();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x8BE4F9E02AC5E613(0))
						{
							if (uParam0->f_16)
							{
								func_118(&iVar1, &uVar0, &Global_967025, iParam6);
								if (iParam6 == 1)
								{
									func_184(uParam0, 1, 1);
									*uParam0 = 1;
									func_73();
									return 1;
								}
								StringCopy(&(Global_967025.f_12), unk_0xB442B874B3DFD617(0), 64);
								StringCopy(&(Global_967025.f_36), unk_0x7A6AA45CF8A9ADAD(0), 24);
								StringCopy(&(Global_967025.f_42), sParam1, 24);
								Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_967025.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_118(&iVar1, &uVar0, &Global_965784, iParam6);
								if (iParam6 == 1)
								{
									func_184(uParam0, 1, 1);
									*uParam0 = 1;
									func_73();
									return 1;
								}
								StringCopy(&(Global_965784.f_12), unk_0xB442B874B3DFD617(0), 64);
								StringCopy(&(Global_965784.f_36), unk_0x7A6AA45CF8A9ADAD(0), 24);
								StringCopy(&(Global_965784.f_42), sParam1, 24);
								Global_1583725[unk_0x1788E93557766241() /*334*/].f_19 = { Global_965784.f_12 };
								uParam0->f_8 = 0;
							}
							func_59();
							func_57(uParam0, 10);
						}
						else
						{
							func_184(uParam0, 1, 1);
							*uParam0 = 0;
							func_73();
							return 1;
						}
					}
				}
				else
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					func_73();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xA3E0422818B30BB1(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0x6B2B2A9AA84D01C4();
				}
				if (unk_0x68EA4E72EFB97AD0(uParam0->f_5))
				{
					func_57(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_57(uParam0, 0);
					return 0;
				}
				else
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					func_73();
					return 1;
				}
			}
			else if (func_117() || func_116() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0x02BE7CB219E9E516("FMMC_DOWNLOAD");
					unk_0xCDAFCC561991EEFD(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_115())
			{
				return 0;
			}
			if (unk_0xB52ED7C156D542FB(uParam0->f_5))
			{
				if (unk_0x224BB453E15CBE5B(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_168(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1604248.f_58894 = 1;
							Global_1604248.f_58886 = 1;
							StringCopy(&(Global_1604248.f_58223), "", 64);
							StringCopy(&(Global_1604248.f_58270), "", 24);
							StringCopy(&(Global_1604248.f_58248), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1604248.f_58534), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1604248.f_58247 = unk_0xB793F1A0B6CC4AE1(unk_0x07BF3B5301861BC5(0));
							if (Global_1604248.f_58894 == 1 || Global_1604248.f_58894 == 2)
							{
								StringCopy(&(Global_1604248.f_58248), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1604248.f_58248), unk_0xBF41F092B724D4FE(0), 24);
							}
							StringCopy(&(Global_1604248.f_58270), unk_0xBF41F092B724D4FE(0), 24);
							Global_1604248.f_58894 = unk_0xEE811CB95F44D4AB(0);
							if ((Global_1604248.f_58894 == 0 || Global_1604248.f_58894 == 3) && unk_0xAF38ADBBC75E1584(0))
							{
								StringCopy(&(Global_1604248.f_58223), unk_0xF3E5891C26514A74(unk_0x1788E93557766241()), 64);
							}
							else if ((unk_0x9F979F481F18EB48() && (Global_1604248.f_58894 == 0 || Global_1604248.f_58894 == 3)) && func_114(&iVar33, &(Global_1604248.f_58270)))
							{
								StringCopy(&(Global_1604248.f_58223), unk_0xF3E5891C26514A74(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1604248.f_58223), unk_0x726A691D2BCEC697(0), 64);
							}
							Global_1604248.f_58554 = unk_0xF40A469CD3E69171(0, 0);
							Global_1604248.f_58888 = unk_0x5E4640A49F235737(0);
							uParam0->f_23 = func_45(0);
							Global_1604248.f_71949 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1604248.f_58534), unk_0x7A6AA45CF8A9ADAD(0), 24);
							}
							if (Global_1604248.f_58894 == 0 || Global_1604248.f_58894 == 3)
							{
								if ((unk_0x1CBA95B1BCC27195(0, &uVar4) && unk_0x6812E31A0CF4755C(&uVar4, 13)) && unk_0x765DD998E5AD03DC(&uVar4))
								{
									Var17 = { Global_1604248.f_58223 };
									func_113(1, Var17);
								}
								else
								{
									func_113(0, Var17);
								}
							}
							else
							{
								func_113(0, Var17);
							}
							Global_1604248.f_7 = func_41(unk_0xAB84FF2518A8FC7E(0, 0), unk_0xF40A469CD3E69171(0, 0));
							if (unk_0x8C90DCCD81217443(uParam0->f_7))
							{
								Global_1604248.f_58887 = unk_0xEA23E9BC974900CD(0);
								Global_1604248.f_58889 = 1;
							}
							else
							{
								Global_1604248.f_58887 = 0;
								Global_1604248.f_58889 = 0;
							}
							Global_1604248.f_58886 = unk_0xA8093A9B6F1A40DD(0);
							uParam0->f_34 = unk_0xFC772602EE69BB14(0);
							if (!func_66())
							{
								if (unk_0x9B9B44C84F93C4BE(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x5F7A562FED41038A(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1604248.f_58553 = uParam0->f_30;
							Global_2429337.f_3966.f_3 = unk_0x4714D63315071B1E(0, 0);
							Global_2429337.f_3966.f_2 = unk_0xABFE6374DBEC4F20(0, 0);
							if (Global_1604248.f_58894 == 1 || Global_1604248.f_58894 == 2)
							{
								StringCopy(&(Global_1604248.f_58223), func_42(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1604248.f_58534), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_66())
						{
							func_124(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_57(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_124(-1, bParam11, 0, 0);
						}
						if (func_110(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xEF4192C98571132D();
						iVar2 = unk_0x8140B477AA55A05E(iVar1, "mission");
						iVar3 = unk_0x8140B477AA55A05E(iVar2, "gen");
						StringCopy(&(Global_2422491.f_3135), unk_0xB442B874B3DFD617(0), 32);
						Global_2422491.f_3135.f_8 = unk_0x2E3E2CC20DBC563B(iVar3, "type");
						uParam0->f_17 = unk_0x8C90DCCD81217443(0);
						*uParam0 = 1;
						func_73();
						unk_0x8259BBD7E992582C(uParam0->f_5);
						func_59();
						return 1;
					}
					unk_0x8259BBD7E992582C(uParam0->f_5);
					func_59();
				}
				else if (iParam2 == 0)
				{
					func_184(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_73();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_184(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_73();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_124(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_110(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_108(uParam0, 0, bParam3, 0))
			{
				func_57(uParam0, 0);
				func_59();
				if ((((func_102(Global_1604248.f_58247) && func_87()) && !bParam9) && !unk_0x06771AF7795B3ECF(&(Global_1604248.f_58540[0 /*6*/]))) && (func_117() || (func_97() && !func_96())))
				{
					uParam0->f_8 = 0;
					func_57(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_45(0);
						uParam0->f_21 = unk_0xD032DF018B32DA57(0, uParam0->f_23);
					}
					func_95(&(uParam0->f_41), 0);
					func_57(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_184(uParam0, 1, 0);
					func_73();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0xA8F92E86994864AD(&(Global_1604248.f_58540[0 /*6*/]), 1, func_54(iParam2)))
			{
				func_57(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x0D50C8A67A3A7360())
			{
				uParam0->f_40 = unk_0x9663D280C0703F72();
				if (unk_0xE721C39090341063())
				{
				}
				else
				{
					func_184(uParam0, 1, 1);
					uParam0->f_40 = unk_0x9663D280C0703F72();
					*uParam0 = 0;
					func_73();
					return 1;
				}
				if (unk_0x2B2BCE4A0580EF40() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0xA25D1FF2EC7A39E9(uParam0->f_5);
					func_57(uParam0, 22);
				}
				else
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					func_73();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xA3E0422818B30BB1(uParam0->f_5))
			{
				if (unk_0x68EA4E72EFB97AD0(uParam0->f_5))
				{
					func_57(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_57(uParam0, 0);
					return 0;
				}
				else
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					func_73();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xB52ED7C156D542FB(uParam0->f_5))
			{
				if (unk_0x224BB453E15CBE5B(uParam0->f_5))
				{
					func_92();
					func_184(uParam0, 1, 0);
					Global_1603003 = 1;
					func_73();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_184(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_73();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0x889D01384B54BCE3(Global_1604248.f_6, 0))
			{
				if (bParam7)
				{
					if (func_91(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_184(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_73();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_184(uParam0, 1, 0);
					func_73();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_184(uParam0, 1, 1);
				func_73();
				return 1;
			}
			break;
		
		case 10:
			if (func_108(uParam0, 0, bParam3, iParam2))
			{
				func_59();
				func_57(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0xCC39C20DABFC2207(&(Global_967025.f_1144), Global_967025.f_65, func_54(0)))
				{
					func_57(uParam0, 12);
				}
			}
			else if (unk_0xCC39C20DABFC2207(&(Global_965784.f_1144), Global_965784.f_65, func_54(0)))
			{
				func_57(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x0D50C8A67A3A7360())
			{
				if (unk_0xE721C39090341063())
				{
				}
				else
				{
					func_184(uParam0, 1, 1);
					uParam0->f_40 = unk_0x9663D280C0703F72();
					*uParam0 = 0;
					func_73();
					return 1;
				}
				if (unk_0x2B2BCE4A0580EF40() > 0)
				{
					if (uParam0->f_16)
					{
						Global_967025.f_65 = unk_0x2B2BCE4A0580EF40();
					}
					else
					{
						Global_965784.f_65 = unk_0x2B2BCE4A0580EF40();
					}
					uParam0->f_8 = 0;
					func_184(uParam0, 0, bParam8);
					func_122(uParam0);
					func_57(uParam0, 13);
				}
				else
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					func_73();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_66())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_967025.f_65 - 1))
					{
						if (unk_0x7267C58CE68D2146(&(Global_967025.f_1144[uParam0->f_9 /*6*/])))
						{
							func_90(uParam0, &Global_967025);
							unk_0x36142FE3C3CE79DB();
						}
						uParam0->f_9++;
					}
					func_73();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_965784.f_65 - 1))
					{
						if (unk_0x7267C58CE68D2146(&(Global_965784.f_1144[uParam0->f_9 /*6*/])))
						{
							func_90(uParam0, &Global_965784);
							unk_0x36142FE3C3CE79DB();
						}
						uParam0->f_9++;
					}
					func_73();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_89(uParam0, &Global_967025))
				{
					if (uParam0->f_27)
					{
						func_184(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_73();
						return 1;
					}
					else
					{
						func_57(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_89(uParam0, &Global_965784))
			{
				if (uParam0->f_27)
				{
					func_184(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_73();
					return 1;
				}
				else
				{
					func_57(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_57(uParam0, 0);
			func_59();
			func_184(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_73();
			return 1;
			break;
	}
	return 0;
}

int func_89(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x8BE4F9E02AC5E613(uParam0->f_7))
		{
			if (!func_120(uParam0->f_24, uParam0->f_25, unk_0xBF41F092B724D4FE(0), unk_0xEE811CB95F44D4AB(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_90(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_59();
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

void func_90(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(iVar0, "mission");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "gen");
	uParam1->f_71[uParam0->f_9 /*67*/].f_45 = { func_44(iVar2, "start") };
	if (func_66())
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_12), unk_0xC738F260E0A516F4(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_12), unk_0xB442B874B3DFD617(uParam0->f_7), 64);
	}
	if (!func_66())
	{
		uParam1->f_71[uParam0->f_9 /*67*/].f_44 = unk_0x5F7A562FED41038A(uParam0->f_7);
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_66 = unk_0xEE811CB95F44D4AB(uParam0->f_7);
	uParam1->f_71[uParam0->f_9 /*67*/].f_56 = unk_0x2E3E2CC20DBC563B(iVar2, "min");
	uParam1->f_71[uParam0->f_9 /*67*/].f_59 = unk_0x2E3E2CC20DBC563B(iVar2, "tnum");
	uParam1->f_71[uParam0->f_9 /*67*/].f_60 = unk_0x2E3E2CC20DBC563B(iVar2, "num");
	uParam1->f_71[uParam0->f_9 /*67*/].f_54 = unk_0x2E3E2CC20DBC563B(iVar2, "type");
	uParam1->f_71[uParam0->f_9 /*67*/].f_55 = unk_0x2E3E2CC20DBC563B(iVar2, "subtype");
	uParam1->f_71[uParam0->f_9 /*67*/].f_48 = { func_44(iVar2, "cam") };
	uParam1->f_71[uParam0->f_9 /*67*/].f_51 = { func_43(iVar2) };
	uParam1->f_71[uParam0->f_9 /*67*/].f_57 = func_45(uParam0->f_7);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_6), unk_0x726A691D2BCEC697(uParam0->f_7), 24);
	if (!func_66())
	{
		uParam1->f_71[uParam0->f_9 /*67*/].f_61 = func_41(unk_0xAB84FF2518A8FC7E(uParam0->f_7, 0), unk_0xF40A469CD3E69171(uParam0->f_7, 0));
	}
	if (func_70() != 2)
	{
		if (uParam1->f_71[uParam0->f_9 /*67*/].f_60 > Global_262145.f_4719)
		{
			uParam1->f_71[uParam0->f_9 /*67*/].f_60 = Global_262145.f_4719;
		}
		if (uParam1->f_71[uParam0->f_9 /*67*/].f_56 > Global_262145.f_4719)
		{
			uParam1->f_71[uParam0->f_9 /*67*/].f_56 = Global_262145.f_4719;
		}
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_58 = unk_0x2E3E2CC20DBC563B(iVar2, "rank");
	func_40(uParam1->f_71[uParam0->f_9 /*67*/].f_54, &(uParam1->f_71[uParam0->f_9 /*67*/].f_60), &(uParam1->f_71[uParam0->f_9 /*67*/].f_56));
	if (uParam1->f_6 < uParam1->f_71[uParam0->f_9 /*67*/].f_56)
	{
		uParam1->f_6 = uParam1->f_71[uParam0->f_9 /*67*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_71[uParam0->f_9 /*67*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_71[uParam0->f_9 /*67*/].f_60;
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_65 = 1;
	unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_71[uParam0->f_9 /*67*/].f_64), 13);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/]), unk_0x7A6AA45CF8A9ADAD(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
	}
	if (!func_66())
	{
		StringCopy(&(uParam1->f_1144[uParam0->f_9 /*6*/]), unk_0x7A6AA45CF8A9ADAD(uParam0->f_9), 24);
		if (unk_0x8C90DCCD81217443(uParam0->f_9))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_71[uParam0->f_9 /*67*/].f_64), 14);
			if (unk_0xEF4192C98571132D() != 0)
			{
				unk_0x2F698EF7465EAD63();
			}
		}
	}
}

int func_91(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x3C4C5E91F36BB7CF(*uParam0);
			}
			unk_0x75944F0330DC1EEE();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x0ED38E03530994DA(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xC60BB60514FABC1F(unk_0xB8DAD3996E254F6D(0, uParam3)))
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
							unk_0x3C4C5E91F36BB7CF(*uParam0);
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

void func_92()
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
	
	iVar0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(iVar0, "mission");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "endcon");
	iVar3 = unk_0x8140B477AA55A05E(iVar1, "ene");
	iVar4 = unk_0x2E3E2CC20DBC563B(iVar3, "no");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar3, "loc");
	iVar6 = unk_0x8140B477AA55A05E(iVar1, "goto");
	iVar7 = unk_0x2E3E2CC20DBC563B(iVar6, "no");
	iVar8 = unk_0x8140B477AA55A05E(iVar1, "veh");
	iVar9 = unk_0x2E3E2CC20DBC563B(iVar8, "no");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar8, "loc");
	iVar11 = unk_0x8140B477AA55A05E(iVar1, "obj");
	iVar12 = unk_0x2E3E2CC20DBC563B(iVar11, "no");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1604248.f_19 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1603003.f_1[iVar14] = unk_0xE00F2F3EC50DF5F9(unk_0xBC3DFFCED0175B93(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0xBC3DFFCED0175B93(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0xBC3DFFCED0175B93(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0xBC3DFFCED0175B93(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1603003.f_1[iVar14] - 1))
			{
				Global_1603003.f_6[iVar14 /*18*/][iVar15] = unk_0xE00F2F3EC50DF5F9(uVar25[iVar14], iVar15);
				Global_1603003.f_79[iVar14 /*18*/][iVar15] = unk_0xE00F2F3EC50DF5F9(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1603003.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xE2B9F5A91729B995(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1603003.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1604248.f_19 - 1))
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
		while (iVar14 < Global_1603003.f_1[iVar80])
		{
			if ((!unk_0x889D01384B54BCE3(Global_1603003.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0x889D01384B54BCE3(Global_1603003.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0xBC3DFFCED0175B93(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0xBC3DFFCED0175B93(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0xE00F2F3EC50DF5F9(uVar60[iVar80], iVar14);
			iVar193 = unk_0xE00F2F3EC50DF5F9(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x889D01384B54BCE3(Global_1603003.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x889D01384B54BCE3(Global_1603003.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_94(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1692444.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x2E7CBE121E5B118F(iVar10, iVar14) };
					Global_1692444.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1692444.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_93(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0xBC3DFFCED0175B93(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0xBC3DFFCED0175B93(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0xE00F2F3EC50DF5F9(uVar70[iVar80], iVar14);
			iVar193 = unk_0xE00F2F3EC50DF5F9(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x889D01384B54BCE3(Global_1603003.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x889D01384B54BCE3(Global_1603003.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_94(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1692444.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x2E7CBE121E5B118F(iVar13, iVar14) };
					Global_1692444.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1692444.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_93(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0xBC3DFFCED0175B93(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0xBC3DFFCED0175B93(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0xBC3DFFCED0175B93(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0xE00F2F3EC50DF5F9(uVar50[iVar80], iVar14);
			iVar15 = unk_0xE00F2F3EC50DF5F9(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x889D01384B54BCE3(Global_1603003.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x889D01384B54BCE3(Global_1603003.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_94(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1692444.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x2E7CBE121E5B118F(uVar55[iVar80], iVar14) };
					Global_1692444.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1692444.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_93(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0xBC3DFFCED0175B93(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0xBC3DFFCED0175B93(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0xE00F2F3EC50DF5F9(uVar40[iVar80], iVar14);
			iVar15 = unk_0xE00F2F3EC50DF5F9(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x889D01384B54BCE3(Global_1603003.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x889D01384B54BCE3(Global_1603003.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_94(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1692444.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0x2E7CBE121E5B118F(iVar5, iVar14) };
					Global_1692444.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1692444.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1692444.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1692444.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_93(iVar15, 2) };
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
				if (Global_1692444.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1692444.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1692444.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1692444.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1692444.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xEF4192C98571132D() != 0)
	{
		unk_0x2F698EF7465EAD63();
	}
}

Vector3 func_93(int iParam0, int iParam1)
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

int func_94(int iParam0, int iParam1, int iParam2)
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

void func_95(var uParam0, bool bParam1)
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
		unk_0x3C4C5E91F36BB7CF(*uParam0);
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

bool func_96()
{
	return Global_2428577.f_593;
}

int func_97()
{
	if (((func_101() || func_100()) || func_99()) || func_98())
	{
		return 1;
	}
	return 0;
}

bool func_98()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 1);
}

bool func_99()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 2);
}

bool func_100()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 20);
}

var func_101()
{
	return Global_2428577.f_572;
}

int func_102(int iParam0)
{
	if ((((func_107(iParam0) || func_106(iParam0)) || func_105(iParam0)) || func_104(iParam0)) || func_103(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_103(int iParam0)
{
	return iParam0 == Global_262145.f_6881;
}

bool func_104(int iParam0)
{
	return iParam0 == Global_262145.f_6875;
}

bool func_105(int iParam0)
{
	return iParam0 == Global_262145.f_6869;
}

bool func_106(int iParam0)
{
	return iParam0 == Global_262145.f_6862;
}

bool func_107(int iParam0)
{
	return iParam0 == Global_262145.f_6857;
}

int func_108(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_63())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_66())
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
			func_59();
			func_109();
			Global_1681394.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1681419.f_5 = 0;
				Global_1681419.f_4 = 0;
				Global_1681419.f_1 = 0;
				Global_1681419.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1681419.f_5 = 0;
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
			if (unk_0xE39EC25645C94660(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xEF4192C98571132D();
					Global_1681425 = unk_0x2E3E2CC20DBC563B(iVar0, "pt");
					Global_1681425.f_1 = unk_0x2E3E2CC20DBC563B(iVar0, "pu");
					Global_1681425.f_2 = unk_0x2E3E2CC20DBC563B(iVar0, "ft");
					Global_1681425.f_3 = unk_0x2E3E2CC20DBC563B(iVar0, "fu");
					Global_1681425.f_4 = unk_0x2E3E2CC20DBC563B(iVar0, "qt");
					Global_1681425.f_5 = unk_0x2E3E2CC20DBC563B(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xEF4192C98571132D();
					Global_1681394.f_10 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "dt"));
					Global_1681394.f_11 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "du"));
					Global_1681394.f_9 = (Global_1681394.f_10 / Global_1681394.f_11);
					Global_1681394.f_13 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "pt"));
					Global_1681394.f_14 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "pu"));
					Global_973714 = unk_0xF2DB717A73826179(Global_1681394.f_14);
					Global_1681394.f_12 = (Global_1681394.f_13 / Global_1681394.f_14);
					Global_1681394.f_15 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "qt"));
					Global_1681394.f_17 = unk_0xBBDA792448DB5A89(unk_0x2E3E2CC20DBC563B(iVar0, "qu"));
					Global_1681394.f_16 = (Global_1681394.f_15 / Global_1681394.f_17);
				}
				if (unk_0xEF4192C98571132D() != 0)
				{
					unk_0x2F698EF7465EAD63();
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
			if (unk_0x8C90DCCD81217443(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x2479C11710850421(iParam1))
					{
						iVar0 = unk_0xEF4192C98571132D();
						if (iParam3 == 0)
						{
							Global_1681394 = unk_0x2E3E2CC20DBC563B(iVar0, "quit");
							Global_1681394.f_2 = unk_0x2E3E2CC20DBC563B(iVar0, "ply");
							Global_1681394.f_8 = unk_0x2E3E2CC20DBC563B(iVar0, "fl");
							if (Global_1681394.f_2 > 0)
							{
								Global_1681394.f_5 = 1;
							}
							unk_0x2F698EF7465EAD63();
						}
						else if (iParam3 == 4)
						{
							Global_1681419.f_5 = unk_0x1FD1AA4C85FDA848(iVar0, "won");
							Global_1681419.f_4 = unk_0x2E3E2CC20DBC563B(iVar0, "ply");
							Global_1681419.f_1 = unk_0x2E3E2CC20DBC563B(iVar0, "quit");
							Global_1681419.f_2 = unk_0x2E3E2CC20DBC563B(iVar0, "fl");
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

void func_109()
{
	Global_1681394 = 0;
	Global_1681394.f_2 = 0;
	Global_1681394.f_8 = 0;
	Global_1681394.f_3 = 0;
	Global_1681394.f_6 = 0;
}

int func_110(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_112() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_66() && iParam1 == 0) && !bParam3)
			{
				if (Global_1604248.f_58894 == 0)
				{
					if (Global_1604248 == 0)
					{
						if (((((Global_1604248.f_2 != 6 && !unk_0x889D01384B54BCE3(Global_1604248.f_4, 20)) && !unk_0x889D01384B54BCE3(Global_1604248.f_4, 21)) && !unk_0x889D01384B54BCE3(Global_1604248.f_4, 22)) && !unk_0x889D01384B54BCE3(Global_1604248.f_4, 23)) && Global_1604248.f_2 != 5)
						{
							func_184(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_73();
							unk_0x8259BBD7E992582C(uParam0->f_5);
							func_59();
							return 1;
						}
					}
					else if (Global_1604248 != 2 && Global_1604248 != 1)
					{
						func_184(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_73();
						unk_0x8259BBD7E992582C(uParam0->f_5);
						func_59();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1604248 == 0 && Global_1604248.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_66())
		{
			if (!unk_0x9B9B44C84F93C4BE(unk_0xFC772602EE69BB14(0)))
			{
				Global_1604248.f_58884 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_111();
	}
	func_57(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_111()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2428577.f_26.f_3), 7);
}

bool func_112()
{
	return unk_0xD5883629B43B6F20(-1762644250);
}

void func_113(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2437421, "", 64);
	}
	else
	{
		Global_2437421 = { Param1 };
	}
	Global_2437420 = iParam0;
}

int func_114(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x06771AF7795B3ECF(uParam1))
	{
		return 0;
	}
	unk_0x5CF7087C79115A9C(uParam1, &uVar0, 13);
	if (unk_0x6812E31A0CF4755C(&uVar0, 13) && unk_0x122CD96CE4AAB4C9(&uVar0))
	{
		*uParam0 = unk_0x032E678FC87ED9E6(&uVar0);
		if (unk_0x38FA37FE3518BA38(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_115()
{
	return Global_2428577.f_26.f_47;
}

int func_116()
{
	return Global_2435579;
}

bool func_117()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

void func_118(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(*uParam0, "data");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "trg");
	*uParam1 = unk_0xBC3DFFCED0175B93(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x77DBDA8A5753BCA3(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x1FD1AA4C85FDA848(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x1FD1AA4C85FDA848(iVar1, "open");
	Var3 = { func_119(unk_0xBF41F092B724D4FE(0)) };
	unk_0x55FB44C9EE7B72D8(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x2E3E2CC20DBC563B(iVar2, "scr");
	uParam2->f_5 = unk_0x2E3E2CC20DBC563B(iVar2, "time");
	uParam2->f_1 = unk_0x2E3E2CC20DBC563B(iVar1, "cash");
	uParam2->f_65 = unk_0xCEC353E8CB49D011(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0xD85D12AEDE3DA9FC(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1144[iVar0 /*6*/]), unk_0xC738F260E0A516F4(uVar51[iVar0], "cid"), 24);
		uParam2->f_71[iVar0 /*67*/].f_62 = unk_0x2E3E2CC20DBC563B(uVar51[iVar0], "scr");
		uParam2->f_71[iVar0 /*67*/].f_63 = unk_0x2E3E2CC20DBC563B(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_119(var uParam0)
{
	struct<13> Var0;
	
	unk_0x05D0E12111F5AB8E(uParam0, &Var0, 13);
	return Var0;
}

int func_120(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_119(sParam2) };
		Var13 = { func_121(unk_0x1788E93557766241()) };
		if (bParam1)
		{
			if (unk_0x89B9FBB8830D6DF1(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x765DD998E5AD03DC(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x9F979F481F18EB48())
		{
			if (unk_0x89B9FBB8830D6DF1(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x6DD503717E0D4651(&Var0) && unk_0x31A93954A8F8AFE7(&Var0))
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
			Var13 = { func_121(unk_0x1788E93557766241()) };
			if (!unk_0x89B9FBB8830D6DF1(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_121(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

void func_122(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_967025.f_6 = 0;
		Global_967025.f_7 = 32;
	}
	else
	{
		Global_965784.f_6 = 0;
		Global_965784.f_7 = 32;
	}
}

void func_123(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xEF4192C98571132D();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0xBC3DFFCED0175B93(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0xCEC353E8CB49D011(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0xD85D12AEDE3DA9FC(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1144[iVar0 /*6*/]), unk_0xC738F260E0A516F4(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x1FD1AA4C85FDA848(*uParam0, "h2h");
	uParam2->f_9 = unk_0x1FD1AA4C85FDA848(*uParam0, "ch");
	if (func_66())
	{
		StringCopy(&(uParam2->f_12), unk_0xC738F260E0A516F4(*uParam0, "name"), 64);
	}
}

void func_124(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xEF4192C98571132D();
	iVar1 = unk_0x8140B477AA55A05E(iVar0, "mission");
	iVar2 = unk_0x8140B477AA55A05E(iVar1, "gen");
	Global_1604248.f_58857 = unk_0x2E3E2CC20DBC563B(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_160(iVar1, iParam0, bParam1);
		func_159(iVar1);
		func_158(&iVar1);
		func_157(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_87())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_156(iVar1);
			func_155(iVar1);
			func_154(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_153(iVar1);
			func_152(iVar2);
			func_151(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_150(iVar1);
			func_149(iVar1);
			func_148(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_84())
	{
		func_146(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_144(iVar1);
		func_143(iVar1);
		func_142(iVar1);
		func_141(iVar1);
		func_140(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_138(iVar1);
		func_137(iVar1);
		func_135(iVar1);
		func_131(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1604248 == 1)
	{
		func_155(iVar1);
		func_130(iVar1);
	}
	else
	{
		func_125(iVar1);
	}
	unk_0x29DB79DD4D939B38(&(Global_1604248.f_4), 15);
	unk_0x29DB79DD4D939B38(&(Global_1604248.f_4), 18);
	unk_0x29DB79DD4D939B38(&(Global_1604248.f_4), 19);
	unk_0x29DB79DD4D939B38(&(Global_1604248.f_4), 28);
	unk_0x29DB79DD4D939B38(&(Global_1604248.f_4), 27);
	if (func_36(Global_1604248.f_58247))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_4), 15);
	}
	else if (func_35(Global_1604248.f_58247))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_4), 18);
	}
	else if (func_34(Global_1604248.f_58247))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_4), 19);
	}
	else if (func_33(Global_1604248.f_58247))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_4), 28);
	}
	else if (func_32(Global_1604248.f_58247))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_4), 27);
	}
}

void func_125(int iParam0)
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
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	var uVar85[4];
	var uVar90[4];
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
	var uVar153[5];
	var uVar159[5];
	var uVar165[5];
	var uVar171[5];
	var uVar177[5];
	var uVar183[5];
	var uVar189[5];
	var uVar195[5];
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
	int iVar226;
	int iVar227;
	int iVar228;
	var uVar229[2];
	var uVar232[2];
	
	iVar6 = unk_0x8140B477AA55A05E(iParam0, "ene");
	Global_1604248.f_38217 = unk_0x2E3E2CC20DBC563B(iVar6, "no");
	if (unk_0x77DBDA8A5753BCA3(iVar6, "spcap") == 2 && unk_0x2E3E2CC20DBC563B(iVar6, "spcap") != 0)
	{
		Global_1604248.f_38218 = unk_0x2E3E2CC20DBC563B(iVar6, "spcap");
	}
	else
	{
		Global_1604248.f_38218 = 50;
	}
	Global_1604248.f_38220 = unk_0x2E3E2CC20DBC563B(iVar6, "time");
	Global_1604248.f_38221 = unk_0x2E3E2CC20DBC563B(iVar6, "pal");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar6, "loc");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar6, "head");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar6, "rng");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar6, "model");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar6, "gun");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar6, "skill");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar6, "rsp");
	if (Global_1604248 == 1)
	{
		uVar14[0] = unk_0xBC3DFFCED0175B93(iVar6, "team");
	}
	iVar19 = unk_0xBC3DFFCED0175B93(iVar6, "wep");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar6, "hlt");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar6, "lghlt");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar6, "veh");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar6, "foll");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar6, "iaim");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar6, "iaimt");
	iVar26 = unk_0xBC3DFFCED0175B93(iVar6, "iaimr");
	iVar27 = unk_0xBC3DFFCED0175B93(iVar6, "sanim");
	iVar28 = unk_0xBC3DFFCED0175B93(iVar6, "sat");
	iVar29 = unk_0xBC3DFFCED0175B93(iVar6, "saru");
	iVar30 = unk_0xBC3DFFCED0175B93(iVar6, "sara");
	iVar31 = unk_0xBC3DFFCED0175B93(iVar6, "satt");
	iVar32 = unk_0xBC3DFFCED0175B93(iVar6, "whost");
	iVar33 = unk_0xBC3DFFCED0175B93(iVar6, "flee");
	iVar34 = unk_0xBC3DFFCED0175B93(iVar6, "frr");
	iVar35 = unk_0xBC3DFFCED0175B93(iVar6, "pfrmr");
	iVar36 = unk_0xBC3DFFCED0175B93(iVar6, "psnt");
	iVar37 = unk_0xBC3DFFCED0175B93(iVar6, "psnei");
	iVar38 = unk_0xBC3DFFCED0175B93(iVar6, "p2sp");
	iVar39 = unk_0xBC3DFFCED0175B93(iVar6, "p2sh");
	iVar40 = unk_0xBC3DFFCED0175B93(iVar6, "accu");
	iVar41 = unk_0xBC3DFFCED0175B93(iVar6, "lgacc");
	iVar42 = unk_0xBC3DFFCED0175B93(iVar6, "cmsty");
	iVar43 = unk_0xBC3DFFCED0175B93(iVar6, "pedbs");
	iVar44 = unk_0xBC3DFFCED0175B93(iVar6, "pbstwo");
	iVar45 = unk_0xBC3DFFCED0175B93(iVar6, "pbs3");
	iVar46 = unk_0xBC3DFFCED0175B93(iVar6, "pbs4");
	iVar47 = unk_0xBC3DFFCED0175B93(iVar6, "pbs5");
	iVar48 = unk_0xBC3DFFCED0175B93(iVar6, "pbs6");
	iVar49 = unk_0xBC3DFFCED0175B93(iVar6, "pbs7");
	if (func_87())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1604248.f_19 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar50[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar55[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar60[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar153[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar159[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar165[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar171[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar183[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar177[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar189[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar195[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			iVar3++;
		}
		iVar95 = unk_0xBC3DFFCED0175B93(iVar6, "objt");
		iVar96 = unk_0xBC3DFFCED0175B93(iVar6, "team");
		iVar97 = unk_0xBC3DFFCED0175B93(iVar6, "spawn");
		iVar98 = unk_0xBC3DFFCED0175B93(iVar6, "acts");
		iVar99 = unk_0xBC3DFFCED0175B93(iVar6, "objt2");
		iVar100 = unk_0xBC3DFFCED0175B93(iVar6, "team2");
		iVar101 = unk_0xBC3DFFCED0175B93(iVar6, "spawn2");
		iVar102 = unk_0xBC3DFFCED0175B93(iVar6, "acts2");
		iVar103 = unk_0xBC3DFFCED0175B93(iVar6, "objt3");
		iVar104 = unk_0xBC3DFFCED0175B93(iVar6, "team3");
		iVar105 = unk_0xBC3DFFCED0175B93(iVar6, "spawn3");
		iVar106 = unk_0xBC3DFFCED0175B93(iVar6, "acts3");
		iVar107 = unk_0xBC3DFFCED0175B93(iVar6, "objt4");
		iVar108 = unk_0xBC3DFFCED0175B93(iVar6, "team4");
		iVar109 = unk_0xBC3DFFCED0175B93(iVar6, "spawn4");
		iVar110 = unk_0xBC3DFFCED0175B93(iVar6, "acts4");
		iVar111 = unk_0xBC3DFFCED0175B93(iVar6, "act");
		iVar112 = unk_0xBC3DFFCED0175B93(iVar6, "pper");
		iVar113 = unk_0xBC3DFFCED0175B93(iVar6, "infr");
		iVar114 = unk_0xBC3DFFCED0175B93(iVar6, "cca");
		iVar115 = unk_0xBC3DFFCED0175B93(iVar6, "ccid");
		iVar116 = unk_0xBC3DFFCED0175B93(iVar6, "gfr");
		iVar117 = unk_0xBC3DFFCED0175B93(iVar6, "msr");
		iVar118 = unk_0xBC3DFFCED0175B93(iVar6, "bnr");
		iVar119 = unk_0xBC3DFFCED0175B93(iVar6, "phor");
		iVar120 = unk_0xBC3DFFCED0175B93(iVar6, "folr");
		iVar122 = unk_0xBC3DFFCED0175B93(iVar6, "pcvl");
		iVar123 = unk_0xBC3DFFCED0175B93(iVar6, "pcvr");
		iVar121 = unk_0xBC3DFFCED0175B93(iVar6, "pdfw");
		iVar127 = unk_0xBC3DFFCED0175B93(iVar6, "pvdp1");
		iVar128 = unk_0xBC3DFFCED0175B93(iVar6, "pvdp2");
		iVar124 = unk_0xBC3DFFCED0175B93(iVar6, "paaw");
		iVar125 = unk_0xBC3DFFCED0175B93(iVar6, "paav1");
		iVar126 = unk_0xBC3DFFCED0175B93(iVar6, "paav2");
		iVar129 = unk_0xBC3DFFCED0175B93(iVar6, "dt");
		iVar130 = unk_0xBC3DFFCED0175B93(iVar6, "do");
		iVar131 = unk_0xBC3DFFCED0175B93(iVar6, "dtim");
		iVar132 = unk_0xBC3DFFCED0175B93(iVar6, "dln");
		iVar133 = unk_0xBC3DFFCED0175B93(iVar6, "pvsp");
		iVar139 = unk_0xBC3DFFCED0175B93(iVar6, "drge");
		iVar140 = unk_0xBC3DFFCED0175B93(iVar6, "agrot");
		iVar141 = unk_0xBC3DFFCED0175B93(iVar6, "gtds");
		iVar142 = unk_0xBC3DFFCED0175B93(iVar6, "pstat");
		iVar143 = unk_0xBC3DFFCED0175B93(iVar6, "pstar");
		iVar144 = unk_0xBC3DFFCED0175B93(iVar6, "dmv");
		iVar145 = unk_0xBC3DFFCED0175B93(iVar6, "let");
		iVar146 = unk_0xBC3DFFCED0175B93(iVar6, "escr");
		iVar147 = unk_0xBC3DFFCED0175B93(iVar6, "actr");
		iVar148 = unk_0xBC3DFFCED0175B93(iVar6, "actv");
		iVar149 = unk_0xBC3DFFCED0175B93(iVar6, "actv2");
		iVar150 = unk_0xBC3DFFCED0175B93(iVar6, "actv3");
		iVar151 = unk_0xBC3DFFCED0175B93(iVar6, "actv4");
		iVar152 = unk_0xBC3DFFCED0175B93(iVar6, "actv5");
		iVar201 = unk_0xBC3DFFCED0175B93(iVar6, "pedct");
		iVar203 = unk_0xBC3DFFCED0175B93(iVar6, "pdcra");
		iVar202 = unk_0xBC3DFFCED0175B93(iVar6, "pedcr");
		iVar204 = unk_0xBC3DFFCED0175B93(iVar6, "pedbc");
		iVar205 = unk_0xBC3DFFCED0175B93(iVar6, "pdbps");
		iVar206 = unk_0xBC3DFFCED0175B93(iVar6, "avrad");
		iVar207 = unk_0xBC3DFFCED0175B93(iVar6, "pedst");
		iVar208 = unk_0xBC3DFFCED0175B93(iVar6, "gotor");
		iVar209 = unk_0xBC3DFFCED0175B93(iVar6, "invbs");
		iVar210 = unk_0xBC3DFFCED0175B93(iVar6, "gort");
		iVar211 = unk_0xBC3DFFCED0175B93(iVar6, "gorr");
		iVar212 = unk_0xBC3DFFCED0175B93(iVar6, "gorw");
		iVar213 = unk_0xBC3DFFCED0175B93(iVar6, "cstnm");
		iVar214 = unk_0xBC3DFFCED0175B93(iVar6, "pspdl");
		iVar215 = unk_0xBC3DFFCED0175B93(iVar6, "psgr");
		iVar216 = unk_0xBC3DFFCED0175B93(iVar6, "psctt");
		iVar217 = unk_0xBC3DFFCED0175B93(iVar6, "pscto");
		iVar218 = unk_0xBC3DFFCED0175B93(iVar6, "pscta");
		iVar219 = unk_0xBC3DFFCED0175B93(iVar6, "psctac");
		iVar220 = unk_0xBC3DFFCED0175B93(iVar6, "psctv");
		iVar221 = unk_0xBC3DFFCED0175B93(iVar6, "pscth");
		iVar222 = unk_0xBC3DFFCED0175B93(iVar6, "psctot");
		iVar223 = unk_0xBC3DFFCED0175B93(iVar6, "psctoi");
		iVar224 = unk_0xBC3DFFCED0175B93(iVar6, "pscatd");
		iVar225 = unk_0xBC3DFFCED0175B93(iVar6, "cutsc");
		iVar226 = unk_0xBC3DFFCED0175B93(iVar6, "cutsh");
		iVar227 = unk_0xBC3DFFCED0175B93(iVar6, "nmpass");
		iVar228 = unk_0xBC3DFFCED0175B93(iVar6, "nmfail");
		iVar134 = unk_0xBC3DFFCED0175B93(iVar6, "pmcp");
		iVar135 = unk_0xBC3DFFCED0175B93(iVar6, "pmcf");
		iVar136 = unk_0xBC3DFFCED0175B93(iVar6, "pambv");
		iVar137 = unk_0xBC3DFFCED0175B93(iVar6, "pwrpt");
		iVar138 = unk_0xBC3DFFCED0175B93(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar229[iVar1] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar232[iVar1] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_38217 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1604248.f_38222[iVar0 /*271*/] = { unk_0x2E7CBE121E5B118F(iVar7, iVar0) };
			Global_1604248.f_38222[iVar0 /*271*/].f_3 = unk_0x053C780A55718FCB(iVar8, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_4 = unk_0x053C780A55718FCB(iVar9, iVar0);
			iVar2 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_13 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_13 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_13 = iVar2;
			}
			if (!func_84() && !func_129())
			{
				if (!unk_0xA030BF5EA7907F19(Global_1604248.f_38222[iVar0 /*271*/].f_13))
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_13 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_14 = iVar2;
			iVar2 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_15 = iVar2;
			if (Global_1604248 == 1)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_16[0] = unk_0xE00F2F3EC50DF5F9(uVar14[0], iVar0);
			}
			Global_1604248.f_38222[iVar0 /*271*/].f_49 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_35 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_36 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
			if (unk_0xD2994D0723F71967(iVar21, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_37 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_37 = -1;
			}
			Global_1604248.f_38222[iVar0 /*271*/].f_55 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_31 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_38 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_39 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_40 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_41 = unk_0xE00F2F3EC50DF5F9(iVar27, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_42 = unk_0xE00F2F3EC50DF5F9(iVar28, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_43 = unk_0xE00F2F3EC50DF5F9(iVar29, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_44 = unk_0x053C780A55718FCB(iVar30, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_45 = unk_0xE00F2F3EC50DF5F9(iVar31, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_48 = unk_0xE00F2F3EC50DF5F9(iVar32, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_46 = unk_0xE00F2F3EC50DF5F9(iVar33, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_5 = unk_0x053C780A55718FCB(iVar34, iVar0);
			if ((unk_0xD2994D0723F71967(iVar35, iVar0) == 3 && unk_0xD2994D0723F71967(iVar36, iVar0) == 2) && unk_0xD2994D0723F71967(iVar37, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_6 = unk_0x053C780A55718FCB(iVar35, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar36, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_8 = unk_0xE00F2F3EC50DF5F9(iVar37, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_6 = 0f;
				Global_1604248.f_38222[iVar0 /*271*/].f_7 = 0;
				Global_1604248.f_38222[iVar0 /*271*/].f_8 = -1;
			}
			if (unk_0xD2994D0723F71967(iVar38, iVar0) == 5 && unk_0xD2994D0723F71967(iVar39, iVar0) == 3)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_9 = { unk_0x2E7CBE121E5B118F(iVar38, iVar0) };
				Global_1604248.f_38222[iVar0 /*271*/].f_12 = unk_0x053C780A55718FCB(iVar39, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_9 = { 0f, 0f, 0f };
				Global_1604248.f_38222[iVar0 /*271*/].f_12 = 0f;
			}
			Global_1604248.f_38222[iVar0 /*271*/].f_33 = unk_0xE00F2F3EC50DF5F9(iVar40, iVar0);
			if (unk_0xD2994D0723F71967(iVar41, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_34 = unk_0xE00F2F3EC50DF5F9(iVar41, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_34 = -1;
			}
			Global_1604248.f_38222[iVar0 /*271*/].f_47 = unk_0xE00F2F3EC50DF5F9(iVar42, iVar0);
			Global_1604248.f_38222[iVar0 /*271*/].f_180 = unk_0xE00F2F3EC50DF5F9(iVar43, iVar0);
			if (unk_0xD2994D0723F71967(iVar44, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_181 = unk_0xE00F2F3EC50DF5F9(iVar44, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_181 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar45, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_182 = unk_0xE00F2F3EC50DF5F9(iVar45, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_182 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar46, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_183 = unk_0xE00F2F3EC50DF5F9(iVar46, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_183 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar47, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_184 = unk_0xE00F2F3EC50DF5F9(iVar47, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_184 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar48, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_185 = unk_0xE00F2F3EC50DF5F9(iVar48, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_185 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar49, iVar0) == 2)
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_186 = unk_0xE00F2F3EC50DF5F9(iVar49, iVar0);
			}
			else
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_186 = 0;
			}
			if (func_87())
			{
				Global_1604248.f_38222[iVar0 /*271*/].f_56 = unk_0xE00F2F3EC50DF5F9(iVar95, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_57 = unk_0xE00F2F3EC50DF5F9(iVar96, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_58 = unk_0xE00F2F3EC50DF5F9(iVar97, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_61 = unk_0xE00F2F3EC50DF5F9(iVar98, iVar0);
				if (unk_0xD2994D0723F71967(iVar99, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_153 = unk_0xE00F2F3EC50DF5F9(iVar99, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_150 = unk_0xE00F2F3EC50DF5F9(iVar100, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_156 = unk_0xE00F2F3EC50DF5F9(iVar101, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_159 = unk_0xE00F2F3EC50DF5F9(iVar102, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_154 = unk_0xE00F2F3EC50DF5F9(iVar103, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_151 = unk_0xE00F2F3EC50DF5F9(iVar104, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_157 = unk_0xE00F2F3EC50DF5F9(iVar105, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_160 = unk_0xE00F2F3EC50DF5F9(iVar106, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_155 = unk_0xE00F2F3EC50DF5F9(iVar107, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_152 = unk_0xE00F2F3EC50DF5F9(iVar108, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_158 = unk_0xE00F2F3EC50DF5F9(iVar109, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_161 = unk_0xE00F2F3EC50DF5F9(iVar110, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_153 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_150 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_156 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_159 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_154 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_151 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_157 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_160 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_155 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_152 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_158 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_161 = 0;
				}
				Global_1604248.f_38222[iVar0 /*271*/].f_60 = unk_0xE00F2F3EC50DF5F9(iVar111, iVar0);
				if (unk_0xD2994D0723F71967(iVar112, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_192 = unk_0xE00F2F3EC50DF5F9(iVar112, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_192 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar113, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_193 = unk_0xE00F2F3EC50DF5F9(iVar113, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_193 = 250;
				}
				if (unk_0xD2994D0723F71967(iVar114, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_196 = unk_0xE00F2F3EC50DF5F9(iVar114, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_196 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar115, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_197 = unk_0xE00F2F3EC50DF5F9(iVar115, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_197 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar116, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_198 = unk_0xE00F2F3EC50DF5F9(iVar116, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_198 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar117, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_194 = unk_0xE00F2F3EC50DF5F9(iVar117, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_194 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar118, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_195 = unk_0xE00F2F3EC50DF5F9(iVar118, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_195 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar119, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_251 = unk_0xE00F2F3EC50DF5F9(iVar119, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_251 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar120, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_252 = unk_0xE00F2F3EC50DF5F9(iVar120, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_252 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar122, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_199 = { unk_0x2E7CBE121E5B118F(iVar122, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_199 = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar123, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_202 = { unk_0x2E7CBE121E5B118F(iVar123, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_202 = { 0f, 0f, 0f };
				}
				if ((unk_0xD2994D0723F71967(iVar127, iVar0) == 5 && unk_0xD2994D0723F71967(iVar128, iVar0) == 5) && unk_0xD2994D0723F71967(iVar121, iVar0) == 3)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_210 = { unk_0x2E7CBE121E5B118F(iVar127, iVar0) };
					Global_1604248.f_38222[iVar0 /*271*/].f_213 = { unk_0x2E7CBE121E5B118F(iVar128, iVar0) };
					Global_1604248.f_38222[iVar0 /*271*/].f_216 = unk_0x053C780A55718FCB(iVar121, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_210 = { 0f, 0f, 0f };
					Global_1604248.f_38222[iVar0 /*271*/].f_213 = { 0f, 0f, 0f };
					Global_1604248.f_38222[iVar0 /*271*/].f_216 = 1f;
				}
				if ((unk_0xD2994D0723F71967(iVar124, iVar0) == 3 && unk_0xD2994D0723F71967(iVar125, iVar0) == 5) && unk_0xD2994D0723F71967(iVar126, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_175 = unk_0x053C780A55718FCB(iVar124, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_169 = { unk_0x2E7CBE121E5B118F(iVar125, iVar0) };
					Global_1604248.f_38222[iVar0 /*271*/].f_172 = { unk_0x2E7CBE121E5B118F(iVar126, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_175 = 0f;
					Global_1604248.f_38222[iVar0 /*271*/].f_169 = { 0f, 0f, 0f };
					Global_1604248.f_38222[iVar0 /*271*/].f_172 = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar133, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_222 = unk_0xE00F2F3EC50DF5F9(iVar133, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_222 = 0;
				}
				Global_1604248.f_38222[iVar0 /*271*/].f_206 = unk_0xE00F2F3EC50DF5F9(iVar129, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_205 = unk_0xE00F2F3EC50DF5F9(iVar130, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_207 = unk_0xE00F2F3EC50DF5F9(iVar131, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_208 = unk_0xE00F2F3EC50DF5F9(iVar132, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_209 = unk_0xE00F2F3EC50DF5F9(iVar139, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_217 = unk_0xE00F2F3EC50DF5F9(iVar140, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_176 = unk_0xE00F2F3EC50DF5F9(iVar141, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_32 = unk_0xE00F2F3EC50DF5F9(iVar144, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_167 = unk_0xE00F2F3EC50DF5F9(iVar145, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_177 = unk_0xE00F2F3EC50DF5F9(iVar146, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_168 = unk_0xE00F2F3EC50DF5F9(iVar147, iVar0);
				Global_1604248.f_38222[iVar0 /*271*/].f_62 = { unk_0x2E7CBE121E5B118F(iVar148, iVar0) };
				Global_1604248.f_38222[iVar0 /*271*/].f_62 = { unk_0x2E7CBE121E5B118F(iVar148, iVar0) };
				if (unk_0xD2994D0723F71967(iVar149, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[0 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar149, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar150, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[1 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar150, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar151, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[2 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar151, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar152, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[3 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar152, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_65[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar142, iVar0) == 2 && unk_0xD2994D0723F71967(iVar143, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_178 = unk_0xE00F2F3EC50DF5F9(iVar142, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_179 = unk_0xE00F2F3EC50DF5F9(iVar143, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_178 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_179 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0xD2994D0723F71967(uVar153[iVar3], iVar0) == 2)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_79[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar153[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_79[iVar3] = 0;
					}
					if (unk_0xD2994D0723F71967(uVar159[iVar3], iVar0) == 2)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_85[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar159[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_85[iVar3] = 0;
					}
					if (unk_0xD2994D0723F71967(uVar165[iVar3], iVar0) == 5 && unk_0xD2994D0723F71967(uVar171[iVar3], iVar0) == 2)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_91[iVar3 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar165[iVar3], iVar0) };
						Global_1604248.f_38222[iVar0 /*271*/].f_107[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar171[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_91[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1604248.f_38222[iVar0 /*271*/].f_107[iVar3] = 3;
					}
					if (unk_0xD2994D0723F71967(uVar177[iVar3], iVar0) == 2)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_125[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar177[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_125[iVar3] = -1;
					}
					if (unk_0xD2994D0723F71967(uVar183[iVar3], iVar0) == 3)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_113[iVar3] = unk_0x053C780A55718FCB(uVar183[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_113[iVar3] = 0f;
					}
					if (unk_0xD2994D0723F71967(uVar189[iVar3], iVar0) == 3)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_119[iVar3] = unk_0x053C780A55718FCB(uVar189[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_119[iVar3] = 0f;
					}
					if (unk_0xD2994D0723F71967(uVar195[iVar3], iVar0) == 3)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_131[iVar3] = unk_0x053C780A55718FCB(uVar195[iVar3], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_131[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0xD2994D0723F71967(iVar202, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_218 = unk_0xE00F2F3EC50DF5F9(iVar202, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_218 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar201, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_219 = unk_0xE00F2F3EC50DF5F9(iVar201, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_219 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar203, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_220 = unk_0xE00F2F3EC50DF5F9(iVar203, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_220 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar207, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_221 = unk_0xE00F2F3EC50DF5F9(iVar207, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_221 = -3;
				}
				if (unk_0xD2994D0723F71967(iVar204, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_237 = unk_0xE00F2F3EC50DF5F9(iVar204, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_237 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar205, iVar0) == 3)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_248 = unk_0x053C780A55718FCB(iVar205, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_248 = 1f;
				}
				if (unk_0xD2994D0723F71967(iVar206, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_78 = unk_0xE00F2F3EC50DF5F9(iVar206, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_78 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar208, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_50 = unk_0xE00F2F3EC50DF5F9(iVar208, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_50 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar209, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_51 = unk_0xE00F2F3EC50DF5F9(iVar209, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_51 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar213, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_148 = unk_0xE00F2F3EC50DF5F9(iVar213, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_148 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar214, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_149 = unk_0xE00F2F3EC50DF5F9(iVar214, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_149 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar215, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_59 = unk_0xE00F2F3EC50DF5F9(iVar215, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_59 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar134, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_235 = unk_0xE00F2F3EC50DF5F9(iVar134, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_235 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar135, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_236 = unk_0xE00F2F3EC50DF5F9(iVar135, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_236 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar136, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_253 = unk_0xE00F2F3EC50DF5F9(iVar136, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_253 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar137, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_259 = unk_0xE00F2F3EC50DF5F9(iVar137, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_259 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar138, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_260 = unk_0xE00F2F3EC50DF5F9(iVar138, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_260 = -1;
				}
				if ((unk_0xD2994D0723F71967(iVar216, iVar0) == 2 && unk_0xD2994D0723F71967(iVar217, iVar0) == 2) && unk_0xD2994D0723F71967(iVar218, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_137 = unk_0xE00F2F3EC50DF5F9(iVar216, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_138 = unk_0xE00F2F3EC50DF5F9(iVar217, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_140 = unk_0xE00F2F3EC50DF5F9(iVar218, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_137 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_138 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_140 = 0;
				}
				if ((unk_0xD2994D0723F71967(iVar222, iVar0) == 2 && unk_0xD2994D0723F71967(iVar223, iVar0) == 2) && unk_0xD2994D0723F71967(iVar224, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_145 = unk_0xE00F2F3EC50DF5F9(iVar222, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_146 = unk_0xE00F2F3EC50DF5F9(iVar223, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_147 = unk_0xE00F2F3EC50DF5F9(iVar224, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_145 = 0;
					Global_1604248.f_38222[iVar0 /*271*/].f_146 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_147 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar219, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_139 = unk_0xE00F2F3EC50DF5F9(iVar219, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_139 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar220, iVar0) == 5)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_141 = { unk_0x2E7CBE121E5B118F(iVar220, iVar0) };
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_141 = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(iVar221, iVar0) == 3)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_144 = unk_0x053C780A55718FCB(iVar221, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_144 = 0f;
				}
				if ((unk_0xD2994D0723F71967(iVar210, iVar0) == 2 && unk_0xD2994D0723F71967(iVar211, iVar0) == 2) && unk_0xD2994D0723F71967(iVar212, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_52 = unk_0xE00F2F3EC50DF5F9(iVar210, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_53 = unk_0xE00F2F3EC50DF5F9(iVar211, iVar0);
					Global_1604248.f_38222[iVar0 /*271*/].f_54 = unk_0xE00F2F3EC50DF5F9(iVar212, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_52 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_53 = -1;
					Global_1604248.f_38222[iVar0 /*271*/].f_54 = joaat("weapon_pistol");
				}
				if (Global_1604248.f_2 != 6 && unk_0xD2994D0723F71967(iVar225, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_249 = unk_0xE00F2F3EC50DF5F9(iVar225, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_249 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar227, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_233 = unk_0xE00F2F3EC50DF5F9(iVar227, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_233 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar228, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_234 = unk_0xE00F2F3EC50DF5F9(iVar228, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_234 = -1;
				}
				if (Global_1604248.f_2 != 6 && unk_0xD2994D0723F71967(iVar226, iVar0) == 2)
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_250 = unk_0xE00F2F3EC50DF5F9(iVar226, iVar0);
				}
				else
				{
					Global_1604248.f_38222[iVar0 /*271*/].f_250 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xD2994D0723F71967(uVar229[iVar1], iVar0) == 5)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_261[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar229[iVar1], iVar0) };
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_261[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xD2994D0723F71967(uVar232[iVar1], iVar0) == 3)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_268[iVar1] = unk_0x053C780A55718FCB(uVar232[iVar1], iVar0);
					}
					else
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_268[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1604248.f_19 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1604248.f_38222[iVar0 /*271*/].f_16[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar14[iVar3], iVar0);
						Global_1604248.f_38222[iVar0 /*271*/].f_21[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar50[iVar3], iVar0);
						Global_1604248.f_38222[iVar0 /*271*/].f_26[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar55[iVar3], iVar0);
						if (Global_1604248.f_38222[iVar0 /*271*/].f_26[iVar3] == -1)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_26[iVar3] = 99999;
						}
						if (unk_0xD2994D0723F71967(uVar60[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_187[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar60[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_187[iVar3] = -1;
						}
						if (unk_0xD2994D0723F71967(uVar65[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_162[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_162[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar70[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_223[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar70[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_223[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar75[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_228[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_228[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar80[iVar3], iVar0) == 2 && unk_0xD2994D0723F71967(uVar85[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_238[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar80[iVar3], iVar0);
							Global_1604248.f_38222[iVar0 /*271*/].f_243[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_238[iVar3] = -1;
							Global_1604248.f_38222[iVar0 /*271*/].f_243[iVar3] = -1;
						}
						if (unk_0xD2994D0723F71967(uVar90[iVar3], iVar0) == 2)
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_254[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar90[iVar3], iVar0);
						}
						else if (unk_0x889D01384B54BCE3(Global_1604248.f_22653[iVar3 /*3*/][func_128(iVar0)], func_127(iVar0)))
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_254[iVar3] = -1;
						}
						else
						{
							Global_1604248.f_38222[iVar0 /*271*/].f_254[iVar3] = -2;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_126(&iVar6);
}

void func_126(int iParam0)
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
	
	Global_1604248.f_54634[0] = unk_0x2E3E2CC20DBC563B(*iParam0, "no0");
	iVar1 = unk_0xBC3DFFCED0175B93(*iParam0, "loc0");
	iVar2 = unk_0xBC3DFFCED0175B93(*iParam0, "head0");
	iVar3 = unk_0xBC3DFFCED0175B93(*iParam0, "bit0");
	iVar4 = unk_0xBC3DFFCED0175B93(*iParam0, "veh0");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_54634[0] - 1))
	{
		Global_1604248.f_55181[0 /*262*/][iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar1, iVar0) };
		Global_1604248.f_55181[0 /*262*/][iVar0 /*9*/].f_3 = unk_0x053C780A55718FCB(iVar2, iVar0);
		Global_1604248.f_55181[0 /*262*/][iVar0 /*9*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar3, iVar0);
		if (unk_0xD2994D0723F71967(iVar4, iVar0) == 2)
		{
			Global_1604248.f_55181[0 /*262*/][iVar0 /*9*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar4, iVar0);
		}
		else
		{
			Global_1604248.f_55181[0 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1604248.f_54634[1] = unk_0x2E3E2CC20DBC563B(*iParam0, "no1");
	iVar5 = unk_0xBC3DFFCED0175B93(*iParam0, "loc1");
	iVar6 = unk_0xBC3DFFCED0175B93(*iParam0, "head1");
	iVar7 = unk_0xBC3DFFCED0175B93(*iParam0, "bit1");
	iVar8 = unk_0xBC3DFFCED0175B93(*iParam0, "veh1");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_54634[1] - 1))
	{
		Global_1604248.f_55181[1 /*262*/][iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar5, iVar0) };
		Global_1604248.f_55181[1 /*262*/][iVar0 /*9*/].f_3 = unk_0x053C780A55718FCB(iVar6, iVar0);
		Global_1604248.f_55181[1 /*262*/][iVar0 /*9*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		if (unk_0xD2994D0723F71967(iVar8, iVar0) == 2)
		{
			Global_1604248.f_55181[1 /*262*/][iVar0 /*9*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		}
		else
		{
			Global_1604248.f_55181[1 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1604248.f_54634[2] = unk_0x2E3E2CC20DBC563B(*iParam0, "no2");
	iVar9 = unk_0xBC3DFFCED0175B93(*iParam0, "loc2");
	iVar10 = unk_0xBC3DFFCED0175B93(*iParam0, "head2");
	iVar11 = unk_0xBC3DFFCED0175B93(*iParam0, "bit2");
	iVar12 = unk_0xBC3DFFCED0175B93(*iParam0, "veh2");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_54634[2] - 1))
	{
		Global_1604248.f_55181[2 /*262*/][iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar9, iVar0) };
		Global_1604248.f_55181[2 /*262*/][iVar0 /*9*/].f_3 = unk_0x053C780A55718FCB(iVar10, iVar0);
		Global_1604248.f_55181[2 /*262*/][iVar0 /*9*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
		if (unk_0xD2994D0723F71967(iVar12, iVar0) == 2)
		{
			Global_1604248.f_55181[2 /*262*/][iVar0 /*9*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
		}
		else
		{
			Global_1604248.f_55181[2 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1604248.f_54634[3] = unk_0x2E3E2CC20DBC563B(*iParam0, "no3");
	iVar13 = unk_0xBC3DFFCED0175B93(*iParam0, "loc3");
	iVar14 = unk_0xBC3DFFCED0175B93(*iParam0, "head3");
	iVar15 = unk_0xBC3DFFCED0175B93(*iParam0, "bit3");
	iVar16 = unk_0xBC3DFFCED0175B93(*iParam0, "veh3");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_54634[3] - 1))
	{
		Global_1604248.f_55181[3 /*262*/][iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar13, iVar0) };
		Global_1604248.f_55181[3 /*262*/][iVar0 /*9*/].f_3 = unk_0x053C780A55718FCB(iVar14, iVar0);
		Global_1604248.f_55181[3 /*262*/][iVar0 /*9*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar0);
		if (unk_0xD2994D0723F71967(iVar16, iVar0) == 2)
		{
			Global_1604248.f_55181[3 /*262*/][iVar0 /*9*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
		}
		else
		{
			Global_1604248.f_55181[3 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
}

int func_127(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_128(iParam0) * 31);
}

int func_128(int iParam0)
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

int func_129()
{
	if (Global_1604248 == 6)
	{
		return 1;
	}
	return 0;
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x8140B477AA55A05E(iParam0, "ene");
	Global_1604248.f_54633 = unk_0x2E3E2CC20DBC563B(iVar1, "no");
	Global_1604248.f_27557 = unk_0x2E3E2CC20DBC563B(iVar1, "veh");
	iVar2 = unk_0xBC3DFFCED0175B93(iVar1, "loc");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar1, "head");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar1, "team");
	if (Global_1604248.f_54633 > 60)
	{
		Global_1604248.f_54633 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_54633 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1604248.f_54640[iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar2, iVar0) };
			Global_1604248.f_54640[iVar0 /*9*/].f_3 = unk_0x053C780A55718FCB(iVar3, iVar0);
			Global_1604248.f_54640[iVar0 /*9*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar4, iVar0);
		}
		iVar0++;
	}
	func_126(&iVar1);
}

void func_131(int iParam0)
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
	
	iVar2 = unk_0x8140B477AA55A05E(iParam0, "dprop");
	Global_1604248.f_32898 = func_134(unk_0x2E3E2CC20DBC563B(iVar2, "no"), 0, 100);
	iVar3 = unk_0xBC3DFFCED0175B93(iVar2, "loc");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar2, "vRot");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar2, "head");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar2, "model");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar2, "asst");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar2, "asso");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar2, "asss");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar2, "pasc");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar2, "asst2");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar2, "asso2");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar2, "asss2");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar2, "pasc2");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar2, "asst3");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar2, "asso3");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar2, "asss3");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar2, "pasc3");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar2, "asst4");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar2, "asso4");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar2, "asss4");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar2, "pasc4");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar2, "prpct");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar2, "prpcr");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar2, "prcra");
	iVar26 = unk_0xBC3DFFCED0175B93(iVar2, "prpbs");
	if (Global_1604248.f_32898 > 20)
	{
		Global_1604248.f_32898 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_32898 - 1))
	{
		Global_1604248.f_32900[iVar0 /*29*/] = { unk_0x2E7CBE121E5B118F(iVar3, iVar0) };
		Global_1604248.f_32900[iVar0 /*29*/].f_3 = { unk_0x2E7CBE121E5B118F(iVar4, iVar0) };
		Global_1604248.f_32900[iVar0 /*29*/].f_6 = unk_0x053C780A55718FCB(iVar5, iVar0);
		Global_1604248.f_32900[iVar0 /*29*/].f_8 = -1;
		iVar1 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
		Global_1604248.f_32900[iVar0 /*29*/].f_7 = func_133(iVar1);
		if (!unk_0xA030BF5EA7907F19(Global_1604248.f_32900[iVar0 /*29*/].f_7))
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1604248.f_32900[iVar0 /*29*/].f_10 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		Global_1604248.f_32900[iVar0 /*29*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		Global_1604248.f_32900[iVar0 /*29*/].f_11 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		if (Global_1604248.f_32900[iVar0 /*29*/].f_11 == -1)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_11 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar11, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_17 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_20 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_23 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_18 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_21 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_24 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_19 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_22 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_25 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_20 = -1;
			Global_1604248.f_32900[iVar0 /*29*/].f_17 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_23 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_21 = -1;
			Global_1604248.f_32900[iVar0 /*29*/].f_18 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_24 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_22 = -1;
			Global_1604248.f_32900[iVar0 /*29*/].f_19 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_25 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar10, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_12 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_26 = unk_0xE00F2F3EC50DF5F9(iVar14, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar0);
			Global_1604248.f_32900[iVar0 /*29*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_12 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_26 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_27 = 0;
			Global_1604248.f_32900[iVar0 /*29*/].f_28 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar24, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_13 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_13 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar23, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_14 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_14 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar25, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_15 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_15 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar26, iVar0) == 2)
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_16 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
		}
		else
		{
			Global_1604248.f_32900[iVar0 /*29*/].f_16 = 0;
		}
		iVar0++;
	}
	iVar27 = iVar0;
	if (func_132() || Global_1604248 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1604248.f_27609 - 1))
		{
			Global_1604248.f_32900[iVar27 /*29*/] = { Global_1604248.f_27612[iVar0 /*87*/] };
			Global_1604248.f_32900[iVar27 /*29*/].f_3 = { Global_1604248.f_27612[iVar0 /*87*/].f_4 };
			Global_1604248.f_32900[iVar27 /*29*/].f_6 = Global_1604248.f_27612[iVar0 /*87*/].f_3;
			Global_1604248.f_32900[iVar27 /*29*/].f_8 = iVar0;
			Global_1604248.f_32900[iVar27 /*29*/].f_7 = joaat("prop_container_ld_pu");
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				Global_1604248.f_27612[iVar27 /*87*/].f_16[iVar28] = 0;
				Global_1604248.f_27612[iVar27 /*87*/].f_21[iVar28] = 99999;
				iVar28++;
			}
			Global_1604248.f_32899++;
			Global_1604248.f_32898++;
			iVar27++;
			iVar0++;
		}
	}
}

int func_132()
{
	if (Global_1604248 == 0 && Global_1604248.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)
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
	if ((unk_0x660675ADB09E441F() || unk_0x9F979F481F18EB48()) || unk_0xF6BAF9F0C2863FFE())
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
	else if (unk_0xD5560895105F1405() || unk_0x75C4BB2E54262038())
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

int func_134(int iParam0, int iParam1, int iParam2)
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

void func_135(int iParam0)
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
	
	iVar2 = unk_0x8140B477AA55A05E(iParam0, "prop");
	Global_1604248.f_29765 = unk_0x2E3E2CC20DBC563B(iVar2, "no");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar2, "loc");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar2, "vRot");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar2, "head");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar2, "model");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar2, "asst");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar2, "asso");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar2, "asss");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar2, "pasc");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar2, "asst2");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar2, "asso2");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar2, "asss2");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar2, "pasc2");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar2, "asst3");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar2, "asso3");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar2, "asss3");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar2, "pasc3");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar2, "asst4");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar2, "asso4");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar2, "asss4");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar2, "pasc4");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar2, "aldel");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar2, "alsnd");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar2, "flvfx");
	iVar26 = unk_0xBC3DFFCED0175B93(iVar2, "prpct");
	iVar27 = unk_0xBC3DFFCED0175B93(iVar2, "prpcr");
	iVar28 = unk_0xBC3DFFCED0175B93(iVar2, "prcra");
	iVar29 = unk_0xBC3DFFCED0175B93(iVar2, "prpbs");
	if (Global_1604248.f_29765 > 100)
	{
		Global_1604248.f_29765 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_29765 - 1))
	{
		Global_1604248.f_29766[iVar0 /*31*/] = { unk_0x2E7CBE121E5B118F(iVar3, iVar0) };
		Global_1604248.f_29766[iVar0 /*31*/].f_3 = { unk_0x2E7CBE121E5B118F(iVar4, iVar0) };
		Global_1604248.f_29766[iVar0 /*31*/].f_6 = unk_0x053C780A55718FCB(iVar5, iVar0);
		iVar1 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
		Global_1604248.f_29766[iVar0 /*31*/].f_7 = func_133(iVar1);
		if (!unk_0xA030BF5EA7907F19(Global_1604248.f_29766[iVar0 /*31*/].f_7))
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1604248.f_29766[iVar0 /*31*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		Global_1604248.f_29766[iVar0 /*31*/].f_8 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		Global_1604248.f_29766[iVar0 /*31*/].f_10 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		if (Global_1604248.f_29766[iVar0 /*31*/].f_10 == -1)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_10 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar11, iVar0) == 2)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_19 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_22 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_25 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_20 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_23 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_26 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_21 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_24 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar0);
		}
		else
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_22 = -1;
			Global_1604248.f_29766[iVar0 /*31*/].f_19 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_25 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_23 = -1;
			Global_1604248.f_29766[iVar0 /*31*/].f_20 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_26 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_24 = -1;
			Global_1604248.f_29766[iVar0 /*31*/].f_21 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar10, iVar0) == 2)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_11 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar14, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_29 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar0);
			Global_1604248.f_29766[iVar0 /*31*/].f_30 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar0);
		}
		else
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_11 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_28 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_29 = 0;
			Global_1604248.f_29766[iVar0 /*31*/].f_30 = 0;
		}
		Global_1604248.f_29766[iVar0 /*31*/].f_12 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
		if (Global_1604248.f_29766[iVar0 /*31*/].f_12 > 0 && Global_1604248.f_29766[iVar0 /*31*/].f_12 < 1000)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_12 = func_136(Global_1604248.f_29766[iVar0 /*31*/].f_12);
		}
		Global_1604248.f_29766[iVar0 /*31*/].f_13 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
		Global_1604248.f_29766[iVar0 /*31*/].f_14 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
		if (unk_0xD2994D0723F71967(iVar27, iVar0) == 2)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_15 = unk_0xE00F2F3EC50DF5F9(iVar27, iVar0);
		}
		else
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar26, iVar0) == 2)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_16 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
		}
		else
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar28, iVar0) == 2)
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_17 = unk_0xE00F2F3EC50DF5F9(iVar28, iVar0);
		}
		else
		{
			Global_1604248.f_29766[iVar0 /*31*/].f_17 = -1;
		}
		Global_1604248.f_29766[iVar0 /*31*/].f_18 = unk_0xE00F2F3EC50DF5F9(iVar29, iVar0);
		iVar0++;
	}
}

int func_136(int iParam0)
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

void func_137(int iParam0)
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
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	var uVar85[4];
	var uVar90[4];
	var uVar95[4];
	var uVar100[2];
	var uVar103[2];
	int iVar106;
	int iVar107;
	int iVar108;
	
	iVar6 = unk_0x8140B477AA55A05E(iParam0, "veh");
	Global_1604248.f_34335 = unk_0x2E3E2CC20DBC563B(iVar6, "no");
	Global_1604248.f_34336 = unk_0x2E3E2CC20DBC563B(iVar6, "time");
	Global_1604248.f_34337 = unk_0x2E3E2CC20DBC563B(iVar6, "pal");
	iVar7 = unk_0x8140B477AA55A05E(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1604248.f_19 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1604248.f_74[iVar3 /*5606*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1604248.f_38069[iVar0 /*5*/][iVar3] = unk_0x2E3E2CC20DBC563B(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1604248.f_22551[iVar0 /*5*/][iVar3] = unk_0x2E3E2CC20DBC563B(iVar7, &cVar4);
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0xBC3DFFCED0175B93(iVar6, "loc");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar6, "head");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar6, "model");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar6, "col");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar6, "rsp");
	if (func_87())
	{
		iVar10 = unk_0xBC3DFFCED0175B93(iVar6, "vrr");
		iVar11 = unk_0xBC3DFFCED0175B93(iVar6, "vrmr");
		iVar12 = unk_0xBC3DFFCED0175B93(iVar6, "vsnt");
		iVar13 = unk_0xBC3DFFCED0175B93(iVar6, "vsnei");
		iVar14 = unk_0xBC3DFFCED0175B93(iVar6, "v2sp");
		iVar15 = unk_0xBC3DFFCED0175B93(iVar6, "v2sh");
		iVar19 = unk_0xBC3DFFCED0175B93(iVar6, "objt");
		iVar20 = unk_0xBC3DFFCED0175B93(iVar6, "team");
		iVar21 = unk_0xBC3DFFCED0175B93(iVar6, "spwn");
		iVar22 = unk_0xBC3DFFCED0175B93(iVar6, "objt2");
		iVar23 = unk_0xBC3DFFCED0175B93(iVar6, "team2");
		iVar24 = unk_0xBC3DFFCED0175B93(iVar6, "spwn2");
		iVar25 = unk_0xBC3DFFCED0175B93(iVar6, "objt3");
		iVar26 = unk_0xBC3DFFCED0175B93(iVar6, "team3");
		iVar27 = unk_0xBC3DFFCED0175B93(iVar6, "spwn3");
		iVar28 = unk_0xBC3DFFCED0175B93(iVar6, "objt4");
		iVar29 = unk_0xBC3DFFCED0175B93(iVar6, "team4");
		iVar30 = unk_0xBC3DFFCED0175B93(iVar6, "spwn4");
		Global_1604248.f_29764 = unk_0x2E3E2CC20DBC563B(iVar6, "nocr");
		iVar31 = unk_0xBC3DFFCED0175B93(iVar6, "crgdm");
		iVar32 = unk_0xBC3DFFCED0175B93(iVar6, "liv");
		iVar33 = unk_0xBC3DFFCED0175B93(iVar6, "modps");
		iVar34 = unk_0xBC3DFFCED0175B93(iVar6, "colc");
		iVar35 = unk_0xBC3DFFCED0175B93(iVar6, "col2");
		Global_1604248.f_34338 = unk_0x2E3E2CC20DBC563B(iVar6, "burst");
		iVar36 = unk_0xBC3DFFCED0175B93(iVar6, "hlth");
		iVar37 = unk_0xBC3DFFCED0175B93(iVar6, "enghp");
		iVar38 = unk_0xBC3DFFCED0175B93(iVar6, "ptrhp");
		iVar39 = unk_0xBC3DFFCED0175B93(iVar6, "bdyhp");
		iVar40 = unk_0xBC3DFFCED0175B93(iVar6, "drbs");
		iVar41 = unk_0xBC3DFFCED0175B93(iVar6, "vbs2");
		iVar42 = unk_0xBC3DFFCED0175B93(iVar6, "vbs3");
		iVar43 = unk_0xBC3DFFCED0175B93(iVar6, "vbs4");
		iVar44 = unk_0xBC3DFFCED0175B93(iVar6, "vebs");
		iVar45 = unk_0xBC3DFFCED0175B93(iVar6, "vehct");
		iVar47 = unk_0xBC3DFFCED0175B93(iVar6, "vhcra");
		iVar46 = unk_0xBC3DFFCED0175B93(iVar6, "vehcr");
		iVar48 = unk_0xBC3DFFCED0175B93(iVar6, "vehbc");
		iVar49 = unk_0xBC3DFFCED0175B93(iVar6, "vehbr");
		iVar50 = unk_0xBC3DFFCED0175B93(iVar6, "vspdl");
		iVar51 = unk_0xBC3DFFCED0175B93(iVar6, "vsgr");
		iVar52 = unk_0xBC3DFFCED0175B93(iVar6, "vcnm");
		iVar53 = unk_0xBC3DFFCED0175B93(iVar6, "vehap");
		iVar54 = unk_0xBC3DFFCED0175B93(iVar6, "vehat");
		iVar55 = unk_0xBC3DFFCED0175B93(iVar6, "vehdu");
		iVar56 = unk_0xBC3DFFCED0175B93(iVar6, "vldt");
		iVar57 = unk_0xBC3DFFCED0175B93(iVar6, "vldr");
		iVar58 = unk_0xBC3DFFCED0175B93(iVar6, "cutsc");
		iVar59 = unk_0xBC3DFFCED0175B93(iVar6, "cutsh");
		iVar63 = unk_0xBC3DFFCED0175B93(iVar6, "nmpass");
		iVar64 = unk_0xBC3DFFCED0175B93(iVar6, "nmfail");
		iVar60 = unk_0xBC3DFFCED0175B93(iVar6, "vmcp");
		iVar61 = unk_0xBC3DFFCED0175B93(iVar6, "vmcf");
		iVar62 = unk_0xBC3DFFCED0175B93(iVar6, "gotor");
		iVar107 = unk_0xBC3DFFCED0175B93(iVar6, "vphrang");
		iVar108 = unk_0xBC3DFFCED0175B93(iVar6, "vdrpovr");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar100[iVar1] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar103[iVar1] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			iVar1++;
		}
		iVar106 = unk_0xBC3DFFCED0175B93(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1604248.f_19 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar95[iVar3] = unk_0xBC3DFFCED0175B93(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_34335 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1604248.f_34339[iVar0 /*113*/] = { unk_0x2E7CBE121E5B118F(iVar8, iVar0) };
			Global_1604248.f_34339[iVar0 /*113*/].f_3 = unk_0x053C780A55718FCB(iVar9, iVar0);
			iVar2 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
			Global_1604248.f_34339[iVar0 /*113*/].f_12 = iVar2;
			if (!func_84())
			{
				if (!unk_0xA030BF5EA7907F19(Global_1604248.f_34339[iVar0 /*113*/].f_12))
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_12 = joaat("baller");
				}
			}
			Global_1604248.f_34339[iVar0 /*113*/].f_23 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar0);
			Global_1604248.f_34339[iVar0 /*113*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar0);
			if (func_87())
			{
				if (((unk_0xD2994D0723F71967(iVar10, iVar0) == 3 && unk_0xD2994D0723F71967(iVar11, iVar0) == 3) && unk_0xD2994D0723F71967(iVar12, iVar0) == 2) && unk_0xD2994D0723F71967(iVar13, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_4 = unk_0x053C780A55718FCB(iVar10, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_5 = unk_0x053C780A55718FCB(iVar11, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_6 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_4 = 100f;
					Global_1604248.f_34339[iVar0 /*113*/].f_5 = 0f;
					Global_1604248.f_34339[iVar0 /*113*/].f_6 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_7 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar14, iVar0) == 5 && unk_0xD2994D0723F71967(iVar15, iVar0) == 3)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_8 = { unk_0x2E7CBE121E5B118F(iVar14, iVar0) };
					Global_1604248.f_34339[iVar0 /*113*/].f_11 = unk_0x053C780A55718FCB(iVar15, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_8 = { 0f, 0f, 0f };
					Global_1604248.f_34339[iVar0 /*113*/].f_11 = 0f;
				}
				Global_1604248.f_34339[iVar0 /*113*/].f_35 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
				Global_1604248.f_34339[iVar0 /*113*/].f_36 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
				Global_1604248.f_34339[iVar0 /*113*/].f_37 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar0);
				if (unk_0xD2994D0723F71967(iVar22, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_63 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_60 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_66 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_64 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_61 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_67 = unk_0xE00F2F3EC50DF5F9(iVar27, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_65 = unk_0xE00F2F3EC50DF5F9(iVar28, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_62 = unk_0xE00F2F3EC50DF5F9(iVar29, iVar0);
					Global_1604248.f_34339[iVar0 /*113*/].f_68 = unk_0xE00F2F3EC50DF5F9(iVar30, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_63 = -1;
					Global_1604248.f_34339[iVar0 /*113*/].f_60 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_66 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_64 = -1;
					Global_1604248.f_34339[iVar0 /*113*/].f_61 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_67 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_65 = -1;
					Global_1604248.f_34339[iVar0 /*113*/].f_62 = 0;
					Global_1604248.f_34339[iVar0 /*113*/].f_68 = 0;
				}
				Global_1604248.f_34339[iVar0 /*113*/].f_26 = unk_0xE00F2F3EC50DF5F9(iVar32, iVar0);
				if (unk_0xD2994D0723F71967(iVar33, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar33, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_27 = -1;
				}
				Global_1604248.f_34339[iVar0 /*113*/].f_29 = unk_0xE00F2F3EC50DF5F9(iVar36, iVar0);
				if (unk_0xD2994D0723F71967(iVar37, iVar0) == 3 && unk_0x053C780A55718FCB(iVar37, iVar0) > 0f)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_30 = unk_0x053C780A55718FCB(iVar37, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_30 = 1001f;
				}
				if (unk_0xD2994D0723F71967(iVar31, iVar0) == 3 && unk_0x053C780A55718FCB(iVar31, iVar0) >= 0f)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_33 = unk_0x053C780A55718FCB(iVar31, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_33 = 1.5f;
				}
				if (unk_0xD2994D0723F71967(iVar38, iVar0) == 3 && unk_0x053C780A55718FCB(iVar38, iVar0) > 0f)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_31 = unk_0x053C780A55718FCB(iVar38, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_31 = 1001f;
				}
				if (unk_0xD2994D0723F71967(iVar39, iVar0) == 3 && unk_0x053C780A55718FCB(iVar39, iVar0) > 0f)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_32 = unk_0x053C780A55718FCB(iVar39, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_32 = 1001f;
				}
				Global_1604248.f_34339[iVar0 /*113*/].f_39 = unk_0xE00F2F3EC50DF5F9(iVar40, iVar0);
				Global_1604248.f_34339[iVar0 /*113*/].f_40 = unk_0xE00F2F3EC50DF5F9(iVar41, iVar0);
				if (unk_0xD2994D0723F71967(iVar42, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_41 = unk_0xE00F2F3EC50DF5F9(iVar42, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_41 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar43, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_42 = unk_0xE00F2F3EC50DF5F9(iVar43, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_42 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar34, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_25 = unk_0xE00F2F3EC50DF5F9(iVar34, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_25 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar35, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_24 = unk_0xE00F2F3EC50DF5F9(iVar35, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_24 = -1;
				}
				Global_1604248.f_34339[iVar0 /*113*/].f_97 = unk_0xE00F2F3EC50DF5F9(iVar44, iVar0);
				if (unk_0xD2994D0723F71967(iVar46, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_56 = unk_0xE00F2F3EC50DF5F9(iVar46, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_56 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar45, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_57 = unk_0xE00F2F3EC50DF5F9(iVar45, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_57 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar47, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_58 = unk_0xE00F2F3EC50DF5F9(iVar47, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_58 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar50, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_59 = unk_0xE00F2F3EC50DF5F9(iVar50, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_59 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar51, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_38 = unk_0xE00F2F3EC50DF5F9(iVar51, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_38 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar52, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_69 = unk_0xE00F2F3EC50DF5F9(iVar52, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_69 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar60, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_87 = unk_0xE00F2F3EC50DF5F9(iVar60, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_87 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar61, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_88 = unk_0xE00F2F3EC50DF5F9(iVar61, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_88 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar53, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_70 = unk_0xE00F2F3EC50DF5F9(iVar53, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_70 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar54, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_71 = unk_0xE00F2F3EC50DF5F9(iVar54, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_71 = 1;
				}
				if (unk_0xD2994D0723F71967(iVar55, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_84 = unk_0xE00F2F3EC50DF5F9(iVar55, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_84 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar56, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_85 = unk_0xE00F2F3EC50DF5F9(iVar56, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_85 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar57, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_86 = unk_0xE00F2F3EC50DF5F9(iVar57, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_86 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar48, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_44 = unk_0xE00F2F3EC50DF5F9(iVar48, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_44 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar49, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_45 = unk_0xE00F2F3EC50DF5F9(iVar49, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_45 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar62, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_34 = unk_0xE00F2F3EC50DF5F9(iVar62, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_34 = 0;
				}
				if (Global_1604248.f_2 != 6 && unk_0xD2994D0723F71967(iVar58, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_95 = unk_0xE00F2F3EC50DF5F9(iVar58, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_95 = -1;
				}
				if (Global_1604248.f_2 != 6 && unk_0xD2994D0723F71967(iVar59, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_96 = unk_0xE00F2F3EC50DF5F9(iVar59, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_96 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar63, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_82 = unk_0xE00F2F3EC50DF5F9(iVar63, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_82 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar64, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_83 = unk_0xE00F2F3EC50DF5F9(iVar64, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_83 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xD2994D0723F71967(uVar100[iVar1], iVar0) == 5)
					{
						Global_1604248.f_34339[iVar0 /*113*/].f_99[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar100[iVar1], iVar0) };
					}
					else
					{
						Global_1604248.f_34339[iVar0 /*113*/].f_99[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xD2994D0723F71967(uVar103[iVar1], iVar0) == 3)
					{
						Global_1604248.f_34339[iVar0 /*113*/].f_106[iVar1] = unk_0x053C780A55718FCB(uVar103[iVar1], iVar0);
					}
					else
					{
						Global_1604248.f_34339[iVar0 /*113*/].f_106[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0xD2994D0723F71967(iVar106, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_98 = unk_0xE00F2F3EC50DF5F9(iVar106, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_98 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar107, iVar0) == 2)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_109 = unk_0xE00F2F3EC50DF5F9(iVar107, iVar0);
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_109 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar108, iVar0) == 5)
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_110 = { unk_0x2E7CBE121E5B118F(iVar108, iVar0) };
				}
				else
				{
					Global_1604248.f_34339[iVar0 /*113*/].f_110 = { 0f, 0f, 0f };
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1604248.f_19 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1604248.f_34339[iVar0 /*113*/].f_13[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar3], iVar0);
						Global_1604248.f_34339[iVar0 /*113*/].f_18[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar70[iVar3], iVar0);
						if (Global_1604248.f_34339[iVar0 /*113*/].f_18[iVar3] == -1)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_18[iVar3] = 99999;
						}
						if (unk_0xD2994D0723F71967(uVar75[iVar3], iVar0) == 2)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_89[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_89[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar80[iVar3], iVar0) == 2)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_72[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar80[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_72[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar85[iVar3], iVar0) == 2)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_77[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_77[iVar3] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar90[iVar3], iVar0) == 2)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_46[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar90[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_46[iVar3] = -1;
						}
						if (unk_0xD2994D0723F71967(uVar95[iVar3], iVar0) == 2)
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_51[iVar3] = unk_0xE00F2F3EC50DF5F9(uVar95[iVar3], iVar0);
						}
						else
						{
							Global_1604248.f_34339[iVar0 /*113*/].f_51[iVar3] = -1;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_138(int iParam0)
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
	
	iVar5 = unk_0x8140B477AA55A05E(iParam0, "weap");
	Global_1604248.f_33510 = unk_0x2E3E2CC20DBC563B(iVar5, "no");
	if (Global_1604248 == 0)
	{
		if (Global_1604248.f_33510 > 40)
		{
			Global_1604248.f_33510 = 40;
		}
	}
	else if (Global_1604248.f_33510 > 40)
	{
		Global_1604248.f_33510 = 40;
	}
	Global_1604248.f_33512 = unk_0x2E3E2CC20DBC563B(iVar5, "time");
	Global_1604248.f_33513 = unk_0x2E3E2CC20DBC563B(iVar5, "pal");
	Global_1604248.f_42 = unk_0x2E3E2CC20DBC563B(iVar5, "blip");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar5, "loc");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar5, "head");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar5, "type");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar5, "sub");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar5, "bits");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar5, "clip");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar5, "brest1");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar5, "brest2");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar5, "brest3");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar5, "brest4");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_33510 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1604248.f_33514[iVar0 /*20*/] = { unk_0x2E7CBE121E5B118F(iVar6, iVar0) };
			Global_1604248.f_33514[iVar0 /*20*/].f_3 = unk_0x053C780A55718FCB(iVar7, iVar0);
			iVar1 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
			Global_1604248.f_33514[iVar0 /*20*/].f_12 = iVar1;
			if (!func_139(Global_1604248.f_33514[iVar0 /*20*/].f_12))
			{
				if (Global_1604248.f_33514[iVar0 /*20*/].f_12 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1604248.f_33514[iVar0 /*20*/].f_12 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1604248.f_33514[iVar0 /*20*/].f_12 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1604248.f_33514[iVar0 /*20*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
			Global_1604248.f_33514[iVar0 /*20*/].f_6 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
			Global_1604248.f_33514[iVar0 /*20*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
			if (unk_0xD2994D0723F71967(iVar12, iVar0) == 1)
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[0] = unk_0x364E078A68FEFCF7(iVar12, iVar0);
			}
			else
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[0] = 0;
			}
			if (unk_0xD2994D0723F71967(iVar13, iVar0) == 1)
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[1] = unk_0x364E078A68FEFCF7(iVar13, iVar0);
			}
			else
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[1] = 0;
			}
			if (unk_0xD2994D0723F71967(iVar14, iVar0) == 1)
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[2] = unk_0x364E078A68FEFCF7(iVar14, iVar0);
			}
			else
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[2] = 0;
			}
			if (unk_0xD2994D0723F71967(iVar15, iVar0) == 1)
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[3] = unk_0x364E078A68FEFCF7(iVar15, iVar0);
			}
			else
			{
				Global_1604248.f_33514[iVar0 /*20*/].f_7[3] = 0;
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar16 = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0xD2994D0723F71967(iVar16, iVar2) == 2)
				{
					Global_1604248.f_33514[iVar0 /*20*/].f_13[iVar2] = unk_0xE00F2F3EC50DF5F9(iVar16, iVar2);
				}
				else
				{
					Global_1604248.f_33514[iVar0 /*20*/].f_13[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_139(int iParam0)
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
		case joaat("pickup_weapon_hominglauncher"):
		case joaat("pickup_weapon_proxmine"):
		case joaat("pickup_weapon_hatchet"):
		case joaat("pickup_weapon_railgun"):
		case joaat("pickup_weapon_heavyshotgun"):
		case joaat("pickup_weapon_marksmanrifle"):
			return 1;
		
		default:
	}
	return 0;
}

void func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	
	if (unk_0x8140B477AA55A05E(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x8140B477AA55A05E(iParam0, "ptemp");
	Global_1604248.f_76294 = unk_0x2E3E2CC20DBC563B(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_76294 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD2994D0723F71967(uVar5[iVar0], iVar1) == 5)
			{
				Global_1604248.f_74163[iVar0 /*213*/][iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_74163[iVar0 /*213*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar16[iVar0], iVar1) == 5)
			{
				Global_1604248.f_74163[iVar0 /*213*/].f_91[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_74163[iVar0 /*213*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar27[iVar0], iVar1) == 2)
			{
				Global_1604248.f_74163[iVar0 /*213*/].f_182[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_74163[iVar0 /*213*/].f_182[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_141(int iParam0)
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
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	
	iVar5 = unk_0x8140B477AA55A05E(iParam0, "obj");
	Global_1604248.f_27609 = unk_0x2E3E2CC20DBC563B(iVar5, "no");
	Global_1604248.f_27610 = unk_0x2E3E2CC20DBC563B(iVar5, "pal");
	Global_1604248.f_27611 = unk_0x2E3E2CC20DBC563B(iVar5, "rtm");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar5, "loc");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar5, "head");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar5, "model");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar5, "ped");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar5, "rsp");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar5, "rot");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar5, "cont");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar5, "valu");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar5, "ammoforwep");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar5, "cpup");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar5, "cpupr");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar5, "cpupt");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar5, "bits");
	if (func_87())
	{
		iVar8 = unk_0xBC3DFFCED0175B93(iVar5, "obrr");
		iVar9 = unk_0xBC3DFFCED0175B93(iVar5, "obrmr");
		iVar10 = unk_0xBC3DFFCED0175B93(iVar5, "osnt");
		iVar11 = unk_0xBC3DFFCED0175B93(iVar5, "osnei");
		iVar12 = unk_0xBC3DFFCED0175B93(iVar5, "o2sp");
		iVar13 = unk_0xBC3DFFCED0175B93(iVar5, "o2sh");
		iVar25 = unk_0xBC3DFFCED0175B93(iVar5, "mgbs");
		iVar26 = unk_0xBC3DFFCED0175B93(iVar5, "objct");
		iVar27 = unk_0xBC3DFFCED0175B93(iVar5, "team");
		iVar28 = unk_0xBC3DFFCED0175B93(iVar5, "spwn");
		iVar29 = unk_0xBC3DFFCED0175B93(iVar5, "objct2");
		iVar30 = unk_0xBC3DFFCED0175B93(iVar5, "team2");
		iVar31 = unk_0xBC3DFFCED0175B93(iVar5, "spwn2");
		iVar32 = unk_0xBC3DFFCED0175B93(iVar5, "objct3");
		iVar33 = unk_0xBC3DFFCED0175B93(iVar5, "team3");
		iVar34 = unk_0xBC3DFFCED0175B93(iVar5, "spwn3");
		iVar35 = unk_0xBC3DFFCED0175B93(iVar5, "objct4");
		iVar36 = unk_0xBC3DFFCED0175B93(iVar5, "team4");
		iVar37 = unk_0xBC3DFFCED0175B93(iVar5, "spwn4");
		iVar38 = unk_0xBC3DFFCED0175B93(iVar5, "hlt");
		iVar39 = unk_0xBC3DFFCED0175B93(iVar5, "obb");
		iVar40 = unk_0xBC3DFFCED0175B93(iVar5, "obbc");
		iVar41 = unk_0xBC3DFFCED0175B93(iVar5, "objclt");
		iVar42 = unk_0xBC3DFFCED0175B93(iVar5, "objcr");
		iVar43 = unk_0xBC3DFFCED0175B93(iVar5, "obcra");
		iVar44 = unk_0xBC3DFFCED0175B93(iVar5, "ospdl");
		iVar45 = unk_0xBC3DFFCED0175B93(iVar5, "osgr");
		iVar46 = unk_0xBC3DFFCED0175B93(iVar5, "objcnm");
		iVar47 = unk_0xBC3DFFCED0175B93(iVar5, "objap");
		iVar48 = unk_0xBC3DFFCED0175B93(iVar5, "objapt");
		iVar49 = unk_0xBC3DFFCED0175B93(iVar5, "obint");
		iVar50 = unk_0xBC3DFFCED0175B93(iVar5, "obrom");
		iVar51 = unk_0xBC3DFFCED0175B93(iVar5, "inco");
		iVar52 = unk_0xBC3DFFCED0175B93(iVar5, "inhsh");
		iVar53 = unk_0xBC3DFFCED0175B93(iVar5, "vehpu");
		iVar54 = unk_0xBC3DFFCED0175B93(iVar5, "airpu");
		iVar57 = unk_0xBC3DFFCED0175B93(iVar5, "gotor");
		iVar58 = unk_0xBC3DFFCED0175B93(iVar5, "nmpass");
		iVar59 = unk_0xBC3DFFCED0175B93(iVar5, "nmfail");
		iVar55 = unk_0xBC3DFFCED0175B93(iVar5, "omcp");
		iVar56 = unk_0xBC3DFFCED0175B93(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1604248.f_19 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar60[iVar2] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar65[iVar2] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar70[iVar2] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar75[iVar2] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_27609 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1604248.f_27612[iVar0 /*87*/] = { unk_0x2E7CBE121E5B118F(iVar6, iVar0) };
			Global_1604248.f_27612[iVar0 /*87*/].f_3 = unk_0x053C780A55718FCB(iVar7, iVar0);
			iVar1 = unk_0xE00F2F3EC50DF5F9(iVar14, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_15 = iVar1;
			if (Global_1604248.f_27612[iVar0 /*87*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1604248.f_27612[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0xA030BF5EA7907F19(Global_1604248.f_27612[iVar0 /*87*/].f_15))
			{
				Global_1604248.f_27612[iVar0 /*87*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_1604248.f_27612[iVar0 /*87*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_1604248.f_27612[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1604248.f_27612[iVar0 /*87*/].f_15 == joaat("prop_cctv_cam_07a"))
			{
				Global_1604248.f_27612[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1604248.f_27612[iVar0 /*87*/].f_26 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_4 = { unk_0x2E7CBE121E5B118F(iVar17, iVar0) };
			Global_1604248.f_27612[iVar0 /*87*/].f_30 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_43 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_44 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_45 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_46 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_47 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_48 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar0);
			Global_1604248.f_27612[iVar0 /*87*/].f_41 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
			if (unk_0xD2994D0723F71967(iVar54, iVar0) == 2)
			{
				if (unk_0xE00F2F3EC50DF5F9(iVar54, iVar0) == 1)
				{
					if (!unk_0x889D01384B54BCE3(Global_1604248.f_27612[iVar0 /*87*/].f_41, 4))
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_27612[iVar0 /*87*/].f_41), 4);
					}
				}
			}
			if (func_87())
			{
				if (((unk_0xD2994D0723F71967(iVar8, iVar0) == 3 && unk_0xD2994D0723F71967(iVar9, iVar0) == 3) && unk_0xD2994D0723F71967(iVar10, iVar0) == 2) && unk_0xD2994D0723F71967(iVar11, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_7 = unk_0x053C780A55718FCB(iVar8, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_8 = unk_0x053C780A55718FCB(iVar9, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_10 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_7 = 50f;
					Global_1604248.f_27612[iVar0 /*87*/].f_8 = 0f;
					Global_1604248.f_27612[iVar0 /*87*/].f_9 = 0;
					Global_1604248.f_27612[iVar0 /*87*/].f_10 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar12, iVar0) == 5 && unk_0xD2994D0723F71967(iVar13, iVar0) == 3)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_11 = { unk_0x2E7CBE121E5B118F(iVar12, iVar0) };
					Global_1604248.f_27612[iVar0 /*87*/].f_14 = unk_0x053C780A55718FCB(iVar13, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_11 = { 0f, 0f, 0f };
					Global_1604248.f_27612[iVar0 /*87*/].f_14 = 0f;
				}
				Global_1604248.f_27612[iVar0 /*87*/].f_42 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
				Global_1604248.f_27612[iVar0 /*87*/].f_31 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
				Global_1604248.f_27612[iVar0 /*87*/].f_32 = unk_0xE00F2F3EC50DF5F9(iVar27, iVar0);
				Global_1604248.f_27612[iVar0 /*87*/].f_33 = unk_0xE00F2F3EC50DF5F9(iVar28, iVar0);
				if (unk_0xD2994D0723F71967(iVar29, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_57 = unk_0xE00F2F3EC50DF5F9(iVar29, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_54 = unk_0xE00F2F3EC50DF5F9(iVar30, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_60 = unk_0xE00F2F3EC50DF5F9(iVar31, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_58 = unk_0xE00F2F3EC50DF5F9(iVar32, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_55 = unk_0xE00F2F3EC50DF5F9(iVar33, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_61 = unk_0xE00F2F3EC50DF5F9(iVar34, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_59 = unk_0xE00F2F3EC50DF5F9(iVar35, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_56 = unk_0xE00F2F3EC50DF5F9(iVar36, iVar0);
					Global_1604248.f_27612[iVar0 /*87*/].f_62 = unk_0xE00F2F3EC50DF5F9(iVar37, iVar0);
				}
				Global_1604248.f_27612[iVar0 /*87*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar38, iVar0);
				Global_1604248.f_27612[iVar0 /*87*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar39, iVar0);
				Global_1604248.f_27612[iVar0 /*87*/].f_35 = unk_0xE00F2F3EC50DF5F9(iVar53, iVar0);
				if (unk_0xD2994D0723F71967(iVar40, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_29 = unk_0xE00F2F3EC50DF5F9(iVar40, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_29 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar42, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_49 = unk_0xE00F2F3EC50DF5F9(iVar42, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_49 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar41, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_50 = unk_0xE00F2F3EC50DF5F9(iVar41, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_50 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar43, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_51 = unk_0xE00F2F3EC50DF5F9(iVar43, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_51 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar44, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_53 = unk_0xE00F2F3EC50DF5F9(iVar44, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_53 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar45, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_34 = unk_0xE00F2F3EC50DF5F9(iVar45, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_34 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar46, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_78 = unk_0xE00F2F3EC50DF5F9(iVar46, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_78 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar55, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_75 = unk_0xE00F2F3EC50DF5F9(iVar55, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_75 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar56, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_76 = unk_0xE00F2F3EC50DF5F9(iVar56, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_76 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar47, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_79 = unk_0xE00F2F3EC50DF5F9(iVar47, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_79 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar48, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_80 = unk_0xE00F2F3EC50DF5F9(iVar48, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_80 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar49, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_81 = unk_0xE00F2F3EC50DF5F9(iVar49, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_81 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar50, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_82 = unk_0xE00F2F3EC50DF5F9(iVar50, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_82 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar51, iVar0) == 5 && unk_0xD2994D0723F71967(iVar52, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_83 = { unk_0x2E7CBE121E5B118F(iVar51, iVar0) };
					Global_1604248.f_27612[iVar0 /*87*/].f_86 = unk_0xE00F2F3EC50DF5F9(iVar52, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_83 = { 0f, 0f, 0f };
					Global_1604248.f_27612[iVar0 /*87*/].f_86 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar57, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_52 = unk_0xE00F2F3EC50DF5F9(iVar57, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_52 = 0;
				}
				if (unk_0xD2994D0723F71967(iVar58, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_73 = unk_0xE00F2F3EC50DF5F9(iVar58, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_73 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar59, iVar0) == 2)
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_74 = unk_0xE00F2F3EC50DF5F9(iVar59, iVar0);
				}
				else
				{
					Global_1604248.f_27612[iVar0 /*87*/].f_74 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1604248.f_19 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1604248.f_27612[iVar0 /*87*/].f_16[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar60[iVar2], iVar0);
						Global_1604248.f_27612[iVar0 /*87*/].f_21[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar2], iVar0);
						if (Global_1604248.f_27612[iVar0 /*87*/].f_21[iVar2] == -1)
						{
							Global_1604248.f_27612[iVar0 /*87*/].f_21[iVar2] = 99999;
						}
						if (unk_0xD2994D0723F71967(uVar70[iVar2], iVar0) == 2)
						{
							Global_1604248.f_27612[iVar0 /*87*/].f_63[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar70[iVar2], iVar0);
						}
						else
						{
							Global_1604248.f_27612[iVar0 /*87*/].f_63[iVar2] = 0;
						}
						if (unk_0xD2994D0723F71967(uVar75[iVar2], iVar0) == 2)
						{
							Global_1604248.f_27612[iVar0 /*87*/].f_68[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar2], iVar0);
						}
						else
						{
							Global_1604248.f_27612[iVar0 /*87*/].f_68[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_142(int iParam0)
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
	
	iVar6 = unk_0x8140B477AA55A05E(iParam0, "zone");
	Global_1604248.f_58555 = unk_0x2E3E2CC20DBC563B(iVar6, "no");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar6, "vto");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar6, "vld");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar6, "zntp");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar6, "znbs");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar6, "znwd");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar6, "znwvd");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar6, "znatp");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar6, "znwid");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0xBC3DFFCED0175B93(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0xBC3DFFCED0175B93(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1604248.f_58555 > 10)
	{
		Global_1604248.f_58555 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_58555 - 1))
	{
		Global_1604248.f_58578[iVar0 /*26*/][0 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar7, iVar0) };
		Global_1604248.f_58578[iVar0 /*26*/][1 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar8, iVar0) };
		Global_1604248.f_58578[iVar0 /*26*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD2994D0723F71967(uVar10[iVar1], iVar0) == 2)
			{
				Global_1604248.f_58578[iVar0 /*26*/].f_10[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1604248.f_58578[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0xD2994D0723F71967(uVar15[iVar1], iVar0) == 2)
			{
				Global_1604248.f_58578[iVar0 /*26*/].f_15[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1604248.f_58578[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0xD2994D0723F71967(iVar20, iVar0) == 2)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_20 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar21, iVar0) == 3)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_22 = unk_0x053C780A55718FCB(iVar21, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar22, iVar0) == 3)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_23 = unk_0x053C780A55718FCB(iVar22, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar23, iVar0) == 2)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_8 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar24, iVar0) == 3)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_7 = unk_0x053C780A55718FCB(iVar24, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar25, iVar0) == 2)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_21 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
		}
		else
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x8140B477AA55A05E(iParam0, "usj");
	Global_1604248.f_57930 = unk_0x2E3E2CC20DBC563B(iVar1, "no");
	iVar2 = unk_0xBC3DFFCED0175B93(iVar1, "vto");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar1, "vld");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar1, "vcm");
	if (Global_1604248.f_57930 > 10)
	{
		Global_1604248.f_57930 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_57930 - 1))
	{
		Global_1604248.f_57931[iVar0 /*9*/] = { unk_0x2E7CBE121E5B118F(iVar2, iVar0) };
		Global_1604248.f_57931[iVar0 /*9*/].f_3 = { unk_0x2E7CBE121E5B118F(iVar3, iVar0) };
		Global_1604248.f_57931[iVar0 /*9*/].f_6 = { unk_0x2E7CBE121E5B118F(iVar4, iVar0) };
		iVar0++;
	}
}

void func_144(int iParam0)
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
	var uVar27[4];
	var uVar32[5];
	
	if (unk_0x8140B477AA55A05E(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x8140B477AA55A05E(iParam0, "ddtrig");
	Global_1604248.f_62296 = unk_0x2E3E2CC20DBC563B(iVar4, "no");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar4, "id");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar4, "fid");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar4, "rule");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar4, "team");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar4, "pos");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar4, "rad");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar4, "tdel");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar4, "tpnt");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar4, "crkls");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar4, "fcsped");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar4, "prty");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar4, "dbs");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar4, "dbs2");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar4, "dspk");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar4, "dspk2");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar4, "panim");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar4, "blok");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar4, "root");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar4, "mgveh");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar4, "vehtg");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar4, "prerq");
	iVar26 = unk_0xBC3DFFCED0175B93(iVar4, "vehdm");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar2, "trsg", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar32[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1604248.f_62296 > 69)
	{
		Global_1604248.f_62296 = 69;
	}
	if (unk_0xD2994D0723F71967(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1604248.f_62296 - 1))
		{
			if (unk_0xD2994D0723F71967(iVar8, iVar0) == 2)
			{
				func_145(&(Global_1604248.f_58897[iVar0 /*45*/]), iVar0);
				if (iVar6 != 0 && unk_0xD2994D0723F71967(iVar6, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_1 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/] = unk_0xE00F2F3EC50DF5F9(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_2 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_3 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_5 = { unk_0x2E7CBE121E5B118F(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_8 = unk_0x053C780A55718FCB(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_11 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar0);
				}
				if (iVar15 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_12 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar0);
				}
				if (iVar16 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_10 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar0);
				}
				if (iVar23 != 0 && unk_0xD2994D0723F71967(iVar23, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_16 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar0);
				}
				if (iVar13 != 0 && unk_0xD2994D0723F71967(iVar13, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_20 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0xD2994D0723F71967(iVar14, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_21 = unk_0xE00F2F3EC50DF5F9(iVar14, iVar0);
				}
				if (iVar18 != 0 && unk_0xD2994D0723F71967(iVar18, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_13 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0xD2994D0723F71967(iVar19, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_14 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0xD2994D0723F71967(iVar20, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_15 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar0);
				}
				if (iVar24 != 0 && unk_0xD2994D0723F71967(iVar24, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_17 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar0);
				}
				if (iVar25 != 0 && unk_0xD2994D0723F71967(iVar25, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_18 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0xD2994D0723F71967(iVar26, iVar0) == 2)
				{
					Global_1604248.f_58897[iVar0 /*45*/].f_19 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar27[iVar1] != 0 && unk_0xD2994D0723F71967(uVar27[iVar1], iVar0) == 2)
					{
						Global_1604248.f_58897[iVar0 /*45*/].f_22[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar27[iVar1], iVar0);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 4)
				{
					if (unk_0xD2994D0723F71967(uVar32[iVar1], iVar0) == 2)
					{
						Global_1604248.f_58897[iVar0 /*45*/].f_39[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar32[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar21 != 0)
				{
					StringCopy(&(Global_1604248.f_58897[iVar0 /*45*/].f_27), unk_0xE2B9F5A91729B995(iVar21, iVar0), 24);
				}
				if (iVar22 != 0)
				{
					StringCopy(&(Global_1604248.f_58897[iVar0 /*45*/].f_33), unk_0xE2B9F5A91729B995(iVar22, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1604248.f_62296 - 1))
		{
			Global_1604248.f_58897[iVar0 /*45*/] = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_2 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_3 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_5 = { 0f, 0f, 0f };
			Global_1604248.f_58897[iVar0 /*45*/].f_8 = 3f;
			Global_1604248.f_58897[iVar0 /*45*/].f_4 = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_11 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_20 = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_12 = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_9 = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_10 = 0;
			Global_1604248.f_58897[iVar0 /*45*/].f_13 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_14 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_15 = 0;
			StringCopy(&(Global_1604248.f_58897[iVar0 /*45*/].f_27), "", 24);
			StringCopy(&(Global_1604248.f_58897[iVar0 /*45*/].f_33), "", 24);
			Global_1604248.f_58897[iVar0 /*45*/].f_16 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_17 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_18 = -1;
			Global_1604248.f_58897[iVar0 /*45*/].f_19 = 0;
			iVar0++;
		}
	}
	if (unk_0x77DBDA8A5753BCA3(iParam0, "dtmp") == 2)
	{
		Global_1604248.f_62292[0] = unk_0x2E3E2CC20DBC563B(iParam0, "dtmp");
	}
	else
	{
		Global_1604248.f_62292[0] = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iParam0, "dtmp2") == 2)
	{
		Global_1604248.f_62292[1] = unk_0x2E3E2CC20DBC563B(iParam0, "dtmp2");
	}
	else
	{
		Global_1604248.f_62292[1] = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iParam0, "dtmp3") == 2)
	{
		Global_1604248.f_62292[2] = unk_0x2E3E2CC20DBC563B(iParam0, "dtmp3");
	}
	else
	{
		Global_1604248.f_62292[2] = 0;
	}
}

void func_145(var uParam0, int iParam1)
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
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		uParam0->f_39[iVar0] = 0;
		iVar0++;
	}
	if (iParam1 != -1)
	{
		unk_0x29DB79DD4D939B38(&(Global_1604248.f_62292[(iParam1 / 32)]), (iParam1 % 32));
	}
}

void func_146(int iParam0)
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
	
	iVar2 = unk_0x8140B477AA55A05E(iParam0, "race");
	Global_1604248.f_27037 = unk_0x2E3E2CC20DBC563B(iVar2, "chp");
	iVar3 = (Global_1604248.f_27037 - 1);
	Global_1604248.f_27038 = unk_0x2E3E2CC20DBC563B(iVar2, "lap");
	Global_1604248.f_27039 = unk_0x2E3E2CC20DBC563B(iVar2, "type");
	if (func_70() == 2)
	{
		if (Global_1604248.f_27039 == 6)
		{
			Global_1604248.f_27039 = 0;
		}
		else if (Global_1604248.f_27039 == 7)
		{
			Global_1604248.f_27039 = 1;
		}
	}
	Global_1604248.f_27040 = unk_0x2E3E2CC20DBC563B(iVar2, "gtar");
	Global_1604248.f_27550 = unk_0xA6F2F8B77922BC0C(iVar2, "head");
	Global_1604248.f_27551 = unk_0xA6F2F8B77922BC0C(iVar2, "lrgs");
	Global_1604248.f_27552 = unk_0xA6F2F8B77922BC0C(iVar2, "udgs");
	Global_1604248.f_27553 = unk_0xA6F2F8B77922BC0C(iVar2, "gw");
	Global_1604248.f_27554 = unk_0xA6F2F8B77922BC0C(iVar2, "gl");
	Global_1604248.f_27555 = unk_0x2E3E2CC20DBC563B(iVar2, "lanes");
	Global_1604248.f_23549 = { unk_0x7BC3CDE3564C2FE3(iVar2, "grid") };
	Global_1604248.f_27042 = unk_0x2E3E2CC20DBC563B(iVar2, "icv");
	Global_1604248.f_27044 = unk_0x2E3E2CC20DBC563B(iVar2, "tri1");
	Global_1604248.f_27045 = unk_0x2E3E2CC20DBC563B(iVar2, "tri2");
	Global_1604248.f_27046 = unk_0x2E3E2CC20DBC563B(iVar2, "clbs");
	Global_1604248.f_27549 = unk_0x2E3E2CC20DBC563B(iVar2, "ptp");
	Global_1604248.f_27547 = unk_0x2E3E2CC20DBC563B(iVar2, "strtg");
	Global_1604248.f_27548 = unk_0x2E3E2CC20DBC563B(iVar2, "rcdam");
	Global_1604248.f_24748 = unk_0xA6F2F8B77922BC0C(iVar2, "rdis");
	Global_1604248.f_27545 = unk_0x2E3E2CC20DBC563B(iVar2, "gridty");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar2, "chh");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar2, "chs");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar2, "chl");
	uVar7 = unk_0xBC3DFFCED0175B93(iVar2, "rsp");
	if (Global_1604248.f_27039 == 8)
	{
		Global_1604248.f_27037 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_83(unk_0x2E7CBE121E5B118F(iVar6, iVar0)))
			{
				Global_1604248.f_27037++;
			}
			iVar0++;
		}
		iVar3 = Global_1604248.f_27037;
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1604248.f_27039 == 8)
			{
				iVar8 = func_147(iVar6, iVar8);
			}
			else
			{
				iVar8 = iVar0;
			}
			Global_1604248.f_24253[iVar0 /*3*/] = { unk_0x2E7CBE121E5B118F(iVar6, iVar8) };
			Global_1604248.f_24535[iVar0] = unk_0x053C780A55718FCB(iVar4, iVar8);
			if (unk_0xD2994D0723F71967(iVar5, iVar8) == 3)
			{
				Global_1604248.f_24677[iVar0] = unk_0x053C780A55718FCB(iVar5, iVar8);
			}
			else
			{
				Global_1604248.f_24677[iVar0] = 1f;
			}
			if (Global_1604248.f_24677[iVar0] < 1f)
			{
				Global_1604248.f_24677[iVar0] = 1f;
			}
			Global_1604248.f_24464[iVar0] = unk_0x364E078A68FEFCF7(uVar7, iVar8);
			iVar8++;
		}
		iVar0++;
	}
	iVar9 = unk_0xBC3DFFCED0175B93(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_14 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
			Global_1604248.f_27558[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar10 = unk_0xBC3DFFCED0175B93(iVar2, "aveh");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
		Global_1604248.f_27047[iVar0] = iVar1;
		Global_1604248.f_27063[iVar0] = 0;
		Global_1604248.f_27063[iVar0] = unk_0xE00F2F3EC50DF5F9(iVar11, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar17, "vspn", 8);
		StringIntConCat(&cVar17, iVar0, 8);
		uVar12[iVar0] = unk_0xBC3DFFCED0175B93(iVar2, &cVar17);
		iVar16 = 0;
		while (iVar16 <= iVar3)
		{
			Global_1604248.f_23552[iVar16 /*10*/][iVar0 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar12[iVar0], iVar16) };
			iVar16++;
		}
		iVar0++;
	}
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_83(unk_0x2E7CBE121E5B118F(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x8140B477AA55A05E(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x8140B477AA55A05E(iParam0, "dhprop");
	Global_1604248.f_71948 = unk_0x2E3E2CC20DBC563B(iVar1, "no");
	iVar2 = unk_0xBC3DFFCED0175B93(iVar1, "pos");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar1, "mn");
	if (Global_1604248.f_71948 > 25)
	{
		Global_1604248.f_71948 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_71948 - 1))
	{
		if (unk_0xD2994D0723F71967(iVar2, iVar0) == 5)
		{
			Global_1604248.f_71847[iVar0 /*4*/] = { unk_0x2E7CBE121E5B118F(iVar2, iVar0) };
			Global_1604248.f_71847[iVar0 /*4*/].f_3 = unk_0xE00F2F3EC50DF5F9(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_149(int iParam0)
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
	
	if (unk_0x8140B477AA55A05E(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x8140B477AA55A05E(iParam0, "ddblip");
	Global_1604248.f_71846 = unk_0x2E3E2CC20DBC563B(iVar1, "no");
	iVar2 = unk_0xBC3DFFCED0175B93(iVar1, "pos");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar1, "rule");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar1, "team");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar1, "type");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar1, "size");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar1, "veh");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar1, "clr");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar1, "bits");
	if (Global_1604248.f_71846 > 10)
	{
		Global_1604248.f_71846 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_71846 - 1))
	{
		if (unk_0xD2994D0723F71967(iVar2, iVar0) == 5)
		{
			Global_1604248.f_71745[iVar0 /*10*/] = { unk_0x2E7CBE121E5B118F(iVar2, iVar0) };
			Global_1604248.f_71745[iVar0 /*10*/].f_3 = unk_0xE00F2F3EC50DF5F9(iVar3, iVar0);
			Global_1604248.f_71745[iVar0 /*10*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar4, iVar0);
			Global_1604248.f_71745[iVar0 /*10*/].f_8 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
			Global_1604248.f_71745[iVar0 /*10*/].f_9 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		}
		if (unk_0xD2994D0723F71967(iVar5, iVar0) == 2)
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_6 = unk_0xE00F2F3EC50DF5F9(iVar5, iVar0);
		}
		else
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar6, iVar0) == 2)
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
		}
		else
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0xD2994D0723F71967(iVar7, iVar0) == 2)
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		}
		else
		{
			Global_1604248.f_71745[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_150(int iParam0)
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
	
	if (unk_0x8140B477AA55A05E(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x8140B477AA55A05E(iParam0, "mocap");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar5, "name");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar5, "bits");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar5, "bits2");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar5, "timer");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar5, "rng");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar5, "ccp");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar5, "ccr");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar5, "ccs");
	iVar62 = unk_0xBC3DFFCED0175B93(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xD2994D0723F71967(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1604248.f_68786[iVar0 /*434*/]), unk_0xE2B9F5A91729B995(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_68786[iVar0 /*434*/]), "", 64);
		}
		if (unk_0xD2994D0723F71967(iVar7, iVar0) == 2)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_16 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar8, iVar0) == 2)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_17 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar62, iVar0) == 2)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_424 = unk_0xE00F2F3EC50DF5F9(iVar62, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar9, iVar0) == 2)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_61 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar10, iVar0) == 2)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_62 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar11, iVar0) == 5)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_54 = { unk_0x2E7CBE121E5B118F(iVar11, iVar0) };
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0xD2994D0723F71967(iVar12, iVar0) == 3)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_60 = unk_0x053C780A55718FCB(iVar12, iVar0);
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar13, iVar0) == 5)
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_57 = { unk_0x2E7CBE121E5B118F(iVar13, iVar0) };
		}
		else
		{
			Global_1604248.f_68786[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0xBC3DFFCED0175B93(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD2994D0723F71967(uVar14[iVar0], iVar1) == 5)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar20[iVar0], iVar1) == 5)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar26[iVar0], iVar1) == 3)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_44[iVar1] = unk_0x053C780A55718FCB(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar32[iVar0], iVar1) == 3)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_49[iVar1] = unk_0x053C780A55718FCB(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0xD2994D0723F71967(uVar63[iVar0], iVar2) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_425[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0xD2994D0723F71967(uVar69[iVar0], iVar2) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_430[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar75[iVar0], iVar2) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_432[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD2994D0723F71967(uVar38[iVar0], iVar1) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0xE00F2F3EC50DF5F9(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xD2994D0723F71967(uVar44[iVar0], iVar1) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0xE00F2F3EC50DF5F9(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0xD2994D0723F71967(uVar50[iVar0], iVar1) == 2)
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0xE00F2F3EC50DF5F9(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0xD2994D0723F71967(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xE2B9F5A91729B995(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1604248.f_68786[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_151(int iParam0)
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
	
	if (unk_0x8140B477AA55A05E(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x8140B477AA55A05E(iParam0, "cuts");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar4, "name");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar4, "bits");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar4, "shot");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar4, "anim");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar4, "midp");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar4, "rng");
	iVar161 = unk_0xBC3DFFCED0175B93(iVar4, "train");
	iVar162 = unk_0xBC3DFFCED0175B93(iVar4, "trahl");
	iVar163 = unk_0xBC3DFFCED0175B93(iVar4, "traou");
	iVar164 = unk_0xBC3DFFCED0175B93(iVar4, "trapo");
	iVar165 = unk_0xBC3DFFCED0175B93(iVar4, "ccp");
	iVar166 = unk_0xBC3DFFCED0175B93(iVar4, "ccr");
	iVar167 = unk_0xBC3DFFCED0175B93(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xD2994D0723F71967(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/]), unk_0xE2B9F5A91729B995(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0xD2994D0723F71967(iVar6, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar6, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar7, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_43 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar8, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_42 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar9, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_44 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar10, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_735 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar165, iVar0) == 5)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_728 = { unk_0x2E7CBE121E5B118F(iVar165, iVar0) };
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0xD2994D0723F71967(iVar166, iVar0) == 3)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_731 = unk_0x053C780A55718FCB(iVar166, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar167, iVar0) == 5)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_732 = { unk_0x2E7CBE121E5B118F(iVar167, iVar0) };
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0xD2994D0723F71967(iVar161, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_436 = unk_0xE00F2F3EC50DF5F9(iVar161, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar162, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_438 = unk_0xE00F2F3EC50DF5F9(iVar162, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar163, iVar0) == 2)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_437 = unk_0xE00F2F3EC50DF5F9(iVar163, iVar0);
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar164, iVar0) == 5)
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_439 = { unk_0x2E7CBE121E5B118F(iVar164, iVar0) };
		}
		else
		{
			Global_1604248.f_62440[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xD2994D0723F71967(uVar95[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar101[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar89[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_32[iVar1] = unk_0x053C780A55718FCB(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar107[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_37[iVar1] = unk_0x053C780A55718FCB(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0xD2994D0723F71967(uVar11[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_45[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar17[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_66[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar23[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar29[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar35[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar41[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar47[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_331[iVar1] = unk_0x053C780A55718FCB(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar53[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_352[iVar1] = unk_0x053C780A55718FCB(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar71[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_373[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar77[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_394[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar83[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_415[iVar1] = unk_0x053C780A55718FCB(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar113[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_524[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0xD2994D0723F71967(uVar119[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar125[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar131[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar131[iVar0], iVar1) };
				Global_1604248.f_71991[iVar1] = Global_1604248.f_62440[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1604248.f_72012[iVar1] = Global_1604248.f_62440[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1604248.f_72033[iVar1] = Global_1604248.f_62440[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar137[iVar0], iVar1) == 5)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xD2994D0723F71967(uVar143[iVar0], iVar1) == 3)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_503[iVar1] = unk_0x053C780A55718FCB(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0xD2994D0723F71967(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0xE2B9F5A91729B995(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0xD2994D0723F71967(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0xE2B9F5A91729B995(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1604248.f_62440[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xD2994D0723F71967(uVar59[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0xE00F2F3EC50DF5F9(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xD2994D0723F71967(uVar65[iVar0], iVar1) == 2)
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1604248.f_62440[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_152(int iParam0)
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
	
	if (unk_0x8140B477AA55A05E(iParam0, "eoir") == 0 || unk_0x8140B477AA55A05E(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0xBC3DFFCED0175B93(iParam0, "eoid");
	iVar9 = unk_0xBC3DFFCED0175B93(iParam0, "eoet");
	iVar10 = unk_0x8140B477AA55A05E(iParam0, "eoir");
	iVar11 = unk_0x8140B477AA55A05E(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0xD2994D0723F71967(iVar8, iVar0) == 2)
		{
			Global_1604248.f_56304[iVar0] = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
		}
		else
		{
			Global_1604248.f_56304[iVar0] = -1;
		}
		if (unk_0xD2994D0723F71967(iVar9, iVar0) == 2)
		{
			Global_1604248.f_56273[iVar0] = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
		}
		else
		{
			Global_1604248.f_56273[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x77DBDA8A5753BCA3(iVar10, &cVar4) == 2)
				{
					Global_1604248.f_56335[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0x2E3E2CC20DBC563B(iVar10, &cVar4);
				}
				else
				{
					Global_1604248.f_56335[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x77DBDA8A5753BCA3(iVar11, &cVar4) == 2)
				{
					Global_1604248.f_57116[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0x2E3E2CC20DBC563B(iVar11, &cVar4);
				}
				else
				{
					Global_1604248.f_56335[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1604248.f_56304[iVar0];
		iVar13 = Global_1604248.f_56273[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1604248.f_56304[iVar3] == iVar12) && Global_1604248.f_56273[iVar3] == iVar13)
				{
					Global_1604248.f_56273[iVar3] = -1;
					Global_1604248.f_56304[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 4)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1604248.f_56335[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
							Global_1604248.f_57116[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
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

void func_153(int iParam0)
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
	
	iVar4 = unk_0x8140B477AA55A05E(iParam0, "kill");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar4, "no");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar4, "mcp");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1604248.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1604248.f_27026[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1604248.f_27026[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1604248.f_26532[iVar0 /*29*/][iVar1] = unk_0xE00F2F3EC50DF5F9(uVar8[iVar1], iVar0);
					Global_1604248.f_26532[iVar0 /*29*/].f_5[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar13[iVar1], iVar0);
					if (Global_1604248.f_26532[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1604248.f_26532[iVar0 /*29*/].f_10[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar18[iVar1], iVar0);
					if (unk_0xD2994D0723F71967(uVar23[iVar1], iVar0) == 2)
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_15[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0xD2994D0723F71967(uVar28[iVar1], iVar0) == 2)
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_20[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0xD2994D0723F71967(iVar6, iVar0) == 2)
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
					}
					else
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0xD2994D0723F71967(iVar7, iVar0) == 2)
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar7, iVar0);
					}
					else
					{
						Global_1604248.f_26532[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_154(int iParam0)
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
	
	iVar4 = unk_0x8140B477AA55A05E(iParam0, "goto");
	Global_1604248.f_27032[0] = unk_0x2E3E2CC20DBC563B(iVar4, "no");
	Global_1604248.f_5 = unk_0x2E3E2CC20DBC563B(iVar4, "atrig");
	iVar80 = unk_0xBC3DFFCED0175B93(iVar4, "lmcp");
	iVar81 = unk_0xBC3DFFCED0175B93(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1604248.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0xBC3DFFCED0175B93(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1604248.f_27032[0] - 1))
			{
				Global_1604248.f_24749[iVar0 /*99*/].f_1[0 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar5[iVar1], iVar0) };
				Global_1604248.f_24749[iVar0 /*99*/].f_14[0] = unk_0x053C780A55718FCB(uVar10[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_61[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar15[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_66[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar20[iVar1], iVar0);
				if (Global_1604248.f_24749[iVar0 /*99*/].f_66[iVar1] == -1)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_66[iVar1] = 99999;
				}
				Global_1604248.f_24749[iVar0 /*99*/].f_71[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar25[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_47[iVar1] = unk_0x053C780A55718FCB(uVar60[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_76[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar30[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_36[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar35[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_52 = unk_0xE00F2F3EC50DF5F9(uVar50[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_31[0] = unk_0xE00F2F3EC50DF5F9(uVar40[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_41[0] = unk_0xE00F2F3EC50DF5F9(uVar45[iVar1], iVar0);
				Global_1604248.f_24749[iVar0 /*99*/].f_97 = unk_0x053C780A55718FCB(uVar55[iVar1], iVar0);
				if (unk_0xD2994D0723F71967(iVar80, iVar0) == 2)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_93 = unk_0xE00F2F3EC50DF5F9(iVar80, iVar0);
				}
				else
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_93 = -1;
				}
				if (unk_0xD2994D0723F71967(iVar81, iVar0) == 2)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_94 = unk_0xE00F2F3EC50DF5F9(iVar81, iVar0);
				}
				else
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_94 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar65[iVar1], iVar0) == 2)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_56[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_56[iVar1] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar70[iVar1], iVar0) == 2)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_81[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_81[iVar1] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar75[iVar1], iVar0) == 2)
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_86[iVar1] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1604248.f_24749[iVar0 /*99*/].f_86[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0xBC3DFFCED0175B93(iVar4, "locbc");
	iVar83 = unk_0xBC3DFFCED0175B93(iVar4, "loc2rd");
	iVar84 = unk_0xBC3DFFCED0175B93(iVar4, "loclbr");
	iVar85 = unk_0xBC3DFFCED0175B93(iVar4, "locdir");
	iVar86 = unk_0xBC3DFFCED0175B93(iVar4, "loctol");
	iVar87 = unk_0xBC3DFFCED0175B93(iVar4, "lochgt");
	iVar88 = unk_0xBC3DFFCED0175B93(iVar4, "locart");
	iVar89 = unk_0xBC3DFFCED0175B93(iVar4, "locaa1");
	iVar90 = unk_0xBC3DFFCED0175B93(iVar4, "locaa2");
	iVar91 = unk_0xBC3DFFCED0175B93(iVar4, "locaaw");
	iVar92 = unk_0xBC3DFFCED0175B93(iVar4, "nmpass");
	iVar93 = unk_0xBC3DFFCED0175B93(iVar4, "nmfail");
	iVar94 = unk_0xBC3DFFCED0175B93(iVar4, "locstd");
	iVar95 = unk_0xBC3DFFCED0175B93(iVar4, "locstm");
	iVar96 = unk_0xBC3DFFCED0175B93(iVar4, "lcbs2");
	iVar97 = unk_0xBC3DFFCED0175B93(iVar4, "locti");
	iVar98 = unk_0xBC3DFFCED0175B93(iVar4, "locgc");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_27032[0] - 1))
	{
		if (unk_0xD2994D0723F71967(iVar82, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_46 = unk_0xE00F2F3EC50DF5F9(iVar82, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_46 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar83, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_20 = unk_0x053C780A55718FCB(iVar83, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_20 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar84, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_19 = unk_0x053C780A55718FCB(iVar84, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_19 = 1f;
		}
		if (unk_0xD2994D0723F71967(iVar85, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_28 = unk_0x053C780A55718FCB(iVar85, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_28 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar86, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_29 = unk_0x053C780A55718FCB(iVar86, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_29 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar87, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_30 = unk_0x053C780A55718FCB(iVar87, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_30 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar97, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_54 = unk_0x053C780A55718FCB(iVar97, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_54 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar98, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_55 = unk_0x053C780A55718FCB(iVar98, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_55 = 0f;
		}
		if (unk_0xD2994D0723F71967(iVar88, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/] = unk_0xE00F2F3EC50DF5F9(iVar88, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/] = 0;
		}
		if (unk_0xD2994D0723F71967(iVar92, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_91 = unk_0xE00F2F3EC50DF5F9(iVar92, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_91 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar93, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_92 = unk_0xE00F2F3EC50DF5F9(iVar93, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_92 = -1;
		}
		if (unk_0xD2994D0723F71967(iVar94, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_96 = unk_0x053C780A55718FCB(iVar94, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_96 = 10.5f;
		}
		if (unk_0xD2994D0723F71967(iVar95, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_95 = unk_0xE00F2F3EC50DF5F9(iVar95, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_95 = 0;
		}
		if (unk_0xD2994D0723F71967(iVar96, iVar0) == 2)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_53 = unk_0xE00F2F3EC50DF5F9(iVar96, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_53 = 0;
		}
		if ((unk_0xD2994D0723F71967(iVar89, iVar0) == 5 && unk_0xD2994D0723F71967(iVar90, iVar0) == 5) && unk_0xD2994D0723F71967(iVar91, iVar0) == 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_21 = { unk_0x2E7CBE121E5B118F(iVar89, iVar0) };
			Global_1604248.f_24749[iVar0 /*99*/].f_24 = { unk_0x2E7CBE121E5B118F(iVar90, iVar0) };
			Global_1604248.f_24749[iVar0 /*99*/].f_27 = unk_0x053C780A55718FCB(iVar91, iVar0);
		}
		else
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_21 = { 0f, 0f, 0f };
			Global_1604248.f_24749[iVar0 /*99*/].f_24 = { 0f, 0f, 0f };
			Global_1604248.f_24749[iVar0 /*99*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x77DBDA8A5753BCA3(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x8140B477AA55A05E(iParam0, "cover");
		Global_1604248.f_29727 = unk_0x2E3E2CC20DBC563B(iVar1, "no");
		iVar2 = unk_0xBC3DFFCED0175B93(iVar1, "loc");
		iVar3 = unk_0xBC3DFFCED0175B93(iVar1, "dir");
		iVar4 = unk_0xBC3DFFCED0175B93(iVar1, "use");
		iVar5 = unk_0xBC3DFFCED0175B93(iVar1, "high");
		iVar6 = unk_0xBC3DFFCED0175B93(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1604248.f_29727 - 1))
		{
			Global_1604248.f_29728[iVar0 /*7*/] = { unk_0x2E7CBE121E5B118F(iVar2, iVar0) };
			Global_1604248.f_29728[iVar0 /*7*/].f_3 = unk_0x053C780A55718FCB(iVar3, iVar0);
			Global_1604248.f_29728[iVar0 /*7*/].f_4 = unk_0xE00F2F3EC50DF5F9(iVar4, iVar0);
			Global_1604248.f_29728[iVar0 /*7*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar5, iVar0);
			Global_1604248.f_29728[iVar0 /*7*/].f_6 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_156(int iParam0)
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
	
	iVar2 = unk_0x8140B477AA55A05E(iParam0, "door");
	Global_1604248.f_29440 = unk_0x2E3E2CC20DBC563B(iVar2, "no");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar2, "loc");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar2, "fopen");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar2, "model");
	uVar6 = unk_0xBC3DFFCED0175B93(iVar2, "lock");
	uVar7 = unk_0xBC3DFFCED0175B93(iVar2, "swing");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar2, "udrle");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar2, "udtem");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar2, "udrat");
	uVar11 = unk_0xBC3DFFCED0175B93(iVar2, "swingu");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar2, "audst");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar2, "aurt");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar2, "uaudst");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar2, "uaurt");
	uVar16 = unk_0xBC3DFFCED0175B93(iVar2, "lfp");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar2, "dtime");
	uVar18 = unk_0xBC3DFFCED0175B93(iVar2, "mid");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1604248.f_29440 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1604248.f_29441[iVar0 /*19*/] = { unk_0x2E7CBE121E5B118F(iVar3, iVar0) };
			Global_1604248.f_29441[iVar0 /*19*/].f_3 = unk_0x053C780A55718FCB(iVar4, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_14 = unk_0x364E078A68FEFCF7(uVar6, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_15 = unk_0x364E078A68FEFCF7(uVar7, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_5 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_6 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_13 = unk_0x053C780A55718FCB(iVar10, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_16 = unk_0x364E078A68FEFCF7(uVar11, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_8 = unk_0x053C780A55718FCB(iVar13, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_9 = unk_0x053C780A55718FCB(iVar12, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_10 = unk_0x053C780A55718FCB(iVar15, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_11 = unk_0x053C780A55718FCB(iVar14, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_12 = unk_0x364E078A68FEFCF7(uVar16, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_18 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar0);
			iVar1 = unk_0xE00F2F3EC50DF5F9(iVar5, iVar0);
			Global_1604248.f_29441[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0xD2994D0723F71967(iVar17, iVar0) == 2)
			{
				Global_1604248.f_29441[iVar0 /*19*/].f_7 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar0);
			}
			else
			{
				Global_1604248.f_29441[iVar0 /*19*/].f_7 = 0;
			}
			Global_1604248.f_29441[iVar0 /*19*/].f_17 = unk_0x364E078A68FEFCF7(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_157(int iParam0)
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
	var uVar310[4];
	struct<5> Var315;
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
	int iVar706;
	int iVar707;
	int iVar708;
	int iVar709;
	
	iVar0 = unk_0x8140B477AA55A05E(*iParam0, "endcon");
	Var315 = 4;
	Var315.f_1 = 4;
	Var315.f_1.f_5 = 4;
	Var315.f_1.f_5.f_5 = 4;
	Var315.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1604248.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "rloft", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "minspd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdlp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdmx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "prmg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "traf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "shdtxt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "hitsnd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar270[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "rdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar305[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar310[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar240[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar245[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar250[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar255[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar275[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar280[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar285[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar290[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "resmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar295[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "resuse", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar346[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar351[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar356[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar361[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar366[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar371[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar386[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar376[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar381[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar391[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar396[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar401[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar341[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "sia", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "stiam", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "fleer", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			StringCopy(&cVar4, "fleev", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var315[iVar1 /*5*/][iVar3] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar336[iVar3] = unk_0xBC3DFFCED0175B93(iVar0, &cVar4);
				iVar3++;
			}
			iVar706 = unk_0xBC3DFFCED0175B93(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1604248.f_74[iVar1 /*5606*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_226[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_226[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar20[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_244[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_244[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1702[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1702[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1774[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1774[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1792[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1792[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_2874[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_2874[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_170[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_170[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_188[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_188[iVar2] = 0;
				}
				if (uVar661[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5408[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar661[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5408[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar666[iVar1], iVar2) == 2 && Global_1604248.f_2 != 6)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5426[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar666[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5426[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar671[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5444[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar671[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5444[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar676[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5462[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5462[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar681[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5480[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar681[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5480[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar686[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5534[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar686[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5534[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar691[iVar1], iVar2) == 2)
				{
					iVar707 = unk_0xE00F2F3EC50DF5F9(uVar691[iVar1], iVar2);
					if (iVar707 > 0)
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_5498[iVar2] = iVar707;
					}
					else
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_5498[iVar2] = 0;
					}
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5498[iVar2] = 0;
				}
				if (uVar696[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5516[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5516[iVar2] = 0;
				}
				if (Global_1604248.f_74[iVar1 /*5606*/].f_188[iVar2] == 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_188[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_208[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_208[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1828[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1828[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1810[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1810[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1850[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1850[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar85[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1870[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1870[iVar2] = 10000;
				}
				if (unk_0xD2994D0723F71967(uVar90[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1906[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1906[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_298[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_298[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_316[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_316[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_370[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_370[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_334[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_334[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_352[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_352[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar110[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1888[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar110[iVar1], iVar2);
				}
				else if (unk_0xD2994D0723F71967(iVar706, iVar1) == 2 && iVar706 != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1888[iVar2] = unk_0xE00F2F3EC50DF5F9(iVar706, iVar1);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1888[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar105[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_406[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_406[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar270[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_280[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_280[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar265[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_262[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_262[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_388[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_388[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_424[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_424[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5354[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5354[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5372[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5372[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar135[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5390[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5390[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2299[iVar2 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar145[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2299[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_132())
				{
					if (uVar150[iVar1] != 0)
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3147[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar150[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3147[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar155[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2351[iVar2 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar155[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2351[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2421[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar160[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2421[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar165[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2457[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2457[iVar2] = 0;
				}
				if (uVar210[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1924[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1924[iVar2] = 0;
				}
				if (uVar205[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2403[iVar2] = unk_0x053C780A55718FCB(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2403[iVar2] = 0f;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2603[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2603[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2621[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2621[iVar2] = 0;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2639[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2639[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar230[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2657[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2657[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar235[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_37[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0xD2994D0723F71967(Var315[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_2712[iVar2 /*5*/][iVar3] = unk_0xE00F2F3EC50DF5F9(Var315[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_2712[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0xD2994D0723F71967(uVar336[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_2798[iVar3 /*16*/]), unk_0xE2B9F5A91729B995(uVar336[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_2798[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0xD2994D0723F71967(uVar305[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2676[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2676[iVar2] = Global_1604248.f_74[iVar1 /*5606*/].f_1694;
				}
				if (unk_0xD2994D0723F71967(uVar310[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2694[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2694[iVar2] = Global_1604248.f_74[iVar1 /*5606*/].f_1700;
				}
				if (bVar8)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][0] = unk_0xE00F2F3EC50DF5F9(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][1] = unk_0xE00F2F3EC50DF5F9(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][2] = unk_0xE00F2F3EC50DF5F9(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][3] = unk_0xE00F2F3EC50DF5F9(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5127[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][0] = unk_0xE00F2F3EC50DF5F9(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][1] = unk_0xE00F2F3EC50DF5F9(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][2] = unk_0xE00F2F3EC50DF5F9(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5231[iVar2 /*4*/][2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar290[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5300[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5300[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar295[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5318[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5318[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar300[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5336[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5336[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar170[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2439[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2439[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar175[iVar1], iVar2) == 3)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2475[iVar2] = unk_0x053C780A55718FCB(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2475[iVar2] = -1f;
				}
				if (unk_0xD2994D0723F71967(uVar180[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2513[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2513[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar185[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2495[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2495[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar190[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5552[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5552[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar195[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5570[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5570[iVar2] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar200[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5588[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5588[iVar2] = 0;
				}
				if (uVar260[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5213[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_5213[iVar2] = 0;
				}
				if (uVar346[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1943[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar346[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1943[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar351[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2227[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar351[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2227[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar356[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2263[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar356[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2263[iVar2] = 0;
				}
				if (uVar361[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1979[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar361[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1979[iVar2] = 0;
				}
				if (uVar366[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1961[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar366[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1961[iVar2] = 0;
				}
				if (uVar371[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2531[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar371[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2531[iVar2] = 0;
				}
				if (uVar376[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2567[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar376[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2567[iVar2] = 0;
				}
				if (uVar381[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2585[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar381[iVar1], iVar2);
				}
				else if (Global_1604248.f_74[iVar1 /*5606*/].f_2567[iVar2] != 0 && unk_0x889D01384B54BCE3(Global_1604248.f_74[iVar1 /*5606*/].f_2639[iVar2], 8))
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2585[iVar2] = Global_1604248.f_74[iVar1 /*5606*/].f_2567[iVar2];
					Global_1604248.f_74[iVar1 /*5606*/].f_2567[iVar2] = 0;
					unk_0x29DB79DD4D939B38(&(Global_1604248.f_74[iVar1 /*5606*/].f_2639[iVar2]), 8);
				}
				if (uVar386[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2549[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar386[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2549[iVar2] = 0;
				}
				if (uVar391[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2119[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar391[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2119[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar396[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2245[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar396[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2245[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar401[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2281[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar401[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2281[iVar2] = 0;
				}
				if (uVar341[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2209[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar341[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2209[iVar2] = 0;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2137[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar406[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2137[iVar2] = 100;
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2173[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2173[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2191[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2191[iVar2] = 0;
				}
				if (uVar421[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2155[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2155[iVar2] = 0;
				}
				if (uVar426[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1997[iVar2 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar426[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1997[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar431[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2049[iVar2 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar431[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2049[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2101[iVar2] = unk_0x053C780A55718FCB(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_2101[iVar2] = 0f;
				}
				if (uVar441[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3420[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar441[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3420[iVar2 /*16*/]), "", 64);
				}
				if (!func_132())
				{
					if (uVar446[iVar1] != 0)
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3899[iVar2 /*6*/]), unk_0xE2B9F5A91729B995(uVar446[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3899[iVar2 /*6*/]), "", 24);
					}
					if (uVar451[iVar1] != 0)
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3693[iVar2 /*6*/]), unk_0xE2B9F5A91729B995(uVar451[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3693[iVar2 /*6*/]), "", 24);
					}
					if (uVar456[iVar1] != 0)
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3796[iVar2 /*6*/]), unk_0xE2B9F5A91729B995(uVar456[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_3796[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar461[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4002[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar461[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4002[iVar2 /*16*/]), "", 64);
				}
				if (uVar476[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4275[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar476[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4275[iVar2 /*16*/]), "", 64);
				}
				if (uVar466[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4548[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar466[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4548[iVar2 /*16*/]), "", 64);
				}
				if (uVar471[iVar1] != 0)
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4821[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(uVar471[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_4821[iVar2 /*16*/]), "", 64);
				}
				if (uVar481[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1720[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar481[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1720[iVar2] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar701[iVar1], iVar2) == 2)
				{
					if (unk_0xE00F2F3EC50DF5F9(uVar701[iVar1], iVar2) > 1)
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_1756[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar701[iVar1], iVar2);
					}
					else
					{
						Global_1604248.f_74[iVar1 /*5606*/].f_1756[iVar2] = 1;
					}
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1756[iVar2] = 1;
				}
				if (uVar486[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1738[iVar2] = unk_0xE00F2F3EC50DF5F9(uVar486[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1738[iVar2] = 0;
				}
				if (uVar526[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_3 = { unk_0x2E7CBE121E5B118F(uVar526[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar531[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_6 = { unk_0x2E7CBE121E5B118F(uVar531[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar536[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_10 = unk_0x053C780A55718FCB(uVar536[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar541[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_13 = { unk_0x2E7CBE121E5B118F(uVar541[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar516[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/] = { unk_0x2E7CBE121E5B118F(uVar516[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (unk_0xD2994D0723F71967(uVar521[iVar1], iVar2) == 3)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_9 = unk_0x053C780A55718FCB(uVar521[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar576[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/] = { unk_0x2E7CBE121E5B118F(uVar576[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar586[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_3 = { unk_0x2E7CBE121E5B118F(uVar586[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_6 = { unk_0x2E7CBE121E5B118F(uVar581[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar596[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_10 = unk_0x053C780A55718FCB(uVar596[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_10 = 0f;
				}
				if (unk_0xD2994D0723F71967(uVar591[iVar1], iVar2) == 3)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_9 = unk_0x053C780A55718FCB(uVar591[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar501[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_3 = { unk_0x2E7CBE121E5B118F(uVar501[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar506[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_6 = { unk_0x2E7CBE121E5B118F(uVar506[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar511[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_10 = unk_0x053C780A55718FCB(uVar511[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar491[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/] = { unk_0x2E7CBE121E5B118F(uVar491[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar496[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_9 = unk_0x053C780A55718FCB(uVar496[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1230[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar651[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1622[iVar2 /*3*/] = { unk_0x2E7CBE121E5B118F(uVar651[iVar1], iVar2) };
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1622[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar656[iVar1] != 0)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1674[iVar2] = unk_0x053C780A55718FCB(uVar656[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_1674[iVar2] = 0f;
				}
				if (unk_0xD2994D0723F71967(uVar546[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_19 = unk_0xE00F2F3EC50DF5F9(uVar546[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar551[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_17 = unk_0xE00F2F3EC50DF5F9(uVar551[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0xD2994D0723F71967(uVar556[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_18 = unk_0xE00F2F3EC50DF5F9(uVar556[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar561[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_20 = unk_0xE00F2F3EC50DF5F9(uVar561[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0xD2994D0723F71967(uVar566[iVar1], iVar2) == 2 && unk_0xD2994D0723F71967(uVar571[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_21 = unk_0xE00F2F3EC50DF5F9(uVar566[iVar1], iVar2);
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_22 = unk_0xE00F2F3EC50DF5F9(uVar571[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_21 = 0;
					Global_1604248.f_74[iVar1 /*5606*/].f_446[iVar2 /*23*/].f_22 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar601[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_19 = unk_0xE00F2F3EC50DF5F9(uVar601[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar606[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_17 = unk_0xE00F2F3EC50DF5F9(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0xD2994D0723F71967(uVar611[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_18 = unk_0xE00F2F3EC50DF5F9(uVar611[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0xD2994D0723F71967(uVar616[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_20 = unk_0xE00F2F3EC50DF5F9(uVar616[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0xD2994D0723F71967(uVar621[iVar1], iVar2) == 2 && unk_0xD2994D0723F71967(uVar626[iVar1], iVar2) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_21 = unk_0xE00F2F3EC50DF5F9(uVar621[iVar1], iVar2);
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_22 = unk_0xE00F2F3EC50DF5F9(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_21 = 0;
					Global_1604248.f_74[iVar1 /*5606*/].f_838[iVar2 /*23*/].f_22 = -1;
				}
				iVar2++;
			}
			iVar708 = 0;
			while (iVar708 <= 45)
			{
				if (unk_0xD2994D0723F71967(uVar631[iVar1], iVar708) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_61[iVar708] = unk_0xE00F2F3EC50DF5F9(uVar631[iVar1], iVar708);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_61[iVar708] = 0;
				}
				if (unk_0xD2994D0723F71967(uVar636[iVar1], iVar708) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_111[iVar708] = unk_0xE00F2F3EC50DF5F9(uVar636[iVar1], iVar708);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_111[iVar708] = 0;
				}
				iVar708++;
			}
			iVar709 = 0;
			while (iVar709 <= 3)
			{
				if (unk_0xD2994D0723F71967(uVar641[iVar1], iVar709) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_160[iVar709] = unk_0xE00F2F3EC50DF5F9(uVar641[iVar1], iVar709);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_160[iVar709] = -1;
				}
				if (unk_0xD2994D0723F71967(uVar646[iVar1], iVar709) == 2)
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_165[iVar709] = unk_0xE00F2F3EC50DF5F9(uVar646[iVar1], iVar709);
				}
				else
				{
					Global_1604248.f_74[iVar1 /*5606*/].f_165[iVar709] = -1;
				}
				iVar709++;
			}
		}
		iVar1++;
	}
}

void func_158(int iParam0)
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
	bool bVar61;
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
	int iVar90;
	int iVar91;
	int iVar92;
	var uVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	var uVar102[10];
	
	iVar0 = unk_0x8140B477AA55A05E(*iParam0, "endcon");
	iVar3 = unk_0xBC3DFFCED0175B93(iVar0, "stpos");
	iVar4 = unk_0xBC3DFFCED0175B93(iVar0, "delr");
	iVar5 = unk_0xBC3DFFCED0175B93(iVar0, "epos");
	iVar6 = unk_0xBC3DFFCED0175B93(iVar0, "endr");
	iVar7 = unk_0xBC3DFFCED0175B93(iVar0, "vareapos");
	iVar8 = unk_0xBC3DFFCED0175B93(iVar0, "arear");
	iVar9 = unk_0xBC3DFFCED0175B93(iVar0, "time");
	iVar10 = unk_0xBC3DFFCED0175B93(iVar0, "plkr");
	iVar11 = unk_0xBC3DFFCED0175B93(iVar0, "pekr");
	iVar12 = unk_0xBC3DFFCED0175B93(iVar0, "vhkr");
	iVar13 = unk_0xBC3DFFCED0175B93(iVar0, "obkr");
	iVar14 = unk_0xBC3DFFCED0175B93(iVar0, "dr");
	iVar15 = unk_0xBC3DFFCED0175B93(iVar0, "pedr");
	iVar16 = unk_0xBC3DFFCED0175B93(iVar0, "vedr");
	iVar17 = unk_0xBC3DFFCED0175B93(iVar0, "obdr");
	iVar18 = unk_0xBC3DFFCED0175B93(iVar0, "lwmbs");
	iVar19 = unk_0xBC3DFFCED0175B93(iVar0, "flmbs");
	iVar20 = unk_0xBC3DFFCED0175B93(iVar0, "vdoibs");
	iVar21 = unk_0xBC3DFFCED0175B93(iVar0, "vdohu");
	iVar22 = unk_0xBC3DFFCED0175B93(iVar0, "tmbts");
	iVar23 = unk_0xBC3DFFCED0175B93(iVar0, "swmbs");
	iVar24 = unk_0xBC3DFFCED0175B93(iVar0, "gbmbs");
	iVar25 = unk_0xBC3DFFCED0175B93(iVar0, "pcbd");
	iVar26 = unk_0xBC3DFFCED0175B93(iVar0, "lwbs");
	iVar27 = unk_0xBC3DFFCED0175B93(iVar0, "woabs");
	iVar28 = unk_0xBC3DFFCED0175B93(iVar0, "fwoabs");
	iVar29 = unk_0xBC3DFFCED0175B93(iVar0, "fail");
	iVar30 = unk_0xBC3DFFCED0175B93(iVar0, "vehrsp");
	iVar31 = unk_0xBC3DFFCED0175B93(iVar0, "mtlr");
	iVar32 = unk_0xBC3DFFCED0175B93(iVar0, "mslr");
	iVar33 = unk_0xBC3DFFCED0175B93(iVar0, "mlpl");
	iVar34 = unk_0xBC3DFFCED0175B93(iVar0, "plyl");
	iVar35 = unk_0xBC3DFFCED0175B93(iVar0, "shd");
	iVar36 = unk_0xBC3DFFCED0175B93(iVar0, "spar");
	iVar37 = unk_0xBC3DFFCED0175B93(iVar0, "boud");
	iVar38 = unk_0xBC3DFFCED0175B93(iVar0, "bla");
	iVar39 = unk_0xBC3DFFCED0175B93(iVar0, "wla");
	iVar40 = unk_0xBC3DFFCED0175B93(iVar0, "patm");
	iVar41 = unk_0xBC3DFFCED0175B93(iVar0, "bnd2");
	iVar42 = unk_0xBC3DFFCED0175B93(iVar0, "bla2");
	iVar43 = unk_0xBC3DFFCED0175B93(iVar0, "wla2");
	iVar44 = unk_0xBC3DFFCED0175B93(iVar0, "pat2");
	iVar45 = unk_0xBC3DFFCED0175B93(iVar0, "inv");
	iVar46 = unk_0xBC3DFFCED0175B93(iVar0, "inv2");
	iVar47 = unk_0xBC3DFFCED0175B93(iVar0, "invsw");
	iVar48 = unk_0xBC3DFFCED0175B93(iVar0, "invtm");
	iVar49 = unk_0xBC3DFFCED0175B93(iVar0, "invrl");
	iVar50 = unk_0xBC3DFFCED0175B93(iVar0, "sinv");
	iVar51 = unk_0xBC3DFFCED0175B93(iVar0, "sinv2");
	iVar52 = unk_0xBC3DFFCED0175B93(iVar0, "ppk");
	iVar53 = unk_0xBC3DFFCED0175B93(iVar0, "mts");
	iVar54 = unk_0xBC3DFFCED0175B93(iVar0, "spwia");
	iVar55 = unk_0xBC3DFFCED0175B93(iVar0, "pcl");
	iVar56 = unk_0xBC3DFFCED0175B93(iVar0, "ocl");
	iVar57 = unk_0xBC3DFFCED0175B93(iVar0, "arrt");
	iVar58 = unk_0xBC3DFFCED0175B93(iVar0, "numpt");
	iVar59 = unk_0xBC3DFFCED0175B93(iVar0, "ptint");
	bVar61 = true;
	if (unk_0x77DBDA8A5753BCA3(iVar0, "mnumpt") != 2)
	{
		bVar61 = false;
		iVar60 = unk_0xBC3DFFCED0175B93(iVar0, "mnumpt");
	}
	iVar62 = unk_0xBC3DFFCED0175B93(iVar0, "tcp");
	iVar63 = unk_0xBC3DFFCED0175B93(iVar0, "tcr");
	iVar64 = unk_0xBC3DFFCED0175B93(iVar0, "abits");
	iVar65 = unk_0xBC3DFFCED0175B93(iVar0, "sdobs");
	iVar66 = unk_0xBC3DFFCED0175B93(iVar0, "edobs");
	iVar67 = unk_0xBC3DFFCED0175B93(iVar0, "dogps");
	iVar68 = unk_0xBC3DFFCED0175B93(iVar0, "teamv");
	iVar69 = unk_0xBC3DFFCED0175B93(iVar0, "teamrvc");
	iVar70 = unk_0xBC3DFFCED0175B93(iVar0, "mcvbs");
	iVar71 = unk_0xBC3DFFCED0175B93(iVar0, "mcobs");
	iVar72 = unk_0xBC3DFFCED0175B93(iVar0, "mcpbs");
	iVar73 = unk_0xBC3DFFCED0175B93(iVar0, "mcgbs");
	iVar74 = unk_0xBC3DFFCED0175B93(iVar0, "rpgbs");
	iVar75 = unk_0xBC3DFFCED0175B93(iVar0, "mcpbs1");
	iVar76 = unk_0xBC3DFFCED0175B93(iVar0, "mcpbs2");
	iVar77 = unk_0xBC3DFFCED0175B93(iVar0, "mcgbs1");
	iVar78 = unk_0xBC3DFFCED0175B93(iVar0, "mcgbs2");
	iVar79 = unk_0xBC3DFFCED0175B93(iVar0, "rpgbs1");
	iVar80 = unk_0xBC3DFFCED0175B93(iVar0, "rpgbs2");
	iVar81 = unk_0xBC3DFFCED0175B93(iVar0, "inpts");
	iVar82 = unk_0xBC3DFFCED0175B93(iVar0, "ldsf1");
	iVar83 = unk_0xBC3DFFCED0175B93(iVar0, "ldsf2");
	iVar84 = 1;
	if (unk_0x77DBDA8A5753BCA3(iVar0, "tehlh") == 7)
	{
		iVar85 = unk_0xBC3DFFCED0175B93(iVar0, "tehlh");
		iVar84 = 1;
	}
	else
	{
		iVar84 = 0;
	}
	iVar86 = unk_0xBC3DFFCED0175B93(iVar0, "spsy1");
	iVar87 = unk_0xBC3DFFCED0175B93(iVar0, "spsy2");
	iVar88 = unk_0xBC3DFFCED0175B93(iVar0, "tenms");
	iVar89 = unk_0xBC3DFFCED0175B93(iVar0, "csttn");
	iVar90 = unk_0xBC3DFFCED0175B93(iVar0, "nrl");
	iVar91 = unk_0xBC3DFFCED0175B93(iVar0, "tstrt");
	iVar92 = unk_0xBC3DFFCED0175B93(iVar0, "tstop");
	uVar93 = unk_0xBC3DFFCED0175B93(iVar0, "sms");
	iVar94 = unk_0xBC3DFFCED0175B93(iVar0, "tblpv1");
	iVar95 = unk_0xBC3DFFCED0175B93(iVar0, "tblpv2");
	iVar96 = unk_0xBC3DFFCED0175B93(iVar0, "tblpv3");
	iVar97 = unk_0xBC3DFFCED0175B93(iVar0, "tblpv4");
	iVar98 = unk_0xBC3DFFCED0175B93(iVar0, "thudv1");
	iVar99 = unk_0xBC3DFFCED0175B93(iVar0, "thudv2");
	iVar100 = unk_0xBC3DFFCED0175B93(iVar0, "thudv3");
	iVar101 = unk_0xBC3DFFCED0175B93(iVar0, "thudv4");
	iVar1 = 0;
	while (iVar1 <= (unk_0xCEC353E8CB49D011(uVar93) - 1))
	{
		uVar102[iVar1] = unk_0xD85D12AEDE3DA9FC(uVar93, iVar1);
		Global_1604248.f_22702[iVar1 /*38*/] = unk_0x2E3E2CC20DBC563B(uVar102[iVar1], "team");
		Global_1604248.f_22702[iVar1 /*38*/].f_1 = unk_0x2E3E2CC20DBC563B(uVar102[iVar1], "rule");
		Global_1604248.f_22702[iVar1 /*38*/].f_2 = unk_0x2E3E2CC20DBC563B(uVar102[iVar1], "time");
		StringCopy(&(Global_1604248.f_22702[iVar1 /*38*/].f_4[0 /*16*/]), unk_0xC738F260E0A516F4(uVar102[iVar1], "txt0"), 64);
		StringCopy(&(Global_1604248.f_22702[iVar1 /*38*/].f_4[1 /*16*/]), unk_0xC738F260E0A516F4(uVar102[iVar1], "txt1"), 64);
		Global_1604248.f_22702[iVar1 /*38*/].f_3 = unk_0x2E3E2CC20DBC563B(uVar102[iVar1], "delay");
		Global_1604248.f_22702[iVar1 /*38*/].f_37 = unk_0x2E3E2CC20DBC563B(uVar102[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1604248.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar68 != 0)
			{
				uVar2 = unk_0xE00F2F3EC50DF5F9(iVar68, iVar1);
				Global_1604248.f_27558[iVar1] = uVar2;
			}
			else
			{
				Global_1604248.f_27558[iVar1] = 0;
			}
			if (iVar69 != 0)
			{
				Global_1604248.f_27596[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar69, iVar1);
			}
			else
			{
				Global_1604248.f_27596[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/] = { unk_0x2E7CBE121E5B118F(iVar3, iVar1) };
			}
			if (iVar18 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1847 = unk_0xE00F2F3EC50DF5F9(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1868 = unk_0xE00F2F3EC50DF5F9(iVar19, iVar1);
			}
			if (iVar20 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2493 = unk_0xE00F2F3EC50DF5F9(iVar20, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar21, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2494 = unk_0xE00F2F3EC50DF5F9(iVar21, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2494 = 0;
			}
			if (iVar22 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2675 = unk_0xE00F2F3EC50DF5F9(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1849 = unk_0xE00F2F3EC50DF5F9(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1942 = unk_0xE00F2F3EC50DF5F9(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2871 = unk_0xE00F2F3EC50DF5F9(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1846 = unk_0xE00F2F3EC50DF5F9(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1848 = unk_0xE00F2F3EC50DF5F9(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1869 = unk_0xE00F2F3EC50DF5F9(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2872 = unk_0xE00F2F3EC50DF5F9(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2873 = unk_0xE00F2F3EC50DF5F9(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_32 = unk_0xE00F2F3EC50DF5F9(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_33 = unk_0xE00F2F3EC50DF5F9(iVar32, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar33, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_34 = unk_0xE00F2F3EC50DF5F9(iVar33, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_34 = 0;
			}
			if (iVar34 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_36 = unk_0xE00F2F3EC50DF5F9(iVar34, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1695 = unk_0xE00F2F3EC50DF5F9(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1693 = unk_0xE00F2F3EC50DF5F9(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1692 = unk_0xE00F2F3EC50DF5F9(iVar38, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar40, iVar1) == 2 && iVar40 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1694 = unk_0xE00F2F3EC50DF5F9(iVar40, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1694 = 60000;
			}
			if (unk_0xD2994D0723F71967(iVar41, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1699 = unk_0xE00F2F3EC50DF5F9(iVar41, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1699 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar42, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1698 = unk_0xE00F2F3EC50DF5F9(iVar42, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1698 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar44, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1700 = unk_0xE00F2F3EC50DF5F9(iVar44, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1700 = 60000;
			}
			if (unk_0xD2994D0723F71967(iVar43, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1701 = unk_0xE00F2F3EC50DF5F9(iVar43, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1701 = 0;
			}
			if (iVar45 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_59 = unk_0xE00F2F3EC50DF5F9(iVar45, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_60 = unk_0xE00F2F3EC50DF5F9(iVar46, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar47, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_108 = unk_0xE00F2F3EC50DF5F9(iVar47, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_108 = -1;
			}
			if (unk_0xD2994D0723F71967(iVar48, iVar1) == 2 && unk_0xD2994D0723F71967(iVar49, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_158 = unk_0xE00F2F3EC50DF5F9(iVar48, iVar1);
				Global_1604248.f_74[iVar1 /*5606*/].f_159 = unk_0xE00F2F3EC50DF5F9(iVar49, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_158 = -1;
				Global_1604248.f_74[iVar1 /*5606*/].f_159 = -1;
			}
			if (iVar50 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_109 = unk_0xE00F2F3EC50DF5F9(iVar50, iVar1);
			}
			if (iVar51 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_110 = unk_0xE00F2F3EC50DF5F9(iVar51, iVar1);
			}
			if (iVar52 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_55 = unk_0xE00F2F3EC50DF5F9(iVar52, iVar1);
			}
			if (iVar53 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_56 = unk_0xE00F2F3EC50DF5F9(iVar53, iVar1);
			}
			if (iVar54 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1696 = unk_0xE00F2F3EC50DF5F9(iVar54, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_1697 = unk_0xE00F2F3EC50DF5F9(iVar39, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_3 = unk_0x053C780A55718FCB(iVar35, iVar1);
			}
			if (iVar55 != 0)
			{
				Global_1604248.f_22499[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1604248.f_22504[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_35 = unk_0xE00F2F3EC50DF5F9(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_1604248.f_21[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar58, iVar1);
			}
			if (Global_1604248.f_21[iVar1] < 1)
			{
				Global_1604248.f_21[iVar1] = 1;
			}
			if (iVar59 != 0)
			{
				Global_1604248.f_23544[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar59, iVar1);
			}
			else
			{
				Global_1604248.f_23544[iVar1] = -1;
			}
			if (bVar61)
			{
				Global_1604248.f_26[iVar1] = 0;
			}
			else
			{
				if (iVar60 != 0)
				{
					Global_1604248.f_26[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar60, iVar1);
				}
				if (Global_1604248.f_26[iVar1] < 0)
				{
					Global_1604248.f_26[iVar1] = 0;
				}
			}
			if (iVar62 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_4 = { unk_0x2E7CBE121E5B118F(iVar62, iVar1) };
			}
			if (iVar63 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_7 = { unk_0x2E7CBE121E5B118F(iVar63, iVar1) };
			}
			if (iVar64 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_442 = unk_0xE00F2F3EC50DF5F9(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_443 = unk_0xE00F2F3EC50DF5F9(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_444 = unk_0xE00F2F3EC50DF5F9(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_445 = unk_0xE00F2F3EC50DF5F9(iVar67, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar82, iVar1) == 2 && iVar82 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_206 = unk_0xE00F2F3EC50DF5F9(iVar82, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_206 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar83, iVar1) == 2 && iVar83 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_207 = unk_0xE00F2F3EC50DF5F9(iVar83, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_207 = 0;
			}
			if (iVar70 != 0)
			{
				Global_1604248.f_22692[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar70, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar71, iVar1) == 2)
			{
				Global_1604248.f_22697[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar71, iVar1);
			}
			else
			{
				Global_1604248.f_22697[iVar1] = 0;
			}
			if (iVar72 != 0)
			{
				Global_1604248.f_22648[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar72, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1604248.f_22679[iVar1 /*3*/][0] = unk_0xE00F2F3EC50DF5F9(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1604248.f_22679[iVar1 /*3*/][1] = unk_0xE00F2F3EC50DF5F9(iVar76, iVar1);
			}
			if (Global_1604248.f_22648[iVar1] != 0 && Global_1604248.f_22679[iVar1 /*3*/][0] == 0)
			{
				Global_1604248.f_22679[iVar1 /*3*/][0] = Global_1604248.f_22648[iVar1];
			}
			if (iVar73 != 0)
			{
				Global_1604248.f_22643[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar73, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_1604248.f_22666[iVar1 /*3*/][0] = unk_0xE00F2F3EC50DF5F9(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_1604248.f_22666[iVar1 /*3*/][1] = unk_0xE00F2F3EC50DF5F9(iVar78, iVar1);
			}
			if (Global_1604248.f_22643[iVar1] != 0 && Global_1604248.f_22666[iVar1 /*3*/][0] == 0)
			{
				Global_1604248.f_22666[iVar1 /*3*/][0] = Global_1604248.f_22643[iVar1];
			}
			if (iVar74 != 0)
			{
				Global_1604248.f_22638[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar74, iVar1);
			}
			if (iVar79 != 0)
			{
				Global_1604248.f_22653[iVar1 /*3*/][0] = unk_0xE00F2F3EC50DF5F9(iVar79, iVar1);
			}
			if (iVar80 != 0)
			{
				Global_1604248.f_22653[iVar1 /*3*/][1] = unk_0xE00F2F3EC50DF5F9(iVar80, iVar1);
			}
			if (Global_1604248.f_22638[iVar1] != 0 && Global_1604248.f_22653[iVar1 /*3*/][0] == 0)
			{
				Global_1604248.f_22653[iVar1 /*3*/][0] = Global_1604248.f_22638[iVar1];
			}
			if (iVar81 != 0)
			{
				Global_1604248.f_22514[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar81, iVar1);
			}
			if (iVar84 && iVar85 != 0)
			{
				Global_1604248.f_22546[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar85, iVar1);
			}
			else
			{
				Global_1604248.f_22546[iVar1] = 3;
			}
			if (iVar86 != 0)
			{
				StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_5094[0 /*16*/]), unk_0xE2B9F5A91729B995(iVar86, iVar1), 64);
			}
			if (iVar87 != 0)
			{
				StringCopy(&(Global_1604248.f_74[iVar1 /*5606*/].f_5094[1 /*16*/]), unk_0xE2B9F5A91729B995(iVar87, iVar1), 64);
			}
			if (iVar88 != 0)
			{
				Global_1604248.f_22519[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar88, iVar1);
			}
			if (iVar89 != 0)
			{
				StringCopy(&(Global_1604248.f_22524[iVar1 /*4*/]), unk_0xE2B9F5A91729B995(iVar89, iVar1), 16);
			}
			if (unk_0xD2994D0723F71967(iVar91, iVar1) == 2 && iVar91 != 0)
			{
				Global_1604248.f_62298[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar91, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar92, iVar1) == 2 && iVar92 != 0)
			{
				Global_1604248.f_62303[iVar1] = unk_0xE00F2F3EC50DF5F9(iVar92, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_14 = unk_0xE00F2F3EC50DF5F9(iVar4, iVar1);
			}
			if (iVar5 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_15 = { unk_0x2E7CBE121E5B118F(iVar5, iVar1) };
			}
			if (iVar6 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_18 = unk_0xE00F2F3EC50DF5F9(iVar6, iVar1);
			}
			if (iVar7 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_19 = { unk_0x2E7CBE121E5B118F(iVar7, iVar1) };
			}
			if (iVar8 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_22 = unk_0xE00F2F3EC50DF5F9(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_23 = unk_0xE00F2F3EC50DF5F9(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_24 = unk_0xE00F2F3EC50DF5F9(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_25 = unk_0xE00F2F3EC50DF5F9(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_26 = unk_0xE00F2F3EC50DF5F9(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_27 = unk_0xE00F2F3EC50DF5F9(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_28 = unk_0xE00F2F3EC50DF5F9(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_29 = unk_0xE00F2F3EC50DF5F9(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_30 = unk_0xE00F2F3EC50DF5F9(iVar16, iVar1);
			}
			if (iVar17 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_31 = unk_0xE00F2F3EC50DF5F9(iVar17, iVar1);
			}
			if (iVar90 != 0)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_57 = unk_0xE00F2F3EC50DF5F9(iVar90, iVar1);
			}
			if (unk_0xD2994D0723F71967(iVar94, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2863 = unk_0xE00F2F3EC50DF5F9(iVar94, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2863 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar95, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2864 = unk_0xE00F2F3EC50DF5F9(iVar95, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2864 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar96, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2865 = unk_0xE00F2F3EC50DF5F9(iVar96, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2865 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar97, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2866 = unk_0xE00F2F3EC50DF5F9(iVar97, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2866 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar98, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2867 = unk_0xE00F2F3EC50DF5F9(iVar98, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2867 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar99, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2868 = unk_0xE00F2F3EC50DF5F9(iVar99, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2868 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar100, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2869 = unk_0xE00F2F3EC50DF5F9(iVar100, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2869 = 0;
			}
			if (unk_0xD2994D0723F71967(iVar101, iVar1) == 2)
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2870 = unk_0xE00F2F3EC50DF5F9(iVar101, iVar1);
			}
			else
			{
				Global_1604248.f_74[iVar1 /*5606*/].f_2870 = 0;
			}
		}
		iVar1++;
	}
}

void func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8140B477AA55A05E(iParam0, "rule");
	Global_1604248.f_38 = unk_0x2E3E2CC20DBC563B(iVar0, "time");
	Global_1604248.f_40 = unk_0x2E3E2CC20DBC563B(iVar0, "score");
	Global_1604248.f_51 = unk_0x2E3E2CC20DBC563B(iVar0, "prule");
	Global_1604248.f_33511 = unk_0x2E3E2CC20DBC563B(iVar0, "ptyp");
	Global_1604248.f_41 = unk_0x2E3E2CC20DBC563B(iVar0, "blip");
	Global_1604248.f_43 = unk_0x2E3E2CC20DBC563B(iVar0, "tag");
	Global_1604248.f_44 = unk_0x2E3E2CC20DBC563B(iVar0, "voice");
	Global_1604248.f_45 = unk_0x2E3E2CC20DBC563B(iVar0, "radio");
	Global_1604248.f_46 = unk_0x2E3E2CC20DBC563B(iVar0, "aim");
	Global_1604248.f_27607 = unk_0x2E3E2CC20DBC563B(iVar0, "pol");
	Global_1604248.f_34 = unk_0x2E3E2CC20DBC563B(iVar0, "liv");
	Global_1604248.f_27041 = unk_0x2E3E2CC20DBC563B(iVar0, "traf");
	Global_1604248.f_58860 = unk_0x2E3E2CC20DBC563B(iVar0, "tod");
	Global_1604248.f_58845 = unk_0x2E3E2CC20DBC563B(iVar0, "weth");
	Global_1604248.f_58862 = unk_0x2E3E2CC20DBC563B(iVar0, "apeds");
	Global_1604248.f_58861 = unk_0x2E3E2CC20DBC563B(iVar0, "vehd");
	Global_1604248.f_49 = unk_0x2E3E2CC20DBC563B(iVar0, "vdm");
	Global_1604248.f_47 = unk_0x2E3E2CC20DBC563B(iVar0, "tdm");
	Global_1604248.f_22499[0] = unk_0x2E3E2CC20DBC563B(iVar0, "pcr");
	Global_1604248.f_22504[0] = unk_0x2E3E2CC20DBC563B(iVar0, "ocr");
}

void func_160(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	char[] cVar9[8];
	char cVar11[16];
	int iVar15;
	int iVar16;
	char cVar17[16];
	int iVar21;
	int iVar22;
	var uVar23;
	int iVar24;
	int iVar25;
	char* sVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	
	iVar0 = unk_0x8140B477AA55A05E(iParam0, "gen");
	Global_1604248 = unk_0x2E3E2CC20DBC563B(iVar0, "type");
	Global_1604248.f_8 = unk_0x1FD1AA4C85FDA848(iVar0, "ngjob");
	unk_0x889D01384B54BCE3(Global_1604248.f_6, 0);
	bVar1 = unk_0x1FD1AA4C85FDA848(iVar0, "photo");
	if (bVar1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1604248.f_6), 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1604248.f_6), 0);
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ivm") == 2)
	{
		Global_1604248.f_27557 = unk_0x2E3E2CC20DBC563B(iVar0, "ivm");
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "fixcam") == 2)
	{
		Global_1604248.f_62311 = unk_0x2E3E2CC20DBC563B(iVar0, "fixcam");
	}
	else
	{
		Global_1604248.f_62311 = 0;
	}
	Global_1604248.f_4 = unk_0x2E3E2CC20DBC563B(iVar0, "optbs");
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		Global_1604248.f_23083[iVar2 /*27*/] = unk_0x2E3E2CC20DBC563B(iVar0, "trainbs");
		Global_1604248.f_23083[iVar2 /*27*/].f_1 = { unk_0x7BC3CDE3564C2FE3(iVar0, "trainsp") };
		Global_1604248.f_23083[iVar2 /*27*/].f_4 = { unk_0x7BC3CDE3564C2FE3(iVar0, "trainep") };
		if (unk_0x77DBDA8A5753BCA3(iVar0, "trains") == 3)
		{
			Global_1604248.f_23083[iVar2 /*27*/].f_25 = unk_0xA6F2F8B77922BC0C(iVar0, "trains");
		}
		Global_1604248.f_23083[iVar2 /*27*/].f_26 = unk_0x2E3E2CC20DBC563B(iVar0, "trainsd");
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			Global_1604248.f_23083[iVar2 /*27*/].f_7[iVar3] = unk_0x2E3E2CC20DBC563B(iVar0, "trainct");
			Global_1604248.f_23083[iVar2 /*27*/].f_13[iVar3] = unk_0x2E3E2CC20DBC563B(iVar0, "trainca");
			Global_1604248.f_23083[iVar2 /*27*/].f_19[iVar3] = unk_0x2E3E2CC20DBC563B(iVar0, "trainci");
			iVar3++;
		}
		iVar2++;
	}
	Global_1604248.f_64 = { unk_0x7BC3CDE3564C2FE3(iVar0, "camo") };
	Global_1604248.f_67 = { unk_0x7BC3CDE3564C2FE3(iVar0, "camro") };
	Global_1604248.f_58 = { unk_0x7BC3CDE3564C2FE3(iVar0, "cam") };
	Global_1604248.f_70 = unk_0xA6F2F8B77922BC0C(iVar0, "camh");
	Global_1604248.f_58222 = unk_0xA6F2F8B77922BC0C(iVar0, "dmbds");
	Global_1604248.f_52 = { unk_0x7BC3CDE3564C2FE3(iVar0, "phpo") };
	StringCopy(&(Global_1604248.f_58405[0 /*16*/]), unk_0xC738F260E0A516F4(iVar0, "szTag"), 64);
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1604248.f_58540[iVar2 /*6*/]), unk_0xC738F260E0A516F4(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_87())
	{
		Global_1604248.f_2 = unk_0x2E3E2CC20DBC563B(iVar0, "subtype");
		Global_1604248.f_62308 = unk_0x2E3E2CC20DBC563B(iVar0, "testcomplete");
		if ((Global_1604248.f_2 == 6 || Global_1604248.f_2 == 5) || Global_1604248.f_2 == 4)
		{
			if (unk_0x77DBDA8A5753BCA3(iVar0, "teamBal") == 2)
			{
				Global_1604248.f_62310 = unk_0x2E3E2CC20DBC563B(iVar0, "numRounds");
			}
			else
			{
				Global_1604248.f_62310 = 1;
			}
			if (Global_1604248.f_62310 < 1)
			{
				Global_1604248.f_62310 = 1;
			}
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, "teamBal") == 2)
		{
			Global_1604248.f_62312 = unk_0x2E3E2CC20DBC563B(iVar0, "teamBal");
		}
		else
		{
			Global_1604248.f_62312 = 5;
		}
	}
	Global_1604248.f_62309 = unk_0x2E3E2CC20DBC563B(iVar0, "testcomplete");
	Global_1604248.f_39 = unk_0x2E3E2CC20DBC563B(iVar0, "endtype");
	Global_1604248.f_10 = unk_0x2E3E2CC20DBC563B(iVar0, "menubs");
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ovrpc") == 2)
	{
		Global_1604248.f_38219 = unk_0x2E3E2CC20DBC563B(iVar0, "ovrpc");
	}
	else
	{
		Global_1604248.f_38219 = -1;
	}
	Global_1604248.f_11 = unk_0x2E3E2CC20DBC563B(iVar0, "menubs2");
	if (unk_0x77DBDA8A5753BCA3(iVar0, "menubs3") == 2)
	{
		Global_1604248.f_12 = unk_0x2E3E2CC20DBC563B(iVar0, "menubs3");
	}
	else
	{
		Global_1604248.f_12 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hptfb") == 2)
	{
		Global_1604248.f_73 = unk_0x2E3E2CC20DBC563B(iVar0, "hptfb");
	}
	else
	{
		Global_1604248.f_73 = 0;
	}
	Global_1604248.f_27606 = unk_0x2E3E2CC20DBC563B(iVar0, "teamvbs");
	Global_1604248.f_13 = unk_0x2E3E2CC20DBC563B(iVar0, "cncmbs");
	Global_1604248.f_73758 = unk_0x2E3E2CC20DBC563B(iVar0, "todhr");
	Global_1604248.f_73759 = unk_0x2E3E2CC20DBC563B(iVar0, "todmn");
	Global_1604248.f_9 = unk_0x2E3E2CC20DBC563B(iVar0, "cmpts");
	Global_1604248.f_37 = unk_0x2E3E2CC20DBC563B(iVar0, "rank");
	Global_1604248.f_58864 = unk_0x2E3E2CC20DBC563B(iVar0, "charcon");
	Global_1604248.f_58864 = unk_0x2E3E2CC20DBC563B(iVar0, "char");
	Global_1604248.f_58866 = unk_0x2E3E2CC20DBC563B(iVar0, "xpr");
	Global_1604248.f_58867 = unk_0x2E3E2CC20DBC563B(iVar0, "cshr");
	Global_1604248.f_58871 = unk_0x2E3E2CC20DBC563B(iVar0, "ctsc");
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecsbs") == 2)
	{
		Global_1604248.f_70957.f_16 = unk_0x2E3E2CC20DBC563B(iVar0, "ecsbs");
	}
	else
	{
		Global_1604248.f_70957.f_16 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecsbs2") == 2)
	{
		Global_1604248.f_70957.f_17 = unk_0x2E3E2CC20DBC563B(iVar0, "ecsbs2");
	}
	else
	{
		Global_1604248.f_70957.f_17 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecsrng") == 2)
	{
		Global_1604248.f_70957.f_62 = unk_0x2E3E2CC20DBC563B(iVar0, "ecsrng");
	}
	else
	{
		Global_1604248.f_70957.f_62 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecscp") == 5)
	{
		Global_1604248.f_70957.f_54 = { unk_0x7BC3CDE3564C2FE3(iVar0, "ecscp") };
	}
	else
	{
		Global_1604248.f_70957.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecscr") == 3)
	{
		Global_1604248.f_70957.f_60 = unk_0xA6F2F8B77922BC0C(iVar0, "ecscr");
	}
	else
	{
		Global_1604248.f_70957.f_60 = 0f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ecscs") == 5)
	{
		Global_1604248.f_70957.f_57 = { unk_0x7BC3CDE3564C2FE3(iVar0, "ecscs") };
	}
	else
	{
		Global_1604248.f_70957.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/].f_1 = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/].f_2 = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_70957.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_70957.f_63[iVar8 /*12*/].f_4), unk_0xC738F260E0A516F4(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1604248.f_70957.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "clbscr") == 2)
	{
		Global_1604248.f_71950 = unk_0x2E3E2CC20DBC563B(iVar0, "clbscr");
	}
	else
	{
		Global_1604248.f_71950 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "disar") == 2)
	{
		Global_1604248.f_71951 = unk_0x2E3E2CC20DBC563B(iVar0, "disar");
	}
	else
	{
		Global_1604248.f_71951 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "rlopt") == 2)
	{
		Global_1604248.f_71739 = unk_0x2E3E2CC20DBC563B(iVar0, "rlopt");
	}
	else
	{
		Global_1604248.f_71739 = 0;
	}
	iVar15 = unk_0x2E3E2CC20DBC563B(iVar0, "gpmn");
	Global_1604248.f_72 = iVar15;
	iVar16 = unk_0x2E3E2CC20DBC563B(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1604248.f_58859 = iVar16;
	}
	else
	{
		Global_1604248.f_58859 = -1;
	}
	Global_1604248.f_58858 = unk_0x2E3E2CC20DBC563B(iVar0, "ausc");
	Global_1604248.f_15 = unk_0x2E3E2CC20DBC563B(iVar0, "minNu");
	Global_1604248.f_14 = unk_0x2E3E2CC20DBC563B(iVar0, "num");
	if (Global_1604248.f_14 == -1)
	{
		Global_1604248.f_14 = 30;
	}
	Global_1604248.f_16 = unk_0x2E3E2CC20DBC563B(iVar0, "time");
	Global_1604248.f_55 = { unk_0x7BC3CDE3564C2FE3(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1604248.f_71391 = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar17) };
	Global_1604248.f_71405 = unk_0x2E3E2CC20DBC563B(iVar0, "apwbs");
	Global_1604248.f_71394 = unk_0x2E3E2CC20DBC563B(iVar0, "wrploc");
	Global_1604248.f_71408 = unk_0x2E3E2CC20DBC563B(iVar0, "twrst");
	Global_1604248.f_71406 = unk_0x2E3E2CC20DBC563B(iVar0, "iplop");
	Global_1604248.f_71407 = unk_0x2E3E2CC20DBC563B(iVar0, "intop");
	if (unk_0x77DBDA8A5753BCA3(iVar0, "copteam") == 2)
	{
		Global_1604248.f_27608 = unk_0x2E3E2CC20DBC563B(iVar0, "copteam");
	}
	else
	{
		Global_1604248.f_27608 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1604248.f_58556), unk_0xC738F260E0A516F4(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1604248.f_58556), "", 64);
	}
	iVar15 = 0;
	while (iVar15 <= 3)
	{
		iVar21 = 0;
		while (iVar21 <= 1)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "fs", 8);
			StringIntConCat(&cVar9, iVar21, 8);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1604248.f_73982[iVar15 /*33*/][iVar21 /*16*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1604248.f_73982[iVar15 /*33*/][iVar21 /*16*/]), "", 64);
			}
			iVar21++;
		}
		iVar21 = 0;
		while (iVar21 <= 21)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "vl", 8);
			StringIntConCat(&cVar9, iVar21, 8);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
			{
				Global_1604248.f_27079[iVar15 /*23*/][iVar21] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
			}
			else
			{
				Global_1604248.f_27079[iVar15 /*23*/][iVar21] = 0;
			}
			iVar21++;
		}
		iVar22 = 0;
		while (iVar22 <= 3)
		{
			iVar21 = 0;
			while (iVar21 <= 21)
			{
				StringCopy(&cVar9, "t", 8);
				StringIntConCat(&cVar9, iVar15, 8);
				StringIntConCat(&cVar9, iVar22, 8);
				StringConCat(&cVar9, "rv", 8);
				StringIntConCat(&cVar9, iVar21, 8);
				if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
				{
					Global_1604248.f_27172[iVar15 /*93*/][iVar22 /*23*/][iVar21] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
				}
				else
				{
					Global_1604248.f_27172[iVar15 /*93*/][iVar22 /*23*/][iVar21] = 0;
				}
				iVar21++;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_58850[iVar15] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_58850[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62435[iVar15] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62435[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_73917[iVar15 /*16*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_73917[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_74115[iVar15 /*6*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 24);
		}
		else
		{
			StringCopy(&(Global_1604248.f_74115[iVar15 /*6*/]), "", 24);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_74140[iVar15] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_74140[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_71952[iVar15] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71952[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_58872[iVar15] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_58872[iVar15] = -1;
		}
		iVar15++;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1604248.f_58572), unk_0xC738F260E0A516F4(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1604248.f_58572), "", 24);
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "vsclout") == 2)
	{
		Global_1604248.f_62395 = unk_0x2E3E2CC20DBC563B(iVar0, "vsclout");
	}
	else
	{
		Global_1604248.f_62395 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "vsthout") == 2)
	{
		Global_1604248.f_62396 = unk_0x2E3E2CC20DBC563B(iVar0, "vsthout");
	}
	else
	{
		Global_1604248.f_62396 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "dspteam") == 2)
	{
		Global_1604248.f_71975 = unk_0x2E3E2CC20DBC563B(iVar0, "dspteam");
	}
	else
	{
		Global_1604248.f_71975 = -1;
	}
	if (!func_66() && !func_162())
	{
		if (unk_0x9B9B44C84F93C4BE(iParam1))
		{
			StringCopy(&(Global_1604248.f_58254), unk_0xC738F260E0A516F4(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_58254), func_161(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1604248.f_58254), unk_0xC738F260E0A516F4(iVar0, "nm"), 64);
	}
	Global_1604248.f_58895 = unk_0x2E3E2CC20DBC563B(iVar0, "mgrk");
	Global_1604248.f_58896 = unk_0x2E3E2CC20DBC563B(iVar0, "mght");
	StringCopy(&(Global_1604248.f_58276[0 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[1 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[2 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[3 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[4 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[5 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[6 /*16*/]), "", 64);
	StringCopy(&(Global_1604248.f_58276[7 /*16*/]), "", 64);
	uVar23 = unk_0xBC3DFFCED0175B93(iVar0, "dec");
	iVar24 = unk_0xF2EC0D50FCCB3CE1(unk_0xE2B9F5A91729B995(uVar23, 0));
	if (iParam1 == -1 || unk_0x9B9B44C84F93C4BE(iParam1))
	{
		if (iVar24 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0xCEC353E8CB49D011(iVar23) - 1))
			{
				StringCopy(&(Global_1604248.f_58276[iVar2 /*16*/]), unk_0xE2B9F5A91729B995(iVar23, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar26 = unk_0xE2B9F5A91729B995(iVar23, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar24 > (63 * iVar2))
				{
					if (iVar24 > (63 * iVar2) + 63)
					{
						iVar25 = (63 * iVar2) + 63;
					}
					else
					{
						iVar25 = iVar24;
					}
					StringCopy(&(Global_1604248.f_58276[iVar2 /*16*/]), unk_0xC7B7096C20939188(sVar26, (63 * iVar2), iVar25), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1604248.f_58276[0 /*16*/]), func_161(), 64);
	}
	Global_1604248.f_19 = unk_0x2E3E2CC20DBC563B(iVar0, "tnum");
	Global_1604248.f_20 = unk_0x2E3E2CC20DBC563B(iVar0, "mtnum");
	if (Global_1604248 == 1)
	{
		if (Global_1604248.f_19 > 4)
		{
			Global_1604248.f_19 = 4;
		}
	}
	else if (Global_1604248.f_19 > 4)
	{
		Global_1604248.f_19 = 4;
	}
	Global_1604248.f_54639 = unk_0x2E3E2CC20DBC563B(iVar0, "atmdm");
	Global_1604248.f_33 = unk_0x2E3E2CC20DBC563B(iVar0, "trel");
	Global_1604248.f_58868 = unk_0x2E3E2CC20DBC563B(iVar0, "ltm");
	Global_1604248.f_61 = { unk_0x7BC3CDE3564C2FE3(iVar0, "vcpr") };
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hstat") == 2)
	{
		Global_1604248.f_58839 = unk_0x2E3E2CC20DBC563B(iVar0, "hstat");
	}
	else
	{
		Global_1604248.f_58839 = 0;
	}
	iVar27 = 0;
	while (iVar27 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar27, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_38155[iVar27 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_38155[iVar27 /*3*/] = { 0f, 0f, 0f };
		}
		iVar27++;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "numzr") == 2)
	{
		Global_1604248.f_38216 = unk_0x2E3E2CC20DBC563B(iVar0, "numzr");
	}
	else
	{
		Global_1604248.f_38216 = 0;
	}
	iVar28 = unk_0x8140B477AA55A05E(iParam0, "ene");
	iVar29 = unk_0x2E3E2CC20DBC563B(iVar28, "no");
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hpped") == 2 && iVar29 > unk_0x2E3E2CC20DBC563B(iVar0, "hpped"))
	{
		Global_1604248.f_54630 = unk_0x2E3E2CC20DBC563B(iVar0, "hpped");
	}
	else
	{
		Global_1604248.f_54630 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hpped2") == 2 && iVar29 > unk_0x2E3E2CC20DBC563B(iVar0, "hpped2"))
	{
		Global_1604248.f_54631 = unk_0x2E3E2CC20DBC563B(iVar0, "hpped2");
	}
	else
	{
		Global_1604248.f_54631 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hpped3") == 2 && iVar29 > unk_0x2E3E2CC20DBC563B(iVar0, "hpped3"))
	{
		Global_1604248.f_54632 = unk_0x2E3E2CC20DBC563B(iVar0, "hpped3");
	}
	else
	{
		Global_1604248.f_54632 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "tshd") == 2)
	{
		Global_1604248.f_58891 = unk_0x2E3E2CC20DBC563B(iVar0, "tshd");
	}
	else
	{
		Global_1604248.f_58891 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "mrd") == 2)
	{
		Global_1604248.f_58892 = unk_0x2E3E2CC20DBC563B(iVar0, "mrd");
	}
	else
	{
		Global_1604248.f_58892 = 15;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atspos") == 5)
	{
		Global_1604248.f_73815 = { unk_0x7BC3CDE3564C2FE3(iVar0, "atspos") };
	}
	else
	{
		Global_1604248.f_73815 = { 0f, 0f, 0f };
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atscmp") == 5)
	{
		Global_1604248.f_73809 = { unk_0x7BC3CDE3564C2FE3(iVar0, "atscmp") };
	}
	else
	{
		Global_1604248.f_73809 = { 0f, 0f, 0f };
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atscmr") == 5)
	{
		Global_1604248.f_73812 = { unk_0x7BC3CDE3564C2FE3(iVar0, "atscmr") };
	}
	else
	{
		Global_1604248.f_73812 = { 0f, 0f, 0f };
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atsfov") == 3)
	{
		Global_1604248.f_73818 = unk_0xA6F2F8B77922BC0C(iVar0, "atsfov");
	}
	else
	{
		Global_1604248.f_73818 = 45f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atshed") == 3)
	{
		Global_1604248.f_73819 = unk_0xA6F2F8B77922BC0C(iVar0, "atshed");
	}
	else
	{
		Global_1604248.f_73819 = 0f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "atsveh") == 2)
	{
		Global_1604248.f_73820 = unk_0x2E3E2CC20DBC563B(iVar0, "atsveh");
	}
	else
	{
		Global_1604248.f_73820 = 0;
	}
	Global_1604248.f_18 = Global_1604248.f_19;
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hpdt1") == 2)
	{
		Global_1604248.f_58840[0] = unk_0x2E3E2CC20DBC563B(iVar0, "hpdt1");
	}
	else
	{
		Global_1604248.f_58840[0] = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hpdt2") == 2)
	{
		Global_1604248.f_58840[1] = unk_0x2E3E2CC20DBC563B(iVar0, "hpdt2");
	}
	else
	{
		Global_1604248.f_58840[1] = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "vdt") == 2)
	{
		Global_1604248.f_58843 = unk_0x2E3E2CC20DBC563B(iVar0, "vdt");
	}
	else
	{
		Global_1604248.f_58843 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrbs") == 2)
	{
		Global_1604248.f_71957 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrbs");
	}
	else
	{
		Global_1604248.f_71957 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrtt") == 2)
	{
		Global_1604248.f_71958 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrtt");
	}
	else
	{
		Global_1604248.f_71958 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrttm") == 2)
	{
		Global_1604248.f_71959 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrttm");
	}
	else
	{
		Global_1604248.f_71959 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrtrl") == 2)
	{
		Global_1604248.f_71960 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrtrl");
	}
	else
	{
		Global_1604248.f_71960 = -1;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrpdt") == 2)
	{
		Global_1604248.f_71962 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrpdt");
	}
	else
	{
		Global_1604248.f_71962 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrvdt") == 2)
	{
		Global_1604248.f_71964 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrvdt");
	}
	else
	{
		Global_1604248.f_71964 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrkt") == 2)
	{
		Global_1604248.f_71966 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrkt");
	}
	else
	{
		Global_1604248.f_71966 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hbrph") == 2)
	{
		Global_1604248.f_71969 = unk_0x2E3E2CC20DBC563B(iVar0, "hbrph");
	}
	else
	{
		Global_1604248.f_71969 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "hecam") == 2)
	{
		Global_1604248.f_71970 = unk_0x2E3E2CC20DBC563B(iVar0, "hecam");
	}
	else
	{
		Global_1604248.f_71970 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "sdrvm") == 2)
	{
		Global_1604248.f_74158 = unk_0x2E3E2CC20DBC563B(iVar0, "sdrvm");
	}
	else
	{
		Global_1604248.f_74158 = 10000;
	}
	if (((unk_0x77DBDA8A5753BCA3(iVar0, "hmmtt") == 2 && unk_0x77DBDA8A5753BCA3(iVar0, "hmmts") == 2) && unk_0x77DBDA8A5753BCA3(iVar0, "hmmte") == 2) && unk_0x77DBDA8A5753BCA3(iVar0, "hmmth") == 2)
	{
		Global_1604248.f_71971 = unk_0x2E3E2CC20DBC563B(iVar0, "hmmtt");
		Global_1604248.f_71972 = unk_0x2E3E2CC20DBC563B(iVar0, "hmmts");
		Global_1604248.f_71973 = unk_0x2E3E2CC20DBC563B(iVar0, "hmmte");
		Global_1604248.f_71974 = unk_0x2E3E2CC20DBC563B(iVar0, "hmmth");
	}
	else
	{
		Global_1604248.f_71971 = 0;
		Global_1604248.f_71972 = 0;
		Global_1604248.f_71973 = 0;
		Global_1604248.f_71974 = 0;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "tstrm") == 2)
	{
		Global_1604248.f_73757 = unk_0x2E3E2CC20DBC563B(iVar0, "tstrm");
	}
	else
	{
		Global_1604248.f_73757 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_62003[iVar2 /*8*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1604248.f_62003[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_54483[iVar2 /*16*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_54483[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_54532[iVar2 /*16*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_54532[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_54581[iVar2 /*16*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_54581[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar30 = 0;
	while (iVar30 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 11)
		{
			StringCopy(&cVar9, "ofit", 8);
			StringIntConCat(&cVar9, iVar3 + 1, 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
			{
				Global_1604248.f_62337[iVar30 /*13*/][iVar3] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62412[iVar30 /*2*/][0] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62412[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62426[iVar30 /*2*/][0] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62426[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62397[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62397[iVar30] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62402[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62402[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_71395[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71395[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_71400[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71400[iVar30] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2 && !func_132())
		{
			Global_1604248.f_71734[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71734[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_71740[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71740[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_27591[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_27591[iVar30] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_27601[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_27601[iVar30] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_57897[iVar30 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_57897[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_57910[iVar30 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_57910[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 3)
		{
			Global_1604248.f_57923[iVar30] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_57923[iVar30] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62390[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62390[iVar30] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_62421[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_62421[iVar30] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_56268[iVar30] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_56268[iVar30] = -1;
		}
		iVar31 = 0;
		while (iVar31 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar30, 16);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar11, iVar31, 16);
			}
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar11) == 5)
			{
				Global_1604248.f_58022[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar11) };
			}
			else
			{
				Global_1604248.f_58022[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar30, 16);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar11, iVar31, 16);
			}
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar11) == 3)
			{
				Global_1604248.f_58131[iVar30 /*11*/][iVar31 /*5*/][0] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar11);
			}
			else
			{
				Global_1604248.f_58131[iVar30 /*11*/][iVar31 /*5*/][0] = 0f;
			}
			iVar32 = 0;
			while (iVar32 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar11) == 5)
				{
					Global_1604248.f_58022[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar11) };
				}
				else
				{
					Global_1604248.f_58022[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar11) == 3)
				{
					Global_1604248.f_58131[iVar30 /*11*/][iVar31 /*5*/][iVar32] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar11);
				}
				else
				{
					Global_1604248.f_58131[iVar30 /*11*/][iVar31 /*5*/][iVar32] = 0f;
				}
				iVar32++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			StringIntConCat(&cVar9, iVar31, 8);
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
			{
				Global_1604248.f_74145[iVar30 /*3*/][iVar31] = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
			}
			else
			{
				Global_1604248.f_74145[iVar30 /*3*/][iVar31] = 0;
			}
			iVar31++;
		}
		iVar31 = 0;
		while (iVar31 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar9, iVar31, 8);
			}
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
			{
				Global_1604248.f_73822[iVar30 /*13*/][iVar31 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
			}
			else
			{
				Global_1604248.f_73822[iVar30 /*13*/][iVar31 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar9, iVar31, 8);
			}
			if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 3)
			{
				Global_1604248.f_73875[iVar30 /*5*/][iVar31] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar9);
			}
			else
			{
				Global_1604248.f_73875[iVar30 /*5*/][iVar31] = -1f;
			}
			iVar31++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_73760[iVar30 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_73760[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_73773[iVar30 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_73773[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 5)
		{
			Global_1604248.f_73786[iVar30 /*3*/] = { unk_0x7BC3CDE3564C2FE3(iVar0, &cVar9) };
		}
		else
		{
			Global_1604248.f_73786[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 3)
		{
			Global_1604248.f_73799[iVar30] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_73799[iVar30] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 3)
		{
			Global_1604248.f_73804[iVar30] = unk_0xA6F2F8B77922BC0C(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_73804[iVar30] = 0f;
		}
		iVar30++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1604248.f_71409[iVar2 /*18*/]), unk_0xC738F260E0A516F4(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1604248.f_71409[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2)
		{
			Global_1604248.f_71409[iVar2 /*18*/].f_16 = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71409[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x77DBDA8A5753BCA3(iVar0, &cVar9) == 2 && !unk_0x06771AF7795B3ECF(&(Global_1604248.f_71409[iVar2 /*18*/])))
		{
			Global_1604248.f_71409[iVar2 /*18*/].f_17 = unk_0x2E3E2CC20DBC563B(iVar0, &cVar9);
		}
		else
		{
			Global_1604248.f_71409[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "cposr") == 3)
	{
		Global_1604248.f_74159 = unk_0xA6F2F8B77922BC0C(iVar0, "cposr");
	}
	else
	{
		Global_1604248.f_74159 = 60f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "cpopr") == 3)
	{
		Global_1604248.f_74160 = unk_0xA6F2F8B77922BC0C(iVar0, "cpopr");
	}
	else
	{
		Global_1604248.f_74160 = 5f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "cpohr") == 3)
	{
		Global_1604248.f_74161 = unk_0xA6F2F8B77922BC0C(iVar0, "cpohr");
	}
	else
	{
		Global_1604248.f_74161 = 60f;
	}
	if (unk_0x77DBDA8A5753BCA3(iVar0, "cdrt") == 3)
	{
		Global_1604248.f_74162 = unk_0xA6F2F8B77922BC0C(iVar0, "cdrt");
	}
	else
	{
		Global_1604248.f_74162 = -1f;
	}
}

var func_161()
{
	return unk_0x69C910B9EE514763("CREATOR_NO_T");
}

bool func_162()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_124, 0);
}

void func_163()
{
	if (func_164())
	{
		Global_2435030.f_8 = 0;
	}
	Global_2435030.f_7 = 1;
}

bool func_164()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_2, 11);
}

int func_165(int iParam0)
{
	if (unk_0x75C4BB2E54262038() || (unk_0x660675ADB09E441F() && iParam0 == 0))
	{
		if (unk_0xBABFA3519D8F7A45(1) == 0 || unk_0x4076712F1D2AF6DD(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBABFA3519D8F7A45(1) == 0)
	{
		return 0;
	}
	if (func_166() == 0)
	{
		return 0;
	}
	return 1;
}

int func_166()
{
	if (unk_0x75C4BB2E54262038() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0xD5560895105F1405() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if ((unk_0x660675ADB09E441F() && unk_0xC6F9DC8B9E6D41AE() == 0) && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0x9F979F481F18EB48() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	if (unk_0xF6BAF9F0C2863FFE() && unk_0x018F7277C3350C31())
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	if (unk_0x75C4BB2E54262038() || (unk_0x660675ADB09E441F() && iParam0 == 0))
	{
		if (unk_0xBABFA3519D8F7A45(0) == 0 || unk_0x4076712F1D2AF6DD(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBABFA3519D8F7A45(0) == 0)
	{
		return 0;
	}
	if (func_166() == 0)
	{
		return 0;
	}
	return 1;
}

void func_168(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1604248.f_58887 = 0;
	if (bParam0)
	{
		Global_1604248.f_38219 = -1;
		Global_1604248.f_10 = 0;
		Global_1604248.f_11 = 0;
		Global_1604248.f_73 = 0;
		Global_1604248.f_71739 = 0;
		Global_1604248.f_12 = 0;
		Global_1604248.f_9 = 0;
		Global_1604248.f_14 = 0;
		Global_1604248.f_39 = 0;
		Global_1604248.f_16 = 0;
		Global_1604248.f_38 = 0;
		Global_1604248.f_40 = 0;
		Global_1604248.f_41 = 0;
		Global_1604248.f_43 = 0;
		Global_1604248.f_44 = 0;
		Global_1604248.f_45 = 0;
		Global_1604248.f_46 = 0;
		Global_1604248.f_18 = 0;
		Global_1604248.f_19 = 1;
		Global_1604248.f_5 = 0;
		Global_1604248.f_34 = 0;
		Global_1604248.f_37 = 1;
		Global_1604248.f_15 = 0;
		Global_1604248.f_58864 = 0;
		Global_1604248.f_58867 = 0;
		Global_1604248.f_58866 = 0;
		Global_1604248.f_58863 = 0;
		if (bParam1)
		{
			Global_1604248.f_4 = 0;
		}
		Global_1604248.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1604248.f_22702[iVar0 /*38*/] = -1;
			Global_1604248.f_22702[iVar0 /*38*/].f_1 = -1;
			Global_1604248.f_22702[iVar0 /*38*/].f_2 = 0;
			Global_1604248.f_22702[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1604248.f_58868 = 0;
		Global_1604248.f_58869 = 0;
		Global_1604248.f_58870 = 0;
		Global_1604248.f_58859 = -1;
		Global_1604248.f_58858 = 0;
		Global_1604248.f_50 = 0;
		Global_1604248.f_58 = { 0f, 0f, 0f };
		Global_1604248.f_61 = { 0f, 0f, 0f };
		Global_1604248.f_64 = { 0f, 0f, 0f };
		Global_1604248.f_67 = { 0f, 0f, 0f };
		Global_1604248.f_70 = 0f;
		Global_1604248.f_58222 = 0f;
		Global_1604248.f_72 = 0;
		Global_1604248.f_58886 = 0;
		Global_1604248.f_71951 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1604248.f_27063[iVar0] = 0;
			Global_1604248.f_27047[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_1604248.f_58572), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1604248.f_62003[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1604248.f_73757 = 0;
	Global_1604248.f_33 = 0;
	Global_1604248.f_52 = { 0f, 0f, 0f };
	Global_1604248.f_71950 = -1;
	Global_1604248.f_58865 = 0f;
	StringCopy(&(Global_1604248.f_58254), "", 64);
	StringCopy(&(Global_1604248.f_58556), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1604248.f_58540[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1604248.f_58276[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_176();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1604248.f_22702[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_26[iVar0] = 0;
		Global_1604248.f_71734[iVar0] = 0;
		Global_1604248.f_21[iVar0] = 1;
		Global_1604248.f_57897[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_57910[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_57923[iVar0] = 0f;
		Global_1604248.f_73760[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_73773[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_73786[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_73799[iVar0] = 45f;
		Global_1604248.f_73804[iVar0] = 0f;
		Global_1604248.f_56268[iVar0] = -1;
		StringCopy(&(Global_1604248.f_74115[iVar0 /*6*/]), "", 24);
		Global_1604248.f_74140[iVar0] = 0;
		StringCopy(&(Global_1604248.f_73917[iVar0 /*16*/]), "", 64);
		Global_1604248.f_62435[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1604248.f_73982[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1604248.f_23544[iVar0] = -1;
		iVar0++;
	}
	Global_1604248.f_73809 = { 0f, 0f, 0f };
	Global_1604248.f_73812 = { 0f, 0f, 0f };
	Global_1604248.f_73815 = { 0f, 0f, 0f };
	Global_1604248.f_73818 = 45f;
	Global_1604248.f_73819 = 0f;
	Global_1604248.f_73820 = 0;
	Global_1604248.f_74158 = 10000;
	Global_1604248.f_74159 = 60f;
	Global_1604248.f_74160 = 5f;
	Global_1604248.f_74161 = 60f;
	Global_1604248.f_74162 = -1f;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1604248.f_54483[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1604248.f_54532[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1604248.f_54581[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_174(&(Global_1604248.f_62440[iVar0 /*1269*/]));
		func_172(&(Global_1604248.f_68786[iVar0 /*434*/]));
		iVar0++;
	}
	func_172(&(Global_1604248.f_70957));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1604248.f_71847[iVar0 /*4*/].f_3 = 0;
		Global_1604248.f_71847[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1604248.f_71948 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1604248.f_38155[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1604248.f_38216 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_145(&(Global_1604248.f_58897[iVar0 /*45*/]), iVar0);
		iVar0++;
	}
	Global_1604248.f_62292[0] = 0;
	Global_1604248.f_62292[1] = 0;
	Global_1604248.f_62296 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_171(&(Global_1604248.f_71745[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1604248.f_2 = 0;
	Global_1604248.f_58839 = 0;
	Global_1604248.f_71739 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_58872[iVar0] = -1;
		Global_1604248.f_71952[iVar0] = -1;
		iVar0++;
	}
	Global_1604248.f_58895 = 0;
	Global_1604248.f_58896 = 0;
	Global_1604248.f_71990 = 0.5f;
	Global_1604248.f_62310 = 1;
	Global_1604248.f_62312 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1604248.f_71991[iVar0] = 0f;
		Global_1604248.f_72012[iVar0] = 0f;
		Global_1604248.f_72033[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_27558[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_27596[iVar0] = -1;
		iVar0++;
	}
	Global_1603003 = 0;
	Global_1604248.f_6 = 0;
	Global_1604248.f_58845 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_22666[iVar0 /*3*/][0] = 0;
		Global_1604248.f_22666[iVar0 /*3*/][1] = 0;
		Global_1604248.f_22653[iVar0 /*3*/][0] = 0;
		Global_1604248.f_22653[iVar0 /*3*/][1] = 0;
		Global_1604248.f_22679[iVar0 /*3*/][0] = 0;
		Global_1604248.f_22679[iVar0 /*3*/][1] = 0;
		Global_1604248.f_22692[iVar0] = 0;
		Global_1604248.f_22697[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 11)
		{
			Global_1604248.f_62337[iVar0 /*13*/][iVar1] = 0;
			iVar1++;
		}
		Global_1604248.f_62412[iVar0 /*2*/][0] = 0;
		Global_1604248.f_62426[iVar0 /*2*/][0] = 0;
		Global_1604248.f_74[iVar0 /*5606*/] = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_4 = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_7 = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_11 = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_14 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_15 = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_18 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_19 = { 0f, 0f, 0f };
		Global_1604248.f_74[iVar0 /*5606*/].f_22 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_23 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_36 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_24 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_25 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_26 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_27 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_28 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_29 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_30 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_31 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_32 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_33 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_34 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_57 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_1846 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1848 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1869 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1942 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2871 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1847 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1849 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2872 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_59 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_60 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_109 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_110 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2873 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_55 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_56 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1694 = 60000;
		Global_1604248.f_74[iVar0 /*5606*/].f_1700 = 60000;
		Global_1604248.f_74[iVar0 /*5606*/].f_2493 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_206 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_207 = 0;
		Global_1604248.f_22499[iVar0] = 0;
		Global_1604248.f_22504[iVar0] = 0;
		Global_1604248.f_22509[iVar0] = -1;
		Global_1604248.f_22519[iVar0] = 0;
		StringCopy(&(Global_1604248.f_22524[iVar0 /*4*/]), "", 16);
		Global_1604248.f_22546[iVar0] = 3;
		Global_1604248.f_22514[iVar0] = 0;
		Global_1604248.f_22541[iVar0] = 0;
		Global_1604248.f_62298[iVar0] = 0;
		Global_1604248.f_62303[iVar0] = 0;
		Global_1604248.f_27591[iVar0] = 100;
		Global_1604248.f_27601[iVar0] = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2675 = 0;
		Global_1603003.f_1[iVar0] = 0;
		Global_1604248.f_62397[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1604248.f_58022[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1604248.f_58131[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			Global_1604248.f_74145[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1604248.f_27079[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1604248.f_27172[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1604248.f_27172[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_73822[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_73875[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 45)
		{
			Global_1604248.f_74[iVar0 /*5606*/].f_61[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_111[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_74[iVar0 /*5606*/].f_160[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_165[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1604248.f_23083[iVar1 /*27*/] = 0;
			Global_1604248.f_23083[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1604248.f_23083[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1604248.f_23083[iVar1 /*27*/].f_25 = 0f;
			Global_1604248.f_23083[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1604248.f_23083[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1604248.f_23083[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1604248.f_23083[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1604248.f_74[iVar0 /*5606*/].f_2603[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2621[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2639[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2657[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_37[iVar1] = -1;
			Global_1604248.f_38069[iVar1 /*5*/][iVar0] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2676[iVar1] = 60000;
			Global_1604248.f_74[iVar0 /*5606*/].f_2694[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_2798[iVar2 /*16*/]), "", 64);
				Global_1604248.f_74[iVar0 /*5606*/].f_2712[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1604248.f_22551[iVar1 /*5*/][iVar0] = -1;
			StringCopy(&(Global_1603003.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1603003.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_226[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_244[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1702[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1720[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1738[iVar1] = 1;
			Global_1604248.f_74[iVar0 /*5606*/].f_1810[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1828[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1870[iVar1] = 10000;
			Global_1604248.f_74[iVar0 /*5606*/].f_1850[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1906[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_1756[iVar1] = 1;
			Global_1604248.f_74[iVar0 /*5606*/].f_1924[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1943[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2227[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2263[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1979[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1961[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2119[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2245[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2281[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2173[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2191[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2137[iVar1] = 100;
			Global_1604248.f_74[iVar0 /*5606*/].f_1997[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_2049[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_2101[iVar1] = 0f;
			Global_1604248.f_74[iVar0 /*5606*/].f_2155[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2209[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_334[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_352[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_370[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_406[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_262[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_280[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_388[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_424[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5354[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5372[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5390[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5408[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5426[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5444[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5462[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5480[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5498[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5516[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5534[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_2531[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2549[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2567[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2585[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_298[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_316[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1774[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_1792[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_170[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_188[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_208[iVar1] = 0;
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_2874[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_3147[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_3420[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_3899[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_3693[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_3796[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_5094[0 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_5094[1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_4002[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_4275[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_4548[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1604248.f_74[iVar0 /*5606*/].f_4821[iVar1 /*16*/]), "", 64);
			Global_1604248.f_74[iVar0 /*5606*/].f_2421[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2457[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2439[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_2299[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_2351[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_9 = 0f;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_10 = 0f;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_19 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_17 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_18 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_20 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_21 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_446[iVar1 /*23*/].f_22 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_9 = 0f;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_10 = 0f;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_19 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_17 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_18 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_20 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_21 = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_838[iVar1 /*23*/].f_22 = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_2403[iVar1] = 3f;
			Global_1604248.f_74[iVar0 /*5606*/].f_1888[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2475[iVar1] = 10.5f;
			Global_1604248.f_74[iVar0 /*5606*/].f_5127[iVar1 /*5*/][0] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5127[iVar1 /*5*/][1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5127[iVar1 /*5*/][2] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5127[iVar1 /*5*/][3] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5213[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5231[iVar1 /*4*/][0] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5231[iVar1 /*4*/][1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5231[iVar1 /*4*/][2] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5300[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5318[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5336[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_2495[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5552[iVar1] = 0;
			Global_1604248.f_74[iVar0 /*5606*/].f_5570[iVar1] = -1;
			Global_1604248.f_74[iVar0 /*5606*/].f_5588[iVar1] = 0;
			iVar1++;
		}
		Global_1604248.f_74[iVar0 /*5606*/].f_1693 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1699 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1692 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1698 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1695 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1696 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1697 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_1701 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_442 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_443 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_158 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_159 = -1;
		Global_1604248.f_74[iVar0 /*5606*/].f_2863 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2864 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2865 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2866 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2867 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2868 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2869 = 0;
		Global_1604248.f_74[iVar0 /*5606*/].f_2870 = 0;
		iVar0++;
	}
	Global_1604248.f_55 = { 0f, 0f, 0f };
	Global_1604248.f_23549 = { 0f, 0f, 0f };
	Global_1604248.f_71 = 0f;
	Global_1604248.f_71391 = { 0f, 0f, 0f };
	Global_1604248.f_58840[0] = 0;
	Global_1604248.f_58840[1] = 0;
	Global_1604248.f_58843 = 0;
	Global_1604248.f_58839 = 0;
	Global_1604248.f_71957 = 0;
	Global_1604248.f_71958 = 0;
	Global_1604248.f_71959 = 0;
	Global_1604248.f_71960 = 0;
	Global_1604248.f_71962 = 0;
	Global_1604248.f_71964 = 0;
	Global_1604248.f_71966 = 0;
	Global_1604248.f_71969 = 0;
	Global_1604248.f_71970 = 0;
	Global_1604248.f_71971 = 0;
	Global_1604248.f_71972 = 0;
	Global_1604248.f_71973 = 0;
	Global_1604248.f_71974 = 0;
	Global_1604248.f_71979 = -1;
	Global_1604248.f_71980 = -1;
	Global_1604248.f_71981 = -1;
	Global_1604248.f_71982 = -1;
	Global_1604248.f_71983 = -1;
	Global_1604248.f_71984 = -1;
	Global_1604248.f_71985 = -1;
	Global_1604248.f_71986 = -1;
	Global_1604248.f_71987 = -1;
	Global_1604248.f_71988 = -1;
	Global_1604248.f_71989 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1604248.f_24253[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_23552[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_23552[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_23552[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_24535[iVar0] = 0f;
		Global_1604248.f_24677[iVar0] = 1f;
		iVar0++;
	}
	Global_1604248.f_27037 = 0;
	if (bParam0)
	{
		Global_1604248.f_27038 = 0;
		Global_1604248.f_27046 = 0;
	}
	Global_1604248.f_27044 = 0;
	Global_1604248.f_27045 = 0;
	Global_1604248.f_27550 = 0f;
	Global_1604248.f_29765 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1604248.f_29766[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1604248.f_29766[iVar0 /*31*/].f_6 = 0f;
		Global_1604248.f_29766[iVar0 /*31*/].f_7 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_9 = -1;
		Global_1604248.f_29766[iVar0 /*31*/].f_8 = -1;
		Global_1604248.f_29766[iVar0 /*31*/].f_10 = 1;
		Global_1604248.f_29766[iVar0 /*31*/].f_18 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_12 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_13 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_14 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_11 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_28 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_29 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_30 = 0;
		Global_1604248.f_29766[iVar0 /*31*/].f_15 = -1;
		Global_1604248.f_29766[iVar0 /*31*/].f_16 = -1;
		Global_1604248.f_29766[iVar0 /*31*/].f_17 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_170(&(Global_1604248.f_74163[iVar0 /*213*/]));
		iVar0++;
	}
	Global_1604248.f_76294 = 0;
	Global_1604248.f_32898 = 0;
	Global_1604248.f_32899 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1604248.f_32900[iVar0 /*29*/] = { 0f, 0f, 0f };
		Global_1604248.f_32900[iVar0 /*29*/].f_6 = 0f;
		Global_1604248.f_32900[iVar0 /*29*/].f_7 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_8 = -1;
		Global_1604248.f_32900[iVar0 /*29*/].f_10 = -1;
		Global_1604248.f_32900[iVar0 /*29*/].f_9 = -1;
		Global_1604248.f_32900[iVar0 /*29*/].f_11 = 1;
		Global_1604248.f_32900[iVar0 /*29*/].f_16 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_12 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_26 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_27 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_28 = 0;
		Global_1604248.f_32900[iVar0 /*29*/].f_13 = -1;
		Global_1604248.f_32900[iVar0 /*29*/].f_14 = -1;
		Global_1604248.f_32900[iVar0 /*29*/].f_15 = -1;
		iVar0++;
	}
	Global_1604248.f_29440 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1604248.f_29441[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1604248.f_29441[iVar0 /*19*/].f_3 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_4 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_14 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_12 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_15 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_16 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_6 = -1;
		Global_1604248.f_29441[iVar0 /*19*/].f_5 = -1;
		Global_1604248.f_29441[iVar0 /*19*/].f_13 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_8 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_9 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_10 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_11 = 0f;
		Global_1604248.f_29441[iVar0 /*19*/].f_7 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_17 = 0;
		Global_1604248.f_29441[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1604248.f_29727 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1604248.f_29728[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1604248.f_29728[iVar0 /*7*/].f_3 = 0f;
		Global_1604248.f_29728[iVar0 /*7*/].f_4 = 0;
		Global_1604248.f_29728[iVar0 /*7*/].f_5 = 0;
		Global_1604248.f_29728[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1604248.f_27551 = 3.5f;
		Global_1604248.f_27552 = 7f;
		Global_1604248.f_27553 = 0f;
		Global_1604248.f_27554 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1604248.f_27558[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1604248.f_27596[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1604248.f_58877 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_27026[iVar0] = 0;
		Global_1604248.f_62390[iVar0] = -1;
		Global_1604248.f_62421[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1604248.f_26532[iVar1 /*29*/][iVar0] = 0;
			Global_1604248.f_26532[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1604248.f_26532[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1604248.f_26532[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1604248.f_26532[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1604248.f_71740[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1604248.f_27607 = 1;
	}
	Global_1604248.f_27609 = 0;
	Global_1604248.f_27610 = 0;
	Global_1604248.f_27611 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1604248.f_27612[iVar0 /*87*/] = { 0f, 0f, 0f };
		Global_1604248.f_27612[iVar0 /*87*/].f_4 = { 0f, 0f, 0f };
		Global_1604248.f_27612[iVar0 /*87*/].f_3 = 0f;
		Global_1604248.f_27612[iVar0 /*87*/].f_7 = 50f;
		Global_1604248.f_27612[iVar0 /*87*/].f_8 = 0f;
		Global_1604248.f_27612[iVar0 /*87*/].f_9 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_10 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_11 = { 0f, 0f, 0f };
		Global_1604248.f_27612[iVar0 /*87*/].f_14 = 0f;
		Global_1604248.f_27612[iVar0 /*87*/].f_15 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_26 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_28 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_29 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_30 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_42 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_41 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_43 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_44 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_45 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_46 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_47 = 60;
		Global_1604248.f_27612[iVar0 /*87*/].f_48 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_35 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_31 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_32 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_33 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_53 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_34 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_49 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_50 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_51 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_81 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_82 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_83 = { 0f, 0f, 0f };
		Global_1604248.f_27612[iVar0 /*87*/].f_86 = 0;
		Global_1604248.f_27612[iVar0 /*87*/].f_79 = -1;
		Global_1604248.f_27612[iVar0 /*87*/].f_80 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_27612[iVar0 /*87*/].f_16[iVar1] = 0;
			Global_1604248.f_27612[iVar0 /*87*/].f_21[iVar1] = 99999;
			Global_1604248.f_27612[iVar0 /*87*/].f_63[iVar1] = 0;
			Global_1604248.f_27612[iVar0 /*87*/].f_68[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1604248.f_71409[iVar0 /*18*/]), "", 64);
		Global_1604248.f_71409[iVar0 /*18*/].f_16 = 0;
		Global_1604248.f_71409[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1604248.f_33510 = 0;
	Global_1604248.f_33511 = 0;
	if (bParam0)
	{
		if (func_87() && !func_132())
		{
			Global_1604248.f_33512 = -1;
		}
		else
		{
			Global_1604248.f_33512 = 0;
		}
	}
	Global_1604248.f_33513 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1604248.f_33514[iVar0 /*20*/] = { 0f, 0f, 0f };
		Global_1604248.f_33514[iVar0 /*20*/].f_3 = 0f;
		Global_1604248.f_33514[iVar0 /*20*/].f_12 = 76;
		Global_1604248.f_33514[iVar0 /*20*/].f_4 = 0;
		Global_1604248.f_33514[iVar0 /*20*/].f_5 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_33514[iVar0 /*20*/].f_7[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_169();
	Global_1604248.f_54630 = -1;
	Global_1604248.f_54631 = -1;
	Global_1604248.f_54632 = -1;
	Global_1604248.f_58891 = -1;
	Global_1604248.f_58892 = 15;
	Global_1604248.f_34335 = 0;
	Global_1604248.f_29764 = 0;
	if (bParam0)
	{
		Global_1604248.f_27557 = -1;
		Global_1604248.f_27042 = -1;
	}
	Global_1604248.f_34336 = 0;
	Global_1604248.f_34337 = 0;
	Global_1604248.f_34338 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1604248.f_34339[iVar0 /*113*/] = { 0f, 0f, 0f };
		Global_1604248.f_34339[iVar0 /*113*/].f_3 = 0f;
		Global_1604248.f_34339[iVar0 /*113*/].f_4 = 50f;
		Global_1604248.f_34339[iVar0 /*113*/].f_5 = 0f;
		Global_1604248.f_34339[iVar0 /*113*/].f_6 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_7 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_8 = { 0f, 0f, 0f };
		Global_1604248.f_34339[iVar0 /*113*/].f_11 = 0f;
		Global_1604248.f_34339[iVar0 /*113*/].f_12 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_23 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_24 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_25 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_28 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_29 = 100;
		Global_1604248.f_34339[iVar0 /*113*/].f_30 = 1001f;
		Global_1604248.f_34339[iVar0 /*113*/].f_31 = 1001f;
		Global_1604248.f_34339[iVar0 /*113*/].f_33 = 1.5f;
		Global_1604248.f_34339[iVar0 /*113*/].f_39 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_98 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_40 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_41 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_26 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_27 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_44 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_35 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_36 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_37 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_56 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_57 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_96 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_95 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1604248.f_34339[iVar0 /*113*/].f_99[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_34339[iVar0 /*113*/].f_106[iVar1] = 0f;
			iVar1++;
		}
		Global_1604248.f_34339[iVar0 /*113*/].f_58 = -1;
		Global_1604248.f_34339[iVar0 /*113*/].f_59 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_38 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_109 = 0;
		Global_1604248.f_34339[iVar0 /*113*/].f_110 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_34339[iVar0 /*113*/].f_13[iVar1] = 0;
			Global_1604248.f_34339[iVar0 /*113*/].f_18[iVar1] = 99999;
			Global_1604248.f_34339[iVar0 /*113*/].f_89[iVar1] = 0;
			Global_1604248.f_34339[iVar0 /*113*/].f_72[iVar1] = 0;
			Global_1604248.f_34339[iVar0 /*113*/].f_77[iVar1] = 0;
			Global_1604248.f_34339[iVar0 /*113*/].f_46[iVar1] = -1;
			Global_1604248.f_34339[iVar0 /*113*/].f_51[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	Global_1604248.f_57930 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1604248.f_57931[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1604248.f_57931[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1604248.f_57931[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1604248.f_54633 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1604248.f_54640[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1604248.f_54640[iVar0 /*9*/].f_3 = 0f;
		Global_1604248.f_54640[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_54634[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/] = { 0f, 0f, 0f };
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/].f_3 = 0f;
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/].f_4 = 0;
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/].f_5 = 0;
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/].f_7 = -1;
			Global_1604248.f_55181[iVar0 /*262*/][iVar1 /*9*/].f_8 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1604248.f_38217 = 0;
	Global_1604248.f_38220 = 0;
	Global_1604248.f_38221 = 0;
	Global_1604248.f_38218 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1604248.f_38222[iVar0 /*271*/].f_38 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_48 = 0;
		Global_1604248.f_38222[iVar0 /*271*/] = { 0f, 0f, 0f };
		Global_1604248.f_38222[iVar0 /*271*/].f_3 = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_4 = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_13 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_14 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_15 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_31 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_35 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_36 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_37 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_206 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_205 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_207 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_208 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_209 = 20;
		Global_1604248.f_38222[iVar0 /*271*/].f_217 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_55 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_46 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_33 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_34 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_47 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_180 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_181 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_182 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_183 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_184 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_185 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_186 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_32 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_5 = 50f;
		Global_1604248.f_38222[iVar0 /*271*/].f_6 = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_7 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_8 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_9 = { 0f, 0f, 0f };
		Global_1604248.f_38222[iVar0 /*271*/].f_12 = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_167 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_61 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_159 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_160 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_161 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_167 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_177 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_168 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_176 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_62 = { 0f, 0f, 0f };
		Global_1604248.f_38222[iVar0 /*271*/].f_56 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_57 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_60 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_58 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_237 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_248 = 1f;
		Global_1604248.f_38222[iVar0 /*271*/].f_78 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_192 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_51 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_193 = 250;
		Global_1604248.f_38222[iVar0 /*271*/].f_196 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_197 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_251 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_198 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_252 = 4;
		Global_1604248.f_38222[iVar0 /*271*/].f_222 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_145 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_146 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_147 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_218 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_219 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_220 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_250 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_249 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_148 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_149 = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_59 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_38222[iVar0 /*271*/].f_16[iVar1] = 0;
			Global_1604248.f_38222[iVar0 /*271*/].f_21[iVar1] = 2;
			Global_1604248.f_38222[iVar0 /*271*/].f_26[iVar1] = 99999;
			Global_1604248.f_38222[iVar0 /*271*/].f_187[iVar1] = -1;
			Global_1604248.f_38222[iVar0 /*271*/].f_223[iVar1] = 0;
			Global_1604248.f_38222[iVar0 /*271*/].f_228[iVar1] = 0;
			Global_1604248.f_38222[iVar0 /*271*/].f_238[iVar1] = -1;
			Global_1604248.f_38222[iVar0 /*271*/].f_243[iVar1] = -1;
			Global_1604248.f_38222[iVar0 /*271*/].f_254[iVar1] = -2;
			Global_1604248.f_38222[iVar0 /*271*/].f_162[iVar1] = 0;
			iVar1++;
		}
		Global_1604248.f_38222[iVar0 /*271*/].f_113[0] = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_119[0] = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_131[0] = 0f;
		Global_1604248.f_38222[iVar0 /*271*/].f_79[0] = 0;
		Global_1604248.f_38222[iVar0 /*271*/].f_85[0] = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_91[0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_38222[iVar0 /*271*/].f_107[0] = 3;
		Global_1604248.f_38222[iVar0 /*271*/].f_125[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_38222[iVar0 /*271*/].f_65[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_38222[iVar0 /*271*/].f_79[iVar1 + 1] = 0;
			Global_1604248.f_38222[iVar0 /*271*/].f_113[iVar1 + 1] = 0f;
			Global_1604248.f_38222[iVar0 /*271*/].f_119[iVar1 + 1] = 0f;
			Global_1604248.f_38222[iVar0 /*271*/].f_131[iVar1 + 1] = 0f;
			Global_1604248.f_38222[iVar0 /*271*/].f_85[iVar1 + 1] = -1;
			Global_1604248.f_38222[iVar0 /*271*/].f_91[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_38222[iVar0 /*271*/].f_107[iVar1 + 1] = 3;
			Global_1604248.f_38222[iVar0 /*271*/].f_125[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1604248.f_38222[iVar0 /*271*/].f_261[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_38222[iVar0 /*271*/].f_268[iVar1] = 0f;
			iVar1++;
		}
		Global_1604248.f_38222[iVar0 /*271*/].f_178 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_179 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_253 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_259 = -1;
		Global_1604248.f_38222[iVar0 /*271*/].f_260 = -1;
		iVar0++;
	}
	Global_1604248.f_54633 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1604248.f_54640[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1604248.f_54640[iVar0 /*9*/].f_3 = 0f;
		Global_1604248.f_54640[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1604248.f_27032[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1604248.f_24749[iVar0 /*99*/].f_52 = 0;
		Global_1604248.f_24749[iVar0 /*99*/].f_46 = 0;
		Global_1604248.f_24749[iVar0 /*99*/].f_20 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/].f_28 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/].f_29 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/].f_30 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/].f_54 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/].f_55 = 0f;
		Global_1604248.f_24749[iVar0 /*99*/] = 0;
		Global_1604248.f_24749[iVar0 /*99*/].f_21 = { 0f, 0f, 0f };
		Global_1604248.f_24749[iVar0 /*99*/].f_24 = { 0f, 0f, 0f };
		Global_1604248.f_24749[iVar0 /*99*/].f_27 = 1f;
		Global_1604248.f_24749[iVar0 /*99*/].f_96 = 10.5f;
		Global_1604248.f_24749[iVar0 /*99*/].f_95 = 0;
		Global_1604248.f_24749[iVar0 /*99*/].f_53 = 0;
		Global_1604248.f_24749[iVar0 /*99*/].f_19 = 1f;
		if (Global_1604248.f_24749[iVar0 /*99*/].f_98 != 0)
		{
			unk_0xE90C0155A36786D2(Global_1604248.f_24749[iVar0 /*99*/].f_98);
			Global_1604248.f_24749[iVar0 /*99*/].f_98 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_24749[iVar0 /*99*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1604248.f_24749[iVar0 /*99*/].f_14[iVar1] = 0f;
			Global_1604248.f_24749[iVar0 /*99*/].f_36[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_41[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_31[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_61[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_66[iVar1] = 99999;
			Global_1604248.f_24749[iVar0 /*99*/].f_71[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_76[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_56[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_81[iVar1] = 0;
			Global_1604248.f_24749[iVar0 /*99*/].f_86[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1604248.f_57928 = 0;
	Global_1604248.f_32 = 0;
	Global_1604248.f_73758 = 12;
	Global_1604248.f_73759 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_71395[iVar0] = -1;
		Global_1604248.f_71400[iVar0] = -1;
		iVar0++;
	}
	Global_1604248.f_27608 = 0;
	Global_1604248.f_71975 = -1;
	Global_1604248.f_62395 = -1;
	Global_1604248.f_62396 = -1;
	Global_1604248.f_71405 = 0;
	Global_1604248.f_71394 = 0;
	Global_1604248.f_71407 = 0;
	Global_1604248.f_71406 = 0;
	Global_1604248.f_71408 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1604248.f_58850[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1604248.f_56304[iVar3] = -1;
		Global_1604248.f_56273[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 4)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1604248.f_56335[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				Global_1604248.f_57116[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
}

void func_169()
{
	int iVar0;
	int iVar1;
	
	Global_1604248.f_58555 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1604248.f_58578[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_58578[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1604248.f_58578[iVar0 /*26*/].f_9 = 0;
		Global_1604248.f_58578[iVar0 /*26*/].f_20 = 0;
		Global_1604248.f_58578[iVar0 /*26*/].f_22 = 0f;
		Global_1604248.f_58578[iVar0 /*26*/].f_23 = 0f;
		Global_1604248.f_58578[iVar0 /*26*/].f_21 = 0;
		Global_1604248.f_58578[iVar0 /*26*/].f_7 = 0f;
		Global_1604248.f_58578[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1604248.f_58578[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_170(var uParam0)
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

void func_171(var uParam0)
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

void func_172(char* sParam0)
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
		func_173(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_173(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_174(char* sParam0)
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
		func_175(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_173(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_175(char* sParam0, int iParam1)
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

void func_176()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1604248.f_58405[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_177()
{
	if (unk_0x2B0FFD431FD5A9FA())
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

bool func_178()
{
	return unk_0x889D01384B54BCE3(Global_965784.f_8, 0);
}

bool func_179()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 4);
}

bool func_180()
{
	return unk_0x889D01384B54BCE3(Global_2428577, 28);
}

var func_181()
{
	return Global_2428577.f_566;
}

void func_182()
{
	unk_0x29DB79DD4D939B38(&Global_2428577, 4);
}

void func_183()
{
	unk_0x29DB79DD4D939B38(&Global_2428577, 28);
}

void func_184(bool bParam0, bool bParam1, bool bParam2)
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
		func_57(bParam0, 0);
	}
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 65:
			return 15;
		
		case 72:
			return 8;
		
		case 66:
			return 14;
		
		case 70:
			return 122;
		
		case 73:
			return 1;
		
		case 71:
			return 5;
		
		case 74:
			return 6;
		
		case 67:
			return 11;
		
		case 75:
			return 0;
		
		case 76:
			return 2;
		
		case 68:
			return 13;
		
		case 77:
			return 3;
		
		case 69:
			return 12;
		
		default:
	}
	return 147;
}

bool func_186()
{
	return Global_2394650;
}

var func_187()
{
	return Global_2394650.f_3;
}

