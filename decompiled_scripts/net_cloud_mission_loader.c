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
	unk_0x1ED2FDBD02899869();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_268 = false;
		bVar0 = func_181();
		Global_2394634.f_3 = 0;
		Global_2394794 = 0;
		if (func_180())
		{
			bLocal_268 = true;
			Var1 = { Global_2394634.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_179(Global_2394634.f_4);
			iVar20 = unk_0xCFC72E446B0B3AD7();
			bVar21 = Global_2394634.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394634.f_15 };
			}
			if (Global_2394634.f_25)
			{
				func_178(&Local_88, 1, 1);
				unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar20 /*332*/].f_39.f_18), 2);
				unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar20 /*332*/].f_39.f_18), 1);
				unk_0xF76EE56D3E7DAF1B(&(Global_1582869[iVar20 /*332*/].f_39.f_18), 3);
				func_177();
				func_176();
				Global_2394634.f_25 = 0;
			}
			if (!func_72(&Local_88, &cVar11, &(Global_1582869[iVar20 /*332*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 0))
			{
				Global_2394634.f_23 = 0;
				Global_2394634.f_27 = -1;
				if (bVar0)
				{
					func_178(&Local_88, 1, 1);
					unk_0x4B0F739AED00FFB0();
					func_71();
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 0;
					if (Global_2394634.f_27 < 0)
					{
						Global_2394634.f_27 = 0;
					}
					else
					{
						Global_2394634.f_27++;
						if (Global_2394634.f_27 >= 10)
						{
							func_70();
							Global_2394634.f_25 = 1;
						}
					}
				}
			}
			else if (Local_88.f_0)
			{
				Global_2394634.f_23 = 1;
				Global_2394634.f_24 = 1;
				if (Global_2394634.f_27 < 0)
				{
					Global_2394634.f_27 = 0;
				}
				else
				{
					Global_2394634.f_27++;
					if (Global_2394634.f_27 >= 10)
					{
						func_70();
					}
				}
			}
			else
			{
				Global_2394634.f_26++;
				if (Global_2394634.f_26 >= 3)
				{
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 0;
					if (Global_2394634.f_27 < 0)
					{
						Global_2394634.f_27 = 0;
					}
					else
					{
						Global_2394634.f_27++;
						if (Global_2394634.f_27 >= 10)
						{
							func_70();
							Global_2394634.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394634.f_25 = 1;
				}
			}
		}
		if (func_69())
		{
			bLocal_268 = true;
			MemCopy(&cVar22, {Global_2394634.f_4.f_3}, 8);
			if (Global_2394634.f_23)
			{
				func_70();
			}
			else
			{
				if (Global_2394634.f_25)
				{
					func_178(&Local_88, 1, 1);
					Global_2394634.f_25 = 0;
				}
				if (!func_66(&Local_88, &cVar22, &Local_181))
				{
					Global_2394634.f_23 = 0;
					Global_2394634.f_27 = -1;
				}
				else if (Local_88.f_0)
				{
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 1;
					Global_2394634.f_28 = Local_181.f_65;
					Global_2394634.f_29 = Local_181.f_68;
					Global_2394634.f_30 = { Local_181.f_22 };
					Global_2394634.f_46 = { Local_181.f_38 };
					Global_2398293 = { Local_181 };
				}
				else
				{
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 0;
				}
			}
		}
		if (func_65())
		{
			bLocal_268 = true;
			if (Global_2394634.f_23)
			{
				func_70();
			}
			else
			{
				if (Global_2394634.f_25)
				{
					func_178(&Local_88, 1, 1);
					Global_2394634.f_25 = 0;
				}
				iVar30 = Local_88.f_4;
				if (!func_4(&Local_88))
				{
					Global_2394794 = 1;
					if (iVar30 != Local_88.f_4)
					{
						if (Local_88.f_4 == 4)
						{
							iLocal_267 = (unk_0x17103F66FBB44C3C() + 50000);
						}
					}
					bVar31 = false;
					if (Local_88.f_4 == 4)
					{
						if (unk_0x17103F66FBB44C3C() > iLocal_267)
						{
							Global_2394634.f_23 = 1;
							Global_2394634.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394634.f_23 = 0;
						Global_2394634.f_27 = -1;
					}
				}
				else if (Local_88.f_0)
				{
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 1;
				}
				else
				{
					Global_2394634.f_23 = 1;
					Global_2394634.f_24 = 0;
				}
			}
		}
		if (!bLocal_268)
		{
			if (func_3(unk_0xCFC72E446B0B3AD7()) || func_2(unk_0xCFC72E446B0B3AD7()))
			{
				if (!func_1(unk_0xCFC72E446B0B3AD7(), 1))
				{
					unk_0xE60DEFFB2A853900();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1)
{
	if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_243.f_4, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_243.f_4, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 7;
}

bool func_3(int iParam0)
{
	return Global_2414035[iParam0 /*254*/].f_114 == 2;
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
				unk_0x4E4095F9046A8433(1);
			}
			else
			{
				unk_0x4E4095F9046A8433(0);
			}
			bParam0->f_13 = Global_2394793;
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
			if (unk_0xBE63475680F10120(&Global_2394696, bParam0->f_13, 1, func_52(0)))
			{
				func_55(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x3A2E61F1EDABC8B0())
			{
				if (unk_0x77B9F3F94D8CF7BC())
				{
					*bParam0 = 0;
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x07AB9F01DD6212B4() > 0)
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
			if (unk_0x28D2D0A77088C320())
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
						if (unk_0xD93D1BEC8A98F771() != 0)
						{
							unk_0xA7FED408D802E61F();
						}
						if (unk_0x58715EAFD552E800(bParam0->f_7))
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<86> Var5;
	int iVar91;
	
	iVar0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(iVar0, "mission");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "gen");
	if (func_64())
	{
		if (func_51(unk_0x6D5BF0920825A991(bParam0->f_7)))
		{
			if (unk_0xD93D1BEC8A98F771() != 0)
			{
				unk_0xA7FED408D802E61F();
			}
			return;
		}
	}
	if ((unk_0xB872CF0BC8201FAA(iVar2, "type") == 0 && unk_0xB872CF0BC8201FAA(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xD93D1BEC8A98F771() != 0)
		{
			unk_0xA7FED408D802E61F();
		}
		return;
	}
	if (Global_262145.f_6059)
	{
		if (unk_0xB872CF0BC8201FAA(iVar2, "type") == 0)
		{
			if (unk_0xB872CF0BC8201FAA(iVar2, "subtype") == 1 || unk_0xB872CF0BC8201FAA(iVar2, "subtype") == 7)
			{
				if (unk_0xD93D1BEC8A98F771() != 0)
				{
					unk_0xA7FED408D802E61F();
				}
				return;
			}
			iVar3 = unk_0xB872CF0BC8201FAA(iVar2, "optbs");
			if (unk_0x94E72F17611BCD3C(iVar3, 4) || unk_0x94E72F17611BCD3C(iVar3, 12))
			{
				if (unk_0xD93D1BEC8A98F771() != 0)
				{
					unk_0xA7FED408D802E61F();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		Global_794538.f_2 = 0;
		Global_794538.f_109611 = 0;
		func_50();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794538.f_109626[iVar4] = 0;
			Global_794538.f_109612[iVar4] = 0;
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
	Global_794538.f_4[bParam0->f_9 /*86*/] = { Var5 };
	if (!func_64())
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_4 = unk_0x8EADF823BD986838(bParam0->f_7, 0);
		Global_794538.f_4[bParam0->f_9 /*86*/].f_67 = func_43(bParam0->f_7);
		Global_794538.f_4[bParam0->f_9 /*86*/].f_66 = unk_0x8EADF823BD986838(bParam0->f_7, Global_794538.f_4[bParam0->f_9 /*86*/].f_67);
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_5 = unk_0xBDD953F885CA8BD4(bParam0->f_7);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { func_42(iVar2, "start") };
	if (unk_0x6983B0253A3F4D2A(iVar2, "optbs") == 2)
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_76 = unk_0xB872CF0BC8201FAA(iVar2, "optbs");
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 15);
	unk_0xF76EE56D3E7DAF1B(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 18);
	unk_0xF76EE56D3E7DAF1B(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 19);
	Global_794538.f_4[bParam0->f_9 /*86*/].f_59 = { func_42(iVar2, "cam") };
	Global_794538.f_4[bParam0->f_9 /*86*/].f_62 = { func_41(iVar2) };
	if (!func_64())
	{
		if (unk_0xA0752C5792647C73(unk_0xBDD953F885CA8BD4(bParam0->f_7)))
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_54 = unk_0xF2591639496DCEC9(bParam0->f_7);
		}
		else
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_54 = -1;
		}
	}
	if (unk_0x6983B0253A3F4D2A(iVar2, "mgrk") == 2)
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_7 = unk_0xB872CF0BC8201FAA(iVar2, "mgrk");
	}
	if (unk_0x6983B0253A3F4D2A(iVar2, "mght") == 2)
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_8 = unk_0xB872CF0BC8201FAA(iVar2, "mght");
	}
	Global_794538.f_96153[bParam0->f_9 /*12*/].f_10 = unk_0xB872CF0BC8201FAA(iVar2, "cncmbs");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_69 = unk_0xB872CF0BC8201FAA(iVar2, "min");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_71 = unk_0xB872CF0BC8201FAA(iVar2, "num");
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_71 == -1)
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_71 = 30;
	}
	StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_22), unk_0xA0E603EFBD949373(bParam0->f_7), 64);
	Global_794538.f_4[bParam0->f_9 /*86*/].f_65 = unk_0xB872CF0BC8201FAA(iVar2, "type");
	if (func_64())
	{
		StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_6), func_40(), 64);
	}
	else
	{
		StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_6), unk_0x538ADE1BF648C7C2(bParam0->f_7), 64);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_70 = unk_0xB872CF0BC8201FAA(iVar2, "rank");
	Global_794538.f_96153[bParam0->f_9 /*12*/] = unk_0xB872CF0BC8201FAA(iVar2, "tnum");
	if (!func_64())
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_73 = func_39(unk_0x792541A8C9B4FBC1(bParam0->f_7, 0), unk_0x9B5410E5BD44913D(bParam0->f_7, 0));
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_3 = unk_0x9B5410E5BD44913D(bParam0->f_7, 0);
	}
	Global_794538.f_4[bParam0->f_9 /*86*/].f_75 = unk_0xB872CF0BC8201FAA(iVar2, "charcon");
	Global_794538.f_4[bParam0->f_9 /*86*/].f_77 = unk_0xB872CF0BC8201FAA(iVar2, "ltm");
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 6 && !bParam1)
	{
		if (Global_965147.f_598 < 85)
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_68 = Global_965147.f_598;
			Global_965147[Global_794538.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { func_42(iVar2, "area") };
			if (unk_0x6983B0253A3F4D2A(iVar2, "rad") == 2)
			{
				Global_965147.f_512[Global_794538.f_4[bParam0->f_9 /*86*/].f_68] = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar2, "rad"));
			}
			else
			{
				Global_965147.f_512[Global_794538.f_4[bParam0->f_9 /*86*/].f_68] = unk_0xC8D2B5D05633FD27(iVar2, "rad");
			}
			Global_965147.f_256[Global_794538.f_4[bParam0->f_9 /*86*/].f_68 /*3*/] = { Global_794538.f_4[bParam0->f_9 /*86*/].f_56 };
			Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { Global_794538.f_4[bParam0->f_9 /*86*/].f_59 };
			Global_965147.f_598++;
		}
	}
	else
	{
		Global_794538.f_4[bParam0->f_9 /*86*/].f_68 = unk_0xB872CF0BC8201FAA(iVar2, "subtype");
	}
	StringCopy(&(Global_794538.f_4[bParam0->f_9 /*86*/]), unk_0x6D5BF0920825A991(bParam0->f_7), 24);
	iVar91 = unk_0x398F092142D37E17(&(Global_794538.f_4[bParam0->f_9 /*86*/]));
	Global_794538.f_96153[bParam0->f_9 /*12*/].f_2 = iVar91;
	func_38(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, &(Global_794538.f_4[bParam0->f_9 /*86*/].f_71), &(Global_794538.f_4[bParam0->f_9 /*86*/].f_69));
	if (func_64())
	{
		if (unk_0x6B08EC9A88700FBB(unk_0x6D5BF0920825A991(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794538.f_4[bParam0->f_9 /*86*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xEDB9A377CD8B7F03(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 13);
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 < 13 && !bParam1)
	{
		if (Global_794538.f_4[bParam0->f_9 /*86*/].f_70 <= 1000)
		{
			Global_794538.f_109612[Global_794538.f_4[bParam0->f_9 /*86*/].f_65]++;
			if (func_37(bParam0->f_9))
			{
				Global_794538.f_109612[7]++;
			}
			else if (func_36(bParam0->f_9))
			{
				Global_794538.f_109612[4]++;
			}
			else if (func_35(bParam0->f_9))
			{
				Global_794538.f_109612[10]++;
			}
		}
	}
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
	}
	if (!func_64())
	{
		Global_794538.f_96153[bParam0->f_9 /*12*/].f_1 = unk_0x398F092142D37E17(unk_0x4CF21D427313139B(bParam0->f_7));
		if ((Global_794538.f_109611 < 5 && Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 0) && Global_794538.f_4[bParam0->f_9 /*86*/].f_68 == 1)
		{
			Global_794538.f_96153[bParam0->f_9 /*12*/].f_9 = Global_794538.f_109611;
			StringCopy(&(Global_794538.f_109580[Global_794538.f_109611 /*6*/]), unk_0x4CF21D427313139B(bParam0->f_7), 24);
			Global_794538.f_109611++;
		}
		func_31(Global_794538.f_96153[bParam0->f_9 /*12*/].f_1, &(Global_794538.f_4[bParam0->f_9 /*86*/].f_76));
		if (bParam1)
		{
			if (unk_0xBA6069EE2DBAD7EE(bParam0->f_7))
			{
				unk_0xEDB9A377CD8B7F03(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 14);
			}
		}
		else
		{
			if ((unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 15) || unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 18)) || unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 19))
			{
				Global_794538.f_109612[11]++;
			}
			if (unk_0xBA6069EE2DBAD7EE(bParam0->f_7))
			{
				unk_0xEDB9A377CD8B7F03(&(Global_794538.f_4[bParam0->f_9 /*86*/].f_76), 14);
				if (unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 1) || Global_794538.f_4[bParam0->f_9 /*86*/].f_68 == 2)
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
				Global_794538.f_96153[bParam0->f_9 /*12*/].f_6 = unk_0x1600081482F3715F(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		if (func_47())
		{
			func_29(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 14), Global_794538.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_27(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_70, 0);
			func_25(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_75, Global_794538.f_4[bParam0->f_9 /*86*/].f_70, unk_0x94E72F17611BCD3C(Global_794538.f_4[bParam0->f_9 /*86*/].f_76, 14));
			func_6(Global_794538.f_4[bParam0->f_9 /*86*/].f_65, Global_794538.f_4[bParam0->f_9 /*86*/].f_68, Global_794538.f_4[bParam0->f_9 /*86*/].f_75, Global_794538.f_4[bParam0->f_9 /*86*/].f_70);
		}
	}
	if (Global_794538.f_4[bParam0->f_9 /*86*/].f_65 == 6)
	{
		Global_965746[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794538.f_2++;
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
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
		unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1335485 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1335487 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1335488 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1335489 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1335490 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1335491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1335492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1335493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1335494 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1335495 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1335496 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1335497 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1335498 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1335499 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1335500 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1335501 = iParam1;
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
		unk_0xC46BDC34976E9532(iVar0, iParam1, 1);
	}
}

int func_10(int iParam0)
{
	if (Global_1335484)
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
	if (unk_0x39496A55977AA312(uVar0, &uVar1, -1))
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
	if (func_19(unk_0xCFC72E446B0B3AD7()) < iParam4)
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
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
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
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xCFC72E446B0B3AD7())
			{
				return Global_1335605[func_23(-1)];
			}
			else if (func_22(iParam0))
			{
				return Global_1582869[iParam0 /*332*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_23(-1)];
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
		return unk_0x94E72F17611BCD3C(Global_2422166.f_1, iParam0);
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
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_24()
{
	return Global_1312737;
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
				if (func_19(unk_0xCFC72E446B0B3AD7()) < iParam2)
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
			if (func_19(unk_0xCFC72E446B0B3AD7()) < iParam3)
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
	if (func_34(iParam0))
	{
		unk_0xEDB9A377CD8B7F03(uParam1, 15);
	}
	else if (func_33(iParam0))
	{
		unk_0xEDB9A377CD8B7F03(uParam1, 18);
	}
	else if (func_32(iParam0))
	{
		unk_0xEDB9A377CD8B7F03(uParam1, 19);
	}
}

int func_32(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7252 || iParam0 == Global_262145.f_7253) || iParam0 == Global_262145.f_7254) || iParam0 == Global_262145.f_7255) || iParam0 == Global_262145.f_7256)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7247 || iParam0 == Global_262145.f_7248) || iParam0 == Global_262145.f_7249) || iParam0 == Global_262145.f_7250) || iParam0 == Global_262145.f_7251)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7240 || iParam0 == Global_262145.f_7241) || iParam0 == Global_262145.f_7242) || iParam0 == Global_262145.f_7243) || iParam0 == Global_262145.f_7244) || iParam0 == Global_262145.f_7245) || iParam0 == Global_262145.f_7246)
	{
		return 1;
	}
	return 0;
}

bool func_35(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_794538.f_4[iParam0 /*86*/].f_76, 3);
}

bool func_36(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_794538.f_4[iParam0 /*86*/].f_76, 10);
}

bool func_37(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_794538.f_4[iParam0 /*86*/].f_76, 7);
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

var func_40()
{
	return unk_0x398E4CFB573BEBB7("CREATOR_RSC");
}

Vector3 func_41(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x6983B0253A3F4D2A(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0xC8D2B5D05633FD27(iParam0, "camp");
	}
	else if (unk_0x6983B0253A3F4D2A(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iParam0, "camp"));
	}
	if (unk_0x6983B0253A3F4D2A(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0xC8D2B5D05633FD27(iParam0, "camh");
	}
	else if (unk_0x6983B0253A3F4D2A(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_42(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x6983B0253A3F4D2A(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0xC6C61B31E770F147(iParam0, sParam1) };
	}
	else if (unk_0x6983B0253A3F4D2A(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x5265B2D07FA93601(iParam0, sParam1);
		if (unk_0x6983B0253A3F4D2A(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0xC8D2B5D05633FD27(iVar3, "x");
		}
		if (unk_0x6983B0253A3F4D2A(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0xC8D2B5D05633FD27(iVar3, "y");
		}
		if (unk_0x6983B0253A3F4D2A(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0xC8D2B5D05633FD27(iVar3, "z");
		}
	}
	return Var0;
}

int func_43(int iParam0)
{
	if (unk_0x4034F113CACF1295(iParam0))
	{
		return 2;
	}
	else if (unk_0xFAD54973E02DD126(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_44(int iParam0)
{
	func_45(joaat("mpply_big_feed_init"), iParam0);
}

void func_45(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xC715C0FD7A589EA7(iVar0, uParam1, 1);
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

int func_51(char* sParam0)
{
	if ((((((((((((((((unk_0x6B08EC9A88700FBB(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x6B08EC9A88700FBB(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x6B08EC9A88700FBB(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x6B08EC9A88700FBB(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x6B08EC9A88700FBB(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x6B08EC9A88700FBB(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x6B08EC9A88700FBB(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x6B08EC9A88700FBB(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x6B08EC9A88700FBB(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x6B08EC9A88700FBB(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x6B08EC9A88700FBB(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x6B08EC9A88700FBB(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x6B08EC9A88700FBB(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x6B08EC9A88700FBB(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x6B08EC9A88700FBB(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x6B08EC9A88700FBB(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x6B08EC9A88700FBB(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
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
	
	if (Global_262145.f_3745 == 1)
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
				if (Global_786484.f_3012[iVar1 /*12*/].f_1 == unk_0x398F092142D37E17(&(Global_2394696[iVar0 /*6*/])))
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
			Global_1685703.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3433[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_54(1);
	return 1;
}

void func_54(int iParam0)
{
	Global_1685703.f_1784 = iParam0;
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
		Global_794538.f_4[iVar86 /*86*/] = { Var0 };
		iVar86++;
	}
}

void func_57()
{
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
	}
}

void func_58()
{
	if (func_64())
	{
		unk_0xF57C0C38E5FE77A2();
	}
	else
	{
		unk_0xA362338D527C15BB();
	}
}

bool func_59()
{
	return Global_2434606.f_4;
}

int func_60()
{
	if (unk_0xD3F8C362BA358936())
	{
		return 1;
	}
	else if (unk_0xD28CAA3AC403852A())
	{
		return 1;
	}
	else if (unk_0xE11D6528F1916C20())
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
	if (unk_0x7F7C75BD0BC3CD70() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_63()
{
	return Global_2435198;
}

bool func_64()
{
	return Global_1572867.f_4;
}

bool func_65()
{
	return Global_2394634.f_2;
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
				unk_0x4E4095F9046A8433(0);
			}
			func_55(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x25CA05F1B8906F67(sParam1, func_52(0)))
			{
				func_55(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x3A2E61F1EDABC8B0())
			{
				bParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
				if (unk_0x77B9F3F94D8CF7BC())
				{
				}
				else
				{
					func_178(bParam0, 1, 1);
					bParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x07AB9F01DD6212B4() > 0)
				{
					if (unk_0x58715EAFD552E800(0))
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(iVar0, "mission");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "gen");
	StringCopy(sParam0, unk_0x6D5BF0920825A991(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x538ADE1BF648C7C2(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0xA0E603EFBD949373(iParam1), 64);
	sParam0->f_56 = { func_42(iVar2, "start") };
	sParam0->f_59 = { func_42(iVar2, "cam") };
	sParam0->f_62 = { func_41(iVar2) };
	sParam0->f_65 = unk_0xB872CF0BC8201FAA(iVar2, "type");
	sParam0->f_68 = unk_0xB872CF0BC8201FAA(iVar2, "subtype");
	sParam0->f_78 = unk_0xB872CF0BC8201FAA(iVar2, "testcomplete");
	sParam0->f_69 = unk_0xB872CF0BC8201FAA(iVar2, "min");
	sParam0->f_70 = unk_0xB872CF0BC8201FAA(iVar2, "rank");
	sParam0->f_71 = unk_0xB872CF0BC8201FAA(iVar2, "num");
	sParam0->f_73 = func_39(unk_0x792541A8C9B4FBC1(iParam1, 0), unk_0x9B5410E5BD44913D(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0xB872CF0BC8201FAA(iVar2, "charcon");
	if (func_68() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4716)
		{
			sParam0->f_71 = Global_262145.f_4716;
		}
		if (sParam0->f_69 > Global_262145.f_4716)
		{
			sParam0->f_69 = Global_262145.f_4716;
		}
	}
	if (!func_64())
	{
		iVar3 = unk_0xBDD953F885CA8BD4(iParam1);
		if (unk_0xA0752C5792647C73(iVar3))
		{
			sParam0->f_54 = unk_0xF2591639496DCEC9(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x6983B0253A3F4D2A(iVar2, "ltm") == 2)
	{
		sParam0->f_77 = unk_0xB872CF0BC8201FAA(iVar2, "ltm");
	}
	unk_0xEDB9A377CD8B7F03(&(sParam0->f_76), 13);
	func_57();
}

int func_68()
{
	return Global_24444;
}

bool func_69()
{
	return Global_2394634.f_1;
}

void func_70()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394634 = { Var0 };
	StringCopy(&(Global_2394634.f_30), "", 64);
	StringCopy(&(Global_2394634.f_46), "", 64);
	StringCopy(&(Global_2394634.f_15), "", 32);
}

void func_71()
{
	Global_2434606.f_8 = 0;
	Global_2434606.f_7 = 0;
}

int func_72(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xEDB9A377CD8B7F03(uParam2, 3);
		if (!unk_0x94E72F17611BCD3C(*uParam2, 2))
		{
		}
		unk_0xEDB9A377CD8B7F03(uParam2, 2);
		return 1;
	}
	if ((func_175() && func_174()) || func_173())
	{
		if (!unk_0x94E72F17611BCD3C(*uParam2, 2))
		{
		}
		unk_0xEDB9A377CD8B7F03(uParam2, 2);
		unk_0xEDB9A377CD8B7F03(uParam2, 1);
		unk_0xEDB9A377CD8B7F03(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0x94E72F17611BCD3C(*uParam2, 3))
		{
			unk_0xEDB9A377CD8B7F03(uParam2, 3);
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
			if (unk_0x94E72F17611BCD3C(*uParam2, 2))
			{
				unk_0xEDB9A377CD8B7F03(uParam2, 3);
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
	if (!unk_0x94E72F17611BCD3C(*uParam2, 2))
	{
		if (!unk_0x94E72F17611BCD3C(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_163(1, 1, bParam11);
			}
			unk_0xEDB9A377CD8B7F03(uParam2, 1);
			func_178(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_84(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_83() || Global_1603097 == 31) || Global_1603097 == 6) || Global_1603097 == 4)
			{
				if (Global_1603097.f_19 < 1)
				{
					Global_1603097.f_19 = 1;
				}
				if (Global_1603097.f_18 < 1)
				{
					Global_1603097.f_18 = 1;
				}
			}
			else if (Global_1603097 == 1)
			{
				Global_1335674.f_4 = 99;
				Global_1335674.f_6 = Global_1603097.f_40;
				Global_1335674.f_7 = Global_1603097.f_32427;
				Global_1335674.f_9 = Global_1603097.f_26521;
				Global_1335674.f_11 = Global_1603097.f_41;
				Global_1335674.f_12 = Global_1603097.f_43;
				Global_1335674.f_13 = Global_1603097.f_45;
				Global_1335674.f_14 = Global_1603097.f_44;
				Global_1335674.f_16 = Global_1603097.f_16;
				Global_1335674.f_5 = Global_1603097.f_38;
				Global_1335674.f_10 = Global_1603097.f_51;
			}
			else if (func_82())
			{
				Global_2477257.f_7 = 9901;
				Global_2477257.f_8 = Global_1603097.f_26136 + 1;
				if (func_81(Global_1603097.f_22719))
				{
					Global_1603097.f_22719 = { Global_1603097.f_55 };
				}
			}
			unk_0xEDB9A377CD8B7F03(uParam2, 2);
			unk_0xF76EE56D3E7DAF1B(uParam2, 1);
			unk_0xEDB9A377CD8B7F03(uParam2, 3);
			if (*uParam0)
			{
				func_80();
				func_79();
				if (func_78())
				{
					func_75(Global_1603097.f_14);
				}
				Global_1603097.f_57804 = 1;
			}
			else
			{
				func_176();
			}
			if (!func_74())
			{
				func_73();
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
		unk_0xEDB9A377CD8B7F03(uParam2, 3);
		if (Global_1603097.f_57804)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_73()
{
	Global_2428162.f_26.f_49 = 1;
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x9E9AFDBF482248F6(&(Global_1603097.f_57454[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_75(int iParam0)
{
	if (!func_77())
	{
		unk_0x03BF597B74B2EDEC(2);
		unk_0xF4A67071ACF977EC(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x784CD2A1E2BF43E1((iParam0 / 2));
		func_76();
	}
}

void func_76()
{
	unk_0xEDB9A377CD8B7F03(&(Global_2428162.f_2), 3);
}

bool func_77()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_2, 3);
}

bool func_78()
{
	return unk_0x94E72F17611BCD3C(Global_2428922.f_1.f_2807, 8);
}

void func_79()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 4);
}

void func_80()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 28);
}

int func_81(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_82()
{
	if (Global_1603097 == 2 || Global_1603097 == 8)
	{
		return 1;
	}
	return 0;
}

int func_83()
{
	if ((((((Global_1603097 == 0 || Global_1603097 == 4) || Global_1603097 == 6) || Global_1603097 == 3) || Global_1603097 == 31) || Global_1603097.f_2 == 6) || Global_1603097.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_84(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)
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
				unk_0x4E4095F9046A8433(1);
			}
			else
			{
				unk_0x4E4095F9046A8433(0);
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
				if (unk_0x1DF9BB0D553B768F(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1603097.f_57807 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1603097.f_57448), sParam1, 24);
						}
						func_120(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_55(uParam0, 9);
						*uParam0 = 1;
						func_71();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_967025.f_42), sParam1, 24);
							Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_967025.f_12 };
							func_119(&iVar1, &uVar0, &Global_967025);
							if (Global_967025.f_65 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_71();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_965784.f_42), sParam1, 24);
							Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_965784.f_12 };
							func_119(&iVar1, &uVar0, &Global_965784);
							uParam0->f_8 = 0;
							if (Global_965784.f_65 == 0)
							{
								func_178(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_57();
								func_71();
								return 1;
							}
						}
						func_57();
						unk_0xF57C0C38E5FE77A2();
						unk_0x4E4095F9046A8433(1);
						func_118(uParam0);
						func_55(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_71();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_71();
					func_57();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_52(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x947352AC36F456BA(uParam0->f_5);
				func_55(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0xB0F4C5E6297FF7FF(sParam1, 1, func_52(iParam2)))
				{
					func_55(uParam0, 3);
				}
			}
			else if (unk_0x25CA05F1B8906F67(sParam1, func_52(iParam2)))
			{
				func_55(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x3A2E61F1EDABC8B0())
			{
				uParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
				if (unk_0x77B9F3F94D8CF7BC())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (unk_0x07AB9F01DD6212B4() > 0)
				{
					if (!bParam12 && !func_116(uParam0->f_24, uParam0->f_25, unk_0x538ADE1BF648C7C2(0), unk_0xF71661D33D574CBA(0)))
					{
						func_178(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_71();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0x947352AC36F456BA(uParam0->f_5);
						func_55(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x58715EAFD552E800(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_967025.f_12), unk_0xA0E603EFBD949373(0), 64);
								StringCopy(&(Global_967025.f_36), unk_0x6D5BF0920825A991(0), 24);
								StringCopy(&(Global_967025.f_42), sParam1, 24);
								Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_967025.f_12 };
								func_119(&iVar1, &uVar0, &Global_967025);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_965784.f_12), unk_0xA0E603EFBD949373(0), 64);
								StringCopy(&(Global_965784.f_36), unk_0x6D5BF0920825A991(0), 24);
								StringCopy(&(Global_965784.f_42), sParam1, 24);
								Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_965784.f_12 };
								func_119(&iVar1, &uVar0, &Global_965784);
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_71();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x58715EAFD552E800(0))
						{
							if (uParam0->f_16)
							{
								func_114(&iVar1, &uVar0, &Global_967025, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_71();
									return 1;
								}
								StringCopy(&(Global_967025.f_12), unk_0xA0E603EFBD949373(0), 64);
								StringCopy(&(Global_967025.f_36), unk_0x6D5BF0920825A991(0), 24);
								StringCopy(&(Global_967025.f_42), sParam1, 24);
								Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_967025.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_114(&iVar1, &uVar0, &Global_965784, iParam6);
								if (iParam6 == 1)
								{
									func_178(uParam0, 1, 1);
									*uParam0 = 1;
									func_71();
									return 1;
								}
								StringCopy(&(Global_965784.f_12), unk_0xA0E603EFBD949373(0), 64);
								StringCopy(&(Global_965784.f_36), unk_0x6D5BF0920825A991(0), 24);
								StringCopy(&(Global_965784.f_42), sParam1, 24);
								Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_19 = { Global_965784.f_12 };
								uParam0->f_8 = 0;
							}
							func_57();
							func_55(uParam0, 10);
						}
						else
						{
							func_178(uParam0, 1, 1);
							*uParam0 = 0;
							func_71();
							return 1;
						}
					}
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x2815286C481072F6(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xBFB1954F04B5BAEA();
				}
				if (unk_0x194EA93C6F76DFC2(uParam0->f_5))
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
					func_71();
					return 1;
				}
			}
			else if (func_113() || func_112() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xD2527DA9A2BC60B0("FMMC_DOWNLOAD");
					unk_0x9D67E5549B880DF9(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_111())
			{
				return 0;
			}
			if (unk_0xACC0600E706719D8(uParam0->f_5))
			{
				if (unk_0xDC4DDB20B7EA0007(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_163(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1603097.f_57807 = 1;
							Global_1603097.f_57800 = 1;
							StringCopy(&(Global_1603097.f_57137), "", 64);
							StringCopy(&(Global_1603097.f_57184), "", 24);
							StringCopy(&(Global_1603097.f_57162), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1603097.f_57448), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1603097.f_57161 = unk_0x398F092142D37E17(unk_0x4CF21D427313139B(0));
							if (Global_1603097.f_57807 == 1 || Global_1603097.f_57807 == 2)
							{
								StringCopy(&(Global_1603097.f_57162), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1603097.f_57162), unk_0x538ADE1BF648C7C2(0), 24);
							}
							StringCopy(&(Global_1603097.f_57184), unk_0x538ADE1BF648C7C2(0), 24);
							Global_1603097.f_57807 = unk_0xF71661D33D574CBA(0);
							if ((Global_1603097.f_57807 == 0 || Global_1603097.f_57807 == 3) && unk_0x2427C36489631BE4(0))
							{
								StringCopy(&(Global_1603097.f_57137), unk_0x6866FFA103E7C994(unk_0xCFC72E446B0B3AD7()), 64);
							}
							else if ((unk_0x035E2C7B598704F7() && (Global_1603097.f_57807 == 0 || Global_1603097.f_57807 == 3)) && func_110(&iVar33, &(Global_1603097.f_57184)))
							{
								StringCopy(&(Global_1603097.f_57137), unk_0x6866FFA103E7C994(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1603097.f_57137), unk_0xDF6DD2176B8FDC4C(0), 64);
							}
							Global_1603097.f_57468 = unk_0x9B5410E5BD44913D(0, 0);
							Global_1603097.f_57802 = unk_0xF3F9298CD777A4DF(0);
							uParam0->f_23 = func_43(0);
							Global_1603097.f_70825 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1603097.f_57448), unk_0x6D5BF0920825A991(0), 24);
							}
							if (Global_1603097.f_57807 == 0 || Global_1603097.f_57807 == 3)
							{
								if ((unk_0x596968609A69BC47(0, &uVar4) && unk_0x6E4DB7298A183787(&uVar4, 13)) && unk_0x9E1C8024B80AA59C(&uVar4))
								{
									Var17 = { Global_1603097.f_57137 };
									func_109(1, Var17);
								}
								else
								{
									func_109(0, Var17);
								}
							}
							else
							{
								func_109(0, Var17);
							}
							Global_1603097.f_7 = func_39(unk_0x792541A8C9B4FBC1(0, 0), unk_0x9B5410E5BD44913D(0, 0));
							if (unk_0xBA6069EE2DBAD7EE(uParam0->f_7))
							{
								Global_1603097.f_57801 = unk_0x1600081482F3715F(0);
								Global_1603097.f_57803 = 1;
							}
							else
							{
								Global_1603097.f_57801 = 0;
								Global_1603097.f_57803 = 0;
							}
							Global_1603097.f_57800 = unk_0x4BD8DBD18C387A52(0);
							uParam0->f_34 = unk_0xBDD953F885CA8BD4(0);
							if (!func_64())
							{
								if (unk_0xA0752C5792647C73(uParam0->f_34))
								{
									uParam0->f_30 = unk_0xF2591639496DCEC9(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1603097.f_57467 = uParam0->f_30;
							Global_2428922.f_3957.f_3 = unk_0x92FA298D13316A21(0, 0);
							Global_2428922.f_3957.f_2 = unk_0xA6CDF3E1839D8D1F(0, 0);
							if (Global_1603097.f_57807 == 1 || Global_1603097.f_57807 == 2)
							{
								StringCopy(&(Global_1603097.f_57137), func_40(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1603097.f_57448), sParam1, 24);
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
						if (func_106(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xD93D1BEC8A98F771();
						iVar2 = unk_0x5265B2D07FA93601(iVar1, "mission");
						iVar3 = unk_0x5265B2D07FA93601(iVar2, "gen");
						StringCopy(&(Global_2422166.f_3046), unk_0xA0E603EFBD949373(0), 32);
						Global_2422166.f_3046.f_8 = unk_0xB872CF0BC8201FAA(iVar3, "type");
						uParam0->f_17 = unk_0xBA6069EE2DBAD7EE(0);
						*uParam0 = 1;
						func_71();
						unk_0x60B5E3088BC9E3FB(uParam0->f_5);
						func_57();
						return 1;
					}
					unk_0x60B5E3088BC9E3FB(uParam0->f_5);
					func_57();
				}
				else if (iParam2 == 0)
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_71();
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
						func_71();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_120(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_106(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_104(uParam0, 0, bParam3, 0))
			{
				func_55(uParam0, 0);
				func_57();
				if ((((func_98(Global_1603097.f_57161) && func_83()) && !bParam9) && !unk_0x9E9AFDBF482248F6(&(Global_1603097.f_57454[0 /*6*/]))) && (func_113() || (func_93() && !func_92())))
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
						uParam0->f_21 = unk_0x8EADF823BD986838(0, uParam0->f_23);
					}
					func_91(&(uParam0->f_41), 0);
					func_55(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_71();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0xB0F4C5E6297FF7FF(&(Global_1603097.f_57454[0 /*6*/]), 1, func_52(iParam2)))
			{
				func_55(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x3A2E61F1EDABC8B0())
			{
				uParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
				if (unk_0x77B9F3F94D8CF7BC())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (unk_0x07AB9F01DD6212B4() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0x947352AC36F456BA(uParam0->f_5);
					func_55(uParam0, 22);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0x2815286C481072F6(uParam0->f_5))
			{
				if (unk_0x194EA93C6F76DFC2(uParam0->f_5))
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
					func_71();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xACC0600E706719D8(uParam0->f_5))
			{
				if (unk_0xDC4DDB20B7EA0007(uParam0->f_5))
				{
					func_88();
					func_178(uParam0, 1, 0);
					Global_1601852 = 1;
					func_71();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_71();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0x94E72F17611BCD3C(Global_1603097.f_6, 0))
			{
				if (bParam7)
				{
					if (func_87(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_178(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_71();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_178(uParam0, 1, 0);
					func_71();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_178(uParam0, 1, 1);
				func_71();
				return 1;
			}
			break;
		
		case 10:
			if (func_104(uParam0, 0, bParam3, iParam2))
			{
				func_57();
				func_55(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x7BFBC814E99C504C(&(Global_967025.f_1144), Global_967025.f_65, func_52(0)))
				{
					func_55(uParam0, 12);
				}
			}
			else if (unk_0x7BFBC814E99C504C(&(Global_965784.f_1144), Global_965784.f_65, func_52(0)))
			{
				func_55(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x3A2E61F1EDABC8B0())
			{
				if (unk_0x77B9F3F94D8CF7BC())
				{
				}
				else
				{
					func_178(uParam0, 1, 1);
					uParam0->f_40 = unk_0x2C97D7BBBBC0DC01();
					*uParam0 = 0;
					func_71();
					return 1;
				}
				if (unk_0x07AB9F01DD6212B4() > 0)
				{
					if (uParam0->f_16)
					{
						Global_967025.f_65 = unk_0x07AB9F01DD6212B4();
					}
					else
					{
						Global_965784.f_65 = unk_0x07AB9F01DD6212B4();
					}
					uParam0->f_8 = 0;
					func_178(uParam0, 0, bParam8);
					func_118(uParam0);
					func_55(uParam0, 13);
				}
				else
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					func_71();
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
					while (uParam0->f_9 <= (Global_967025.f_65 - 1))
					{
						if (unk_0x1DF9BB0D553B768F(&(Global_967025.f_1144[uParam0->f_9 /*6*/])))
						{
							func_86(uParam0, &Global_967025);
							unk_0xF57C0C38E5FE77A2();
						}
						uParam0->f_9++;
					}
					func_71();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_965784.f_65 - 1))
					{
						if (unk_0x1DF9BB0D553B768F(&(Global_965784.f_1144[uParam0->f_9 /*6*/])))
						{
							func_86(uParam0, &Global_965784);
							unk_0xF57C0C38E5FE77A2();
						}
						uParam0->f_9++;
					}
					func_71();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_85(uParam0, &Global_967025))
				{
					if (uParam0->f_27)
					{
						func_178(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_71();
						return 1;
					}
					else
					{
						func_55(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_85(uParam0, &Global_965784))
			{
				if (uParam0->f_27)
				{
					func_178(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_71();
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
			func_71();
			return 1;
			break;
	}
	return 0;
}

int func_85(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x58715EAFD552E800(uParam0->f_7))
		{
			if (!func_116(uParam0->f_24, uParam0->f_25, unk_0x538ADE1BF648C7C2(0), unk_0xF71661D33D574CBA(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_86(uParam0, uParam1);
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
		if (uParam0->f_7 >= uParam1->f_65)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_86(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(iVar0, "mission");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "gen");
	uParam1->f_71[uParam0->f_9 /*67*/].f_45 = { func_42(iVar2, "start") };
	if (func_64())
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_12), unk_0x47B973AC6EAA5B6C(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_12), unk_0xA0E603EFBD949373(uParam0->f_7), 64);
	}
	if (!func_64())
	{
		uParam1->f_71[uParam0->f_9 /*67*/].f_44 = unk_0xF2591639496DCEC9(uParam0->f_7);
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_66 = unk_0xF71661D33D574CBA(uParam0->f_7);
	uParam1->f_71[uParam0->f_9 /*67*/].f_56 = unk_0xB872CF0BC8201FAA(iVar2, "min");
	uParam1->f_71[uParam0->f_9 /*67*/].f_59 = unk_0xB872CF0BC8201FAA(iVar2, "tnum");
	uParam1->f_71[uParam0->f_9 /*67*/].f_60 = unk_0xB872CF0BC8201FAA(iVar2, "num");
	uParam1->f_71[uParam0->f_9 /*67*/].f_54 = unk_0xB872CF0BC8201FAA(iVar2, "type");
	uParam1->f_71[uParam0->f_9 /*67*/].f_55 = unk_0xB872CF0BC8201FAA(iVar2, "subtype");
	uParam1->f_71[uParam0->f_9 /*67*/].f_48 = { func_42(iVar2, "cam") };
	uParam1->f_71[uParam0->f_9 /*67*/].f_51 = { func_41(iVar2) };
	uParam1->f_71[uParam0->f_9 /*67*/].f_57 = func_43(uParam0->f_7);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/].f_6), unk_0xDF6DD2176B8FDC4C(uParam0->f_7), 24);
	if (!func_64())
	{
		uParam1->f_71[uParam0->f_9 /*67*/].f_61 = func_39(unk_0x792541A8C9B4FBC1(uParam0->f_7, 0), unk_0x9B5410E5BD44913D(uParam0->f_7, 0));
	}
	if (func_68() != 2)
	{
		if (uParam1->f_71[uParam0->f_9 /*67*/].f_60 > Global_262145.f_4716)
		{
			uParam1->f_71[uParam0->f_9 /*67*/].f_60 = Global_262145.f_4716;
		}
		if (uParam1->f_71[uParam0->f_9 /*67*/].f_56 > Global_262145.f_4716)
		{
			uParam1->f_71[uParam0->f_9 /*67*/].f_56 = Global_262145.f_4716;
		}
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_58 = unk_0xB872CF0BC8201FAA(iVar2, "rank");
	func_38(uParam1->f_71[uParam0->f_9 /*67*/].f_54, &(uParam1->f_71[uParam0->f_9 /*67*/].f_60), &(uParam1->f_71[uParam0->f_9 /*67*/].f_56));
	if (uParam1->f_6 < uParam1->f_71[uParam0->f_9 /*67*/].f_56)
	{
		uParam1->f_6 = uParam1->f_71[uParam0->f_9 /*67*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_71[uParam0->f_9 /*67*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_71[uParam0->f_9 /*67*/].f_60;
	}
	uParam1->f_71[uParam0->f_9 /*67*/].f_65 = 1;
	unk_0xEDB9A377CD8B7F03(&(uParam1->f_71[uParam0->f_9 /*67*/].f_64), 13);
	StringCopy(&(uParam1->f_71[uParam0->f_9 /*67*/]), unk_0x6D5BF0920825A991(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
	}
	if (!func_64())
	{
		StringCopy(&(uParam1->f_1144[uParam0->f_9 /*6*/]), unk_0x6D5BF0920825A991(uParam0->f_9), 24);
		if (unk_0xBA6069EE2DBAD7EE(uParam0->f_9))
		{
			unk_0xEDB9A377CD8B7F03(&(uParam1->f_71[uParam0->f_9 /*67*/].f_64), 14);
			if (unk_0xD93D1BEC8A98F771() != 0)
			{
				unk_0xA7FED408D802E61F();
			}
		}
	}
}

int func_87(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x9E08BB781AF45CB4(*uParam0);
			}
			unk_0x87CF375EA922F754();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x2643909DCEDEC7BD(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0x1FE7B510506F7F14(unk_0x0F8640DDD08AF7E3(0, uParam3)))
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
							unk_0x9E08BB781AF45CB4(*uParam0);
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

void func_88()
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
	
	iVar0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(iVar0, "mission");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "endcon");
	iVar3 = unk_0x5265B2D07FA93601(iVar1, "ene");
	iVar4 = unk_0xB872CF0BC8201FAA(iVar3, "no");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar3, "loc");
	iVar6 = unk_0x5265B2D07FA93601(iVar1, "goto");
	iVar7 = unk_0xB872CF0BC8201FAA(iVar6, "no");
	iVar8 = unk_0x5265B2D07FA93601(iVar1, "veh");
	iVar9 = unk_0xB872CF0BC8201FAA(iVar8, "no");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar8, "loc");
	iVar11 = unk_0x5265B2D07FA93601(iVar1, "obj");
	iVar12 = unk_0xB872CF0BC8201FAA(iVar11, "no");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1603097.f_19 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1601852.f_1[iVar14] = unk_0x2E23E36C99C8BEE6(unk_0x1DC15D899E01E6B0(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x1DC15D899E01E6B0(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x1DC15D899E01E6B0(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x1DC15D899E01E6B0(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1601852.f_1[iVar14] - 1))
			{
				Global_1601852.f_6[iVar14 /*18*/][iVar15] = unk_0x2E23E36C99C8BEE6(uVar25[iVar14], iVar15);
				Global_1601852.f_79[iVar14 /*18*/][iVar15] = unk_0x2E23E36C99C8BEE6(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1601852.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xE54D28595F926D0B(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1601852.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1603097.f_19 - 1))
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
		while (iVar14 < Global_1601852.f_1[iVar80])
		{
			if ((!unk_0x94E72F17611BCD3C(Global_1601852.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0x94E72F17611BCD3C(Global_1601852.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x1DC15D899E01E6B0(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x1DC15D899E01E6B0(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x2E23E36C99C8BEE6(uVar60[iVar80], iVar14);
			iVar193 = unk_0x2E23E36C99C8BEE6(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x94E72F17611BCD3C(Global_1601852.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x94E72F17611BCD3C(Global_1601852.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1687636.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x09B0244538FE11FC(iVar10, iVar14) };
					Global_1687636.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1687636.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x1DC15D899E01E6B0(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x1DC15D899E01E6B0(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x2E23E36C99C8BEE6(uVar70[iVar80], iVar14);
			iVar193 = unk_0x2E23E36C99C8BEE6(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x94E72F17611BCD3C(Global_1601852.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x94E72F17611BCD3C(Global_1601852.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1687636.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x09B0244538FE11FC(iVar13, iVar14) };
					Global_1687636.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1687636.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x1DC15D899E01E6B0(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x1DC15D899E01E6B0(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x1DC15D899E01E6B0(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x2E23E36C99C8BEE6(uVar50[iVar80], iVar14);
			iVar15 = unk_0x2E23E36C99C8BEE6(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x94E72F17611BCD3C(Global_1601852.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x94E72F17611BCD3C(Global_1601852.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1687636.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x09B0244538FE11FC(uVar55[iVar80], iVar14) };
					Global_1687636.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1687636.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_89(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x1DC15D899E01E6B0(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x1DC15D899E01E6B0(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x2E23E36C99C8BEE6(uVar40[iVar80], iVar14);
			iVar15 = unk_0x2E23E36C99C8BEE6(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x94E72F17611BCD3C(Global_1601852.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x94E72F17611BCD3C(Global_1601852.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_90(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1687636.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0x09B0244538FE11FC(iVar5, iVar14) };
					Global_1687636.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1687636.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1687636.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1687636.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_89(iVar15, 2) };
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
				if (Global_1687636.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1687636.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1687636.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1687636.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1687636.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xD93D1BEC8A98F771() != 0)
	{
		unk_0xA7FED408D802E61F();
	}
}

Vector3 func_89(int iParam0, int iParam1)
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

int func_90(int iParam0, int iParam1, int iParam2)
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

void func_91(var uParam0, bool bParam1)
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
		unk_0x9E08BB781AF45CB4(*uParam0);
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

bool func_92()
{
	return Global_2428162.f_593;
}

int func_93()
{
	if (((func_97() || func_96()) || func_95()) || func_94())
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 1);
}

bool func_95()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 2);
}

bool func_96()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 20);
}

var func_97()
{
	return Global_2428162.f_572;
}

int func_98(int iParam0)
{
	if ((((func_103(iParam0) || func_102(iParam0)) || func_101(iParam0)) || func_100(iParam0)) || func_99(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_99(int iParam0)
{
	return iParam0 == Global_262145.f_6876;
}

bool func_100(int iParam0)
{
	return iParam0 == Global_262145.f_6870;
}

bool func_101(int iParam0)
{
	return iParam0 == Global_262145.f_6864;
}

bool func_102(int iParam0)
{
	return iParam0 == Global_262145.f_6857;
}

bool func_103(int iParam0)
{
	return iParam0 == Global_262145.f_6852;
}

int func_104(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
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
			func_105();
			Global_1676906.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1676931.f_5 = 0;
				Global_1676931.f_4 = 0;
				Global_1676931.f_1 = 0;
				Global_1676931.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1676931.f_5 = 0;
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
			if (unk_0xCA4871BA00072910(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xD93D1BEC8A98F771();
					Global_1676937 = unk_0xB872CF0BC8201FAA(iVar0, "pt");
					Global_1676937.f_1 = unk_0xB872CF0BC8201FAA(iVar0, "pu");
					Global_1676937.f_2 = unk_0xB872CF0BC8201FAA(iVar0, "ft");
					Global_1676937.f_3 = unk_0xB872CF0BC8201FAA(iVar0, "fu");
					Global_1676937.f_4 = unk_0xB872CF0BC8201FAA(iVar0, "qt");
					Global_1676937.f_5 = unk_0xB872CF0BC8201FAA(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xD93D1BEC8A98F771();
					Global_1676906.f_10 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "dt"));
					Global_1676906.f_11 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "du"));
					Global_1676906.f_9 = (Global_1676906.f_10 / Global_1676906.f_11);
					Global_1676906.f_13 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "pt"));
					Global_1676906.f_14 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "pu"));
					Global_973714 = unk_0xF2DB717A73826179(Global_1676906.f_14);
					Global_1676906.f_12 = (Global_1676906.f_13 / Global_1676906.f_14);
					Global_1676906.f_15 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "qt"));
					Global_1676906.f_17 = unk_0xBBDA792448DB5A89(unk_0xB872CF0BC8201FAA(iVar0, "qu"));
					Global_1676906.f_16 = (Global_1676906.f_15 / Global_1676906.f_17);
				}
				if (unk_0xD93D1BEC8A98F771() != 0)
				{
					unk_0xA7FED408D802E61F();
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
			if (unk_0xBA6069EE2DBAD7EE(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x5F912C7E5569EAA8(iParam1))
					{
						iVar0 = unk_0xD93D1BEC8A98F771();
						if (iParam3 == 0)
						{
							Global_1676906 = unk_0xB872CF0BC8201FAA(iVar0, "quit");
							Global_1676906.f_2 = unk_0xB872CF0BC8201FAA(iVar0, "ply");
							Global_1676906.f_8 = unk_0xB872CF0BC8201FAA(iVar0, "fl");
							if (Global_1676906.f_2 > 0)
							{
								Global_1676906.f_5 = 1;
							}
							unk_0xA7FED408D802E61F();
						}
						else if (iParam3 == 4)
						{
							Global_1676931.f_5 = unk_0xF4028E47F9C1A208(iVar0, "won");
							Global_1676931.f_4 = unk_0xB872CF0BC8201FAA(iVar0, "ply");
							Global_1676931.f_1 = unk_0xB872CF0BC8201FAA(iVar0, "quit");
							Global_1676931.f_2 = unk_0xB872CF0BC8201FAA(iVar0, "fl");
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

void func_105()
{
	Global_1676906 = 0;
	Global_1676906.f_2 = 0;
	Global_1676906.f_8 = 0;
	Global_1676906.f_3 = 0;
	Global_1676906.f_6 = 0;
}

int func_106(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_108() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_64() && iParam1 == 0) && !bParam3)
			{
				if (Global_1603097.f_57807 == 0)
				{
					if (Global_1603097 == 0)
					{
						if (((((Global_1603097.f_2 != 6 && !unk_0x94E72F17611BCD3C(Global_1603097.f_4, 20)) && !unk_0x94E72F17611BCD3C(Global_1603097.f_4, 21)) && !unk_0x94E72F17611BCD3C(Global_1603097.f_4, 22)) && !unk_0x94E72F17611BCD3C(Global_1603097.f_4, 23)) && Global_1603097.f_2 != 5)
						{
							func_178(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_71();
							unk_0x60B5E3088BC9E3FB(uParam0->f_5);
							func_57();
							return 1;
						}
					}
					else if (Global_1603097 != 2 && Global_1603097 != 1)
					{
						func_178(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_71();
						unk_0x60B5E3088BC9E3FB(uParam0->f_5);
						func_57();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1603097 == 0 && Global_1603097.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_64())
		{
			if (!unk_0xA0752C5792647C73(unk_0xBDD953F885CA8BD4(0)))
			{
				Global_1603097.f_57798 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_107();
	}
	func_55(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_107()
{
	unk_0xEDB9A377CD8B7F03(&(Global_2428162.f_26.f_3), 7);
}

bool func_108()
{
	return unk_0x9501317225249120(-1762644250);
}

void func_109(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2437071, "", 64);
	}
	else
	{
		Global_2437071 = { Param1 };
	}
	Global_2437070 = iParam0;
}

int func_110(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x9E9AFDBF482248F6(uParam1))
	{
		return 0;
	}
	unk_0xD3130FACC173C305(uParam1, &uVar0, 13);
	if (unk_0x6E4DB7298A183787(&uVar0, 13) && unk_0xCE0F2DAD46E67678(&uVar0))
	{
		*uParam0 = unk_0xA201D96F42AB7CB1(&uVar0);
		if (unk_0xCB29E1C3D086FBAE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_111()
{
	return Global_2428162.f_26.f_47;
}

int func_112()
{
	return Global_2435151;
}

bool func_113()
{
	return Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_173 != 0;
}

void func_114(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(*uParam0, "data");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "trg");
	*uParam1 = unk_0x1DC15D899E01E6B0(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x6983B0253A3F4D2A(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0xF4028E47F9C1A208(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0xF4028E47F9C1A208(iVar1, "open");
	Var3 = { func_115(unk_0x538ADE1BF648C7C2(0)) };
	unk_0xFFB76AAE8F413B73(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0xB872CF0BC8201FAA(iVar2, "scr");
	uParam2->f_5 = unk_0xB872CF0BC8201FAA(iVar2, "time");
	uParam2->f_1 = unk_0xB872CF0BC8201FAA(iVar1, "cash");
	uParam2->f_65 = unk_0xC956CDEEE5B5FD64(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0x75C9F5BAC9575331(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1144[iVar0 /*6*/]), unk_0x47B973AC6EAA5B6C(uVar51[iVar0], "cid"), 24);
		uParam2->f_71[iVar0 /*67*/].f_62 = unk_0xB872CF0BC8201FAA(uVar51[iVar0], "scr");
		uParam2->f_71[iVar0 /*67*/].f_63 = unk_0xB872CF0BC8201FAA(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_115(var uParam0)
{
	struct<13> Var0;
	
	unk_0x570680D932B0DDD4(uParam0, &Var0, 13);
	return Var0;
}

int func_116(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_115(sParam2) };
		Var13 = { func_117(unk_0xCFC72E446B0B3AD7()) };
		if (bParam1)
		{
			if (unk_0x29DD83C9A6BDE75D(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x9E1C8024B80AA59C(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x035E2C7B598704F7())
		{
			if (unk_0x29DD83C9A6BDE75D(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0xC70DB78812B53953(&Var0) && unk_0xB7C7E8B7E42347F2(&Var0))
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
			Var13 = { func_117(unk_0xCFC72E446B0B3AD7()) };
			if (!unk_0x29DD83C9A6BDE75D(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_117(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

void func_118(var uParam0)
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

void func_119(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xD93D1BEC8A98F771();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x1DC15D899E01E6B0(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0xC956CDEEE5B5FD64(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0x75C9F5BAC9575331(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1144[iVar0 /*6*/]), unk_0x47B973AC6EAA5B6C(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0xF4028E47F9C1A208(*uParam0, "h2h");
	uParam2->f_9 = unk_0xF4028E47F9C1A208(*uParam0, "ch");
	if (func_64())
	{
		StringCopy(&(uParam2->f_12), unk_0x47B973AC6EAA5B6C(*uParam0, "name"), 64);
	}
}

void func_120(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD93D1BEC8A98F771();
	iVar1 = unk_0x5265B2D07FA93601(iVar0, "mission");
	iVar2 = unk_0x5265B2D07FA93601(iVar1, "gen");
	Global_1603097.f_57771 = unk_0xB872CF0BC8201FAA(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_155(iVar1, iParam0, bParam1);
		func_154(iVar1);
		func_153(&iVar1);
		func_152(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_83())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_151(iVar1);
			func_150(iVar1);
			func_149(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_148(iVar1);
			func_147(iVar2);
			func_146(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_145(iVar1);
			func_144(iVar1);
			func_143(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_82())
	{
		func_141(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_139(iVar1);
		func_138(iVar1);
		func_137(iVar1);
		func_136(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_134(iVar1);
		func_133(iVar1);
		func_131(iVar1);
		func_127(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1603097 == 1)
	{
		func_150(iVar1);
		func_126(iVar1);
	}
	else
	{
		func_121(iVar1);
	}
	unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_4), 15);
	unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_4), 18);
	unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_4), 19);
	if (func_34(Global_1603097.f_57161))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1603097.f_4), 15);
	}
	else if (func_33(Global_1603097.f_57161))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1603097.f_4), 18);
	}
	else if (func_32(Global_1603097.f_57161))
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1603097.f_4), 19);
	}
}

void func_121(int iParam0)
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
	
	iVar6 = unk_0x5265B2D07FA93601(iParam0, "ene");
	Global_1603097.f_37131 = unk_0xB872CF0BC8201FAA(iVar6, "no");
	if (unk_0x6983B0253A3F4D2A(iVar6, "spcap") == 2 && unk_0xB872CF0BC8201FAA(iVar6, "spcap") != 0)
	{
		Global_1603097.f_37132 = unk_0xB872CF0BC8201FAA(iVar6, "spcap");
	}
	else
	{
		Global_1603097.f_37132 = 50;
	}
	Global_1603097.f_37134 = unk_0xB872CF0BC8201FAA(iVar6, "time");
	Global_1603097.f_37135 = unk_0xB872CF0BC8201FAA(iVar6, "pal");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar6, "loc");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar6, "head");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar6, "rng");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar6, "model");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar6, "gun");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar6, "skill");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar6, "rsp");
	if (Global_1603097 == 1)
	{
		uVar14[0] = unk_0x1DC15D899E01E6B0(iVar6, "team");
	}
	iVar19 = unk_0x1DC15D899E01E6B0(iVar6, "wep");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar6, "hlt");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar6, "lghlt");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar6, "veh");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar6, "foll");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar6, "iaim");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar6, "iaimt");
	iVar26 = unk_0x1DC15D899E01E6B0(iVar6, "iaimr");
	iVar27 = unk_0x1DC15D899E01E6B0(iVar6, "sanim");
	iVar28 = unk_0x1DC15D899E01E6B0(iVar6, "sat");
	iVar29 = unk_0x1DC15D899E01E6B0(iVar6, "saru");
	iVar30 = unk_0x1DC15D899E01E6B0(iVar6, "sara");
	iVar31 = unk_0x1DC15D899E01E6B0(iVar6, "satt");
	iVar32 = unk_0x1DC15D899E01E6B0(iVar6, "whost");
	iVar33 = unk_0x1DC15D899E01E6B0(iVar6, "flee");
	iVar34 = unk_0x1DC15D899E01E6B0(iVar6, "frr");
	iVar35 = unk_0x1DC15D899E01E6B0(iVar6, "pfrmr");
	iVar36 = unk_0x1DC15D899E01E6B0(iVar6, "psnt");
	iVar37 = unk_0x1DC15D899E01E6B0(iVar6, "psnei");
	iVar38 = unk_0x1DC15D899E01E6B0(iVar6, "p2sp");
	iVar39 = unk_0x1DC15D899E01E6B0(iVar6, "p2sh");
	iVar40 = unk_0x1DC15D899E01E6B0(iVar6, "accu");
	iVar41 = unk_0x1DC15D899E01E6B0(iVar6, "lgacc");
	iVar42 = unk_0x1DC15D899E01E6B0(iVar6, "cmsty");
	iVar43 = unk_0x1DC15D899E01E6B0(iVar6, "pedbs");
	iVar44 = unk_0x1DC15D899E01E6B0(iVar6, "pbstwo");
	iVar45 = unk_0x1DC15D899E01E6B0(iVar6, "pbs3");
	iVar46 = unk_0x1DC15D899E01E6B0(iVar6, "pbs4");
	iVar47 = unk_0x1DC15D899E01E6B0(iVar6, "pbs5");
	iVar48 = unk_0x1DC15D899E01E6B0(iVar6, "pbs6");
	iVar49 = unk_0x1DC15D899E01E6B0(iVar6, "pbs7");
	if (func_83())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1603097.f_19 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar50[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar55[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar60[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar153[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar159[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar165[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar171[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar183[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar177[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar189[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar195[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			iVar3++;
		}
		iVar95 = unk_0x1DC15D899E01E6B0(iVar6, "objt");
		iVar96 = unk_0x1DC15D899E01E6B0(iVar6, "team");
		iVar97 = unk_0x1DC15D899E01E6B0(iVar6, "spawn");
		iVar98 = unk_0x1DC15D899E01E6B0(iVar6, "acts");
		iVar99 = unk_0x1DC15D899E01E6B0(iVar6, "objt2");
		iVar100 = unk_0x1DC15D899E01E6B0(iVar6, "team2");
		iVar101 = unk_0x1DC15D899E01E6B0(iVar6, "spawn2");
		iVar102 = unk_0x1DC15D899E01E6B0(iVar6, "acts2");
		iVar103 = unk_0x1DC15D899E01E6B0(iVar6, "objt3");
		iVar104 = unk_0x1DC15D899E01E6B0(iVar6, "team3");
		iVar105 = unk_0x1DC15D899E01E6B0(iVar6, "spawn3");
		iVar106 = unk_0x1DC15D899E01E6B0(iVar6, "acts3");
		iVar107 = unk_0x1DC15D899E01E6B0(iVar6, "objt4");
		iVar108 = unk_0x1DC15D899E01E6B0(iVar6, "team4");
		iVar109 = unk_0x1DC15D899E01E6B0(iVar6, "spawn4");
		iVar110 = unk_0x1DC15D899E01E6B0(iVar6, "acts4");
		iVar111 = unk_0x1DC15D899E01E6B0(iVar6, "act");
		iVar112 = unk_0x1DC15D899E01E6B0(iVar6, "pper");
		iVar113 = unk_0x1DC15D899E01E6B0(iVar6, "infr");
		iVar114 = unk_0x1DC15D899E01E6B0(iVar6, "cca");
		iVar115 = unk_0x1DC15D899E01E6B0(iVar6, "ccid");
		iVar116 = unk_0x1DC15D899E01E6B0(iVar6, "gfr");
		iVar117 = unk_0x1DC15D899E01E6B0(iVar6, "msr");
		iVar118 = unk_0x1DC15D899E01E6B0(iVar6, "bnr");
		iVar119 = unk_0x1DC15D899E01E6B0(iVar6, "phor");
		iVar120 = unk_0x1DC15D899E01E6B0(iVar6, "folr");
		iVar122 = unk_0x1DC15D899E01E6B0(iVar6, "pcvl");
		iVar123 = unk_0x1DC15D899E01E6B0(iVar6, "pcvr");
		iVar121 = unk_0x1DC15D899E01E6B0(iVar6, "pdfw");
		iVar127 = unk_0x1DC15D899E01E6B0(iVar6, "pvdp1");
		iVar128 = unk_0x1DC15D899E01E6B0(iVar6, "pvdp2");
		iVar124 = unk_0x1DC15D899E01E6B0(iVar6, "paaw");
		iVar125 = unk_0x1DC15D899E01E6B0(iVar6, "paav1");
		iVar126 = unk_0x1DC15D899E01E6B0(iVar6, "paav2");
		iVar129 = unk_0x1DC15D899E01E6B0(iVar6, "dt");
		iVar130 = unk_0x1DC15D899E01E6B0(iVar6, "do");
		iVar131 = unk_0x1DC15D899E01E6B0(iVar6, "dtim");
		iVar132 = unk_0x1DC15D899E01E6B0(iVar6, "dln");
		iVar133 = unk_0x1DC15D899E01E6B0(iVar6, "pvsp");
		iVar139 = unk_0x1DC15D899E01E6B0(iVar6, "drge");
		iVar140 = unk_0x1DC15D899E01E6B0(iVar6, "agrot");
		iVar141 = unk_0x1DC15D899E01E6B0(iVar6, "gtds");
		iVar142 = unk_0x1DC15D899E01E6B0(iVar6, "pstat");
		iVar143 = unk_0x1DC15D899E01E6B0(iVar6, "pstar");
		iVar144 = unk_0x1DC15D899E01E6B0(iVar6, "dmv");
		iVar145 = unk_0x1DC15D899E01E6B0(iVar6, "let");
		iVar146 = unk_0x1DC15D899E01E6B0(iVar6, "escr");
		iVar147 = unk_0x1DC15D899E01E6B0(iVar6, "actr");
		iVar148 = unk_0x1DC15D899E01E6B0(iVar6, "actv");
		iVar149 = unk_0x1DC15D899E01E6B0(iVar6, "actv2");
		iVar150 = unk_0x1DC15D899E01E6B0(iVar6, "actv3");
		iVar151 = unk_0x1DC15D899E01E6B0(iVar6, "actv4");
		iVar152 = unk_0x1DC15D899E01E6B0(iVar6, "actv5");
		iVar201 = unk_0x1DC15D899E01E6B0(iVar6, "pedct");
		iVar203 = unk_0x1DC15D899E01E6B0(iVar6, "pdcra");
		iVar202 = unk_0x1DC15D899E01E6B0(iVar6, "pedcr");
		iVar204 = unk_0x1DC15D899E01E6B0(iVar6, "pedbc");
		iVar205 = unk_0x1DC15D899E01E6B0(iVar6, "pdbps");
		iVar206 = unk_0x1DC15D899E01E6B0(iVar6, "avrad");
		iVar207 = unk_0x1DC15D899E01E6B0(iVar6, "pedst");
		iVar208 = unk_0x1DC15D899E01E6B0(iVar6, "gotor");
		iVar209 = unk_0x1DC15D899E01E6B0(iVar6, "invbs");
		iVar210 = unk_0x1DC15D899E01E6B0(iVar6, "gort");
		iVar211 = unk_0x1DC15D899E01E6B0(iVar6, "gorr");
		iVar212 = unk_0x1DC15D899E01E6B0(iVar6, "gorw");
		iVar213 = unk_0x1DC15D899E01E6B0(iVar6, "cstnm");
		iVar214 = unk_0x1DC15D899E01E6B0(iVar6, "pspdl");
		iVar215 = unk_0x1DC15D899E01E6B0(iVar6, "psgr");
		iVar216 = unk_0x1DC15D899E01E6B0(iVar6, "psctt");
		iVar217 = unk_0x1DC15D899E01E6B0(iVar6, "pscto");
		iVar218 = unk_0x1DC15D899E01E6B0(iVar6, "pscta");
		iVar219 = unk_0x1DC15D899E01E6B0(iVar6, "psctac");
		iVar220 = unk_0x1DC15D899E01E6B0(iVar6, "psctv");
		iVar221 = unk_0x1DC15D899E01E6B0(iVar6, "pscth");
		iVar222 = unk_0x1DC15D899E01E6B0(iVar6, "psctot");
		iVar223 = unk_0x1DC15D899E01E6B0(iVar6, "psctoi");
		iVar224 = unk_0x1DC15D899E01E6B0(iVar6, "pscatd");
		iVar225 = unk_0x1DC15D899E01E6B0(iVar6, "cutsc");
		iVar226 = unk_0x1DC15D899E01E6B0(iVar6, "cutsh");
		iVar227 = unk_0x1DC15D899E01E6B0(iVar6, "nmpass");
		iVar228 = unk_0x1DC15D899E01E6B0(iVar6, "nmfail");
		iVar134 = unk_0x1DC15D899E01E6B0(iVar6, "pmcp");
		iVar135 = unk_0x1DC15D899E01E6B0(iVar6, "pmcf");
		iVar136 = unk_0x1DC15D899E01E6B0(iVar6, "pambv");
		iVar137 = unk_0x1DC15D899E01E6B0(iVar6, "pwrpt");
		iVar138 = unk_0x1DC15D899E01E6B0(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar229[iVar1] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar232[iVar1] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_37131 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1603097.f_37136[iVar0 /*271*/] = { unk_0x09B0244538FE11FC(iVar7, iVar0) };
			Global_1603097.f_37136[iVar0 /*271*/].f_3 = unk_0x7017D324A3C28EF0(iVar8, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_4 = unk_0x7017D324A3C28EF0(iVar9, iVar0);
			iVar2 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_13 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_13 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_13 = iVar2;
			}
			if (!func_82() && !func_125())
			{
				if (!unk_0xF2CB2B0638FEF678(Global_1603097.f_37136[iVar0 /*271*/].f_13))
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_13 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_14 = iVar2;
			iVar2 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_15 = iVar2;
			if (Global_1603097 == 1)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_16[0] = unk_0x2E23E36C99C8BEE6(uVar14[0], iVar0);
			}
			Global_1603097.f_37136[iVar0 /*271*/].f_49 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_35 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_36 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
			if (unk_0x7C2817C35F97E35E(iVar21, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_37 = unk_0x2E23E36C99C8BEE6(iVar21, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_37 = -1;
			}
			Global_1603097.f_37136[iVar0 /*271*/].f_55 = unk_0x2E23E36C99C8BEE6(iVar22, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_31 = unk_0x2E23E36C99C8BEE6(iVar13, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_38 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_39 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_40 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_41 = unk_0x2E23E36C99C8BEE6(iVar27, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_42 = unk_0x2E23E36C99C8BEE6(iVar28, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_43 = unk_0x2E23E36C99C8BEE6(iVar29, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_44 = unk_0x7017D324A3C28EF0(iVar30, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_45 = unk_0x2E23E36C99C8BEE6(iVar31, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_48 = unk_0x2E23E36C99C8BEE6(iVar32, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_46 = unk_0x2E23E36C99C8BEE6(iVar33, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_5 = unk_0x7017D324A3C28EF0(iVar34, iVar0);
			if ((unk_0x7C2817C35F97E35E(iVar35, iVar0) == 3 && unk_0x7C2817C35F97E35E(iVar36, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar37, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_6 = unk_0x7017D324A3C28EF0(iVar35, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar36, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_8 = unk_0x2E23E36C99C8BEE6(iVar37, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_6 = 0f;
				Global_1603097.f_37136[iVar0 /*271*/].f_7 = 0;
				Global_1603097.f_37136[iVar0 /*271*/].f_8 = -1;
			}
			if (unk_0x7C2817C35F97E35E(iVar38, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar39, iVar0) == 3)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_9 = { unk_0x09B0244538FE11FC(iVar38, iVar0) };
				Global_1603097.f_37136[iVar0 /*271*/].f_12 = unk_0x7017D324A3C28EF0(iVar39, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_9 = { 0f, 0f, 0f };
				Global_1603097.f_37136[iVar0 /*271*/].f_12 = 0f;
			}
			Global_1603097.f_37136[iVar0 /*271*/].f_33 = unk_0x2E23E36C99C8BEE6(iVar40, iVar0);
			if (unk_0x7C2817C35F97E35E(iVar41, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_34 = unk_0x2E23E36C99C8BEE6(iVar41, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_34 = -1;
			}
			Global_1603097.f_37136[iVar0 /*271*/].f_47 = unk_0x2E23E36C99C8BEE6(iVar42, iVar0);
			Global_1603097.f_37136[iVar0 /*271*/].f_180 = unk_0x2E23E36C99C8BEE6(iVar43, iVar0);
			if (unk_0x7C2817C35F97E35E(iVar44, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_181 = unk_0x2E23E36C99C8BEE6(iVar44, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_181 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar45, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_182 = unk_0x2E23E36C99C8BEE6(iVar45, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_182 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar46, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_183 = unk_0x2E23E36C99C8BEE6(iVar46, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_183 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar47, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_184 = unk_0x2E23E36C99C8BEE6(iVar47, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_184 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar48, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_185 = unk_0x2E23E36C99C8BEE6(iVar48, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_185 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar49, iVar0) == 2)
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_186 = unk_0x2E23E36C99C8BEE6(iVar49, iVar0);
			}
			else
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_186 = 0;
			}
			if (func_83())
			{
				Global_1603097.f_37136[iVar0 /*271*/].f_56 = unk_0x2E23E36C99C8BEE6(iVar95, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_57 = unk_0x2E23E36C99C8BEE6(iVar96, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_58 = unk_0x2E23E36C99C8BEE6(iVar97, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_61 = unk_0x2E23E36C99C8BEE6(iVar98, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar99, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_153 = unk_0x2E23E36C99C8BEE6(iVar99, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_150 = unk_0x2E23E36C99C8BEE6(iVar100, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_156 = unk_0x2E23E36C99C8BEE6(iVar101, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_159 = unk_0x2E23E36C99C8BEE6(iVar102, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_154 = unk_0x2E23E36C99C8BEE6(iVar103, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_151 = unk_0x2E23E36C99C8BEE6(iVar104, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_157 = unk_0x2E23E36C99C8BEE6(iVar105, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_160 = unk_0x2E23E36C99C8BEE6(iVar106, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_155 = unk_0x2E23E36C99C8BEE6(iVar107, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_152 = unk_0x2E23E36C99C8BEE6(iVar108, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_158 = unk_0x2E23E36C99C8BEE6(iVar109, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_161 = unk_0x2E23E36C99C8BEE6(iVar110, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_153 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_150 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_156 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_159 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_154 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_151 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_157 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_160 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_155 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_152 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_158 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_161 = 0;
				}
				Global_1603097.f_37136[iVar0 /*271*/].f_60 = unk_0x2E23E36C99C8BEE6(iVar111, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar112, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_192 = unk_0x2E23E36C99C8BEE6(iVar112, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_192 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar113, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_193 = unk_0x2E23E36C99C8BEE6(iVar113, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_193 = 250;
				}
				if (unk_0x7C2817C35F97E35E(iVar114, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_196 = unk_0x2E23E36C99C8BEE6(iVar114, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_196 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar115, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_197 = unk_0x2E23E36C99C8BEE6(iVar115, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_197 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar116, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_198 = unk_0x2E23E36C99C8BEE6(iVar116, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_198 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar117, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_194 = unk_0x2E23E36C99C8BEE6(iVar117, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_194 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar118, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_195 = unk_0x2E23E36C99C8BEE6(iVar118, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_195 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar119, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_251 = unk_0x2E23E36C99C8BEE6(iVar119, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_251 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar120, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_252 = unk_0x2E23E36C99C8BEE6(iVar120, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_252 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar122, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_199 = { unk_0x09B0244538FE11FC(iVar122, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_199 = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar123, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_202 = { unk_0x09B0244538FE11FC(iVar123, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_202 = { 0f, 0f, 0f };
				}
				if ((unk_0x7C2817C35F97E35E(iVar127, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar128, iVar0) == 5) && unk_0x7C2817C35F97E35E(iVar121, iVar0) == 3)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_210 = { unk_0x09B0244538FE11FC(iVar127, iVar0) };
					Global_1603097.f_37136[iVar0 /*271*/].f_213 = { unk_0x09B0244538FE11FC(iVar128, iVar0) };
					Global_1603097.f_37136[iVar0 /*271*/].f_216 = unk_0x7017D324A3C28EF0(iVar121, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_210 = { 0f, 0f, 0f };
					Global_1603097.f_37136[iVar0 /*271*/].f_213 = { 0f, 0f, 0f };
					Global_1603097.f_37136[iVar0 /*271*/].f_216 = 1f;
				}
				if ((unk_0x7C2817C35F97E35E(iVar124, iVar0) == 3 && unk_0x7C2817C35F97E35E(iVar125, iVar0) == 5) && unk_0x7C2817C35F97E35E(iVar126, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_175 = unk_0x7017D324A3C28EF0(iVar124, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_169 = { unk_0x09B0244538FE11FC(iVar125, iVar0) };
					Global_1603097.f_37136[iVar0 /*271*/].f_172 = { unk_0x09B0244538FE11FC(iVar126, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_175 = 0f;
					Global_1603097.f_37136[iVar0 /*271*/].f_169 = { 0f, 0f, 0f };
					Global_1603097.f_37136[iVar0 /*271*/].f_172 = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar133, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_222 = unk_0x2E23E36C99C8BEE6(iVar133, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_222 = 0;
				}
				Global_1603097.f_37136[iVar0 /*271*/].f_206 = unk_0x2E23E36C99C8BEE6(iVar129, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_205 = unk_0x2E23E36C99C8BEE6(iVar130, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_207 = unk_0x2E23E36C99C8BEE6(iVar131, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_208 = unk_0x2E23E36C99C8BEE6(iVar132, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_209 = unk_0x2E23E36C99C8BEE6(iVar139, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_217 = unk_0x2E23E36C99C8BEE6(iVar140, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_176 = unk_0x2E23E36C99C8BEE6(iVar141, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_32 = unk_0x2E23E36C99C8BEE6(iVar144, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_167 = unk_0x2E23E36C99C8BEE6(iVar145, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_177 = unk_0x2E23E36C99C8BEE6(iVar146, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_168 = unk_0x2E23E36C99C8BEE6(iVar147, iVar0);
				Global_1603097.f_37136[iVar0 /*271*/].f_62 = { unk_0x09B0244538FE11FC(iVar148, iVar0) };
				Global_1603097.f_37136[iVar0 /*271*/].f_62 = { unk_0x09B0244538FE11FC(iVar148, iVar0) };
				if (unk_0x7C2817C35F97E35E(iVar149, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[0 /*3*/] = { unk_0x09B0244538FE11FC(iVar149, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar150, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[1 /*3*/] = { unk_0x09B0244538FE11FC(iVar150, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar151, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[2 /*3*/] = { unk_0x09B0244538FE11FC(iVar151, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar152, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[3 /*3*/] = { unk_0x09B0244538FE11FC(iVar152, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_65[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar142, iVar0) == 2 && unk_0x7C2817C35F97E35E(iVar143, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_178 = unk_0x2E23E36C99C8BEE6(iVar142, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_179 = unk_0x2E23E36C99C8BEE6(iVar143, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_178 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_179 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x7C2817C35F97E35E(uVar153[iVar3], iVar0) == 2)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_79[iVar3] = unk_0x2E23E36C99C8BEE6(uVar153[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_79[iVar3] = 0;
					}
					if (unk_0x7C2817C35F97E35E(uVar159[iVar3], iVar0) == 2)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_85[iVar3] = unk_0x2E23E36C99C8BEE6(uVar159[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_85[iVar3] = 0;
					}
					if (unk_0x7C2817C35F97E35E(uVar165[iVar3], iVar0) == 5 && unk_0x7C2817C35F97E35E(uVar171[iVar3], iVar0) == 2)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_91[iVar3 /*3*/] = { unk_0x09B0244538FE11FC(uVar165[iVar3], iVar0) };
						Global_1603097.f_37136[iVar0 /*271*/].f_107[iVar3] = unk_0x2E23E36C99C8BEE6(uVar171[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_91[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1603097.f_37136[iVar0 /*271*/].f_107[iVar3] = 3;
					}
					if (unk_0x7C2817C35F97E35E(uVar177[iVar3], iVar0) == 2)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_125[iVar3] = unk_0x2E23E36C99C8BEE6(uVar177[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_125[iVar3] = -1;
					}
					if (unk_0x7C2817C35F97E35E(uVar183[iVar3], iVar0) == 3)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_113[iVar3] = unk_0x7017D324A3C28EF0(uVar183[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_113[iVar3] = 0f;
					}
					if (unk_0x7C2817C35F97E35E(uVar189[iVar3], iVar0) == 3)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_119[iVar3] = unk_0x7017D324A3C28EF0(uVar189[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_119[iVar3] = 0f;
					}
					if (unk_0x7C2817C35F97E35E(uVar195[iVar3], iVar0) == 3)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_131[iVar3] = unk_0x7017D324A3C28EF0(uVar195[iVar3], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_131[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x7C2817C35F97E35E(iVar202, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_218 = unk_0x2E23E36C99C8BEE6(iVar202, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_218 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar201, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_219 = unk_0x2E23E36C99C8BEE6(iVar201, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_219 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar203, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_220 = unk_0x2E23E36C99C8BEE6(iVar203, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_220 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar207, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_221 = unk_0x2E23E36C99C8BEE6(iVar207, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_221 = -3;
				}
				if (unk_0x7C2817C35F97E35E(iVar204, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_237 = unk_0x2E23E36C99C8BEE6(iVar204, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_237 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar205, iVar0) == 3)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_248 = unk_0x7017D324A3C28EF0(iVar205, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_248 = 1f;
				}
				if (unk_0x7C2817C35F97E35E(iVar206, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_78 = unk_0x2E23E36C99C8BEE6(iVar206, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_78 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar208, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_50 = unk_0x2E23E36C99C8BEE6(iVar208, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_50 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar209, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_51 = unk_0x2E23E36C99C8BEE6(iVar209, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_51 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar213, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_148 = unk_0x2E23E36C99C8BEE6(iVar213, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_148 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar214, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_149 = unk_0x2E23E36C99C8BEE6(iVar214, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_149 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar215, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_59 = unk_0x2E23E36C99C8BEE6(iVar215, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_59 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar134, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_235 = unk_0x2E23E36C99C8BEE6(iVar134, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_235 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar135, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_236 = unk_0x2E23E36C99C8BEE6(iVar135, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_236 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar136, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_253 = unk_0x2E23E36C99C8BEE6(iVar136, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_253 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar137, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_259 = unk_0x2E23E36C99C8BEE6(iVar137, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_259 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar138, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_260 = unk_0x2E23E36C99C8BEE6(iVar138, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_260 = -1;
				}
				if ((unk_0x7C2817C35F97E35E(iVar216, iVar0) == 2 && unk_0x7C2817C35F97E35E(iVar217, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar218, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_137 = unk_0x2E23E36C99C8BEE6(iVar216, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_138 = unk_0x2E23E36C99C8BEE6(iVar217, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_140 = unk_0x2E23E36C99C8BEE6(iVar218, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_137 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_138 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_140 = 0;
				}
				if ((unk_0x7C2817C35F97E35E(iVar222, iVar0) == 2 && unk_0x7C2817C35F97E35E(iVar223, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar224, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_145 = unk_0x2E23E36C99C8BEE6(iVar222, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_146 = unk_0x2E23E36C99C8BEE6(iVar223, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_147 = unk_0x2E23E36C99C8BEE6(iVar224, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_145 = 0;
					Global_1603097.f_37136[iVar0 /*271*/].f_146 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_147 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar219, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_139 = unk_0x2E23E36C99C8BEE6(iVar219, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_139 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar220, iVar0) == 5)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_141 = { unk_0x09B0244538FE11FC(iVar220, iVar0) };
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_141 = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(iVar221, iVar0) == 3)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_144 = unk_0x7017D324A3C28EF0(iVar221, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_144 = 0f;
				}
				if ((unk_0x7C2817C35F97E35E(iVar210, iVar0) == 2 && unk_0x7C2817C35F97E35E(iVar211, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar212, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_52 = unk_0x2E23E36C99C8BEE6(iVar210, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_53 = unk_0x2E23E36C99C8BEE6(iVar211, iVar0);
					Global_1603097.f_37136[iVar0 /*271*/].f_54 = unk_0x2E23E36C99C8BEE6(iVar212, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_52 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_53 = -1;
					Global_1603097.f_37136[iVar0 /*271*/].f_54 = joaat("weapon_pistol");
				}
				if (Global_1603097.f_2 != 6 && unk_0x7C2817C35F97E35E(iVar225, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_249 = unk_0x2E23E36C99C8BEE6(iVar225, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_249 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar227, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_233 = unk_0x2E23E36C99C8BEE6(iVar227, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_233 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar228, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_234 = unk_0x2E23E36C99C8BEE6(iVar228, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_234 = -1;
				}
				if (Global_1603097.f_2 != 6 && unk_0x7C2817C35F97E35E(iVar226, iVar0) == 2)
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_250 = unk_0x2E23E36C99C8BEE6(iVar226, iVar0);
				}
				else
				{
					Global_1603097.f_37136[iVar0 /*271*/].f_250 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x7C2817C35F97E35E(uVar229[iVar1], iVar0) == 5)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_261[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar229[iVar1], iVar0) };
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_261[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x7C2817C35F97E35E(uVar232[iVar1], iVar0) == 3)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_268[iVar1] = unk_0x7017D324A3C28EF0(uVar232[iVar1], iVar0);
					}
					else
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_268[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1603097.f_19 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1603097.f_37136[iVar0 /*271*/].f_16[iVar3] = unk_0x2E23E36C99C8BEE6(uVar14[iVar3], iVar0);
						Global_1603097.f_37136[iVar0 /*271*/].f_21[iVar3] = unk_0x2E23E36C99C8BEE6(uVar50[iVar3], iVar0);
						Global_1603097.f_37136[iVar0 /*271*/].f_26[iVar3] = unk_0x2E23E36C99C8BEE6(uVar55[iVar3], iVar0);
						if (Global_1603097.f_37136[iVar0 /*271*/].f_26[iVar3] == -1)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_26[iVar3] = 99999;
						}
						if (unk_0x7C2817C35F97E35E(uVar60[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_187[iVar3] = unk_0x2E23E36C99C8BEE6(uVar60[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_187[iVar3] = -1;
						}
						if (unk_0x7C2817C35F97E35E(uVar65[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_162[iVar3] = unk_0x2E23E36C99C8BEE6(uVar65[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_162[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar70[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_223[iVar3] = unk_0x2E23E36C99C8BEE6(uVar70[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_223[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar75[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_228[iVar3] = unk_0x2E23E36C99C8BEE6(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_228[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar80[iVar3], iVar0) == 2 && unk_0x7C2817C35F97E35E(uVar85[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_238[iVar3] = unk_0x2E23E36C99C8BEE6(uVar80[iVar3], iVar0);
							Global_1603097.f_37136[iVar0 /*271*/].f_243[iVar3] = unk_0x2E23E36C99C8BEE6(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_238[iVar3] = -1;
							Global_1603097.f_37136[iVar0 /*271*/].f_243[iVar3] = -1;
						}
						if (unk_0x7C2817C35F97E35E(uVar90[iVar3], iVar0) == 2)
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_254[iVar3] = unk_0x2E23E36C99C8BEE6(uVar90[iVar3], iVar0);
						}
						else if (unk_0x94E72F17611BCD3C(Global_1603097.f_21828[iVar3 /*3*/][func_124(iVar0)], func_123(iVar0)))
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_254[iVar3] = -1;
						}
						else
						{
							Global_1603097.f_37136[iVar0 /*271*/].f_254[iVar3] = -2;
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
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	Global_1603097.f_53548[0] = unk_0xB872CF0BC8201FAA(*iParam0, "no0");
	iVar1 = unk_0x1DC15D899E01E6B0(*iParam0, "loc0");
	iVar2 = unk_0x1DC15D899E01E6B0(*iParam0, "head0");
	iVar3 = unk_0x1DC15D899E01E6B0(*iParam0, "bit0");
	iVar4 = unk_0x1DC15D899E01E6B0(*iParam0, "veh0");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_53548[0] - 1))
	{
		Global_1603097.f_54095[0 /*262*/][iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar1, iVar0) };
		Global_1603097.f_54095[0 /*262*/][iVar0 /*9*/].f_3 = unk_0x7017D324A3C28EF0(iVar2, iVar0);
		Global_1603097.f_54095[0 /*262*/][iVar0 /*9*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar3, iVar0);
		if (unk_0x7C2817C35F97E35E(iVar4, iVar0) == 2)
		{
			Global_1603097.f_54095[0 /*262*/][iVar0 /*9*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar4, iVar0);
		}
		else
		{
			Global_1603097.f_54095[0 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1603097.f_53548[1] = unk_0xB872CF0BC8201FAA(*iParam0, "no1");
	iVar5 = unk_0x1DC15D899E01E6B0(*iParam0, "loc1");
	iVar6 = unk_0x1DC15D899E01E6B0(*iParam0, "head1");
	iVar7 = unk_0x1DC15D899E01E6B0(*iParam0, "bit1");
	iVar8 = unk_0x1DC15D899E01E6B0(*iParam0, "veh1");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_53548[1] - 1))
	{
		Global_1603097.f_54095[1 /*262*/][iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar5, iVar0) };
		Global_1603097.f_54095[1 /*262*/][iVar0 /*9*/].f_3 = unk_0x7017D324A3C28EF0(iVar6, iVar0);
		Global_1603097.f_54095[1 /*262*/][iVar0 /*9*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		if (unk_0x7C2817C35F97E35E(iVar8, iVar0) == 2)
		{
			Global_1603097.f_54095[1 /*262*/][iVar0 /*9*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		}
		else
		{
			Global_1603097.f_54095[1 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1603097.f_53548[2] = unk_0xB872CF0BC8201FAA(*iParam0, "no2");
	iVar9 = unk_0x1DC15D899E01E6B0(*iParam0, "loc2");
	iVar10 = unk_0x1DC15D899E01E6B0(*iParam0, "head2");
	iVar11 = unk_0x1DC15D899E01E6B0(*iParam0, "bit2");
	iVar12 = unk_0x1DC15D899E01E6B0(*iParam0, "veh2");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_53548[2] - 1))
	{
		Global_1603097.f_54095[2 /*262*/][iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar9, iVar0) };
		Global_1603097.f_54095[2 /*262*/][iVar0 /*9*/].f_3 = unk_0x7017D324A3C28EF0(iVar10, iVar0);
		Global_1603097.f_54095[2 /*262*/][iVar0 /*9*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
		if (unk_0x7C2817C35F97E35E(iVar12, iVar0) == 2)
		{
			Global_1603097.f_54095[2 /*262*/][iVar0 /*9*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
		}
		else
		{
			Global_1603097.f_54095[2 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1603097.f_53548[3] = unk_0xB872CF0BC8201FAA(*iParam0, "no3");
	iVar13 = unk_0x1DC15D899E01E6B0(*iParam0, "loc3");
	iVar14 = unk_0x1DC15D899E01E6B0(*iParam0, "head3");
	iVar15 = unk_0x1DC15D899E01E6B0(*iParam0, "bit3");
	iVar16 = unk_0x1DC15D899E01E6B0(*iParam0, "veh3");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_53548[3] - 1))
	{
		Global_1603097.f_54095[3 /*262*/][iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar13, iVar0) };
		Global_1603097.f_54095[3 /*262*/][iVar0 /*9*/].f_3 = unk_0x7017D324A3C28EF0(iVar14, iVar0);
		Global_1603097.f_54095[3 /*262*/][iVar0 /*9*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar15, iVar0);
		if (unk_0x7C2817C35F97E35E(iVar16, iVar0) == 2)
		{
			Global_1603097.f_54095[3 /*262*/][iVar0 /*9*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
		}
		else
		{
			Global_1603097.f_54095[3 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
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
	if (Global_1603097 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x5265B2D07FA93601(iParam0, "ene");
	Global_1603097.f_53547 = unk_0xB872CF0BC8201FAA(iVar1, "no");
	Global_1603097.f_26471 = unk_0xB872CF0BC8201FAA(iVar1, "veh");
	iVar2 = unk_0x1DC15D899E01E6B0(iVar1, "loc");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar1, "head");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar1, "team");
	if (Global_1603097.f_53547 > 60)
	{
		Global_1603097.f_53547 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_53547 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1603097.f_53554[iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar2, iVar0) };
			Global_1603097.f_53554[iVar0 /*9*/].f_3 = unk_0x7017D324A3C28EF0(iVar3, iVar0);
			Global_1603097.f_53554[iVar0 /*9*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar4, iVar0);
		}
		iVar0++;
	}
	func_122(&iVar1);
}

void func_127(int iParam0)
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
	
	iVar2 = unk_0x5265B2D07FA93601(iParam0, "dprop");
	Global_1603097.f_31812 = func_130(unk_0xB872CF0BC8201FAA(iVar2, "no"), 0, 100);
	iVar3 = unk_0x1DC15D899E01E6B0(iVar2, "loc");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar2, "vRot");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar2, "head");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar2, "model");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar2, "asst");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar2, "asso");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar2, "asss");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar2, "pasc");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar2, "asst2");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar2, "asso2");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar2, "asss2");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar2, "pasc2");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar2, "asst3");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar2, "asso3");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar2, "asss3");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar2, "pasc3");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar2, "asst4");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar2, "asso4");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar2, "asss4");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar2, "pasc4");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar2, "prpct");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar2, "prpcr");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar2, "prcra");
	iVar26 = unk_0x1DC15D899E01E6B0(iVar2, "prpbs");
	if (Global_1603097.f_31812 > 20)
	{
		Global_1603097.f_31812 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_31812 - 1))
	{
		Global_1603097.f_31814[iVar0 /*29*/] = { unk_0x09B0244538FE11FC(iVar3, iVar0) };
		Global_1603097.f_31814[iVar0 /*29*/].f_3 = { unk_0x09B0244538FE11FC(iVar4, iVar0) };
		Global_1603097.f_31814[iVar0 /*29*/].f_6 = unk_0x7017D324A3C28EF0(iVar5, iVar0);
		Global_1603097.f_31814[iVar0 /*29*/].f_8 = -1;
		iVar1 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
		Global_1603097.f_31814[iVar0 /*29*/].f_7 = func_129(iVar1);
		if (!unk_0xF2CB2B0638FEF678(Global_1603097.f_31814[iVar0 /*29*/].f_7))
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1603097.f_31814[iVar0 /*29*/].f_10 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		Global_1603097.f_31814[iVar0 /*29*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		Global_1603097.f_31814[iVar0 /*29*/].f_11 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		if (Global_1603097.f_31814[iVar0 /*29*/].f_11 == -1)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_11 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar11, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_17 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_20 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_23 = unk_0x2E23E36C99C8BEE6(iVar13, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_18 = unk_0x2E23E36C99C8BEE6(iVar15, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_21 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_24 = unk_0x2E23E36C99C8BEE6(iVar17, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_19 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_22 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_25 = unk_0x2E23E36C99C8BEE6(iVar21, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_20 = -1;
			Global_1603097.f_31814[iVar0 /*29*/].f_17 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_23 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_21 = -1;
			Global_1603097.f_31814[iVar0 /*29*/].f_18 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_24 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_22 = -1;
			Global_1603097.f_31814[iVar0 /*29*/].f_19 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_25 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar10, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_12 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_26 = unk_0x2E23E36C99C8BEE6(iVar14, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar18, iVar0);
			Global_1603097.f_31814[iVar0 /*29*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar22, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_12 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_26 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_27 = 0;
			Global_1603097.f_31814[iVar0 /*29*/].f_28 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar24, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_13 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_13 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar23, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_14 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_14 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar25, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_15 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_15 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar26, iVar0) == 2)
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_16 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
		}
		else
		{
			Global_1603097.f_31814[iVar0 /*29*/].f_16 = 0;
		}
		iVar0++;
	}
	iVar27 = iVar0;
	if (func_128() || Global_1603097 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1603097.f_26523 - 1))
		{
			Global_1603097.f_31814[iVar27 /*29*/] = { Global_1603097.f_26526[iVar0 /*87*/] };
			Global_1603097.f_31814[iVar27 /*29*/].f_3 = { Global_1603097.f_26526[iVar0 /*87*/].f_4 };
			Global_1603097.f_31814[iVar27 /*29*/].f_6 = Global_1603097.f_26526[iVar0 /*87*/].f_3;
			Global_1603097.f_31814[iVar27 /*29*/].f_8 = iVar0;
			Global_1603097.f_31814[iVar27 /*29*/].f_7 = joaat("prop_container_ld_pu");
			iVar28 = 0;
			while (iVar28 <= 3)
			{
				Global_1603097.f_26526[iVar27 /*87*/].f_16[iVar28] = 0;
				Global_1603097.f_26526[iVar27 /*87*/].f_21[iVar28] = 99999;
				iVar28++;
			}
			Global_1603097.f_31813++;
			Global_1603097.f_31812++;
			iVar27++;
			iVar0++;
		}
	}
}

int func_128()
{
	if (Global_1603097 == 0 && Global_1603097.f_2 == 5)
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
	if ((unk_0x7F11C755C90EFEC5() || unk_0x035E2C7B598704F7()) || unk_0x708CE249B4F97BF8())
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
	else if (unk_0x1B54267BB477DB52() || unk_0x523427CCABD5EC9C())
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
	int iVar29;
	
	iVar2 = unk_0x5265B2D07FA93601(iParam0, "prop");
	Global_1603097.f_28679 = unk_0xB872CF0BC8201FAA(iVar2, "no");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar2, "loc");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar2, "vRot");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar2, "head");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar2, "model");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar2, "asst");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar2, "asso");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar2, "asss");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar2, "pasc");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar2, "asst2");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar2, "asso2");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar2, "asss2");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar2, "pasc2");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar2, "asst3");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar2, "asso3");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar2, "asss3");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar2, "pasc3");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar2, "asst4");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar2, "asso4");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar2, "asss4");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar2, "pasc4");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar2, "aldel");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar2, "alsnd");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar2, "flvfx");
	iVar26 = unk_0x1DC15D899E01E6B0(iVar2, "prpct");
	iVar27 = unk_0x1DC15D899E01E6B0(iVar2, "prpcr");
	iVar28 = unk_0x1DC15D899E01E6B0(iVar2, "prcra");
	iVar29 = unk_0x1DC15D899E01E6B0(iVar2, "prpbs");
	if (Global_1603097.f_28679 > 100)
	{
		Global_1603097.f_28679 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_28679 - 1))
	{
		Global_1603097.f_28680[iVar0 /*31*/] = { unk_0x09B0244538FE11FC(iVar3, iVar0) };
		Global_1603097.f_28680[iVar0 /*31*/].f_3 = { unk_0x09B0244538FE11FC(iVar4, iVar0) };
		Global_1603097.f_28680[iVar0 /*31*/].f_6 = unk_0x7017D324A3C28EF0(iVar5, iVar0);
		iVar1 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
		Global_1603097.f_28680[iVar0 /*31*/].f_7 = func_129(iVar1);
		if (!unk_0xF2CB2B0638FEF678(Global_1603097.f_28680[iVar0 /*31*/].f_7))
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1603097.f_28680[iVar0 /*31*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		Global_1603097.f_28680[iVar0 /*31*/].f_8 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		Global_1603097.f_28680[iVar0 /*31*/].f_10 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		if (Global_1603097.f_28680[iVar0 /*31*/].f_10 == -1)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_10 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar11, iVar0) == 2)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_19 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_22 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_25 = unk_0x2E23E36C99C8BEE6(iVar13, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_20 = unk_0x2E23E36C99C8BEE6(iVar15, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_23 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_26 = unk_0x2E23E36C99C8BEE6(iVar17, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_21 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_24 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar21, iVar0);
		}
		else
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_22 = -1;
			Global_1603097.f_28680[iVar0 /*31*/].f_19 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_25 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_23 = -1;
			Global_1603097.f_28680[iVar0 /*31*/].f_20 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_26 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_24 = -1;
			Global_1603097.f_28680[iVar0 /*31*/].f_21 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar10, iVar0) == 2)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_11 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar14, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_29 = unk_0x2E23E36C99C8BEE6(iVar18, iVar0);
			Global_1603097.f_28680[iVar0 /*31*/].f_30 = unk_0x2E23E36C99C8BEE6(iVar22, iVar0);
		}
		else
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_11 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_28 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_29 = 0;
			Global_1603097.f_28680[iVar0 /*31*/].f_30 = 0;
		}
		Global_1603097.f_28680[iVar0 /*31*/].f_12 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
		if (Global_1603097.f_28680[iVar0 /*31*/].f_12 > 0 && Global_1603097.f_28680[iVar0 /*31*/].f_12 < 1000)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_12 = func_132(Global_1603097.f_28680[iVar0 /*31*/].f_12);
		}
		Global_1603097.f_28680[iVar0 /*31*/].f_13 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
		Global_1603097.f_28680[iVar0 /*31*/].f_14 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
		if (unk_0x7C2817C35F97E35E(iVar27, iVar0) == 2)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_15 = unk_0x2E23E36C99C8BEE6(iVar27, iVar0);
		}
		else
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar26, iVar0) == 2)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_16 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
		}
		else
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar28, iVar0) == 2)
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_17 = unk_0x2E23E36C99C8BEE6(iVar28, iVar0);
		}
		else
		{
			Global_1603097.f_28680[iVar0 /*31*/].f_17 = -1;
		}
		Global_1603097.f_28680[iVar0 /*31*/].f_18 = unk_0x2E23E36C99C8BEE6(iVar29, iVar0);
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

void func_133(int iParam0)
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
	
	iVar6 = unk_0x5265B2D07FA93601(iParam0, "veh");
	Global_1603097.f_33249 = unk_0xB872CF0BC8201FAA(iVar6, "no");
	Global_1603097.f_33250 = unk_0xB872CF0BC8201FAA(iVar6, "time");
	Global_1603097.f_33251 = unk_0xB872CF0BC8201FAA(iVar6, "pal");
	iVar7 = unk_0x5265B2D07FA93601(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1603097.f_19 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1603097.f_73[iVar3 /*5400*/].f_38 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1603097.f_36983[iVar0 /*5*/][iVar3] = unk_0xB872CF0BC8201FAA(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1603097.f_21726[iVar0 /*5*/][iVar3] = unk_0xB872CF0BC8201FAA(iVar7, &cVar4);
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x1DC15D899E01E6B0(iVar6, "loc");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar6, "head");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar6, "model");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar6, "col");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar6, "rsp");
	if (func_83())
	{
		iVar10 = unk_0x1DC15D899E01E6B0(iVar6, "vrr");
		iVar11 = unk_0x1DC15D899E01E6B0(iVar6, "vrmr");
		iVar12 = unk_0x1DC15D899E01E6B0(iVar6, "vsnt");
		iVar13 = unk_0x1DC15D899E01E6B0(iVar6, "vsnei");
		iVar14 = unk_0x1DC15D899E01E6B0(iVar6, "v2sp");
		iVar15 = unk_0x1DC15D899E01E6B0(iVar6, "v2sh");
		iVar19 = unk_0x1DC15D899E01E6B0(iVar6, "objt");
		iVar20 = unk_0x1DC15D899E01E6B0(iVar6, "team");
		iVar21 = unk_0x1DC15D899E01E6B0(iVar6, "spwn");
		iVar22 = unk_0x1DC15D899E01E6B0(iVar6, "objt2");
		iVar23 = unk_0x1DC15D899E01E6B0(iVar6, "team2");
		iVar24 = unk_0x1DC15D899E01E6B0(iVar6, "spwn2");
		iVar25 = unk_0x1DC15D899E01E6B0(iVar6, "objt3");
		iVar26 = unk_0x1DC15D899E01E6B0(iVar6, "team3");
		iVar27 = unk_0x1DC15D899E01E6B0(iVar6, "spwn3");
		iVar28 = unk_0x1DC15D899E01E6B0(iVar6, "objt4");
		iVar29 = unk_0x1DC15D899E01E6B0(iVar6, "team4");
		iVar30 = unk_0x1DC15D899E01E6B0(iVar6, "spwn4");
		Global_1603097.f_28678 = unk_0xB872CF0BC8201FAA(iVar6, "nocr");
		iVar31 = unk_0x1DC15D899E01E6B0(iVar6, "crgdm");
		iVar32 = unk_0x1DC15D899E01E6B0(iVar6, "liv");
		iVar33 = unk_0x1DC15D899E01E6B0(iVar6, "modps");
		iVar34 = unk_0x1DC15D899E01E6B0(iVar6, "colc");
		iVar35 = unk_0x1DC15D899E01E6B0(iVar6, "col2");
		Global_1603097.f_33252 = unk_0xB872CF0BC8201FAA(iVar6, "burst");
		iVar36 = unk_0x1DC15D899E01E6B0(iVar6, "hlth");
		iVar37 = unk_0x1DC15D899E01E6B0(iVar6, "enghp");
		iVar38 = unk_0x1DC15D899E01E6B0(iVar6, "ptrhp");
		iVar39 = unk_0x1DC15D899E01E6B0(iVar6, "bdyhp");
		iVar40 = unk_0x1DC15D899E01E6B0(iVar6, "drbs");
		iVar41 = unk_0x1DC15D899E01E6B0(iVar6, "vbs2");
		iVar42 = unk_0x1DC15D899E01E6B0(iVar6, "vbs3");
		iVar43 = unk_0x1DC15D899E01E6B0(iVar6, "vbs4");
		iVar44 = unk_0x1DC15D899E01E6B0(iVar6, "vebs");
		iVar45 = unk_0x1DC15D899E01E6B0(iVar6, "vehct");
		iVar47 = unk_0x1DC15D899E01E6B0(iVar6, "vhcra");
		iVar46 = unk_0x1DC15D899E01E6B0(iVar6, "vehcr");
		iVar48 = unk_0x1DC15D899E01E6B0(iVar6, "vehbc");
		iVar49 = unk_0x1DC15D899E01E6B0(iVar6, "vehbr");
		iVar50 = unk_0x1DC15D899E01E6B0(iVar6, "vspdl");
		iVar51 = unk_0x1DC15D899E01E6B0(iVar6, "vsgr");
		iVar52 = unk_0x1DC15D899E01E6B0(iVar6, "vcnm");
		iVar53 = unk_0x1DC15D899E01E6B0(iVar6, "vehap");
		iVar54 = unk_0x1DC15D899E01E6B0(iVar6, "vehat");
		iVar55 = unk_0x1DC15D899E01E6B0(iVar6, "vehdu");
		iVar56 = unk_0x1DC15D899E01E6B0(iVar6, "vldt");
		iVar57 = unk_0x1DC15D899E01E6B0(iVar6, "vldr");
		iVar58 = unk_0x1DC15D899E01E6B0(iVar6, "cutsc");
		iVar59 = unk_0x1DC15D899E01E6B0(iVar6, "cutsh");
		iVar63 = unk_0x1DC15D899E01E6B0(iVar6, "nmpass");
		iVar64 = unk_0x1DC15D899E01E6B0(iVar6, "nmfail");
		iVar60 = unk_0x1DC15D899E01E6B0(iVar6, "vmcp");
		iVar61 = unk_0x1DC15D899E01E6B0(iVar6, "vmcf");
		iVar62 = unk_0x1DC15D899E01E6B0(iVar6, "gotor");
		iVar107 = unk_0x1DC15D899E01E6B0(iVar6, "vphrang");
		iVar108 = unk_0x1DC15D899E01E6B0(iVar6, "vdrpovr");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar100[iVar1] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar103[iVar1] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			iVar1++;
		}
		iVar106 = unk_0x1DC15D899E01E6B0(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1603097.f_19 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar65[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar70[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar75[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar80[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar85[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar90[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar95[iVar3] = unk_0x1DC15D899E01E6B0(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_33249 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1603097.f_33253[iVar0 /*113*/] = { unk_0x09B0244538FE11FC(iVar8, iVar0) };
			Global_1603097.f_33253[iVar0 /*113*/].f_3 = unk_0x7017D324A3C28EF0(iVar9, iVar0);
			iVar2 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
			Global_1603097.f_33253[iVar0 /*113*/].f_12 = iVar2;
			if (!func_82())
			{
				if (!unk_0xF2CB2B0638FEF678(Global_1603097.f_33253[iVar0 /*113*/].f_12))
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_12 = joaat("baller");
				}
			}
			Global_1603097.f_33253[iVar0 /*113*/].f_23 = unk_0x2E23E36C99C8BEE6(iVar17, iVar0);
			Global_1603097.f_33253[iVar0 /*113*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar18, iVar0);
			if (func_83())
			{
				if (((unk_0x7C2817C35F97E35E(iVar10, iVar0) == 3 && unk_0x7C2817C35F97E35E(iVar11, iVar0) == 3) && unk_0x7C2817C35F97E35E(iVar12, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar13, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_4 = unk_0x7017D324A3C28EF0(iVar10, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_5 = unk_0x7017D324A3C28EF0(iVar11, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_6 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar13, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_4 = 100f;
					Global_1603097.f_33253[iVar0 /*113*/].f_5 = 0f;
					Global_1603097.f_33253[iVar0 /*113*/].f_6 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_7 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar14, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar15, iVar0) == 3)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_8 = { unk_0x09B0244538FE11FC(iVar14, iVar0) };
					Global_1603097.f_33253[iVar0 /*113*/].f_11 = unk_0x7017D324A3C28EF0(iVar15, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_8 = { 0f, 0f, 0f };
					Global_1603097.f_33253[iVar0 /*113*/].f_11 = 0f;
				}
				Global_1603097.f_33253[iVar0 /*113*/].f_35 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
				Global_1603097.f_33253[iVar0 /*113*/].f_36 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
				Global_1603097.f_33253[iVar0 /*113*/].f_37 = unk_0x2E23E36C99C8BEE6(iVar21, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar22, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_63 = unk_0x2E23E36C99C8BEE6(iVar22, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_60 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_66 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_64 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_61 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_67 = unk_0x2E23E36C99C8BEE6(iVar27, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_65 = unk_0x2E23E36C99C8BEE6(iVar28, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_62 = unk_0x2E23E36C99C8BEE6(iVar29, iVar0);
					Global_1603097.f_33253[iVar0 /*113*/].f_68 = unk_0x2E23E36C99C8BEE6(iVar30, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_63 = -1;
					Global_1603097.f_33253[iVar0 /*113*/].f_60 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_66 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_64 = -1;
					Global_1603097.f_33253[iVar0 /*113*/].f_61 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_67 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_65 = -1;
					Global_1603097.f_33253[iVar0 /*113*/].f_62 = 0;
					Global_1603097.f_33253[iVar0 /*113*/].f_68 = 0;
				}
				Global_1603097.f_33253[iVar0 /*113*/].f_26 = unk_0x2E23E36C99C8BEE6(iVar32, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar33, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar33, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_27 = -1;
				}
				Global_1603097.f_33253[iVar0 /*113*/].f_29 = unk_0x2E23E36C99C8BEE6(iVar36, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar37, iVar0) == 3 && unk_0x7017D324A3C28EF0(iVar37, iVar0) > 0f)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_30 = unk_0x7017D324A3C28EF0(iVar37, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_30 = 1001f;
				}
				if (unk_0x7C2817C35F97E35E(iVar31, iVar0) == 3 && unk_0x7017D324A3C28EF0(iVar31, iVar0) >= 0f)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_33 = unk_0x7017D324A3C28EF0(iVar31, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_33 = 1.5f;
				}
				if (unk_0x7C2817C35F97E35E(iVar38, iVar0) == 3 && unk_0x7017D324A3C28EF0(iVar38, iVar0) > 0f)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_31 = unk_0x7017D324A3C28EF0(iVar38, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_31 = 1001f;
				}
				if (unk_0x7C2817C35F97E35E(iVar39, iVar0) == 3 && unk_0x7017D324A3C28EF0(iVar39, iVar0) > 0f)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_32 = unk_0x7017D324A3C28EF0(iVar39, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_32 = 1001f;
				}
				Global_1603097.f_33253[iVar0 /*113*/].f_39 = unk_0x2E23E36C99C8BEE6(iVar40, iVar0);
				Global_1603097.f_33253[iVar0 /*113*/].f_40 = unk_0x2E23E36C99C8BEE6(iVar41, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar42, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_41 = unk_0x2E23E36C99C8BEE6(iVar42, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_41 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar43, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_42 = unk_0x2E23E36C99C8BEE6(iVar43, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_42 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar34, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_25 = unk_0x2E23E36C99C8BEE6(iVar34, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_25 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar35, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_24 = unk_0x2E23E36C99C8BEE6(iVar35, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_24 = -1;
				}
				Global_1603097.f_33253[iVar0 /*113*/].f_97 = unk_0x2E23E36C99C8BEE6(iVar44, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar46, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_56 = unk_0x2E23E36C99C8BEE6(iVar46, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_56 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar45, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_57 = unk_0x2E23E36C99C8BEE6(iVar45, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_57 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar47, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_58 = unk_0x2E23E36C99C8BEE6(iVar47, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_58 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar50, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_59 = unk_0x2E23E36C99C8BEE6(iVar50, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_59 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar51, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_38 = unk_0x2E23E36C99C8BEE6(iVar51, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_38 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar52, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_69 = unk_0x2E23E36C99C8BEE6(iVar52, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_69 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar60, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_87 = unk_0x2E23E36C99C8BEE6(iVar60, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_87 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar61, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_88 = unk_0x2E23E36C99C8BEE6(iVar61, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_88 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar53, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_70 = unk_0x2E23E36C99C8BEE6(iVar53, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_70 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar54, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_71 = unk_0x2E23E36C99C8BEE6(iVar54, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_71 = 1;
				}
				if (unk_0x7C2817C35F97E35E(iVar55, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_84 = unk_0x2E23E36C99C8BEE6(iVar55, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_84 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar56, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_85 = unk_0x2E23E36C99C8BEE6(iVar56, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_85 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar57, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_86 = unk_0x2E23E36C99C8BEE6(iVar57, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_86 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar48, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_44 = unk_0x2E23E36C99C8BEE6(iVar48, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_44 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar49, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_45 = unk_0x2E23E36C99C8BEE6(iVar49, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_45 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar62, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_34 = unk_0x2E23E36C99C8BEE6(iVar62, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_34 = 0;
				}
				if (Global_1603097.f_2 != 6 && unk_0x7C2817C35F97E35E(iVar58, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_95 = unk_0x2E23E36C99C8BEE6(iVar58, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_95 = -1;
				}
				if (Global_1603097.f_2 != 6 && unk_0x7C2817C35F97E35E(iVar59, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_96 = unk_0x2E23E36C99C8BEE6(iVar59, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_96 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar63, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_82 = unk_0x2E23E36C99C8BEE6(iVar63, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_82 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar64, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_83 = unk_0x2E23E36C99C8BEE6(iVar64, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_83 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x7C2817C35F97E35E(uVar100[iVar1], iVar0) == 5)
					{
						Global_1603097.f_33253[iVar0 /*113*/].f_99[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar100[iVar1], iVar0) };
					}
					else
					{
						Global_1603097.f_33253[iVar0 /*113*/].f_99[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x7C2817C35F97E35E(uVar103[iVar1], iVar0) == 3)
					{
						Global_1603097.f_33253[iVar0 /*113*/].f_106[iVar1] = unk_0x7017D324A3C28EF0(uVar103[iVar1], iVar0);
					}
					else
					{
						Global_1603097.f_33253[iVar0 /*113*/].f_106[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x7C2817C35F97E35E(iVar106, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_98 = unk_0x2E23E36C99C8BEE6(iVar106, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_98 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar107, iVar0) == 2)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_109 = unk_0x2E23E36C99C8BEE6(iVar107, iVar0);
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_109 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar108, iVar0) == 5)
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_110 = { unk_0x09B0244538FE11FC(iVar108, iVar0) };
				}
				else
				{
					Global_1603097.f_33253[iVar0 /*113*/].f_110 = { 0f, 0f, 0f };
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1603097.f_19 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1603097.f_33253[iVar0 /*113*/].f_13[iVar3] = unk_0x2E23E36C99C8BEE6(uVar65[iVar3], iVar0);
						Global_1603097.f_33253[iVar0 /*113*/].f_18[iVar3] = unk_0x2E23E36C99C8BEE6(uVar70[iVar3], iVar0);
						if (Global_1603097.f_33253[iVar0 /*113*/].f_18[iVar3] == -1)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_18[iVar3] = 99999;
						}
						if (unk_0x7C2817C35F97E35E(uVar75[iVar3], iVar0) == 2)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_89[iVar3] = unk_0x2E23E36C99C8BEE6(uVar75[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_89[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar80[iVar3], iVar0) == 2)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_72[iVar3] = unk_0x2E23E36C99C8BEE6(uVar80[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_72[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar85[iVar3], iVar0) == 2)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_77[iVar3] = unk_0x2E23E36C99C8BEE6(uVar85[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_77[iVar3] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar90[iVar3], iVar0) == 2)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_46[iVar3] = unk_0x2E23E36C99C8BEE6(uVar90[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_46[iVar3] = -1;
						}
						if (unk_0x7C2817C35F97E35E(uVar95[iVar3], iVar0) == 2)
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_51[iVar3] = unk_0x2E23E36C99C8BEE6(uVar95[iVar3], iVar0);
						}
						else
						{
							Global_1603097.f_33253[iVar0 /*113*/].f_51[iVar3] = -1;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_134(int iParam0)
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
	
	iVar5 = unk_0x5265B2D07FA93601(iParam0, "weap");
	Global_1603097.f_32424 = unk_0xB872CF0BC8201FAA(iVar5, "no");
	if (Global_1603097 == 0)
	{
		if (Global_1603097.f_32424 > 40)
		{
			Global_1603097.f_32424 = 40;
		}
	}
	else if (Global_1603097.f_32424 > 40)
	{
		Global_1603097.f_32424 = 40;
	}
	Global_1603097.f_32426 = unk_0xB872CF0BC8201FAA(iVar5, "time");
	Global_1603097.f_32427 = unk_0xB872CF0BC8201FAA(iVar5, "pal");
	Global_1603097.f_42 = unk_0xB872CF0BC8201FAA(iVar5, "blip");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar5, "loc");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar5, "head");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar5, "type");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar5, "sub");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar5, "bits");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar5, "clip");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar5, "brest1");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar5, "brest2");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar5, "brest3");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar5, "brest4");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_32424 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1603097.f_32428[iVar0 /*20*/] = { unk_0x09B0244538FE11FC(iVar6, iVar0) };
			Global_1603097.f_32428[iVar0 /*20*/].f_3 = unk_0x7017D324A3C28EF0(iVar7, iVar0);
			iVar1 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
			Global_1603097.f_32428[iVar0 /*20*/].f_12 = iVar1;
			if (!func_135(Global_1603097.f_32428[iVar0 /*20*/].f_12))
			{
				if (Global_1603097.f_32428[iVar0 /*20*/].f_12 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1603097.f_32428[iVar0 /*20*/].f_12 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1603097.f_32428[iVar0 /*20*/].f_12 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1603097.f_32428[iVar0 /*20*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
			Global_1603097.f_32428[iVar0 /*20*/].f_6 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
			Global_1603097.f_32428[iVar0 /*20*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
			if (unk_0x7C2817C35F97E35E(iVar12, iVar0) == 1)
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[0] = unk_0x66112115DFF4E68C(iVar12, iVar0);
			}
			else
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[0] = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar13, iVar0) == 1)
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[1] = unk_0x66112115DFF4E68C(iVar13, iVar0);
			}
			else
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar14, iVar0) == 1)
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[2] = unk_0x66112115DFF4E68C(iVar14, iVar0);
			}
			else
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[2] = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar15, iVar0) == 1)
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[3] = unk_0x66112115DFF4E68C(iVar15, iVar0);
			}
			else
			{
				Global_1603097.f_32428[iVar0 /*20*/].f_7[3] = 0;
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar16 = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x7C2817C35F97E35E(iVar16, iVar2) == 2)
				{
					Global_1603097.f_32428[iVar0 /*20*/].f_13[iVar2] = unk_0x2E23E36C99C8BEE6(iVar16, iVar2);
				}
				else
				{
					Global_1603097.f_32428[iVar0 /*20*/].f_13[iVar2] = 0;
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

void func_136(int iParam0)
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
	
	iVar5 = unk_0x5265B2D07FA93601(iParam0, "obj");
	Global_1603097.f_26523 = unk_0xB872CF0BC8201FAA(iVar5, "no");
	Global_1603097.f_26524 = unk_0xB872CF0BC8201FAA(iVar5, "pal");
	Global_1603097.f_26525 = unk_0xB872CF0BC8201FAA(iVar5, "rtm");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar5, "loc");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar5, "head");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar5, "model");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar5, "ped");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar5, "rsp");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar5, "rot");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar5, "cont");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar5, "valu");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar5, "ammoforwep");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar5, "cpup");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar5, "cpupr");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar5, "cpupt");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar5, "bits");
	if (func_83())
	{
		iVar8 = unk_0x1DC15D899E01E6B0(iVar5, "obrr");
		iVar9 = unk_0x1DC15D899E01E6B0(iVar5, "obrmr");
		iVar10 = unk_0x1DC15D899E01E6B0(iVar5, "osnt");
		iVar11 = unk_0x1DC15D899E01E6B0(iVar5, "osnei");
		iVar12 = unk_0x1DC15D899E01E6B0(iVar5, "o2sp");
		iVar13 = unk_0x1DC15D899E01E6B0(iVar5, "o2sh");
		iVar25 = unk_0x1DC15D899E01E6B0(iVar5, "mgbs");
		iVar26 = unk_0x1DC15D899E01E6B0(iVar5, "objct");
		iVar27 = unk_0x1DC15D899E01E6B0(iVar5, "team");
		iVar28 = unk_0x1DC15D899E01E6B0(iVar5, "spwn");
		iVar29 = unk_0x1DC15D899E01E6B0(iVar5, "objct2");
		iVar30 = unk_0x1DC15D899E01E6B0(iVar5, "team2");
		iVar31 = unk_0x1DC15D899E01E6B0(iVar5, "spwn2");
		iVar32 = unk_0x1DC15D899E01E6B0(iVar5, "objct3");
		iVar33 = unk_0x1DC15D899E01E6B0(iVar5, "team3");
		iVar34 = unk_0x1DC15D899E01E6B0(iVar5, "spwn3");
		iVar35 = unk_0x1DC15D899E01E6B0(iVar5, "objct4");
		iVar36 = unk_0x1DC15D899E01E6B0(iVar5, "team4");
		iVar37 = unk_0x1DC15D899E01E6B0(iVar5, "spwn4");
		iVar38 = unk_0x1DC15D899E01E6B0(iVar5, "hlt");
		iVar39 = unk_0x1DC15D899E01E6B0(iVar5, "obb");
		iVar40 = unk_0x1DC15D899E01E6B0(iVar5, "obbc");
		iVar41 = unk_0x1DC15D899E01E6B0(iVar5, "objclt");
		iVar42 = unk_0x1DC15D899E01E6B0(iVar5, "objcr");
		iVar43 = unk_0x1DC15D899E01E6B0(iVar5, "obcra");
		iVar44 = unk_0x1DC15D899E01E6B0(iVar5, "ospdl");
		iVar45 = unk_0x1DC15D899E01E6B0(iVar5, "osgr");
		iVar46 = unk_0x1DC15D899E01E6B0(iVar5, "objcnm");
		iVar47 = unk_0x1DC15D899E01E6B0(iVar5, "objap");
		iVar48 = unk_0x1DC15D899E01E6B0(iVar5, "objapt");
		iVar49 = unk_0x1DC15D899E01E6B0(iVar5, "obint");
		iVar50 = unk_0x1DC15D899E01E6B0(iVar5, "obrom");
		iVar51 = unk_0x1DC15D899E01E6B0(iVar5, "inco");
		iVar52 = unk_0x1DC15D899E01E6B0(iVar5, "inhsh");
		iVar53 = unk_0x1DC15D899E01E6B0(iVar5, "vehpu");
		iVar54 = unk_0x1DC15D899E01E6B0(iVar5, "airpu");
		iVar57 = unk_0x1DC15D899E01E6B0(iVar5, "gotor");
		iVar58 = unk_0x1DC15D899E01E6B0(iVar5, "nmpass");
		iVar59 = unk_0x1DC15D899E01E6B0(iVar5, "nmfail");
		iVar55 = unk_0x1DC15D899E01E6B0(iVar5, "omcp");
		iVar56 = unk_0x1DC15D899E01E6B0(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1603097.f_19 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar60[iVar2] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar65[iVar2] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar70[iVar2] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar75[iVar2] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_26523 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1603097.f_26526[iVar0 /*87*/] = { unk_0x09B0244538FE11FC(iVar6, iVar0) };
			Global_1603097.f_26526[iVar0 /*87*/].f_3 = unk_0x7017D324A3C28EF0(iVar7, iVar0);
			iVar1 = unk_0x2E23E36C99C8BEE6(iVar14, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_15 = iVar1;
			if (Global_1603097.f_26526[iVar0 /*87*/].f_15 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1603097.f_26526[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0xF2CB2B0638FEF678(Global_1603097.f_26526[iVar0 /*87*/].f_15))
			{
				Global_1603097.f_26526[iVar0 /*87*/].f_15 = joaat("prop_drug_package");
			}
			if (Global_1603097.f_26526[iVar0 /*87*/].f_15 == joaat("prop_cctv_cam_06a"))
			{
				Global_1603097.f_26526[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1603097.f_26526[iVar0 /*87*/].f_15 == joaat("prop_cctv_cam_07a"))
			{
				Global_1603097.f_26526[iVar0 /*87*/].f_15 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1603097.f_26526[iVar0 /*87*/].f_26 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_4 = { unk_0x09B0244538FE11FC(iVar17, iVar0) };
			Global_1603097.f_26526[iVar0 /*87*/].f_30 = unk_0x2E23E36C99C8BEE6(iVar15, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_43 = unk_0x2E23E36C99C8BEE6(iVar18, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_44 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_45 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_46 = unk_0x2E23E36C99C8BEE6(iVar21, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_47 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_48 = unk_0x2E23E36C99C8BEE6(iVar22, iVar0);
			Global_1603097.f_26526[iVar0 /*87*/].f_41 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
			if (unk_0x7C2817C35F97E35E(iVar54, iVar0) == 2)
			{
				if (unk_0x2E23E36C99C8BEE6(iVar54, iVar0) == 1)
				{
					if (!unk_0x94E72F17611BCD3C(Global_1603097.f_26526[iVar0 /*87*/].f_41, 4))
					{
						unk_0xEDB9A377CD8B7F03(&(Global_1603097.f_26526[iVar0 /*87*/].f_41), 4);
					}
				}
			}
			if (func_83())
			{
				if (((unk_0x7C2817C35F97E35E(iVar8, iVar0) == 3 && unk_0x7C2817C35F97E35E(iVar9, iVar0) == 3) && unk_0x7C2817C35F97E35E(iVar10, iVar0) == 2) && unk_0x7C2817C35F97E35E(iVar11, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_7 = unk_0x7017D324A3C28EF0(iVar8, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_8 = unk_0x7017D324A3C28EF0(iVar9, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_10 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_7 = 50f;
					Global_1603097.f_26526[iVar0 /*87*/].f_8 = 0f;
					Global_1603097.f_26526[iVar0 /*87*/].f_9 = 0;
					Global_1603097.f_26526[iVar0 /*87*/].f_10 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar12, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar13, iVar0) == 3)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_11 = { unk_0x09B0244538FE11FC(iVar12, iVar0) };
					Global_1603097.f_26526[iVar0 /*87*/].f_14 = unk_0x7017D324A3C28EF0(iVar13, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_11 = { 0f, 0f, 0f };
					Global_1603097.f_26526[iVar0 /*87*/].f_14 = 0f;
				}
				Global_1603097.f_26526[iVar0 /*87*/].f_42 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
				Global_1603097.f_26526[iVar0 /*87*/].f_31 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
				Global_1603097.f_26526[iVar0 /*87*/].f_32 = unk_0x2E23E36C99C8BEE6(iVar27, iVar0);
				Global_1603097.f_26526[iVar0 /*87*/].f_33 = unk_0x2E23E36C99C8BEE6(iVar28, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar29, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_57 = unk_0x2E23E36C99C8BEE6(iVar29, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_54 = unk_0x2E23E36C99C8BEE6(iVar30, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_60 = unk_0x2E23E36C99C8BEE6(iVar31, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_58 = unk_0x2E23E36C99C8BEE6(iVar32, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_55 = unk_0x2E23E36C99C8BEE6(iVar33, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_61 = unk_0x2E23E36C99C8BEE6(iVar34, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_59 = unk_0x2E23E36C99C8BEE6(iVar35, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_56 = unk_0x2E23E36C99C8BEE6(iVar36, iVar0);
					Global_1603097.f_26526[iVar0 /*87*/].f_62 = unk_0x2E23E36C99C8BEE6(iVar37, iVar0);
				}
				Global_1603097.f_26526[iVar0 /*87*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar38, iVar0);
				Global_1603097.f_26526[iVar0 /*87*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar39, iVar0);
				Global_1603097.f_26526[iVar0 /*87*/].f_35 = unk_0x2E23E36C99C8BEE6(iVar53, iVar0);
				if (unk_0x7C2817C35F97E35E(iVar40, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_29 = unk_0x2E23E36C99C8BEE6(iVar40, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_29 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar42, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_49 = unk_0x2E23E36C99C8BEE6(iVar42, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_49 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar41, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_50 = unk_0x2E23E36C99C8BEE6(iVar41, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_50 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar43, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_51 = unk_0x2E23E36C99C8BEE6(iVar43, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_51 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar44, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_53 = unk_0x2E23E36C99C8BEE6(iVar44, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_53 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar45, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_34 = unk_0x2E23E36C99C8BEE6(iVar45, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_34 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar46, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_78 = unk_0x2E23E36C99C8BEE6(iVar46, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_78 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar55, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_75 = unk_0x2E23E36C99C8BEE6(iVar55, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_75 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar56, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_76 = unk_0x2E23E36C99C8BEE6(iVar56, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_76 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar47, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_79 = unk_0x2E23E36C99C8BEE6(iVar47, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_79 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar48, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_80 = unk_0x2E23E36C99C8BEE6(iVar48, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_80 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar49, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_81 = unk_0x2E23E36C99C8BEE6(iVar49, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_81 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar50, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_82 = unk_0x2E23E36C99C8BEE6(iVar50, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_82 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar51, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar52, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_83 = { unk_0x09B0244538FE11FC(iVar51, iVar0) };
					Global_1603097.f_26526[iVar0 /*87*/].f_86 = unk_0x2E23E36C99C8BEE6(iVar52, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_83 = { 0f, 0f, 0f };
					Global_1603097.f_26526[iVar0 /*87*/].f_86 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar57, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_52 = unk_0x2E23E36C99C8BEE6(iVar57, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_52 = 0;
				}
				if (unk_0x7C2817C35F97E35E(iVar58, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_73 = unk_0x2E23E36C99C8BEE6(iVar58, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_73 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar59, iVar0) == 2)
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_74 = unk_0x2E23E36C99C8BEE6(iVar59, iVar0);
				}
				else
				{
					Global_1603097.f_26526[iVar0 /*87*/].f_74 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1603097.f_19 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1603097.f_26526[iVar0 /*87*/].f_16[iVar2] = unk_0x2E23E36C99C8BEE6(uVar60[iVar2], iVar0);
						Global_1603097.f_26526[iVar0 /*87*/].f_21[iVar2] = unk_0x2E23E36C99C8BEE6(uVar65[iVar2], iVar0);
						if (Global_1603097.f_26526[iVar0 /*87*/].f_21[iVar2] == -1)
						{
							Global_1603097.f_26526[iVar0 /*87*/].f_21[iVar2] = 99999;
						}
						if (unk_0x7C2817C35F97E35E(uVar70[iVar2], iVar0) == 2)
						{
							Global_1603097.f_26526[iVar0 /*87*/].f_63[iVar2] = unk_0x2E23E36C99C8BEE6(uVar70[iVar2], iVar0);
						}
						else
						{
							Global_1603097.f_26526[iVar0 /*87*/].f_63[iVar2] = 0;
						}
						if (unk_0x7C2817C35F97E35E(uVar75[iVar2], iVar0) == 2)
						{
							Global_1603097.f_26526[iVar0 /*87*/].f_68[iVar2] = unk_0x2E23E36C99C8BEE6(uVar75[iVar2], iVar0);
						}
						else
						{
							Global_1603097.f_26526[iVar0 /*87*/].f_68[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_137(int iParam0)
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
	
	iVar6 = unk_0x5265B2D07FA93601(iParam0, "zone");
	Global_1603097.f_57469 = unk_0xB872CF0BC8201FAA(iVar6, "no");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar6, "vto");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar6, "vld");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar6, "zntp");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar6, "znbs");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar6, "znwd");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar6, "znwvd");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar6, "znatp");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar6, "znwid");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x1DC15D899E01E6B0(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x1DC15D899E01E6B0(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1603097.f_57469 > 10)
	{
		Global_1603097.f_57469 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_57469 - 1))
	{
		Global_1603097.f_57492[iVar0 /*26*/][0 /*3*/] = { unk_0x09B0244538FE11FC(iVar7, iVar0) };
		Global_1603097.f_57492[iVar0 /*26*/][1 /*3*/] = { unk_0x09B0244538FE11FC(iVar8, iVar0) };
		Global_1603097.f_57492[iVar0 /*26*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x7C2817C35F97E35E(uVar10[iVar1], iVar0) == 2)
			{
				Global_1603097.f_57492[iVar0 /*26*/].f_10[iVar1] = unk_0x2E23E36C99C8BEE6(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1603097.f_57492[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x7C2817C35F97E35E(uVar15[iVar1], iVar0) == 2)
			{
				Global_1603097.f_57492[iVar0 /*26*/].f_15[iVar1] = unk_0x2E23E36C99C8BEE6(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1603097.f_57492[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x7C2817C35F97E35E(iVar20, iVar0) == 2)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_20 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar21, iVar0) == 3)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_22 = unk_0x7017D324A3C28EF0(iVar21, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar22, iVar0) == 3)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_23 = unk_0x7017D324A3C28EF0(iVar22, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar23, iVar0) == 2)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_8 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar24, iVar0) == 3)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_7 = unk_0x7017D324A3C28EF0(iVar24, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar25, iVar0) == 2)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_21 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
		}
		else
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_21 = 0;
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
	int iVar4;
	
	iVar1 = unk_0x5265B2D07FA93601(iParam0, "usj");
	Global_1603097.f_56844 = unk_0xB872CF0BC8201FAA(iVar1, "no");
	iVar2 = unk_0x1DC15D899E01E6B0(iVar1, "vto");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar1, "vld");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar1, "vcm");
	if (Global_1603097.f_56844 > 10)
	{
		Global_1603097.f_56844 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_56844 - 1))
	{
		Global_1603097.f_56845[iVar0 /*9*/] = { unk_0x09B0244538FE11FC(iVar2, iVar0) };
		Global_1603097.f_56845[iVar0 /*9*/].f_3 = { unk_0x09B0244538FE11FC(iVar3, iVar0) };
		Global_1603097.f_56845[iVar0 /*9*/].f_6 = { unk_0x09B0244538FE11FC(iVar4, iVar0) };
		iVar0++;
	}
}

void func_139(int iParam0)
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
	
	if (unk_0x5265B2D07FA93601(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x5265B2D07FA93601(iParam0, "ddtrig");
	Global_1603097.f_61209 = unk_0xB872CF0BC8201FAA(iVar4, "no");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar4, "id");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar4, "fid");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar4, "rule");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar4, "team");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar4, "pos");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar4, "rad");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar4, "tdel");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar4, "tpnt");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar4, "crkls");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar4, "fcsped");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar4, "prty");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar4, "dbs");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar4, "dbs2");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar4, "dspk");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar4, "dspk2");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar4, "panim");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar4, "blok");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar4, "root");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar4, "mgveh");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar4, "vehtg");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar4, "prerq");
	iVar26 = unk_0x1DC15D899E01E6B0(iVar4, "vehdm");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar2, "trsg", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar32[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1603097.f_61209 > 69)
	{
		Global_1603097.f_61209 = 69;
	}
	if (unk_0x7C2817C35F97E35E(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1603097.f_61209 - 1))
		{
			if (unk_0x7C2817C35F97E35E(iVar8, iVar0) == 2)
			{
				func_140(&(Global_1603097.f_57810[iVar0 /*45*/]), iVar0);
				if (iVar6 != 0 && unk_0x7C2817C35F97E35E(iVar6, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_1 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/] = unk_0x2E23E36C99C8BEE6(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_2 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_3 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_5 = { unk_0x09B0244538FE11FC(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_8 = unk_0x7017D324A3C28EF0(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_11 = unk_0x2E23E36C99C8BEE6(iVar12, iVar0);
				}
				if (iVar15 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_12 = unk_0x2E23E36C99C8BEE6(iVar15, iVar0);
				}
				if (iVar16 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar16, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_10 = unk_0x2E23E36C99C8BEE6(iVar17, iVar0);
				}
				if (iVar23 != 0 && unk_0x7C2817C35F97E35E(iVar23, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_16 = unk_0x2E23E36C99C8BEE6(iVar23, iVar0);
				}
				if (iVar13 != 0 && unk_0x7C2817C35F97E35E(iVar13, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_20 = unk_0x2E23E36C99C8BEE6(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x7C2817C35F97E35E(iVar14, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_21 = unk_0x2E23E36C99C8BEE6(iVar14, iVar0);
				}
				if (iVar18 != 0 && unk_0x7C2817C35F97E35E(iVar18, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_13 = unk_0x2E23E36C99C8BEE6(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x7C2817C35F97E35E(iVar19, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_14 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x7C2817C35F97E35E(iVar20, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_15 = unk_0x2E23E36C99C8BEE6(iVar20, iVar0);
				}
				if (iVar24 != 0 && unk_0x7C2817C35F97E35E(iVar24, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_17 = unk_0x2E23E36C99C8BEE6(iVar24, iVar0);
				}
				if (iVar25 != 0 && unk_0x7C2817C35F97E35E(iVar25, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_18 = unk_0x2E23E36C99C8BEE6(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x7C2817C35F97E35E(iVar26, iVar0) == 2)
				{
					Global_1603097.f_57810[iVar0 /*45*/].f_19 = unk_0x2E23E36C99C8BEE6(iVar26, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar27[iVar1] != 0 && unk_0x7C2817C35F97E35E(uVar27[iVar1], iVar0) == 2)
					{
						Global_1603097.f_57810[iVar0 /*45*/].f_22[iVar1] = unk_0x2E23E36C99C8BEE6(uVar27[iVar1], iVar0);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= 4)
				{
					if (unk_0x7C2817C35F97E35E(uVar32[iVar1], iVar0) == 2)
					{
						Global_1603097.f_57810[iVar0 /*45*/].f_39[iVar1] = unk_0x2E23E36C99C8BEE6(uVar32[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar21 != 0)
				{
					StringCopy(&(Global_1603097.f_57810[iVar0 /*45*/].f_27), unk_0xE54D28595F926D0B(iVar21, iVar0), 24);
				}
				if (iVar22 != 0)
				{
					StringCopy(&(Global_1603097.f_57810[iVar0 /*45*/].f_33), unk_0xE54D28595F926D0B(iVar22, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1603097.f_61209 - 1))
		{
			Global_1603097.f_57810[iVar0 /*45*/] = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_2 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_3 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_5 = { 0f, 0f, 0f };
			Global_1603097.f_57810[iVar0 /*45*/].f_8 = 3f;
			Global_1603097.f_57810[iVar0 /*45*/].f_4 = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_11 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_20 = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_12 = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_9 = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_10 = 0;
			Global_1603097.f_57810[iVar0 /*45*/].f_13 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_14 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_15 = 0;
			StringCopy(&(Global_1603097.f_57810[iVar0 /*45*/].f_27), "", 24);
			StringCopy(&(Global_1603097.f_57810[iVar0 /*45*/].f_33), "", 24);
			Global_1603097.f_57810[iVar0 /*45*/].f_16 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_17 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_18 = -1;
			Global_1603097.f_57810[iVar0 /*45*/].f_19 = 0;
			iVar0++;
		}
	}
	if (unk_0x6983B0253A3F4D2A(iParam0, "dtmp") == 2)
	{
		Global_1603097.f_61205[0] = unk_0xB872CF0BC8201FAA(iParam0, "dtmp");
	}
	else
	{
		Global_1603097.f_61205[0] = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iParam0, "dtmp2") == 2)
	{
		Global_1603097.f_61205[1] = unk_0xB872CF0BC8201FAA(iParam0, "dtmp2");
	}
	else
	{
		Global_1603097.f_61205[1] = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iParam0, "dtmp3") == 2)
	{
		Global_1603097.f_61205[2] = unk_0xB872CF0BC8201FAA(iParam0, "dtmp3");
	}
	else
	{
		Global_1603097.f_61205[2] = 0;
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
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		uParam0->f_39[iVar0] = 0;
		iVar0++;
	}
	if (iParam1 != -1)
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_61205[(iParam1 / 32)]), (iParam1 % 32));
	}
}

void func_141(int iParam0)
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
	
	iVar2 = unk_0x5265B2D07FA93601(iParam0, "race");
	Global_1603097.f_26135 = unk_0xB872CF0BC8201FAA(iVar2, "chp");
	iVar3 = (Global_1603097.f_26135 - 1);
	Global_1603097.f_26136 = unk_0xB872CF0BC8201FAA(iVar2, "lap");
	Global_1603097.f_26137 = unk_0xB872CF0BC8201FAA(iVar2, "type");
	if (func_68() == 2)
	{
		if (Global_1603097.f_26137 == 6)
		{
			Global_1603097.f_26137 = 0;
		}
		else if (Global_1603097.f_26137 == 7)
		{
			Global_1603097.f_26137 = 1;
		}
	}
	Global_1603097.f_26138 = unk_0xB872CF0BC8201FAA(iVar2, "gtar");
	Global_1603097.f_26464 = unk_0xC8D2B5D05633FD27(iVar2, "head");
	Global_1603097.f_26465 = unk_0xC8D2B5D05633FD27(iVar2, "lrgs");
	Global_1603097.f_26466 = unk_0xC8D2B5D05633FD27(iVar2, "udgs");
	Global_1603097.f_26467 = unk_0xC8D2B5D05633FD27(iVar2, "gw");
	Global_1603097.f_26468 = unk_0xC8D2B5D05633FD27(iVar2, "gl");
	Global_1603097.f_26469 = unk_0xB872CF0BC8201FAA(iVar2, "lanes");
	Global_1603097.f_22719 = { unk_0xC6C61B31E770F147(iVar2, "grid") };
	Global_1603097.f_26140 = unk_0xB872CF0BC8201FAA(iVar2, "icv");
	Global_1603097.f_26142 = unk_0xB872CF0BC8201FAA(iVar2, "tri1");
	Global_1603097.f_26143 = unk_0xB872CF0BC8201FAA(iVar2, "tri2");
	Global_1603097.f_26144 = unk_0xB872CF0BC8201FAA(iVar2, "clbs");
	Global_1603097.f_26463 = unk_0xB872CF0BC8201FAA(iVar2, "ptp");
	Global_1603097.f_26461 = unk_0xB872CF0BC8201FAA(iVar2, "strtg");
	Global_1603097.f_26462 = unk_0xB872CF0BC8201FAA(iVar2, "rcdam");
	Global_1603097.f_23918 = unk_0xC8D2B5D05633FD27(iVar2, "rdis");
	Global_1603097.f_26459 = unk_0xB872CF0BC8201FAA(iVar2, "gridty");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar2, "chh");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar2, "chs");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar2, "chl");
	uVar7 = unk_0x1DC15D899E01E6B0(iVar2, "rsp");
	if (Global_1603097.f_26137 == 8)
	{
		Global_1603097.f_26135 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_81(unk_0x09B0244538FE11FC(iVar6, iVar0)))
			{
				Global_1603097.f_26135++;
			}
			iVar0++;
		}
		iVar3 = Global_1603097.f_26135;
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1603097.f_26137 == 8)
			{
				iVar8 = func_142(iVar6, iVar8);
			}
			else
			{
				iVar8 = iVar0;
			}
			Global_1603097.f_23423[iVar0 /*3*/] = { unk_0x09B0244538FE11FC(iVar6, iVar8) };
			Global_1603097.f_23705[iVar0] = unk_0x7017D324A3C28EF0(iVar4, iVar8);
			if (unk_0x7C2817C35F97E35E(iVar5, iVar8) == 3)
			{
				Global_1603097.f_23847[iVar0] = unk_0x7017D324A3C28EF0(iVar5, iVar8);
			}
			else
			{
				Global_1603097.f_23847[iVar0] = 1f;
			}
			if (Global_1603097.f_23847[iVar0] < 1f)
			{
				Global_1603097.f_23847[iVar0] = 1f;
			}
			Global_1603097.f_23634[iVar0] = unk_0x66112115DFF4E68C(uVar7, iVar8);
			iVar8++;
		}
		iVar0++;
	}
	iVar9 = unk_0x1DC15D899E01E6B0(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_14 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
			Global_1603097.f_26472[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar10 = unk_0x1DC15D899E01E6B0(iVar2, "aveh");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
		Global_1603097.f_26145[iVar0] = iVar1;
		Global_1603097.f_26161[iVar0] = 0;
		Global_1603097.f_26161[iVar0] = unk_0x2E23E36C99C8BEE6(iVar11, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar17, "vspn", 8);
		StringIntConCat(&cVar17, iVar0, 8);
		uVar12[iVar0] = unk_0x1DC15D899E01E6B0(iVar2, &cVar17);
		iVar16 = 0;
		while (iVar16 <= iVar3)
		{
			Global_1603097.f_22722[iVar16 /*10*/][iVar0 /*3*/] = { unk_0x09B0244538FE11FC(uVar12[iVar0], iVar16) };
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
		if (!func_81(unk_0x09B0244538FE11FC(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x5265B2D07FA93601(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x5265B2D07FA93601(iParam0, "dhprop");
	Global_1603097.f_70824 = unk_0xB872CF0BC8201FAA(iVar1, "no");
	iVar2 = unk_0x1DC15D899E01E6B0(iVar1, "pos");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar1, "mn");
	if (Global_1603097.f_70824 > 25)
	{
		Global_1603097.f_70824 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_70824 - 1))
	{
		if (unk_0x7C2817C35F97E35E(iVar2, iVar0) == 5)
		{
			Global_1603097.f_70723[iVar0 /*4*/] = { unk_0x09B0244538FE11FC(iVar2, iVar0) };
			Global_1603097.f_70723[iVar0 /*4*/].f_3 = unk_0x2E23E36C99C8BEE6(iVar3, iVar0);
		}
		iVar0++;
	}
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
	
	if (unk_0x5265B2D07FA93601(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x5265B2D07FA93601(iParam0, "ddblip");
	Global_1603097.f_70722 = unk_0xB872CF0BC8201FAA(iVar1, "no");
	iVar2 = unk_0x1DC15D899E01E6B0(iVar1, "pos");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar1, "rule");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar1, "team");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar1, "type");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar1, "size");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar1, "veh");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar1, "clr");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar1, "bits");
	if (Global_1603097.f_70722 > 10)
	{
		Global_1603097.f_70722 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_70722 - 1))
	{
		if (unk_0x7C2817C35F97E35E(iVar2, iVar0) == 5)
		{
			Global_1603097.f_70621[iVar0 /*10*/] = { unk_0x09B0244538FE11FC(iVar2, iVar0) };
			Global_1603097.f_70621[iVar0 /*10*/].f_3 = unk_0x2E23E36C99C8BEE6(iVar3, iVar0);
			Global_1603097.f_70621[iVar0 /*10*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar4, iVar0);
			Global_1603097.f_70621[iVar0 /*10*/].f_8 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
			Global_1603097.f_70621[iVar0 /*10*/].f_9 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		}
		if (unk_0x7C2817C35F97E35E(iVar5, iVar0) == 2)
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_6 = unk_0x2E23E36C99C8BEE6(iVar5, iVar0);
		}
		else
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar6, iVar0) == 2)
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
		}
		else
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x7C2817C35F97E35E(iVar7, iVar0) == 2)
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		}
		else
		{
			Global_1603097.f_70621[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_145(int iParam0)
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
	
	if (unk_0x5265B2D07FA93601(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x5265B2D07FA93601(iParam0, "mocap");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar5, "name");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar5, "bits");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar5, "bits2");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar5, "timer");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar5, "rng");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar5, "ccp");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar5, "ccr");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar5, "ccs");
	iVar62 = unk_0x1DC15D899E01E6B0(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x7C2817C35F97E35E(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1603097.f_67662[iVar0 /*434*/]), unk_0xE54D28595F926D0B(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_67662[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x7C2817C35F97E35E(iVar7, iVar0) == 2)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_16 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar8, iVar0) == 2)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_17 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar62, iVar0) == 2)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_424 = unk_0x2E23E36C99C8BEE6(iVar62, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar9, iVar0) == 2)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_61 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar10, iVar0) == 2)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_62 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar11, iVar0) == 5)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_54 = { unk_0x09B0244538FE11FC(iVar11, iVar0) };
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x7C2817C35F97E35E(iVar12, iVar0) == 3)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_60 = unk_0x7017D324A3C28EF0(iVar12, iVar0);
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar13, iVar0) == 5)
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_57 = { unk_0x09B0244538FE11FC(iVar13, iVar0) };
		}
		else
		{
			Global_1603097.f_67662[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x1DC15D899E01E6B0(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x7C2817C35F97E35E(uVar14[iVar0], iVar1) == 5)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar20[iVar0], iVar1) == 5)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar26[iVar0], iVar1) == 3)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_44[iVar1] = unk_0x7017D324A3C28EF0(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar32[iVar0], iVar1) == 3)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_49[iVar1] = unk_0x7017D324A3C28EF0(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x7C2817C35F97E35E(uVar63[iVar0], iVar2) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_425[iVar2] = unk_0x2E23E36C99C8BEE6(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x7C2817C35F97E35E(uVar69[iVar0], iVar2) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_430[iVar2] = unk_0x2E23E36C99C8BEE6(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar75[iVar0], iVar2) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_432[iVar2] = unk_0x2E23E36C99C8BEE6(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x7C2817C35F97E35E(uVar38[iVar0], iVar1) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x2E23E36C99C8BEE6(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x7C2817C35F97E35E(uVar44[iVar0], iVar1) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x2E23E36C99C8BEE6(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x7C2817C35F97E35E(uVar50[iVar0], iVar1) == 2)
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x2E23E36C99C8BEE6(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xE54D28595F926D0B(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1603097.f_67662[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_146(int iParam0)
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
	
	if (unk_0x5265B2D07FA93601(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x5265B2D07FA93601(iParam0, "cuts");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar4, "name");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar4, "bits");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar4, "shot");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar4, "anim");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar4, "midp");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar4, "rng");
	iVar161 = unk_0x1DC15D899E01E6B0(iVar4, "train");
	iVar162 = unk_0x1DC15D899E01E6B0(iVar4, "trahl");
	iVar163 = unk_0x1DC15D899E01E6B0(iVar4, "traou");
	iVar164 = unk_0x1DC15D899E01E6B0(iVar4, "trapo");
	iVar165 = unk_0x1DC15D899E01E6B0(iVar4, "ccp");
	iVar166 = unk_0x1DC15D899E01E6B0(iVar4, "ccr");
	iVar167 = unk_0x1DC15D899E01E6B0(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x7C2817C35F97E35E(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/]), unk_0xE54D28595F926D0B(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0x7C2817C35F97E35E(iVar6, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar6, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar7, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_43 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar8, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_42 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar9, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_44 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar10, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_735 = unk_0x2E23E36C99C8BEE6(iVar10, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar165, iVar0) == 5)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_728 = { unk_0x09B0244538FE11FC(iVar165, iVar0) };
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0x7C2817C35F97E35E(iVar166, iVar0) == 3)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_731 = unk_0x7017D324A3C28EF0(iVar166, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar167, iVar0) == 5)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_732 = { unk_0x09B0244538FE11FC(iVar167, iVar0) };
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0x7C2817C35F97E35E(iVar161, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_436 = unk_0x2E23E36C99C8BEE6(iVar161, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar162, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_438 = unk_0x2E23E36C99C8BEE6(iVar162, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar163, iVar0) == 2)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_437 = unk_0x2E23E36C99C8BEE6(iVar163, iVar0);
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar164, iVar0) == 5)
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_439 = { unk_0x09B0244538FE11FC(iVar164, iVar0) };
		}
		else
		{
			Global_1603097.f_61316[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x7C2817C35F97E35E(uVar95[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar101[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar89[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_32[iVar1] = unk_0x7017D324A3C28EF0(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar107[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_37[iVar1] = unk_0x7017D324A3C28EF0(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x7C2817C35F97E35E(uVar11[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_45[iVar1] = unk_0x2E23E36C99C8BEE6(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar17[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_66[iVar1] = unk_0x2E23E36C99C8BEE6(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar23[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar29[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar35[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar41[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar47[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_331[iVar1] = unk_0x7017D324A3C28EF0(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar53[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_352[iVar1] = unk_0x7017D324A3C28EF0(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar71[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_373[iVar1] = unk_0x2E23E36C99C8BEE6(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar77[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_394[iVar1] = unk_0x2E23E36C99C8BEE6(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar83[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_415[iVar1] = unk_0x7017D324A3C28EF0(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar113[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_524[iVar1] = unk_0x2E23E36C99C8BEE6(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0x7C2817C35F97E35E(uVar119[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar125[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar131[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar131[iVar0], iVar1) };
				Global_1603097.f_70867[iVar1] = Global_1603097.f_61316[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1603097.f_70888[iVar1] = Global_1603097.f_61316[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1603097.f_70909[iVar1] = Global_1603097.f_61316[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar137[iVar0], iVar1) == 5)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0x09B0244538FE11FC(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x7C2817C35F97E35E(uVar143[iVar0], iVar1) == 3)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_503[iVar1] = unk_0x7017D324A3C28EF0(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0x7C2817C35F97E35E(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0xE54D28595F926D0B(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x7C2817C35F97E35E(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0xE54D28595F926D0B(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1603097.f_61316[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x7C2817C35F97E35E(uVar59[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0x2E23E36C99C8BEE6(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x7C2817C35F97E35E(uVar65[iVar0], iVar1) == 2)
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0x2E23E36C99C8BEE6(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1603097.f_61316[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_147(int iParam0)
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
	
	if (unk_0x5265B2D07FA93601(iParam0, "eoir") == 0 || unk_0x5265B2D07FA93601(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x1DC15D899E01E6B0(iParam0, "eoid");
	iVar9 = unk_0x1DC15D899E01E6B0(iParam0, "eoet");
	iVar10 = unk_0x5265B2D07FA93601(iParam0, "eoir");
	iVar11 = unk_0x5265B2D07FA93601(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x7C2817C35F97E35E(iVar8, iVar0) == 2)
		{
			Global_1603097.f_55218[iVar0] = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
		}
		else
		{
			Global_1603097.f_55218[iVar0] = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar9, iVar0) == 2)
		{
			Global_1603097.f_55187[iVar0] = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
		}
		else
		{
			Global_1603097.f_55187[iVar0] = -1;
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
				if (unk_0x6983B0253A3F4D2A(iVar10, &cVar4) == 2)
				{
					Global_1603097.f_55249[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0xB872CF0BC8201FAA(iVar10, &cVar4);
				}
				else
				{
					Global_1603097.f_55249[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x6983B0253A3F4D2A(iVar11, &cVar4) == 2)
				{
					Global_1603097.f_56030[iVar0 /*26*/][iVar1 /*5*/][iVar2] = unk_0xB872CF0BC8201FAA(iVar11, &cVar4);
				}
				else
				{
					Global_1603097.f_55249[iVar0 /*26*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1603097.f_55218[iVar0];
		iVar13 = Global_1603097.f_55187[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1603097.f_55218[iVar3] == iVar12) && Global_1603097.f_55187[iVar3] == iVar13)
				{
					Global_1603097.f_55187[iVar3] = -1;
					Global_1603097.f_55218[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 4)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1603097.f_55249[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
							Global_1603097.f_56030[iVar3 /*26*/][iVar1 /*5*/][iVar2] = -1;
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

void func_148(int iParam0)
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
	
	iVar4 = unk_0x5265B2D07FA93601(iParam0, "kill");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar4, "no");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar4, "mcp");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1603097.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1603097.f_26124[iVar1] = unk_0x2E23E36C99C8BEE6(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1603097.f_26124[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1603097.f_25630[iVar0 /*29*/][iVar1] = unk_0x2E23E36C99C8BEE6(uVar8[iVar1], iVar0);
					Global_1603097.f_25630[iVar0 /*29*/].f_5[iVar1] = unk_0x2E23E36C99C8BEE6(uVar13[iVar1], iVar0);
					if (Global_1603097.f_25630[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1603097.f_25630[iVar0 /*29*/].f_10[iVar1] = unk_0x2E23E36C99C8BEE6(uVar18[iVar1], iVar0);
					if (unk_0x7C2817C35F97E35E(uVar23[iVar1], iVar0) == 2)
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_15[iVar1] = unk_0x2E23E36C99C8BEE6(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x7C2817C35F97E35E(uVar28[iVar1], iVar0) == 2)
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_20[iVar1] = unk_0x2E23E36C99C8BEE6(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x7C2817C35F97E35E(iVar6, iVar0) == 2)
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
					}
					else
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x7C2817C35F97E35E(iVar7, iVar0) == 2)
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar7, iVar0);
					}
					else
					{
						Global_1603097.f_25630[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_149(int iParam0)
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
	
	iVar4 = unk_0x5265B2D07FA93601(iParam0, "goto");
	Global_1603097.f_26130[0] = unk_0xB872CF0BC8201FAA(iVar4, "no");
	Global_1603097.f_5 = unk_0xB872CF0BC8201FAA(iVar4, "atrig");
	iVar75 = unk_0x1DC15D899E01E6B0(iVar4, "lmcp");
	iVar76 = unk_0x1DC15D899E01E6B0(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1603097.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x1DC15D899E01E6B0(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1603097.f_26130[0] - 1))
			{
				Global_1603097.f_23919[iVar0 /*95*/].f_1[0 /*3*/] = { unk_0x09B0244538FE11FC(uVar5[iVar1], iVar0) };
				Global_1603097.f_23919[iVar0 /*95*/].f_14[0] = unk_0x7017D324A3C28EF0(uVar10[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_58[iVar1] = unk_0x2E23E36C99C8BEE6(uVar15[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_63[iVar1] = unk_0x2E23E36C99C8BEE6(uVar20[iVar1], iVar0);
				if (Global_1603097.f_23919[iVar0 /*95*/].f_63[iVar1] == -1)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_63[iVar1] = 99999;
				}
				Global_1603097.f_23919[iVar0 /*95*/].f_68[iVar1] = unk_0x2E23E36C99C8BEE6(uVar25[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_46[iVar1] = unk_0x7017D324A3C28EF0(uVar55[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_73[iVar1] = unk_0x2E23E36C99C8BEE6(uVar30[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_35[iVar1] = unk_0x2E23E36C99C8BEE6(uVar35[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_51 = unk_0x2E23E36C99C8BEE6(uVar50[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_30[0] = unk_0x2E23E36C99C8BEE6(uVar40[iVar1], iVar0);
				Global_1603097.f_23919[iVar0 /*95*/].f_40[0] = unk_0x2E23E36C99C8BEE6(uVar45[iVar1], iVar0);
				if (unk_0x7C2817C35F97E35E(iVar75, iVar0) == 2)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_90 = unk_0x2E23E36C99C8BEE6(iVar75, iVar0);
				}
				else
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_90 = -1;
				}
				if (unk_0x7C2817C35F97E35E(iVar76, iVar0) == 2)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_91 = unk_0x2E23E36C99C8BEE6(iVar76, iVar0);
				}
				else
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_91 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar60[iVar1], iVar0) == 2)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_53[iVar1] = unk_0x2E23E36C99C8BEE6(uVar60[iVar1], iVar0);
				}
				else
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_53[iVar1] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar65[iVar1], iVar0) == 2)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_78[iVar1] = unk_0x2E23E36C99C8BEE6(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_78[iVar1] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar70[iVar1], iVar0) == 2)
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_83[iVar1] = unk_0x2E23E36C99C8BEE6(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1603097.f_23919[iVar0 /*95*/].f_83[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar77 = unk_0x1DC15D899E01E6B0(iVar4, "locbc");
	iVar78 = unk_0x1DC15D899E01E6B0(iVar4, "loc2rd");
	iVar79 = unk_0x1DC15D899E01E6B0(iVar4, "locdir");
	iVar80 = unk_0x1DC15D899E01E6B0(iVar4, "loctol");
	iVar81 = unk_0x1DC15D899E01E6B0(iVar4, "lochgt");
	iVar82 = unk_0x1DC15D899E01E6B0(iVar4, "locart");
	iVar83 = unk_0x1DC15D899E01E6B0(iVar4, "locaa1");
	iVar84 = unk_0x1DC15D899E01E6B0(iVar4, "locaa2");
	iVar85 = unk_0x1DC15D899E01E6B0(iVar4, "locaaw");
	iVar86 = unk_0x1DC15D899E01E6B0(iVar4, "nmpass");
	iVar87 = unk_0x1DC15D899E01E6B0(iVar4, "nmfail");
	iVar88 = unk_0x1DC15D899E01E6B0(iVar4, "locstd");
	iVar89 = unk_0x1DC15D899E01E6B0(iVar4, "locstm");
	iVar90 = unk_0x1DC15D899E01E6B0(iVar4, "lcbs2");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_26130[0] - 1))
	{
		if (unk_0x7C2817C35F97E35E(iVar77, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_45 = unk_0x2E23E36C99C8BEE6(iVar77, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_45 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar78, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_19 = unk_0x7017D324A3C28EF0(iVar78, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_19 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar79, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_27 = unk_0x7017D324A3C28EF0(iVar79, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_27 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar80, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_28 = unk_0x7017D324A3C28EF0(iVar80, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_28 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar81, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_29 = unk_0x7017D324A3C28EF0(iVar81, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_29 = 0f;
		}
		if (unk_0x7C2817C35F97E35E(iVar82, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/] = unk_0x2E23E36C99C8BEE6(iVar82, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/] = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar86, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_88 = unk_0x2E23E36C99C8BEE6(iVar86, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_88 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar87, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_89 = unk_0x2E23E36C99C8BEE6(iVar87, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_89 = -1;
		}
		if (unk_0x7C2817C35F97E35E(iVar88, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_93 = unk_0x7017D324A3C28EF0(iVar88, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_93 = 10.5f;
		}
		if (unk_0x7C2817C35F97E35E(iVar89, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_92 = unk_0x2E23E36C99C8BEE6(iVar89, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_92 = 0;
		}
		if (unk_0x7C2817C35F97E35E(iVar90, iVar0) == 2)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_52 = unk_0x2E23E36C99C8BEE6(iVar90, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_52 = 0;
		}
		if ((unk_0x7C2817C35F97E35E(iVar83, iVar0) == 5 && unk_0x7C2817C35F97E35E(iVar84, iVar0) == 5) && unk_0x7C2817C35F97E35E(iVar85, iVar0) == 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_20 = { unk_0x09B0244538FE11FC(iVar83, iVar0) };
			Global_1603097.f_23919[iVar0 /*95*/].f_23 = { unk_0x09B0244538FE11FC(iVar84, iVar0) };
			Global_1603097.f_23919[iVar0 /*95*/].f_26 = unk_0x7017D324A3C28EF0(iVar85, iVar0);
		}
		else
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_20 = { 0f, 0f, 0f };
			Global_1603097.f_23919[iVar0 /*95*/].f_23 = { 0f, 0f, 0f };
			Global_1603097.f_23919[iVar0 /*95*/].f_26 = 1f;
		}
		iVar0++;
	}
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x6983B0253A3F4D2A(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x5265B2D07FA93601(iParam0, "cover");
		Global_1603097.f_28641 = unk_0xB872CF0BC8201FAA(iVar1, "no");
		iVar2 = unk_0x1DC15D899E01E6B0(iVar1, "loc");
		iVar3 = unk_0x1DC15D899E01E6B0(iVar1, "dir");
		iVar4 = unk_0x1DC15D899E01E6B0(iVar1, "use");
		iVar5 = unk_0x1DC15D899E01E6B0(iVar1, "high");
		iVar6 = unk_0x1DC15D899E01E6B0(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1603097.f_28641 - 1))
		{
			Global_1603097.f_28642[iVar0 /*7*/] = { unk_0x09B0244538FE11FC(iVar2, iVar0) };
			Global_1603097.f_28642[iVar0 /*7*/].f_3 = unk_0x7017D324A3C28EF0(iVar3, iVar0);
			Global_1603097.f_28642[iVar0 /*7*/].f_4 = unk_0x2E23E36C99C8BEE6(iVar4, iVar0);
			Global_1603097.f_28642[iVar0 /*7*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar5, iVar0);
			Global_1603097.f_28642[iVar0 /*7*/].f_6 = unk_0x2E23E36C99C8BEE6(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_151(int iParam0)
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
	
	iVar2 = unk_0x5265B2D07FA93601(iParam0, "door");
	Global_1603097.f_28354 = unk_0xB872CF0BC8201FAA(iVar2, "no");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar2, "loc");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar2, "fopen");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar2, "model");
	uVar6 = unk_0x1DC15D899E01E6B0(iVar2, "lock");
	uVar7 = unk_0x1DC15D899E01E6B0(iVar2, "swing");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar2, "udrle");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar2, "udtem");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar2, "udrat");
	uVar11 = unk_0x1DC15D899E01E6B0(iVar2, "swingu");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar2, "audst");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar2, "aurt");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar2, "uaudst");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar2, "uaurt");
	uVar16 = unk_0x1DC15D899E01E6B0(iVar2, "lfp");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar2, "dtime");
	uVar18 = unk_0x1DC15D899E01E6B0(iVar2, "mid");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1603097.f_28354 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1603097.f_28355[iVar0 /*19*/] = { unk_0x09B0244538FE11FC(iVar3, iVar0) };
			Global_1603097.f_28355[iVar0 /*19*/].f_3 = unk_0x7017D324A3C28EF0(iVar4, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_14 = unk_0x66112115DFF4E68C(uVar6, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_15 = unk_0x66112115DFF4E68C(uVar7, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_5 = unk_0x2E23E36C99C8BEE6(iVar8, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_6 = unk_0x2E23E36C99C8BEE6(iVar9, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_13 = unk_0x7017D324A3C28EF0(iVar10, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_16 = unk_0x66112115DFF4E68C(uVar11, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_8 = unk_0x7017D324A3C28EF0(iVar13, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_9 = unk_0x7017D324A3C28EF0(iVar12, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_10 = unk_0x7017D324A3C28EF0(iVar15, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_11 = unk_0x7017D324A3C28EF0(iVar14, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_12 = unk_0x66112115DFF4E68C(uVar16, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_18 = unk_0x2E23E36C99C8BEE6(iVar19, iVar0);
			iVar1 = unk_0x2E23E36C99C8BEE6(iVar5, iVar0);
			Global_1603097.f_28355[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x7C2817C35F97E35E(iVar17, iVar0) == 2)
			{
				Global_1603097.f_28355[iVar0 /*19*/].f_7 = unk_0x2E23E36C99C8BEE6(iVar17, iVar0);
			}
			else
			{
				Global_1603097.f_28355[iVar0 /*19*/].f_7 = 0;
			}
			Global_1603097.f_28355[iVar0 /*19*/].f_17 = unk_0x66112115DFF4E68C(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_152(int iParam0)
{
	int iVar0;
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
	var uVar14[4];
	var uVar19[4];
	var uVar24[4];
	var uVar29[4];
	var uVar34[4];
	var uVar39[4];
	var uVar44[4];
	var uVar49[4];
	var uVar54[4];
	var uVar59[4];
	var uVar64[4];
	var uVar69[4];
	var uVar74[4];
	var uVar79[4];
	var uVar84[4];
	var uVar89[4];
	var uVar94[4];
	var uVar99[4];
	var uVar104[4];
	var uVar109[4];
	var uVar114[4];
	var uVar119[4];
	var uVar124[4];
	var uVar129[4];
	var uVar134[4];
	var uVar139[4];
	var uVar144[4];
	var uVar149[4];
	var uVar154[4];
	var uVar159[4];
	var uVar164[4];
	var uVar169[4];
	var uVar174[4];
	var uVar179[4];
	var uVar184[4];
	var uVar189[4];
	var uVar194[4];
	var uVar199[4];
	var uVar204[4];
	var uVar209[4];
	var uVar214[4];
	var uVar219[4];
	var uVar224[4];
	var uVar229[4];
	var uVar234[4];
	var uVar239[4];
	var uVar244[4];
	var uVar249[4];
	var uVar254[4];
	var uVar259[4];
	var uVar264[4];
	var uVar269[4];
	var uVar274[4];
	var uVar279[4];
	var uVar284[4];
	var uVar289[4];
	var uVar294[4];
	var uVar299[4];
	var uVar304[4];
	var uVar309[4];
	var uVar314[4];
	var uVar319[4];
	var uVar324[4];
	var uVar329[4];
	var uVar334[4];
	var uVar339[4];
	var uVar344[4];
	var uVar349[4];
	var uVar354[4];
	var uVar359[4];
	var uVar364[4];
	var uVar369[4];
	var uVar374[4];
	var uVar379[4];
	var uVar384[4];
	var uVar389[4];
	var uVar394[4];
	var uVar399[4];
	var uVar404[4];
	var uVar409[4];
	var uVar414[4];
	var uVar419[4];
	var uVar424[4];
	var uVar429[4];
	var uVar434[4];
	var uVar439[4];
	var uVar444[4];
	var uVar449[4];
	var uVar454[4];
	var uVar459[4];
	var uVar464[4];
	var uVar469[4];
	var uVar474[4];
	var uVar479[4];
	var uVar484[4];
	var uVar489[4];
	var uVar494[4];
	var uVar499[4];
	var uVar504[4];
	var uVar509[4];
	var uVar514[4];
	var uVar519[4];
	var uVar524[4];
	var uVar529[4];
	var uVar534[4];
	var uVar539[4];
	var uVar544[4];
	var uVar549[4];
	var uVar554[4];
	var uVar559[4];
	var uVar564[4];
	var uVar569[4];
	var uVar574[4];
	var uVar579[4];
	var uVar584[4];
	var uVar589[4];
	var uVar594[4];
	var uVar599[4];
	var uVar604[4];
	var uVar609[4];
	var uVar614[4];
	var uVar619[4];
	var uVar624[4];
	var uVar629[4];
	var uVar634[4];
	var uVar639[4];
	var uVar644[4];
	var uVar649[4];
	var uVar654[4];
	var uVar659[4];
	int iVar664;
	int iVar665;
	int iVar666;
	int iVar667;
	
	iVar0 = unk_0x5265B2D07FA93601(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_1603097.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar14[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar19[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar24[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar29[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar34[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar624[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar629[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar634[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar639[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar644[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar649[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar654[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar39[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar44[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar49[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar54[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar59[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar69[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar64[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar74[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar79[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar259[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar254[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar659[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar224[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bdprt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar294[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bdpst", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar299[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar7 = true;
				uVar229[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar234[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar239[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar244[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar249[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar264[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar269[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar274[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "rnrbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "resmax", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "resuse", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbnum", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar309[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbngn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gblgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbcol", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar324[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar329[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mcstr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar334[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mcmp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar349[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "aumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar339[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mpaumx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar344[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbmax", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar354[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbngm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar359[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gblgm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar364[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbvhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar369[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbaie", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar304[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gacc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar374[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gfld", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar379[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbat", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar384[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar389[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar394[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "gbaw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar399[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar404[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar409[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar414[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "txt5", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar419[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "fail", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar424[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bfm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar439[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "wwm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar429[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "vss", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar434[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "tsc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar444[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "mcry", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar449[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar454[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar459[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "destv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar464[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar469[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar474[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar539[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar544[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar549[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar554[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar559[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar564[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar569[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar574[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar579[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar584[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar589[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar479[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar484[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar504[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar489[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar494[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar499[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar509[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar514[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar519[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar524[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar529[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar534[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar594[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar599[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar604[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar609[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar619[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar614[iVar1] = unk_0x1DC15D899E01E6B0(iVar0, &cVar3);
			iVar664 = unk_0x1DC15D899E01E6B0(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1603097.f_73[iVar1 /*5400*/].f_38 - 1))
			{
				if (uVar14[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_207[iVar2] = unk_0x2E23E36C99C8BEE6(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_207[iVar2] = 0;
				}
				if (uVar19[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1665[iVar2] = unk_0x2E23E36C99C8BEE6(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1665[iVar2] = 0;
				}
				if (uVar29[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1737[iVar2] = unk_0x2E23E36C99C8BEE6(uVar29[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1737[iVar2] = 0;
				}
				if (uVar34[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1755[iVar2] = unk_0x2E23E36C99C8BEE6(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1755[iVar2] = 0;
				}
				if (uVar24[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_2686[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar24[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_2686[iVar2 /*16*/]), "", 64);
				}
				if (uVar39[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_151[iVar2] = unk_0x2E23E36C99C8BEE6(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_151[iVar2] = 0;
				}
				if (uVar44[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_169[iVar2] = unk_0x2E23E36C99C8BEE6(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_169[iVar2] = 0;
				}
				if (uVar624[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5220[iVar2] = unk_0x2E23E36C99C8BEE6(uVar624[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5220[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar629[iVar1], iVar2) == 2 && Global_1603097.f_2 != 6)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5238[iVar2] = unk_0x2E23E36C99C8BEE6(uVar629[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5238[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar634[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5256[iVar2] = unk_0x2E23E36C99C8BEE6(uVar634[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5256[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar639[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5274[iVar2] = unk_0x2E23E36C99C8BEE6(uVar639[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5274[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar644[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5328[iVar2] = unk_0x2E23E36C99C8BEE6(uVar644[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5328[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar649[iVar1], iVar2) == 2)
				{
					iVar665 = unk_0x2E23E36C99C8BEE6(uVar649[iVar1], iVar2);
					if (iVar665 > 0)
					{
						Global_1603097.f_73[iVar1 /*5400*/].f_5292[iVar2] = iVar665;
					}
					else
					{
						Global_1603097.f_73[iVar1 /*5400*/].f_5292[iVar2] = 0;
					}
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5292[iVar2] = 0;
				}
				if (uVar654[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5310[iVar2] = unk_0x2E23E36C99C8BEE6(uVar654[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5310[iVar2] = 0;
				}
				if (Global_1603097.f_73[iVar1 /*5400*/].f_169[iVar2] == 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_169[iVar2] = -1;
				}
				if (uVar49[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_189[iVar2] = unk_0x2E23E36C99C8BEE6(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_189[iVar2] = 0;
				}
				if (uVar69[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1791[iVar2] = unk_0x2E23E36C99C8BEE6(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1791[iVar2] = 0;
				}
				if (uVar64[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1773[iVar2] = unk_0x2E23E36C99C8BEE6(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1773[iVar2] = 0;
				}
				if (uVar74[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1813[iVar2] = unk_0x2E23E36C99C8BEE6(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1813[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar79[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1833[iVar2] = unk_0x2E23E36C99C8BEE6(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1833[iVar2] = 10000;
				}
				if (unk_0x7C2817C35F97E35E(uVar84[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1869[iVar2] = unk_0x2E23E36C99C8BEE6(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1869[iVar2] = -1;
				}
				if (uVar54[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_261[iVar2] = unk_0x2E23E36C99C8BEE6(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_261[iVar2] = 0;
				}
				if (uVar59[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_279[iVar2] = unk_0x2E23E36C99C8BEE6(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_279[iVar2] = 0;
				}
				if (uVar134[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_333[iVar2] = unk_0x2E23E36C99C8BEE6(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_333[iVar2] = 0;
				}
				if (uVar89[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_297[iVar2] = unk_0x2E23E36C99C8BEE6(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_297[iVar2] = -1;
				}
				if (uVar94[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_315[iVar2] = unk_0x2E23E36C99C8BEE6(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_315[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar104[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1851[iVar2] = unk_0x2E23E36C99C8BEE6(uVar104[iVar1], iVar2);
				}
				else if (unk_0x7C2817C35F97E35E(iVar664, iVar1) == 2 && iVar664 != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1851[iVar2] = unk_0x2E23E36C99C8BEE6(iVar664, iVar1);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1851[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar99[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_369[iVar2] = unk_0x2E23E36C99C8BEE6(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_369[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar259[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_243[iVar2] = unk_0x2E23E36C99C8BEE6(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_243[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar254[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_225[iVar2] = unk_0x2E23E36C99C8BEE6(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_225[iVar2] = 0;
				}
				if (uVar109[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_351[iVar2] = unk_0x2E23E36C99C8BEE6(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_351[iVar2] = 0;
				}
				if (uVar114[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_387[iVar2] = unk_0x2E23E36C99C8BEE6(uVar114[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_387[iVar2] = 0;
				}
				if (uVar119[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5166[iVar2] = unk_0x2E23E36C99C8BEE6(uVar119[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5166[iVar2] = 0;
				}
				if (uVar124[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5184[iVar2] = unk_0x2E23E36C99C8BEE6(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5184[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar129[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5202[iVar2] = unk_0x2E23E36C99C8BEE6(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5202[iVar2] = 0;
				}
				if (uVar139[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2262[iVar2 /*3*/] = { unk_0x09B0244538FE11FC(uVar139[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2262[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_128())
				{
					if (uVar144[iVar1] != 0)
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_2959[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar144[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_2959[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar149[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2314[iVar2 /*3*/] = { unk_0x09B0244538FE11FC(uVar149[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2314[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar154[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2384[iVar2] = unk_0x2E23E36C99C8BEE6(uVar154[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2384[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar159[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2420[iVar2] = unk_0x2E23E36C99C8BEE6(uVar159[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2420[iVar2] = 0;
				}
				if (uVar204[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1887[iVar2] = unk_0x2E23E36C99C8BEE6(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1887[iVar2] = 0;
				}
				if (uVar199[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2366[iVar2] = unk_0x7017D324A3C28EF0(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2366[iVar2] = 0f;
				}
				if (uVar209[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2566[iVar2] = unk_0x2E23E36C99C8BEE6(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2566[iVar2] = 0;
				}
				if (uVar214[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2584[iVar2] = unk_0x2E23E36C99C8BEE6(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2584[iVar2] = 0;
				}
				if (uVar219[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2602[iVar2] = unk_0x2E23E36C99C8BEE6(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2602[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar224[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2620[iVar2] = unk_0x2E23E36C99C8BEE6(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2620[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar294[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2639[iVar2] = unk_0x2E23E36C99C8BEE6(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2639[iVar2] = Global_1603097.f_73[iVar1 /*5400*/].f_1657;
				}
				if (unk_0x7C2817C35F97E35E(uVar299[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2657[iVar2] = unk_0x2E23E36C99C8BEE6(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2657[iVar2] = Global_1603097.f_73[iVar1 /*5400*/].f_1663;
				}
				if (bVar7)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][0] = unk_0x2E23E36C99C8BEE6(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][1] = unk_0x2E23E36C99C8BEE6(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][2] = unk_0x2E23E36C99C8BEE6(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][3] = unk_0x2E23E36C99C8BEE6(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_4939[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][0] = unk_0x2E23E36C99C8BEE6(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][1] = unk_0x2E23E36C99C8BEE6(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][2] = unk_0x2E23E36C99C8BEE6(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5043[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar279[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5112[iVar2] = unk_0x2E23E36C99C8BEE6(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5112[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar284[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5130[iVar2] = unk_0x2E23E36C99C8BEE6(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5130[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar289[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5148[iVar2] = unk_0x2E23E36C99C8BEE6(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5148[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar164[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2402[iVar2] = unk_0x2E23E36C99C8BEE6(uVar164[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2402[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar169[iVar1], iVar2) == 3)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2438[iVar2] = unk_0x7017D324A3C28EF0(uVar169[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2438[iVar2] = -1f;
				}
				if (unk_0x7C2817C35F97E35E(uVar174[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2476[iVar2] = unk_0x2E23E36C99C8BEE6(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2476[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar179[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2458[iVar2] = unk_0x2E23E36C99C8BEE6(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2458[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar184[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5346[iVar2] = unk_0x2E23E36C99C8BEE6(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5346[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar189[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5364[iVar2] = unk_0x2E23E36C99C8BEE6(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5364[iVar2] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar194[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5382[iVar2] = unk_0x2E23E36C99C8BEE6(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5382[iVar2] = 0;
				}
				if (uVar249[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5025[iVar2] = unk_0x2E23E36C99C8BEE6(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_5025[iVar2] = 0;
				}
				if (uVar309[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1906[iVar2] = unk_0x2E23E36C99C8BEE6(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1906[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar314[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2190[iVar2] = unk_0x2E23E36C99C8BEE6(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2190[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar319[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2226[iVar2] = unk_0x2E23E36C99C8BEE6(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2226[iVar2] = 0;
				}
				if (uVar324[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1942[iVar2] = unk_0x2E23E36C99C8BEE6(uVar324[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1942[iVar2] = 0;
				}
				if (uVar329[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1924[iVar2] = unk_0x2E23E36C99C8BEE6(uVar329[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1924[iVar2] = 0;
				}
				if (uVar334[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2494[iVar2] = unk_0x2E23E36C99C8BEE6(uVar334[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2494[iVar2] = 0;
				}
				if (uVar339[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2530[iVar2] = unk_0x2E23E36C99C8BEE6(uVar339[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2530[iVar2] = 0;
				}
				if (uVar344[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2548[iVar2] = unk_0x2E23E36C99C8BEE6(uVar344[iVar1], iVar2);
				}
				else if (Global_1603097.f_73[iVar1 /*5400*/].f_2530[iVar2] != 0 && unk_0x94E72F17611BCD3C(Global_1603097.f_73[iVar1 /*5400*/].f_2602[iVar2], 8))
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2548[iVar2] = Global_1603097.f_73[iVar1 /*5400*/].f_2530[iVar2];
					Global_1603097.f_73[iVar1 /*5400*/].f_2530[iVar2] = 0;
					unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_73[iVar1 /*5400*/].f_2602[iVar2]), 8);
				}
				if (uVar349[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2512[iVar2] = unk_0x2E23E36C99C8BEE6(uVar349[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2512[iVar2] = 0;
				}
				if (uVar354[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2082[iVar2] = unk_0x2E23E36C99C8BEE6(uVar354[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2082[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar359[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2208[iVar2] = unk_0x2E23E36C99C8BEE6(uVar359[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2208[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar364[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2244[iVar2] = unk_0x2E23E36C99C8BEE6(uVar364[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2244[iVar2] = 0;
				}
				if (uVar304[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2172[iVar2] = unk_0x2E23E36C99C8BEE6(uVar304[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2172[iVar2] = 0;
				}
				if (uVar369[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2100[iVar2] = unk_0x2E23E36C99C8BEE6(uVar369[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2100[iVar2] = 100;
				}
				if (uVar374[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2136[iVar2] = unk_0x2E23E36C99C8BEE6(uVar374[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2136[iVar2] = 0;
				}
				if (uVar379[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2154[iVar2] = unk_0x2E23E36C99C8BEE6(uVar379[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2154[iVar2] = 0;
				}
				if (uVar384[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2118[iVar2] = unk_0x2E23E36C99C8BEE6(uVar384[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2118[iVar2] = 0;
				}
				if (uVar389[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1960[iVar2 /*3*/] = { unk_0x09B0244538FE11FC(uVar389[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1960[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar394[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2012[iVar2 /*3*/] = { unk_0x09B0244538FE11FC(uVar394[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2012[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar399[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2064[iVar2] = unk_0x7017D324A3C28EF0(uVar399[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_2064[iVar2] = 0f;
				}
				if (uVar404[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3232[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar404[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3232[iVar2 /*16*/]), "", 64);
				}
				if (!func_128())
				{
					if (uVar409[iVar1] != 0)
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3711[iVar2 /*6*/]), unk_0xE54D28595F926D0B(uVar409[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3711[iVar2 /*6*/]), "", 24);
					}
					if (uVar414[iVar1] != 0)
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3505[iVar2 /*6*/]), unk_0xE54D28595F926D0B(uVar414[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3505[iVar2 /*6*/]), "", 24);
					}
					if (uVar419[iVar1] != 0)
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3608[iVar2 /*6*/]), unk_0xE54D28595F926D0B(uVar419[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3608[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar424[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3814[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar424[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_3814[iVar2 /*16*/]), "", 64);
				}
				if (uVar439[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4087[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar439[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4087[iVar2 /*16*/]), "", 64);
				}
				if (uVar429[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4360[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar429[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4360[iVar2 /*16*/]), "", 64);
				}
				if (uVar434[iVar1] != 0)
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4633[iVar2 /*16*/]), unk_0xE54D28595F926D0B(uVar434[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4633[iVar2 /*16*/]), "", 64);
				}
				if (uVar444[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1683[iVar2] = unk_0x2E23E36C99C8BEE6(uVar444[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1683[iVar2] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar659[iVar1], iVar2) == 2)
				{
					if (unk_0x2E23E36C99C8BEE6(uVar659[iVar1], iVar2) > 1)
					{
						Global_1603097.f_73[iVar1 /*5400*/].f_1719[iVar2] = unk_0x2E23E36C99C8BEE6(uVar659[iVar1], iVar2);
					}
					else
					{
						Global_1603097.f_73[iVar1 /*5400*/].f_1719[iVar2] = 1;
					}
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1719[iVar2] = 1;
				}
				if (uVar449[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1701[iVar2] = unk_0x2E23E36C99C8BEE6(uVar449[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1701[iVar2] = 0;
				}
				if (uVar489[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_3 = { unk_0x09B0244538FE11FC(uVar489[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar494[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_6 = { unk_0x09B0244538FE11FC(uVar494[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar499[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_10 = unk_0x7017D324A3C28EF0(uVar499[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar504[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_13 = { unk_0x09B0244538FE11FC(uVar504[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar479[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/] = { unk_0x09B0244538FE11FC(uVar479[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (unk_0x7C2817C35F97E35E(uVar484[iVar1], iVar2) == 3)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_9 = unk_0x7017D324A3C28EF0(uVar484[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar539[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/] = { unk_0x09B0244538FE11FC(uVar539[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar549[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_3 = { unk_0x09B0244538FE11FC(uVar549[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar544[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_6 = { unk_0x09B0244538FE11FC(uVar544[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar559[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_10 = unk_0x7017D324A3C28EF0(uVar559[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_10 = 0f;
				}
				if (unk_0x7C2817C35F97E35E(uVar554[iVar1], iVar2) == 3)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_9 = unk_0x7017D324A3C28EF0(uVar554[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar464[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_3 = { unk_0x09B0244538FE11FC(uVar464[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar469[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_6 = { unk_0x09B0244538FE11FC(uVar469[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar474[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_10 = unk_0x7017D324A3C28EF0(uVar474[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_10 = 0f;
				}
				if (uVar454[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/] = { unk_0x09B0244538FE11FC(uVar454[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/] = { 0f, 0f, 0f };
				}
				if (uVar459[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_9 = unk_0x7017D324A3C28EF0(uVar459[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1193[iVar2 /*23*/].f_9 = 0f;
				}
				if (uVar614[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1585[iVar2 /*3*/] = { unk_0x09B0244538FE11FC(uVar614[iVar1], iVar2) };
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1585[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar619[iVar1] != 0)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1637[iVar2] = unk_0x7017D324A3C28EF0(uVar619[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_1637[iVar2] = 0f;
				}
				if (unk_0x7C2817C35F97E35E(uVar509[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_19 = unk_0x2E23E36C99C8BEE6(uVar509[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar514[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_17 = unk_0x2E23E36C99C8BEE6(uVar514[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar519[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_18 = unk_0x2E23E36C99C8BEE6(uVar519[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar524[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_20 = unk_0x2E23E36C99C8BEE6(uVar524[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar529[iVar1], iVar2) == 2 && unk_0x7C2817C35F97E35E(uVar534[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_21 = unk_0x2E23E36C99C8BEE6(uVar529[iVar1], iVar2);
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_22 = unk_0x2E23E36C99C8BEE6(uVar534[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_21 = 0;
					Global_1603097.f_73[iVar1 /*5400*/].f_409[iVar2 /*23*/].f_22 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar564[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_19 = unk_0x2E23E36C99C8BEE6(uVar564[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_19 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar569[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_17 = unk_0x2E23E36C99C8BEE6(uVar569[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_17 = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar574[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_18 = unk_0x2E23E36C99C8BEE6(uVar574[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_18 = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar579[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_20 = unk_0x2E23E36C99C8BEE6(uVar579[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_20 = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar584[iVar1], iVar2) == 2 && unk_0x7C2817C35F97E35E(uVar589[iVar1], iVar2) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_21 = unk_0x2E23E36C99C8BEE6(uVar584[iVar1], iVar2);
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_22 = unk_0x2E23E36C99C8BEE6(uVar589[iVar1], iVar2);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_21 = 0;
					Global_1603097.f_73[iVar1 /*5400*/].f_801[iVar2 /*23*/].f_22 = -1;
				}
				iVar2++;
			}
			iVar666 = 0;
			while (iVar666 <= 45)
			{
				if (unk_0x7C2817C35F97E35E(uVar594[iVar1], iVar666) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_42[iVar666] = unk_0x2E23E36C99C8BEE6(uVar594[iVar1], iVar666);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_42[iVar666] = 0;
				}
				if (unk_0x7C2817C35F97E35E(uVar599[iVar1], iVar666) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_92[iVar666] = unk_0x2E23E36C99C8BEE6(uVar599[iVar1], iVar666);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_92[iVar666] = 0;
				}
				iVar666++;
			}
			iVar667 = 0;
			while (iVar667 <= 3)
			{
				if (unk_0x7C2817C35F97E35E(uVar604[iVar1], iVar667) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_141[iVar667] = unk_0x2E23E36C99C8BEE6(uVar604[iVar1], iVar667);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_141[iVar667] = -1;
				}
				if (unk_0x7C2817C35F97E35E(uVar609[iVar1], iVar667) == 2)
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_146[iVar667] = unk_0x2E23E36C99C8BEE6(uVar609[iVar1], iVar667);
				}
				else
				{
					Global_1603097.f_73[iVar1 /*5400*/].f_146[iVar667] = -1;
				}
				iVar667++;
			}
		}
		iVar1++;
	}
}

void func_153(int iParam0)
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
	int iVar90;
	int iVar91;
	var uVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101[10];
	
	iVar0 = unk_0x5265B2D07FA93601(*iParam0, "endcon");
	iVar3 = unk_0x1DC15D899E01E6B0(iVar0, "stpos");
	iVar4 = unk_0x1DC15D899E01E6B0(iVar0, "delr");
	iVar5 = unk_0x1DC15D899E01E6B0(iVar0, "epos");
	iVar6 = unk_0x1DC15D899E01E6B0(iVar0, "endr");
	iVar7 = unk_0x1DC15D899E01E6B0(iVar0, "vareapos");
	iVar8 = unk_0x1DC15D899E01E6B0(iVar0, "arear");
	iVar9 = unk_0x1DC15D899E01E6B0(iVar0, "time");
	iVar10 = unk_0x1DC15D899E01E6B0(iVar0, "plkr");
	iVar11 = unk_0x1DC15D899E01E6B0(iVar0, "pekr");
	iVar12 = unk_0x1DC15D899E01E6B0(iVar0, "vhkr");
	iVar13 = unk_0x1DC15D899E01E6B0(iVar0, "obkr");
	iVar14 = unk_0x1DC15D899E01E6B0(iVar0, "dr");
	iVar15 = unk_0x1DC15D899E01E6B0(iVar0, "pedr");
	iVar16 = unk_0x1DC15D899E01E6B0(iVar0, "vedr");
	iVar17 = unk_0x1DC15D899E01E6B0(iVar0, "obdr");
	iVar18 = unk_0x1DC15D899E01E6B0(iVar0, "lwmbs");
	iVar19 = unk_0x1DC15D899E01E6B0(iVar0, "flmbs");
	iVar20 = unk_0x1DC15D899E01E6B0(iVar0, "vdoibs");
	iVar21 = unk_0x1DC15D899E01E6B0(iVar0, "vdohu");
	iVar22 = unk_0x1DC15D899E01E6B0(iVar0, "tmbts");
	iVar23 = unk_0x1DC15D899E01E6B0(iVar0, "swmbs");
	iVar24 = unk_0x1DC15D899E01E6B0(iVar0, "gbmbs");
	iVar25 = unk_0x1DC15D899E01E6B0(iVar0, "pcbd");
	iVar26 = unk_0x1DC15D899E01E6B0(iVar0, "lwbs");
	iVar27 = unk_0x1DC15D899E01E6B0(iVar0, "woabs");
	iVar28 = unk_0x1DC15D899E01E6B0(iVar0, "fwoabs");
	iVar29 = unk_0x1DC15D899E01E6B0(iVar0, "fail");
	iVar30 = unk_0x1DC15D899E01E6B0(iVar0, "vehrsp");
	iVar31 = unk_0x1DC15D899E01E6B0(iVar0, "mtlr");
	iVar32 = unk_0x1DC15D899E01E6B0(iVar0, "mslr");
	iVar33 = unk_0x1DC15D899E01E6B0(iVar0, "plyl");
	iVar34 = unk_0x1DC15D899E01E6B0(iVar0, "shd");
	iVar35 = unk_0x1DC15D899E01E6B0(iVar0, "spar");
	iVar36 = unk_0x1DC15D899E01E6B0(iVar0, "boud");
	iVar37 = unk_0x1DC15D899E01E6B0(iVar0, "bla");
	iVar38 = unk_0x1DC15D899E01E6B0(iVar0, "wla");
	iVar39 = unk_0x1DC15D899E01E6B0(iVar0, "patm");
	iVar40 = unk_0x1DC15D899E01E6B0(iVar0, "bnd2");
	iVar41 = unk_0x1DC15D899E01E6B0(iVar0, "bla2");
	iVar42 = unk_0x1DC15D899E01E6B0(iVar0, "wla2");
	iVar43 = unk_0x1DC15D899E01E6B0(iVar0, "pat2");
	iVar44 = unk_0x1DC15D899E01E6B0(iVar0, "inv");
	iVar45 = unk_0x1DC15D899E01E6B0(iVar0, "inv2");
	iVar46 = unk_0x1DC15D899E01E6B0(iVar0, "invsw");
	iVar47 = unk_0x1DC15D899E01E6B0(iVar0, "invtm");
	iVar48 = unk_0x1DC15D899E01E6B0(iVar0, "invrl");
	iVar49 = unk_0x1DC15D899E01E6B0(iVar0, "sinv");
	iVar50 = unk_0x1DC15D899E01E6B0(iVar0, "sinv2");
	iVar51 = unk_0x1DC15D899E01E6B0(iVar0, "ppk");
	iVar52 = unk_0x1DC15D899E01E6B0(iVar0, "mts");
	iVar53 = unk_0x1DC15D899E01E6B0(iVar0, "spwia");
	iVar54 = unk_0x1DC15D899E01E6B0(iVar0, "pcl");
	iVar55 = unk_0x1DC15D899E01E6B0(iVar0, "ocl");
	iVar56 = unk_0x1DC15D899E01E6B0(iVar0, "arrt");
	iVar57 = unk_0x1DC15D899E01E6B0(iVar0, "numpt");
	bVar59 = true;
	if (unk_0x6983B0253A3F4D2A(iVar0, "mnumpt") != 2)
	{
		bVar59 = false;
		iVar58 = unk_0x1DC15D899E01E6B0(iVar0, "mnumpt");
	}
	iVar60 = unk_0x1DC15D899E01E6B0(iVar0, "tcp");
	iVar61 = unk_0x1DC15D899E01E6B0(iVar0, "tcr");
	iVar62 = unk_0x1DC15D899E01E6B0(iVar0, "abits");
	iVar63 = unk_0x1DC15D899E01E6B0(iVar0, "sdobs");
	iVar64 = unk_0x1DC15D899E01E6B0(iVar0, "edobs");
	iVar65 = unk_0x1DC15D899E01E6B0(iVar0, "dogps");
	iVar66 = unk_0x1DC15D899E01E6B0(iVar0, "teamv");
	iVar67 = unk_0x1DC15D899E01E6B0(iVar0, "teamrvc");
	iVar68 = unk_0x1DC15D899E01E6B0(iVar0, "mcvbs");
	iVar69 = unk_0x1DC15D899E01E6B0(iVar0, "mcobs");
	iVar70 = unk_0x1DC15D899E01E6B0(iVar0, "mcpbs");
	iVar71 = unk_0x1DC15D899E01E6B0(iVar0, "mcgbs");
	iVar72 = unk_0x1DC15D899E01E6B0(iVar0, "rpgbs");
	iVar73 = unk_0x1DC15D899E01E6B0(iVar0, "mcpbs1");
	iVar74 = unk_0x1DC15D899E01E6B0(iVar0, "mcpbs2");
	iVar75 = unk_0x1DC15D899E01E6B0(iVar0, "mcgbs1");
	iVar76 = unk_0x1DC15D899E01E6B0(iVar0, "mcgbs2");
	iVar77 = unk_0x1DC15D899E01E6B0(iVar0, "rpgbs1");
	iVar78 = unk_0x1DC15D899E01E6B0(iVar0, "rpgbs2");
	iVar79 = unk_0x1DC15D899E01E6B0(iVar0, "inpts");
	iVar80 = unk_0x1DC15D899E01E6B0(iVar0, "ldsf1");
	iVar81 = unk_0x1DC15D899E01E6B0(iVar0, "ldsf2");
	iVar82 = 1;
	if (unk_0x6983B0253A3F4D2A(iVar0, "tehlh") == 7)
	{
		iVar83 = unk_0x1DC15D899E01E6B0(iVar0, "tehlh");
		iVar82 = 1;
	}
	else
	{
		iVar82 = 0;
	}
	iVar84 = unk_0x1DC15D899E01E6B0(iVar0, "spsy1");
	iVar85 = unk_0x1DC15D899E01E6B0(iVar0, "spsy2");
	iVar86 = unk_0x1DC15D899E01E6B0(iVar0, "trlnm");
	iVar87 = unk_0x1DC15D899E01E6B0(iVar0, "tenms");
	iVar88 = unk_0x1DC15D899E01E6B0(iVar0, "csttn");
	iVar89 = unk_0x1DC15D899E01E6B0(iVar0, "nrl");
	iVar90 = unk_0x1DC15D899E01E6B0(iVar0, "tstrt");
	iVar91 = unk_0x1DC15D899E01E6B0(iVar0, "tstop");
	uVar92 = unk_0x1DC15D899E01E6B0(iVar0, "sms");
	iVar93 = unk_0x1DC15D899E01E6B0(iVar0, "tblpv1");
	iVar94 = unk_0x1DC15D899E01E6B0(iVar0, "tblpv2");
	iVar95 = unk_0x1DC15D899E01E6B0(iVar0, "tblpv3");
	iVar96 = unk_0x1DC15D899E01E6B0(iVar0, "tblpv4");
	iVar97 = unk_0x1DC15D899E01E6B0(iVar0, "thudv1");
	iVar98 = unk_0x1DC15D899E01E6B0(iVar0, "thudv2");
	iVar99 = unk_0x1DC15D899E01E6B0(iVar0, "thudv3");
	iVar100 = unk_0x1DC15D899E01E6B0(iVar0, "thudv4");
	iVar1 = 0;
	while (iVar1 <= (unk_0xC956CDEEE5B5FD64(uVar92) - 1))
	{
		uVar101[iVar1] = unk_0x75C9F5BAC9575331(uVar92, iVar1);
		Global_1603097.f_21877[iVar1 /*38*/] = unk_0xB872CF0BC8201FAA(uVar101[iVar1], "team");
		Global_1603097.f_21877[iVar1 /*38*/].f_1 = unk_0xB872CF0BC8201FAA(uVar101[iVar1], "rule");
		Global_1603097.f_21877[iVar1 /*38*/].f_2 = unk_0xB872CF0BC8201FAA(uVar101[iVar1], "time");
		StringCopy(&(Global_1603097.f_21877[iVar1 /*38*/].f_4[0 /*16*/]), unk_0x47B973AC6EAA5B6C(uVar101[iVar1], "txt0"), 64);
		StringCopy(&(Global_1603097.f_21877[iVar1 /*38*/].f_4[1 /*16*/]), unk_0x47B973AC6EAA5B6C(uVar101[iVar1], "txt1"), 64);
		Global_1603097.f_21877[iVar1 /*38*/].f_3 = unk_0xB872CF0BC8201FAA(uVar101[iVar1], "delay");
		Global_1603097.f_21877[iVar1 /*38*/].f_37 = unk_0xB872CF0BC8201FAA(uVar101[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1603097.f_19 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar66 != 0)
			{
				uVar2 = unk_0x2E23E36C99C8BEE6(iVar66, iVar1);
				Global_1603097.f_26472[iVar1] = uVar2;
			}
			else
			{
				Global_1603097.f_26472[iVar1] = 0;
			}
			if (iVar67 != 0)
			{
				Global_1603097.f_26510[iVar1] = unk_0x2E23E36C99C8BEE6(iVar67, iVar1);
			}
			else
			{
				Global_1603097.f_26510[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/] = { unk_0x09B0244538FE11FC(iVar3, iVar1) };
			}
			if (iVar18 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1810 = unk_0x2E23E36C99C8BEE6(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1831 = unk_0x2E23E36C99C8BEE6(iVar19, iVar1);
			}
			if (iVar20 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2456 = unk_0x2E23E36C99C8BEE6(iVar20, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar21, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2457 = unk_0x2E23E36C99C8BEE6(iVar21, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2457 = 0;
			}
			if (iVar22 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2638 = unk_0x2E23E36C99C8BEE6(iVar22, iVar1);
				unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_73[iVar1 /*5400*/].f_2638), 16);
			}
			if (iVar23 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1812 = unk_0x2E23E36C99C8BEE6(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1905 = unk_0x2E23E36C99C8BEE6(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2683 = unk_0x2E23E36C99C8BEE6(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1809 = unk_0x2E23E36C99C8BEE6(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1811 = unk_0x2E23E36C99C8BEE6(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1832 = unk_0x2E23E36C99C8BEE6(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2684 = unk_0x2E23E36C99C8BEE6(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2685 = unk_0x2E23E36C99C8BEE6(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_32 = unk_0x2E23E36C99C8BEE6(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_33 = unk_0x2E23E36C99C8BEE6(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_35 = unk_0x2E23E36C99C8BEE6(iVar33, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1658 = unk_0x2E23E36C99C8BEE6(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1656 = unk_0x2E23E36C99C8BEE6(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1655 = unk_0x2E23E36C99C8BEE6(iVar37, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar39, iVar1) == 2 && iVar39 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1657 = unk_0x2E23E36C99C8BEE6(iVar39, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1657 = 60000;
			}
			if (unk_0x7C2817C35F97E35E(iVar40, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1662 = unk_0x2E23E36C99C8BEE6(iVar40, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1662 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar41, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1661 = unk_0x2E23E36C99C8BEE6(iVar41, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1661 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar43, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1663 = unk_0x2E23E36C99C8BEE6(iVar43, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1663 = 60000;
			}
			if (unk_0x7C2817C35F97E35E(iVar42, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1664 = unk_0x2E23E36C99C8BEE6(iVar42, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1664 = 0;
			}
			if (iVar44 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_40 = unk_0x2E23E36C99C8BEE6(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_41 = unk_0x2E23E36C99C8BEE6(iVar45, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar46, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_89 = unk_0x2E23E36C99C8BEE6(iVar46, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_89 = -1;
			}
			if (unk_0x7C2817C35F97E35E(iVar47, iVar1) == 2 && unk_0x7C2817C35F97E35E(iVar48, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_139 = unk_0x2E23E36C99C8BEE6(iVar47, iVar1);
				Global_1603097.f_73[iVar1 /*5400*/].f_140 = unk_0x2E23E36C99C8BEE6(iVar48, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_139 = -1;
				Global_1603097.f_73[iVar1 /*5400*/].f_140 = -1;
			}
			if (iVar49 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_90 = unk_0x2E23E36C99C8BEE6(iVar49, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_91 = unk_0x2E23E36C99C8BEE6(iVar50, iVar1);
			}
			if (iVar51 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_36 = unk_0x2E23E36C99C8BEE6(iVar51, iVar1);
			}
			if (iVar52 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_37 = unk_0x2E23E36C99C8BEE6(iVar52, iVar1);
			}
			if (iVar53 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1659 = unk_0x2E23E36C99C8BEE6(iVar53, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_1660 = unk_0x2E23E36C99C8BEE6(iVar38, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_3 = unk_0x7017D324A3C28EF0(iVar34, iVar1);
			}
			if (iVar54 != 0)
			{
				Global_1603097.f_21674[iVar1] = unk_0x2E23E36C99C8BEE6(iVar54, iVar1);
			}
			if (iVar55 != 0)
			{
				Global_1603097.f_21679[iVar1] = unk_0x2E23E36C99C8BEE6(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_34 = unk_0x2E23E36C99C8BEE6(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1603097.f_21[iVar1] = unk_0x2E23E36C99C8BEE6(iVar57, iVar1);
			}
			if (Global_1603097.f_21[iVar1] < 1)
			{
				Global_1603097.f_21[iVar1] = 1;
			}
			if (bVar59)
			{
				Global_1603097.f_26[iVar1] = 0;
			}
			else
			{
				if (iVar58 != 0)
				{
					Global_1603097.f_26[iVar1] = unk_0x2E23E36C99C8BEE6(iVar58, iVar1);
				}
				if (Global_1603097.f_26[iVar1] < 0)
				{
					Global_1603097.f_26[iVar1] = 0;
				}
			}
			if (iVar60 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_4 = { unk_0x09B0244538FE11FC(iVar60, iVar1) };
			}
			if (iVar61 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_7 = { unk_0x09B0244538FE11FC(iVar61, iVar1) };
			}
			if (iVar62 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_405 = unk_0x2E23E36C99C8BEE6(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_406 = unk_0x2E23E36C99C8BEE6(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_407 = unk_0x2E23E36C99C8BEE6(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_408 = unk_0x2E23E36C99C8BEE6(iVar65, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar80, iVar1) == 2 && iVar80 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_187 = unk_0x2E23E36C99C8BEE6(iVar80, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_187 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar81, iVar1) == 2 && iVar81 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_188 = unk_0x2E23E36C99C8BEE6(iVar81, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_188 = 0;
			}
			if (iVar68 != 0)
			{
				Global_1603097.f_21867[iVar1] = unk_0x2E23E36C99C8BEE6(iVar68, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar69, iVar1) == 2)
			{
				Global_1603097.f_21872[iVar1] = unk_0x2E23E36C99C8BEE6(iVar69, iVar1);
			}
			else
			{
				Global_1603097.f_21872[iVar1] = 0;
			}
			if (iVar70 != 0)
			{
				Global_1603097.f_21823[iVar1] = unk_0x2E23E36C99C8BEE6(iVar70, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_1603097.f_21854[iVar1 /*3*/][0] = unk_0x2E23E36C99C8BEE6(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1603097.f_21854[iVar1 /*3*/][1] = unk_0x2E23E36C99C8BEE6(iVar74, iVar1);
			}
			if (Global_1603097.f_21823[iVar1] != 0 && Global_1603097.f_21854[iVar1 /*3*/][0] == 0)
			{
				Global_1603097.f_21854[iVar1 /*3*/][0] = Global_1603097.f_21823[iVar1];
			}
			if (iVar71 != 0)
			{
				Global_1603097.f_21818[iVar1] = unk_0x2E23E36C99C8BEE6(iVar71, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1603097.f_21841[iVar1 /*3*/][0] = unk_0x2E23E36C99C8BEE6(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1603097.f_21841[iVar1 /*3*/][1] = unk_0x2E23E36C99C8BEE6(iVar76, iVar1);
			}
			if (Global_1603097.f_21818[iVar1] != 0 && Global_1603097.f_21841[iVar1 /*3*/][0] == 0)
			{
				Global_1603097.f_21841[iVar1 /*3*/][0] = Global_1603097.f_21818[iVar1];
			}
			if (iVar72 != 0)
			{
				Global_1603097.f_21813[iVar1] = unk_0x2E23E36C99C8BEE6(iVar72, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_1603097.f_21828[iVar1 /*3*/][0] = unk_0x2E23E36C99C8BEE6(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_1603097.f_21828[iVar1 /*3*/][1] = unk_0x2E23E36C99C8BEE6(iVar78, iVar1);
			}
			if (Global_1603097.f_21813[iVar1] != 0 && Global_1603097.f_21828[iVar1 /*3*/][0] == 0)
			{
				Global_1603097.f_21828[iVar1 /*3*/][0] = Global_1603097.f_21813[iVar1];
			}
			if (iVar79 != 0)
			{
				Global_1603097.f_21689[iVar1] = unk_0x2E23E36C99C8BEE6(iVar79, iVar1);
			}
			if (iVar82 && iVar83 != 0)
			{
				Global_1603097.f_21721[iVar1] = unk_0x2E23E36C99C8BEE6(iVar83, iVar1);
			}
			else
			{
				Global_1603097.f_21721[iVar1] = 3;
			}
			if (iVar84 != 0)
			{
				StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4906[0 /*16*/]), unk_0xE54D28595F926D0B(iVar84, iVar1), 64);
			}
			if (iVar85 != 0)
			{
				StringCopy(&(Global_1603097.f_73[iVar1 /*5400*/].f_4906[1 /*16*/]), unk_0xE54D28595F926D0B(iVar85, iVar1), 64);
			}
			if (iVar87 != 0)
			{
				Global_1603097.f_21694[iVar1] = unk_0x2E23E36C99C8BEE6(iVar87, iVar1);
			}
			if (iVar88 != 0)
			{
				StringCopy(&(Global_1603097.f_21699[iVar1 /*4*/]), unk_0xE54D28595F926D0B(iVar88, iVar1), 16);
			}
			if (iVar86 != 0)
			{
				Global_1603097.f_21716[iVar1] = unk_0x2E23E36C99C8BEE6(iVar86, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar90, iVar1) == 2 && iVar90 != 0)
			{
				Global_1603097.f_61211[iVar1] = unk_0x2E23E36C99C8BEE6(iVar90, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar91, iVar1) == 2 && iVar91 != 0)
			{
				Global_1603097.f_61216[iVar1] = unk_0x2E23E36C99C8BEE6(iVar91, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_14 = unk_0x2E23E36C99C8BEE6(iVar4, iVar1);
			}
			if (iVar5 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_15 = { unk_0x09B0244538FE11FC(iVar5, iVar1) };
			}
			if (iVar6 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_18 = unk_0x2E23E36C99C8BEE6(iVar6, iVar1);
			}
			if (iVar7 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_19 = { unk_0x09B0244538FE11FC(iVar7, iVar1) };
			}
			if (iVar8 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_22 = unk_0x2E23E36C99C8BEE6(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_23 = unk_0x2E23E36C99C8BEE6(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_24 = unk_0x2E23E36C99C8BEE6(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_25 = unk_0x2E23E36C99C8BEE6(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_26 = unk_0x2E23E36C99C8BEE6(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_27 = unk_0x2E23E36C99C8BEE6(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_28 = unk_0x2E23E36C99C8BEE6(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_29 = unk_0x2E23E36C99C8BEE6(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_30 = unk_0x2E23E36C99C8BEE6(iVar16, iVar1);
			}
			if (iVar17 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_31 = unk_0x2E23E36C99C8BEE6(iVar17, iVar1);
			}
			if (iVar89 != 0)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_38 = unk_0x2E23E36C99C8BEE6(iVar89, iVar1);
			}
			if (unk_0x7C2817C35F97E35E(iVar93, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2675 = unk_0x2E23E36C99C8BEE6(iVar93, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2675 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar94, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2676 = unk_0x2E23E36C99C8BEE6(iVar94, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2676 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar95, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2677 = unk_0x2E23E36C99C8BEE6(iVar95, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2677 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar96, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2678 = unk_0x2E23E36C99C8BEE6(iVar96, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2678 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar97, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2679 = unk_0x2E23E36C99C8BEE6(iVar97, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2679 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar98, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2680 = unk_0x2E23E36C99C8BEE6(iVar98, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2680 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar99, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2681 = unk_0x2E23E36C99C8BEE6(iVar99, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2681 = 0;
			}
			if (unk_0x7C2817C35F97E35E(iVar100, iVar1) == 2)
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2682 = unk_0x2E23E36C99C8BEE6(iVar100, iVar1);
			}
			else
			{
				Global_1603097.f_73[iVar1 /*5400*/].f_2682 = 0;
			}
		}
		iVar1++;
	}
}

void func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x5265B2D07FA93601(iParam0, "rule");
	Global_1603097.f_38 = unk_0xB872CF0BC8201FAA(iVar0, "time");
	Global_1603097.f_40 = unk_0xB872CF0BC8201FAA(iVar0, "score");
	Global_1603097.f_51 = unk_0xB872CF0BC8201FAA(iVar0, "prule");
	Global_1603097.f_32425 = unk_0xB872CF0BC8201FAA(iVar0, "ptyp");
	Global_1603097.f_41 = unk_0xB872CF0BC8201FAA(iVar0, "blip");
	Global_1603097.f_43 = unk_0xB872CF0BC8201FAA(iVar0, "tag");
	Global_1603097.f_44 = unk_0xB872CF0BC8201FAA(iVar0, "voice");
	Global_1603097.f_45 = unk_0xB872CF0BC8201FAA(iVar0, "radio");
	Global_1603097.f_46 = unk_0xB872CF0BC8201FAA(iVar0, "aim");
	Global_1603097.f_26521 = unk_0xB872CF0BC8201FAA(iVar0, "pol");
	Global_1603097.f_34 = unk_0xB872CF0BC8201FAA(iVar0, "liv");
	Global_1603097.f_26139 = unk_0xB872CF0BC8201FAA(iVar0, "traf");
	Global_1603097.f_57774 = unk_0xB872CF0BC8201FAA(iVar0, "tod");
	Global_1603097.f_57759 = unk_0xB872CF0BC8201FAA(iVar0, "weth");
	Global_1603097.f_57776 = unk_0xB872CF0BC8201FAA(iVar0, "apeds");
	Global_1603097.f_57775 = unk_0xB872CF0BC8201FAA(iVar0, "vehd");
	Global_1603097.f_49 = unk_0xB872CF0BC8201FAA(iVar0, "vdm");
	Global_1603097.f_47 = unk_0xB872CF0BC8201FAA(iVar0, "tdm");
	Global_1603097.f_21674[0] = unk_0xB872CF0BC8201FAA(iVar0, "pcr");
	Global_1603097.f_21679[0] = unk_0xB872CF0BC8201FAA(iVar0, "ocr");
}

void func_155(int iParam0, int iParam1, bool bParam2)
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
	
	iVar0 = unk_0x5265B2D07FA93601(iParam0, "gen");
	Global_1603097 = unk_0xB872CF0BC8201FAA(iVar0, "type");
	Global_1603097.f_8 = unk_0xF4028E47F9C1A208(iVar0, "ngjob");
	unk_0x94E72F17611BCD3C(Global_1603097.f_6, 0);
	bVar1 = unk_0xF4028E47F9C1A208(iVar0, "photo");
	if (bVar1)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_1603097.f_6), 0);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_1603097.f_6), 0);
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ivm") == 2)
	{
		Global_1603097.f_26471 = unk_0xB872CF0BC8201FAA(iVar0, "ivm");
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "fixcam") == 2)
	{
		Global_1603097.f_61224 = unk_0xB872CF0BC8201FAA(iVar0, "fixcam");
	}
	else
	{
		Global_1603097.f_61224 = 0;
	}
	Global_1603097.f_4 = unk_0xB872CF0BC8201FAA(iVar0, "optbs");
	iVar2 = 0;
	while (iVar2 <= 16)
	{
		Global_1603097.f_22258[iVar2 /*27*/] = unk_0xB872CF0BC8201FAA(iVar0, "trainbs");
		Global_1603097.f_22258[iVar2 /*27*/].f_1 = { unk_0xC6C61B31E770F147(iVar0, "trainsp") };
		Global_1603097.f_22258[iVar2 /*27*/].f_4 = { unk_0xC6C61B31E770F147(iVar0, "trainep") };
		if (unk_0x6983B0253A3F4D2A(iVar0, "trains") == 3)
		{
			Global_1603097.f_22258[iVar2 /*27*/].f_25 = unk_0xC8D2B5D05633FD27(iVar0, "trains");
		}
		Global_1603097.f_22258[iVar2 /*27*/].f_26 = unk_0xB872CF0BC8201FAA(iVar0, "trainsd");
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			Global_1603097.f_22258[iVar2 /*27*/].f_7[iVar3] = unk_0xB872CF0BC8201FAA(iVar0, "trainct");
			Global_1603097.f_22258[iVar2 /*27*/].f_13[iVar3] = unk_0xB872CF0BC8201FAA(iVar0, "trainca");
			Global_1603097.f_22258[iVar2 /*27*/].f_19[iVar3] = unk_0xB872CF0BC8201FAA(iVar0, "trainci");
			iVar3++;
		}
		iVar2++;
	}
	Global_1603097.f_64 = { unk_0xC6C61B31E770F147(iVar0, "camo") };
	Global_1603097.f_67 = { unk_0xC6C61B31E770F147(iVar0, "camro") };
	Global_1603097.f_58 = { unk_0xC6C61B31E770F147(iVar0, "cam") };
	Global_1603097.f_70 = unk_0xC8D2B5D05633FD27(iVar0, "camh");
	Global_1603097.f_57136 = unk_0xC8D2B5D05633FD27(iVar0, "dmbds");
	Global_1603097.f_52 = { unk_0xC6C61B31E770F147(iVar0, "phpo") };
	StringCopy(&(Global_1603097.f_57319[0 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, "szTag"), 64);
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1603097.f_57454[iVar2 /*6*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_83())
	{
		Global_1603097.f_2 = unk_0xB872CF0BC8201FAA(iVar0, "subtype");
		Global_1603097.f_61221 = unk_0xB872CF0BC8201FAA(iVar0, "testcomplete");
		if ((Global_1603097.f_2 == 6 || Global_1603097.f_2 == 5) || Global_1603097.f_2 == 4)
		{
			if (unk_0x6983B0253A3F4D2A(iVar0, "teamBal") == 2)
			{
				Global_1603097.f_61223 = unk_0xB872CF0BC8201FAA(iVar0, "numRounds");
			}
			else
			{
				Global_1603097.f_61223 = 1;
			}
			if (Global_1603097.f_61223 < 1)
			{
				Global_1603097.f_61223 = 1;
			}
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, "teamBal") == 2)
		{
			Global_1603097.f_61225 = unk_0xB872CF0BC8201FAA(iVar0, "teamBal");
		}
		else
		{
			Global_1603097.f_61225 = 5;
		}
	}
	Global_1603097.f_61222 = unk_0xB872CF0BC8201FAA(iVar0, "testcomplete");
	Global_1603097.f_39 = unk_0xB872CF0BC8201FAA(iVar0, "endtype");
	Global_1603097.f_10 = unk_0xB872CF0BC8201FAA(iVar0, "menubs");
	if (unk_0x6983B0253A3F4D2A(iVar0, "ovrpc") == 2)
	{
		Global_1603097.f_37133 = unk_0xB872CF0BC8201FAA(iVar0, "ovrpc");
	}
	else
	{
		Global_1603097.f_37133 = -1;
	}
	Global_1603097.f_11 = unk_0xB872CF0BC8201FAA(iVar0, "menubs2");
	if (unk_0x6983B0253A3F4D2A(iVar0, "menubs3") == 2)
	{
		Global_1603097.f_12 = unk_0xB872CF0BC8201FAA(iVar0, "menubs3");
	}
	else
	{
		Global_1603097.f_12 = 0;
	}
	Global_1603097.f_26520 = unk_0xB872CF0BC8201FAA(iVar0, "teamvbs");
	Global_1603097.f_13 = unk_0xB872CF0BC8201FAA(iVar0, "cncmbs");
	Global_1603097.f_72634 = unk_0xB872CF0BC8201FAA(iVar0, "todhr");
	Global_1603097.f_72635 = unk_0xB872CF0BC8201FAA(iVar0, "todmn");
	Global_1603097.f_9 = unk_0xB872CF0BC8201FAA(iVar0, "cmpts");
	Global_1603097.f_37 = unk_0xB872CF0BC8201FAA(iVar0, "rank");
	Global_1603097.f_57778 = unk_0xB872CF0BC8201FAA(iVar0, "charcon");
	Global_1603097.f_57778 = unk_0xB872CF0BC8201FAA(iVar0, "char");
	Global_1603097.f_57780 = unk_0xB872CF0BC8201FAA(iVar0, "xpr");
	Global_1603097.f_57781 = unk_0xB872CF0BC8201FAA(iVar0, "cshr");
	Global_1603097.f_57785 = unk_0xB872CF0BC8201FAA(iVar0, "ctsc");
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecsbs") == 2)
	{
		Global_1603097.f_69833.f_16 = unk_0xB872CF0BC8201FAA(iVar0, "ecsbs");
	}
	else
	{
		Global_1603097.f_69833.f_16 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecsbs2") == 2)
	{
		Global_1603097.f_69833.f_17 = unk_0xB872CF0BC8201FAA(iVar0, "ecsbs2");
	}
	else
	{
		Global_1603097.f_69833.f_17 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecsrng") == 2)
	{
		Global_1603097.f_69833.f_62 = unk_0xB872CF0BC8201FAA(iVar0, "ecsrng");
	}
	else
	{
		Global_1603097.f_69833.f_62 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecscp") == 5)
	{
		Global_1603097.f_69833.f_54 = { unk_0xC6C61B31E770F147(iVar0, "ecscp") };
	}
	else
	{
		Global_1603097.f_69833.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecscr") == 3)
	{
		Global_1603097.f_69833.f_60 = unk_0xC8D2B5D05633FD27(iVar0, "ecscr");
	}
	else
	{
		Global_1603097.f_69833.f_60 = 0f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "ecscs") == 5)
	{
		Global_1603097.f_69833.f_57 = { unk_0xC6C61B31E770F147(iVar0, "ecscs") };
	}
	else
	{
		Global_1603097.f_69833.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/].f_1 = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/].f_2 = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_69833.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_69833.f_63[iVar8 /*12*/].f_4), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1603097.f_69833.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "clbscr") == 2)
	{
		Global_1603097.f_70826 = unk_0xB872CF0BC8201FAA(iVar0, "clbscr");
	}
	else
	{
		Global_1603097.f_70826 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "disar") == 2)
	{
		Global_1603097.f_70827 = unk_0xB872CF0BC8201FAA(iVar0, "disar");
	}
	else
	{
		Global_1603097.f_70827 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "rlopt") == 2)
	{
		Global_1603097.f_70615 = unk_0xB872CF0BC8201FAA(iVar0, "rlopt");
	}
	else
	{
		Global_1603097.f_70615 = 0;
	}
	iVar15 = unk_0xB872CF0BC8201FAA(iVar0, "gpmn");
	Global_1603097.f_72 = iVar15;
	iVar16 = unk_0xB872CF0BC8201FAA(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1603097.f_57773 = iVar16;
	}
	else
	{
		Global_1603097.f_57773 = -1;
	}
	Global_1603097.f_57772 = unk_0xB872CF0BC8201FAA(iVar0, "ausc");
	Global_1603097.f_15 = unk_0xB872CF0BC8201FAA(iVar0, "minNu");
	Global_1603097.f_14 = unk_0xB872CF0BC8201FAA(iVar0, "num");
	if (Global_1603097.f_14 == -1)
	{
		Global_1603097.f_14 = 30;
	}
	Global_1603097.f_16 = unk_0xB872CF0BC8201FAA(iVar0, "time");
	Global_1603097.f_55 = { unk_0xC6C61B31E770F147(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1603097.f_70267 = { unk_0xC6C61B31E770F147(iVar0, &cVar17) };
	Global_1603097.f_70281 = unk_0xB872CF0BC8201FAA(iVar0, "apwbs");
	Global_1603097.f_70270 = unk_0xB872CF0BC8201FAA(iVar0, "wrploc");
	Global_1603097.f_70284 = unk_0xB872CF0BC8201FAA(iVar0, "twrst");
	Global_1603097.f_70282 = unk_0xB872CF0BC8201FAA(iVar0, "iplop");
	Global_1603097.f_70283 = unk_0xB872CF0BC8201FAA(iVar0, "intop");
	if (unk_0x6983B0253A3F4D2A(iVar0, "copteam") == 2)
	{
		Global_1603097.f_26522 = unk_0xB872CF0BC8201FAA(iVar0, "copteam");
	}
	else
	{
		Global_1603097.f_26522 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1603097.f_57470), unk_0x47B973AC6EAA5B6C(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1603097.f_57470), "", 64);
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
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1603097.f_72858[iVar15 /*33*/][iVar21 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1603097.f_72858[iVar15 /*33*/][iVar21 /*16*/]), "", 64);
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
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
			{
				Global_1603097.f_26177[iVar15 /*23*/][iVar21] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
			}
			else
			{
				Global_1603097.f_26177[iVar15 /*23*/][iVar21] = 0;
			}
			iVar21++;
		}
		iVar22 = 0;
		while (iVar22 <= 1)
		{
			iVar21 = 0;
			while (iVar21 <= 21)
			{
				StringCopy(&cVar9, "t", 8);
				StringIntConCat(&cVar9, iVar15, 8);
				StringIntConCat(&cVar9, iVar22, 8);
				StringConCat(&cVar9, "rv", 8);
				StringIntConCat(&cVar9, iVar21, 8);
				if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
				{
					Global_1603097.f_26270[iVar15 /*47*/][iVar22 /*23*/][iVar21] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
				}
				else
				{
					Global_1603097.f_26270[iVar15 /*47*/][iVar22 /*23*/][iVar21] = 0;
				}
				iVar21++;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_57764[iVar15] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_57764[iVar15] = 0;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_72793[iVar15 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_72793[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_72991[iVar15 /*6*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 24);
		}
		else
		{
			StringCopy(&(Global_1603097.f_72991[iVar15 /*6*/]), "", 24);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_73016[iVar15] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_73016[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_70828[iVar15] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70828[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_57786[iVar15] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_57786[iVar15] = -1;
		}
		iVar15++;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
	{
		StringCopy(&(Global_1603097.f_57486), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 24);
	}
	else
	{
		StringCopy(&(Global_1603097.f_57486), "", 24);
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "vsclout") == 2)
	{
		Global_1603097.f_61276 = unk_0xB872CF0BC8201FAA(iVar0, "vsclout");
	}
	else
	{
		Global_1603097.f_61276 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "vsthout") == 2)
	{
		Global_1603097.f_61277 = unk_0xB872CF0BC8201FAA(iVar0, "vsthout");
	}
	else
	{
		Global_1603097.f_61277 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "dspteam") == 2)
	{
		Global_1603097.f_70851 = unk_0xB872CF0BC8201FAA(iVar0, "dspteam");
	}
	else
	{
		Global_1603097.f_70851 = -1;
	}
	if (!func_64() && !func_157())
	{
		if (unk_0xA0752C5792647C73(iParam1))
		{
			StringCopy(&(Global_1603097.f_57168), unk_0x47B973AC6EAA5B6C(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_57168), func_156(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1603097.f_57168), unk_0x47B973AC6EAA5B6C(iVar0, "nm"), 64);
	}
	Global_1603097.f_57808 = unk_0xB872CF0BC8201FAA(iVar0, "mgrk");
	Global_1603097.f_57809 = unk_0xB872CF0BC8201FAA(iVar0, "mght");
	StringCopy(&(Global_1603097.f_57190[0 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[1 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[2 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[3 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[4 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[5 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[6 /*16*/]), "", 64);
	StringCopy(&(Global_1603097.f_57190[7 /*16*/]), "", 64);
	uVar23 = unk_0x1DC15D899E01E6B0(iVar0, "dec");
	iVar24 = unk_0x6BD5B77CFC3C9B4B(unk_0xE54D28595F926D0B(uVar23, 0));
	if (iParam1 == -1 || unk_0xA0752C5792647C73(iParam1))
	{
		if (iVar24 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0xC956CDEEE5B5FD64(iVar23) - 1))
			{
				StringCopy(&(Global_1603097.f_57190[iVar2 /*16*/]), unk_0xE54D28595F926D0B(iVar23, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar26 = unk_0xE54D28595F926D0B(iVar23, 0);
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
					StringCopy(&(Global_1603097.f_57190[iVar2 /*16*/]), unk_0xECFC7416DAF7F6DA(sVar26, (63 * iVar2), iVar25), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1603097.f_57190[0 /*16*/]), func_156(), 64);
	}
	Global_1603097.f_19 = unk_0xB872CF0BC8201FAA(iVar0, "tnum");
	Global_1603097.f_20 = unk_0xB872CF0BC8201FAA(iVar0, "mtnum");
	if (Global_1603097 == 1)
	{
		if (Global_1603097.f_19 > 4)
		{
			Global_1603097.f_19 = 4;
		}
	}
	else if (Global_1603097.f_19 > 4)
	{
		Global_1603097.f_19 = 4;
	}
	Global_1603097.f_53553 = unk_0xB872CF0BC8201FAA(iVar0, "atmdm");
	Global_1603097.f_33 = unk_0xB872CF0BC8201FAA(iVar0, "trel");
	Global_1603097.f_57782 = unk_0xB872CF0BC8201FAA(iVar0, "ltm");
	Global_1603097.f_61 = { unk_0xC6C61B31E770F147(iVar0, "vcpr") };
	if (unk_0x6983B0253A3F4D2A(iVar0, "hstat") == 2)
	{
		Global_1603097.f_57753 = unk_0xB872CF0BC8201FAA(iVar0, "hstat");
	}
	else
	{
		Global_1603097.f_57753 = 0;
	}
	iVar27 = 0;
	while (iVar27 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar27, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_37069[iVar27 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_37069[iVar27 /*3*/] = { 0f, 0f, 0f };
		}
		iVar27++;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "numzr") == 2)
	{
		Global_1603097.f_37130 = unk_0xB872CF0BC8201FAA(iVar0, "numzr");
	}
	else
	{
		Global_1603097.f_37130 = 0;
	}
	iVar28 = unk_0x5265B2D07FA93601(iParam0, "ene");
	iVar29 = unk_0xB872CF0BC8201FAA(iVar28, "no");
	if (unk_0x6983B0253A3F4D2A(iVar0, "hpped") == 2 && iVar29 > unk_0xB872CF0BC8201FAA(iVar0, "hpped"))
	{
		Global_1603097.f_53544 = unk_0xB872CF0BC8201FAA(iVar0, "hpped");
	}
	else
	{
		Global_1603097.f_53544 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hpped2") == 2 && iVar29 > unk_0xB872CF0BC8201FAA(iVar0, "hpped2"))
	{
		Global_1603097.f_53545 = unk_0xB872CF0BC8201FAA(iVar0, "hpped2");
	}
	else
	{
		Global_1603097.f_53545 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hpped3") == 2 && iVar29 > unk_0xB872CF0BC8201FAA(iVar0, "hpped3"))
	{
		Global_1603097.f_53546 = unk_0xB872CF0BC8201FAA(iVar0, "hpped3");
	}
	else
	{
		Global_1603097.f_53546 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "tshd") == 2)
	{
		Global_1603097.f_57805 = unk_0xB872CF0BC8201FAA(iVar0, "tshd");
	}
	else
	{
		Global_1603097.f_57805 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atspos") == 5)
	{
		Global_1603097.f_72691 = { unk_0xC6C61B31E770F147(iVar0, "atspos") };
	}
	else
	{
		Global_1603097.f_72691 = { 0f, 0f, 0f };
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atscmp") == 5)
	{
		Global_1603097.f_72685 = { unk_0xC6C61B31E770F147(iVar0, "atscmp") };
	}
	else
	{
		Global_1603097.f_72685 = { 0f, 0f, 0f };
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atscmr") == 5)
	{
		Global_1603097.f_72688 = { unk_0xC6C61B31E770F147(iVar0, "atscmr") };
	}
	else
	{
		Global_1603097.f_72688 = { 0f, 0f, 0f };
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atsfov") == 3)
	{
		Global_1603097.f_72694 = unk_0xC8D2B5D05633FD27(iVar0, "atsfov");
	}
	else
	{
		Global_1603097.f_72694 = 45f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atshed") == 3)
	{
		Global_1603097.f_72695 = unk_0xC8D2B5D05633FD27(iVar0, "atshed");
	}
	else
	{
		Global_1603097.f_72695 = 0f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "atsveh") == 2)
	{
		Global_1603097.f_72696 = unk_0xB872CF0BC8201FAA(iVar0, "atsveh");
	}
	else
	{
		Global_1603097.f_72696 = 0;
	}
	Global_1603097.f_18 = Global_1603097.f_19;
	if (unk_0x6983B0253A3F4D2A(iVar0, "hpdt1") == 2)
	{
		Global_1603097.f_57754[0] = unk_0xB872CF0BC8201FAA(iVar0, "hpdt1");
	}
	else
	{
		Global_1603097.f_57754[0] = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hpdt2") == 2)
	{
		Global_1603097.f_57754[1] = unk_0xB872CF0BC8201FAA(iVar0, "hpdt2");
	}
	else
	{
		Global_1603097.f_57754[1] = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "vdt") == 2)
	{
		Global_1603097.f_57757 = unk_0xB872CF0BC8201FAA(iVar0, "vdt");
	}
	else
	{
		Global_1603097.f_57757 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrbs") == 2)
	{
		Global_1603097.f_70833 = unk_0xB872CF0BC8201FAA(iVar0, "hbrbs");
	}
	else
	{
		Global_1603097.f_70833 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrtt") == 2)
	{
		Global_1603097.f_70834 = unk_0xB872CF0BC8201FAA(iVar0, "hbrtt");
	}
	else
	{
		Global_1603097.f_70834 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrttm") == 2)
	{
		Global_1603097.f_70835 = unk_0xB872CF0BC8201FAA(iVar0, "hbrttm");
	}
	else
	{
		Global_1603097.f_70835 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrtrl") == 2)
	{
		Global_1603097.f_70836 = unk_0xB872CF0BC8201FAA(iVar0, "hbrtrl");
	}
	else
	{
		Global_1603097.f_70836 = -1;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrpdt") == 2)
	{
		Global_1603097.f_70838 = unk_0xB872CF0BC8201FAA(iVar0, "hbrpdt");
	}
	else
	{
		Global_1603097.f_70838 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrvdt") == 2)
	{
		Global_1603097.f_70840 = unk_0xB872CF0BC8201FAA(iVar0, "hbrvdt");
	}
	else
	{
		Global_1603097.f_70840 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrkt") == 2)
	{
		Global_1603097.f_70842 = unk_0xB872CF0BC8201FAA(iVar0, "hbrkt");
	}
	else
	{
		Global_1603097.f_70842 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hbrph") == 2)
	{
		Global_1603097.f_70845 = unk_0xB872CF0BC8201FAA(iVar0, "hbrph");
	}
	else
	{
		Global_1603097.f_70845 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "hecam") == 2)
	{
		Global_1603097.f_70846 = unk_0xB872CF0BC8201FAA(iVar0, "hecam");
	}
	else
	{
		Global_1603097.f_70846 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "sdrvm") == 2)
	{
		Global_1603097.f_73034 = unk_0xB872CF0BC8201FAA(iVar0, "sdrvm");
	}
	else
	{
		Global_1603097.f_73034 = 10000;
	}
	if (((unk_0x6983B0253A3F4D2A(iVar0, "hmmtt") == 2 && unk_0x6983B0253A3F4D2A(iVar0, "hmmts") == 2) && unk_0x6983B0253A3F4D2A(iVar0, "hmmte") == 2) && unk_0x6983B0253A3F4D2A(iVar0, "hmmth") == 2)
	{
		Global_1603097.f_70847 = unk_0xB872CF0BC8201FAA(iVar0, "hmmtt");
		Global_1603097.f_70848 = unk_0xB872CF0BC8201FAA(iVar0, "hmmts");
		Global_1603097.f_70849 = unk_0xB872CF0BC8201FAA(iVar0, "hmmte");
		Global_1603097.f_70850 = unk_0xB872CF0BC8201FAA(iVar0, "hmmth");
	}
	else
	{
		Global_1603097.f_70847 = 0;
		Global_1603097.f_70848 = 0;
		Global_1603097.f_70849 = 0;
		Global_1603097.f_70850 = 0;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "tstrm") == 2)
	{
		Global_1603097.f_72633 = unk_0xB872CF0BC8201FAA(iVar0, "tstrm");
	}
	else
	{
		Global_1603097.f_72633 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_60916[iVar2 /*8*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1603097.f_60916[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_53397[iVar2 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_53397[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_53446[iVar2 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_53446[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_53495[iVar2 /*16*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_53495[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar30 = 0;
	while (iVar30 <= 3)
	{
		StringCopy(&cVar9, "ofit1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61250[iVar30 /*5*/][0] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61250[iVar30 /*5*/][0] = 0;
		}
		StringCopy(&cVar9, "ofit2", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61250[iVar30 /*5*/][1] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61250[iVar30 /*5*/][1] = 0;
		}
		StringCopy(&cVar9, "ofit3", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61250[iVar30 /*5*/][2] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61250[iVar30 /*5*/][2] = 0;
		}
		StringCopy(&cVar9, "ofit4", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61250[iVar30 /*5*/][3] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61250[iVar30 /*5*/][3] = 0;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61293[iVar30 /*2*/][0] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61293[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61307[iVar30 /*2*/][0] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61307[iVar30 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61278[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61278[iVar30] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61283[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61283[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_70271[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70271[iVar30] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_70276[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70276[iVar30] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2 && !func_128())
		{
			Global_1603097.f_70610[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70610[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_70616[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70616[iVar30] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_26505[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_26505[iVar30] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_26515[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_26515[iVar30] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_56811[iVar30 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_56811[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_56824[iVar30 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_56824[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 3)
		{
			Global_1603097.f_56837[iVar30] = unk_0xC8D2B5D05633FD27(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_56837[iVar30] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61271[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61271[iVar30] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_61302[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_61302[iVar30] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar30, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_55182[iVar30] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_55182[iVar30] = -1;
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
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar11) == 5)
			{
				Global_1603097.f_56936[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar11) };
			}
			else
			{
				Global_1603097.f_56936[iVar30 /*27*/][iVar31 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar30, 16);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar11, iVar31, 16);
			}
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar11) == 3)
			{
				Global_1603097.f_57045[iVar30 /*11*/][iVar31 /*5*/][0] = unk_0xC8D2B5D05633FD27(iVar0, &cVar11);
			}
			else
			{
				Global_1603097.f_57045[iVar30 /*11*/][iVar31 /*5*/][0] = 0f;
			}
			iVar32 = 0;
			while (iVar32 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (unk_0x6983B0253A3F4D2A(iVar0, &cVar11) == 5)
				{
					Global_1603097.f_56936[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar11) };
				}
				else
				{
					Global_1603097.f_56936[iVar30 /*27*/][iVar31 /*13*/][iVar32 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar30, 16);
				StringIntConCat(&cVar11, iVar31, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar32, 16);
				if (unk_0x6983B0253A3F4D2A(iVar0, &cVar11) == 3)
				{
					Global_1603097.f_57045[iVar30 /*11*/][iVar31 /*5*/][iVar32] = unk_0xC8D2B5D05633FD27(iVar0, &cVar11);
				}
				else
				{
					Global_1603097.f_57045[iVar30 /*11*/][iVar31 /*5*/][iVar32] = 0f;
				}
				iVar32++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			StringIntConCat(&cVar9, iVar31, 8);
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
			{
				Global_1603097.f_73021[iVar30 /*3*/][iVar31] = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
			}
			else
			{
				Global_1603097.f_73021[iVar30 /*3*/][iVar31] = 0;
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
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
			{
				Global_1603097.f_72698[iVar30 /*13*/][iVar31 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
			}
			else
			{
				Global_1603097.f_72698[iVar30 /*13*/][iVar31 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar30, 8);
			if (iVar31 > 0)
			{
				StringIntConCat(&cVar9, iVar31, 8);
			}
			if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 3)
			{
				Global_1603097.f_72751[iVar30 /*5*/][iVar31] = unk_0xC8D2B5D05633FD27(iVar0, &cVar9);
			}
			else
			{
				Global_1603097.f_72751[iVar30 /*5*/][iVar31] = -1f;
			}
			iVar31++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_72636[iVar30 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_72636[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_72649[iVar30 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_72649[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 5)
		{
			Global_1603097.f_72662[iVar30 /*3*/] = { unk_0xC6C61B31E770F147(iVar0, &cVar9) };
		}
		else
		{
			Global_1603097.f_72662[iVar30 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 3)
		{
			Global_1603097.f_72675[iVar30] = unk_0xC8D2B5D05633FD27(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_72675[iVar30] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar30 > 0)
		{
			StringIntConCat(&cVar9, iVar30, 8);
		}
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 3)
		{
			Global_1603097.f_72680[iVar30] = unk_0xC8D2B5D05633FD27(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_72680[iVar30] = 0f;
		}
		iVar30++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1603097.f_70285[iVar2 /*18*/]), unk_0x47B973AC6EAA5B6C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1603097.f_70285[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2)
		{
			Global_1603097.f_70285[iVar2 /*18*/].f_16 = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70285[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x6983B0253A3F4D2A(iVar0, &cVar9) == 2 && !unk_0x9E9AFDBF482248F6(&(Global_1603097.f_70285[iVar2 /*18*/])))
		{
			Global_1603097.f_70285[iVar2 /*18*/].f_17 = unk_0xB872CF0BC8201FAA(iVar0, &cVar9);
		}
		else
		{
			Global_1603097.f_70285[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "cposr") == 3)
	{
		Global_1603097.f_73035 = unk_0xC8D2B5D05633FD27(iVar0, "cposr");
	}
	else
	{
		Global_1603097.f_73035 = 60f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "cpopr") == 3)
	{
		Global_1603097.f_73036 = unk_0xC8D2B5D05633FD27(iVar0, "cpopr");
	}
	else
	{
		Global_1603097.f_73036 = 5f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "cpohr") == 3)
	{
		Global_1603097.f_73037 = unk_0xC8D2B5D05633FD27(iVar0, "cpohr");
	}
	else
	{
		Global_1603097.f_73037 = 60f;
	}
	if (unk_0x6983B0253A3F4D2A(iVar0, "cdrt") == 3)
	{
		Global_1603097.f_73038 = unk_0xC8D2B5D05633FD27(iVar0, "cdrt");
	}
	else
	{
		Global_1603097.f_73038 = -1f;
	}
}

var func_156()
{
	return unk_0x398E4CFB573BEBB7("CREATOR_NO_T");
}

bool func_157()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 0);
}

void func_158()
{
	if (func_159())
	{
		Global_2434606.f_8 = 0;
	}
	Global_2434606.f_7 = 1;
}

bool func_159()
{
	return unk_0x94E72F17611BCD3C(Global_2428162.f_2, 11);
}

int func_160(int iParam0)
{
	if (unk_0x523427CCABD5EC9C() || (unk_0x7F11C755C90EFEC5() && iParam0 == 0))
	{
		if (unk_0x9BAE9A1778D2A11D(1) == 0 || unk_0x70579BF82B8B3603(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x9BAE9A1778D2A11D(1) == 0)
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
	if (unk_0x523427CCABD5EC9C() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x1B54267BB477DB52() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if ((unk_0x7F11C755C90EFEC5() && unk_0x64F31E45B1E9B4A7() == 0) && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x035E2C7B598704F7() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x708CE249B4F97BF8() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (unk_0x523427CCABD5EC9C() || (unk_0x7F11C755C90EFEC5() && iParam0 == 0))
	{
		if (unk_0x9BAE9A1778D2A11D(0) == 0 || unk_0x70579BF82B8B3603(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x9BAE9A1778D2A11D(0) == 0)
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
	
	Global_1603097.f_57801 = 0;
	if (bParam0)
	{
		Global_1603097.f_37133 = -1;
		Global_1603097.f_10 = 0;
		Global_1603097.f_11 = 0;
		Global_1603097.f_12 = 0;
		Global_1603097.f_70615 = 0;
		Global_1603097.f_9 = 0;
		Global_1603097.f_14 = 0;
		Global_1603097.f_39 = 0;
		Global_1603097.f_16 = 0;
		Global_1603097.f_38 = 0;
		Global_1603097.f_40 = 0;
		Global_1603097.f_41 = 0;
		Global_1603097.f_43 = 0;
		Global_1603097.f_44 = 0;
		Global_1603097.f_45 = 0;
		Global_1603097.f_46 = 0;
		Global_1603097.f_18 = 0;
		Global_1603097.f_19 = 1;
		Global_1603097.f_5 = 0;
		Global_1603097.f_34 = 0;
		Global_1603097.f_37 = 1;
		Global_1603097.f_15 = 0;
		Global_1603097.f_57778 = 0;
		Global_1603097.f_57781 = 0;
		Global_1603097.f_57780 = 0;
		Global_1603097.f_57777 = 0;
		if (bParam1)
		{
			Global_1603097.f_4 = 0;
		}
		Global_1603097.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1603097.f_21877[iVar0 /*38*/] = -1;
			Global_1603097.f_21877[iVar0 /*38*/].f_1 = -1;
			Global_1603097.f_21877[iVar0 /*38*/].f_2 = 0;
			Global_1603097.f_21877[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1603097.f_57782 = 0;
		Global_1603097.f_57783 = 0;
		Global_1603097.f_57784 = 0;
		Global_1603097.f_57773 = -1;
		Global_1603097.f_57772 = 0;
		Global_1603097.f_50 = 0;
		Global_1603097.f_58 = { 0f, 0f, 0f };
		Global_1603097.f_61 = { 0f, 0f, 0f };
		Global_1603097.f_64 = { 0f, 0f, 0f };
		Global_1603097.f_67 = { 0f, 0f, 0f };
		Global_1603097.f_70 = 0f;
		Global_1603097.f_57136 = 0f;
		Global_1603097.f_72 = 0;
		Global_1603097.f_57800 = 0;
		Global_1603097.f_70827 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1603097.f_26161[iVar0] = 0;
			Global_1603097.f_26145[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1603097.f_60916[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1603097.f_72633 = 0;
	Global_1603097.f_33 = 0;
	Global_1603097.f_52 = { 0f, 0f, 0f };
	Global_1603097.f_70826 = -1;
	Global_1603097.f_57779 = 0f;
	StringCopy(&(Global_1603097.f_57168), "", 64);
	StringCopy(&(Global_1603097.f_57470), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1603097.f_57454[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1603097.f_57190[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_170();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1603097.f_21877[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_26[iVar0] = 0;
		Global_1603097.f_70610[iVar0] = 0;
		Global_1603097.f_21[iVar0] = 1;
		Global_1603097.f_56811[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_56824[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_56837[iVar0] = 0f;
		Global_1603097.f_72636[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_72649[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_72662[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_72675[iVar0] = 45f;
		Global_1603097.f_72680[iVar0] = 0f;
		Global_1603097.f_55182[iVar0] = -1;
		StringCopy(&(Global_1603097.f_72991[iVar0 /*6*/]), "", 24);
		Global_1603097.f_73016[iVar0] = 0;
		StringCopy(&(Global_1603097.f_72793[iVar0 /*16*/]), "", 64);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1603097.f_72858[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		iVar0++;
	}
	Global_1603097.f_72685 = { 0f, 0f, 0f };
	Global_1603097.f_72688 = { 0f, 0f, 0f };
	Global_1603097.f_72691 = { 0f, 0f, 0f };
	Global_1603097.f_72694 = 45f;
	Global_1603097.f_72695 = 0f;
	Global_1603097.f_72696 = 0;
	Global_1603097.f_73034 = 10000;
	Global_1603097.f_73035 = 60f;
	Global_1603097.f_73036 = 5f;
	Global_1603097.f_73037 = 60f;
	Global_1603097.f_73038 = -1f;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1603097.f_53397[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1603097.f_53446[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1603097.f_53495[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_168(&(Global_1603097.f_61316[iVar0 /*1269*/]));
		func_166(&(Global_1603097.f_67662[iVar0 /*434*/]));
		iVar0++;
	}
	func_166(&(Global_1603097.f_69833));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1603097.f_70723[iVar0 /*4*/].f_3 = 0;
		Global_1603097.f_70723[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1603097.f_70824 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1603097.f_37069[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1603097.f_37130 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_140(&(Global_1603097.f_57810[iVar0 /*45*/]), iVar0);
		iVar0++;
	}
	Global_1603097.f_61205[0] = 0;
	Global_1603097.f_61205[1] = 0;
	Global_1603097.f_61209 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_165(&(Global_1603097.f_70621[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1603097.f_2 = 0;
	Global_1603097.f_57753 = 0;
	Global_1603097.f_70615 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_57786[iVar0] = -1;
		Global_1603097.f_70828[iVar0] = -1;
		iVar0++;
	}
	Global_1603097.f_57808 = 0;
	Global_1603097.f_57809 = 0;
	Global_1603097.f_70866 = 0.5f;
	Global_1603097.f_61223 = 1;
	Global_1603097.f_61225 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1603097.f_70867[iVar0] = 0f;
		Global_1603097.f_70888[iVar0] = 0f;
		Global_1603097.f_70909[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_26472[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_26510[iVar0] = -1;
		iVar0++;
	}
	Global_1601852 = 0;
	Global_1603097.f_6 = 0;
	Global_1603097.f_57759 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_21841[iVar0 /*3*/][0] = 0;
		Global_1603097.f_21841[iVar0 /*3*/][1] = 0;
		Global_1603097.f_21828[iVar0 /*3*/][0] = 0;
		Global_1603097.f_21828[iVar0 /*3*/][1] = 0;
		Global_1603097.f_21854[iVar0 /*3*/][0] = 0;
		Global_1603097.f_21854[iVar0 /*3*/][1] = 0;
		Global_1603097.f_21867[iVar0] = 0;
		Global_1603097.f_21872[iVar0] = 0;
		Global_1603097.f_61250[iVar0 /*5*/][0] = 0;
		Global_1603097.f_61250[iVar0 /*5*/][1] = 0;
		Global_1603097.f_61250[iVar0 /*5*/][2] = 0;
		Global_1603097.f_61293[iVar0 /*2*/][0] = 0;
		Global_1603097.f_61307[iVar0 /*2*/][0] = 0;
		Global_1603097.f_73[iVar0 /*5400*/] = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_4 = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_7 = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_11 = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_14 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_15 = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_18 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_19 = { 0f, 0f, 0f };
		Global_1603097.f_73[iVar0 /*5400*/].f_22 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_23 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_35 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_24 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_25 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_26 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_27 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_28 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_29 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_30 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_31 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_32 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_33 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_38 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_1809 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1811 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1832 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1905 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2683 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1810 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1812 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2684 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_40 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_41 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_90 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_91 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2685 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_36 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_37 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1657 = 60000;
		Global_1603097.f_73[iVar0 /*5400*/].f_1663 = 60000;
		Global_1603097.f_73[iVar0 /*5400*/].f_2456 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_187 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_188 = 0;
		Global_1603097.f_21674[iVar0] = 0;
		Global_1603097.f_21679[iVar0] = 0;
		Global_1603097.f_21684[iVar0] = -1;
		Global_1603097.f_21694[iVar0] = 0;
		StringCopy(&(Global_1603097.f_21699[iVar0 /*4*/]), "", 16);
		Global_1603097.f_21721[iVar0] = 3;
		Global_1603097.f_21689[iVar0] = 0;
		Global_1603097.f_21716[iVar0] = 0;
		Global_1603097.f_61211[iVar0] = 0;
		Global_1603097.f_61216[iVar0] = 0;
		Global_1603097.f_26505[iVar0] = 100;
		Global_1603097.f_26515[iVar0] = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2638 = 0;
		Global_1601852.f_1[iVar0] = 0;
		Global_1603097.f_61278[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1603097.f_56936[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1603097.f_57045[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			Global_1603097.f_73021[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1603097.f_26177[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1603097.f_26270[iVar0 /*47*/][0 /*23*/][iVar1] = 0;
			Global_1603097.f_26270[iVar0 /*47*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_72698[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_72751[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 45)
		{
			Global_1603097.f_73[iVar0 /*5400*/].f_42[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_92[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_73[iVar0 /*5400*/].f_141[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_146[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1603097.f_22258[iVar1 /*27*/] = 0;
			Global_1603097.f_22258[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1603097.f_22258[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1603097.f_22258[iVar1 /*27*/].f_25 = 0f;
			Global_1603097.f_22258[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1603097.f_22258[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1603097.f_22258[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1603097.f_22258[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1603097.f_73[iVar0 /*5400*/].f_2566[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2584[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2602[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2620[iVar1] = 0;
			Global_1603097.f_36983[iVar1 /*5*/][iVar0] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2639[iVar1] = 60000;
			Global_1603097.f_73[iVar0 /*5400*/].f_2657[iVar1] = 60000;
			Global_1603097.f_21726[iVar1 /*5*/][iVar0] = -1;
			StringCopy(&(Global_1601852.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1601852.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_207[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1665[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1683[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1701[iVar1] = 1;
			Global_1603097.f_73[iVar0 /*5400*/].f_1773[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1791[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1833[iVar1] = 10000;
			Global_1603097.f_73[iVar0 /*5400*/].f_1813[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1869[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_1719[iVar1] = 1;
			Global_1603097.f_73[iVar0 /*5400*/].f_1887[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1906[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2190[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2226[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1942[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1924[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2082[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2208[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2244[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2136[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2154[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2100[iVar1] = 100;
			Global_1603097.f_73[iVar0 /*5400*/].f_1960[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_2012[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_2064[iVar1] = 0f;
			Global_1603097.f_73[iVar0 /*5400*/].f_2118[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2172[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_297[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_315[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_333[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_369[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_225[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_243[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_351[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_387[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5166[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5184[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5202[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5220[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5238[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5256[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5274[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5292[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5310[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5328[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_2494[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2512[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2530[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2548[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_261[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_279[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1737[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_1755[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_151[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_169[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_189[iVar1] = 0;
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_2686[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_2959[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_3232[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_3711[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_3505[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_3608[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_4906[0 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_4906[1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_3814[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_4087[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_4360[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1603097.f_73[iVar0 /*5400*/].f_4633[iVar1 /*16*/]), "", 64);
			Global_1603097.f_73[iVar0 /*5400*/].f_2384[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2420[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2402[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_2262[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_2314[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_9 = 0f;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_10 = 0f;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_19 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_17 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_18 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_20 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_21 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_409[iVar1 /*23*/].f_22 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/] = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_3 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_6 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_9 = 0f;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_10 = 0f;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_19 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_17 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_13 = { 0f, 0f, 0f };
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_18 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_20 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_21 = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_801[iVar1 /*23*/].f_22 = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_2366[iVar1] = 3f;
			Global_1603097.f_73[iVar0 /*5400*/].f_1851[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2438[iVar1] = 10.5f;
			Global_1603097.f_73[iVar0 /*5400*/].f_4939[iVar1 /*5*/][0] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_4939[iVar1 /*5*/][1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_4939[iVar1 /*5*/][2] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_4939[iVar1 /*5*/][3] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5025[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5043[iVar1 /*4*/][0] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5043[iVar1 /*4*/][1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5043[iVar1 /*4*/][2] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5112[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5130[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5148[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_2458[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5346[iVar1] = 0;
			Global_1603097.f_73[iVar0 /*5400*/].f_5364[iVar1] = -1;
			Global_1603097.f_73[iVar0 /*5400*/].f_5382[iVar1] = 0;
			iVar1++;
		}
		Global_1603097.f_73[iVar0 /*5400*/].f_1656 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1662 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1655 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1661 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1658 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1659 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1660 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_1664 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_405 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_406 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_139 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_140 = -1;
		Global_1603097.f_73[iVar0 /*5400*/].f_2675 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2676 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2677 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2678 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2679 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2680 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2681 = 0;
		Global_1603097.f_73[iVar0 /*5400*/].f_2682 = 0;
		iVar0++;
	}
	Global_1603097.f_55 = { 0f, 0f, 0f };
	Global_1603097.f_22719 = { 0f, 0f, 0f };
	Global_1603097.f_71 = 0f;
	Global_1603097.f_70267 = { 0f, 0f, 0f };
	Global_1603097.f_57754[0] = 0;
	Global_1603097.f_57754[1] = 0;
	Global_1603097.f_57757 = 0;
	Global_1603097.f_57753 = 0;
	Global_1603097.f_70833 = 0;
	Global_1603097.f_70834 = 0;
	Global_1603097.f_70835 = 0;
	Global_1603097.f_70836 = 0;
	Global_1603097.f_70838 = 0;
	Global_1603097.f_70840 = 0;
	Global_1603097.f_70842 = 0;
	Global_1603097.f_70845 = 0;
	Global_1603097.f_70846 = 0;
	Global_1603097.f_70847 = 0;
	Global_1603097.f_70848 = 0;
	Global_1603097.f_70849 = 0;
	Global_1603097.f_70850 = 0;
	Global_1603097.f_70855 = -1;
	Global_1603097.f_70856 = -1;
	Global_1603097.f_70857 = -1;
	Global_1603097.f_70858 = -1;
	Global_1603097.f_70859 = -1;
	Global_1603097.f_70860 = -1;
	Global_1603097.f_70861 = -1;
	Global_1603097.f_70862 = -1;
	Global_1603097.f_70863 = -1;
	Global_1603097.f_70864 = -1;
	Global_1603097.f_70865 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1603097.f_23423[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_22722[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_22722[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_22722[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_23705[iVar0] = 0f;
		Global_1603097.f_23847[iVar0] = 1f;
		iVar0++;
	}
	Global_1603097.f_26135 = 0;
	if (bParam0)
	{
		Global_1603097.f_26136 = 0;
		Global_1603097.f_26144 = 0;
	}
	Global_1603097.f_26142 = 0;
	Global_1603097.f_26143 = 0;
	Global_1603097.f_26464 = 0f;
	Global_1603097.f_28679 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1603097.f_28680[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1603097.f_28680[iVar0 /*31*/].f_6 = 0f;
		Global_1603097.f_28680[iVar0 /*31*/].f_7 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_9 = -1;
		Global_1603097.f_28680[iVar0 /*31*/].f_8 = -1;
		Global_1603097.f_28680[iVar0 /*31*/].f_10 = 1;
		Global_1603097.f_28680[iVar0 /*31*/].f_18 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_12 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_13 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_14 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_11 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_28 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_29 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_30 = 0;
		Global_1603097.f_28680[iVar0 /*31*/].f_15 = -1;
		Global_1603097.f_28680[iVar0 /*31*/].f_16 = -1;
		Global_1603097.f_28680[iVar0 /*31*/].f_17 = -1;
		iVar0++;
	}
	Global_1603097.f_31812 = 0;
	Global_1603097.f_31813 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1603097.f_31814[iVar0 /*29*/] = { 0f, 0f, 0f };
		Global_1603097.f_31814[iVar0 /*29*/].f_6 = 0f;
		Global_1603097.f_31814[iVar0 /*29*/].f_7 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_8 = -1;
		Global_1603097.f_31814[iVar0 /*29*/].f_10 = -1;
		Global_1603097.f_31814[iVar0 /*29*/].f_9 = -1;
		Global_1603097.f_31814[iVar0 /*29*/].f_11 = 1;
		Global_1603097.f_31814[iVar0 /*29*/].f_16 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_12 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_26 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_27 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_28 = 0;
		Global_1603097.f_31814[iVar0 /*29*/].f_13 = -1;
		Global_1603097.f_31814[iVar0 /*29*/].f_14 = -1;
		Global_1603097.f_31814[iVar0 /*29*/].f_15 = -1;
		iVar0++;
	}
	Global_1603097.f_28354 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1603097.f_28355[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1603097.f_28355[iVar0 /*19*/].f_3 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_4 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_14 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_12 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_15 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_16 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_6 = -1;
		Global_1603097.f_28355[iVar0 /*19*/].f_5 = -1;
		Global_1603097.f_28355[iVar0 /*19*/].f_13 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_8 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_9 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_10 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_11 = 0f;
		Global_1603097.f_28355[iVar0 /*19*/].f_7 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_17 = 0;
		Global_1603097.f_28355[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1603097.f_28641 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1603097.f_28642[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1603097.f_28642[iVar0 /*7*/].f_3 = 0f;
		Global_1603097.f_28642[iVar0 /*7*/].f_4 = 0;
		Global_1603097.f_28642[iVar0 /*7*/].f_5 = 0;
		Global_1603097.f_28642[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1603097.f_26465 = 3.5f;
		Global_1603097.f_26466 = 7f;
		Global_1603097.f_26467 = 0f;
		Global_1603097.f_26468 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1603097.f_26472[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1603097.f_26510[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1603097.f_57791 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_26124[iVar0] = 0;
		Global_1603097.f_61271[iVar0] = -1;
		Global_1603097.f_61302[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1603097.f_25630[iVar1 /*29*/][iVar0] = 0;
			Global_1603097.f_25630[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1603097.f_25630[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1603097.f_25630[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1603097.f_25630[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1603097.f_70616[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1603097.f_26521 = 1;
	}
	Global_1603097.f_26523 = 0;
	Global_1603097.f_26524 = 0;
	Global_1603097.f_26525 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1603097.f_26526[iVar0 /*87*/] = { 0f, 0f, 0f };
		Global_1603097.f_26526[iVar0 /*87*/].f_4 = { 0f, 0f, 0f };
		Global_1603097.f_26526[iVar0 /*87*/].f_3 = 0f;
		Global_1603097.f_26526[iVar0 /*87*/].f_7 = 50f;
		Global_1603097.f_26526[iVar0 /*87*/].f_8 = 0f;
		Global_1603097.f_26526[iVar0 /*87*/].f_9 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_10 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_11 = { 0f, 0f, 0f };
		Global_1603097.f_26526[iVar0 /*87*/].f_14 = 0f;
		Global_1603097.f_26526[iVar0 /*87*/].f_15 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_26 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_28 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_29 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_30 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_42 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_41 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_43 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_44 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_45 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_46 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_47 = 60;
		Global_1603097.f_26526[iVar0 /*87*/].f_48 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_35 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_31 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_32 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_33 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_53 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_34 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_49 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_50 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_51 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_81 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_82 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_83 = { 0f, 0f, 0f };
		Global_1603097.f_26526[iVar0 /*87*/].f_86 = 0;
		Global_1603097.f_26526[iVar0 /*87*/].f_79 = -1;
		Global_1603097.f_26526[iVar0 /*87*/].f_80 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_26526[iVar0 /*87*/].f_16[iVar1] = 0;
			Global_1603097.f_26526[iVar0 /*87*/].f_21[iVar1] = 99999;
			Global_1603097.f_26526[iVar0 /*87*/].f_63[iVar1] = 0;
			Global_1603097.f_26526[iVar0 /*87*/].f_68[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1603097.f_70285[iVar0 /*18*/]), "", 64);
		Global_1603097.f_70285[iVar0 /*18*/].f_16 = 0;
		Global_1603097.f_70285[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1603097.f_32424 = 0;
	Global_1603097.f_32425 = 0;
	if (bParam0)
	{
		if (func_83() && !func_128())
		{
			Global_1603097.f_32426 = -1;
		}
		else
		{
			Global_1603097.f_32426 = 0;
		}
	}
	Global_1603097.f_32427 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1603097.f_32428[iVar0 /*20*/] = { 0f, 0f, 0f };
		Global_1603097.f_32428[iVar0 /*20*/].f_3 = 0f;
		Global_1603097.f_32428[iVar0 /*20*/].f_12 = 76;
		Global_1603097.f_32428[iVar0 /*20*/].f_4 = 0;
		Global_1603097.f_32428[iVar0 /*20*/].f_5 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_32428[iVar0 /*20*/].f_7[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_164();
	Global_1603097.f_53544 = -1;
	Global_1603097.f_53545 = -1;
	Global_1603097.f_53546 = -1;
	Global_1603097.f_57805 = -1;
	Global_1603097.f_33249 = 0;
	Global_1603097.f_28678 = 0;
	if (bParam0)
	{
		Global_1603097.f_26471 = -1;
		Global_1603097.f_26140 = -1;
	}
	Global_1603097.f_33250 = 0;
	Global_1603097.f_33251 = 0;
	Global_1603097.f_33252 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1603097.f_33253[iVar0 /*113*/] = { 0f, 0f, 0f };
		Global_1603097.f_33253[iVar0 /*113*/].f_3 = 0f;
		Global_1603097.f_33253[iVar0 /*113*/].f_4 = 50f;
		Global_1603097.f_33253[iVar0 /*113*/].f_5 = 0f;
		Global_1603097.f_33253[iVar0 /*113*/].f_6 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_7 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_8 = { 0f, 0f, 0f };
		Global_1603097.f_33253[iVar0 /*113*/].f_11 = 0f;
		Global_1603097.f_33253[iVar0 /*113*/].f_12 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_23 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_24 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_25 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_28 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_29 = 100;
		Global_1603097.f_33253[iVar0 /*113*/].f_30 = 1001f;
		Global_1603097.f_33253[iVar0 /*113*/].f_31 = 1001f;
		Global_1603097.f_33253[iVar0 /*113*/].f_33 = 1.5f;
		Global_1603097.f_33253[iVar0 /*113*/].f_39 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_98 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_40 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_41 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_26 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_27 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_44 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_35 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_36 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_37 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_56 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_57 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_96 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_95 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1603097.f_33253[iVar0 /*113*/].f_99[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_33253[iVar0 /*113*/].f_106[iVar1] = 0f;
			iVar1++;
		}
		Global_1603097.f_33253[iVar0 /*113*/].f_58 = -1;
		Global_1603097.f_33253[iVar0 /*113*/].f_59 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_38 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_109 = 0;
		Global_1603097.f_33253[iVar0 /*113*/].f_110 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_33253[iVar0 /*113*/].f_13[iVar1] = 0;
			Global_1603097.f_33253[iVar0 /*113*/].f_18[iVar1] = 99999;
			Global_1603097.f_33253[iVar0 /*113*/].f_89[iVar1] = 0;
			Global_1603097.f_33253[iVar0 /*113*/].f_72[iVar1] = 0;
			Global_1603097.f_33253[iVar0 /*113*/].f_77[iVar1] = 0;
			Global_1603097.f_33253[iVar0 /*113*/].f_46[iVar1] = -1;
			Global_1603097.f_33253[iVar0 /*113*/].f_51[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	Global_1603097.f_56844 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1603097.f_56845[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1603097.f_56845[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1603097.f_56845[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1603097.f_53547 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1603097.f_53554[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1603097.f_53554[iVar0 /*9*/].f_3 = 0f;
		Global_1603097.f_53554[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_53548[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/] = { 0f, 0f, 0f };
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/].f_3 = 0f;
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/].f_4 = 0;
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/].f_5 = 0;
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/].f_7 = -1;
			Global_1603097.f_54095[iVar0 /*262*/][iVar1 /*9*/].f_8 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1603097.f_37131 = 0;
	Global_1603097.f_37134 = 0;
	Global_1603097.f_37135 = 0;
	Global_1603097.f_37132 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1603097.f_37136[iVar0 /*271*/].f_38 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_48 = 0;
		Global_1603097.f_37136[iVar0 /*271*/] = { 0f, 0f, 0f };
		Global_1603097.f_37136[iVar0 /*271*/].f_3 = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_4 = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_13 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_14 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_15 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_31 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_35 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_36 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_37 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_206 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_205 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_207 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_208 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_209 = 20;
		Global_1603097.f_37136[iVar0 /*271*/].f_217 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_55 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_46 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_33 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_34 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_47 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_180 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_181 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_182 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_183 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_184 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_185 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_186 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_32 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_5 = 50f;
		Global_1603097.f_37136[iVar0 /*271*/].f_6 = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_7 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_8 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_9 = { 0f, 0f, 0f };
		Global_1603097.f_37136[iVar0 /*271*/].f_12 = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_167 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_61 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_159 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_160 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_161 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_167 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_177 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_168 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_176 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_62 = { 0f, 0f, 0f };
		Global_1603097.f_37136[iVar0 /*271*/].f_56 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_57 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_60 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_58 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_237 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_248 = 1f;
		Global_1603097.f_37136[iVar0 /*271*/].f_78 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_192 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_51 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_193 = 250;
		Global_1603097.f_37136[iVar0 /*271*/].f_196 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_197 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_251 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_198 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_252 = 4;
		Global_1603097.f_37136[iVar0 /*271*/].f_222 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_145 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_146 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_147 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_218 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_219 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_220 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_250 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_249 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_148 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_149 = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_59 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_37136[iVar0 /*271*/].f_16[iVar1] = 0;
			Global_1603097.f_37136[iVar0 /*271*/].f_21[iVar1] = 2;
			Global_1603097.f_37136[iVar0 /*271*/].f_26[iVar1] = 99999;
			Global_1603097.f_37136[iVar0 /*271*/].f_187[iVar1] = -1;
			Global_1603097.f_37136[iVar0 /*271*/].f_223[iVar1] = 0;
			Global_1603097.f_37136[iVar0 /*271*/].f_228[iVar1] = 0;
			Global_1603097.f_37136[iVar0 /*271*/].f_238[iVar1] = -1;
			Global_1603097.f_37136[iVar0 /*271*/].f_243[iVar1] = -1;
			Global_1603097.f_37136[iVar0 /*271*/].f_254[iVar1] = -2;
			Global_1603097.f_37136[iVar0 /*271*/].f_162[iVar1] = 0;
			iVar1++;
		}
		Global_1603097.f_37136[iVar0 /*271*/].f_113[0] = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_119[0] = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_131[0] = 0f;
		Global_1603097.f_37136[iVar0 /*271*/].f_79[0] = 0;
		Global_1603097.f_37136[iVar0 /*271*/].f_85[0] = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_91[0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_37136[iVar0 /*271*/].f_107[0] = 3;
		Global_1603097.f_37136[iVar0 /*271*/].f_125[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_37136[iVar0 /*271*/].f_65[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_37136[iVar0 /*271*/].f_79[iVar1 + 1] = 0;
			Global_1603097.f_37136[iVar0 /*271*/].f_113[iVar1 + 1] = 0f;
			Global_1603097.f_37136[iVar0 /*271*/].f_119[iVar1 + 1] = 0f;
			Global_1603097.f_37136[iVar0 /*271*/].f_131[iVar1 + 1] = 0f;
			Global_1603097.f_37136[iVar0 /*271*/].f_85[iVar1 + 1] = -1;
			Global_1603097.f_37136[iVar0 /*271*/].f_91[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_37136[iVar0 /*271*/].f_107[iVar1 + 1] = 3;
			Global_1603097.f_37136[iVar0 /*271*/].f_125[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1603097.f_37136[iVar0 /*271*/].f_261[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_37136[iVar0 /*271*/].f_268[iVar1] = 0f;
			iVar1++;
		}
		Global_1603097.f_37136[iVar0 /*271*/].f_178 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_179 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_253 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_259 = -1;
		Global_1603097.f_37136[iVar0 /*271*/].f_260 = -1;
		iVar0++;
	}
	Global_1603097.f_53547 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1603097.f_53554[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1603097.f_53554[iVar0 /*9*/].f_3 = 0f;
		Global_1603097.f_53554[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1603097.f_26130[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 16)
	{
		Global_1603097.f_23919[iVar0 /*95*/].f_51 = 0;
		Global_1603097.f_23919[iVar0 /*95*/].f_45 = 0;
		Global_1603097.f_23919[iVar0 /*95*/].f_19 = 0f;
		Global_1603097.f_23919[iVar0 /*95*/].f_27 = 0f;
		Global_1603097.f_23919[iVar0 /*95*/].f_28 = 0f;
		Global_1603097.f_23919[iVar0 /*95*/].f_29 = 0f;
		Global_1603097.f_23919[iVar0 /*95*/] = 0;
		Global_1603097.f_23919[iVar0 /*95*/].f_20 = { 0f, 0f, 0f };
		Global_1603097.f_23919[iVar0 /*95*/].f_23 = { 0f, 0f, 0f };
		Global_1603097.f_23919[iVar0 /*95*/].f_26 = 1f;
		Global_1603097.f_23919[iVar0 /*95*/].f_93 = 10.5f;
		Global_1603097.f_23919[iVar0 /*95*/].f_92 = 0;
		Global_1603097.f_23919[iVar0 /*95*/].f_52 = 0;
		if (Global_1603097.f_23919[iVar0 /*95*/].f_94 != 0)
		{
			unk_0x6F4ECA2359DC492F(Global_1603097.f_23919[iVar0 /*95*/].f_94);
			Global_1603097.f_23919[iVar0 /*95*/].f_94 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_23919[iVar0 /*95*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1603097.f_23919[iVar0 /*95*/].f_14[iVar1] = 0f;
			Global_1603097.f_23919[iVar0 /*95*/].f_35[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_40[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_30[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_58[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_63[iVar1] = 99999;
			Global_1603097.f_23919[iVar0 /*95*/].f_68[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_73[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_53[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_78[iVar1] = 0;
			Global_1603097.f_23919[iVar0 /*95*/].f_83[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1603097.f_56842 = 0;
	Global_1603097.f_32 = 0;
	Global_1603097.f_72634 = 12;
	Global_1603097.f_72635 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_70271[iVar0] = -1;
		Global_1603097.f_70276[iVar0] = -1;
		iVar0++;
	}
	Global_1603097.f_26522 = 0;
	Global_1603097.f_70851 = -1;
	Global_1603097.f_61276 = -1;
	Global_1603097.f_61277 = -1;
	Global_1603097.f_70281 = 0;
	Global_1603097.f_70270 = 0;
	Global_1603097.f_70283 = 0;
	Global_1603097.f_70282 = 0;
	Global_1603097.f_70284 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1603097.f_57764[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1603097.f_55218[iVar3] = -1;
		Global_1603097.f_55187[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 4)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1603097.f_55249[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
				Global_1603097.f_56030[iVar3 /*26*/][iVar4 /*5*/][iVar5] = -1;
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
	
	Global_1603097.f_57469 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1603097.f_57492[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_57492[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1603097.f_57492[iVar0 /*26*/].f_9 = 0;
		Global_1603097.f_57492[iVar0 /*26*/].f_20 = 0;
		Global_1603097.f_57492[iVar0 /*26*/].f_22 = 0f;
		Global_1603097.f_57492[iVar0 /*26*/].f_23 = 0f;
		Global_1603097.f_57492[iVar0 /*26*/].f_21 = 0;
		Global_1603097.f_57492[iVar0 /*26*/].f_7 = 0f;
		Global_1603097.f_57492[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1603097.f_57492[iVar0 /*26*/].f_10[iVar1] = -1;
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
		StringCopy(&(Global_1603097.f_57319[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_171()
{
	if (unk_0xC8557993A78C1B3E())
	{
		if (Global_1312434)
		{
			return 1;
		}
	}
	else if (Global_1312434)
	{
		Global_1312434 = 0;
	}
	return 0;
}

bool func_172()
{
	return unk_0x94E72F17611BCD3C(Global_965784.f_8, 0);
}

bool func_173()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 4);
}

bool func_174()
{
	return unk_0x94E72F17611BCD3C(Global_2428162, 28);
}

var func_175()
{
	return Global_2428162.f_566;
}

void func_176()
{
	unk_0xF76EE56D3E7DAF1B(&Global_2428162, 4);
}

void func_177()
{
	unk_0xF76EE56D3E7DAF1B(&Global_2428162, 28);
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
	return 146;
}

bool func_180()
{
	return Global_2394634;
}

var func_181()
{
	return Global_2394634.f_3;
}

