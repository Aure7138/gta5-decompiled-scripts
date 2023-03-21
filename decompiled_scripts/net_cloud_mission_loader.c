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
	int iLocal_36 = 0;
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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 10;
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
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	struct<5> Local_92 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_109 = 1;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = -1;
	var uLocal_115 = 2;
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
	var uLocal_127 = 2;
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
	struct<88> Local_185 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_273 = 0;
	bool bLocal_274 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	unk_0x330AFE43E1483B3F();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_274 = false;
		bVar0 = func_251();
		Global_2394783.f_3 = 0;
		Global_2395231 = 0;
		if (func_250())
		{
			bLocal_274 = true;
			Var1 = { Global_2394783.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_249(Global_2394783.f_4);
			iVar20 = unk_0xBE369BE1BC57A796();
			bVar21 = Global_2394783.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394783.f_15 };
			}
			if (Global_2394783.f_25)
			{
				func_248(&Local_92, 1, 1);
				unk_0x21E7933CCC7B3724(&(Global_1591201[iVar20 /*602*/].f_39.f_18), 2);
				unk_0x21E7933CCC7B3724(&(Global_1591201[iVar20 /*602*/].f_39.f_18), 1);
				unk_0x21E7933CCC7B3724(&(Global_1591201[iVar20 /*602*/].f_39.f_18), 3);
				func_247();
				func_246();
				Global_2394783.f_25 = 0;
			}
			if (!unk_0x63C468D583002D23())
			{
				func_245();
			}
			else if (!func_112(&Local_92, &cVar11, &(Global_1591201[iVar20 /*602*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394783.f_23 = 0;
				Global_2394783.f_27 = -1;
				if (bVar0)
				{
					func_248(&Local_92, 1, 1);
					unk_0xCBE2021B1969CE01();
					func_111();
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
					if (Global_2394783.f_27 < 0)
					{
						Global_2394783.f_27 = 0;
					}
					else
					{
						Global_2394783.f_27++;
						if (Global_2394783.f_27 >= 10)
						{
							func_245();
							Global_2394783.f_25 = 1;
						}
					}
				}
			}
			else if (Local_92.f_0)
			{
				Global_2394783.f_23 = 1;
				Global_2394783.f_24 = 1;
				if (Global_2394783.f_27 < 0)
				{
					Global_2394783.f_27 = 0;
				}
				else
				{
					Global_2394783.f_27++;
					if (Global_2394783.f_27 >= 10)
					{
						func_245();
					}
				}
			}
			else
			{
				Global_2394783.f_26++;
				if (Global_2394783.f_26 >= 3)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
					if (Global_2394783.f_27 < 0)
					{
						Global_2394783.f_27 = 0;
					}
					else
					{
						Global_2394783.f_27++;
						if (Global_2394783.f_27 >= 10)
						{
							func_245();
							Global_2394783.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394783.f_25 = 1;
				}
			}
		}
		if (func_110())
		{
			bLocal_274 = true;
			MemCopy(&cVar22, {Global_2394783.f_4.f_3}, 8);
			if (Global_2394783.f_23)
			{
				func_245();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_248(&Local_92, 1, 1);
					Global_2394783.f_25 = 0;
				}
				if (!func_106(&Local_92, &cVar22, &Local_185))
				{
					Global_2394783.f_23 = 0;
					Global_2394783.f_27 = -1;
				}
				else if (Local_92.f_0)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 1;
					Global_2394783.f_28 = Local_185.f_65;
					Global_2394783.f_29 = Local_185.f_68;
					Global_2394783.f_30 = { Local_185.f_22 };
					Global_2394783.f_46 = { Local_185.f_38 };
					Global_2398730 = { Local_185 };
				}
				else
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
				}
			}
		}
		if (func_105())
		{
			bLocal_274 = true;
			if (Global_2394783.f_23)
			{
				func_245();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_248(&Local_92, 1, 1);
					Global_2394783.f_25 = 0;
				}
				iVar30 = Local_92.f_4;
				if (!func_5(&Local_92))
				{
					Global_2395231 = 1;
					if (iVar30 != Local_92.f_4)
					{
						if (Local_92.f_4 == 4)
						{
							iLocal_273 = (unk_0x94E3E074F38DF86C() + 50000);
						}
					}
					bVar31 = false;
					if (Local_92.f_4 == 4)
					{
						if (unk_0x94E3E074F38DF86C() > iLocal_273)
						{
							Global_2394783.f_23 = 1;
							Global_2394783.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394783.f_23 = 0;
						Global_2394783.f_27 = -1;
					}
				}
				else if (Local_92.f_0)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 1;
				}
				else
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
				}
			}
		}
		if (!bLocal_274)
		{
			if (func_4(unk_0xBE369BE1BC57A796()) || func_3(unk_0xBE369BE1BC57A796()))
			{
				if (!func_1(unk_0xBE369BE1BC57A796(), 1, 0))
				{
					unk_0x921053BAF754303D();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_2())
	{
		return 0;
	}
	if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_258.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	return -1;
}

bool func_3(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 7;
}

bool func_4(int iParam0)
{
	return Global_2421664[iParam0 /*358*/].f_118 == 2;
}

int func_5(bool bParam0)
{
	if (!func_104())
	{
		if (func_101())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_100())
			{
				return 0;
			}
			if (func_99())
			{
				return 0;
			}
			func_98();
			func_97();
			func_96();
			if (func_104())
			{
				unk_0x15D0F7DC829D317B(1);
			}
			else
			{
				unk_0x15D0F7DC829D317B(0);
			}
			bParam0->f_13 = Global_2395230;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_95(bParam0, 24);
			break;
		
		case 24:
			if (func_93(bParam0->f_13))
			{
				func_248(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_95(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x29C4FFFF415B914C(&Global_2394845, bParam0->f_13, 1, func_92(0)))
			{
				func_95(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x65EC659404540DDA())
			{
				if (unk_0xE954C5DD587BC487())
				{
					*bParam0 = 0;
				}
				else
				{
					func_248(bParam0, 1, 1);
					bParam0->f_40 = unk_0xEBAA8D54A8E4A262();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xEE7670C3E86576DD() > 0)
				{
					func_95(bParam0, 4);
				}
				else
				{
					func_248(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x19A334D598E7C108())
			{
				func_97();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_248(bParam0, 1, 1);
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
						if (unk_0xA41786EFDA9A8895() != 0)
						{
							unk_0xAD8D0FF9582FEAAB();
						}
						if (unk_0xDB9B90606DD732C7(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_97();
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

void func_6(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<88> Var5;
	int iVar93;
	
	iVar0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(iVar0, "mission");
	iVar2 = unk_0x489F243BF1619568(iVar1, "gen");
	if (func_104())
	{
		if (func_91(unk_0xF60E240F18A45E74(bParam0->f_7)))
		{
			if (unk_0xA41786EFDA9A8895() != 0)
			{
				unk_0xAD8D0FF9582FEAAB();
			}
			return;
		}
	}
	if ((unk_0x37AC9FA286925FB3(iVar2, "type") == 0 && unk_0x37AC9FA286925FB3(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xA41786EFDA9A8895() != 0)
		{
			unk_0xAD8D0FF9582FEAAB();
		}
		return;
	}
	if (Global_262145.f_6626)
	{
		if (unk_0x37AC9FA286925FB3(iVar2, "type") == 0)
		{
			if (unk_0x37AC9FA286925FB3(iVar2, "subtype") == 1 || unk_0x37AC9FA286925FB3(iVar2, "subtype") == 7)
			{
				if (unk_0xA41786EFDA9A8895() != 0)
				{
					unk_0xAD8D0FF9582FEAAB();
				}
				return;
			}
			iVar3 = unk_0x37AC9FA286925FB3(iVar2, "optbs");
			if (unk_0x48B8265059381CD0(iVar3, 4) || unk_0x48B8265059381CD0(iVar3, 12))
			{
				if (unk_0xA41786EFDA9A8895() != 0)
				{
					unk_0xAD8D0FF9582FEAAB();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_90();
		Global_794643.f_2 = 0;
		Global_794643.f_112968 = 0;
		func_89();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794643.f_112983[iVar4] = 0;
			Global_794643.f_112969[iVar4] = 0;
			iVar4++;
		}
		if (func_86())
		{
			func_85(1);
			func_85(0);
			func_83(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794643.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_104())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_5 = unk_0xEE4AD17A47DE1FB0(bParam0->f_7, 0);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_67 = func_82(bParam0->f_7);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_66 = unk_0xEE4AD17A47DE1FB0(bParam0->f_7, Global_794643.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_6 = unk_0x7BE7B9F1E70C3985(bParam0->f_7);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { func_81(iVar2, "start") };
	if (unk_0x0481328AA6FEFDAB(iVar2, "optbs") == 2)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_76 = unk_0x37AC9FA286925FB3(iVar2, "optbs");
	}
	unk_0x21E7933CCC7B3724(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0x21E7933CCC7B3724(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0x21E7933CCC7B3724(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0x21E7933CCC7B3724(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 29);
	unk_0x21E7933CCC7B3724(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_59 = { func_81(iVar2, "cam") };
	Global_794643.f_4[bParam0->f_9 /*88*/].f_62 = { func_80(iVar2) };
	if (!func_104())
	{
		if (unk_0xFB0F923C474E44C0(unk_0x7BE7B9F1E70C3985(bParam0->f_7)))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = unk_0x6A8E445E09525604(bParam0->f_7);
		}
		else
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0x0481328AA6FEFDAB(iVar2, "mgrk") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_8 = unk_0x37AC9FA286925FB3(iVar2, "mgrk");
	}
	if (unk_0x0481328AA6FEFDAB(iVar2, "mght") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_9 = unk_0x37AC9FA286925FB3(iVar2, "mght");
	}
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_11 = unk_0x37AC9FA286925FB3(iVar2, "cncmbs");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = unk_0x37AC9FA286925FB3(iVar2, "min");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = unk_0x37AC9FA286925FB3(iVar2, "num");
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_22), unk_0x450A20AE5B480415(bParam0->f_7), 64);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_65 = unk_0x37AC9FA286925FB3(iVar2, "type");
	if (func_104())
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), func_79(), 64);
	}
	else
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), unk_0x0F6A326384FF1386(bParam0->f_7), 64);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_70 = unk_0x37AC9FA286925FB3(iVar2, "rank");
	Global_794643.f_98389[bParam0->f_9 /*13*/] = unk_0x37AC9FA286925FB3(iVar2, "tnum");
	if (!func_104())
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_73 = func_78(unk_0xAD63FAB8C9CDB0B0(bParam0->f_7, 0), unk_0xF64A36CEF66C2E7E(bParam0->f_7, 0));
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_4 = unk_0xF64A36CEF66C2E7E(bParam0->f_7, 0);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_75 = unk_0x37AC9FA286925FB3(iVar2, "charcon");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_78 = unk_0x37AC9FA286925FB3(iVar2, "ltm");
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_970275.f_598 < 85)
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = Global_970275.f_598;
			Global_970275[Global_794643.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { func_81(iVar2, "area") };
			if (unk_0x0481328AA6FEFDAB(iVar2, "rad") == 2)
			{
				Global_970275.f_512[Global_794643.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar2, "rad"));
			}
			else
			{
				Global_970275.f_512[Global_794643.f_4[bParam0->f_9 /*88*/].f_68] = unk_0x43D5E279656505E4(iVar2, "rad");
			}
			Global_970275.f_256[Global_794643.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { Global_794643.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794643.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_970275.f_598++;
		}
	}
	else
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = unk_0x37AC9FA286925FB3(iVar2, "subtype");
		Global_794643.f_4[bParam0->f_9 /*88*/].f_80 = unk_0x37AC9FA286925FB3(iVar2, "adverm");
	}
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/]), unk_0xF60E240F18A45E74(bParam0->f_7), 24);
	iVar93 = unk_0x765F5B806B517045(&(Global_794643.f_4[bParam0->f_9 /*88*/]));
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_3 = iVar93;
	func_77(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_104())
	{
		if (unk_0x6A7B0D91FD88D9EE(unk_0xF60E240F18A45E74(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xEB79FECD9022AAF0(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_104())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_1 = unk_0x765F5B806B517045(unk_0xEE35337E483142C4(bParam0->f_7));
	}
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_2 = func_76(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, 1);
	if ((Global_794643.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794643.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794643.f_112969[Global_794643.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_74(bParam0->f_9))
			{
				Global_794643.f_112969[7]++;
			}
			else if (func_73(bParam0->f_9))
			{
				Global_794643.f_112969[4]++;
			}
			else if (func_72(bParam0->f_9))
			{
				Global_794643.f_112969[10]++;
			}
			else if (func_71(bParam0->f_9))
			{
				Global_794643.f_112969[12]++;
			}
		}
	}
	if (unk_0xA41786EFDA9A8895() != 0)
	{
		unk_0xAD8D0FF9582FEAAB();
	}
	if (!func_104())
	{
		if (func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = Global_794643.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794643.f_112968 < 5 && Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794643.f_98389[bParam0->f_9 /*13*/].f_10 = Global_794643.f_112968;
			StringCopy(&(Global_794643.f_112937[Global_794643.f_112968 /*6*/]), unk_0xEE35337E483142C4(bParam0->f_7), 24);
			Global_794643.f_112968++;
		}
		func_56(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_77), Global_794643.f_4[bParam0->f_9 /*88*/].f_80);
		func_52(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0xC407062153252EFB(bParam0->f_7))
			{
				unk_0xEB79FECD9022AAF0(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			if (func_32(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, Global_794643.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794643.f_112969[11]++;
			}
			if (unk_0xC407062153252EFB(bParam0->f_7))
			{
				unk_0xEB79FECD9022AAF0(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0x48B8265059381CD0(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794643.f_112969[9]++;
				}
				if (Global_794643.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794643.f_112983[Global_794643.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794643.f_98389[bParam0->f_9 /*13*/].f_7 = unk_0xE3A49CA01F56731E(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
	{
		if (func_86())
		{
			func_30(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, unk_0x48B8265059381CD0(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, unk_0x48B8265059381CD0(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_970874[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794643.f_2++;
	if (unk_0xA41786EFDA9A8895() != 0)
	{
		unk_0xAD8D0FF9582FEAAB();
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_13(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_11(iParam0))
	{
		func_10(iParam0, iVar0);
	}
	else
	{
		func_9(iParam0, iVar0);
	}
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1363153 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1363155 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1363156 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1363157 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1363158 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1363159 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1363160 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1363161 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1363162 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1363163 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1363164 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1363165 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1363166 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1363167 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1363168 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1363169 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1363152)
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

int func_12(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0)
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

int func_14(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
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
	if (func_20(unk_0xBE369BE1BC57A796()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_15(iParam2);
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

int func_15(int iParam0)
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
	iVar0 = func_16(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_16(int iParam0)
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
	while (iVar0 < 9)
	{
		iVar1 = func_18(iVar0);
		if (iParam0 == func_17(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_17(int iParam0)
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
		
		case 22:
			return joaat("pa");
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	uVar1 = func_19(iVar0);
	return uVar1;
}

int func_19(int iParam0)
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
		
		case 8:
			return 22;
		
		default:
	}
	return 19;
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_21(iVar0, 0);
}

int func_21(int iParam0, int iParam1)
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
		if (Global_280048[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0)
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

int func_22(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xBE369BE1BC57A796())
			{
				return Global_1363273[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1591201[iParam0 /*602*/].f_203.f_1;
			}
		}
	}
	else
	{
		return Global_1363273[func_24(-1)];
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_2433125.f_1, iParam0);
	}
	return 1;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312735;
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		return;
	}
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_27(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_86())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0xBE369BE1BC57A796()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_29(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_8(iVar0, 1);
	}
}

int func_29(int iParam0, int iParam1, bool bParam2)
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

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_86())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
		{
			if (func_20(unk_0xBE369BE1BC57A796()) < iParam3)
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
	iVar0 = func_31(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_8(iVar0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2)
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

int func_32(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((func_51(iParam0) || func_50(iParam0)) || func_49(iParam0)) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || func_44(iParam0)) || func_43(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam0)) || func_33(iParam0))
	{
		return 1;
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8047[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8080[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8069[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
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
		if (iParam0 == Global_262145.f_8058[iVar0])
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
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_8034[iVar0])
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
		if (iParam0 == Global_262145.f_8023[iVar0])
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
		if (iParam0 == Global_262145.f_8012[iVar0])
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
		if (iParam0 == Global_262145.f_8001[iVar0])
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
		if (iParam0 == Global_262145.f_7904[iVar0])
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7926[iVar0])
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7915[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7893[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7882[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7871[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7837[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7845[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7832 || iParam0 == Global_262145.f_7833) || iParam0 == Global_262145.f_7834) || iParam0 == Global_262145.f_7835) || iParam0 == Global_262145.f_7836)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7827 || iParam0 == Global_262145.f_7828) || iParam0 == Global_262145.f_7829) || iParam0 == Global_262145.f_7830) || iParam0 == Global_262145.f_7831)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7820 || iParam0 == Global_262145.f_7821) || iParam0 == Global_262145.f_7822) || iParam0 == Global_262145.f_7823) || iParam0 == Global_262145.f_7824) || iParam0 == Global_262145.f_7825) || iParam0 == Global_262145.f_7826)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
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
		if (iParam0 == Global_262145.f_7853[iVar0])
		{
			Global_794643.f_112924[0 /*11*/][iVar0] = iParam1;
			Global_794643.f_4[iParam1 /*88*/].f_56 = { func_55(0, iVar0) };
			Global_794643.f_4[iParam1 /*88*/].f_59 = { func_54(0, iVar0) };
			Global_794643.f_4[iParam1 /*88*/].f_62 = { func_53(0, iVar0) };
			Global_794643.f_98389[iParam1 /*13*/].f_12 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794643.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794643.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794643.f_112924[0 /*11*/].f_9 <= iVar0)
			{
				Global_794643.f_112924[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_7862[iVar0])
		{
			Global_794643.f_98389[iParam1 /*13*/].f_12 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794643.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794643.f_4[iParam1 /*88*/].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_53(int iParam0, int iParam1)
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

Vector3 func_54(int iParam0, int iParam1)
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

Vector3 func_55(int iParam0, int iParam1)
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

void func_56(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_51(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam1, 15);
	}
	else if (func_50(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam1, 18);
	}
	else if (func_49(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam1, 19);
	}
	else if (func_47(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam1, 29);
	}
	else if (func_48(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam1, 28);
	}
	else if (func_46(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 0);
	}
	else if (func_45(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 1);
	}
	else if (func_44(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 2);
	}
	else if (func_43(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 3);
	}
	else if (func_42(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 4);
	}
	else if (func_41(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 5);
	}
	else if (func_40(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 6);
	}
	else if (func_39(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 7);
	}
	else if (func_38(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 8);
	}
	else if (func_37(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 9);
	}
	else if (func_33(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 10);
	}
	else if (func_36(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 11);
	}
	else if (func_35(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 12);
	}
	else if (func_70(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 13);
	}
	else if (func_34(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 14);
	}
	else if (func_69(iParam0))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 22);
	}
	else if (func_68(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 16);
	}
	else if (func_67(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 17);
	}
	else if (func_66(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 20);
	}
	else if (func_65(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 21);
	}
	else if (func_69(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 22);
	}
	else if (func_64(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 23);
	}
	else if (func_63(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 24);
	}
	else if (func_62(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 25);
	}
	else if (func_61(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 26);
	}
	else if (func_60(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 27);
	}
	else if (func_59(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 28);
	}
	else if (func_58(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 29);
	}
	else if (func_57(iParam3))
	{
		unk_0xEB79FECD9022AAF0(uParam2, 30);
	}
}

bool func_57(int iParam0)
{
	return iParam0 == 17;
}

bool func_58(int iParam0)
{
	return iParam0 == 16;
}

bool func_59(int iParam0)
{
	return iParam0 == 15;
}

bool func_60(int iParam0)
{
	return iParam0 == 14;
}

bool func_61(int iParam0)
{
	return iParam0 == 13;
}

bool func_62(int iParam0)
{
	return iParam0 == 12;
}

bool func_63(int iParam0)
{
	return iParam0 == 11;
}

bool func_64(int iParam0)
{
	return iParam0 == 9;
}

bool func_65(int iParam0)
{
	return iParam0 == 1;
}

bool func_66(int iParam0)
{
	return iParam0 == 6;
}

bool func_67(int iParam0)
{
	return iParam0 == 4;
}

bool func_68(int iParam0)
{
	return iParam0 == 2;
}

bool func_69(int iParam0)
{
	return iParam0 == 8;
}

bool func_70(int iParam0)
{
	return iParam0 == 3;
}

bool func_71(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_794643.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_72(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_794643.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_73(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_794643.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_74(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_794643.f_4[iParam0 /*88*/].f_76, 7);
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (Global_262145.f_5375[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5068[iVar1 /*21*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (((Global_262145.f_5375[iVar1] == 202 || Global_262145.f_5375[iVar1] == 203) || Global_262145.f_5375[iVar1] == 204) || (iParam1 && (Global_262145.f_5375[iVar1] == 224 || Global_262145.f_5375[iVar1] == 223)))
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5068[iVar1 /*21*/][iVar0])
					{
						return iVar1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_77(int iParam0, var uParam1, var uParam2)
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

int func_78(float fParam0, int iParam1)
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

var func_79()
{
	return unk_0xC7E52B74A3B4973C("CREATOR_RSC");
}

Vector3 func_80(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x0481328AA6FEFDAB(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x43D5E279656505E4(iParam0, "camp");
	}
	else if (unk_0x0481328AA6FEFDAB(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iParam0, "camp"));
	}
	if (unk_0x0481328AA6FEFDAB(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x43D5E279656505E4(iParam0, "camh");
	}
	else if (unk_0x0481328AA6FEFDAB(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_81(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x0481328AA6FEFDAB(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x51AA166972995C47(iParam0, sParam1) };
	}
	else if (unk_0x0481328AA6FEFDAB(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x489F243BF1619568(iParam0, sParam1);
		if (unk_0x0481328AA6FEFDAB(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x43D5E279656505E4(iVar3, "x");
		}
		if (unk_0x0481328AA6FEFDAB(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x43D5E279656505E4(iVar3, "y");
		}
		if (unk_0x0481328AA6FEFDAB(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x43D5E279656505E4(iVar3, "z");
		}
	}
	return Var0;
}

int func_82(int iParam0)
{
	if (unk_0x029D013657F91B1C(iParam0))
	{
		return 2;
	}
	else if (unk_0xF757C7AD9D82553E(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_83(int iParam0)
{
	func_84(joaat("mpply_big_feed_init"), iParam0);
}

void func_84(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xCE46AC18A4A47E2D(iVar0, uParam1, 1);
	}
}

void func_85(bool bParam0)
{
	if (!func_86())
	{
		return;
	}
	if (bParam0)
	{
		func_10(joaat("mpply_unique_races"), 0);
		func_10(joaat("mpply_unique_dms"), 0);
		func_10(joaat("mpply_unique_paras"), 0);
		func_10(joaat("mpply_unique_survival"), 0);
		func_10(joaat("mpply_unique_ctf"), 0);
		func_10(joaat("mpply_unique_lts"), 0);
		func_10(joaat("mpply_unique_versus"), 0);
		func_10(joaat("mpply_unique_missions"), 0);
		func_10(joaat("mpply_unique_heist_planning"), 0);
		func_10(joaat("mpply_unique_heist_finale"), 0);
		func_10(joaat("mpply_available_races"), 0);
		func_10(joaat("mpply_available_dms"), 0);
		func_10(joaat("mpply_available_paras"), 0);
		func_10(joaat("mpply_available_survival"), 0);
		func_10(joaat("mpply_available_lts"), 0);
		func_10(joaat("mpply_available_ctf"), 0);
		func_10(joaat("mpply_available_versus"), 0);
		func_10(joaat("mpply_available_missions"), 0);
		func_10(joaat("mpply_available_heist_plan"), 0);
		func_10(joaat("mpply_available_heist_finale"), 0);
		func_10(joaat("mpply_unique_contact_0"), 0);
		func_10(joaat("mpply_unique_contact_1"), 0);
		func_10(joaat("mpply_unique_contact_2"), 0);
		func_10(joaat("mpply_unique_contact_3"), 0);
		func_10(joaat("mpply_unique_contact_4"), 0);
		func_10(joaat("mpply_unique_contact_5"), 0);
		func_10(joaat("mpply_unique_contact_6"), 0);
		func_10(joaat("mpply_total_contact_0"), 0);
		func_10(joaat("mpply_total_contact_1"), 0);
		func_10(joaat("mpply_total_contact_2"), 0);
		func_10(joaat("mpply_total_contact_3"), 0);
		func_10(joaat("mpply_total_contact_4"), 0);
		func_10(joaat("mpply_total_contact_5"), 0);
		func_10(joaat("mpply_total_contact_6"), 0);
	}
	else
	{
		func_10(joaat("mpply_unique_races_v"), 0);
		func_10(joaat("mpply_unique_dms_v"), 0);
		func_10(joaat("mpply_unique_paras_v"), 0);
		func_10(joaat("mpply_unique_survival_v"), 0);
		func_10(joaat("mpply_unique_ctf_v"), 0);
		func_10(joaat("mpply_unique_lts_v"), 0);
		func_10(joaat("mpply_unique_versus_v"), 0);
		func_10(joaat("mpply_unique_missions_v"), 0);
		func_10(joaat("mpply_unique_heist_planning_v"), 0);
		func_10(joaat("mpply_unique_heist_finale_v"), 0);
		func_10(joaat("mpply_available_races_v"), 0);
		func_10(joaat("mpply_available_dms_v"), 0);
		func_10(joaat("mpply_available_paras_v"), 0);
		func_10(joaat("mpply_available_survival_v"), 0);
		func_10(joaat("mpply_available_lts_v"), 0);
		func_10(joaat("mpply_available_ctf_v"), 0);
		func_10(joaat("mpply_available_versus_v"), 0);
		func_10(joaat("mpply_available_missions_v"), 0);
		func_10(joaat("mpply_available_heist_planv"), 0);
		func_10(joaat("mpply_available_heist_finale_v"), 0);
	}
}

int func_86()
{
	if (func_88() && func_87(0))
	{
		return 1;
	}
	return 0;
}

var func_87(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_88()
{
	return func_87(func_25() + 1);
}

void func_89()
{
	int iVar0;
	
	Global_970275.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_970275[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794643.f_112924[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794643.f_112924[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_91(char* sParam0)
{
	if ((((((((((((((((unk_0x6A7B0D91FD88D9EE(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x6A7B0D91FD88D9EE(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x6A7B0D91FD88D9EE(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x6A7B0D91FD88D9EE(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x6A7B0D91FD88D9EE(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x6A7B0D91FD88D9EE(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x6A7B0D91FD88D9EE(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x6A7B0D91FD88D9EE(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x6A7B0D91FD88D9EE(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x6A7B0D91FD88D9EE(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x6A7B0D91FD88D9EE(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x6A7B0D91FD88D9EE(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_92(int iParam0)
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

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3767 == 1)
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
		iVar67 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786484)
		{
			if (iVar1 < 35)
			{
				if (iVar67 == 0)
				{
					if (Global_786484.f_3082[iVar1 /*13*/].f_1 == unk_0x765F5B806B517045(&(Global_2394845[iVar0 /*6*/])))
					{
						iVar67 = 1;
						iVar2[iVar0] = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (iVar67 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794643.f_4[(1100 + iVar0) /*88*/] = { Global_786484.f_1[iVar2[iVar0] /*88*/] };
		Global_794643.f_98389[(1100 + iVar0) /*13*/] = { Global_786484.f_3082[iVar2[iVar0] /*13*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1751531.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_94(1);
	return 1;
}

void func_94(int iParam0)
{
	Global_1751531.f_1784 = iParam0;
}

void func_95(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_96()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1100;
	while (iVar88 <= 1117)
	{
		Global_794643.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_97()
{
	if (unk_0xA41786EFDA9A8895() != 0)
	{
		unk_0xAD8D0FF9582FEAAB();
	}
}

void func_98()
{
	if (func_104())
	{
		unk_0x9CCDB2F081188D4D();
	}
	else
	{
		unk_0x07B5EC3A715EB8A0();
	}
}

bool func_99()
{
	return Global_2450895.f_4;
}

int func_100()
{
	if (unk_0x27024315C6C7EA12())
	{
		return 1;
	}
	else if (unk_0x5270A333DB8972E6())
	{
		return 1;
	}
	else if (unk_0x88B3A82207A192F2())
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (!func_102())
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	if (func_103())
	{
		return 0;
	}
	if (unk_0x877FC5FAF7DC9BC5() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_103()
{
	return Global_2453019;
}

bool func_104()
{
	return Global_1573272.f_4;
}

bool func_105()
{
	return Global_2394783.f_2;
}

int func_106(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_100())
			{
				return 0;
			}
			func_98();
			func_97();
			if (func_104())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x15D0F7DC829D317B(0);
			}
			func_95(bParam0, 1);
			break;
		
		case 1:
			if (unk_0xC303D95D12685162(sParam1, func_92(0)))
			{
				func_95(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x65EC659404540DDA())
			{
				bParam0->f_40 = unk_0xEBAA8D54A8E4A262();
				if (unk_0xE954C5DD587BC487())
				{
				}
				else
				{
					func_248(bParam0, 1, 1);
					bParam0->f_40 = unk_0xEBAA8D54A8E4A262();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xEE7670C3E86576DD() > 0)
				{
					if (unk_0xDB9B90606DD732C7(0))
					{
						func_107(sParam2, 0);
						func_248(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_248(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_107(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(iVar0, "mission");
	iVar2 = unk_0x489F243BF1619568(iVar1, "gen");
	StringCopy(sParam0, unk_0xF60E240F18A45E74(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x0F6A326384FF1386(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x450A20AE5B480415(iParam1), 64);
	sParam0->f_56 = { func_81(iVar2, "start") };
	sParam0->f_59 = { func_81(iVar2, "cam") };
	sParam0->f_62 = { func_80(iVar2) };
	sParam0->f_65 = unk_0x37AC9FA286925FB3(iVar2, "type");
	sParam0->f_68 = unk_0x37AC9FA286925FB3(iVar2, "subtype");
	sParam0->f_80 = unk_0x37AC9FA286925FB3(iVar2, "adverm");
	sParam0->f_79 = unk_0x37AC9FA286925FB3(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x37AC9FA286925FB3(iVar2, "min");
	sParam0->f_70 = unk_0x37AC9FA286925FB3(iVar2, "rank");
	sParam0->f_71 = unk_0x37AC9FA286925FB3(iVar2, "num");
	sParam0->f_73 = func_78(unk_0xAD63FAB8C9CDB0B0(iParam1, 0), unk_0xF64A36CEF66C2E7E(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x37AC9FA286925FB3(iVar2, "charcon");
	if (func_109(unk_0x765F5B806B517045(unk_0xEE35337E483142C4(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_108() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4746)
		{
			sParam0->f_71 = Global_262145.f_4746;
		}
		if (sParam0->f_69 > Global_262145.f_4746)
		{
			sParam0->f_69 = Global_262145.f_4746;
		}
	}
	if (!func_104())
	{
		iVar3 = unk_0x7BE7B9F1E70C3985(iParam1);
		if (unk_0xFB0F923C474E44C0(iVar3))
		{
			sParam0->f_54 = unk_0x6A8E445E09525604(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x0481328AA6FEFDAB(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x37AC9FA286925FB3(iVar2, "ltm");
	}
	unk_0xEB79FECD9022AAF0(&(sParam0->f_76), 13);
	func_97();
}

int func_108()
{
	return Global_25190;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7853[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_110()
{
	return Global_2394783.f_1;
}

void func_111()
{
	Global_2450895.f_8 = 0;
	Global_2450895.f_7 = 0;
}

int func_112(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xEB79FECD9022AAF0(uParam2, 3);
		if (!unk_0x48B8265059381CD0(*uParam2, 2))
		{
		}
		unk_0xEB79FECD9022AAF0(uParam2, 2);
		return 1;
	}
	if ((func_244() && func_243()) || func_242())
	{
		if (!unk_0x48B8265059381CD0(*uParam2, 2))
		{
		}
		unk_0xEB79FECD9022AAF0(uParam2, 2);
		unk_0xEB79FECD9022AAF0(uParam2, 1);
		unk_0xEB79FECD9022AAF0(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0x48B8265059381CD0(*uParam2, 3))
		{
			unk_0xEB79FECD9022AAF0(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_241())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_240())
		{
			if (unk_0x48B8265059381CD0(*uParam2, 2))
			{
				unk_0xEB79FECD9022AAF0(uParam2, 3);
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
		if (func_99())
		{
			return 0;
		}
	}
	if (!unk_0x48B8265059381CD0(*uParam2, 2))
	{
		if (!unk_0x48B8265059381CD0(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_227(1, 1, bParam11);
			}
			unk_0xEB79FECD9022AAF0(uParam2, 1);
			func_248(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_126(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_125() || Global_1633501 == 31) || Global_1633501 == 6) || Global_1633501 == 4)
			{
				if (Global_1633501.f_30 < 1)
				{
					Global_1633501.f_30 = 1;
				}
				if (Global_1633501.f_29 < 1)
				{
					Global_1633501.f_29 = 1;
				}
				if (!func_124())
				{
					func_123();
				}
			}
			else if (Global_1633501 == 1)
			{
				Global_1363342.f_4 = 99;
				Global_1363342.f_6 = Global_1633501.f_51;
				Global_1363342.f_7 = Global_1633501.f_54824;
				Global_1363342.f_9 = Global_1633501.f_42633;
				Global_1363342.f_11 = Global_1633501.f_52;
				Global_1363342.f_12 = Global_1633501.f_54;
				Global_1363342.f_13 = Global_1633501.f_56;
				Global_1363342.f_14 = Global_1633501.f_55;
				Global_1363342.f_16 = Global_1633501.f_27;
				Global_1363342.f_5 = Global_1633501.f_49;
				Global_1363342.f_10 = Global_1633501.f_62;
			}
			else if (func_122())
			{
				Global_2524861.f_7 = 9901;
				Global_2524861.f_8 = Global_1633501.f_41911 + 1;
				if (func_121(Global_1633501.f_36340))
				{
					Global_1633501.f_36340 = { Global_1633501.f_66 };
				}
			}
			unk_0xEB79FECD9022AAF0(uParam2, 2);
			unk_0x21E7933CCC7B3724(uParam2, 1);
			unk_0xEB79FECD9022AAF0(uParam2, 3);
			if (*uParam0)
			{
				func_120();
				func_119();
				if (func_118())
				{
					func_115(Global_1633501.f_25);
				}
				Global_1633501.f_89289 = 1;
			}
			else
			{
				func_246();
			}
			if (!func_114())
			{
				func_113();
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
		unk_0xEB79FECD9022AAF0(uParam2, 3);
		if (Global_1633501.f_89289)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_113()
{
	Global_2443134.f_29.f_49 = 1;
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x9C88EB7B70229335(&(Global_1633501.f_88939[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_115(int iParam0)
{
	if (!func_117())
	{
		unk_0x452C227A360B9E24(2);
		unk_0x0C296B5FEAF36C37(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x9D3FB07C04E5609E((iParam0 / 2));
		func_116();
	}
}

void func_116()
{
	unk_0xEB79FECD9022AAF0(&(Global_2443134.f_2), 3);
}

bool func_117()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 3);
}

bool func_118()
{
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2808, 8);
}

void func_119()
{
	unk_0xEB79FECD9022AAF0(&Global_2443134, 4);
}

void func_120()
{
	unk_0xEB79FECD9022AAF0(&Global_2443134, 28);
}

int func_121(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	if (Global_1633501 == 2 || Global_1633501 == 8)
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	Global_1742351.f_5 = 0;
	Global_1742351.f_11 = -1;
}

int func_124()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1633501.f_30)
	{
		iVar1 = 0;
		while (iVar1 < Global_1633501.f_30)
		{
			if (Global_1633501.f_37[iVar0] != Global_1633501.f_37[iVar1])
			{
				return 0;
			}
			else if (Global_1633501.f_32[iVar0] != Global_1633501.f_32[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_125()
{
	if ((((((Global_1633501 == 0 || Global_1633501 == 4) || Global_1633501 == 6) || Global_1633501 == 3) || Global_1633501 == 31) || Global_1633501.f_2 == 6) || Global_1633501.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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
		if (func_99() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_104() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_101())
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
			uParam0->f_24 = func_226(1);
			uParam0->f_25 = func_224(1);
			if (func_100())
			{
				return 0;
			}
			func_98();
			func_97();
			if (func_104() || bParam9)
			{
				unk_0x15D0F7DC829D317B(1);
			}
			else
			{
				unk_0x15D0F7DC829D317B(0);
			}
			func_222();
			if (bParam4)
			{
				func_95(uParam0, 11);
			}
			else
			{
				func_95(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_104() || bParam9)
			{
				if (unk_0x55E20D3E4D289DA9(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1633501.f_89300 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1633501.f_88933), sParam1, 24);
						}
						func_164(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_95(uParam0, 9);
						*uParam0 = 1;
						func_111();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_972474.f_42), sParam1, 24);
							Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_972474.f_12 };
							func_163(&iVar1, &uVar0, &Global_972474);
							if (Global_972474.f_65 == 0)
							{
								func_248(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_97();
								func_111();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_970912.f_42), sParam1, 24);
							Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_970912.f_12 };
							func_163(&iVar1, &uVar0, &Global_970912);
							uParam0->f_8 = 0;
							if (Global_970912.f_65 == 0)
							{
								func_248(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_97();
								func_111();
								return 1;
							}
						}
						func_97();
						unk_0x9CCDB2F081188D4D();
						unk_0x15D0F7DC829D317B(1);
						func_162(uParam0);
						func_95(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_111();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_111();
					func_97();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_92(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0xACFA71A2AA8775DD(uParam0->f_5);
				func_95(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x53F0633B39D49EE4(sParam1, 1, func_92(iParam2)))
				{
					func_95(uParam0, 3);
				}
			}
			else if (unk_0xC303D95D12685162(sParam1, func_92(iParam2)))
			{
				func_95(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x65EC659404540DDA())
			{
				uParam0->f_40 = unk_0xEBAA8D54A8E4A262();
				if (unk_0xE954C5DD587BC487())
				{
				}
				else
				{
					func_248(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEBAA8D54A8E4A262();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xEE7670C3E86576DD() > 0)
				{
					if (!bParam12 && !func_160(uParam0->f_24, uParam0->f_25, unk_0x0F6A326384FF1386(0), unk_0x9476E3BEABD45EE7(0)))
					{
						func_248(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_111();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0xACFA71A2AA8775DD(uParam0->f_5);
						func_95(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0xDB9B90606DD732C7(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_972474.f_12), unk_0x450A20AE5B480415(0), 64);
								StringCopy(&(Global_972474.f_36), unk_0xF60E240F18A45E74(0), 24);
								Global_972474.f_71 = unk_0x9476E3BEABD45EE7(0);
								StringCopy(&(Global_972474.f_42), sParam1, 24);
								Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_972474.f_12 };
								func_163(&iVar1, &uVar0, &Global_972474);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_970912.f_12), unk_0x450A20AE5B480415(0), 64);
								StringCopy(&(Global_970912.f_36), unk_0xF60E240F18A45E74(0), 24);
								Global_970912.f_71 = unk_0x9476E3BEABD45EE7(0);
								StringCopy(&(Global_970912.f_42), sParam1, 24);
								Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_970912.f_12 };
								func_163(&iVar1, &uVar0, &Global_970912);
								uParam0->f_8 = 0;
							}
							func_97();
							func_95(uParam0, 10);
						}
						else
						{
							func_248(uParam0, 1, 1);
							*uParam0 = 0;
							func_111();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0xDB9B90606DD732C7(0))
						{
							if (uParam0->f_16)
							{
								func_158(&iVar1, &uVar0, &Global_972474, iParam6);
								if (iParam6 == 1)
								{
									func_248(uParam0, 1, 1);
									*uParam0 = 1;
									func_111();
									return 1;
								}
								StringCopy(&(Global_972474.f_12), unk_0x450A20AE5B480415(0), 64);
								StringCopy(&(Global_972474.f_36), unk_0xF60E240F18A45E74(0), 24);
								StringCopy(&(Global_972474.f_42), sParam1, 24);
								Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_972474.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_158(&iVar1, &uVar0, &Global_970912, iParam6);
								if (iParam6 == 1)
								{
									func_248(uParam0, 1, 1);
									*uParam0 = 1;
									func_111();
									return 1;
								}
								StringCopy(&(Global_970912.f_12), unk_0x450A20AE5B480415(0), 64);
								StringCopy(&(Global_970912.f_36), unk_0xF60E240F18A45E74(0), 24);
								StringCopy(&(Global_970912.f_42), sParam1, 24);
								Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_19 = { Global_970912.f_12 };
								uParam0->f_8 = 0;
							}
							func_97();
							func_95(uParam0, 10);
						}
						else
						{
							func_248(uParam0, 1, 1);
							*uParam0 = 0;
							func_111();
							return 1;
						}
					}
				}
				else
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x58E3ED350392E425(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xF9E752009D9D07AB();
				}
				if (unk_0xAA934D39108FA5FE(uParam0->f_5))
				{
					func_95(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_95(uParam0, 0);
					return 0;
				}
				else
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			else if (func_157() || func_156() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0x67D9DFC4D91122DD("FMMC_DOWNLOAD");
					unk_0x168CD266B6A65426(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_155()) && !bParam14)
			{
				return 0;
			}
			if (unk_0x84518EE57DB73A33(uParam0->f_5))
			{
				if (unk_0x42103FD8DF7FA31B(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_227(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1633501.f_89300 = 1;
							Global_1633501.f_89285 = 1;
							StringCopy(&(Global_1633501.f_88622), "", 64);
							StringCopy(&(Global_1633501.f_88669), "", 24);
							StringCopy(&(Global_1633501.f_88647), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1633501.f_88933), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1633501.f_88646 = unk_0x765F5B806B517045(unk_0xEE35337E483142C4(0));
							StringCopy(&(Global_1633501.f_88669), unk_0x0F6A326384FF1386(0), 24);
							Global_1633501.f_89300 = unk_0x9476E3BEABD45EE7(0);
							if (Global_1633501.f_89300 == 1 || Global_1633501.f_89300 == 2)
							{
								StringCopy(&(Global_1633501.f_88647), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1633501.f_88647), unk_0x0F6A326384FF1386(0), 24);
							}
							if ((Global_1633501.f_89300 == 0 || Global_1633501.f_89300 == 3) && unk_0x332B7A5084B2FE1F(0))
							{
								StringCopy(&(Global_1633501.f_88622), unk_0x592E5DF66777D40F(unk_0xBE369BE1BC57A796()), 64);
							}
							else if ((unk_0x8EA3D5407E9F4AF0() && (Global_1633501.f_89300 == 0 || Global_1633501.f_89300 == 3)) && func_154(&iVar33, &(Global_1633501.f_88669)))
							{
								StringCopy(&(Global_1633501.f_88622), unk_0x592E5DF66777D40F(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1633501.f_88622), unk_0x6E63715954663514(0), 64);
							}
							Global_1633501.f_88953 = unk_0xF64A36CEF66C2E7E(0, 0);
							Global_1633501.f_89287 = unk_0x6EFE5A7418D5B45A(0);
							uParam0->f_23 = func_82(0);
							Global_1633501.f_102695 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1633501.f_88933), unk_0xF60E240F18A45E74(0), 24);
							}
							if (Global_1633501.f_89300 == 0 || Global_1633501.f_89300 == 3)
							{
								if ((unk_0x7ADADBC8BF607F59(0, &uVar4) && unk_0x7BC6F3BBFEAB9958(&uVar4, 13)) && unk_0x2D5BDD3304DD4725(&uVar4))
								{
									Var17 = { Global_1633501.f_88622 };
									func_153(1, Var17);
								}
								else
								{
									func_153(0, Var17);
								}
							}
							else
							{
								func_153(0, Var17);
							}
							Global_1633501.f_8 = func_78(unk_0xAD63FAB8C9CDB0B0(0, 0), unk_0xF64A36CEF66C2E7E(0, 0));
							if (unk_0xC407062153252EFB(uParam0->f_7))
							{
								Global_1633501.f_89286 = unk_0xE3A49CA01F56731E(0);
								Global_1633501.f_89288 = 1;
							}
							else
							{
								Global_1633501.f_89286 = 0;
								Global_1633501.f_89288 = 0;
							}
							Global_1633501.f_89285 = unk_0xA0195852C2C8BF24(0);
							uParam0->f_34 = unk_0x7BE7B9F1E70C3985(0);
							if (!func_104())
							{
								if (unk_0xFB0F923C474E44C0(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x6A8E445E09525604(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1633501.f_88952 = uParam0->f_30;
							Global_2443905.f_4187.f_3 = unk_0xCFA8142D0AB3F62E(0, 0);
							Global_2443905.f_4187.f_2 = unk_0x1D6A651CB1724485(0, 0);
							if (Global_1633501.f_89300 == 1 || Global_1633501.f_89300 == 2)
							{
								StringCopy(&(Global_1633501.f_88622), func_79(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1633501.f_88933), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_104())
						{
							func_164(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
							if (Global_1633501.f_89300 == 0 && func_151())
							{
								func_248(uParam0, 1, 1);
								uParam0->f_41.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								func_111();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								func_95(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_164(-1, bParam11, 0, 0);
						}
						if (func_148(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xA41786EFDA9A8895();
						iVar2 = unk_0x489F243BF1619568(iVar1, "mission");
						iVar3 = unk_0x489F243BF1619568(iVar2, "gen");
						StringCopy(&(Global_2433125.f_3214), unk_0x450A20AE5B480415(0), 32);
						Global_2433125.f_3214.f_8 = unk_0x37AC9FA286925FB3(iVar3, "type");
						uParam0->f_17 = unk_0xC407062153252EFB(0);
						*uParam0 = 1;
						func_111();
						unk_0x20E232F0309EDEF3(uParam0->f_5);
						func_97();
						return 1;
					}
					unk_0x20E232F0309EDEF3(uParam0->f_5);
					func_97();
				}
				else if (iParam2 == 0)
				{
					func_248(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_111();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_248(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_111();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_164(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_148(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_146(uParam0, 0, bParam3, 0))
			{
				func_95(uParam0, 0);
				func_97();
				if ((((func_140(Global_1633501.f_88646) && func_125()) && !bParam9) && !unk_0x9C88EB7B70229335(&(Global_1633501.f_88939[0 /*6*/]))) && (func_157() || (func_135() && !func_134())))
				{
					uParam0->f_8 = 0;
					func_95(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_82(0);
						uParam0->f_21 = unk_0xEE4AD17A47DE1FB0(0, uParam0->f_23);
					}
					func_133(&(uParam0->f_41), 0);
					func_95(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_248(uParam0, 1, 0);
					func_111();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x53F0633B39D49EE4(&(Global_1633501.f_88939[0 /*6*/]), 1, func_92(iParam2)))
			{
				func_95(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x65EC659404540DDA())
			{
				uParam0->f_40 = unk_0xEBAA8D54A8E4A262();
				if (unk_0xE954C5DD587BC487())
				{
				}
				else
				{
					func_248(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEBAA8D54A8E4A262();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xEE7670C3E86576DD() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0xACFA71A2AA8775DD(uParam0->f_5);
					func_95(uParam0, 22);
				}
				else
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0x58E3ED350392E425(uParam0->f_5))
			{
				if (unk_0xAA934D39108FA5FE(uParam0->f_5))
				{
					func_95(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_95(uParam0, 0);
					return 0;
				}
				else
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0x84518EE57DB73A33(uParam0->f_5))
			{
				if (unk_0x42103FD8DF7FA31B(uParam0->f_5))
				{
					func_130();
					func_248(uParam0, 1, 0);
					Global_1632256 = 1;
					func_111();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_248(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_111();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0x48B8265059381CD0(Global_1633501.f_7, 0))
			{
				if (bParam7)
				{
					if (func_129(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_248(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_111();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_248(uParam0, 1, 0);
					func_111();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_248(uParam0, 1, 1);
				func_111();
				return 1;
			}
			break;
		
		case 10:
			if (func_146(uParam0, 0, bParam3, iParam2))
			{
				func_97();
				func_95(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x1C0E501152E56A0B(&(Global_972474.f_1177), Global_972474.f_65, func_92(0)))
				{
					func_95(uParam0, 12);
				}
			}
			else if (unk_0x1C0E501152E56A0B(&(Global_970912.f_1177), Global_970912.f_65, func_92(0)))
			{
				func_95(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x65EC659404540DDA())
			{
				if (unk_0xE954C5DD587BC487())
				{
				}
				else
				{
					func_248(uParam0, 1, 1);
					uParam0->f_40 = unk_0xEBAA8D54A8E4A262();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xEE7670C3E86576DD() > 0)
				{
					if (uParam0->f_16)
					{
						Global_972474.f_65 = unk_0xEE7670C3E86576DD();
					}
					else
					{
						Global_970912.f_65 = unk_0xEE7670C3E86576DD();
					}
					uParam0->f_8 = 0;
					func_248(uParam0, 0, bParam8);
					func_162(uParam0);
					func_95(uParam0, 13);
				}
				else
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_104())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_972474.f_65 - 1))
					{
						if (unk_0x55E20D3E4D289DA9(&(Global_972474.f_1177[uParam0->f_9 /*6*/])))
						{
							func_128(uParam0, &Global_972474);
							unk_0x9CCDB2F081188D4D();
						}
						uParam0->f_9++;
					}
					func_111();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_970912.f_65 - 1))
					{
						if (unk_0x55E20D3E4D289DA9(&(Global_970912.f_1177[uParam0->f_9 /*6*/])))
						{
							func_128(uParam0, &Global_970912);
							unk_0x9CCDB2F081188D4D();
						}
						uParam0->f_9++;
					}
					func_111();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_127(uParam0, &Global_972474))
				{
					if (uParam0->f_27)
					{
						func_248(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_111();
						return 1;
					}
					else
					{
						func_95(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_127(uParam0, &Global_970912))
			{
				if (uParam0->f_27)
				{
					func_248(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_111();
					return 1;
				}
				else
				{
					func_95(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_95(uParam0, 0);
			func_97();
			func_248(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_111();
			return 1;
			break;
	}
	return 0;
}

int func_127(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0xDB9B90606DD732C7(uParam0->f_7))
		{
			if (!func_160(uParam0->f_24, uParam0->f_25, unk_0x0F6A326384FF1386(0), unk_0x9476E3BEABD45EE7(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_128(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_97();
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

void func_128(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(iVar0, "mission");
	iVar2 = unk_0x489F243BF1619568(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_81(iVar2, "start") };
	if (func_104())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x12A8355C6ACDA29F(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x450A20AE5B480415(uParam0->f_7), 64);
	}
	if (!func_104())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0x6A8E445E09525604(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0x9476E3BEABD45EE7(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0x37AC9FA286925FB3(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0x37AC9FA286925FB3(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0x37AC9FA286925FB3(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0x37AC9FA286925FB3(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0x37AC9FA286925FB3(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_81(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_80(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0x37AC9FA286925FB3(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_82(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0x6E63715954663514(uParam0->f_7), 24);
	if (!func_104())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_78(unk_0xAD63FAB8C9CDB0B0(uParam0->f_7, 0), unk_0xF64A36CEF66C2E7E(uParam0->f_7, 0));
	}
	if (func_108() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4746)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4746;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4746)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4746;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0x37AC9FA286925FB3(iVar2, "rank");
	func_77(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0xEB79FECD9022AAF0(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0xF60E240F18A45E74(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xA41786EFDA9A8895() != 0)
	{
		unk_0xAD8D0FF9582FEAAB();
	}
	if (!func_104())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0xF60E240F18A45E74(uParam0->f_9), 24);
		if (unk_0xC407062153252EFB(uParam0->f_9))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0xA41786EFDA9A8895() != 0)
			{
				unk_0xAD8D0FF9582FEAAB();
			}
		}
	}
}

int func_129(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x12BA71481B28205E(*uParam0);
			}
			unk_0x937888DD0ED2FEAD();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x91BCC114595D65EF(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xE11B6BE9AD42541A(unk_0x51D177963C1D305E(0, uParam3)))
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
							unk_0x12BA71481B28205E(*uParam0);
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

void func_130()
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
	
	iVar0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(iVar0, "mission");
	iVar2 = unk_0x489F243BF1619568(iVar1, "endcon");
	iVar3 = unk_0x489F243BF1619568(iVar1, "ene");
	iVar4 = unk_0x37AC9FA286925FB3(iVar3, "no");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar3, "loc");
	iVar6 = unk_0x489F243BF1619568(iVar1, "goto");
	iVar7 = unk_0x37AC9FA286925FB3(iVar6, "no");
	iVar8 = unk_0x489F243BF1619568(iVar1, "veh");
	iVar9 = unk_0x37AC9FA286925FB3(iVar8, "no");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar8, "loc");
	iVar11 = unk_0x489F243BF1619568(iVar1, "obj");
	iVar12 = unk_0x37AC9FA286925FB3(iVar11, "no");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1633501.f_30 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1632256.f_1[iVar14] = unk_0xB6790B02AB53A81E(unk_0x72C98FCC21DF47AA(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x72C98FCC21DF47AA(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x72C98FCC21DF47AA(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x72C98FCC21DF47AA(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1632256.f_1[iVar14] - 1))
			{
				Global_1632256.f_6[iVar14 /*18*/][iVar15] = unk_0xB6790B02AB53A81E(uVar25[iVar14], iVar15);
				Global_1632256.f_79[iVar14 /*18*/][iVar15] = unk_0xB6790B02AB53A81E(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1632256.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xC250F19D1D16764D(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1632256.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1633501.f_30 - 1))
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
		while (iVar14 < Global_1632256.f_1[iVar80])
		{
			if ((!unk_0x48B8265059381CD0(Global_1632256.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0x48B8265059381CD0(Global_1632256.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x72C98FCC21DF47AA(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x72C98FCC21DF47AA(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0xB6790B02AB53A81E(uVar60[iVar80], iVar14);
			iVar193 = unk_0xB6790B02AB53A81E(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x48B8265059381CD0(Global_1632256.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x48B8265059381CD0(Global_1632256.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1753464.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFFFE2DE388037E54(iVar10, iVar14) };
					Global_1753464.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1753464.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x72C98FCC21DF47AA(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x72C98FCC21DF47AA(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0xB6790B02AB53A81E(uVar70[iVar80], iVar14);
			iVar193 = unk_0xB6790B02AB53A81E(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x48B8265059381CD0(Global_1632256.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x48B8265059381CD0(Global_1632256.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1753464.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFFFE2DE388037E54(iVar13, iVar14) };
					Global_1753464.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1753464.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x72C98FCC21DF47AA(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x72C98FCC21DF47AA(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x72C98FCC21DF47AA(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0xB6790B02AB53A81E(uVar50[iVar80], iVar14);
			iVar15 = unk_0xB6790B02AB53A81E(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x48B8265059381CD0(Global_1632256.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x48B8265059381CD0(Global_1632256.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1753464.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFFFE2DE388037E54(uVar55[iVar80], iVar14) };
					Global_1753464.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1753464.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x72C98FCC21DF47AA(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x72C98FCC21DF47AA(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0xB6790B02AB53A81E(uVar40[iVar80], iVar14);
			iVar15 = unk_0xB6790B02AB53A81E(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x48B8265059381CD0(Global_1632256.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x48B8265059381CD0(Global_1632256.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1753464.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0xFFFE2DE388037E54(iVar5, iVar14) };
					Global_1753464.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1753464.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1753464.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1753464.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_131(iVar15, 2) };
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
				if (Global_1753464.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1753464.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1753464.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1753464.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1753464.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xA41786EFDA9A8895() != 0)
	{
		unk_0xAD8D0FF9582FEAAB();
	}
}

Vector3 func_131(int iParam0, int iParam1)
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

int func_132(int iParam0, int iParam1, int iParam2)
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

void func_133(var uParam0, bool bParam1)
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
		unk_0x12BA71481B28205E(*uParam0);
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

bool func_134()
{
	return Global_2443134.f_598;
}

int func_135()
{
	if (((func_139() || func_138()) || func_137()) || func_136())
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return unk_0x48B8265059381CD0(Global_2443134, 1);
}

bool func_137()
{
	return unk_0x48B8265059381CD0(Global_2443134, 2);
}

bool func_138()
{
	return unk_0x48B8265059381CD0(Global_2443134, 20);
}

var func_139()
{
	return Global_2443134.f_577;
}

int func_140(int iParam0)
{
	if ((((func_145(iParam0) || func_144(iParam0)) || func_143(iParam0)) || func_142(iParam0)) || func_141(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_141(int iParam0)
{
	return iParam0 == Global_262145.f_7448;
}

bool func_142(int iParam0)
{
	return iParam0 == Global_262145.f_7442;
}

bool func_143(int iParam0)
{
	return iParam0 == Global_262145.f_7436;
}

bool func_144(int iParam0)
{
	return iParam0 == Global_262145.f_7429;
}

bool func_145(int iParam0)
{
	return iParam0 == Global_262145.f_7424;
}

int func_146(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_101())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_104())
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
			func_97();
			func_147();
			Global_1742311.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1742336.f_5 = 0;
				Global_1742336.f_4 = 0;
				Global_1742336.f_1 = 0;
				Global_1742336.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1742336.f_5 = 0;
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
			if (unk_0xEAB52B67DCE90EDF(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xA41786EFDA9A8895();
					Global_1742342 = unk_0x37AC9FA286925FB3(iVar0, "pt");
					Global_1742342.f_1 = unk_0x37AC9FA286925FB3(iVar0, "pu");
					Global_1742342.f_2 = unk_0x37AC9FA286925FB3(iVar0, "ft");
					Global_1742342.f_3 = unk_0x37AC9FA286925FB3(iVar0, "fu");
					Global_1742342.f_4 = unk_0x37AC9FA286925FB3(iVar0, "qt");
					Global_1742342.f_5 = unk_0x37AC9FA286925FB3(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xA41786EFDA9A8895();
					Global_1742311.f_10 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "dt"));
					Global_1742311.f_11 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "du"));
					Global_1742311.f_9 = (Global_1742311.f_10 / Global_1742311.f_11);
					Global_1742311.f_13 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "pt"));
					Global_1742311.f_14 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "pu"));
					Global_979489 = unk_0xF2DB717A73826179(Global_1742311.f_14);
					Global_1742311.f_12 = (Global_1742311.f_13 / Global_1742311.f_14);
					Global_1742311.f_15 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "qt"));
					Global_1742311.f_17 = unk_0xBBDA792448DB5A89(unk_0x37AC9FA286925FB3(iVar0, "qu"));
					Global_1742311.f_16 = (Global_1742311.f_15 / Global_1742311.f_17);
				}
				if (unk_0xA41786EFDA9A8895() != 0)
				{
					unk_0xAD8D0FF9582FEAAB();
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
			if (unk_0xC407062153252EFB(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x84A8231D14195CF9(iParam1))
					{
						iVar0 = unk_0xA41786EFDA9A8895();
						if (iParam3 == 0)
						{
							Global_1742311 = unk_0x37AC9FA286925FB3(iVar0, "quit");
							Global_1742311.f_2 = unk_0x37AC9FA286925FB3(iVar0, "ply");
							Global_1742311.f_8 = unk_0x37AC9FA286925FB3(iVar0, "fl");
							if (Global_1742311.f_2 > 0)
							{
								Global_1742311.f_5 = 1;
							}
							unk_0xAD8D0FF9582FEAAB();
						}
						else if (iParam3 == 4)
						{
							Global_1742336.f_5 = unk_0x917AA466A591DA1F(iVar0, "won");
							Global_1742336.f_4 = unk_0x37AC9FA286925FB3(iVar0, "ply");
							Global_1742336.f_1 = unk_0x37AC9FA286925FB3(iVar0, "quit");
							Global_1742336.f_2 = unk_0x37AC9FA286925FB3(iVar0, "fl");
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

void func_147()
{
	Global_1742311 = 0;
	Global_1742311.f_2 = 0;
	Global_1742311.f_8 = 0;
	Global_1742311.f_3 = 0;
	Global_1742311.f_6 = 0;
}

int func_148(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_150() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_104() && iParam1 == 0) && !bParam3)
			{
				if (Global_1633501.f_89300 == 0)
				{
					if (Global_1633501 == 0)
					{
						if (((((Global_1633501.f_2 != 6 && !unk_0x48B8265059381CD0(Global_1633501.f_4, 20)) && !unk_0x48B8265059381CD0(Global_1633501.f_4, 21)) && !unk_0x48B8265059381CD0(Global_1633501.f_4, 22)) && !unk_0x48B8265059381CD0(Global_1633501.f_4, 23)) && Global_1633501.f_2 != 5)
						{
							func_248(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_111();
							unk_0x20E232F0309EDEF3(uParam0->f_5);
							func_97();
							return 1;
						}
					}
					else if (Global_1633501 != 2 && Global_1633501 != 1)
					{
						func_248(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_111();
						unk_0x20E232F0309EDEF3(uParam0->f_5);
						func_97();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1633501 == 0 && Global_1633501.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_104())
		{
			if (!unk_0xFB0F923C474E44C0(unk_0x7BE7B9F1E70C3985(0)))
			{
				Global_1633501.f_89283 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_149();
	}
	func_95(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_149()
{
	unk_0xEB79FECD9022AAF0(&(Global_2443134.f_29.f_3), 7);
}

bool func_150()
{
	return unk_0x6948821CC8D52AC2(-1762644250);
}

int func_151()
{
	if (((Global_1633501.f_35868 || Global_1633501.f_66.f_2 < 0f) || func_152(Global_1633501.f_66, 999)) || Global_1633501.f_37044[0 /*3*/].f_2 < 0f)
	{
		return 1;
	}
	return 0;
}

int func_152(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (iParam3 != 999)
	{
		if ((unk_0x3D559A6AF62756C4(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x3D559A6AF62756C4(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x3D559A6AF62756C4(Param0, Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/], Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_3, Global_1049427[iParam3 /*1942*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_152(Param0, iVar0))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_152(Param0, 8))
		{
			return 1;
		}
		if (func_152(Param0, 17))
		{
			return 1;
		}
	}
	return 0;
}

void func_153(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2454800, "", 64);
	}
	else
	{
		Global_2454800 = { Param1 };
	}
	Global_2454799 = iParam0;
}

int func_154(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x9C88EB7B70229335(uParam1))
	{
		return 0;
	}
	unk_0xFCD8B3B75AE71441(uParam1, &uVar0, 13);
	if (unk_0x7BC6F3BBFEAB9958(&uVar0, 13) && unk_0xBD6B478BC887CAC6(&uVar0))
	{
		*uParam0 = unk_0x471C87EF03143741(&uVar0);
		if (unk_0x7268A1112372AA44(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_155()
{
	return Global_2443134.f_29.f_47;
}

int func_156()
{
	return Global_2452970;
}

bool func_157()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188 != 0;
}

void func_158(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(*uParam0, "data");
	iVar2 = unk_0x489F243BF1619568(iVar1, "trg");
	*uParam1 = unk_0x72C98FCC21DF47AA(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x0481328AA6FEFDAB(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x917AA466A591DA1F(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x917AA466A591DA1F(iVar1, "open");
	Var3 = { func_159(unk_0x0F6A326384FF1386(0)) };
	unk_0x7E1D32162078314A(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x37AC9FA286925FB3(iVar2, "scr");
	uParam2->f_5 = unk_0x37AC9FA286925FB3(iVar2, "time");
	uParam2->f_1 = unk_0x37AC9FA286925FB3(iVar1, "cash");
	uParam2->f_65 = unk_0x685173272EC83DA9(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0xB13A070E8D2CC571(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x12A8355C6ACDA29F(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0x37AC9FA286925FB3(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0x37AC9FA286925FB3(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_159(var uParam0)
{
	struct<13> Var0;
	
	unk_0xB48D3E05434BD1FF(uParam0, &Var0, 13);
	return Var0;
}

int func_160(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_159(sParam2) };
		Var13 = { func_161(unk_0xBE369BE1BC57A796()) };
		if (bParam1)
		{
			if (unk_0xA1AD7C69980A61EC(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x2D5BDD3304DD4725(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x8EA3D5407E9F4AF0())
		{
			if (unk_0xA1AD7C69980A61EC(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x1256452C511A974A(&Var0) && unk_0x7BB94A563F5F14FD(&Var0))
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
			Var13 = { func_161(unk_0xBE369BE1BC57A796()) };
			if (!unk_0xA1AD7C69980A61EC(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_161(int iParam0)
{
	struct<13> Var0;
	
	unk_0xF3EE72618DF96AF7(iParam0, &Var0, 13);
	return Var0;
}

void func_162(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_972474.f_6 = 0;
		Global_972474.f_7 = 32;
	}
	else
	{
		Global_970912.f_6 = 0;
		Global_970912.f_7 = 32;
	}
}

void func_163(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xA41786EFDA9A8895();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x72C98FCC21DF47AA(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x685173272EC83DA9(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0xB13A070E8D2CC571(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x12A8355C6ACDA29F(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x917AA466A591DA1F(*uParam0, "h2h");
	uParam2->f_9 = unk_0x917AA466A591DA1F(*uParam0, "ch");
	if (func_104())
	{
		StringCopy(&(uParam2->f_12), unk_0x12A8355C6ACDA29F(*uParam0, "name"), 64);
	}
}

void func_164(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xA41786EFDA9A8895();
	iVar1 = unk_0x489F243BF1619568(iVar0, "mission");
	iVar2 = unk_0x489F243BF1619568(iVar1, "gen");
	Global_1633501.f_89256 = unk_0x37AC9FA286925FB3(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_209(iVar1, iParam0, bParam1);
		func_208(iVar1);
		func_207(&iVar1);
		func_206(&iVar1);
		func_205(&iVar1);
		func_204(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_125())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_203(iVar1);
			func_202(iVar1);
			func_201(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_200(iVar1);
			func_199(iVar2);
			func_198(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_197(iVar1);
			func_196(iVar1);
			func_195(iVar1);
			func_194(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_122())
	{
		func_191(iVar1);
		func_195(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_189(iVar1);
		func_188(iVar1);
		func_187(iVar1);
		func_186(iVar1);
		func_185(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_183(iVar1);
		func_182(iVar1);
		func_180(iVar1);
		func_176(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1633501 == 1)
	{
		func_202(iVar1);
		func_175(iVar1);
	}
	else
	{
		func_170(iVar1);
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_17, 19))
	{
		func_169(iVar1);
	}
	unk_0x21E7933CCC7B3724(&(Global_1633501.f_4), 15);
	unk_0x21E7933CCC7B3724(&(Global_1633501.f_4), 18);
	unk_0x21E7933CCC7B3724(&(Global_1633501.f_4), 19);
	unk_0x21E7933CCC7B3724(&(Global_1633501.f_4), 29);
	unk_0x21E7933CCC7B3724(&(Global_1633501.f_4), 28);
	if (func_75(Global_1633501.f_88646))
	{
		Global_1633501.f_26 = Global_1633501.f_25;
	}
	if (!func_167(unk_0xBE369BE1BC57A796()) && !func_166())
	{
		iVar3 = func_76(Global_1633501.f_88646, 1);
		if (iVar3 != -1)
		{
			if (Global_262145.f_5019[iVar3] != -1)
			{
				Global_1633501.f_26 = Global_262145.f_5019[iVar3];
			}
			if (Global_262145.f_4988[iVar3] != -1)
			{
				Global_1633501.f_25 = Global_262145.f_4988[iVar3];
			}
		}
	}
	if (func_51(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_4), 15);
	}
	else if (func_50(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_4), 18);
	}
	else if (func_49(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_4), 19);
	}
	else if (func_47(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_4), 29);
	}
	else if (func_48(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_4), 28);
	}
	else if (func_46(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 0);
	}
	else if (func_45(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 1);
	}
	else if (func_44(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 2);
	}
	else if (func_40(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 6);
	}
	else if (func_39(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 7);
	}
	else if (func_38(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 8);
	}
	else if (func_37(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 9);
	}
	else if (func_33(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 10);
	}
	else if (func_36(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 11);
	}
	else if (func_35(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 12);
	}
	else if (func_70(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 13);
	}
	else if (func_69(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 22);
	}
	else if (func_34(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 14);
	}
	else if (func_43(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 3);
	}
	else if (func_42(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 4);
	}
	else if (func_68(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 16);
	}
	else if (func_67(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 17);
	}
	else if (func_66(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 20);
	}
	else if (func_65(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 21);
	}
	else if (func_69(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 22);
	}
	else if (func_41(Global_1633501.f_88646))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 5);
	}
	else if (func_64(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 23);
	}
	else if (func_60(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 27);
	}
	else if (func_63(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 24);
	}
	else if (func_61(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 26);
	}
	else if (func_62(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 25);
	}
	else if (func_59(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 28);
	}
	else if (func_58(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 29);
	}
	else if (func_57(Global_1633501.f_107548))
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_5), 30);
	}
	func_165(Global_1633501.f_88646);
}

void func_165(int iParam0)
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
		if (iParam0 == Global_262145.f_7853[iVar0] || iParam0 == Global_262145.f_7862[iVar0])
		{
			Global_1633501.f_66 = { func_55(0, iVar0) };
			Global_1633501.f_69 = { func_54(0, iVar0) };
			Var1 = { func_53(0, iVar0) };
			Global_1633501.f_88 = Var1.f_2;
			Global_1633501.f_1 = 0;
			Global_1633501.f_2 = 8;
			Global_1633501.f_89263 = 0;
			Global_1633501.f_89267 = 16777215;
		}
		iVar0++;
	}
}

bool func_166()
{
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2808, 5);
}

bool func_167(int iParam0)
{
	return func_168(iParam0);
}

bool func_168(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_13.f_1, 0);
}

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x489F243BF1619568(iParam0, "fsp");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "loc");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (unk_0x4C58F55F20941087(iVar2, iVar0) == 5)
		{
			Global_1633501.f_84757[iVar0 /*5*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
			Global_1633501.f_84757[iVar0 /*5*/].f_3 = unk_0x5EFB23FE1415D634(iVar3, iVar0);
		}
		else
		{
			Global_1633501.f_84757[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_1633501.f_84757[iVar0 /*5*/].f_3 = 0f;
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
	int iVar51;
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
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
	int iVar160;
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	var uVar170[5];
	var uVar176[5];
	var uVar182[5];
	var uVar188[5];
	var uVar194[5];
	var uVar200[5];
	var uVar206[5];
	var uVar212[5];
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
	int iVar238;
	int iVar239;
	int iVar240;
	int iVar241;
	int iVar242;
	int iVar243;
	int iVar244;
	int iVar245;
	int iVar246;
	int iVar247;
	int iVar248;
	int iVar249;
	int iVar250;
	var uVar251[2];
	var uVar254[2];
	
	iVar6 = unk_0x489F243BF1619568(iParam0, "ene");
	Global_1633501.f_61974 = unk_0x37AC9FA286925FB3(iVar6, "no");
	if (unk_0x0481328AA6FEFDAB(iVar6, "spcap") == 2 && unk_0x37AC9FA286925FB3(iVar6, "spcap") != 0)
	{
		Global_1633501.f_61975 = unk_0x37AC9FA286925FB3(iVar6, "spcap");
	}
	else
	{
		Global_1633501.f_61975 = 50;
	}
	Global_1633501.f_61977 = unk_0x37AC9FA286925FB3(iVar6, "time");
	Global_1633501.f_61978 = unk_0x37AC9FA286925FB3(iVar6, "pal");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar6, "loc");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar6, "head");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar6, "rng");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar6, "model");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar6, "gun");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar6, "skill");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar6, "rsp");
	if (Global_1633501 == 1)
	{
		uVar14[0] = unk_0x72C98FCC21DF47AA(iVar6, "team");
	}
	iVar19 = unk_0x72C98FCC21DF47AA(iVar6, "wep");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar6, "hlt");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar6, "lghlt");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar6, "veh");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar6, "foll");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar6, "iaim");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar6, "iaimt");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar6, "iaimr");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar6, "sanim");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar6, "sat");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar6, "saru");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar6, "sara");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar6, "satt");
	iVar32 = unk_0x72C98FCC21DF47AA(iVar6, "whost");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar6, "flee");
	iVar34 = unk_0x72C98FCC21DF47AA(iVar6, "frr");
	iVar35 = unk_0x72C98FCC21DF47AA(iVar6, "pfrmr");
	iVar36 = unk_0x72C98FCC21DF47AA(iVar6, "psnt");
	iVar37 = unk_0x72C98FCC21DF47AA(iVar6, "psnei");
	iVar38 = unk_0x72C98FCC21DF47AA(iVar6, "prorbs");
	iVar39 = unk_0x72C98FCC21DF47AA(iVar6, "p2sp");
	iVar40 = unk_0x72C98FCC21DF47AA(iVar6, "p2sh");
	iVar41 = unk_0x72C98FCC21DF47AA(iVar6, "accu");
	iVar42 = unk_0x72C98FCC21DF47AA(iVar6, "lgacc");
	iVar43 = unk_0x72C98FCC21DF47AA(iVar6, "cmsty");
	iVar44 = unk_0x72C98FCC21DF47AA(iVar6, "pedbs");
	iVar45 = unk_0x72C98FCC21DF47AA(iVar6, "pbstwo");
	iVar46 = unk_0x72C98FCC21DF47AA(iVar6, "pbs3");
	iVar47 = unk_0x72C98FCC21DF47AA(iVar6, "pbs4");
	iVar48 = unk_0x72C98FCC21DF47AA(iVar6, "pbs5");
	iVar49 = unk_0x72C98FCC21DF47AA(iVar6, "pbs6");
	iVar50 = unk_0x72C98FCC21DF47AA(iVar6, "pbs7");
	iVar51 = unk_0x72C98FCC21DF47AA(iVar6, "pbs8");
	if (func_125())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1633501.f_30 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar52[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar57[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar62[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar67[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar72[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar77[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar82[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar87[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar92[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar97[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar170[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar176[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar182[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar188[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar200[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar194[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar206[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar212[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			iVar3++;
		}
		iVar102 = unk_0x72C98FCC21DF47AA(iVar6, "objt");
		iVar103 = unk_0x72C98FCC21DF47AA(iVar6, "team");
		iVar104 = unk_0x72C98FCC21DF47AA(iVar6, "spawn");
		iVar105 = unk_0x72C98FCC21DF47AA(iVar6, "acts");
		iVar106 = unk_0x72C98FCC21DF47AA(iVar6, "objt2");
		iVar107 = unk_0x72C98FCC21DF47AA(iVar6, "team2");
		iVar108 = unk_0x72C98FCC21DF47AA(iVar6, "spawn2");
		iVar109 = unk_0x72C98FCC21DF47AA(iVar6, "acts2");
		iVar110 = unk_0x72C98FCC21DF47AA(iVar6, "objt3");
		iVar111 = unk_0x72C98FCC21DF47AA(iVar6, "team3");
		iVar112 = unk_0x72C98FCC21DF47AA(iVar6, "spawn3");
		iVar113 = unk_0x72C98FCC21DF47AA(iVar6, "acts3");
		iVar114 = unk_0x72C98FCC21DF47AA(iVar6, "objt4");
		iVar115 = unk_0x72C98FCC21DF47AA(iVar6, "team4");
		iVar116 = unk_0x72C98FCC21DF47AA(iVar6, "spawn4");
		iVar117 = unk_0x72C98FCC21DF47AA(iVar6, "acts4");
		iVar118 = unk_0x72C98FCC21DF47AA(iVar6, "act");
		iVar119 = unk_0x72C98FCC21DF47AA(iVar6, "pper");
		iVar120 = unk_0x72C98FCC21DF47AA(iVar6, "infr");
		iVar121 = unk_0x72C98FCC21DF47AA(iVar6, "cca");
		iVar122 = unk_0x72C98FCC21DF47AA(iVar6, "ccid");
		iVar123 = unk_0x72C98FCC21DF47AA(iVar6, "gfr");
		iVar124 = unk_0x72C98FCC21DF47AA(iVar6, "msr");
		iVar125 = unk_0x72C98FCC21DF47AA(iVar6, "bnr");
		iVar126 = unk_0x72C98FCC21DF47AA(iVar6, "phor");
		iVar127 = unk_0x72C98FCC21DF47AA(iVar6, "folr");
		iVar129 = unk_0x72C98FCC21DF47AA(iVar6, "pcvl");
		iVar130 = unk_0x72C98FCC21DF47AA(iVar6, "pcvr");
		iVar128 = unk_0x72C98FCC21DF47AA(iVar6, "pdfw");
		iVar134 = unk_0x72C98FCC21DF47AA(iVar6, "pvdp1");
		iVar135 = unk_0x72C98FCC21DF47AA(iVar6, "pvdp2");
		iVar131 = unk_0x72C98FCC21DF47AA(iVar6, "paaw");
		iVar132 = unk_0x72C98FCC21DF47AA(iVar6, "paav1");
		iVar133 = unk_0x72C98FCC21DF47AA(iVar6, "paav2");
		iVar136 = unk_0x72C98FCC21DF47AA(iVar6, "dt");
		iVar137 = unk_0x72C98FCC21DF47AA(iVar6, "do");
		iVar154 = unk_0x72C98FCC21DF47AA(iVar6, "dltd");
		iVar138 = unk_0x72C98FCC21DF47AA(iVar6, "dtim");
		iVar139 = unk_0x72C98FCC21DF47AA(iVar6, "dln");
		iVar140 = unk_0x72C98FCC21DF47AA(iVar6, "pvsp");
		iVar155 = unk_0x72C98FCC21DF47AA(iVar6, "drge");
		iVar156 = unk_0x72C98FCC21DF47AA(iVar6, "agrot");
		iVar157 = unk_0x72C98FCC21DF47AA(iVar6, "gtds");
		iVar158 = unk_0x72C98FCC21DF47AA(iVar6, "pstat");
		iVar159 = unk_0x72C98FCC21DF47AA(iVar6, "pstar");
		iVar160 = unk_0x72C98FCC21DF47AA(iVar6, "dmv");
		iVar161 = unk_0x72C98FCC21DF47AA(iVar6, "blkr");
		iVar162 = unk_0x72C98FCC21DF47AA(iVar6, "let");
		iVar163 = unk_0x72C98FCC21DF47AA(iVar6, "escr");
		iVar164 = unk_0x72C98FCC21DF47AA(iVar6, "actr");
		iVar165 = unk_0x72C98FCC21DF47AA(iVar6, "actv");
		iVar166 = unk_0x72C98FCC21DF47AA(iVar6, "actv2");
		iVar167 = unk_0x72C98FCC21DF47AA(iVar6, "actv3");
		iVar168 = unk_0x72C98FCC21DF47AA(iVar6, "actv4");
		iVar169 = unk_0x72C98FCC21DF47AA(iVar6, "actv5");
		iVar218 = unk_0x72C98FCC21DF47AA(iVar6, "pedct");
		iVar220 = unk_0x72C98FCC21DF47AA(iVar6, "pdcra");
		iVar219 = unk_0x72C98FCC21DF47AA(iVar6, "pedcr");
		iVar221 = unk_0x72C98FCC21DF47AA(iVar6, "pedcv");
		iVar222 = unk_0x72C98FCC21DF47AA(iVar6, "pedbc");
		iVar223 = unk_0x72C98FCC21DF47AA(iVar6, "pdbps");
		iVar224 = unk_0x72C98FCC21DF47AA(iVar6, "pdbso");
		iVar225 = unk_0x72C98FCC21DF47AA(iVar6, "avrad");
		iVar226 = unk_0x72C98FCC21DF47AA(iVar6, "pedst");
		iVar227 = unk_0x72C98FCC21DF47AA(iVar6, "gotor");
		iVar228 = unk_0x72C98FCC21DF47AA(iVar6, "invbs");
		iVar229 = unk_0x72C98FCC21DF47AA(iVar6, "gort");
		iVar230 = unk_0x72C98FCC21DF47AA(iVar6, "gorr");
		iVar231 = unk_0x72C98FCC21DF47AA(iVar6, "gorw");
		iVar232 = unk_0x72C98FCC21DF47AA(iVar6, "cstnm");
		iVar233 = unk_0x72C98FCC21DF47AA(iVar6, "pspdl");
		iVar234 = unk_0x72C98FCC21DF47AA(iVar6, "psgr");
		iVar235 = unk_0x72C98FCC21DF47AA(iVar6, "pssgr");
		iVar236 = unk_0x72C98FCC21DF47AA(iVar6, "psctt");
		iVar237 = unk_0x72C98FCC21DF47AA(iVar6, "pscto");
		iVar238 = unk_0x72C98FCC21DF47AA(iVar6, "pscta");
		iVar239 = unk_0x72C98FCC21DF47AA(iVar6, "psctac");
		iVar240 = unk_0x72C98FCC21DF47AA(iVar6, "psctv");
		iVar241 = unk_0x72C98FCC21DF47AA(iVar6, "pscth");
		iVar242 = unk_0x72C98FCC21DF47AA(iVar6, "psctot");
		iVar243 = unk_0x72C98FCC21DF47AA(iVar6, "psctoi");
		iVar244 = unk_0x72C98FCC21DF47AA(iVar6, "pscatd");
		iVar245 = unk_0x72C98FCC21DF47AA(iVar6, "cutsc");
		iVar246 = unk_0x72C98FCC21DF47AA(iVar6, "cutsh");
		iVar247 = unk_0x72C98FCC21DF47AA(iVar6, "cstsc");
		iVar248 = unk_0x72C98FCC21DF47AA(iVar6, "cstsh");
		iVar249 = unk_0x72C98FCC21DF47AA(iVar6, "nmpass");
		iVar250 = unk_0x72C98FCC21DF47AA(iVar6, "nmfail");
		iVar141 = unk_0x72C98FCC21DF47AA(iVar6, "pmcp");
		iVar142 = unk_0x72C98FCC21DF47AA(iVar6, "pmcf");
		iVar143 = unk_0x72C98FCC21DF47AA(iVar6, "pambv");
		iVar144 = unk_0x72C98FCC21DF47AA(iVar6, "pwrpt");
		iVar145 = unk_0x72C98FCC21DF47AA(iVar6, "pcash");
		iVar146 = unk_0x72C98FCC21DF47AA(iVar6, "ptrdi");
		iVar147 = unk_0x72C98FCC21DF47AA(iVar6, "pspov");
		iVar148 = unk_0x72C98FCC21DF47AA(iVar6, "pslp");
		iVar149 = unk_0x72C98FCC21DF47AA(iVar6, "psor");
		iVar150 = unk_0x72C98FCC21DF47AA(iVar6, "psort");
		iVar151 = unk_0x72C98FCC21DF47AA(iVar6, "pspovr");
		iVar153 = unk_0x72C98FCC21DF47AA(iVar6, "pspln");
		iVar152 = unk_0x72C98FCC21DF47AA(iVar6, "pcara");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar251[iVar1] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar254[iVar1] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_61974 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1633501.f_61979[iVar0 /*299*/] = { unk_0xFFFE2DE388037E54(iVar7, iVar0) };
			Global_1633501.f_61979[iVar0 /*299*/].f_3 = unk_0x5EFB23FE1415D634(iVar8, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_4 = unk_0x5EFB23FE1415D634(iVar9, iVar0);
			if (Global_1633501.f_61979[iVar0 /*299*/].f_4 < 0.75f)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_4 = 0.75f;
			}
			iVar2 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_15 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_15 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_15 = iVar2;
			}
			if (!func_122() && !func_174())
			{
				if (!unk_0x152BAD1BB44F2768(Global_1633501.f_61979[iVar0 /*299*/].f_15))
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_15 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_16 = iVar2;
			iVar2 = unk_0xB6790B02AB53A81E(iVar12, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_17 = iVar2;
			if (Global_1633501 == 1)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_18[0] = unk_0xB6790B02AB53A81E(uVar14[0], iVar0);
			}
			Global_1633501.f_61979[iVar0 /*299*/].f_51 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_37 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_38 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
			if (unk_0x4C58F55F20941087(iVar21, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_39 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_39 = -1;
			}
			Global_1633501.f_61979[iVar0 /*299*/].f_57 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_33 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_40 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_41 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_42 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_43 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_44 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_45 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_46 = unk_0x5EFB23FE1415D634(iVar30, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_47 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_50 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_48 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_5 = unk_0x5EFB23FE1415D634(iVar34, iVar0);
			if ((unk_0x4C58F55F20941087(iVar35, iVar0) == 3 && unk_0x4C58F55F20941087(iVar36, iVar0) == 2) && unk_0x4C58F55F20941087(iVar37, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_6 = unk_0x5EFB23FE1415D634(iVar35, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_7 = unk_0xB6790B02AB53A81E(iVar36, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_8 = unk_0xB6790B02AB53A81E(iVar37, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_6 = 0f;
				Global_1633501.f_61979[iVar0 /*299*/].f_7 = 0;
				Global_1633501.f_61979[iVar0 /*299*/].f_8 = -1;
			}
			if (unk_0x4C58F55F20941087(iVar38, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_14 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_14 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar39, iVar0) == 5 && unk_0x4C58F55F20941087(iVar40, iVar0) == 3)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_9 = { unk_0xFFFE2DE388037E54(iVar39, iVar0) };
				Global_1633501.f_61979[iVar0 /*299*/].f_12 = unk_0x5EFB23FE1415D634(iVar40, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_9 = { 0f, 0f, 0f };
				Global_1633501.f_61979[iVar0 /*299*/].f_12 = 0f;
			}
			Global_1633501.f_61979[iVar0 /*299*/].f_35 = unk_0xB6790B02AB53A81E(iVar41, iVar0);
			if (unk_0x4C58F55F20941087(iVar42, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_36 = unk_0xB6790B02AB53A81E(iVar42, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_36 = -1;
			}
			Global_1633501.f_61979[iVar0 /*299*/].f_49 = unk_0xB6790B02AB53A81E(iVar43, iVar0);
			Global_1633501.f_61979[iVar0 /*299*/].f_189 = unk_0xB6790B02AB53A81E(iVar44, iVar0);
			if (unk_0x4C58F55F20941087(iVar45, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_190 = unk_0xB6790B02AB53A81E(iVar45, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_190 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar46, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_191 = unk_0xB6790B02AB53A81E(iVar46, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_191 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar47, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_192 = unk_0xB6790B02AB53A81E(iVar47, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_192 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar48, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_193 = unk_0xB6790B02AB53A81E(iVar48, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_193 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar49, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_194 = unk_0xB6790B02AB53A81E(iVar49, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_194 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar50, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_195 = unk_0xB6790B02AB53A81E(iVar50, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_195 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar51, iVar0) == 2)
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_196 = unk_0xB6790B02AB53A81E(iVar51, iVar0);
			}
			else
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_196 = 0;
			}
			if (func_125())
			{
				Global_1633501.f_61979[iVar0 /*299*/].f_58 = unk_0xB6790B02AB53A81E(iVar102, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_59 = unk_0xB6790B02AB53A81E(iVar103, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_60 = unk_0xB6790B02AB53A81E(iVar104, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_64 = unk_0xB6790B02AB53A81E(iVar105, iVar0);
				if (unk_0x4C58F55F20941087(iVar106, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_162 = unk_0xB6790B02AB53A81E(iVar106, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_159 = unk_0xB6790B02AB53A81E(iVar107, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_165 = unk_0xB6790B02AB53A81E(iVar108, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_168 = unk_0xB6790B02AB53A81E(iVar109, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_163 = unk_0xB6790B02AB53A81E(iVar110, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_160 = unk_0xB6790B02AB53A81E(iVar111, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_166 = unk_0xB6790B02AB53A81E(iVar112, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_169 = unk_0xB6790B02AB53A81E(iVar113, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_164 = unk_0xB6790B02AB53A81E(iVar114, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_161 = unk_0xB6790B02AB53A81E(iVar115, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_167 = unk_0xB6790B02AB53A81E(iVar116, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_170 = unk_0xB6790B02AB53A81E(iVar117, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_162 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_159 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_165 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_168 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_163 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_160 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_166 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_169 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_164 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_161 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_167 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_170 = 0;
				}
				Global_1633501.f_61979[iVar0 /*299*/].f_63 = unk_0xB6790B02AB53A81E(iVar118, iVar0);
				if (unk_0x4C58F55F20941087(iVar119, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_202 = unk_0xB6790B02AB53A81E(iVar119, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_202 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar120, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_203 = unk_0xB6790B02AB53A81E(iVar120, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_203 = 250;
				}
				if (unk_0x4C58F55F20941087(iVar121, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_206 = unk_0xB6790B02AB53A81E(iVar121, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_206 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar122, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_207 = unk_0xB6790B02AB53A81E(iVar122, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_207 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar123, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_208 = unk_0xB6790B02AB53A81E(iVar123, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_208 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar124, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_204 = unk_0xB6790B02AB53A81E(iVar124, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_204 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar125, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_205 = unk_0xB6790B02AB53A81E(iVar125, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_205 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar126, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_270 = unk_0xB6790B02AB53A81E(iVar126, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_270 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar127, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_271 = unk_0xB6790B02AB53A81E(iVar127, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_271 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar129, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_209 = { unk_0xFFFE2DE388037E54(iVar129, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_209 = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar130, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_212 = { unk_0xFFFE2DE388037E54(iVar130, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_212 = { 0f, 0f, 0f };
				}
				if ((unk_0x4C58F55F20941087(iVar134, iVar0) == 5 && unk_0x4C58F55F20941087(iVar135, iVar0) == 5) && unk_0x4C58F55F20941087(iVar128, iVar0) == 3)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_220 = { unk_0xFFFE2DE388037E54(iVar134, iVar0) };
					Global_1633501.f_61979[iVar0 /*299*/].f_223 = { unk_0xFFFE2DE388037E54(iVar135, iVar0) };
					Global_1633501.f_61979[iVar0 /*299*/].f_226 = unk_0x5EFB23FE1415D634(iVar128, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_220 = { 0f, 0f, 0f };
					Global_1633501.f_61979[iVar0 /*299*/].f_223 = { 0f, 0f, 0f };
					Global_1633501.f_61979[iVar0 /*299*/].f_226 = 1f;
				}
				if ((unk_0x4C58F55F20941087(iVar131, iVar0) == 3 && unk_0x4C58F55F20941087(iVar132, iVar0) == 5) && unk_0x4C58F55F20941087(iVar133, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_184 = unk_0x5EFB23FE1415D634(iVar131, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_178 = { unk_0xFFFE2DE388037E54(iVar132, iVar0) };
					Global_1633501.f_61979[iVar0 /*299*/].f_181 = { unk_0xFFFE2DE388037E54(iVar133, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_184 = 0f;
					Global_1633501.f_61979[iVar0 /*299*/].f_178 = { 0f, 0f, 0f };
					Global_1633501.f_61979[iVar0 /*299*/].f_181 = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar140, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_238 = unk_0xB6790B02AB53A81E(iVar140, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_238 = 0;
				}
				Global_1633501.f_61979[iVar0 /*299*/].f_216 = unk_0xB6790B02AB53A81E(iVar136, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_215 = unk_0xB6790B02AB53A81E(iVar137, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_217 = unk_0xB6790B02AB53A81E(iVar138, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_218 = unk_0xB6790B02AB53A81E(iVar139, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_219 = unk_0xB6790B02AB53A81E(iVar155, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_298 = unk_0xB6790B02AB53A81E(iVar154, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_227 = unk_0xB6790B02AB53A81E(iVar156, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_185 = unk_0xB6790B02AB53A81E(iVar157, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_34 = unk_0xB6790B02AB53A81E(iVar160, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_13 = unk_0x5EFB23FE1415D634(iVar161, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_176 = unk_0xB6790B02AB53A81E(iVar162, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_186 = unk_0xB6790B02AB53A81E(iVar163, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_177 = unk_0xB6790B02AB53A81E(iVar164, iVar0);
				Global_1633501.f_61979[iVar0 /*299*/].f_65 = { unk_0xFFFE2DE388037E54(iVar165, iVar0) };
				Global_1633501.f_61979[iVar0 /*299*/].f_65 = { unk_0xFFFE2DE388037E54(iVar165, iVar0) };
				if (unk_0x4C58F55F20941087(iVar166, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar166, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar167, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[1 /*3*/] = { unk_0xFFFE2DE388037E54(iVar167, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar168, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[2 /*3*/] = { unk_0xFFFE2DE388037E54(iVar168, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar169, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[3 /*3*/] = { unk_0xFFFE2DE388037E54(iVar169, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_68[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar158, iVar0) == 2 && unk_0x4C58F55F20941087(iVar159, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_187 = unk_0xB6790B02AB53A81E(iVar158, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_188 = unk_0xB6790B02AB53A81E(iVar159, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_187 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_188 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x4C58F55F20941087(uVar170[iVar3], iVar0) == 2)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_82[iVar3] = unk_0xB6790B02AB53A81E(uVar170[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_82[iVar3] = 0;
					}
					if (unk_0x4C58F55F20941087(uVar176[iVar3], iVar0) == 2)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_88[iVar3] = unk_0xB6790B02AB53A81E(uVar176[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_88[iVar3] = 0;
					}
					if (unk_0x4C58F55F20941087(uVar182[iVar3], iVar0) == 5 && unk_0x4C58F55F20941087(uVar188[iVar3], iVar0) == 2)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_94[iVar3 /*3*/] = { unk_0xFFFE2DE388037E54(uVar182[iVar3], iVar0) };
						Global_1633501.f_61979[iVar0 /*299*/].f_110[iVar3] = unk_0xB6790B02AB53A81E(uVar188[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_94[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1633501.f_61979[iVar0 /*299*/].f_110[iVar3] = 3;
					}
					if (unk_0x4C58F55F20941087(uVar194[iVar3], iVar0) == 2)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_128[iVar3] = unk_0xB6790B02AB53A81E(uVar194[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_128[iVar3] = -1;
					}
					if (unk_0x4C58F55F20941087(uVar200[iVar3], iVar0) == 3)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_116[iVar3] = unk_0x5EFB23FE1415D634(uVar200[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_116[iVar3] = 0f;
					}
					if (unk_0x4C58F55F20941087(uVar206[iVar3], iVar0) == 3)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_122[iVar3] = unk_0x5EFB23FE1415D634(uVar206[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_122[iVar3] = 0f;
					}
					if (unk_0x4C58F55F20941087(uVar212[iVar3], iVar0) == 3)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_134[iVar3] = unk_0x5EFB23FE1415D634(uVar212[iVar3], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_134[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x4C58F55F20941087(iVar219, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_228 = unk_0xB6790B02AB53A81E(iVar219, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_228 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar218, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_229 = unk_0xB6790B02AB53A81E(iVar218, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_229 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar221, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_231 = unk_0xB6790B02AB53A81E(iVar221, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_231 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar220, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_230 = unk_0xB6790B02AB53A81E(iVar220, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_230 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar226, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_237 = unk_0xB6790B02AB53A81E(iVar226, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_237 = -3;
				}
				if (unk_0x4C58F55F20941087(iVar222, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_253 = unk_0xB6790B02AB53A81E(iVar222, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_253 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar223, iVar0) == 3)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_264 = unk_0x5EFB23FE1415D634(iVar223, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_264 = 1f;
				}
				if (unk_0x4C58F55F20941087(iVar224, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_265 = unk_0xB6790B02AB53A81E(iVar224, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_265 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar225, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_81 = unk_0xB6790B02AB53A81E(iVar225, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_81 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar227, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_52 = unk_0xB6790B02AB53A81E(iVar227, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_52 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar228, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_53 = unk_0xB6790B02AB53A81E(iVar228, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_53 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar232, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_157 = unk_0xB6790B02AB53A81E(iVar232, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_157 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar233, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_158 = unk_0xB6790B02AB53A81E(iVar233, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_158 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar234, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_61 = unk_0xB6790B02AB53A81E(iVar234, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_61 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar235, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_62 = unk_0xB6790B02AB53A81E(iVar235, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_62 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar141, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_251 = unk_0xB6790B02AB53A81E(iVar141, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_251 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar142, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_252 = unk_0xB6790B02AB53A81E(iVar142, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_252 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar143, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_272 = unk_0xB6790B02AB53A81E(iVar143, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_272 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar144, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_278 = unk_0xB6790B02AB53A81E(iVar144, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_278 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar145, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_279 = unk_0xB6790B02AB53A81E(iVar145, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_279 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar146, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_280 = unk_0xB6790B02AB53A81E(iVar146, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_280 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar147, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_284 = unk_0xB6790B02AB53A81E(iVar147, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_284 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar148, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_281 = unk_0xB6790B02AB53A81E(iVar148, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_281 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar149, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_282 = unk_0xB6790B02AB53A81E(iVar149, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_282 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar150, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_283 = unk_0xB6790B02AB53A81E(iVar150, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_283 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar151, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_285 = unk_0xB6790B02AB53A81E(iVar151, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_285 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar152, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_296 = unk_0xB6790B02AB53A81E(iVar152, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_296 = 10;
				}
				if (unk_0x4C58F55F20941087(iVar153, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_297 = unk_0xB6790B02AB53A81E(iVar153, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_297 = 0;
				}
				if ((unk_0x4C58F55F20941087(iVar236, iVar0) == 2 && unk_0x4C58F55F20941087(iVar237, iVar0) == 2) && unk_0x4C58F55F20941087(iVar238, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_146 = unk_0xB6790B02AB53A81E(iVar236, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_147 = unk_0xB6790B02AB53A81E(iVar237, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_149 = unk_0xB6790B02AB53A81E(iVar238, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_146 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_147 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_149 = 0;
				}
				if ((unk_0x4C58F55F20941087(iVar242, iVar0) == 2 && unk_0x4C58F55F20941087(iVar243, iVar0) == 2) && unk_0x4C58F55F20941087(iVar244, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_154 = unk_0xB6790B02AB53A81E(iVar242, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_155 = unk_0xB6790B02AB53A81E(iVar243, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_156 = unk_0xB6790B02AB53A81E(iVar244, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_154 = 0;
					Global_1633501.f_61979[iVar0 /*299*/].f_155 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_156 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar239, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_148 = unk_0xB6790B02AB53A81E(iVar239, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_148 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar240, iVar0) == 5)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_150 = { unk_0xFFFE2DE388037E54(iVar240, iVar0) };
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_150 = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar241, iVar0) == 3)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_153 = unk_0x5EFB23FE1415D634(iVar241, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_153 = 0f;
				}
				if ((unk_0x4C58F55F20941087(iVar229, iVar0) == 2 && unk_0x4C58F55F20941087(iVar230, iVar0) == 2) && unk_0x4C58F55F20941087(iVar231, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_54 = unk_0xB6790B02AB53A81E(iVar229, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_55 = unk_0xB6790B02AB53A81E(iVar230, iVar0);
					Global_1633501.f_61979[iVar0 /*299*/].f_56 = unk_0xB6790B02AB53A81E(iVar231, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_54 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_55 = -1;
					Global_1633501.f_61979[iVar0 /*299*/].f_56 = joaat("weapon_pistol");
				}
				if (Global_1633501.f_2 != 6 && unk_0x4C58F55F20941087(iVar245, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_266 = unk_0xB6790B02AB53A81E(iVar245, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_266 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar249, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_249 = unk_0xB6790B02AB53A81E(iVar249, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_249 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar250, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_250 = unk_0xB6790B02AB53A81E(iVar250, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_250 = -1;
				}
				if (Global_1633501.f_2 != 6 && unk_0x4C58F55F20941087(iVar246, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_267 = unk_0xB6790B02AB53A81E(iVar246, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_267 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar247, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_268 = unk_0xB6790B02AB53A81E(iVar247, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_268 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar248, iVar0) == 2)
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_269 = unk_0xB6790B02AB53A81E(iVar248, iVar0);
				}
				else
				{
					Global_1633501.f_61979[iVar0 /*299*/].f_269 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x4C58F55F20941087(uVar251[iVar1], iVar0) == 5)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_286[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar251[iVar1], iVar0) };
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_286[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x4C58F55F20941087(uVar254[iVar1], iVar0) == 3)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_293[iVar1] = unk_0x5EFB23FE1415D634(uVar254[iVar1], iVar0);
					}
					else
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_293[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1633501.f_30 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1633501.f_61979[iVar0 /*299*/].f_18[iVar3] = unk_0xB6790B02AB53A81E(uVar14[iVar3], iVar0);
						Global_1633501.f_61979[iVar0 /*299*/].f_23[iVar3] = unk_0xB6790B02AB53A81E(uVar52[iVar3], iVar0);
						Global_1633501.f_61979[iVar0 /*299*/].f_28[iVar3] = unk_0xB6790B02AB53A81E(uVar57[iVar3], iVar0);
						if (Global_1633501.f_61979[iVar0 /*299*/].f_28[iVar3] == -1)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_28[iVar3] = 99999;
						}
						if (unk_0x4C58F55F20941087(uVar62[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_197[iVar3] = unk_0xB6790B02AB53A81E(uVar62[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_197[iVar3] = -1;
						}
						if (unk_0x4C58F55F20941087(uVar67[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_171[iVar3] = unk_0xB6790B02AB53A81E(uVar67[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_171[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar72[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_239[iVar3] = unk_0xB6790B02AB53A81E(uVar72[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_239[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar77[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_244[iVar3] = unk_0xB6790B02AB53A81E(uVar77[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_244[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar82[iVar3], iVar0) == 2 && unk_0x4C58F55F20941087(uVar87[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_254[iVar3] = unk_0xB6790B02AB53A81E(uVar82[iVar3], iVar0);
							Global_1633501.f_61979[iVar0 /*299*/].f_259[iVar3] = unk_0xB6790B02AB53A81E(uVar87[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_254[iVar3] = -1;
							Global_1633501.f_61979[iVar0 /*299*/].f_259[iVar3] = -1;
						}
						if (unk_0x4C58F55F20941087(uVar92[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_273[iVar3] = unk_0xB6790B02AB53A81E(uVar92[iVar3], iVar0);
						}
						else if (unk_0x48B8265059381CD0(Global_1633501.f_35438[iVar3 /*3*/][func_173(iVar0)], func_172(iVar0)))
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_273[iVar3] = -1;
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_273[iVar3] = -2;
						}
						if (unk_0x4C58F55F20941087(uVar97[iVar3], iVar0) == 2)
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_232[iVar3] = unk_0xB6790B02AB53A81E(uVar97[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_61979[iVar0 /*299*/].f_232[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_171(&iVar6);
}

void func_171(int iParam0)
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
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	
	Global_1633501.f_80201[0] = unk_0x37AC9FA286925FB3(*iParam0, "no0");
	iVar1 = unk_0x72C98FCC21DF47AA(*iParam0, "loc0");
	iVar2 = unk_0x72C98FCC21DF47AA(*iParam0, "head0");
	iVar3 = unk_0x72C98FCC21DF47AA(*iParam0, "bit0");
	iVar4 = unk_0x72C98FCC21DF47AA(*iParam0, "veh0");
	iVar5 = unk_0x72C98FCC21DF47AA(*iParam0, "tars0");
	iVar6 = unk_0x72C98FCC21DF47AA(*iParam0, "ty0");
	iVar7 = unk_0x72C98FCC21DF47AA(*iParam0, "as0");
	iVar8 = unk_0x72C98FCC21DF47AA(*iParam0, "qu0");
	iVar9 = unk_0x72C98FCC21DF47AA(*iParam0, "gg0");
	iVar10 = unk_0x72C98FCC21DF47AA(*iParam0, "ar0");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_80201[0] - 1))
	{
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/] = { unk_0xFFFE2DE388037E54(iVar1, iVar0) };
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_3 = unk_0x5EFB23FE1415D634(iVar2, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_5 = unk_0xB6790B02AB53A81E(iVar3, iVar0);
		if (unk_0x4C58F55F20941087(iVar4, iVar0) == 2)
		{
			Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_7 = unk_0xB6790B02AB53A81E(iVar4, iVar0);
		}
		else
		{
			Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_9 = unk_0xB6790B02AB53A81E(iVar5, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_10 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_11 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_12 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_13 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		Global_1633501.f_81108[0 /*901*/][iVar0 /*15*/].f_14 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
		iVar0++;
	}
	Global_1633501.f_80201[1] = unk_0x37AC9FA286925FB3(*iParam0, "no1");
	iVar11 = unk_0x72C98FCC21DF47AA(*iParam0, "loc1");
	iVar12 = unk_0x72C98FCC21DF47AA(*iParam0, "head1");
	iVar13 = unk_0x72C98FCC21DF47AA(*iParam0, "bit1");
	iVar14 = unk_0x72C98FCC21DF47AA(*iParam0, "veh1");
	iVar15 = unk_0x72C98FCC21DF47AA(*iParam0, "tars1");
	iVar16 = unk_0x72C98FCC21DF47AA(*iParam0, "ty1");
	iVar17 = unk_0x72C98FCC21DF47AA(*iParam0, "as1");
	iVar18 = unk_0x72C98FCC21DF47AA(*iParam0, "qu1");
	iVar19 = unk_0x72C98FCC21DF47AA(*iParam0, "gg1");
	iVar20 = unk_0x72C98FCC21DF47AA(*iParam0, "ar1");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_80201[1] - 1))
	{
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/] = { unk_0xFFFE2DE388037E54(iVar11, iVar0) };
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_3 = unk_0x5EFB23FE1415D634(iVar12, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_5 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
		if (unk_0x4C58F55F20941087(iVar14, iVar0) == 2)
		{
			Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_7 = unk_0xB6790B02AB53A81E(iVar14, iVar0);
		}
		else
		{
			Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_9 = unk_0xB6790B02AB53A81E(iVar15, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_10 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_11 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_12 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_13 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
		Global_1633501.f_81108[1 /*901*/][iVar0 /*15*/].f_14 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
		iVar0++;
	}
	Global_1633501.f_80201[2] = unk_0x37AC9FA286925FB3(*iParam0, "no2");
	iVar21 = unk_0x72C98FCC21DF47AA(*iParam0, "loc2");
	iVar22 = unk_0x72C98FCC21DF47AA(*iParam0, "head2");
	iVar23 = unk_0x72C98FCC21DF47AA(*iParam0, "bit2");
	iVar24 = unk_0x72C98FCC21DF47AA(*iParam0, "veh2");
	iVar25 = unk_0x72C98FCC21DF47AA(*iParam0, "tars2");
	iVar26 = unk_0x72C98FCC21DF47AA(*iParam0, "ty2");
	iVar27 = unk_0x72C98FCC21DF47AA(*iParam0, "as2");
	iVar28 = unk_0x72C98FCC21DF47AA(*iParam0, "qu2");
	iVar29 = unk_0x72C98FCC21DF47AA(*iParam0, "gg2");
	iVar30 = unk_0x72C98FCC21DF47AA(*iParam0, "ar2");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_80201[2] - 1))
	{
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/] = { unk_0xFFFE2DE388037E54(iVar21, iVar0) };
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_3 = unk_0x5EFB23FE1415D634(iVar22, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_5 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
		if (unk_0x4C58F55F20941087(iVar24, iVar0) == 2)
		{
			Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_7 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
		}
		else
		{
			Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_9 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_10 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_11 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_12 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_13 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
		Global_1633501.f_81108[2 /*901*/][iVar0 /*15*/].f_14 = unk_0xB6790B02AB53A81E(iVar30, iVar0);
		iVar0++;
	}
	Global_1633501.f_80201[3] = unk_0x37AC9FA286925FB3(*iParam0, "no3");
	iVar31 = unk_0x72C98FCC21DF47AA(*iParam0, "loc3");
	iVar32 = unk_0x72C98FCC21DF47AA(*iParam0, "head3");
	iVar33 = unk_0x72C98FCC21DF47AA(*iParam0, "bit3");
	iVar34 = unk_0x72C98FCC21DF47AA(*iParam0, "veh3");
	iVar35 = unk_0x72C98FCC21DF47AA(*iParam0, "tars3");
	iVar36 = unk_0x72C98FCC21DF47AA(*iParam0, "ty3");
	iVar37 = unk_0x72C98FCC21DF47AA(*iParam0, "as3");
	iVar38 = unk_0x72C98FCC21DF47AA(*iParam0, "qu3");
	iVar39 = unk_0x72C98FCC21DF47AA(*iParam0, "gg3");
	iVar40 = unk_0x72C98FCC21DF47AA(*iParam0, "ar3");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_80201[3] - 1))
	{
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/] = { unk_0xFFFE2DE388037E54(iVar31, iVar0) };
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_3 = unk_0x5EFB23FE1415D634(iVar32, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_5 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
		if (unk_0x4C58F55F20941087(iVar34, iVar0) == 2)
		{
			Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_7 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
		}
		else
		{
			Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_9 = unk_0xB6790B02AB53A81E(iVar35, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_10 = unk_0xB6790B02AB53A81E(iVar36, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_11 = unk_0xB6790B02AB53A81E(iVar37, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_12 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_13 = unk_0xB6790B02AB53A81E(iVar39, iVar0);
		Global_1633501.f_81108[3 /*901*/][iVar0 /*15*/].f_14 = unk_0xB6790B02AB53A81E(iVar40, iVar0);
		iVar0++;
	}
}

int func_172(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_173(iParam0) * 31);
}

int func_173(int iParam0)
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

int func_174()
{
	if (Global_1633501 == 6)
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x489F243BF1619568(iParam0, "ene");
	Global_1633501.f_80200 = unk_0x37AC9FA286925FB3(iVar1, "no");
	Global_1633501.f_42573 = unk_0x37AC9FA286925FB3(iVar1, "veh");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "loc");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "head");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar1, "team");
	if (Global_1633501.f_80200 > 60)
	{
		Global_1633501.f_80200 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_80200 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1633501.f_80207[iVar0 /*15*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
			Global_1633501.f_80207[iVar0 /*15*/].f_3 = unk_0x5EFB23FE1415D634(iVar3, iVar0);
			Global_1633501.f_80207[iVar0 /*15*/].f_4 = unk_0xB6790B02AB53A81E(iVar4, iVar0);
		}
		iVar0++;
	}
	func_171(&iVar1);
}

void func_176(int iParam0)
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
	
	iVar2 = unk_0x489F243BF1619568(iParam0, "dprop");
	Global_1633501.f_54146 = func_179(unk_0x37AC9FA286925FB3(iVar2, "no"), 0, 150);
	iVar3 = unk_0x72C98FCC21DF47AA(iVar2, "loc");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar2, "vRot");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar2, "head");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar2, "model");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar2, "asst");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar2, "asso");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar2, "asss");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar2, "pasc");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar2, "asst2");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar2, "asso2");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar2, "asss2");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar2, "pasc2");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar2, "asst3");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar2, "asso3");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar2, "asss3");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar2, "pasc3");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar2, "asst4");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar2, "asso4");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar2, "asss4");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar2, "pasc4");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar2, "prpct");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar2, "prpcr");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar2, "prcra");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar2, "prpbs");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar2, "prpkt");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar2, "dprorc");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar2, "prpdclr");
	if (Global_1633501.f_54146 > 20)
	{
		Global_1633501.f_54146 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_54146 - 1))
	{
		Global_1633501.f_54148[iVar0 /*32*/] = { unk_0xFFFE2DE388037E54(iVar3, iVar0) };
		Global_1633501.f_54148[iVar0 /*32*/].f_3 = { unk_0xFFFE2DE388037E54(iVar4, iVar0) };
		Global_1633501.f_54148[iVar0 /*32*/].f_6 = unk_0x5EFB23FE1415D634(iVar5, iVar0);
		Global_1633501.f_54148[iVar0 /*32*/].f_8 = -1;
		iVar1 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		Global_1633501.f_54148[iVar0 /*32*/].f_7 = func_178(iVar1);
		if (!unk_0x152BAD1BB44F2768(Global_1633501.f_54148[iVar0 /*32*/].f_7))
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1633501.f_54148[iVar0 /*32*/].f_12 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		Global_1633501.f_54148[iVar0 /*32*/].f_11 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		Global_1633501.f_54148[iVar0 /*32*/].f_13 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		if (Global_1633501.f_54148[iVar0 /*32*/].f_13 == -1)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_13 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar11, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_19 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_22 = unk_0xB6790B02AB53A81E(iVar12, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_25 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_20 = unk_0xB6790B02AB53A81E(iVar15, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_23 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_26 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_21 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_24 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_27 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_22 = -1;
			Global_1633501.f_54148[iVar0 /*32*/].f_19 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_25 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_23 = -1;
			Global_1633501.f_54148[iVar0 /*32*/].f_20 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_26 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_24 = -1;
			Global_1633501.f_54148[iVar0 /*32*/].f_21 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_27 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar10, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_14 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_28 = unk_0xB6790B02AB53A81E(iVar14, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_29 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
			Global_1633501.f_54148[iVar0 /*32*/].f_30 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_14 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_28 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_29 = 0;
			Global_1633501.f_54148[iVar0 /*32*/].f_30 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar24, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_15 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_15 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar23, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_16 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_16 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar25, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_17 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_17 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar26, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_18 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_18 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar28, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_31 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_31 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar27, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_9 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_9 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar29, iVar0) == 2)
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_10 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
		}
		else
		{
			Global_1633501.f_54148[iVar0 /*32*/].f_10 = 1;
		}
		iVar0++;
	}
	iVar30 = iVar0;
	if (func_177() || Global_1633501 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1633501.f_42635 - 1))
		{
			Global_1633501.f_54148[iVar30 /*32*/] = { Global_1633501.f_42638[iVar0 /*93*/] };
			Global_1633501.f_54148[iVar30 /*32*/].f_3 = { Global_1633501.f_42638[iVar0 /*93*/].f_4 };
			Global_1633501.f_54148[iVar30 /*32*/].f_6 = Global_1633501.f_42638[iVar0 /*93*/].f_3;
			Global_1633501.f_54148[iVar30 /*32*/].f_8 = iVar0;
			Global_1633501.f_54148[iVar30 /*32*/].f_7 = joaat("prop_container_ld_pu");
			iVar31 = 0;
			while (iVar31 <= 3)
			{
				Global_1633501.f_42638[iVar30 /*93*/].f_17[iVar31] = 0;
				Global_1633501.f_42638[iVar30 /*93*/].f_22[iVar31] = 99999;
				iVar31++;
			}
			Global_1633501.f_54147++;
			Global_1633501.f_54146++;
			iVar30++;
			iVar0++;
		}
	}
}

int func_177()
{
	if (Global_1633501 == 0 && Global_1633501.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return joaat("lts_prop_lts_offroad_tyres01");
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
	if ((unk_0x7C2F31E78C33DE0F() || unk_0x8EA3D5407E9F4AF0()) || unk_0xEF4E5E47AF0D4480())
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
	else if (unk_0xB15049400DCD8DC9() || unk_0xF20D8448F6AFC86C())
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

int func_179(int iParam0, int iParam1, int iParam2)
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

void func_180(int iParam0)
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
	var uVar52[4];
	char[] cVar57[8];
	int iVar59;
	
	iVar3 = unk_0x489F243BF1619568(iParam0, "prop");
	Global_1633501.f_44917 = unk_0x37AC9FA286925FB3(iVar3, "no");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar3, "loc");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar3, "vRot");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar3, "head");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar3, "model");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar3, "asst");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar3, "asso");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar3, "asss");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar3, "pasc");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar3, "asst2");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar3, "asso2");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar3, "asss2");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar3, "pasc2");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar3, "asst3");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar3, "asso3");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar3, "asss3");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar3, "pasc3");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar3, "asst4");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar3, "asso4");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar3, "asss4");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar3, "pasc4");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar3, "bpbid");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar3, "bpbip");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar3, "bpbpt");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar3, "fcuat");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar3, "aldel");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar3, "alsnd");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar3, "flvfx");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar3, "prpcl");
	iVar32 = unk_0x72C98FCC21DF47AA(iVar3, "prplod");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar3, "prpatn");
	iVar34 = unk_0x72C98FCC21DF47AA(iVar3, "prpasn");
	iVar35 = unk_0x72C98FCC21DF47AA(iVar3, "prpclr");
	iVar36 = unk_0x72C98FCC21DF47AA(iVar3, "prptsp");
	iVar37 = unk_0x72C98FCC21DF47AA(iVar3, "prptds");
	iVar38 = unk_0x72C98FCC21DF47AA(iVar3, "prpsba");
	iVar39 = unk_0x72C98FCC21DF47AA(iVar3, "sndid");
	iVar40 = unk_0x72C98FCC21DF47AA(iVar3, "sndtri");
	iVar41 = unk_0x72C98FCC21DF47AA(iVar3, "sndlmt");
	iVar42 = unk_0x72C98FCC21DF47AA(iVar3, "prpsnpp");
	iVar43 = unk_0x72C98FCC21DF47AA(iVar3, "prpct");
	iVar44 = unk_0x72C98FCC21DF47AA(iVar3, "prpcr");
	iVar45 = unk_0x72C98FCC21DF47AA(iVar3, "prcra");
	iVar46 = unk_0x72C98FCC21DF47AA(iVar3, "prpbs");
	iVar47 = unk_0x72C98FCC21DF47AA(iVar3, "prers");
	iVar48 = unk_0x72C98FCC21DF47AA(iVar3, "ptfxtr");
	iVar49 = unk_0x72C98FCC21DF47AA(iVar3, "ptfxst");
	iVar50 = unk_0x72C98FCC21DF47AA(iVar3, "prrorc");
	iVar51 = unk_0x72C98FCC21DF47AA(iVar3, "pfrict");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar57, "prpsdp", 8);
		StringIntConCat(&cVar57, iVar2, 8);
		uVar52[iVar2] = unk_0x72C98FCC21DF47AA(iVar3, &cVar57);
		iVar2++;
	}
	iVar59 = unk_0x72C98FCC21DF47AA(iVar3, "pdip");
	if (Global_1633501.f_44917 > 150)
	{
		Global_1633501.f_44917 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_44917 - 1))
	{
		Global_1633501.f_44918[iVar0 /*61*/] = { unk_0xFFFE2DE388037E54(iVar4, iVar0) };
		Global_1633501.f_44918[iVar0 /*61*/].f_3 = { unk_0xFFFE2DE388037E54(iVar5, iVar0) };
		Global_1633501.f_44918[iVar0 /*61*/].f_6 = unk_0x5EFB23FE1415D634(iVar6, iVar0);
		iVar1 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_7 = func_178(iVar1);
		if (!unk_0x152BAD1BB44F2768(Global_1633501.f_44918[iVar0 /*61*/].f_7))
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_9 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_8 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_10 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
		if (Global_1633501.f_44918[iVar0 /*61*/].f_10 == -1)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_10 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar24, iVar0) == 1)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_49 = unk_0x743A454C4B4C0325(iVar24, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_49 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar25, iVar0) == 1)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_50 = unk_0x743A454C4B4C0325(iVar25, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_50 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar26, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_51 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_51 = 0;
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_52 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
		if (unk_0x4C58F55F20941087(iVar12, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_36 = unk_0xB6790B02AB53A81E(iVar12, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_39 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_42 = unk_0xB6790B02AB53A81E(iVar14, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_37 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_40 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_43 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_38 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_41 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_44 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_39 = -1;
			Global_1633501.f_44918[iVar0 /*61*/].f_36 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_42 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_40 = -1;
			Global_1633501.f_44918[iVar0 /*61*/].f_37 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_43 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_41 = -1;
			Global_1633501.f_44918[iVar0 /*61*/].f_38 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_44 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar11, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_11 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_45 = unk_0xB6790B02AB53A81E(iVar15, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_46 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
			Global_1633501.f_44918[iVar0 /*61*/].f_47 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_11 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_45 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_46 = 0;
			Global_1633501.f_44918[iVar0 /*61*/].f_47 = 0;
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_12 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
		if (Global_1633501.f_44918[iVar0 /*61*/].f_12 > 0 && Global_1633501.f_44918[iVar0 /*61*/].f_12 < 1000)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_12 = func_181(Global_1633501.f_44918[iVar0 /*61*/].f_12);
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_13 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_14 = unk_0xB6790B02AB53A81E(iVar30, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_15 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_31 = unk_0x5EFB23FE1415D634(iVar36, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_32 = unk_0x5EFB23FE1415D634(iVar37, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_33 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_53 = unk_0xB6790B02AB53A81E(iVar39, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_54 = unk_0xB6790B02AB53A81E(iVar40, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_55 = unk_0xB6790B02AB53A81E(iVar41, iVar0);
		if (unk_0x4C58F55F20941087(iVar32, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_21 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_21 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar33, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_22 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_22 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar34, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_23 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_23 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar35, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_24 = unk_0xB6790B02AB53A81E(iVar35, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_24 = 1;
		}
		if (unk_0x4C58F55F20941087(iVar36, iVar0) == 3)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_31 = unk_0x5EFB23FE1415D634(iVar36, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_31 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar37, iVar0) == 3)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_32 = unk_0x5EFB23FE1415D634(iVar37, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_32 = 0.4f;
		}
		if (unk_0xB6790B02AB53A81E(iVar38, iVar0) > 5)
		{
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 15)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 1;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 25)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 2;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 35)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 3;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 45)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 4;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 55)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 5;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 16)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 3;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 30)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 2;
			}
			if (unk_0xB6790B02AB53A81E(iVar38, iVar0) == 44)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_33 = 1;
			}
		}
		else if (unk_0x4C58F55F20941087(iVar38, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_33 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_33 = 2;
		}
		if (unk_0x4C58F55F20941087(iVar39, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_53 = unk_0xB6790B02AB53A81E(iVar39, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_53 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar40, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_54 = unk_0xB6790B02AB53A81E(iVar40, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_54 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar41, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_55 = unk_0xB6790B02AB53A81E(iVar41, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_55 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar51, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_60 = unk_0xB6790B02AB53A81E(iVar51, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_60 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar42, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_25 = unk_0xB6790B02AB53A81E(iVar42, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_25 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar48, iVar0) == 3)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_34 = unk_0x5EFB23FE1415D634(iVar48, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_34 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar44, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_16 = unk_0xB6790B02AB53A81E(iVar44, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_16 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar43, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_17 = unk_0xB6790B02AB53A81E(iVar43, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_17 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar45, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_18 = unk_0xB6790B02AB53A81E(iVar45, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_18 = -1;
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_19 = unk_0xB6790B02AB53A81E(iVar46, iVar0);
		Global_1633501.f_44918[iVar0 /*61*/].f_60 = unk_0xB6790B02AB53A81E(iVar51, iVar0);
		if (unk_0x4C58F55F20941087(iVar49, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_35 = unk_0xB6790B02AB53A81E(iVar49, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_35 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar50, iVar0) == 2)
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_59 = unk_0xB6790B02AB53A81E(iVar50, iVar0);
		}
		else
		{
			Global_1633501.f_44918[iVar0 /*61*/].f_59 = 0;
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_20 = unk_0xB6790B02AB53A81E(iVar47, iVar0);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x4C58F55F20941087(uVar52[iVar2], iVar0) == 2)
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_26[iVar2] = unk_0xB6790B02AB53A81E(uVar52[iVar2], iVar0);
			}
			else
			{
				Global_1633501.f_44918[iVar0 /*61*/].f_26[iVar2] = -1;
			}
			iVar2++;
		}
		Global_1633501.f_44918[iVar0 /*61*/].f_58 = unk_0xB6790B02AB53A81E(iVar59, iVar0);
		iVar0++;
	}
}

int func_181(int iParam0)
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

void func_182(int iParam0)
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
	int iVar68;
	int iVar69;
	int iVar70;
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	var uVar86[4];
	var uVar91[4];
	var uVar96[4];
	var uVar101[4];
	var uVar106[4];
	var uVar111[2];
	var uVar114[2];
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
	
	iVar6 = unk_0x489F243BF1619568(iParam0, "veh");
	Global_1633501.f_57267 = unk_0x37AC9FA286925FB3(iVar6, "no");
	Global_1633501.f_57268 = unk_0x37AC9FA286925FB3(iVar6, "time");
	Global_1633501.f_57269 = unk_0x37AC9FA286925FB3(iVar6, "pal");
	iVar7 = unk_0x489F243BF1619568(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1633501.f_30 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1633501.f_92[iVar3 /*8637*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1633501.f_61826[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1633501.f_34734[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_34820[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_34820[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_34906[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_34906[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_34992[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_34992[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_35078[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_35078[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_35164[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_35164[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_35250[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_35250[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x0481328AA6FEFDAB(iVar7, &cVar4) == 2)
				{
					Global_1633501.f_35336[iVar0 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar7, &cVar4);
				}
				else
				{
					Global_1633501.f_35336[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x72C98FCC21DF47AA(iVar6, "loc");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar6, "head");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar6, "model");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar6, "col");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar6, "rsp");
	if (func_125())
	{
		iVar10 = unk_0x72C98FCC21DF47AA(iVar6, "vrr");
		iVar11 = unk_0x72C98FCC21DF47AA(iVar6, "vrmr");
		iVar12 = unk_0x72C98FCC21DF47AA(iVar6, "vsnt");
		iVar13 = unk_0x72C98FCC21DF47AA(iVar6, "vsnei");
		iVar14 = unk_0x72C98FCC21DF47AA(iVar6, "v2sp");
		iVar15 = unk_0x72C98FCC21DF47AA(iVar6, "v2sh");
		iVar19 = unk_0x72C98FCC21DF47AA(iVar6, "objt");
		iVar20 = unk_0x72C98FCC21DF47AA(iVar6, "team");
		iVar21 = unk_0x72C98FCC21DF47AA(iVar6, "spwn");
		iVar22 = unk_0x72C98FCC21DF47AA(iVar6, "objt2");
		iVar23 = unk_0x72C98FCC21DF47AA(iVar6, "team2");
		iVar24 = unk_0x72C98FCC21DF47AA(iVar6, "spwn2");
		iVar25 = unk_0x72C98FCC21DF47AA(iVar6, "objt3");
		iVar26 = unk_0x72C98FCC21DF47AA(iVar6, "team3");
		iVar27 = unk_0x72C98FCC21DF47AA(iVar6, "spwn3");
		iVar28 = unk_0x72C98FCC21DF47AA(iVar6, "objt4");
		iVar29 = unk_0x72C98FCC21DF47AA(iVar6, "team4");
		iVar30 = unk_0x72C98FCC21DF47AA(iVar6, "spwn4");
		Global_1633501.f_44916 = unk_0x37AC9FA286925FB3(iVar6, "nocr");
		iVar31 = unk_0x72C98FCC21DF47AA(iVar6, "crgdm");
		iVar32 = unk_0x72C98FCC21DF47AA(iVar6, "liv");
		iVar33 = unk_0x72C98FCC21DF47AA(iVar6, "modps");
		iVar34 = unk_0x72C98FCC21DF47AA(iVar6, "enveff");
		iVar35 = unk_0x72C98FCC21DF47AA(iVar6, "colc");
		iVar36 = unk_0x72C98FCC21DF47AA(iVar6, "col2");
		iVar37 = unk_0x72C98FCC21DF47AA(iVar6, "col3");
		Global_1633501.f_57270 = unk_0x37AC9FA286925FB3(iVar6, "burst");
		iVar38 = unk_0x72C98FCC21DF47AA(iVar6, "hlth");
		iVar39 = unk_0x72C98FCC21DF47AA(iVar6, "enghp");
		iVar40 = unk_0x72C98FCC21DF47AA(iVar6, "ptrhp");
		iVar41 = unk_0x72C98FCC21DF47AA(iVar6, "bdyhp");
		iVar42 = unk_0x72C98FCC21DF47AA(iVar6, "drbs");
		iVar43 = unk_0x72C98FCC21DF47AA(iVar6, "vbs2");
		iVar44 = unk_0x72C98FCC21DF47AA(iVar6, "vbs3");
		iVar45 = unk_0x72C98FCC21DF47AA(iVar6, "vbs4");
		iVar46 = unk_0x72C98FCC21DF47AA(iVar6, "vbs5");
		iVar47 = unk_0x72C98FCC21DF47AA(iVar6, "vebs");
		iVar48 = unk_0x72C98FCC21DF47AA(iVar6, "vehct");
		iVar51 = unk_0x72C98FCC21DF47AA(iVar6, "vhcra");
		iVar49 = unk_0x72C98FCC21DF47AA(iVar6, "vehcr");
		iVar50 = unk_0x72C98FCC21DF47AA(iVar6, "vehcv");
		iVar52 = unk_0x72C98FCC21DF47AA(iVar6, "vehbc");
		iVar53 = unk_0x72C98FCC21DF47AA(iVar6, "vehbr");
		iVar54 = unk_0x72C98FCC21DF47AA(iVar6, "vehbso");
		iVar55 = unk_0x72C98FCC21DF47AA(iVar6, "vspdl");
		iVar56 = unk_0x72C98FCC21DF47AA(iVar6, "vsgr");
		iVar57 = unk_0x72C98FCC21DF47AA(iVar6, "vssgr");
		iVar58 = unk_0x72C98FCC21DF47AA(iVar6, "vcnm");
		iVar59 = unk_0x72C98FCC21DF47AA(iVar6, "vehap");
		iVar60 = unk_0x72C98FCC21DF47AA(iVar6, "vehat");
		iVar61 = unk_0x72C98FCC21DF47AA(iVar6, "vehdu");
		iVar62 = unk_0x72C98FCC21DF47AA(iVar6, "vldt");
		iVar63 = unk_0x72C98FCC21DF47AA(iVar6, "vldr");
		iVar64 = unk_0x72C98FCC21DF47AA(iVar6, "cutsc");
		iVar65 = unk_0x72C98FCC21DF47AA(iVar6, "cutsh");
		iVar69 = unk_0x72C98FCC21DF47AA(iVar6, "nmpass");
		iVar70 = unk_0x72C98FCC21DF47AA(iVar6, "nmfail");
		iVar66 = unk_0x72C98FCC21DF47AA(iVar6, "vmcp");
		iVar67 = unk_0x72C98FCC21DF47AA(iVar6, "vmcf");
		iVar68 = unk_0x72C98FCC21DF47AA(iVar6, "gotor");
		iVar118 = unk_0x72C98FCC21DF47AA(iVar6, "vphrang");
		iVar119 = unk_0x72C98FCC21DF47AA(iVar6, "vwpndmg");
		iVar120 = unk_0x72C98FCC21DF47AA(iVar6, "vtmhrn");
		iVar121 = unk_0x72C98FCC21DF47AA(iVar6, "vdrpovr");
		iVar122 = unk_0x72C98FCC21DF47AA(iVar6, "vdvrfe");
		iVar123 = unk_0x72C98FCC21DF47AA(iVar6, "vdeitc");
		iVar124 = unk_0x72C98FCC21DF47AA(iVar6, "vdspn");
		iVar125 = unk_0x72C98FCC21DF47AA(iVar6, "vdcbal");
		iVar126 = unk_0x72C98FCC21DF47AA(iVar6, "vdcbdt");
		iVar127 = unk_0x72C98FCC21DF47AA(iVar6, "vrhlor");
		iVar128 = unk_0x72C98FCC21DF47AA(iVar6, "vddfs");
		iVar129 = unk_0x72C98FCC21DF47AA(iVar6, "vrorc");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar111[iVar1] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar114[iVar1] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			iVar1++;
		}
		iVar117 = unk_0x72C98FCC21DF47AA(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1633501.f_30 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar101[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar106[iVar3] = unk_0x72C98FCC21DF47AA(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_57267 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1633501.f_57271[iVar0 /*138*/] = { unk_0xFFFE2DE388037E54(iVar8, iVar0) };
			Global_1633501.f_57271[iVar0 /*138*/].f_3 = unk_0x5EFB23FE1415D634(iVar9, iVar0);
			iVar2 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
			Global_1633501.f_57271[iVar0 /*138*/].f_12 = iVar2;
			if (!func_122())
			{
				if (!unk_0x152BAD1BB44F2768(Global_1633501.f_57271[iVar0 /*138*/].f_12))
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_12 = joaat("baller");
				}
			}
			if (Global_1633501.f_57271[iVar0 /*138*/].f_12 == joaat("sanctus") && !Global_262145.f_15112)
			{
				Global_1633501.f_57271[iVar0 /*138*/].f_12 = joaat("akuma");
			}
			Global_1633501.f_57271[iVar0 /*138*/].f_23 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			Global_1633501.f_57271[iVar0 /*138*/].f_30 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
			if (func_125())
			{
				if (((unk_0x4C58F55F20941087(iVar10, iVar0) == 3 && unk_0x4C58F55F20941087(iVar11, iVar0) == 3) && unk_0x4C58F55F20941087(iVar12, iVar0) == 2) && unk_0x4C58F55F20941087(iVar13, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_4 = unk_0x5EFB23FE1415D634(iVar10, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_5 = unk_0x5EFB23FE1415D634(iVar11, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_6 = unk_0xB6790B02AB53A81E(iVar12, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_7 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_4 = 100f;
					Global_1633501.f_57271[iVar0 /*138*/].f_5 = 0f;
					Global_1633501.f_57271[iVar0 /*138*/].f_6 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_7 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar14, iVar0) == 5 && unk_0x4C58F55F20941087(iVar15, iVar0) == 3)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_8 = { unk_0xFFFE2DE388037E54(iVar14, iVar0) };
					Global_1633501.f_57271[iVar0 /*138*/].f_11 = unk_0x5EFB23FE1415D634(iVar15, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_8 = { 0f, 0f, 0f };
					Global_1633501.f_57271[iVar0 /*138*/].f_11 = 0f;
				}
				Global_1633501.f_57271[iVar0 /*138*/].f_39 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
				Global_1633501.f_57271[iVar0 /*138*/].f_40 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
				Global_1633501.f_57271[iVar0 /*138*/].f_41 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
				if (unk_0x4C58F55F20941087(iVar22, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_76 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_73 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_79 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_77 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_74 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_80 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_78 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_75 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
					Global_1633501.f_57271[iVar0 /*138*/].f_81 = unk_0xB6790B02AB53A81E(iVar30, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_76 = -1;
					Global_1633501.f_57271[iVar0 /*138*/].f_73 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_79 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_77 = -1;
					Global_1633501.f_57271[iVar0 /*138*/].f_74 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_80 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_78 = -1;
					Global_1633501.f_57271[iVar0 /*138*/].f_75 = 0;
					Global_1633501.f_57271[iVar0 /*138*/].f_81 = 0;
				}
				Global_1633501.f_57271[iVar0 /*138*/].f_27 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
				if (unk_0x4C58F55F20941087(iVar33, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_28 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_28 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar34, iVar0) == 3)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_29 = unk_0x5EFB23FE1415D634(iVar34, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_29 = -1f;
				}
				Global_1633501.f_57271[iVar0 /*138*/].f_31 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
				if (unk_0x4C58F55F20941087(iVar39, iVar0) == 3 && unk_0x5EFB23FE1415D634(iVar39, iVar0) > 0f)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_32 = unk_0x5EFB23FE1415D634(iVar39, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_32 = 1001f;
				}
				if (unk_0x4C58F55F20941087(iVar31, iVar0) == 3 && unk_0x5EFB23FE1415D634(iVar31, iVar0) >= 0f)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_35 = unk_0x5EFB23FE1415D634(iVar31, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_35 = 1.5f;
				}
				if (unk_0x4C58F55F20941087(iVar40, iVar0) == 3 && unk_0x5EFB23FE1415D634(iVar40, iVar0) > 0f)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_33 = unk_0x5EFB23FE1415D634(iVar40, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_33 = 1001f;
				}
				if (unk_0x4C58F55F20941087(iVar41, iVar0) == 3 && unk_0x5EFB23FE1415D634(iVar41, iVar0) > 0f)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_34 = unk_0x5EFB23FE1415D634(iVar41, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_34 = 1001f;
				}
				Global_1633501.f_57271[iVar0 /*138*/].f_44 = unk_0xB6790B02AB53A81E(iVar42, iVar0);
				Global_1633501.f_57271[iVar0 /*138*/].f_45 = unk_0xB6790B02AB53A81E(iVar43, iVar0);
				if (unk_0x4C58F55F20941087(iVar44, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_46 = unk_0xB6790B02AB53A81E(iVar44, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_46 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar45, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_47 = unk_0xB6790B02AB53A81E(iVar45, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_47 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar46, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_48 = unk_0xB6790B02AB53A81E(iVar46, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_48 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar35, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_26 = unk_0xB6790B02AB53A81E(iVar35, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_26 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar36, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_24 = unk_0xB6790B02AB53A81E(iVar36, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_24 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar37, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_25 = unk_0xB6790B02AB53A81E(iVar37, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_25 = -1;
				}
				Global_1633501.f_57271[iVar0 /*138*/].f_110 = unk_0xB6790B02AB53A81E(iVar47, iVar0);
				if (unk_0x4C58F55F20941087(iVar49, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_63 = unk_0xB6790B02AB53A81E(iVar49, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_63 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar48, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_64 = unk_0xB6790B02AB53A81E(iVar48, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_64 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar51, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_65 = unk_0xB6790B02AB53A81E(iVar51, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_65 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar50, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_66 = unk_0xB6790B02AB53A81E(iVar50, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_66 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar55, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_72 = unk_0xB6790B02AB53A81E(iVar55, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_72 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar56, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_42 = unk_0xB6790B02AB53A81E(iVar56, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_42 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar57, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_43 = unk_0xB6790B02AB53A81E(iVar57, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_43 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar58, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_82 = unk_0xB6790B02AB53A81E(iVar58, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_82 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar66, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_100 = unk_0xB6790B02AB53A81E(iVar66, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_100 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar67, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_101 = unk_0xB6790B02AB53A81E(iVar67, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_101 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar59, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_83 = unk_0xB6790B02AB53A81E(iVar59, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_83 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar60, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_84 = unk_0xB6790B02AB53A81E(iVar60, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_84 = 1;
				}
				if (unk_0x4C58F55F20941087(iVar61, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_97 = unk_0xB6790B02AB53A81E(iVar61, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_97 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar62, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_98 = unk_0xB6790B02AB53A81E(iVar62, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_98 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar63, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_99 = unk_0xB6790B02AB53A81E(iVar63, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_99 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar52, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_50 = unk_0xB6790B02AB53A81E(iVar52, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_50 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar53, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_51 = unk_0xB6790B02AB53A81E(iVar53, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_51 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar54, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_52 = unk_0xB6790B02AB53A81E(iVar54, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_52 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar68, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_38 = unk_0xB6790B02AB53A81E(iVar68, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_38 = 0;
				}
				if (Global_1633501.f_2 != 6 && unk_0x4C58F55F20941087(iVar64, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_108 = unk_0xB6790B02AB53A81E(iVar64, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_108 = -1;
				}
				if (Global_1633501.f_2 != 6 && unk_0x4C58F55F20941087(iVar65, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_109 = unk_0xB6790B02AB53A81E(iVar65, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_109 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar69, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_95 = unk_0xB6790B02AB53A81E(iVar69, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_95 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar70, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_96 = unk_0xB6790B02AB53A81E(iVar70, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_96 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x4C58F55F20941087(uVar111[iVar1], iVar0) == 5)
					{
						Global_1633501.f_57271[iVar0 /*138*/].f_112[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar111[iVar1], iVar0) };
					}
					else
					{
						Global_1633501.f_57271[iVar0 /*138*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x4C58F55F20941087(uVar114[iVar1], iVar0) == 3)
					{
						Global_1633501.f_57271[iVar0 /*138*/].f_119[iVar1] = unk_0x5EFB23FE1415D634(uVar114[iVar1], iVar0);
					}
					else
					{
						Global_1633501.f_57271[iVar0 /*138*/].f_119[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x4C58F55F20941087(iVar117, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_111 = unk_0xB6790B02AB53A81E(iVar117, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_111 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar118, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_122 = unk_0xB6790B02AB53A81E(iVar118, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_122 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar119, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_131 = unk_0xB6790B02AB53A81E(iVar119, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_131 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar120, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_127 = unk_0xB6790B02AB53A81E(iVar120, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_127 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar121, iVar0) == 5)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_128 = { unk_0xFFFE2DE388037E54(iVar121, iVar0) };
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_128 = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(iVar122, iVar0) == 3)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_124 = unk_0x5EFB23FE1415D634(iVar122, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_124 = -1f;
				}
				if (unk_0x4C58F55F20941087(iVar128, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_125 = unk_0xB6790B02AB53A81E(iVar128, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_125 = 10;
				}
				if (unk_0x4C58F55F20941087(iVar123, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_123 = unk_0xB6790B02AB53A81E(iVar123, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_123 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar124, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_126 = unk_0xB6790B02AB53A81E(iVar124, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_126 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar125, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_36 = unk_0xB6790B02AB53A81E(iVar125, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_36 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar126, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_37 = unk_0xB6790B02AB53A81E(iVar126, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_37 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar127, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_136 = unk_0xB6790B02AB53A81E(iVar127, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_136 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar129, iVar0) == 2)
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_137 = unk_0xB6790B02AB53A81E(iVar129, iVar0);
				}
				else
				{
					Global_1633501.f_57271[iVar0 /*138*/].f_137 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1633501.f_30 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1633501.f_57271[iVar0 /*138*/].f_13[iVar3] = unk_0xB6790B02AB53A81E(uVar71[iVar3], iVar0);
						Global_1633501.f_57271[iVar0 /*138*/].f_18[iVar3] = unk_0xB6790B02AB53A81E(uVar76[iVar3], iVar0);
						if (Global_1633501.f_57271[iVar0 /*138*/].f_18[iVar3] == -1)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_18[iVar3] = 99999;
						}
						if (unk_0x4C58F55F20941087(uVar81[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_102[iVar3] = unk_0xB6790B02AB53A81E(uVar81[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_102[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar86[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_85[iVar3] = unk_0xB6790B02AB53A81E(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_85[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar91[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_90[iVar3] = unk_0xB6790B02AB53A81E(uVar91[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_90[iVar3] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar96[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_53[iVar3] = unk_0xB6790B02AB53A81E(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_53[iVar3] = -1;
						}
						if (unk_0x4C58F55F20941087(uVar101[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_58[iVar3] = unk_0xB6790B02AB53A81E(uVar101[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_58[iVar3] = -1;
						}
						if (unk_0x4C58F55F20941087(uVar106[iVar3], iVar0) == 2)
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_67[iVar3] = unk_0xB6790B02AB53A81E(uVar106[iVar3], iVar0);
						}
						else
						{
							Global_1633501.f_57271[iVar0 /*138*/].f_67[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_183(int iParam0)
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
	
	iVar5 = unk_0x489F243BF1619568(iParam0, "weap");
	Global_1633501.f_54821 = unk_0x37AC9FA286925FB3(iVar5, "no");
	if (Global_1633501 == 0)
	{
		if (Global_1633501.f_54821 > 60)
		{
			Global_1633501.f_54821 = 60;
		}
	}
	else if (Global_1633501.f_54821 > 60)
	{
		Global_1633501.f_54821 = 60;
	}
	Global_1633501.f_54823 = unk_0x37AC9FA286925FB3(iVar5, "time");
	Global_1633501.f_54824 = unk_0x37AC9FA286925FB3(iVar5, "pal");
	Global_1633501.f_53 = unk_0x37AC9FA286925FB3(iVar5, "blip");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar5, "loc");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar5, "head");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar5, "type");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar5, "sub");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar5, "bits");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar5, "clip");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar5, "brest1");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar5, "brest2");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar5, "brest3");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar5, "brest4");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar5, "dmgmult");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar5, "rput");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar5, "vput");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar5, "vasst");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar5, "vasso");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar5, "vasss");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar5, "vasst2");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar5, "vasso2");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar5, "vasss2");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar5, "vasst3");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar5, "vasso3");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar5, "vasss3");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar5, "vasst4");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar5, "vasso4");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar5, "vasss4");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar5, "vclnr");
	iVar32 = unk_0x72C98FCC21DF47AA(iVar5, "vclnt");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar5, "vclnrl");
	iVar34 = unk_0x72C98FCC21DF47AA(iVar5, "ipdi");
	Global_1633501.f_57266 = unk_0x917AA466A591DA1F(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_54821 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1633501.f_54825[iVar0 /*40*/] = { unk_0xFFFE2DE388037E54(iVar6, iVar0) };
			Global_1633501.f_54825[iVar0 /*40*/].f_3 = unk_0x5EFB23FE1415D634(iVar7, iVar0);
			iVar1 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_13 = iVar1;
			if (!func_184(Global_1633501.f_54825[iVar0 /*40*/].f_13))
			{
				if (Global_1633501.f_54825[iVar0 /*40*/].f_13 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_13 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_13 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1633501.f_54825[iVar0 /*40*/].f_4 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_6 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_5 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_21 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_22 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
			Global_1633501.f_54825[iVar0 /*40*/].f_39 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
			if (unk_0x4C58F55F20941087(iVar12, iVar0) == 1)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[0] = unk_0x743A454C4B4C0325(iVar12, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[0] = 0;
			}
			if (unk_0x4C58F55F20941087(iVar13, iVar0) == 1)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[1] = unk_0x743A454C4B4C0325(iVar13, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[1] = 0;
			}
			if (unk_0x4C58F55F20941087(iVar14, iVar0) == 1)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[2] = unk_0x743A454C4B4C0325(iVar14, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[2] = 0;
			}
			if (unk_0x4C58F55F20941087(iVar15, iVar0) == 1)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[3] = unk_0x743A454C4B4C0325(iVar15, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_8[3] = 0;
			}
			if (unk_0x4C58F55F20941087(iVar16, iVar0) == 3)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_7 = unk_0x5EFB23FE1415D634(iVar16, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_7 = 1f;
			}
			if (unk_0x4C58F55F20941087(iVar17, iVar0) == 2)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_21 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_21 = -1;
			}
			if (unk_0x4C58F55F20941087(iVar34, iVar0) == 2)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_39 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_39 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar18, iVar0) == 2)
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_22 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
			}
			else
			{
				Global_1633501.f_54825[iVar0 /*40*/].f_22 = -1;
			}
			if (func_125())
			{
				if (unk_0x4C58F55F20941087(iVar33, iVar0) == 2)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_27 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_27 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar32, iVar0) == 2)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_28 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_28 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar31, iVar0) == 2)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_29 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_29 = 0;
				}
				Global_1633501.f_54825[iVar0 /*40*/].f_24 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
				Global_1633501.f_54825[iVar0 /*40*/].f_25 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
				Global_1633501.f_54825[iVar0 /*40*/].f_26 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
				if (Global_1633501.f_54825[iVar0 /*40*/].f_26 == -1)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_26 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar23, iVar0) == 2)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_33 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_30 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_36 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_34 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_31 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_37 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_35 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_32 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
					Global_1633501.f_54825[iVar0 /*40*/].f_38 = unk_0xB6790B02AB53A81E(iVar30, iVar0);
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_33 = -1;
					Global_1633501.f_54825[iVar0 /*40*/].f_30 = 0;
					Global_1633501.f_54825[iVar0 /*40*/].f_36 = 0;
					Global_1633501.f_54825[iVar0 /*40*/].f_34 = -1;
					Global_1633501.f_54825[iVar0 /*40*/].f_31 = 0;
					Global_1633501.f_54825[iVar0 /*40*/].f_37 = 0;
					Global_1633501.f_54825[iVar0 /*40*/].f_35 = -1;
					Global_1633501.f_54825[iVar0 /*40*/].f_32 = 0;
					Global_1633501.f_54825[iVar0 /*40*/].f_38 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar35 = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x4C58F55F20941087(iVar35, iVar2) == 2)
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_14[iVar2] = unk_0xB6790B02AB53A81E(iVar35, iVar2);
				}
				else
				{
					Global_1633501.f_54825[iVar0 /*40*/].f_14[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_184(int iParam0)
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
		case joaat("pickup_weapon_compactrifle"):
		case joaat("pickup_weapon_dbshotgun"):
		case joaat("pickup_weapon_machete"):
		case joaat("pickup_weapon_flashlight"):
		case joaat("pickup_weapon_knuckle"):
		case joaat("pickup_weapon_combatpdw"):
		case joaat("pickup_weapon_switchblade"):
		case joaat("pickup_weapon_revolver"):
		case joaat("pickup_weapon_autoshotgun"):
		case joaat("pickup_weapon_minismg"):
		case joaat("pickup_weapon_compactlauncher"):
		case joaat("pickup_weapon_pipebomb"):
		case joaat("pickup_weapon_poolcue"):
		case joaat("pickup_weapon_battleaxe"):
		case joaat("pickup_weapon_wrench"):
			return 1;
		
		default:
	}
	return 0;
}

void func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (unk_0x489F243BF1619568(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x489F243BF1619568(iParam0, "ptemp");
	Global_1633501.f_107497 = unk_0x37AC9FA286925FB3(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_107497 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x4C58F55F20941087(uVar5[iVar0], iVar1) == 5)
			{
				Global_1633501.f_105056[iVar0 /*244*/][iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_105056[iVar0 /*244*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar16[iVar0], iVar1) == 5)
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_91[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar27[iVar0], iVar1) == 2)
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_182[iVar1] = unk_0xB6790B02AB53A81E(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_182[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar38[iVar0], iVar1) == 2)
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_213[iVar1] = unk_0xB6790B02AB53A81E(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_105056[iVar0 /*244*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_186(int iParam0)
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
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	var uVar66[4];
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	
	iVar5 = unk_0x489F243BF1619568(iParam0, "obj");
	Global_1633501.f_42635 = unk_0x37AC9FA286925FB3(iVar5, "no");
	Global_1633501.f_42636 = unk_0x37AC9FA286925FB3(iVar5, "pal");
	Global_1633501.f_42637 = unk_0x37AC9FA286925FB3(iVar5, "rtm");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar5, "loc");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar5, "head");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar5, "model");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar5, "ped");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar5, "rsp");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar5, "rot");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar5, "cont");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar5, "valu");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar5, "ammoforwep");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar5, "cpup");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar5, "cpupr");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar5, "cpupt");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar5, "bits");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar5, "oiet");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar5, "ospl");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar5, "dspn");
	if (func_125())
	{
		iVar8 = unk_0x72C98FCC21DF47AA(iVar5, "obrr");
		iVar9 = unk_0x72C98FCC21DF47AA(iVar5, "obrmr");
		iVar10 = unk_0x72C98FCC21DF47AA(iVar5, "osnt");
		iVar11 = unk_0x72C98FCC21DF47AA(iVar5, "osnei");
		iVar14 = unk_0x72C98FCC21DF47AA(iVar5, "objbr");
		iVar12 = unk_0x72C98FCC21DF47AA(iVar5, "o2sp");
		iVar13 = unk_0x72C98FCC21DF47AA(iVar5, "o2sh");
		iVar26 = unk_0x72C98FCC21DF47AA(iVar5, "mgbs");
		iVar30 = unk_0x72C98FCC21DF47AA(iVar5, "objct");
		iVar31 = unk_0x72C98FCC21DF47AA(iVar5, "team");
		iVar32 = unk_0x72C98FCC21DF47AA(iVar5, "spwn");
		iVar33 = unk_0x72C98FCC21DF47AA(iVar5, "objct2");
		iVar34 = unk_0x72C98FCC21DF47AA(iVar5, "team2");
		iVar35 = unk_0x72C98FCC21DF47AA(iVar5, "spwn2");
		iVar36 = unk_0x72C98FCC21DF47AA(iVar5, "objct3");
		iVar37 = unk_0x72C98FCC21DF47AA(iVar5, "team3");
		iVar38 = unk_0x72C98FCC21DF47AA(iVar5, "spwn3");
		iVar39 = unk_0x72C98FCC21DF47AA(iVar5, "objct4");
		iVar40 = unk_0x72C98FCC21DF47AA(iVar5, "team4");
		iVar41 = unk_0x72C98FCC21DF47AA(iVar5, "spwn4");
		iVar42 = unk_0x72C98FCC21DF47AA(iVar5, "hlt");
		iVar43 = unk_0x72C98FCC21DF47AA(iVar5, "obb");
		iVar44 = unk_0x72C98FCC21DF47AA(iVar5, "obbc");
		iVar45 = unk_0x72C98FCC21DF47AA(iVar5, "objclt");
		iVar46 = unk_0x72C98FCC21DF47AA(iVar5, "objcr");
		iVar47 = unk_0x72C98FCC21DF47AA(iVar5, "obcra");
		iVar48 = unk_0x72C98FCC21DF47AA(iVar5, "ospdl");
		iVar49 = unk_0x72C98FCC21DF47AA(iVar5, "osgr");
		iVar50 = unk_0x72C98FCC21DF47AA(iVar5, "ossgr");
		iVar51 = unk_0x72C98FCC21DF47AA(iVar5, "objcnm");
		iVar52 = unk_0x72C98FCC21DF47AA(iVar5, "ororc");
		iVar53 = unk_0x72C98FCC21DF47AA(iVar5, "objap");
		iVar54 = unk_0x72C98FCC21DF47AA(iVar5, "objapt");
		iVar55 = unk_0x72C98FCC21DF47AA(iVar5, "obint");
		iVar56 = unk_0x72C98FCC21DF47AA(iVar5, "obrom");
		iVar57 = unk_0x72C98FCC21DF47AA(iVar5, "inco");
		iVar58 = unk_0x72C98FCC21DF47AA(iVar5, "inhsh");
		iVar59 = unk_0x72C98FCC21DF47AA(iVar5, "vehpu");
		iVar60 = unk_0x72C98FCC21DF47AA(iVar5, "airpu");
		iVar63 = unk_0x72C98FCC21DF47AA(iVar5, "gotor");
		iVar64 = unk_0x72C98FCC21DF47AA(iVar5, "nmpass");
		iVar65 = unk_0x72C98FCC21DF47AA(iVar5, "nmfail");
		iVar61 = unk_0x72C98FCC21DF47AA(iVar5, "omcp");
		iVar62 = unk_0x72C98FCC21DF47AA(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1633501.f_30 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar66[iVar2] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar71[iVar2] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar76[iVar2] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar81[iVar2] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_42635 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1633501.f_42638[iVar0 /*93*/] = { unk_0xFFFE2DE388037E54(iVar6, iVar0) };
			Global_1633501.f_42638[iVar0 /*93*/].f_3 = unk_0x5EFB23FE1415D634(iVar7, iVar0);
			iVar1 = unk_0xB6790B02AB53A81E(iVar15, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_16 = iVar1;
			if (Global_1633501.f_42638[iVar0 /*93*/].f_16 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1633501.f_42638[iVar0 /*93*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0x152BAD1BB44F2768(Global_1633501.f_42638[iVar0 /*93*/].f_16))
			{
				Global_1633501.f_42638[iVar0 /*93*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_1633501.f_42638[iVar0 /*93*/].f_16 == joaat("prop_cctv_cam_06a"))
			{
				Global_1633501.f_42638[iVar0 /*93*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1633501.f_42638[iVar0 /*93*/].f_16 == joaat("prop_cctv_cam_07a"))
			{
				Global_1633501.f_42638[iVar0 /*93*/].f_16 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1633501.f_42638[iVar0 /*93*/].f_27 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_4 = { unk_0xFFFE2DE388037E54(iVar18, iVar0) };
			Global_1633501.f_42638[iVar0 /*93*/].f_31 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_45 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_46 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_47 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_48 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_49 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_50 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_43 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_89 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_90 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
			Global_1633501.f_42638[iVar0 /*93*/].f_91 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
			if (unk_0x4C58F55F20941087(iVar60, iVar0) == 2)
			{
				if (unk_0xB6790B02AB53A81E(iVar60, iVar0) == 1)
				{
					if (!unk_0x48B8265059381CD0(Global_1633501.f_42638[iVar0 /*93*/].f_43, 4))
					{
						unk_0xEB79FECD9022AAF0(&(Global_1633501.f_42638[iVar0 /*93*/].f_43), 4);
					}
				}
			}
			if (func_125())
			{
				if (((unk_0x4C58F55F20941087(iVar8, iVar0) == 3 && unk_0x4C58F55F20941087(iVar9, iVar0) == 3) && unk_0x4C58F55F20941087(iVar10, iVar0) == 2) && unk_0x4C58F55F20941087(iVar11, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_7 = unk_0x5EFB23FE1415D634(iVar8, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_8 = unk_0x5EFB23FE1415D634(iVar9, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_9 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_10 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_7 = 50f;
					Global_1633501.f_42638[iVar0 /*93*/].f_8 = 0f;
					Global_1633501.f_42638[iVar0 /*93*/].f_9 = 0;
					Global_1633501.f_42638[iVar0 /*93*/].f_10 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar14, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_15 = unk_0xB6790B02AB53A81E(iVar14, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_15 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar12, iVar0) == 5 && unk_0x4C58F55F20941087(iVar13, iVar0) == 3)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_11 = { unk_0xFFFE2DE388037E54(iVar12, iVar0) };
					Global_1633501.f_42638[iVar0 /*93*/].f_14 = unk_0x5EFB23FE1415D634(iVar13, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_11 = { 0f, 0f, 0f };
					Global_1633501.f_42638[iVar0 /*93*/].f_14 = 0f;
				}
				Global_1633501.f_42638[iVar0 /*93*/].f_44 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
				Global_1633501.f_42638[iVar0 /*93*/].f_32 = unk_0xB6790B02AB53A81E(iVar30, iVar0);
				Global_1633501.f_42638[iVar0 /*93*/].f_33 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
				Global_1633501.f_42638[iVar0 /*93*/].f_34 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
				if (unk_0x4C58F55F20941087(iVar33, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_59 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_56 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_62 = unk_0xB6790B02AB53A81E(iVar35, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_60 = unk_0xB6790B02AB53A81E(iVar36, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_57 = unk_0xB6790B02AB53A81E(iVar37, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_63 = unk_0xB6790B02AB53A81E(iVar38, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_61 = unk_0xB6790B02AB53A81E(iVar39, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_58 = unk_0xB6790B02AB53A81E(iVar40, iVar0);
					Global_1633501.f_42638[iVar0 /*93*/].f_64 = unk_0xB6790B02AB53A81E(iVar41, iVar0);
				}
				Global_1633501.f_42638[iVar0 /*93*/].f_28 = unk_0xB6790B02AB53A81E(iVar42, iVar0);
				Global_1633501.f_42638[iVar0 /*93*/].f_29 = unk_0xB6790B02AB53A81E(iVar43, iVar0);
				Global_1633501.f_42638[iVar0 /*93*/].f_37 = unk_0xB6790B02AB53A81E(iVar59, iVar0);
				if (unk_0x4C58F55F20941087(iVar44, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_30 = unk_0xB6790B02AB53A81E(iVar44, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_30 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar46, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_51 = unk_0xB6790B02AB53A81E(iVar46, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_51 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar45, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_52 = unk_0xB6790B02AB53A81E(iVar45, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_52 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar47, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_53 = unk_0xB6790B02AB53A81E(iVar47, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_53 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar48, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_55 = unk_0xB6790B02AB53A81E(iVar48, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_55 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar49, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_35 = unk_0xB6790B02AB53A81E(iVar49, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_35 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar50, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_36 = unk_0xB6790B02AB53A81E(iVar50, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_36 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar51, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_80 = unk_0xB6790B02AB53A81E(iVar51, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_80 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar52, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_92 = unk_0xB6790B02AB53A81E(iVar52, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_92 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar61, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_77 = unk_0xB6790B02AB53A81E(iVar61, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_77 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar62, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_78 = unk_0xB6790B02AB53A81E(iVar62, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_78 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar53, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_81 = unk_0xB6790B02AB53A81E(iVar53, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_81 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar54, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_82 = unk_0xB6790B02AB53A81E(iVar54, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_82 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar55, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_83 = unk_0xB6790B02AB53A81E(iVar55, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_83 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar56, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_84 = unk_0xB6790B02AB53A81E(iVar56, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_84 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar57, iVar0) == 5 && unk_0x4C58F55F20941087(iVar58, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_85 = { unk_0xFFFE2DE388037E54(iVar57, iVar0) };
					Global_1633501.f_42638[iVar0 /*93*/].f_88 = unk_0xB6790B02AB53A81E(iVar58, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_85 = { 0f, 0f, 0f };
					Global_1633501.f_42638[iVar0 /*93*/].f_88 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar63, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_54 = unk_0xB6790B02AB53A81E(iVar63, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_54 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar64, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_75 = unk_0xB6790B02AB53A81E(iVar64, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_75 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar65, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_76 = unk_0xB6790B02AB53A81E(iVar65, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_76 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar28, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_90 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_90 = 0;
				}
				if (unk_0x4C58F55F20941087(iVar29, iVar0) == 2)
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_91 = unk_0xB6790B02AB53A81E(iVar29, iVar0);
				}
				else
				{
					Global_1633501.f_42638[iVar0 /*93*/].f_91 = 0;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1633501.f_30 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1633501.f_42638[iVar0 /*93*/].f_17[iVar2] = unk_0xB6790B02AB53A81E(uVar66[iVar2], iVar0);
						Global_1633501.f_42638[iVar0 /*93*/].f_22[iVar2] = unk_0xB6790B02AB53A81E(uVar71[iVar2], iVar0);
						if (Global_1633501.f_42638[iVar0 /*93*/].f_22[iVar2] == -1)
						{
							Global_1633501.f_42638[iVar0 /*93*/].f_22[iVar2] = 99999;
						}
						if (unk_0x4C58F55F20941087(uVar76[iVar2], iVar0) == 2)
						{
							Global_1633501.f_42638[iVar0 /*93*/].f_65[iVar2] = unk_0xB6790B02AB53A81E(uVar76[iVar2], iVar0);
						}
						else
						{
							Global_1633501.f_42638[iVar0 /*93*/].f_65[iVar2] = 0;
						}
						if (unk_0x4C58F55F20941087(uVar81[iVar2], iVar0) == 2)
						{
							Global_1633501.f_42638[iVar0 /*93*/].f_70[iVar2] = unk_0xB6790B02AB53A81E(uVar81[iVar2], iVar0);
						}
						else
						{
							Global_1633501.f_42638[iVar0 /*93*/].f_70[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_187(int iParam0)
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
	
	iVar6 = unk_0x489F243BF1619568(iParam0, "zone");
	Global_1633501.f_88954 = unk_0x37AC9FA286925FB3(iVar6, "no");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar6, "vto");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar6, "vld");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar6, "zntp");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar6, "znbs");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar6, "znwd");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar6, "znwvd");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar6, "znatp");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar6, "znwid");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x72C98FCC21DF47AA(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x72C98FCC21DF47AA(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1633501.f_88954 > 10)
	{
		Global_1633501.f_88954 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_88954 - 1))
	{
		Global_1633501.f_88977[iVar0 /*26*/][0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar7, iVar0) };
		Global_1633501.f_88977[iVar0 /*26*/][1 /*3*/] = { unk_0xFFFE2DE388037E54(iVar8, iVar0) };
		Global_1633501.f_88977[iVar0 /*26*/].f_9 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x4C58F55F20941087(uVar10[iVar1], iVar0) == 2)
			{
				Global_1633501.f_88977[iVar0 /*26*/].f_10[iVar1] = unk_0xB6790B02AB53A81E(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1633501.f_88977[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x4C58F55F20941087(uVar15[iVar1], iVar0) == 2)
			{
				Global_1633501.f_88977[iVar0 /*26*/].f_15[iVar1] = unk_0xB6790B02AB53A81E(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1633501.f_88977[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x4C58F55F20941087(iVar20, iVar0) == 2)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_20 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar21, iVar0) == 3)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_22 = unk_0x5EFB23FE1415D634(iVar21, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar22, iVar0) == 3)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_23 = unk_0x5EFB23FE1415D634(iVar22, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar23, iVar0) == 2)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_8 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar24, iVar0) == 3)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_7 = unk_0x5EFB23FE1415D634(iVar24, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar25, iVar0) == 2)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_21 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
		}
		else
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x489F243BF1619568(iParam0, "usj");
	Global_1633501.f_88220 = unk_0x37AC9FA286925FB3(iVar1, "no");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "vto");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "vld");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar1, "vcm");
	if (Global_1633501.f_88220 > 10)
	{
		Global_1633501.f_88220 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_88220 - 1))
	{
		Global_1633501.f_88221[iVar0 /*9*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
		Global_1633501.f_88221[iVar0 /*9*/].f_3 = { unk_0xFFFE2DE388037E54(iVar3, iVar0) };
		Global_1633501.f_88221[iVar0 /*9*/].f_6 = { unk_0xFFFE2DE388037E54(iVar4, iVar0) };
		iVar0++;
	}
}

void func_189(int iParam0)
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
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var uVar35[4];
	int iVar40;
	
	if (unk_0x489F243BF1619568(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x489F243BF1619568(iParam0, "ddtrig");
	Global_1633501.f_92978 = unk_0x37AC9FA286925FB3(iVar4, "no");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar4, "id");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar4, "fid");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar4, "rule");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar4, "team");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar4, "pos");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar4, "rad");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar4, "tdel");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar4, "tpnt");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar4, "crkls");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar4, "spveh");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar4, "spveh2");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar4, "spveh3");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar4, "spveh4");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar4, "spveh5");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar4, "skprs");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar4, "fcsped");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar4, "prty");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar4, "dbs");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar4, "dbs2");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar4, "drole");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar4, "dspk");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar4, "dspk2");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar4, "dpcr");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar4, "panim");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar4, "blok");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar4, "root");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar4, "mgveh");
	iVar32 = unk_0x72C98FCC21DF47AA(iVar4, "vehtg");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar4, "prerq");
	iVar34 = unk_0x72C98FCC21DF47AA(iVar4, "vehdm");
	iVar40 = unk_0x72C98FCC21DF47AA(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1633501.f_92978 > 69)
	{
		Global_1633501.f_92978 = 69;
	}
	if (unk_0x4C58F55F20941087(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1633501.f_92978 - 1))
		{
			if (unk_0x4C58F55F20941087(iVar8, iVar0) == 2)
			{
				func_190(&(Global_1633501.f_89303[iVar0 /*49*/]), iVar0);
				if (iVar6 != 0 && unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_1 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/] = unk_0xB6790B02AB53A81E(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_2 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_3 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_6 = { unk_0xFFFE2DE388037E54(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_9 = unk_0x5EFB23FE1415D634(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_5 = unk_0xB6790B02AB53A81E(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_12 = unk_0xB6790B02AB53A81E(iVar12, iVar0);
				}
				if (iVar21 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_13 = unk_0xB6790B02AB53A81E(iVar21, iVar0);
				}
				if (iVar22 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_10 = unk_0xB6790B02AB53A81E(iVar22, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_11 = unk_0xB6790B02AB53A81E(iVar23, iVar0);
				}
				if (iVar24 != 0 && unk_0x4C58F55F20941087(iVar24, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_4 = unk_0xB6790B02AB53A81E(iVar24, iVar0);
				}
				else
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_4 = 0;
				}
				if (iVar31 != 0 && unk_0x4C58F55F20941087(iVar31, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_17 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
				}
				if (iVar13 != 0 && unk_0x4C58F55F20941087(iVar13, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_21 = unk_0xB6790B02AB53A81E(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x4C58F55F20941087(iVar14, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_28 = unk_0xB6790B02AB53A81E(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0x4C58F55F20941087(iVar15, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_29 = unk_0xB6790B02AB53A81E(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0x4C58F55F20941087(iVar16, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_30 = unk_0xB6790B02AB53A81E(iVar16, iVar0);
				}
				if (iVar17 != 0 && unk_0x4C58F55F20941087(iVar17, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_31 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
				}
				if (iVar18 != 0 && unk_0x4C58F55F20941087(iVar18, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_32 = unk_0xB6790B02AB53A81E(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x4C58F55F20941087(iVar19, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_33 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x4C58F55F20941087(iVar20, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_22 = unk_0xB6790B02AB53A81E(iVar20, iVar0);
				}
				if (iVar25 != 0 && unk_0x4C58F55F20941087(iVar25, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_14 = unk_0xB6790B02AB53A81E(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x4C58F55F20941087(iVar26, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_15 = unk_0xB6790B02AB53A81E(iVar26, iVar0);
				}
				if (iVar27 != 0 && unk_0x4C58F55F20941087(iVar27, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_34 = unk_0xB6790B02AB53A81E(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0x4C58F55F20941087(iVar28, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_16 = unk_0xB6790B02AB53A81E(iVar28, iVar0);
				}
				if (iVar32 != 0 && unk_0x4C58F55F20941087(iVar32, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_18 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
				}
				if (iVar33 != 0 && unk_0x4C58F55F20941087(iVar33, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_19 = unk_0xB6790B02AB53A81E(iVar33, iVar0);
				}
				if (iVar34 != 0 && unk_0x4C58F55F20941087(iVar34, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_20 = unk_0xB6790B02AB53A81E(iVar34, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar35[iVar1] != 0 && unk_0x4C58F55F20941087(uVar35[iVar1], iVar0) == 2)
					{
						Global_1633501.f_89303[iVar0 /*49*/].f_23[iVar1] = unk_0xB6790B02AB53A81E(uVar35[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar40 != 0 && unk_0x4C58F55F20941087(iVar40, iVar0) == 2)
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_47 = unk_0xB6790B02AB53A81E(iVar40, iVar0);
				}
				else
				{
					Global_1633501.f_89303[iVar0 /*49*/].f_47 = 0;
				}
				if (iVar29 != 0)
				{
					StringCopy(&(Global_1633501.f_89303[iVar0 /*49*/].f_35), unk_0xC250F19D1D16764D(iVar29, iVar0), 24);
				}
				if (iVar30 != 0)
				{
					StringCopy(&(Global_1633501.f_89303[iVar0 /*49*/].f_41), unk_0xC250F19D1D16764D(iVar30, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1633501.f_92978 - 1))
		{
			Global_1633501.f_89303[iVar0 /*49*/] = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_2 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_3 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_6 = { 0f, 0f, 0f };
			Global_1633501.f_89303[iVar0 /*49*/].f_9 = 3f;
			Global_1633501.f_89303[iVar0 /*49*/].f_5 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_12 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_21 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_28 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_29 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_30 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_31 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_32 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_33 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_13 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_10 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_11 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_4 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_14 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_15 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_16 = 0;
			StringCopy(&(Global_1633501.f_89303[iVar0 /*49*/].f_35), "", 24);
			StringCopy(&(Global_1633501.f_89303[iVar0 /*49*/].f_41), "", 24);
			Global_1633501.f_89303[iVar0 /*49*/].f_17 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_18 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_19 = -1;
			Global_1633501.f_89303[iVar0 /*49*/].f_20 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_47 = 0;
			Global_1633501.f_89303[iVar0 /*49*/].f_34 = 0;
			iVar0++;
		}
	}
	if (unk_0x0481328AA6FEFDAB(iParam0, "dtmp") == 2)
	{
		Global_1633501.f_92974[0] = unk_0x37AC9FA286925FB3(iParam0, "dtmp");
	}
	else
	{
		Global_1633501.f_92974[0] = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iParam0, "dtmp2") == 2)
	{
		Global_1633501.f_92974[1] = unk_0x37AC9FA286925FB3(iParam0, "dtmp2");
	}
	else
	{
		Global_1633501.f_92974[1] = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iParam0, "dtmp3") == 2)
	{
		Global_1633501.f_92974[2] = unk_0x37AC9FA286925FB3(iParam0, "dtmp3");
	}
	else
	{
		Global_1633501.f_92974[2] = 0;
	}
}

void func_190(var uParam0, int iParam1)
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
	uParam0->f_29 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = -1;
	uParam0->f_33 = 0;
	uParam0->f_22 = -1;
	uParam0->f_34 = 0;
	StringCopy(&(uParam0->f_35), "", 24);
	StringCopy(&(uParam0->f_41), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_23[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_47 = 0;
	if (iParam1 != -1)
	{
		unk_0x21E7933CCC7B3724(&(Global_1633501.f_92974[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0xA3794949321E107C(uParam0->f_48))
	{
		unk_0x020DF7300725ECAB(&(uParam0->f_48));
	}
}

void func_191(int iParam0)
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
	var uVar34[3];
	var uVar38[3];
	int iVar42;
	char[] cVar43[8];
	
	iVar2 = unk_0x489F243BF1619568(iParam0, "race");
	Global_1633501.f_41910 = unk_0x37AC9FA286925FB3(iVar2, "chp");
	iVar3 = (Global_1633501.f_41910 - 1);
	Global_1633501.f_41911 = unk_0x37AC9FA286925FB3(iVar2, "lap");
	Global_1633501.f_41912 = unk_0x37AC9FA286925FB3(iVar2, "type");
	if (func_108() == 2)
	{
		if (Global_1633501.f_41912 == 6)
		{
			Global_1633501.f_41912 = 0;
		}
		else if (Global_1633501.f_41912 == 7)
		{
			Global_1633501.f_41912 = 1;
		}
	}
	Global_1633501.f_41913 = unk_0x37AC9FA286925FB3(iVar2, "gtar");
	Global_1633501.f_42566 = unk_0x43D5E279656505E4(iVar2, "head");
	Global_1633501.f_42567 = unk_0x43D5E279656505E4(iVar2, "lrgs");
	Global_1633501.f_42568 = unk_0x43D5E279656505E4(iVar2, "udgs");
	Global_1633501.f_42569 = unk_0x43D5E279656505E4(iVar2, "gw");
	Global_1633501.f_42570 = unk_0x43D5E279656505E4(iVar2, "gl");
	Global_1633501.f_42571 = unk_0x37AC9FA286925FB3(iVar2, "lanes");
	Global_1633501.f_36340 = { unk_0x51AA166972995C47(iVar2, "grid") };
	Global_1633501.f_41915 = unk_0x37AC9FA286925FB3(iVar2, "icv");
	Global_1633501.f_41917 = unk_0x37AC9FA286925FB3(iVar2, "tri1");
	Global_1633501.f_41918 = unk_0x37AC9FA286925FB3(iVar2, "tri2");
	Global_1633501.f_41919 = unk_0x37AC9FA286925FB3(iVar2, "clbs");
	Global_1633501.f_42565 = unk_0x37AC9FA286925FB3(iVar2, "ptp");
	Global_1633501.f_42563 = unk_0x37AC9FA286925FB3(iVar2, "strtg");
	Global_1633501.f_42564 = unk_0x37AC9FA286925FB3(iVar2, "rcdam");
	Global_1633501.f_39441 = unk_0x43D5E279656505E4(iVar2, "rdis");
	Global_1633501.f_42560 = unk_0x37AC9FA286925FB3(iVar2, "gridty");
	Global_1633501.f_107580 = unk_0x917AA466A591DA1F(iVar2, "iprem");
	Global_1633501.f_107704 = unk_0x37AC9FA286925FB3(iVar2, "bsted");
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar4, "icpht", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		StringCopy(&(Global_1633501.f_107706[iVar0 /*6*/]), unk_0x12A8355C6ACDA29F(iVar2, &cVar4), 24);
		iVar0++;
	}
	iVar8 = unk_0x72C98FCC21DF47AA(iVar2, "chh");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar2, "chs");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar2, "chl");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar2, "sndchk");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar2, "sndrsp");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar2, "cpgrav");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar2, "cpgravdura");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar2, "cpwwt");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar2, "cppsst");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar2, "cpado");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar2, "cpados");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar2, "chttu");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar2, "chttr");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar2, "cpbs1");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar2, "rsp");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar2, "cdsblcu");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar2, "cpdss");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar2, "rndchk");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar2, "rndchks");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar2, "cpwtr");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar2, "cpwtrs");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar2, "cpair");
	if (Global_1633501.f_41912 == 8)
	{
		Global_1633501.f_41910 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_121(unk_0xFFFE2DE388037E54(iVar10, iVar0)))
			{
				Global_1633501.f_41910++;
			}
			iVar0++;
		}
		iVar3 = Global_1633501.f_41910;
	}
	iVar30 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1633501.f_41912 == 8)
			{
				iVar30 = func_193(iVar10, iVar30);
			}
			else
			{
				iVar30 = iVar0;
			}
			Global_1633501.f_37044[iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar10, iVar30) };
			Global_1633501.f_37255[iVar0] = unk_0x5EFB23FE1415D634(iVar8, iVar30);
			if (unk_0x4C58F55F20941087(iVar9, iVar30) == 3)
			{
				Global_1633501.f_39370[iVar0] = unk_0x5EFB23FE1415D634(iVar9, iVar30);
			}
			else
			{
				Global_1633501.f_39370[iVar0] = 1f;
			}
			if (Global_1633501.f_39370[iVar0] < 1f)
			{
				Global_1633501.f_39370[iVar0] = 1f;
			}
			Global_1633501.f_38098[iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar11, iVar30) };
			Global_1633501.f_38309[iVar0] = unk_0x5EFB23FE1415D634(iVar12, iVar30);
			Global_1633501.f_38380[iVar0] = unk_0xB6790B02AB53A81E(iVar13, iVar30);
			Global_1633501.f_38522[iVar0] = unk_0xB6790B02AB53A81E(iVar14, iVar30);
			Global_1633501.f_38451[iVar0] = unk_0xB6790B02AB53A81E(iVar15, iVar30);
			Global_1633501.f_38593[iVar0] = unk_0xB6790B02AB53A81E(iVar16, iVar30);
			Global_1633501.f_38664[iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar17, iVar30) };
			Global_1633501.f_38875[iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar18, iVar30) };
			Global_1633501.f_39086[iVar0] = unk_0xB6790B02AB53A81E(iVar19, iVar30);
			Global_1633501.f_39157[iVar0] = unk_0xB6790B02AB53A81E(iVar20, iVar30);
			Global_1633501.f_37326[iVar0] = unk_0xB6790B02AB53A81E(iVar21, iVar30);
			if (!unk_0x48B8265059381CD0(Global_1633501.f_37326[iVar0], 0))
			{
				if (unk_0x4C58F55F20941087(iVar22, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 5, unk_0x743A454C4B4C0325(iVar22, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar23, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 3, unk_0x743A454C4B4C0325(iVar23, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar24, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 6, unk_0x743A454C4B4C0325(iVar24, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar25, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 1, unk_0x743A454C4B4C0325(iVar25, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar26, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 2, unk_0x743A454C4B4C0325(iVar26, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar27, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 7, unk_0x743A454C4B4C0325(iVar27, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar28, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 8, unk_0x743A454C4B4C0325(iVar28, iVar30));
				}
				if (unk_0x4C58F55F20941087(iVar29, iVar30) == 1)
				{
					func_192(&(Global_1633501.f_37326[iVar0]), 9, unk_0x743A454C4B4C0325(iVar29, iVar30));
				}
				unk_0xEB79FECD9022AAF0(&(Global_1633501.f_37326[iVar0]), 0);
			}
			iVar30++;
		}
		iVar0++;
	}
	iVar31 = unk_0x72C98FCC21DF47AA(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_25 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0xB6790B02AB53A81E(iVar31, iVar0);
			Global_1633501.f_42574[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar32 = unk_0x72C98FCC21DF47AA(iVar2, "aveh");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		iVar1 = unk_0xB6790B02AB53A81E(iVar32, iVar0);
		Global_1633501.f_41920[iVar0] = iVar1;
		Global_1633501.f_41937[iVar0] = 0;
		Global_1633501.f_41937[iVar0] = unk_0xB6790B02AB53A81E(iVar33, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar43, "vspn", 8);
		StringIntConCat(&cVar43, iVar0, 8);
		uVar34[iVar0] = unk_0x72C98FCC21DF47AA(iVar2, &cVar43);
		iVar42 = 0;
		while (iVar42 <= iVar3)
		{
			Global_1633501.f_36343[iVar42 /*10*/][iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(uVar34[iVar0], iVar42) };
			iVar42++;
		}
		StringCopy(&cVar43, "vspns", 8);
		StringIntConCat(&cVar43, iVar0, 8);
		uVar38[iVar0] = unk_0x72C98FCC21DF47AA(iVar2, &cVar43);
		iVar42 = 0;
		while (iVar42 <= iVar3)
		{
			if (unk_0x4C58F55F20941087(uVar38[iVar0], iVar42) == 5)
			{
				Global_1633501.f_37397[iVar42 /*10*/][iVar0 /*3*/] = { unk_0xFFFE2DE388037E54(uVar38[iVar0], iVar42) };
			}
			else
			{
				Global_1633501.f_37397[iVar42 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar42++;
		}
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(uParam0, iParam1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(uParam0, iParam1);
	}
}

int func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_121(unk_0xFFFE2DE388037E54(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0x489F243BF1619568(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = unk_0x489F243BF1619568(iParam0, "otzone");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "otvo");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "otvt");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar1, "otbs");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar1, "otpg");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar1, "otrw");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar1, "otpl");
	if (unk_0x0481328AA6FEFDAB(iVar1, "otz") == 2)
	{
		Global_1633501.f_107725 = unk_0x37AC9FA286925FB3(iVar1, "otz");
	}
	else
	{
		Global_1633501.f_107725 = 0;
	}
	if (Global_1633501.f_107725 > 20)
	{
		Global_1633501.f_107725 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_107725 - 1))
	{
		Global_1633501.f_107726[iVar0 /*11*/][0 /*3*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
		Global_1633501.f_107726[iVar0 /*11*/][1 /*3*/] = { unk_0xFFFE2DE388037E54(iVar3, iVar0) };
		if (unk_0x4C58F55F20941087(iVar4, iVar0) == 2)
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_7 = unk_0xB6790B02AB53A81E(iVar4, iVar0);
		}
		else
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_7 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar5, iVar0) == 2)
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_8 = unk_0xB6790B02AB53A81E(iVar5, iVar0);
		}
		else
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_8 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_9 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		}
		else
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_9 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar7, iVar0) == 2)
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_10 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		}
		else
		{
			Global_1633501.f_107726[iVar0 /*11*/].f_10 = 0;
		}
		iVar0++;
	}
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x489F243BF1619568(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x489F243BF1619568(iParam0, "dhprop");
	Global_1633501.f_102694 = unk_0x37AC9FA286925FB3(iVar1, "no");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "pos");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "mn");
	if (Global_1633501.f_102694 > 25)
	{
		Global_1633501.f_102694 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_102694 - 1))
	{
		if (unk_0x4C58F55F20941087(iVar2, iVar0) == 5)
		{
			Global_1633501.f_102593[iVar0 /*4*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
			Global_1633501.f_102593[iVar0 /*4*/].f_3 = unk_0xB6790B02AB53A81E(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_196(int iParam0)
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
	
	if (unk_0x489F243BF1619568(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x489F243BF1619568(iParam0, "ddblip");
	Global_1633501.f_102592 = unk_0x37AC9FA286925FB3(iVar1, "no");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "pos");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "rule");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar1, "team");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar1, "type");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar1, "size");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar1, "veh");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar1, "clr");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar1, "bits");
	if (Global_1633501.f_102592 > 10)
	{
		Global_1633501.f_102592 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_102592 - 1))
	{
		if (unk_0x4C58F55F20941087(iVar2, iVar0) == 5)
		{
			Global_1633501.f_102491[iVar0 /*10*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
			Global_1633501.f_102491[iVar0 /*10*/].f_3 = unk_0xB6790B02AB53A81E(iVar3, iVar0);
			Global_1633501.f_102491[iVar0 /*10*/].f_4 = unk_0xB6790B02AB53A81E(iVar4, iVar0);
			Global_1633501.f_102491[iVar0 /*10*/].f_8 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
			Global_1633501.f_102491[iVar0 /*10*/].f_9 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		}
		if (unk_0x4C58F55F20941087(iVar5, iVar0) == 2)
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_6 = unk_0xB6790B02AB53A81E(iVar5, iVar0);
		}
		else
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_5 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		}
		else
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x4C58F55F20941087(iVar7, iVar0) == 2)
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_7 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		}
		else
		{
			Global_1633501.f_102491[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_197(int iParam0)
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
	
	if (unk_0x489F243BF1619568(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x489F243BF1619568(iParam0, "mocap");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar5, "name");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar5, "bits");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar5, "bits2");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar5, "timer");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar5, "rng");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar5, "ccp");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar5, "ccr");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar5, "ccs");
	iVar62 = unk_0x72C98FCC21DF47AA(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x4C58F55F20941087(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1633501.f_99511[iVar0 /*434*/]), unk_0xC250F19D1D16764D(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_99511[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x4C58F55F20941087(iVar7, iVar0) == 2)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_16 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar8, iVar0) == 2)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_17 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar62, iVar0) == 2)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_424 = unk_0xB6790B02AB53A81E(iVar62, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar9, iVar0) == 2)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_61 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar10, iVar0) == 2)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_62 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar11, iVar0) == 5)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_54 = { unk_0xFFFE2DE388037E54(iVar11, iVar0) };
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x4C58F55F20941087(iVar12, iVar0) == 3)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_60 = unk_0x5EFB23FE1415D634(iVar12, iVar0);
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar13, iVar0) == 5)
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_57 = { unk_0xFFFE2DE388037E54(iVar13, iVar0) };
		}
		else
		{
			Global_1633501.f_99511[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x72C98FCC21DF47AA(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x4C58F55F20941087(uVar14[iVar0], iVar1) == 5)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar20[iVar0], iVar1) == 5)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar26[iVar0], iVar1) == 3)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_44[iVar1] = unk_0x5EFB23FE1415D634(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar32[iVar0], iVar1) == 3)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_49[iVar1] = unk_0x5EFB23FE1415D634(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x4C58F55F20941087(uVar63[iVar0], iVar2) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_425[iVar2] = unk_0xB6790B02AB53A81E(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x4C58F55F20941087(uVar69[iVar0], iVar2) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_430[iVar2] = unk_0xB6790B02AB53A81E(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar75[iVar0], iVar2) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_432[iVar2] = unk_0xB6790B02AB53A81E(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x4C58F55F20941087(uVar38[iVar0], iVar1) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0xB6790B02AB53A81E(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x4C58F55F20941087(uVar44[iVar0], iVar1) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0xB6790B02AB53A81E(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x4C58F55F20941087(uVar50[iVar0], iVar1) == 2)
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0xB6790B02AB53A81E(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x4C58F55F20941087(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xC250F19D1D16764D(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1633501.f_99511[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_198(int iParam0)
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
	var uVar161[5];
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	
	if (unk_0x489F243BF1619568(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x489F243BF1619568(iParam0, "cuts");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar4, "name");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar4, "bits");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar4, "shot");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar4, "anim");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar4, "midp");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar4, "rng");
	iVar167 = unk_0x72C98FCC21DF47AA(iVar4, "train");
	iVar168 = unk_0x72C98FCC21DF47AA(iVar4, "trahl");
	iVar169 = unk_0x72C98FCC21DF47AA(iVar4, "traou");
	iVar170 = unk_0x72C98FCC21DF47AA(iVar4, "trapo");
	iVar171 = unk_0x72C98FCC21DF47AA(iVar4, "ccp");
	iVar172 = unk_0x72C98FCC21DF47AA(iVar4, "ccr");
	iVar173 = unk_0x72C98FCC21DF47AA(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x4C58F55F20941087(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/]), unk_0xC250F19D1D16764D(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/]), "", 16);
		}
		if (unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_4 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_4 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_5 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_5 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar7, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_48 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_48 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar8, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_47 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_47 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar9, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_49 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_49 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar10, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_740 = unk_0xB6790B02AB53A81E(iVar10, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_740 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar171, iVar0) == 5)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_733 = { unk_0xFFFE2DE388037E54(iVar171, iVar0) };
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_733 = { 0f, 0f, 0f };
		}
		if (unk_0x4C58F55F20941087(iVar172, iVar0) == 3)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_736 = unk_0x5EFB23FE1415D634(iVar172, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_736 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar173, iVar0) == 5)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_737 = { unk_0xFFFE2DE388037E54(iVar173, iVar0) };
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_737 = { 0f, 0f, 0f };
		}
		if (unk_0x4C58F55F20941087(iVar167, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_441 = unk_0xB6790B02AB53A81E(iVar167, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_441 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar168, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_443 = unk_0xB6790B02AB53A81E(iVar168, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_443 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar169, iVar0) == 2)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_442 = unk_0xB6790B02AB53A81E(iVar169, iVar0);
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_442 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar170, iVar0) == 5)
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_444 = { unk_0xFFFE2DE388037E54(iVar170, iVar0) };
		}
		else
		{
			Global_1633501.f_93140[iVar0 /*1274*/].f_444 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "svwi", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar161[iVar0] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x4C58F55F20941087(uVar95[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_6[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar101[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_19[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar89[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_32[iVar1] = unk_0x5EFB23FE1415D634(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_32[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar107[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_37[iVar1] = unk_0x5EFB23FE1415D634(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_37[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar113[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_42[iVar1] = unk_0xB6790B02AB53A81E(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x4C58F55F20941087(uVar11[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_50[iVar1] = unk_0xB6790B02AB53A81E(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_50[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar17[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_71[iVar1] = unk_0xB6790B02AB53A81E(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_71[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar23[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_92[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_92[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar29[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_153[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_153[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar35[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_214[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_214[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar41[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_275[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_275[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar47[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_336[iVar1] = unk_0x5EFB23FE1415D634(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_336[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar53[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_357[iVar1] = unk_0x5EFB23FE1415D634(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_357[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar71[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_378[iVar1] = unk_0xB6790B02AB53A81E(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_378[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar77[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_399[iVar1] = unk_0xB6790B02AB53A81E(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_399[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar83[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_420[iVar1] = unk_0x5EFB23FE1415D634(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_420[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar119[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_529[iVar1] = unk_0xB6790B02AB53A81E(uVar119[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_529[iVar1] = 0;
			}
			if (unk_0x4C58F55F20941087(uVar125[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_550[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_550[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar131[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_611[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar131[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_611[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar137[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_672[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar137[iVar0], iVar1) };
				Global_1633501.f_102738[iVar1] = Global_1633501.f_93140[iVar0 /*1274*/].f_672[iVar1 /*3*/];
				Global_1633501.f_102759[iVar1] = Global_1633501.f_93140[iVar0 /*1274*/].f_672[iVar1 /*3*/].f_1;
				Global_1633501.f_102780[iVar1] = Global_1633501.f_93140[iVar0 /*1274*/].f_672[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_672[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar143[iVar0], iVar1) == 5)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_447[iVar1 /*3*/] = { unk_0xFFFE2DE388037E54(uVar143[iVar0], iVar1) };
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_447[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x4C58F55F20941087(uVar149[iVar0], iVar1) == 3)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_508[iVar1] = unk_0x5EFB23FE1415D634(uVar149[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_508[iVar1] = 0f;
			}
			if (unk_0x4C58F55F20941087(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/].f_1112[iVar1 /*4*/]), unk_0xC250F19D1D16764D(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/].f_1112[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x4C58F55F20941087(uVar161[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/].f_1193[iVar1 /*4*/]), unk_0xC250F19D1D16764D(uVar161[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1633501.f_93140[iVar0 /*1274*/].f_1193[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x4C58F55F20941087(uVar59[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_741[iVar1 /*12*/].f_1 = unk_0xB6790B02AB53A81E(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_741[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x4C58F55F20941087(uVar65[iVar0], iVar1) == 2)
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_741[iVar1 /*12*/] = unk_0xB6790B02AB53A81E(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1633501.f_93140[iVar0 /*1274*/].f_741[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_199(int iParam0)
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
	
	if (unk_0x489F243BF1619568(iParam0, "eoir") == 0 || unk_0x489F243BF1619568(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x72C98FCC21DF47AA(iParam0, "eoid");
	iVar9 = unk_0x72C98FCC21DF47AA(iParam0, "eoet");
	iVar10 = unk_0x489F243BF1619568(iParam0, "eoir");
	iVar11 = unk_0x489F243BF1619568(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x4C58F55F20941087(iVar8, iVar0) == 2)
		{
			Global_1633501.f_85094[iVar0] = unk_0xB6790B02AB53A81E(iVar8, iVar0);
		}
		else
		{
			Global_1633501.f_85094[iVar0] = -1;
		}
		if (unk_0x4C58F55F20941087(iVar9, iVar0) == 2)
		{
			Global_1633501.f_85063[iVar0] = unk_0xB6790B02AB53A81E(iVar9, iVar0);
		}
		else
		{
			Global_1633501.f_85063[iVar0] = -1;
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
				if (unk_0x0481328AA6FEFDAB(iVar10, &cVar4) == 2)
				{
					Global_1633501.f_85125[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x37AC9FA286925FB3(iVar10, &cVar4);
				}
				else
				{
					Global_1633501.f_85125[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x0481328AA6FEFDAB(iVar11, &cVar4) == 2)
				{
					Global_1633501.f_86656[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x37AC9FA286925FB3(iVar11, &cVar4);
				}
				else
				{
					Global_1633501.f_85125[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1633501.f_85094[iVar0];
		iVar13 = Global_1633501.f_85063[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1633501.f_85094[iVar3] == iVar12) && Global_1633501.f_85063[iVar3] == iVar13)
				{
					Global_1633501.f_85063[iVar3] = -1;
					Global_1633501.f_85094[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 9)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1633501.f_85125[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							Global_1633501.f_86656[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
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

void func_200(int iParam0)
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
	
	iVar4 = unk_0x489F243BF1619568(iParam0, "kill");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar4, "no");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar4, "mcp");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1633501.f_41899[iVar1] = unk_0xB6790B02AB53A81E(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1633501.f_41899[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1633501.f_41405[iVar0 /*29*/][iVar1] = unk_0xB6790B02AB53A81E(uVar8[iVar1], iVar0);
					Global_1633501.f_41405[iVar0 /*29*/].f_5[iVar1] = unk_0xB6790B02AB53A81E(uVar13[iVar1], iVar0);
					if (Global_1633501.f_41405[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1633501.f_41405[iVar0 /*29*/].f_10[iVar1] = unk_0xB6790B02AB53A81E(uVar18[iVar1], iVar0);
					if (unk_0x4C58F55F20941087(uVar23[iVar1], iVar0) == 2)
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_15[iVar1] = unk_0xB6790B02AB53A81E(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x4C58F55F20941087(uVar28[iVar1], iVar0) == 2)
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_20[iVar1] = unk_0xB6790B02AB53A81E(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x4C58F55F20941087(iVar6, iVar0) == 2)
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_28 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
					}
					else
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x4C58F55F20941087(iVar7, iVar0) == 2)
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_27 = unk_0xB6790B02AB53A81E(iVar7, iVar0);
					}
					else
					{
						Global_1633501.f_41405[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_201(int iParam0)
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
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	
	iVar4 = unk_0x489F243BF1619568(iParam0, "goto");
	Global_1633501.f_41905[0] = unk_0x37AC9FA286925FB3(iVar4, "no");
	Global_1633501.f_6 = unk_0x37AC9FA286925FB3(iVar4, "atrig");
	iVar80 = unk_0x72C98FCC21DF47AA(iVar4, "lmcp");
	iVar81 = unk_0x72C98FCC21DF47AA(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0x72C98FCC21DF47AA(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1633501.f_41905[0] - 1))
			{
				Global_1633501.f_39442[iVar0 /*109*/].f_1[0 /*3*/] = { unk_0xFFFE2DE388037E54(uVar5[iVar1], iVar0) };
				Global_1633501.f_39442[iVar0 /*109*/].f_14[0] = unk_0x5EFB23FE1415D634(uVar10[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_62[iVar1] = unk_0xB6790B02AB53A81E(uVar15[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_67[iVar1] = unk_0xB6790B02AB53A81E(uVar20[iVar1], iVar0);
				if (Global_1633501.f_39442[iVar0 /*109*/].f_67[iVar1] == -1)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_67[iVar1] = 99999;
				}
				Global_1633501.f_39442[iVar0 /*109*/].f_72[iVar1] = unk_0xB6790B02AB53A81E(uVar25[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_48[iVar1] = unk_0x5EFB23FE1415D634(uVar60[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_77[iVar1] = unk_0xB6790B02AB53A81E(uVar30[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_36[iVar1] = unk_0xB6790B02AB53A81E(uVar35[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_53 = unk_0xB6790B02AB53A81E(uVar50[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_31[0] = unk_0xB6790B02AB53A81E(uVar40[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_41[0] = unk_0xB6790B02AB53A81E(uVar45[iVar1], iVar0);
				Global_1633501.f_39442[iVar0 /*109*/].f_98 = unk_0x5EFB23FE1415D634(uVar55[iVar1], iVar0);
				if (unk_0x4C58F55F20941087(iVar80, iVar0) == 2)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_94 = unk_0xB6790B02AB53A81E(iVar80, iVar0);
				}
				else
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_94 = -1;
				}
				if (unk_0x4C58F55F20941087(iVar81, iVar0) == 2)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_95 = unk_0xB6790B02AB53A81E(iVar81, iVar0);
				}
				else
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_95 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar65[iVar1], iVar0) == 2)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_57[iVar1] = unk_0xB6790B02AB53A81E(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_57[iVar1] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar70[iVar1], iVar0) == 2)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_82[iVar1] = unk_0xB6790B02AB53A81E(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_82[iVar1] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar75[iVar1], iVar0) == 2)
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_87[iVar1] = unk_0xB6790B02AB53A81E(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1633501.f_39442[iVar0 /*109*/].f_87[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0x72C98FCC21DF47AA(iVar4, "locbc");
	iVar83 = unk_0x72C98FCC21DF47AA(iVar4, "loc2rd");
	iVar84 = unk_0x72C98FCC21DF47AA(iVar4, "loclbr");
	iVar85 = unk_0x72C98FCC21DF47AA(iVar4, "locdir");
	iVar86 = unk_0x72C98FCC21DF47AA(iVar4, "loctol");
	iVar87 = unk_0x72C98FCC21DF47AA(iVar4, "lochgt");
	iVar88 = unk_0x72C98FCC21DF47AA(iVar4, "locart");
	iVar89 = unk_0x72C98FCC21DF47AA(iVar4, "locaa1");
	iVar90 = unk_0x72C98FCC21DF47AA(iVar4, "locaa2");
	iVar91 = unk_0x72C98FCC21DF47AA(iVar4, "locaaw");
	iVar92 = unk_0x72C98FCC21DF47AA(iVar4, "nmpass");
	iVar93 = unk_0x72C98FCC21DF47AA(iVar4, "nmfail");
	iVar94 = unk_0x72C98FCC21DF47AA(iVar4, "locstd");
	iVar95 = unk_0x72C98FCC21DF47AA(iVar4, "locstm");
	iVar96 = unk_0x72C98FCC21DF47AA(iVar4, "lcbs2");
	iVar97 = unk_0x72C98FCC21DF47AA(iVar4, "locti");
	iVar98 = unk_0x72C98FCC21DF47AA(iVar4, "locgc");
	iVar99 = unk_0x72C98FCC21DF47AA(iVar4, "loclto");
	iVar100 = unk_0x72C98FCC21DF47AA(iVar4, "loctmw");
	iVar101 = unk_0x72C98FCC21DF47AA(iVar4, "loctmt");
	iVar102 = unk_0x72C98FCC21DF47AA(iVar4, "loctst");
	iVar103 = unk_0x72C98FCC21DF47AA(iVar4, "locpro");
	iVar104 = unk_0x72C98FCC21DF47AA(iVar4, "locloo");
	iVar105 = unk_0x72C98FCC21DF47AA(iVar4, "loccors");
	iVar106 = unk_0x72C98FCC21DF47AA(iVar4, "lochght");
	iVar107 = unk_0x72C98FCC21DF47AA(iVar4, "locdpth");
	iVar108 = unk_0x72C98FCC21DF47AA(iVar4, "locbso");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_41905[0] - 1))
	{
		if (unk_0x4C58F55F20941087(iVar82, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_46 = unk_0xB6790B02AB53A81E(iVar82, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_46 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar83, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_20 = unk_0x5EFB23FE1415D634(iVar83, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_20 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar84, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_19 = unk_0x5EFB23FE1415D634(iVar84, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_19 = 1f;
		}
		if (unk_0x4C58F55F20941087(iVar85, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_28 = unk_0x5EFB23FE1415D634(iVar85, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_28 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar86, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_29 = unk_0x5EFB23FE1415D634(iVar86, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_29 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar87, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_30 = unk_0x5EFB23FE1415D634(iVar87, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_30 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar97, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_55 = unk_0x5EFB23FE1415D634(iVar97, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_55 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar98, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_56 = unk_0x5EFB23FE1415D634(iVar98, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_56 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar88, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/] = unk_0xB6790B02AB53A81E(iVar88, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/] = 0;
		}
		if (unk_0x4C58F55F20941087(iVar92, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_92 = unk_0xB6790B02AB53A81E(iVar92, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_92 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar93, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_93 = unk_0xB6790B02AB53A81E(iVar93, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_93 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar94, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_97 = unk_0x5EFB23FE1415D634(iVar94, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_97 = 10.5f;
		}
		if (unk_0x4C58F55F20941087(iVar106, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_99 = unk_0x5EFB23FE1415D634(iVar106, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_99 = 1f;
		}
		if (unk_0x4C58F55F20941087(iVar107, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_100 = unk_0x5EFB23FE1415D634(iVar107, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_100 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar95, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_96 = unk_0xB6790B02AB53A81E(iVar95, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_96 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar96, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_54 = unk_0xB6790B02AB53A81E(iVar96, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_54 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar104, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_102 = unk_0xB6790B02AB53A81E(iVar104, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_102 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar105, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_47 = unk_0xB6790B02AB53A81E(iVar105, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_47 = 0;
		}
		if (unk_0x4C58F55F20941087(iVar99, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_103 = unk_0x5EFB23FE1415D634(iVar99, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_103 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar100, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_104 = unk_0x5EFB23FE1415D634(iVar100, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_104 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar101, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_105 = unk_0x5EFB23FE1415D634(iVar101, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_105 = 0f;
		}
		if (unk_0x4C58F55F20941087(iVar102, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_106 = unk_0xB6790B02AB53A81E(iVar102, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_106 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar103, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_108 = unk_0xB6790B02AB53A81E(iVar103, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_108 = -1;
		}
		if (unk_0x4C58F55F20941087(iVar108, iVar0) == 2)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_101 = unk_0xB6790B02AB53A81E(iVar108, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_101 = 0;
		}
		if ((unk_0x4C58F55F20941087(iVar89, iVar0) == 5 && unk_0x4C58F55F20941087(iVar90, iVar0) == 5) && unk_0x4C58F55F20941087(iVar91, iVar0) == 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_21 = { unk_0xFFFE2DE388037E54(iVar89, iVar0) };
			Global_1633501.f_39442[iVar0 /*109*/].f_24 = { unk_0xFFFE2DE388037E54(iVar90, iVar0) };
			Global_1633501.f_39442[iVar0 /*109*/].f_27 = unk_0x5EFB23FE1415D634(iVar91, iVar0);
		}
		else
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_21 = { 0f, 0f, 0f };
			Global_1633501.f_39442[iVar0 /*109*/].f_24 = { 0f, 0f, 0f };
			Global_1633501.f_39442[iVar0 /*109*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x0481328AA6FEFDAB(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x489F243BF1619568(iParam0, "cover");
		Global_1633501.f_44879 = unk_0x37AC9FA286925FB3(iVar1, "no");
		iVar2 = unk_0x72C98FCC21DF47AA(iVar1, "loc");
		iVar3 = unk_0x72C98FCC21DF47AA(iVar1, "dir");
		iVar4 = unk_0x72C98FCC21DF47AA(iVar1, "use");
		iVar5 = unk_0x72C98FCC21DF47AA(iVar1, "high");
		iVar6 = unk_0x72C98FCC21DF47AA(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1633501.f_44879 - 1))
		{
			Global_1633501.f_44880[iVar0 /*7*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar0) };
			Global_1633501.f_44880[iVar0 /*7*/].f_3 = unk_0x5EFB23FE1415D634(iVar3, iVar0);
			Global_1633501.f_44880[iVar0 /*7*/].f_4 = unk_0xB6790B02AB53A81E(iVar4, iVar0);
			Global_1633501.f_44880[iVar0 /*7*/].f_5 = unk_0xB6790B02AB53A81E(iVar5, iVar0);
			Global_1633501.f_44880[iVar0 /*7*/].f_6 = unk_0xB6790B02AB53A81E(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_203(int iParam0)
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
	
	iVar2 = unk_0x489F243BF1619568(iParam0, "door");
	Global_1633501.f_44592 = unk_0x37AC9FA286925FB3(iVar2, "no");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar2, "loc");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar2, "fopen");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar2, "model");
	uVar6 = unk_0x72C98FCC21DF47AA(iVar2, "lock");
	uVar7 = unk_0x72C98FCC21DF47AA(iVar2, "swing");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar2, "udrle");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar2, "udtem");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar2, "udrat");
	uVar11 = unk_0x72C98FCC21DF47AA(iVar2, "swingu");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar2, "audst");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar2, "aurt");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar2, "uaudst");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar2, "uaurt");
	uVar16 = unk_0x72C98FCC21DF47AA(iVar2, "lfp");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar2, "dtime");
	uVar18 = unk_0x72C98FCC21DF47AA(iVar2, "mid");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1633501.f_44592 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1633501.f_44593[iVar0 /*19*/] = { unk_0xFFFE2DE388037E54(iVar3, iVar0) };
			Global_1633501.f_44593[iVar0 /*19*/].f_3 = unk_0x5EFB23FE1415D634(iVar4, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_14 = unk_0x743A454C4B4C0325(uVar6, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_15 = unk_0x743A454C4B4C0325(uVar7, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_5 = unk_0xB6790B02AB53A81E(iVar8, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_6 = unk_0xB6790B02AB53A81E(iVar9, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_13 = unk_0x5EFB23FE1415D634(iVar10, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_16 = unk_0x743A454C4B4C0325(uVar11, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_8 = unk_0x5EFB23FE1415D634(iVar13, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_9 = unk_0x5EFB23FE1415D634(iVar12, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_10 = unk_0x5EFB23FE1415D634(iVar15, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_11 = unk_0x5EFB23FE1415D634(iVar14, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_12 = unk_0x743A454C4B4C0325(uVar16, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_18 = unk_0xB6790B02AB53A81E(iVar19, iVar0);
			iVar1 = unk_0xB6790B02AB53A81E(iVar5, iVar0);
			Global_1633501.f_44593[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x4C58F55F20941087(iVar17, iVar0) == 2)
			{
				Global_1633501.f_44593[iVar0 /*19*/].f_7 = unk_0xB6790B02AB53A81E(iVar17, iVar0);
			}
			else
			{
				Global_1633501.f_44593[iVar0 /*19*/].f_7 = 0;
			}
			Global_1633501.f_44593[iVar0 /*19*/].f_17 = unk_0x743A454C4B4C0325(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	var uVar127[4];
	var uVar132[4];
	var uVar137[4];
	var uVar142[4];
	var uVar147[4];
	var uVar152[4];
	var uVar157[4];
	var uVar162[4];
	var uVar167[4];
	var uVar172[4];
	var uVar177[4];
	var uVar182[4];
	var uVar187[4];
	var uVar192[4];
	var uVar197[4];
	var uVar202[4];
	var uVar207[4];
	var uVar212[4];
	var uVar217[4];
	var uVar222[4];
	var uVar227[4];
	var uVar232[4];
	var uVar237[4];
	var uVar242[4];
	var uVar247[4];
	var uVar252[4];
	var uVar257[4];
	var uVar262[4];
	var uVar267[4];
	var uVar272[4];
	var uVar277[4];
	var uVar282[4];
	var uVar287[4];
	var uVar292[4];
	struct<16> Var297;
	var uVar362[4];
	var uVar367[4];
	var uVar372[4];
	var uVar377[4];
	var uVar382[4];
	var uVar387[4];
	var uVar392[4];
	var uVar397[4];
	var uVar402[4];
	var uVar407[4];
	var uVar412[4];
	var uVar417[4];
	var uVar422[4];
	var uVar427[4];
	var uVar432[4];
	var uVar437[4];
	var uVar442[4];
	var uVar447[4];
	var uVar452[4];
	var uVar457[4];
	int iVar462;
	int iVar463;
	int iVar464;
	int iVar465;
	int iVar466;
	
	iVar0 = unk_0x489F243BF1619568(*iParam0, "endcon");
	Var297 = 4;
	Var297.f_1 = 15;
	Var297.f_1.f_16 = 15;
	Var297.f_1.f_16.f_16 = 15;
	Var297.f_1.f_16.f_16.f_16 = 15;
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmri", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			iVar462 = 0;
			while (iVar462 <= 14)
			{
				StringCopy(&cVar3, "hlm", 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar462, 16);
				Var297[iVar1 /*16*/][iVar462] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
				iVar462++;
			}
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar362[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar367[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar392[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar372[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar377[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar382[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar387[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar397[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar402[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar442[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar447[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar452[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar457[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar407[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar412[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "mgdm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar417[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rorcp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar422[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rodp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar427[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rodpt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar432[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			StringCopy(&cVar3, "rotes", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar437[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar3);
			iVar463 = 0;
			while (iVar463 <= 69)
			{
				if (unk_0x4C58F55F20941087(uVar7[iVar1], iVar463) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_62[iVar463] = unk_0xB6790B02AB53A81E(uVar7[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_62[iVar463] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar12[iVar1], iVar463) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_210[iVar463] = unk_0xB6790B02AB53A81E(uVar12[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_210[iVar463] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar17[iVar1], iVar463) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_357[iVar463] = unk_0xB6790B02AB53A81E(uVar17[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_357[iVar463] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar22[iVar1], iVar463) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_133[iVar463] = unk_0x5EFB23FE1415D634(uVar22[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_133[iVar463] = 1f;
				}
				if (unk_0x4C58F55F20941087(uVar27[iVar1], iVar463) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_281[iVar463] = unk_0x5EFB23FE1415D634(uVar27[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_281[iVar463] = 1f;
				}
				if (unk_0x4C58F55F20941087(uVar32[iVar1], iVar463) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_428[iVar463] = unk_0x5EFB23FE1415D634(uVar32[iVar1], iVar463);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_428[iVar463] = 1f;
				}
				iVar463++;
			}
			iVar464 = 0;
			while (iVar464 <= 3)
			{
				if (unk_0x4C58F55F20941087(uVar37[iVar1], iVar464) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_501[iVar464] = unk_0xB6790B02AB53A81E(uVar37[iVar1], iVar464);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_501[iVar464] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar42[iVar1], iVar464) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_506[iVar464] = unk_0xB6790B02AB53A81E(uVar42[iVar1], iVar464);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_506[iVar464] = -1;
				}
				iVar464++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_1633501.f_92[iVar1 /*8637*/].f_57 - 1))
			{
				if (uVar47[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2452[iVar2 /*3*/] = { unk_0xFFFE2DE388037E54(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2452[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar52[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2504[iVar2] = unk_0x5EFB23FE1415D634(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2504[iVar2] = 0f;
				}
				if (uVar57[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8166[iVar2] = unk_0xB6790B02AB53A81E(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8166[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar62[iVar1], iVar2) == 2 && Global_1633501.f_2 != 6)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8184[iVar2] = unk_0xB6790B02AB53A81E(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8184[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar67[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8202[iVar2] = unk_0xB6790B02AB53A81E(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8202[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar72[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8382[iVar2] = unk_0xB6790B02AB53A81E(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8382[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar77[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8400[iVar2] = unk_0xB6790B02AB53A81E(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8400[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar82[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8418[iVar2] = unk_0xB6790B02AB53A81E(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8418[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar87[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8436[iVar2] = unk_0xB6790B02AB53A81E(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8436[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar92[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8220[iVar2] = unk_0xB6790B02AB53A81E(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8220[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar97[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8238[iVar2] = unk_0xB6790B02AB53A81E(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8238[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar102[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8292[iVar2] = unk_0xB6790B02AB53A81E(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8292[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar107[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8310[iVar2] = unk_0xB6790B02AB53A81E(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8310[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar112[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3447[iVar2] = unk_0xB6790B02AB53A81E(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3447[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar117[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3465[iVar2] = unk_0xB6790B02AB53A81E(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3465[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar122[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3483[iVar2] = unk_0xB6790B02AB53A81E(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3483[iVar2] = 10;
				}
				if (unk_0x4C58F55F20941087(uVar127[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3501[iVar2] = unk_0xB6790B02AB53A81E(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3501[iVar2] = 10;
				}
				if (unk_0x4C58F55F20941087(uVar147[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8601[iVar2] = unk_0xB6790B02AB53A81E(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8601[iVar2] = 10;
				}
				if (unk_0x4C58F55F20941087(uVar152[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8619[iVar2] = unk_0xB6790B02AB53A81E(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8619[iVar2] = 10;
				}
				if (unk_0x4C58F55F20941087(uVar132[iVar1], iVar2) == 2)
				{
					iVar465 = unk_0xB6790B02AB53A81E(uVar132[iVar1], iVar2);
					if (iVar465 > 0)
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_8256[iVar2] = iVar465;
					}
					else
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_8256[iVar2] = 0;
					}
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8256[iVar2] = 0;
				}
				if (uVar137[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8274[iVar2] = unk_0xB6790B02AB53A81E(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8274[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar142[iVar1], iVar2) == 2)
				{
					if (unk_0xB6790B02AB53A81E(uVar142[iVar1], iVar2) > 1)
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_3577[iVar2] = unk_0xB6790B02AB53A81E(uVar142[iVar1], iVar2);
					}
					else
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_3577[iVar2] = 1;
					}
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3577[iVar2] = 1;
				}
				if (unk_0x4C58F55F20941087(uVar157[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3303[iVar2] = unk_0xB6790B02AB53A81E(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3303[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar162[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3375[iVar2] = unk_0xB6790B02AB53A81E(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3375[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar167[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3321[iVar2] = unk_0xB6790B02AB53A81E(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3321[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar172[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3339[iVar2] = unk_0xB6790B02AB53A81E(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3339[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar177[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3357[iVar2] = unk_0xB6790B02AB53A81E(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3357[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar182[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3393[iVar2] = unk_0xB6790B02AB53A81E(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3393[iVar2] = 4;
				}
				if (unk_0x4C58F55F20941087(uVar187[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3411[iVar2] = unk_0xB6790B02AB53A81E(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3411[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar192[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3429[iVar2] = unk_0xB6790B02AB53A81E(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3429[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar197[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/] = unk_0x5EFB23FE1415D634(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar202[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/].f_1 = unk_0xB6790B02AB53A81E(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/].f_1 = 1;
				}
				if (unk_0x4C58F55F20941087(uVar207[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/].f_2 = unk_0xB6790B02AB53A81E(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2847[iVar2 /*3*/].f_2 = 50;
				}
				if (unk_0x4C58F55F20941087(uVar212[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/] = unk_0x5EFB23FE1415D634(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar217[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[0] = unk_0x5EFB23FE1415D634(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[0] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar222[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[1] = unk_0x5EFB23FE1415D634(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[1] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar227[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[2] = unk_0x5EFB23FE1415D634(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[2] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar232[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[3] = unk_0x5EFB23FE1415D634(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_1[3] = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar237[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_6 = unk_0x5EFB23FE1415D634(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_6 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar242[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_7 = unk_0x5EFB23FE1415D634(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_7 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar247[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_8 = unk_0x5EFB23FE1415D634(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_8 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar252[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_9 = unk_0x5EFB23FE1415D634(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_9 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar257[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_10 = unk_0x5EFB23FE1415D634(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2659[iVar2 /*11*/].f_10 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar262[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/] = unk_0xB6790B02AB53A81E(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar267[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_1 = unk_0xB6790B02AB53A81E(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_1 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar272[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_2 = unk_0xB6790B02AB53A81E(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_2 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar277[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_3 = unk_0xB6790B02AB53A81E(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2899[iVar2 /*4*/].f_3 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar282[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/] = unk_0xB6790B02AB53A81E(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar292[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/].f_2 = unk_0xB6790B02AB53A81E(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/].f_2 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar287[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/].f_1 = unk_0xB6790B02AB53A81E(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2968[iVar2 /*3*/].f_1 = 0;
				}
				iVar466 = 0;
				iVar466 = 0;
				while (iVar466 <= 14)
				{
					if (unk_0x4C58F55F20941087(Var297[iVar1 /*16*/][iVar466], iVar2) == 2)
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_3020[iVar2 /*16*/][iVar466] = unk_0xB6790B02AB53A81E(Var297[iVar1 /*16*/][iVar466], iVar2);
					}
					else
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_3020[iVar2 /*16*/][iVar466] = 0;
					}
					iVar466++;
				}
				if (unk_0x4C58F55F20941087(uVar442[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_675[iVar2] = unk_0xB6790B02AB53A81E(uVar442[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_675[iVar2] = 12;
				}
				if (unk_0x4C58F55F20941087(uVar447[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_693[iVar2] = unk_0xB6790B02AB53A81E(uVar447[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_693[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar452[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_711[iVar2] = unk_0xB6790B02AB53A81E(uVar452[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_711[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar457[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_729[iVar2] = unk_0xB6790B02AB53A81E(uVar457[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_729[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar362[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/] = unk_0xB6790B02AB53A81E(uVar362[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/] = 1000;
				}
				if (unk_0x4C58F55F20941087(uVar367[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_1 = unk_0x5EFB23FE1415D634(uVar367[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_1 = 1.15f;
				}
				if (unk_0x4C58F55F20941087(uVar392[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_6 = unk_0x5EFB23FE1415D634(uVar392[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_6 = 10f;
				}
				if (unk_0x4C58F55F20941087(uVar372[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_2 = unk_0xB6790B02AB53A81E(uVar372[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_2 = 25;
				}
				if (unk_0x4C58F55F20941087(uVar377[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_7 = unk_0xB6790B02AB53A81E(uVar377[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_7 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar382[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_3 = unk_0xB6790B02AB53A81E(uVar382[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_3 = 1;
				}
				if (unk_0x4C58F55F20941087(uVar387[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_5 = unk_0xB6790B02AB53A81E(uVar387[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_2522[iVar2 /*8*/].f_5 = 25;
				}
				if (unk_0x4C58F55F20941087(uVar397[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_511[iVar2] = unk_0xB6790B02AB53A81E(uVar397[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_511[iVar2] = 5;
				}
				if (unk_0x4C58F55F20941087(uVar402[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_529[iVar2] = unk_0xB6790B02AB53A81E(uVar402[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_529[iVar2] = 20;
				}
				if (unk_0x4C58F55F20941087(uVar407[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_747[iVar2] = unk_0xB6790B02AB53A81E(uVar407[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_747[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar412[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_765[iVar2] = unk_0xB6790B02AB53A81E(uVar412[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_765[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar417[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_783[iVar2] = unk_0xB6790B02AB53A81E(uVar417[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_783[iVar2] = 100;
				}
				if (unk_0x4C58F55F20941087(uVar422[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8475[iVar2] = unk_0xB6790B02AB53A81E(uVar422[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8475[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar427[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_801[iVar2] = unk_0xB6790B02AB53A81E(uVar427[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_801[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar432[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_819[iVar2] = unk_0xB6790B02AB53A81E(uVar432[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_819[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar437[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_837[iVar2] = unk_0xB6790B02AB53A81E(uVar437[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_837[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_205(int iParam0)
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
	var uVar315[4];
	var uVar320[4];
	var uVar325[4];
	var uVar330[4];
	var uVar335[4];
	var uVar340[4];
	var uVar345[4];
	var uVar350[4];
	var uVar355[4];
	var uVar360[4];
	var uVar365[4];
	var uVar370[4];
	var uVar375[4];
	struct<5> Var380;
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
	int iVar766;
	int iVar767;
	
	iVar0 = unk_0x489F243BF1619568(*iParam0, "endcon");
	Var380 = 4;
	Var380.f_1 = 4;
	Var380.f_1.f_5 = 4;
	Var380.f_1.f_5.f_5 = 4;
	Var380.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar310[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar305[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dsosui", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "dops", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar245[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs6", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar250[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs7", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar255[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs8", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs9", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar315[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "ivms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar320[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "ivmsh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar325[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "isvmg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar330[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "isvro", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar335[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "isvhr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar340[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "irfbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar270[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar275[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar370[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar375[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "hdmfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar345[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar280[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar285[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar290[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar295[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar350[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar355[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar360[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar365[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2t", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar716[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar726[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar731[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar736[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar741[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2mm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar746[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar751[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar756[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar761[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar721[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outbt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outclo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outclr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outmm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var380[iVar1 /*5*/][iVar3] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar401[iVar3] = unk_0x72C98FCC21DF47AA(iVar0, &cVar4);
				iVar3++;
			}
			iVar766 = unk_0x72C98FCC21DF47AA(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1633501.f_92[iVar1 /*8637*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_603[iVar2] = unk_0xB6790B02AB53A81E(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_603[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar20[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_621[iVar2] = unk_0xB6790B02AB53A81E(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_621[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3523[iVar2] = unk_0xB6790B02AB53A81E(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3523[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3595[iVar2] = unk_0xB6790B02AB53A81E(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3595[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3613[iVar2] = unk_0xB6790B02AB53A81E(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3613[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_4885[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_4885[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_547[iVar2] = unk_0xB6790B02AB53A81E(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_547[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_565[iVar2] = unk_0xB6790B02AB53A81E(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_565[iVar2] = 0;
				}
				if (Global_1633501.f_92[iVar1 /*8637*/].f_565[iVar2] == 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_565[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_585[iVar2] = unk_0xB6790B02AB53A81E(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_585[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3649[iVar2] = unk_0xB6790B02AB53A81E(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3649[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3631[iVar2] = unk_0xB6790B02AB53A81E(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3631[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3671[iVar2] = unk_0xB6790B02AB53A81E(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3671[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar85[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3691[iVar2] = unk_0xB6790B02AB53A81E(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3691[iVar2] = 10000;
				}
				if (unk_0x4C58F55F20941087(uVar90[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3727[iVar2] = unk_0xB6790B02AB53A81E(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3727[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_855[iVar2] = unk_0xB6790B02AB53A81E(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_855[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_873[iVar2] = unk_0xB6790B02AB53A81E(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_873[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_927[iVar2] = unk_0xB6790B02AB53A81E(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_927[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_945[iVar2] = unk_0xB6790B02AB53A81E(uVar145[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_945[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_891[iVar2] = unk_0xB6790B02AB53A81E(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_891[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_909[iVar2] = unk_0xB6790B02AB53A81E(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_909[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar110[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3709[iVar2] = unk_0xB6790B02AB53A81E(uVar110[iVar1], iVar2);
				}
				else if (unk_0x4C58F55F20941087(iVar766, iVar1) == 2 && iVar766 != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3709[iVar2] = unk_0xB6790B02AB53A81E(iVar766, iVar1);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3709[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar105[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_981[iVar2] = unk_0xB6790B02AB53A81E(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_981[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar310[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_657[iVar2] = unk_0xB6790B02AB53A81E(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_657[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar305[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_639[iVar2] = unk_0xB6790B02AB53A81E(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_639[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_963[iVar2] = unk_0xB6790B02AB53A81E(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_963[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_999[iVar2] = unk_0xB6790B02AB53A81E(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_999[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8112[iVar2] = unk_0xB6790B02AB53A81E(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8112[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8130[iVar2] = unk_0xB6790B02AB53A81E(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8130[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar135[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8148[iVar2] = unk_0xB6790B02AB53A81E(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8148[iVar2] = 0;
				}
				if (uVar150[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4138[iVar2 /*3*/] = { unk_0xFFFE2DE388037E54(uVar150[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4138[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_177())
				{
					if (uVar155[iVar1] != 0)
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5158[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar155[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5158[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4190[iVar2 /*3*/] = { unk_0xFFFE2DE388037E54(uVar160[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4190[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar165[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4260[iVar2] = unk_0xB6790B02AB53A81E(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4260[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar170[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4296[iVar2] = unk_0xB6790B02AB53A81E(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4296[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3745[iVar2] = unk_0xB6790B02AB53A81E(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3745[iVar2] = 0;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4242[iVar2] = unk_0x5EFB23FE1415D634(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4242[iVar2] = 0f;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4496[iVar2] = unk_0xB6790B02AB53A81E(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4496[iVar2] = 0;
				}
				if (uVar230[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4514[iVar2] = unk_0xB6790B02AB53A81E(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4514[iVar2] = 0;
				}
				if (uVar235[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4532[iVar2] = unk_0xB6790B02AB53A81E(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4532[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar240[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4550[iVar2] = unk_0xB6790B02AB53A81E(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4550[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar245[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4568[iVar2] = unk_0xB6790B02AB53A81E(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4568[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar250[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4586[iVar2] = unk_0xB6790B02AB53A81E(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4586[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar255[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4604[iVar2] = unk_0xB6790B02AB53A81E(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4604[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar260[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4622[iVar2] = unk_0xB6790B02AB53A81E(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4622[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar265[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4640[iVar2] = unk_0xB6790B02AB53A81E(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4640[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar315[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8493[iVar2] = unk_0xB6790B02AB53A81E(uVar315[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8493[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar320[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8511[iVar2] = unk_0xB6790B02AB53A81E(uVar320[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8511[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar325[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8529[iVar2] = unk_0xB6790B02AB53A81E(uVar325[iVar1], iVar2);
					if (Global_1633501.f_92[iVar1 /*8637*/].f_8529[iVar2] == 0)
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_8529[iVar2] = -1;
					}
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8529[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar330[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8547[iVar2] = unk_0xB6790B02AB53A81E(uVar330[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8547[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar335[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8565[iVar2] = unk_0xB6790B02AB53A81E(uVar335[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8565[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar340[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8583[iVar2] = unk_0xB6790B02AB53A81E(uVar340[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8583[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar270[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4658[iVar2] = unk_0xB6790B02AB53A81E(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4658[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar275[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_37[iVar2] = unk_0xB6790B02AB53A81E(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0x4C58F55F20941087(Var380[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_4715[iVar2 /*5*/][iVar3] = unk_0xB6790B02AB53A81E(Var380[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1633501.f_92[iVar1 /*8637*/].f_4715[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0x4C58F55F20941087(uVar401[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_4801[iVar3 /*16*/]), unk_0xC250F19D1D16764D(uVar401[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_4801[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0x4C58F55F20941087(uVar370[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4679[iVar2] = unk_0xB6790B02AB53A81E(uVar370[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4679[iVar2] = Global_1633501.f_92[iVar1 /*8637*/].f_3295;
				}
				if (unk_0x4C58F55F20941087(uVar375[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4697[iVar2] = unk_0xB6790B02AB53A81E(uVar375[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4697[iVar2] = Global_1633501.f_92[iVar1 /*8637*/].f_3521;
				}
				if (bVar8)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][0] = unk_0xB6790B02AB53A81E(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][1] = unk_0xB6790B02AB53A81E(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][2] = unk_0xB6790B02AB53A81E(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][3] = unk_0xB6790B02AB53A81E(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_7921[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][0] = unk_0xB6790B02AB53A81E(uVar350[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][1] = unk_0xB6790B02AB53A81E(uVar355[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][2] = unk_0xB6790B02AB53A81E(uVar360[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8025[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar365[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8094[iVar2] = unk_0xB6790B02AB53A81E(uVar365[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8094[iVar2] = 0;
				}
				iVar767 = Global_1633501.f_92[iVar1 /*8637*/].f_57;
				while (iVar767 <= 31)
				{
					if (unk_0x48B8265059381CD0(Global_1633501.f_92[iVar1 /*8637*/].f_8094[iVar2], iVar767))
					{
						unk_0x21E7933CCC7B3724(&(Global_1633501.f_92[iVar1 /*8637*/].f_8094[iVar2]), iVar767);
					}
					iVar767++;
				}
				if (unk_0x4C58F55F20941087(uVar345[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8457[iVar2] = unk_0xB6790B02AB53A81E(uVar345[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8457[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar175[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4278[iVar2] = unk_0xB6790B02AB53A81E(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4278[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar180[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4314[iVar2] = unk_0x5EFB23FE1415D634(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4314[iVar2] = -1f;
				}
				if (unk_0x4C58F55F20941087(uVar185[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4332[iVar2] = unk_0x5EFB23FE1415D634(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4332[iVar2] = -1f;
				}
				if (unk_0x4C58F55F20941087(uVar190[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4370[iVar2] = unk_0xB6790B02AB53A81E(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4370[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar195[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4352[iVar2] = unk_0xB6790B02AB53A81E(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4352[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar200[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8328[iVar2] = unk_0xB6790B02AB53A81E(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8328[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar205[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8346[iVar2] = unk_0xB6790B02AB53A81E(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8346[iVar2] = -1;
				}
				if (unk_0x4C58F55F20941087(uVar210[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8364[iVar2] = unk_0xB6790B02AB53A81E(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8364[iVar2] = 0;
				}
				if (uVar300[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8007[iVar2] = unk_0xB6790B02AB53A81E(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_8007[iVar2] = 0;
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3764[iVar2] = unk_0xB6790B02AB53A81E(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3764[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar416[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4048[iVar2] = unk_0xB6790B02AB53A81E(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4048[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar421[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4084[iVar2] = unk_0xB6790B02AB53A81E(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4084[iVar2] = 0;
				}
				if (uVar426[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3800[iVar2] = unk_0xB6790B02AB53A81E(uVar426[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3800[iVar2] = 0;
				}
				if (uVar431[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3782[iVar2] = unk_0xB6790B02AB53A81E(uVar431[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3782[iVar2] = 0;
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4388[iVar2] = unk_0xB6790B02AB53A81E(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4388[iVar2] = 0;
				}
				if (uVar441[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4460[iVar2] = unk_0xB6790B02AB53A81E(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4460[iVar2] = -1;
				}
				if (uVar446[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4424[iVar2] = unk_0xB6790B02AB53A81E(uVar446[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4424[iVar2] = 0;
				}
				if (uVar451[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4442[iVar2] = unk_0xB6790B02AB53A81E(uVar451[iVar1], iVar2);
				}
				else if (Global_1633501.f_92[iVar1 /*8637*/].f_4424[iVar2] != 0 && unk_0x48B8265059381CD0(Global_1633501.f_92[iVar1 /*8637*/].f_4532[iVar2], 8))
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4442[iVar2] = Global_1633501.f_92[iVar1 /*8637*/].f_4424[iVar2];
					Global_1633501.f_92[iVar1 /*8637*/].f_4424[iVar2] = 0;
					unk_0x21E7933CCC7B3724(&(Global_1633501.f_92[iVar1 /*8637*/].f_4532[iVar2]), 8);
				}
				if (uVar456[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4406[iVar2] = unk_0xB6790B02AB53A81E(uVar456[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4406[iVar2] = 0;
				}
				if (uVar461[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4478[iVar2] = unk_0xB6790B02AB53A81E(uVar461[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4478[iVar2] = 0;
				}
				if (uVar466[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3940[iVar2] = unk_0xB6790B02AB53A81E(uVar466[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3940[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar471[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4066[iVar2] = unk_0xB6790B02AB53A81E(uVar471[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4066[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar476[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4102[iVar2] = unk_0xB6790B02AB53A81E(uVar476[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4102[iVar2] = 0;
				}
				if (unk_0x4C58F55F20941087(uVar516[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4120[iVar2] = unk_0x5EFB23FE1415D634(uVar516[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4120[iVar2] = -1f;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4030[iVar2] = unk_0xB6790B02AB53A81E(uVar406[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4030[iVar2] = 0;
				}
				if (uVar481[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3958[iVar2] = unk_0xB6790B02AB53A81E(uVar481[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3958[iVar2] = 100;
				}
				if (uVar486[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3994[iVar2] = unk_0xB6790B02AB53A81E(uVar486[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3994[iVar2] = 0;
				}
				if (uVar491[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4012[iVar2] = unk_0xB6790B02AB53A81E(uVar491[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_4012[iVar2] = 0;
				}
				if (uVar496[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3976[iVar2] = unk_0xB6790B02AB53A81E(uVar496[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3976[iVar2] = 0;
				}
				if (uVar501[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3818[iVar2 /*3*/] = { unk_0xFFFE2DE388037E54(uVar501[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3818[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar506[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3870[iVar2 /*3*/] = { unk_0xFFFE2DE388037E54(uVar506[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3870[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar511[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3922[iVar2] = unk_0x5EFB23FE1415D634(uVar511[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3922[iVar2] = 0f;
				}
				if (uVar521[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5431[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar521[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5431[iVar2 /*16*/]), "", 64);
				}
				if (!func_177())
				{
					if (uVar526[iVar1] != 0)
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6250[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar526[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6250[iVar2 /*16*/]), "", 64);
					}
					if (uVar531[iVar1] != 0)
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5704[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar531[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5704[iVar2 /*16*/]), "", 64);
					}
					if (uVar536[iVar1] != 0)
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5977[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar536[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_5977[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar541[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6523[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar541[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6523[iVar2 /*16*/]), "", 64);
				}
				if (uVar561[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6796[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar561[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_6796[iVar2 /*16*/]), "", 64);
				}
				if (uVar546[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7069[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar546[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7069[iVar2 /*16*/]), "", 64);
				}
				if (uVar551[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7342[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar551[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7342[iVar2 /*16*/]), "", 64);
				}
				if (uVar556[iVar1] != 0)
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7615[iVar2 /*16*/]), unk_0xC250F19D1D16764D(uVar556[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7615[iVar2 /*16*/]), "", 64);
				}
				if (uVar566[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3541[iVar2] = unk_0xB6790B02AB53A81E(uVar566[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3541[iVar2] = 0;
				}
				if (uVar571[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3559[iVar2] = unk_0xB6790B02AB53A81E(uVar571[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_3559[iVar2] = 0;
				}
				if (uVar616[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_3 = { unk_0xFFFE2DE388037E54(uVar616[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar621[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_6 = { unk_0xFFFE2DE388037E54(uVar621[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar626[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_10 = unk_0x5EFB23FE1415D634(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar631[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_13 = { unk_0xFFFE2DE388037E54(uVar631[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar606[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/] = { unk_0xFFFE2DE388037E54(uVar606[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (unk_0x4C58F55F20941087(uVar611[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_9 = unk_0x5EFB23FE1415D634(uVar611[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar601[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_16 = unk_0xB6790B02AB53A81E(uVar601[iVar1], iVar2);
				}
				if (uVar721[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_13 = { unk_0xFFFE2DE388037E54(uVar721[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar696[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/] = { unk_0xFFFE2DE388037E54(uVar696[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar706[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_3 = { unk_0xFFFE2DE388037E54(uVar706[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar701[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_6 = { unk_0xFFFE2DE388037E54(uVar701[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar716[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_10 = unk_0x5EFB23FE1415D634(uVar716[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_10 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar711[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_9 = unk_0x5EFB23FE1415D634(uVar711[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar691[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_16 = unk_0xB6790B02AB53A81E(uVar691[iVar1], iVar2);
				}
				if (uVar586[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_3 = { unk_0xFFFE2DE388037E54(uVar586[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar591[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_6 = { unk_0xFFFE2DE388037E54(uVar591[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar596[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_10 = unk_0x5EFB23FE1415D634(uVar596[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar576[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/] = { unk_0xFFFE2DE388037E54(uVar576[iVar1], iVar2) };
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_9 = unk_0x5EFB23FE1415D634(uVar581[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1975[iVar2 /*28*/].f_9 = 0f;
				}
				if (unk_0x4C58F55F20941087(uVar636[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_19 = unk_0xB6790B02AB53A81E(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar641[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_17 = unk_0xB6790B02AB53A81E(uVar641[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar646[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_18 = unk_0xB6790B02AB53A81E(uVar646[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar651[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_20 = unk_0xB6790B02AB53A81E(uVar651[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar656[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_23 = unk_0xB6790B02AB53A81E(uVar656[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x4C58F55F20941087(uVar661[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_24 = unk_0x5EFB23FE1415D634(uVar661[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_24 = 5f;
				}
				if (unk_0x4C58F55F20941087(uVar666[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_25 = unk_0x5EFB23FE1415D634(uVar666[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_25 = 10f;
				}
				if (unk_0x4C58F55F20941087(uVar671[iVar1], iVar2) == 3)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_26 = unk_0x5EFB23FE1415D634(uVar671[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_26 = 30f;
				}
				if (unk_0x4C58F55F20941087(uVar676[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_27 = unk_0xB6790B02AB53A81E(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar681[iVar1], iVar2) == 2 && unk_0x4C58F55F20941087(uVar686[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_21 = unk_0xB6790B02AB53A81E(uVar681[iVar1], iVar2);
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_22 = unk_0xB6790B02AB53A81E(uVar686[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_21 = 0;
					Global_1633501.f_92[iVar1 /*8637*/].f_1021[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar726[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_19 = unk_0xB6790B02AB53A81E(uVar726[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar731[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_17 = unk_0xB6790B02AB53A81E(uVar731[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar736[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_18 = unk_0xB6790B02AB53A81E(uVar736[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x4C58F55F20941087(uVar741[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_20 = unk_0xB6790B02AB53A81E(uVar741[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar746[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_23 = unk_0xB6790B02AB53A81E(uVar746[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x4C58F55F20941087(uVar751[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_27 = unk_0xB6790B02AB53A81E(uVar751[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x4C58F55F20941087(uVar756[iVar1], iVar2) == 2 && unk_0x4C58F55F20941087(uVar761[iVar1], iVar2) == 2)
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_21 = unk_0xB6790B02AB53A81E(uVar756[iVar1], iVar2);
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_22 = unk_0xB6790B02AB53A81E(uVar761[iVar1], iVar2);
				}
				else
				{
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_21 = 0;
					Global_1633501.f_92[iVar1 /*8637*/].f_1498[iVar2 /*28*/].f_22 = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_206(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
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
	var uVar43;
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
	var uVar60[10];
	
	iVar0 = unk_0x489F243BF1619568(*iParam0, "endcon");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar0, "numpt");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar0, "ptint");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar0, "pptint");
	bVar7 = true;
	if (unk_0x0481328AA6FEFDAB(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0x72C98FCC21DF47AA(iVar0, "mnumpt");
	}
	iVar8 = unk_0x72C98FCC21DF47AA(iVar0, "tcp");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar0, "tcr");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar0, "abits");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar0, "sdobs");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar0, "edobs");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar0, "dogps");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar0, "teamv");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar0, "ireveh");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar0, "teamrvc");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar0, "teamrvp");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar0, "mcvbs");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar0, "mcobs");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar0, "mcpbs");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar0, "mcgbs");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar0, "rpgbs");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar0, "mcpbs1");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar0, "mcpbs2");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar0, "mcgbs1");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar0, "mcgbs2");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar0, "rpgbs1");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar0, "rpgbs2");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar0, "inpts");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar0, "ldsf1");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar0, "ldsf2");
	iVar32 = 1;
	if (unk_0x0481328AA6FEFDAB(iVar0, "tehlh") == 7)
	{
		iVar33 = unk_0x72C98FCC21DF47AA(iVar0, "tehlh");
		iVar32 = 1;
	}
	else
	{
		iVar32 = 0;
	}
	iVar34 = unk_0x72C98FCC21DF47AA(iVar0, "tehrn");
	iVar35 = unk_0x72C98FCC21DF47AA(iVar0, "spsy1");
	iVar36 = unk_0x72C98FCC21DF47AA(iVar0, "spsy2");
	iVar37 = unk_0x72C98FCC21DF47AA(iVar0, "tenms");
	iVar38 = unk_0x72C98FCC21DF47AA(iVar0, "csttn");
	iVar39 = unk_0x72C98FCC21DF47AA(iVar0, "cstrn");
	iVar40 = unk_0x72C98FCC21DF47AA(iVar0, "nrl");
	iVar41 = unk_0x72C98FCC21DF47AA(iVar0, "tstrt");
	iVar42 = unk_0x72C98FCC21DF47AA(iVar0, "tstop");
	uVar43 = unk_0x72C98FCC21DF47AA(iVar0, "sms");
	iVar44 = unk_0x72C98FCC21DF47AA(iVar0, "tblpv1");
	iVar45 = unk_0x72C98FCC21DF47AA(iVar0, "tblpv2");
	iVar46 = unk_0x72C98FCC21DF47AA(iVar0, "tblpv3");
	iVar47 = unk_0x72C98FCC21DF47AA(iVar0, "tblpv4");
	iVar48 = unk_0x72C98FCC21DF47AA(iVar0, "thudv1");
	iVar49 = unk_0x72C98FCC21DF47AA(iVar0, "thudv2");
	iVar50 = unk_0x72C98FCC21DF47AA(iVar0, "thudv3");
	iVar51 = unk_0x72C98FCC21DF47AA(iVar0, "thudv4");
	iVar52 = unk_0x72C98FCC21DF47AA(iVar0, "thlb1");
	iVar53 = unk_0x72C98FCC21DF47AA(iVar0, "thlb2");
	iVar54 = unk_0x72C98FCC21DF47AA(iVar0, "thlb3");
	iVar55 = unk_0x72C98FCC21DF47AA(iVar0, "thlb4");
	iVar56 = unk_0x72C98FCC21DF47AA(iVar0, "rcst1q");
	iVar57 = unk_0x72C98FCC21DF47AA(iVar0, "rcst2q");
	iVar58 = unk_0x72C98FCC21DF47AA(iVar0, "rcst3q");
	iVar59 = unk_0x72C98FCC21DF47AA(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0x685173272EC83DA9(uVar43) - 1))
	{
		uVar60[iVar1] = unk_0xB13A070E8D2CC571(uVar43, iVar1);
		Global_1633501.f_35487[iVar1 /*38*/] = unk_0x37AC9FA286925FB3(uVar60[iVar1], "team");
		Global_1633501.f_35487[iVar1 /*38*/].f_1 = unk_0x37AC9FA286925FB3(uVar60[iVar1], "rule");
		Global_1633501.f_35487[iVar1 /*38*/].f_2 = unk_0x37AC9FA286925FB3(uVar60[iVar1], "time");
		StringCopy(&(Global_1633501.f_35487[iVar1 /*38*/].f_4[0 /*16*/]), unk_0x12A8355C6ACDA29F(uVar60[iVar1], "txt0"), 64);
		StringCopy(&(Global_1633501.f_35487[iVar1 /*38*/].f_4[1 /*16*/]), unk_0x12A8355C6ACDA29F(uVar60[iVar1], "txt1"), 64);
		Global_1633501.f_35487[iVar1 /*38*/].f_3 = unk_0x37AC9FA286925FB3(uVar60[iVar1], "delay");
		Global_1633501.f_35487[iVar1 /*38*/].f_37 = unk_0x37AC9FA286925FB3(uVar60[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0xB6790B02AB53A81E(iVar14, iVar1);
				Global_1633501.f_42574[iVar1] = uVar2;
			}
			else
			{
				Global_1633501.f_42574[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_1633501.f_34651[iVar1] = unk_0xB6790B02AB53A81E(iVar15, iVar1);
			}
			else
			{
				Global_1633501.f_34651[iVar1] = -1;
			}
			if (iVar16 != 0)
			{
				Global_1633501.f_42622[iVar1] = unk_0xB6790B02AB53A81E(iVar16, iVar1);
			}
			else
			{
				Global_1633501.f_42622[iVar1] = -1;
			}
			if (iVar17 != 0)
			{
				Global_1633501.f_42617[iVar1] = unk_0xB6790B02AB53A81E(iVar17, iVar1);
			}
			else
			{
				Global_1633501.f_42617[iVar1] = 0;
			}
			if (iVar3 != 0)
			{
				Global_1633501.f_32[iVar1] = unk_0xB6790B02AB53A81E(iVar3, iVar1);
			}
			if (Global_1633501.f_32[iVar1] < 1)
			{
				Global_1633501.f_32[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				Global_1633501.f_36330[iVar1] = unk_0xB6790B02AB53A81E(iVar4, iVar1);
			}
			else
			{
				Global_1633501.f_36330[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				Global_1633501.f_36335[iVar1] = unk_0xB6790B02AB53A81E(iVar5, iVar1);
			}
			else
			{
				Global_1633501.f_36335[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_1633501.f_37[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_1633501.f_37[iVar1] = unk_0xB6790B02AB53A81E(iVar6, iVar1);
				}
				if (Global_1633501.f_37[iVar1] < 0)
				{
					Global_1633501.f_37[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4 = { unk_0xFFFE2DE388037E54(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_7 = { unk_0xFFFE2DE388037E54(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_1017 = unk_0xB6790B02AB53A81E(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_1018 = unk_0xB6790B02AB53A81E(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_1019 = unk_0xB6790B02AB53A81E(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_1020 = unk_0xB6790B02AB53A81E(iVar13, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar30, iVar1) == 2 && iVar30 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_583 = unk_0xB6790B02AB53A81E(iVar30, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_583 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar31, iVar1) == 2 && iVar31 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_584 = unk_0xB6790B02AB53A81E(iVar31, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_584 = 0;
			}
			if (iVar18 != 0)
			{
				Global_1633501.f_35477[iVar1] = unk_0xB6790B02AB53A81E(iVar18, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar19, iVar1) == 2)
			{
				Global_1633501.f_35482[iVar1] = unk_0xB6790B02AB53A81E(iVar19, iVar1);
			}
			else
			{
				Global_1633501.f_35482[iVar1] = 0;
			}
			if (iVar20 != 0)
			{
				Global_1633501.f_35433[iVar1] = unk_0xB6790B02AB53A81E(iVar20, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1633501.f_35464[iVar1 /*3*/][0] = unk_0xB6790B02AB53A81E(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1633501.f_35464[iVar1 /*3*/][1] = unk_0xB6790B02AB53A81E(iVar24, iVar1);
			}
			if (Global_1633501.f_35433[iVar1] != 0 && Global_1633501.f_35464[iVar1 /*3*/][0] == 0)
			{
				Global_1633501.f_35464[iVar1 /*3*/][0] = Global_1633501.f_35433[iVar1];
			}
			if (iVar21 != 0)
			{
				Global_1633501.f_35428[iVar1] = unk_0xB6790B02AB53A81E(iVar21, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1633501.f_35451[iVar1 /*3*/][0] = unk_0xB6790B02AB53A81E(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1633501.f_35451[iVar1 /*3*/][1] = unk_0xB6790B02AB53A81E(iVar26, iVar1);
			}
			if (Global_1633501.f_35428[iVar1] != 0 && Global_1633501.f_35451[iVar1 /*3*/][0] == 0)
			{
				Global_1633501.f_35451[iVar1 /*3*/][0] = Global_1633501.f_35428[iVar1];
			}
			if (iVar22 != 0)
			{
				Global_1633501.f_35423[iVar1] = unk_0xB6790B02AB53A81E(iVar22, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1633501.f_35438[iVar1 /*3*/][0] = unk_0xB6790B02AB53A81E(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1633501.f_35438[iVar1 /*3*/][1] = unk_0xB6790B02AB53A81E(iVar28, iVar1);
			}
			if (Global_1633501.f_35423[iVar1] != 0 && Global_1633501.f_35438[iVar1 /*3*/][0] == 0)
			{
				Global_1633501.f_35438[iVar1 /*3*/][0] = Global_1633501.f_35423[iVar1];
			}
			if (iVar29 != 0)
			{
				Global_1633501.f_34692[iVar1] = unk_0xB6790B02AB53A81E(iVar29, iVar1);
			}
			if (iVar32 && iVar33 != 0)
			{
				Global_1633501.f_34724[iVar1] = unk_0xB6790B02AB53A81E(iVar33, iVar1);
			}
			else
			{
				Global_1633501.f_34724[iVar1] = 3;
			}
			if (unk_0x4C58F55F20941087(iVar34, iVar1) == 2)
			{
				Global_1633501.f_34729[iVar1] = unk_0xB6790B02AB53A81E(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7888[0 /*16*/]), unk_0xC250F19D1D16764D(iVar35, iVar1), 64);
			}
			if (iVar36 != 0)
			{
				StringCopy(&(Global_1633501.f_92[iVar1 /*8637*/].f_7888[1 /*16*/]), unk_0xC250F19D1D16764D(iVar36, iVar1), 64);
			}
			if (iVar37 != 0)
			{
				Global_1633501.f_34697[iVar1] = unk_0xB6790B02AB53A81E(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				StringCopy(&(Global_1633501.f_34702[iVar1 /*4*/]), unk_0xC250F19D1D16764D(iVar38, iVar1), 16);
			}
			if (iVar39 != 0)
			{
				Global_1633501.f_34719[iVar1] = unk_0xB6790B02AB53A81E(iVar39, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar41, iVar1) == 2 && iVar41 != 0)
			{
				Global_1633501.f_92980[iVar1] = unk_0xB6790B02AB53A81E(iVar41, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar42, iVar1) == 2 && iVar42 != 0)
			{
				Global_1633501.f_92985[iVar1] = unk_0xB6790B02AB53A81E(iVar42, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_57 = unk_0xB6790B02AB53A81E(iVar40, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar44, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4866 = unk_0xB6790B02AB53A81E(iVar44, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4866 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar45, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4867 = unk_0xB6790B02AB53A81E(iVar45, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4867 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar46, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4868 = unk_0xB6790B02AB53A81E(iVar46, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4868 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar47, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4869 = unk_0xB6790B02AB53A81E(iVar47, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4869 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar48, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4870 = unk_0xB6790B02AB53A81E(iVar48, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4870 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar49, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4871 = unk_0xB6790B02AB53A81E(iVar49, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4871 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar50, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4872 = unk_0xB6790B02AB53A81E(iVar50, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4872 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar51, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4873 = unk_0xB6790B02AB53A81E(iVar51, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4873 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar52, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4874 = unk_0xB6790B02AB53A81E(iVar52, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4874 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar53, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4875 = unk_0xB6790B02AB53A81E(iVar53, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4875 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar54, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4876 = unk_0xB6790B02AB53A81E(iVar54, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4876 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar55, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4877 = unk_0xB6790B02AB53A81E(iVar55, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4877 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar56, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4878 = unk_0xB6790B02AB53A81E(iVar56, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4878 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar57, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4879 = unk_0xB6790B02AB53A81E(iVar57, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4879 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar58, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4880 = unk_0xB6790B02AB53A81E(iVar58, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4880 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar59, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4881 = unk_0xB6790B02AB53A81E(iVar59, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4881 = 0;
			}
		}
		iVar1++;
	}
}

void func_207(int iParam0)
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
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	
	iVar0 = unk_0x489F243BF1619568(*iParam0, "endcon");
	iVar2 = unk_0x72C98FCC21DF47AA(iVar0, "stpos");
	iVar3 = unk_0x72C98FCC21DF47AA(iVar0, "delr");
	iVar4 = unk_0x72C98FCC21DF47AA(iVar0, "epos");
	iVar5 = unk_0x72C98FCC21DF47AA(iVar0, "endr");
	iVar6 = unk_0x72C98FCC21DF47AA(iVar0, "vareapos");
	iVar7 = unk_0x72C98FCC21DF47AA(iVar0, "arear");
	iVar8 = unk_0x72C98FCC21DF47AA(iVar0, "time");
	iVar9 = unk_0x72C98FCC21DF47AA(iVar0, "plkr");
	iVar10 = unk_0x72C98FCC21DF47AA(iVar0, "pekr");
	iVar11 = unk_0x72C98FCC21DF47AA(iVar0, "vhkr");
	iVar12 = unk_0x72C98FCC21DF47AA(iVar0, "obkr");
	iVar13 = unk_0x72C98FCC21DF47AA(iVar0, "dr");
	iVar14 = unk_0x72C98FCC21DF47AA(iVar0, "pedr");
	iVar15 = unk_0x72C98FCC21DF47AA(iVar0, "vedr");
	iVar16 = unk_0x72C98FCC21DF47AA(iVar0, "obdr");
	iVar17 = unk_0x72C98FCC21DF47AA(iVar0, "lwmbs");
	iVar18 = unk_0x72C98FCC21DF47AA(iVar0, "flmbs");
	iVar19 = unk_0x72C98FCC21DF47AA(iVar0, "vdoibs");
	iVar20 = unk_0x72C98FCC21DF47AA(iVar0, "vdohu");
	iVar21 = unk_0x72C98FCC21DF47AA(iVar0, "tmbts");
	iVar22 = unk_0x72C98FCC21DF47AA(iVar0, "tmbt2");
	iVar23 = unk_0x72C98FCC21DF47AA(iVar0, "tmbt3");
	iVar24 = unk_0x72C98FCC21DF47AA(iVar0, "swmbs");
	iVar25 = unk_0x72C98FCC21DF47AA(iVar0, "gbmbs");
	iVar26 = unk_0x72C98FCC21DF47AA(iVar0, "pcbd");
	iVar27 = unk_0x72C98FCC21DF47AA(iVar0, "lwbs");
	iVar28 = unk_0x72C98FCC21DF47AA(iVar0, "wodia");
	iVar29 = unk_0x72C98FCC21DF47AA(iVar0, "repcr");
	iVar30 = unk_0x72C98FCC21DF47AA(iVar0, "woabs");
	iVar31 = unk_0x72C98FCC21DF47AA(iVar0, "fwoabs");
	iVar32 = unk_0x72C98FCC21DF47AA(iVar0, "fail");
	iVar33 = unk_0x72C98FCC21DF47AA(iVar0, "vehrsp");
	iVar34 = unk_0x72C98FCC21DF47AA(iVar0, "spit");
	iVar35 = unk_0x72C98FCC21DF47AA(iVar0, "pglr");
	iVar36 = unk_0x72C98FCC21DF47AA(iVar0, "nora");
	iVar37 = unk_0x72C98FCC21DF47AA(iVar0, "mtlr");
	iVar38 = unk_0x72C98FCC21DF47AA(iVar0, "mslr");
	iVar39 = unk_0x72C98FCC21DF47AA(iVar0, "mlpl");
	iVar40 = unk_0x72C98FCC21DF47AA(iVar0, "plyl");
	iVar41 = unk_0x72C98FCC21DF47AA(iVar0, "shd");
	iVar42 = unk_0x72C98FCC21DF47AA(iVar0, "spar");
	iVar43 = unk_0x72C98FCC21DF47AA(iVar0, "2spar");
	iVar44 = unk_0x72C98FCC21DF47AA(iVar0, "boud");
	iVar45 = unk_0x72C98FCC21DF47AA(iVar0, "bla");
	iVar46 = unk_0x72C98FCC21DF47AA(iVar0, "wla");
	iVar47 = unk_0x72C98FCC21DF47AA(iVar0, "patm");
	iVar48 = unk_0x72C98FCC21DF47AA(iVar0, "bnd2");
	iVar49 = unk_0x72C98FCC21DF47AA(iVar0, "bla2");
	iVar50 = unk_0x72C98FCC21DF47AA(iVar0, "wla2");
	iVar51 = unk_0x72C98FCC21DF47AA(iVar0, "pat2");
	iVar52 = unk_0x72C98FCC21DF47AA(iVar0, "inv");
	iVar53 = unk_0x72C98FCC21DF47AA(iVar0, "inv2");
	iVar54 = unk_0x72C98FCC21DF47AA(iVar0, "inv3");
	iVar55 = unk_0x72C98FCC21DF47AA(iVar0, "invsw");
	iVar56 = unk_0x72C98FCC21DF47AA(iVar0, "invtm");
	iVar57 = unk_0x72C98FCC21DF47AA(iVar0, "invrl");
	iVar58 = unk_0x72C98FCC21DF47AA(iVar0, "inv2tm");
	iVar59 = unk_0x72C98FCC21DF47AA(iVar0, "inv2rl");
	iVar60 = unk_0x72C98FCC21DF47AA(iVar0, "sinv");
	iVar61 = unk_0x72C98FCC21DF47AA(iVar0, "sinv2");
	iVar62 = unk_0x72C98FCC21DF47AA(iVar0, "sinv3");
	iVar63 = unk_0x72C98FCC21DF47AA(iVar0, "minv");
	iVar64 = unk_0x72C98FCC21DF47AA(iVar0, "mmsw");
	iVar65 = unk_0x72C98FCC21DF47AA(iVar0, "mmsw2");
	iVar66 = unk_0x72C98FCC21DF47AA(iVar0, "minv2");
	iVar67 = unk_0x72C98FCC21DF47AA(iVar0, "minv3");
	iVar68 = unk_0x72C98FCC21DF47AA(iVar0, "ppk");
	iVar69 = unk_0x72C98FCC21DF47AA(iVar0, "mts");
	iVar70 = unk_0x72C98FCC21DF47AA(iVar0, "spwia");
	iVar71 = unk_0x72C98FCC21DF47AA(iVar0, "2spwia");
	iVar72 = unk_0x72C98FCC21DF47AA(iVar0, "pcl");
	iVar73 = unk_0x72C98FCC21DF47AA(iVar0, "ocl");
	iVar74 = unk_0x72C98FCC21DF47AA(iVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_1633501.f_30 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/] = { unk_0xFFFE2DE388037E54(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3668 = unk_0xB6790B02AB53A81E(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3689 = unk_0xB6790B02AB53A81E(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4350 = unk_0xB6790B02AB53A81E(iVar19, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar20, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4351 = unk_0xB6790B02AB53A81E(iVar20, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4351 = 0;
			}
			if (iVar21 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4676 = unk_0xB6790B02AB53A81E(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4677 = unk_0xB6790B02AB53A81E(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4678 = unk_0xB6790B02AB53A81E(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3670 = unk_0xB6790B02AB53A81E(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3763 = unk_0xB6790B02AB53A81E(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4882 = unk_0xB6790B02AB53A81E(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3667 = unk_0xB6790B02AB53A81E(iVar27, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3669 = unk_0xB6790B02AB53A81E(iVar30, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3301 = unk_0xB6790B02AB53A81E(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3302 = unk_0xB6790B02AB53A81E(iVar29, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3690 = unk_0xB6790B02AB53A81E(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4883 = unk_0xB6790B02AB53A81E(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_4884 = unk_0xB6790B02AB53A81E(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_8454 = unk_0xB6790B02AB53A81E(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_8455 = unk_0xB6790B02AB53A81E(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_8456 = unk_0xB6790B02AB53A81E(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_32 = unk_0xB6790B02AB53A81E(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_33 = unk_0xB6790B02AB53A81E(iVar38, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar39, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_34 = unk_0xB6790B02AB53A81E(iVar39, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_34 = 0;
			}
			if (iVar40 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_36 = unk_0xB6790B02AB53A81E(iVar40, iVar1);
			}
			if (iVar42 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3296 = unk_0xB6790B02AB53A81E(iVar42, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3298 = unk_0xB6790B02AB53A81E(iVar43, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3294 = unk_0xB6790B02AB53A81E(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3293 = unk_0xB6790B02AB53A81E(iVar45, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar47, iVar1) == 2 && iVar47 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3295 = unk_0xB6790B02AB53A81E(iVar47, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3295 = 60000;
			}
			if (unk_0x4C58F55F20941087(iVar48, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3520 = unk_0xB6790B02AB53A81E(iVar48, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3520 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar49, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3519 = unk_0xB6790B02AB53A81E(iVar49, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3519 = 0;
			}
			if (unk_0x4C58F55F20941087(iVar51, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3521 = unk_0xB6790B02AB53A81E(iVar51, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3521 = 60000;
			}
			if (unk_0x4C58F55F20941087(iVar50, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3522 = unk_0xB6790B02AB53A81E(iVar50, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3522 = 0;
			}
			if (iVar52 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_59 = unk_0xB6790B02AB53A81E(iVar52, iVar1);
			}
			if (iVar53 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_60 = unk_0xB6790B02AB53A81E(iVar53, iVar1);
			}
			if (iVar54 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_61 = unk_0xB6790B02AB53A81E(iVar54, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar55, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_204 = unk_0xB6790B02AB53A81E(iVar55, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_204 = -1;
			}
			if (unk_0x4C58F55F20941087(iVar64, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_205 = unk_0xB6790B02AB53A81E(iVar64, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_205 = -1;
			}
			if (unk_0x4C58F55F20941087(iVar65, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_206 = unk_0xB6790B02AB53A81E(iVar65, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_206 = -1;
			}
			if (unk_0x4C58F55F20941087(iVar56, iVar1) == 2 && unk_0x4C58F55F20941087(iVar57, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_352 = unk_0xB6790B02AB53A81E(iVar56, iVar1);
				Global_1633501.f_92[iVar1 /*8637*/].f_353 = unk_0xB6790B02AB53A81E(iVar57, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_352 = -1;
				Global_1633501.f_92[iVar1 /*8637*/].f_353 = -1;
			}
			if (iVar60 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_207 = unk_0xB6790B02AB53A81E(iVar60, iVar1);
			}
			if (iVar61 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_208 = unk_0xB6790B02AB53A81E(iVar61, iVar1);
			}
			if (iVar62 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_209 = unk_0xB6790B02AB53A81E(iVar62, iVar1);
			}
			if (unk_0x4C58F55F20941087(iVar58, iVar1) == 2 && unk_0x4C58F55F20941087(iVar59, iVar1) == 2)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_499 = unk_0xB6790B02AB53A81E(iVar58, iVar1);
				Global_1633501.f_92[iVar1 /*8637*/].f_500 = unk_0xB6790B02AB53A81E(iVar59, iVar1);
			}
			else
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_499 = -1;
				Global_1633501.f_92[iVar1 /*8637*/].f_500 = -1;
			}
			if (iVar63 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_354 = unk_0xB6790B02AB53A81E(iVar63, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_355 = unk_0xB6790B02AB53A81E(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_356 = unk_0xB6790B02AB53A81E(iVar67, iVar1);
			}
			if (iVar68 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_55 = unk_0xB6790B02AB53A81E(iVar68, iVar1);
			}
			if (iVar69 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_56 = unk_0xB6790B02AB53A81E(iVar69, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3297 = unk_0xB6790B02AB53A81E(iVar70, iVar1);
			}
			if (iVar71 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3299 = unk_0xB6790B02AB53A81E(iVar71, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3300 = unk_0xB6790B02AB53A81E(iVar46, iVar1);
			}
			if (iVar41 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_3 = unk_0x5EFB23FE1415D634(iVar41, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_1633501.f_34641[iVar1] = unk_0xB6790B02AB53A81E(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_1633501.f_34646[iVar1] = unk_0xB6790B02AB53A81E(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_35 = unk_0xB6790B02AB53A81E(iVar74, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_14 = unk_0xB6790B02AB53A81E(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_15 = { unk_0xFFFE2DE388037E54(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_18 = unk_0xB6790B02AB53A81E(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_19 = { unk_0xFFFE2DE388037E54(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_22 = unk_0xB6790B02AB53A81E(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_23 = unk_0xB6790B02AB53A81E(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_24 = unk_0xB6790B02AB53A81E(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_25 = unk_0xB6790B02AB53A81E(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_26 = unk_0xB6790B02AB53A81E(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_27 = unk_0xB6790B02AB53A81E(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_28 = unk_0xB6790B02AB53A81E(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_29 = unk_0xB6790B02AB53A81E(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_30 = unk_0xB6790B02AB53A81E(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1633501.f_92[iVar1 /*8637*/].f_31 = unk_0xB6790B02AB53A81E(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x489F243BF1619568(iParam0, "rule");
	Global_1633501.f_49 = unk_0x37AC9FA286925FB3(iVar0, "time");
	Global_1633501.f_51 = unk_0x37AC9FA286925FB3(iVar0, "score");
	Global_1633501.f_62 = unk_0x37AC9FA286925FB3(iVar0, "prule");
	Global_1633501.f_54822 = unk_0x37AC9FA286925FB3(iVar0, "ptyp");
	Global_1633501.f_52 = unk_0x37AC9FA286925FB3(iVar0, "blip");
	Global_1633501.f_54 = unk_0x37AC9FA286925FB3(iVar0, "tag");
	Global_1633501.f_55 = unk_0x37AC9FA286925FB3(iVar0, "voice");
	Global_1633501.f_56 = unk_0x37AC9FA286925FB3(iVar0, "radio");
	Global_1633501.f_57 = unk_0x37AC9FA286925FB3(iVar0, "aim");
	Global_1633501.f_42633 = unk_0x37AC9FA286925FB3(iVar0, "pol");
	Global_1633501.f_45 = unk_0x37AC9FA286925FB3(iVar0, "liv");
	Global_1633501.f_41914 = unk_0x37AC9FA286925FB3(iVar0, "traf");
	Global_1633501.f_89259 = unk_0x37AC9FA286925FB3(iVar0, "tod");
	Global_1633501.f_89244 = unk_0x37AC9FA286925FB3(iVar0, "weth");
	Global_1633501.f_89261 = unk_0x37AC9FA286925FB3(iVar0, "apeds");
	Global_1633501.f_89260 = unk_0x37AC9FA286925FB3(iVar0, "vehd");
	Global_1633501.f_60 = unk_0x37AC9FA286925FB3(iVar0, "vdm");
	Global_1633501.f_58 = unk_0x37AC9FA286925FB3(iVar0, "tdm");
	Global_1633501.f_34641[0] = unk_0x37AC9FA286925FB3(iVar0, "pcr");
	Global_1633501.f_34646[0] = unk_0x37AC9FA286925FB3(iVar0, "ocr");
}

void func_209(int iParam0, int iParam1, bool bParam2)
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
	int iVar23;
	var uVar24;
	int iVar25;
	int iVar26;
	char* sVar27;
	int iVar28;
	int iVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	char cVar35[16];
	char cVar39[16];
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	
	iVar0 = unk_0x489F243BF1619568(iParam0, "gen");
	Global_1633501 = unk_0x37AC9FA286925FB3(iVar0, "type");
	Global_1633501.f_9 = unk_0x917AA466A591DA1F(iVar0, "ngjob");
	unk_0x48B8265059381CD0(Global_1633501.f_7, 0);
	bVar1 = unk_0x917AA466A591DA1F(iVar0, "photo");
	if (bVar1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_1633501.f_7), 0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_1633501.f_7), 0);
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ivm") == 2)
	{
		Global_1633501.f_42573 = unk_0x37AC9FA286925FB3(iVar0, "ivm");
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "fixcam") == 2)
	{
		Global_1633501.f_92993 = unk_0x37AC9FA286925FB3(iVar0, "fixcam");
	}
	else
	{
		Global_1633501.f_92993 = 0;
	}
	Global_1633501.f_4 = unk_0x37AC9FA286925FB3(iVar0, "optbs");
	Global_1633501.f_75 = { unk_0x51AA166972995C47(iVar0, "camo") };
	Global_1633501.f_78 = { unk_0x51AA166972995C47(iVar0, "camro") };
	Global_1633501.f_69 = { unk_0x51AA166972995C47(iVar0, "cam") };
	Global_1633501.f_88 = unk_0x43D5E279656505E4(iVar0, "camh");
	Global_1633501.f_81 = { unk_0x51AA166972995C47(iVar0, "camf") };
	Global_1633501.f_84 = { unk_0x51AA166972995C47(iVar0, "camfr") };
	Global_1633501.f_87 = unk_0x43D5E279656505E4(iVar0, "camfv");
	Global_1633501.f_88621 = unk_0x43D5E279656505E4(iVar0, "dmbds");
	Global_1633501.f_63 = { unk_0x51AA166972995C47(iVar0, "phpo") };
	StringCopy(&(Global_1633501.f_88804[0 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, "szTag"), 64);
	if (unk_0x0481328AA6FEFDAB(iVar0, "chksfx") == 1)
	{
		Global_1633501.f_107591 = 1;
	}
	else
	{
		Global_1633501.f_107591 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1633501.f_88939[iVar2 /*6*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_125())
	{
		Global_1633501.f_2 = unk_0x37AC9FA286925FB3(iVar0, "subtype");
		Global_1633501.f_107548 = unk_0x37AC9FA286925FB3(iVar0, "adverm");
		Global_1633501.f_92990 = unk_0x37AC9FA286925FB3(iVar0, "testcomplete");
		if (((Global_1633501.f_2 == 6 || Global_1633501.f_2 == 5) || Global_1633501.f_2 == 4) || Global_1633501.f_2 == 9)
		{
			if (unk_0x0481328AA6FEFDAB(iVar0, "teamBal") == 2)
			{
				Global_1633501.f_92992 = unk_0x37AC9FA286925FB3(iVar0, "numRounds");
			}
			else
			{
				Global_1633501.f_92992 = 1;
			}
			if (Global_1633501.f_92992 < 1)
			{
				Global_1633501.f_92992 = 1;
			}
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, "teamBal") == 2)
		{
			Global_1633501.f_92994 = unk_0x37AC9FA286925FB3(iVar0, "teamBal");
		}
		else
		{
			Global_1633501.f_92994 = 5;
		}
	}
	Global_1633501.f_92991 = unk_0x37AC9FA286925FB3(iVar0, "testcomplete");
	Global_1633501.f_50 = unk_0x37AC9FA286925FB3(iVar0, "endtype");
	Global_1633501.f_11 = unk_0x37AC9FA286925FB3(iVar0, "menubs");
	if (unk_0x0481328AA6FEFDAB(iVar0, "ovrpc") == 2)
	{
		Global_1633501.f_61976 = unk_0x37AC9FA286925FB3(iVar0, "ovrpc");
	}
	else
	{
		Global_1633501.f_61976 = -1;
	}
	Global_1633501.f_12 = unk_0x37AC9FA286925FB3(iVar0, "menubs2");
	if (unk_0x0481328AA6FEFDAB(iVar0, "menubs3") == 2)
	{
		Global_1633501.f_13 = unk_0x37AC9FA286925FB3(iVar0, "menubs3");
	}
	else
	{
		Global_1633501.f_13 = 0;
	}
	Global_1633501.f_14 = unk_0x37AC9FA286925FB3(iVar0, "menubs4");
	Global_1633501.f_15 = unk_0x37AC9FA286925FB3(iVar0, "menubs5");
	Global_1633501.f_16 = unk_0x37AC9FA286925FB3(iVar0, "menubs6");
	Global_1633501.f_17 = unk_0x37AC9FA286925FB3(iVar0, "menubs7");
	Global_1633501.f_18 = unk_0x37AC9FA286925FB3(iVar0, "menubs8");
	Global_1633501.f_19 = unk_0x37AC9FA286925FB3(iVar0, "menubs9");
	Global_1633501.f_20 = unk_0x37AC9FA286925FB3(iVar0, "menubs10");
	Global_1633501.f_21 = unk_0x37AC9FA286925FB3(iVar0, "menubs11");
	Global_1633501.f_22 = unk_0x37AC9FA286925FB3(iVar0, "menubs12");
	Global_1633501.f_23 = unk_0x37AC9FA286925FB3(iVar0, "menubs13");
	if (unk_0x48B8265059381CD0(Global_1633501.f_22, 13))
	{
		if (unk_0x0481328AA6FEFDAB(iVar0, "trstim") == 2)
		{
			Global_1633501.f_107626 = unk_0x37AC9FA286925FB3(iVar0, "trstim");
		}
		else
		{
			Global_1633501.f_107626 = 10;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, "trerad") == 3)
		{
			Global_1633501.f_107627 = unk_0x43D5E279656505E4(iVar0, "trerad");
		}
		else
		{
			Global_1633501.f_107627 = 5f;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, "trsstim") == 2)
		{
			Global_1633501.f_107628 = unk_0x37AC9FA286925FB3(iVar0, "trsstim");
		}
		else
		{
			Global_1633501.f_107628 = 10;
		}
	}
	if (unk_0x48B8265059381CD0(Global_1633501.f_15, 31))
	{
	}
	Global_1633501.f_16 = unk_0x37AC9FA286925FB3(iVar0, "menubs6");
	if (unk_0x48B8265059381CD0(Global_1633501.f_16, 16))
	{
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hptfb") == 2)
	{
		Global_1633501.f_91 = unk_0x37AC9FA286925FB3(iVar0, "hptfb");
	}
	else
	{
		Global_1633501.f_91 = 0;
	}
	Global_1633501.f_42632 = unk_0x37AC9FA286925FB3(iVar0, "teamvbs");
	Global_1633501.f_24 = unk_0x37AC9FA286925FB3(iVar0, "cncmbs");
	Global_1633501.f_104510 = unk_0x37AC9FA286925FB3(iVar0, "todhr");
	Global_1633501.f_104511 = unk_0x37AC9FA286925FB3(iVar0, "todmn");
	Global_1633501.f_10 = unk_0x37AC9FA286925FB3(iVar0, "cmpts");
	Global_1633501.f_48 = unk_0x37AC9FA286925FB3(iVar0, "rank");
	Global_1633501.f_48 = unk_0x37AC9FA286925FB3(iVar0, "rank");
	Global_1633501.f_89263 = unk_0x37AC9FA286925FB3(iVar0, "charcon");
	Global_1633501.f_89263 = unk_0x37AC9FA286925FB3(iVar0, "char");
	Global_1633501.f_89265 = unk_0x37AC9FA286925FB3(iVar0, "xpr");
	Global_1633501.f_89266 = unk_0x37AC9FA286925FB3(iVar0, "cshr");
	Global_1633501.f_89270 = unk_0x37AC9FA286925FB3(iVar0, "ctsc");
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecsbs") == 2)
	{
		Global_1633501.f_101682.f_16 = unk_0x37AC9FA286925FB3(iVar0, "ecsbs");
	}
	else
	{
		Global_1633501.f_101682.f_16 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecsbs2") == 2)
	{
		Global_1633501.f_101682.f_17 = unk_0x37AC9FA286925FB3(iVar0, "ecsbs2");
	}
	else
	{
		Global_1633501.f_101682.f_17 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecsrng") == 2)
	{
		Global_1633501.f_101682.f_62 = unk_0x37AC9FA286925FB3(iVar0, "ecsrng");
	}
	else
	{
		Global_1633501.f_101682.f_62 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecscp") == 5)
	{
		Global_1633501.f_101682.f_54 = { unk_0x51AA166972995C47(iVar0, "ecscp") };
	}
	else
	{
		Global_1633501.f_101682.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecscr") == 3)
	{
		Global_1633501.f_101682.f_60 = unk_0x43D5E279656505E4(iVar0, "ecscr");
	}
	else
	{
		Global_1633501.f_101682.f_60 = 0f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ecscs") == 5)
	{
		Global_1633501.f_101682.f_57 = { unk_0x51AA166972995C47(iVar0, "ecscs") };
	}
	else
	{
		Global_1633501.f_101682.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/].f_1 = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/].f_2 = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_101682.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_101682.f_63[iVar8 /*12*/].f_4), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1633501.f_101682.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "clbscr") == 2)
	{
		Global_1633501.f_102696 = unk_0x37AC9FA286925FB3(iVar0, "clbscr");
	}
	else
	{
		Global_1633501.f_102696 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "disar") == 2)
	{
		Global_1633501.f_102697 = unk_0x37AC9FA286925FB3(iVar0, "disar");
	}
	else
	{
		Global_1633501.f_102697 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "rlopt") == 2)
	{
		Global_1633501.f_102485 = unk_0x37AC9FA286925FB3(iVar0, "rlopt");
	}
	else
	{
		Global_1633501.f_102485 = 0;
	}
	iVar15 = unk_0x37AC9FA286925FB3(iVar0, "gpmn");
	Global_1633501.f_90 = iVar15;
	iVar16 = unk_0x37AC9FA286925FB3(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1633501.f_89258 = iVar16;
	}
	else
	{
		Global_1633501.f_89258 = -1;
	}
	Global_1633501.f_89257 = unk_0x37AC9FA286925FB3(iVar0, "ausc");
	Global_1633501.f_26 = unk_0x37AC9FA286925FB3(iVar0, "minNu");
	Global_1633501.f_25 = unk_0x37AC9FA286925FB3(iVar0, "num");
	if (Global_1633501.f_25 == -1)
	{
		Global_1633501.f_25 = 30;
	}
	Global_1633501.f_27 = unk_0x37AC9FA286925FB3(iVar0, "time");
	Global_1633501.f_66 = { unk_0x51AA166972995C47(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1633501.f_102116 = { unk_0x51AA166972995C47(iVar0, &cVar17) };
	Global_1633501.f_102130 = unk_0x37AC9FA286925FB3(iVar0, "apwbs");
	Global_1633501.f_102119 = unk_0x37AC9FA286925FB3(iVar0, "wrploc");
	Global_1633501.f_102133 = unk_0x37AC9FA286925FB3(iVar0, "twrst");
	Global_1633501.f_102131 = unk_0x37AC9FA286925FB3(iVar0, "iplop");
	Global_1633501.f_102132 = unk_0x37AC9FA286925FB3(iVar0, "intop");
	if (unk_0x0481328AA6FEFDAB(iVar0, "copteam") == 2)
	{
		Global_1633501.f_42634 = unk_0x37AC9FA286925FB3(iVar0, "copteam");
	}
	else
	{
		Global_1633501.f_42634 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1633501.f_88955), unk_0x12A8355C6ACDA29F(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1633501.f_88955), "", 64);
	}
	iVar21 = 0;
	while (iVar21 <= 21)
	{
		StringCopy(&cVar9, "dmvft", 8);
		StringIntConCat(&cVar9, iVar21, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_42472[iVar21] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42472[iVar21] = 0;
		}
		iVar21++;
	}
	iVar15 = 0;
	while (iVar15 <= 3)
	{
		iVar22 = 0;
		while (iVar22 <= 1)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "fs", 8);
			StringIntConCat(&cVar9, iVar22, 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1633501.f_104735[iVar15 /*33*/][iVar22 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1633501.f_104735[iVar15 /*33*/][iVar22 /*16*/]), "", 64);
			}
			iVar22++;
		}
		iVar22 = 0;
		while (iVar22 <= 21)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "vl", 8);
			StringIntConCat(&cVar9, iVar22, 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
			{
				Global_1633501.f_41954[iVar15 /*23*/][iVar22] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_41954[iVar15 /*23*/][iVar22] = 0;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dvl", 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_42420[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42420[iVar15] = 0;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dv", 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_42425[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42425[iVar15] = 0;
		}
		iVar23 = 0;
		while (iVar23 <= 3)
		{
			iVar22 = 0;
			while (iVar22 <= 21)
			{
				StringCopy(&cVar9, "t", 8);
				StringIntConCat(&cVar9, iVar15, 8);
				StringIntConCat(&cVar9, iVar23, 8);
				StringConCat(&cVar9, "rv", 8);
				StringIntConCat(&cVar9, iVar22, 8);
				if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
				{
					Global_1633501.f_42047[iVar15 /*93*/][iVar23 /*23*/][iVar22] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
				}
				else
				{
					Global_1633501.f_42047[iVar15 /*93*/][iVar23 /*23*/][iVar22] = 0;
				}
				iVar22++;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dvl", 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
			{
				Global_1633501.f_42430[iVar15 /*5*/][iVar23] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_42430[iVar15 /*5*/][iVar23] = 0;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dv", 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
			{
				Global_1633501.f_42451[iVar15 /*5*/][iVar23] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_42451[iVar15 /*5*/][iVar23] = 0;
			}
			iVar23++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_89249[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_89249[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93135[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93135[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_104670[iVar15 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_104670[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_104868[iVar15 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_104868[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmrph", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_104933[iVar15 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_104933[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_104998[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_104998[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_102698[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102698[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_89271[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_89271[iVar15] = -1;
		}
		StringCopy(&cVar9, "cwtit", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_107509[iVar15 /*4*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1633501.f_107509[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwstr", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_107526[iVar15 /*4*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1633501.f_107526[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwspre", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107543[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_107543[iVar15] = -1;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107615 = unk_0x37AC9FA286925FB3(iVar0, "twti");
		}
		else
		{
			Global_1633501.f_107615 = 0;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107614 = unk_0x37AC9FA286925FB3(iVar0, "twpta");
		}
		else
		{
			Global_1633501.f_107614 = 0;
		}
		Global_1633501.f_107616 = unk_0x37AC9FA286925FB3(iVar0, "twct1");
		Global_1633501.f_107617 = unk_0x37AC9FA286925FB3(iVar0, "twct2");
		Global_1633501.f_107618 = unk_0x37AC9FA286925FB3(iVar0, "twct3");
		Global_1633501.f_107619 = unk_0x37AC9FA286925FB3(iVar0, "twct4");
		Global_1633501.f_107620 = unk_0x37AC9FA286925FB3(iVar0, "twcon");
		Global_1633501.f_107621 = unk_0x37AC9FA286925FB3(iVar0, "twcto");
		Global_1633501.f_107622 = unk_0x37AC9FA286925FB3(iVar0, "twcun");
		Global_1633501.f_107623 = unk_0x37AC9FA286925FB3(iVar0, "twcdi");
		Global_1633501.f_107624 = unk_0x37AC9FA286925FB3(iVar0, "svmrcvbr");
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar9, "kspt", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1633501.f_107679[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			StringCopy(&cVar9, "kspr", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1633501.f_107684[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			iVar2++;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107630 = unk_0x37AC9FA286925FB3(iVar0, "pptl");
		}
		else
		{
			Global_1633501.f_107630 = 5;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107629 = unk_0x37AC9FA286925FB3(iVar0, "ptltl");
		}
		else
		{
			Global_1633501.f_107629 = 0;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107700 = unk_0x37AC9FA286925FB3(iVar0, "ptlem");
		}
		else
		{
			Global_1633501.f_107700 = -1;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107625 = unk_0x37AC9FA286925FB3(iVar0, "trrt");
		}
		else
		{
			Global_1633501.f_107625 = 3;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107701 = unk_0x37AC9FA286925FB3(iVar0, "tptb");
		}
		else
		{
			Global_1633501.f_107701 = 5000;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107702 = unk_0x37AC9FA286925FB3(iVar0, "tprt");
		}
		else
		{
			Global_1633501.f_107702 = 2500;
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107703 = unk_0x37AC9FA286925FB3(iVar0, "ldpucd");
		}
		else
		{
			Global_1633501.f_107703 = 3000;
		}
		StringCopy(&cVar9, "rtveft", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_107573[iVar15] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_107573[iVar15] = 0;
		}
		iVar15++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1633501.f_88971), unk_0x12A8355C6ACDA29F(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1633501.f_88971), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "avss", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		Global_1633501.f_93081[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		iVar3 = func_221(iVar2);
		while (iVar3 <= 31)
		{
			unk_0x21E7933CCC7B3724(&(Global_1633501.f_93081[iVar2]), iVar3);
			iVar3++;
		}
		iVar2++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vsclout") == 2)
	{
		Global_1633501.f_93088[0] = unk_0x37AC9FA286925FB3(iVar0, "vsclout");
	}
	else
	{
		Global_1633501.f_93088[0] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vsthout") == 2)
	{
		Global_1633501.f_93088[1] = unk_0x37AC9FA286925FB3(iVar0, "vsthout");
	}
	else
	{
		Global_1633501.f_93088[1] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vshwout") == 2)
	{
		Global_1633501.f_93088[3] = unk_0x37AC9FA286925FB3(iVar0, "vshwout");
	}
	else
	{
		Global_1633501.f_93088[3] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vsenout") == 2)
	{
		Global_1633501.f_93088[2] = unk_0x37AC9FA286925FB3(iVar0, "vsenout");
	}
	else
	{
		Global_1633501.f_93088[2] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vstgout") == 2)
	{
		Global_1633501.f_93088[4] = unk_0x37AC9FA286925FB3(iVar0, "vstgout");
	}
	else
	{
		Global_1633501.f_93088[4] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vsbsout") == 2)
	{
		Global_1633501.f_93088[5] = unk_0x37AC9FA286925FB3(iVar0, "vsbsout");
	}
	else
	{
		Global_1633501.f_93088[5] = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "alfutvs") == 2)
	{
		Global_1633501.f_93095 = unk_0x37AC9FA286925FB3(iVar0, "alfutvs");
	}
	else
	{
		Global_1633501.f_93095 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vsdfstc") == 2)
	{
		Global_1633501.f_93096 = unk_0x37AC9FA286925FB3(iVar0, "vsdfstc");
	}
	else if (((!unk_0x48B8265059381CD0(Global_1633501.f_12, 23) && !unk_0x48B8265059381CD0(Global_1633501.f_12, 24)) && !unk_0x48B8265059381CD0(Global_1633501.f_13, 31)) && !unk_0x48B8265059381CD0(Global_1633501.f_14, 8))
	{
		Global_1633501.f_93096 = -1;
	}
	else if (((!unk_0x48B8265059381CD0(Global_1633501.f_12, 23) && unk_0x48B8265059381CD0(Global_1633501.f_12, 24)) && !unk_0x48B8265059381CD0(Global_1633501.f_13, 31)) && !unk_0x48B8265059381CD0(Global_1633501.f_14, 8))
	{
		Global_1633501.f_93096 = 0;
	}
	else if (((unk_0x48B8265059381CD0(Global_1633501.f_12, 23) && !unk_0x48B8265059381CD0(Global_1633501.f_12, 24)) && !unk_0x48B8265059381CD0(Global_1633501.f_13, 31)) && !unk_0x48B8265059381CD0(Global_1633501.f_14, 8))
	{
		Global_1633501.f_93096 = 1;
	}
	else if (((!unk_0x48B8265059381CD0(Global_1633501.f_12, 23) && !unk_0x48B8265059381CD0(Global_1633501.f_12, 24)) && unk_0x48B8265059381CD0(Global_1633501.f_13, 31)) && !unk_0x48B8265059381CD0(Global_1633501.f_14, 8))
	{
		Global_1633501.f_93096 = 2;
	}
	else if (((!unk_0x48B8265059381CD0(Global_1633501.f_12, 23) && !unk_0x48B8265059381CD0(Global_1633501.f_12, 24)) && !unk_0x48B8265059381CD0(Global_1633501.f_13, 31)) && unk_0x48B8265059381CD0(Global_1633501.f_14, 8))
	{
		Global_1633501.f_93096 = 3;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "dspteam") == 2)
	{
		Global_1633501.f_102721 = unk_0x37AC9FA286925FB3(iVar0, "dspteam");
	}
	else
	{
		Global_1633501.f_102721 = -1;
	}
	if (!func_104() && !func_220())
	{
		if (unk_0xFB0F923C474E44C0(iParam1))
		{
			StringCopy(&(Global_1633501.f_88653), unk_0x12A8355C6ACDA29F(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_88653), func_219(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1633501.f_88653), unk_0x12A8355C6ACDA29F(iVar0, "nm"), 64);
	}
	Global_1633501.f_89301 = unk_0x37AC9FA286925FB3(iVar0, "mgrk");
	Global_1633501.f_89302 = unk_0x37AC9FA286925FB3(iVar0, "mght");
	StringCopy(&(Global_1633501.f_88675[0 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[1 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[2 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[3 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[4 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[5 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[6 /*16*/]), "", 64);
	StringCopy(&(Global_1633501.f_88675[7 /*16*/]), "", 64);
	uVar24 = unk_0x72C98FCC21DF47AA(iVar0, "dec");
	iVar25 = unk_0x761258E562C07369(unk_0xC250F19D1D16764D(uVar24, 0));
	if (iParam1 == -1 || unk_0xFB0F923C474E44C0(iParam1))
	{
		if (iVar25 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x685173272EC83DA9(iVar24) - 1))
			{
				StringCopy(&(Global_1633501.f_88675[iVar2 /*16*/]), unk_0xC250F19D1D16764D(iVar24, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar27 = unk_0xC250F19D1D16764D(iVar24, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar25 > (63 * iVar2))
				{
					if (iVar25 > (63 * iVar2) + 63)
					{
						iVar26 = (63 * iVar2) + 63;
					}
					else
					{
						iVar26 = iVar25;
					}
					StringCopy(&(Global_1633501.f_88675[iVar2 /*16*/]), unk_0x7EA75A85B76F0078(sVar27, (63 * iVar2), iVar26), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1633501.f_88675[0 /*16*/]), func_219(), 64);
	}
	Global_1633501.f_30 = unk_0x37AC9FA286925FB3(iVar0, "tnum");
	Global_1633501.f_31 = unk_0x37AC9FA286925FB3(iVar0, "mtnum");
	if (!func_218())
	{
		if (!unk_0x48B8265059381CD0(Global_1633501.f_15, 14))
		{
			Global_1633501.f_29 = Global_1633501.f_30;
		}
		else if (unk_0x0481328AA6FEFDAB(iVar0, "dtn") == 2)
		{
			Global_1633501.f_29 = unk_0x37AC9FA286925FB3(iVar0, "dtn");
		}
		else
		{
			Global_1633501.f_29 = Global_1633501.f_30;
		}
	}
	else
	{
		Global_1633501.f_29 = Global_1633501.f_30;
	}
	if (Global_1633501 == 0)
	{
		if (Global_2443134.f_548.f_11 != 0 && Global_1633501.f_30 != Global_2443134.f_548.f_11)
		{
			if (!Global_262145.f_4871 && func_60(Global_1633501.f_107548))
			{
				iVar28 = func_217();
				if (Global_2443134.f_548.f_11 < iVar28)
				{
					Global_2443134.f_548.f_11 = iVar28;
					if (unk_0xBE369BE1BC57A796() != -1)
					{
						Global_1618300[unk_0xBE369BE1BC57A796() /*35*/] = Global_2443134.f_548.f_11;
					}
				}
			}
			Global_1633501.f_30 = Global_2443134.f_548.f_11;
			Global_1633501.f_29 = Global_1633501.f_30;
		}
		else if (func_214() && func_213())
		{
			iVar29 = func_217();
			fVar30 = (unk_0xBBDA792448DB5A89(iVar29) / unk_0xBBDA792448DB5A89(Global_1633501.f_25));
			iVar31 = 0;
			if (Global_1633501.f_30 == 3)
			{
				if (fVar30 <= 0.66f)
				{
					Global_1633501.f_30 = 2;
					iVar31 = 1;
				}
			}
			else if (Global_1633501.f_30 == 4)
			{
				if (fVar30 <= 0.5f)
				{
					Global_1633501.f_30 = 2;
					iVar31 = 1;
				}
				else if (fVar30 <= 0.75f)
				{
					Global_1633501.f_30 = 3;
					iVar31 = 1;
				}
			}
			if (iVar31 && Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 >= Global_1633501.f_30)
			{
				Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_96.f_28 = func_211(Global_1633501.f_30);
			}
			if (Global_1633501.f_29 > Global_1633501.f_30)
			{
				Global_1633501.f_29 = Global_1633501.f_30;
			}
		}
	}
	if (Global_1633501 == 1)
	{
		if (Global_1633501.f_30 > 4)
		{
			Global_1633501.f_30 = 4;
		}
	}
	else if (Global_1633501.f_30 > 4)
	{
		Global_1633501.f_30 = 4;
	}
	Global_1633501.f_80206 = unk_0x37AC9FA286925FB3(iVar0, "atmdm");
	Global_1633501.f_44 = unk_0x37AC9FA286925FB3(iVar0, "trel");
	Global_1633501.f_89267 = unk_0x37AC9FA286925FB3(iVar0, "ltm");
	Global_1633501.f_72 = { unk_0x51AA166972995C47(iVar0, "vcpr") };
	if (unk_0x0481328AA6FEFDAB(iVar0, "hstat") == 2)
	{
		Global_1633501.f_89238 = unk_0x37AC9FA286925FB3(iVar0, "hstat");
	}
	else
	{
		Global_1633501.f_89238 = 0;
	}
	iVar32 = 0;
	while (iVar32 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar32, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_61912[iVar32 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_61912[iVar32 /*3*/] = { 0f, 0f, 0f };
		}
		iVar32++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "numzr") == 2)
	{
		Global_1633501.f_61973 = unk_0x37AC9FA286925FB3(iVar0, "numzr");
	}
	else
	{
		Global_1633501.f_61973 = 0;
	}
	iVar33 = unk_0x489F243BF1619568(iParam0, "ene");
	iVar34 = unk_0x37AC9FA286925FB3(iVar33, "no");
	iVar2 = 0;
	while (iVar2 < 5)
	{
		StringCopy(&cVar9, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar9, iVar2 + 1, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2 && iVar34 > unk_0x37AC9FA286925FB3(iVar0, &cVar9))
		{
			Global_1633501.f_80077[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_80077[iVar2] = -1;
		}
		iVar2++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "rsgmx") == 2 && unk_0x0481328AA6FEFDAB(iVar0, "rsgnu") == 2)
	{
		Global_1633501.f_80083 = unk_0x37AC9FA286925FB3(iVar0, "rsgmx");
		Global_1633501.f_80084 = unk_0x37AC9FA286925FB3(iVar0, "rsgnu");
		Global_1633501.f_80085 = unk_0x37AC9FA286925FB3(iVar0, "rsgbs");
		if (Global_1633501.f_80083 > 0 && Global_1633501.f_80084 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_1633501.f_80083 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar9, "rsg", 8);
					StringIntConCat(&cVar9, iVar2, 8);
					MemCopy(&cVar35, {cVar9}, 4);
					StringConCat(&cVar35, "mx", 16);
					MemCopy(&cVar39, {cVar9}, 4);
					StringConCat(&cVar39, "nu", 16);
					if (unk_0x0481328AA6FEFDAB(iVar0, &cVar35) == 2 && unk_0x0481328AA6FEFDAB(iVar0, &cVar39) == 2)
					{
						Global_1633501.f_80086[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar35);
						Global_1633501.f_80097[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar39);
						MemCopy(&cVar35, {cVar9}, 4);
						StringConCat(&cVar35, "bs", 16);
						Global_1633501.f_80108[iVar2] = unk_0x37AC9FA286925FB3(iVar0, &cVar35);
					}
				}
				iVar2++;
			}
		}
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "tshd") == 2)
	{
		Global_1633501.f_89290 = unk_0x37AC9FA286925FB3(iVar0, "tshd");
	}
	else
	{
		Global_1633501.f_89290 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "mrd") == 2)
	{
		Global_1633501.f_89291 = unk_0x37AC9FA286925FB3(iVar0, "mrd");
	}
	else
	{
		Global_1633501.f_89291 = 15;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "etim") == 3)
	{
		Global_1633501.f_89293 = unk_0x43D5E279656505E4(iVar0, "etim");
	}
	else
	{
		Global_1633501.f_89293 = 2.5f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "evel") == 3)
	{
		Global_1633501.f_89294 = unk_0x43D5E279656505E4(iVar0, "evel");
	}
	else
	{
		Global_1633501.f_89294 = 8f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "etimb") == 3)
	{
		Global_1633501.f_89295 = unk_0x43D5E279656505E4(iVar0, "etimb");
	}
	else
	{
		Global_1633501.f_89295 = 2.5f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "evelb") == 3)
	{
		Global_1633501.f_89296 = unk_0x43D5E279656505E4(iVar0, "evelb");
	}
	else
	{
		Global_1633501.f_89296 = 8f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "srct") == 2)
	{
		Global_1633501.f_89292 = unk_0x37AC9FA286925FB3(iVar0, "srct");
	}
	else
	{
		Global_1633501.f_89292 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "tptbd") == 2)
	{
		Global_1633501.f_89297 = unk_0x37AC9FA286925FB3(iVar0, "tptbd");
	}
	else
	{
		Global_1633501.f_89297 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "tptba") == 2)
	{
		Global_1633501.f_89298 = unk_0x37AC9FA286925FB3(iVar0, "tptba");
	}
	else
	{
		Global_1633501.f_89298 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atspos") == 5)
	{
		Global_1633501.f_104568 = { unk_0x51AA166972995C47(iVar0, "atspos") };
	}
	else
	{
		Global_1633501.f_104568 = { 0f, 0f, 0f };
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atscmp") == 5)
	{
		Global_1633501.f_104562 = { unk_0x51AA166972995C47(iVar0, "atscmp") };
	}
	else
	{
		Global_1633501.f_104562 = { 0f, 0f, 0f };
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atscmr") == 5)
	{
		Global_1633501.f_104565 = { unk_0x51AA166972995C47(iVar0, "atscmr") };
	}
	else
	{
		Global_1633501.f_104565 = { 0f, 0f, 0f };
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atsfov") == 3)
	{
		Global_1633501.f_104571 = unk_0x43D5E279656505E4(iVar0, "atsfov");
	}
	else
	{
		Global_1633501.f_104571 = 45f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atshed") == 3)
	{
		Global_1633501.f_104572 = unk_0x43D5E279656505E4(iVar0, "atshed");
	}
	else
	{
		Global_1633501.f_104572 = 0f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "atsveh") == 2)
	{
		Global_1633501.f_104573 = unk_0x37AC9FA286925FB3(iVar0, "atsveh");
	}
	else
	{
		Global_1633501.f_104573 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hpdt1") == 2)
	{
		Global_1633501.f_89239[0] = unk_0x37AC9FA286925FB3(iVar0, "hpdt1");
	}
	else
	{
		Global_1633501.f_89239[0] = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hpdt2") == 2)
	{
		Global_1633501.f_89239[1] = unk_0x37AC9FA286925FB3(iVar0, "hpdt2");
	}
	else
	{
		Global_1633501.f_89239[1] = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vdt") == 2)
	{
		Global_1633501.f_89242 = unk_0x37AC9FA286925FB3(iVar0, "vdt");
	}
	else
	{
		Global_1633501.f_89242 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrbs") == 2)
	{
		Global_1633501.f_102703 = unk_0x37AC9FA286925FB3(iVar0, "hbrbs");
	}
	else
	{
		Global_1633501.f_102703 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrtt") == 2)
	{
		Global_1633501.f_102704 = unk_0x37AC9FA286925FB3(iVar0, "hbrtt");
	}
	else
	{
		Global_1633501.f_102704 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrttm") == 2)
	{
		Global_1633501.f_102705 = unk_0x37AC9FA286925FB3(iVar0, "hbrttm");
	}
	else
	{
		Global_1633501.f_102705 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrtrl") == 2)
	{
		Global_1633501.f_102706 = unk_0x37AC9FA286925FB3(iVar0, "hbrtrl");
	}
	else
	{
		Global_1633501.f_102706 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrpdt") == 2)
	{
		Global_1633501.f_102708 = unk_0x37AC9FA286925FB3(iVar0, "hbrpdt");
	}
	else
	{
		Global_1633501.f_102708 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrvdt") == 2)
	{
		Global_1633501.f_102710 = unk_0x37AC9FA286925FB3(iVar0, "hbrvdt");
	}
	else
	{
		Global_1633501.f_102710 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrkt") == 2)
	{
		Global_1633501.f_102712 = unk_0x37AC9FA286925FB3(iVar0, "hbrkt");
	}
	else
	{
		Global_1633501.f_102712 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hbrph") == 2)
	{
		Global_1633501.f_102715 = unk_0x37AC9FA286925FB3(iVar0, "hbrph");
	}
	else
	{
		Global_1633501.f_102715 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "hecam") == 2)
	{
		Global_1633501.f_102716 = unk_0x37AC9FA286925FB3(iVar0, "hecam");
	}
	else
	{
		Global_1633501.f_102716 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "sdrvm") == 2)
	{
		Global_1633501.f_105016 = unk_0x37AC9FA286925FB3(iVar0, "sdrvm");
	}
	else
	{
		Global_1633501.f_105016 = 10000;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "inumbnc") == 2)
	{
		Global_1633501.f_105030 = unk_0x37AC9FA286925FB3(iVar0, "inumbnc");
	}
	else
	{
		Global_1633501.f_105030 = 10000;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "mdmgm") == 3)
	{
		Global_1633501.f_105017 = unk_0x43D5E279656505E4(iVar0, "mdmgm");
	}
	else
	{
		Global_1633501.f_105017 = 1f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "itsms") == 2)
	{
		Global_1633501.f_107664 = unk_0x37AC9FA286925FB3(iVar0, "itsms");
	}
	else
	{
		Global_1633501.f_107664 = 1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "igls") == 2)
	{
		Global_1633501.f_107665 = unk_0x37AC9FA286925FB3(iVar0, "igls");
	}
	else
	{
		Global_1633501.f_107665 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "twdas") == 3)
	{
		Global_1633501.f_105018 = unk_0x43D5E279656505E4(iVar0, "twdas");
	}
	else
	{
		Global_1633501.f_105018 = 0f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vdt") == 2)
	{
		Global_1633501.f_107549 = unk_0x37AC9FA286925FB3(iVar0, "sphft");
	}
	else
	{
		Global_1633501.f_107549 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vdt") == 2)
	{
		Global_1633501.f_107571 = unk_0x37AC9FA286925FB3(iVar0, "cmxdftms");
	}
	else
	{
		Global_1633501.f_107571 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cmxtliv") == 2)
	{
		Global_1633501.f_107588 = unk_0x37AC9FA286925FB3(iVar0, "cmxtliv");
	}
	else
	{
		Global_1633501.f_107588 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cmxdctl") == 2)
	{
		Global_1633501.f_107589 = unk_0x37AC9FA286925FB3(iVar0, "cmxdctl");
	}
	else
	{
		Global_1633501.f_107589 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cmxmctl") == 2)
	{
		Global_1633501.f_107590 = unk_0x37AC9FA286925FB3(iVar0, "cmxmctl");
	}
	else
	{
		Global_1633501.f_107590 = 0;
	}
	if (((unk_0x0481328AA6FEFDAB(iVar0, "hmmtt") == 2 && unk_0x0481328AA6FEFDAB(iVar0, "hmmts") == 2) && unk_0x0481328AA6FEFDAB(iVar0, "hmmte") == 2) && unk_0x0481328AA6FEFDAB(iVar0, "hmmth") == 2)
	{
		Global_1633501.f_102717 = unk_0x37AC9FA286925FB3(iVar0, "hmmtt");
		Global_1633501.f_102718 = unk_0x37AC9FA286925FB3(iVar0, "hmmts");
		Global_1633501.f_102719 = unk_0x37AC9FA286925FB3(iVar0, "hmmte");
		Global_1633501.f_102720 = unk_0x37AC9FA286925FB3(iVar0, "hmmth");
	}
	else
	{
		Global_1633501.f_102717 = 0;
		Global_1633501.f_102718 = 0;
		Global_1633501.f_102719 = 0;
		Global_1633501.f_102720 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "tstrm") == 2)
	{
		Global_1633501.f_104509 = unk_0x37AC9FA286925FB3(iVar0, "tstrm");
	}
	else
	{
		Global_1633501.f_104509 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_92685[iVar2 /*8*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1633501.f_92685[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_79920[iVar2 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_79920[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_79969[iVar2 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_79969[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_80018[iVar2 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_80018[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "otxsgo", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_80119[iVar2 /*16*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_80119[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar9, "ofit", 8);
			StringIntConCat(&cVar9, iVar3 + 1, 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
			{
				Global_1633501.f_93019[iVar43 /*14*/][iVar3] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93112[iVar43 /*2*/][0] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93112[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93126[iVar43 /*2*/][0] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93126[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93097[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93097[iVar43] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93102[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93102[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_102120[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102120[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_102125[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102125[iVar43] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2 && !func_177())
		{
			Global_1633501.f_102459[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102459[iVar43] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar9, "trcmn", 8);
			StringIntConCat(&cVar9, iVar3, 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2 && !func_177())
			{
				Global_1633501.f_102464[iVar43 /*5*/][iVar3] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_102464[iVar43 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_102486[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102486[iVar43] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_42607[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42607[iVar43] = 100;
		}
		StringCopy(&cVar9, "tmvds", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 3)
		{
			Global_1633501.f_42612[iVar43] = unk_0x43D5E279656505E4(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42612[iVar43] = 1f;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_42627[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_42627[iVar43] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_88187[iVar43 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_88187[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_88200[iVar43 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_88200[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 3)
		{
			Global_1633501.f_88213[iVar43] = unk_0x43D5E279656505E4(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_88213[iVar43] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93076[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93076[iVar43] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_93121[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_93121[iVar43] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_85058[iVar43] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_85058[iVar43] = -1;
		}
		iVar44 = 0;
		while (iVar44 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 5)
			{
				Global_1633501.f_88312[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar11) };
			}
			else
			{
				Global_1633501.f_88312[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trstf", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 5)
			{
				Global_1633501.f_88466[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar11) };
			}
			else
			{
				Global_1633501.f_88466[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 3)
			{
				Global_1633501.f_88421[iVar43 /*11*/][iVar44 /*5*/][0] = unk_0x43D5E279656505E4(iVar0, &cVar11);
			}
			else
			{
				Global_1633501.f_88421[iVar43 /*11*/][iVar44 /*5*/][0] = 0f;
			}
			iVar45 = 0;
			while (iVar45 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 5)
				{
					Global_1633501.f_88312[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar11) };
				}
				else
				{
					Global_1633501.f_88312[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 3)
				{
					Global_1633501.f_88421[iVar43 /*11*/][iVar44 /*5*/][iVar45] = unk_0x43D5E279656505E4(iVar0, &cVar11);
				}
				else
				{
					Global_1633501.f_88421[iVar43 /*11*/][iVar44 /*5*/][iVar45] = 0f;
				}
				iVar45++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			StringIntConCat(&cVar9, iVar44, 8);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
			{
				Global_1633501.f_105003[iVar43 /*3*/][iVar44] = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_105003[iVar43 /*3*/][iVar44] = 0;
			}
			iVar44++;
		}
		iVar46 = 0;
		while (iVar46 <= 3)
		{
			StringCopy(&cVar11, "iltt", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			StringIntConCat(&cVar11, iVar46, 16);
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 2)
			{
				Global_1633501.f_107550[iVar43 /*5*/][iVar46] = unk_0x37AC9FA286925FB3(iVar0, &cVar11);
			}
			else
			{
				Global_1633501.f_107550[iVar43 /*5*/][iVar46] = 0;
			}
			iVar46++;
		}
		iVar44 = 0;
		while (iVar44 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar9, iVar44, 8);
			}
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
			{
				Global_1633501.f_104575[iVar43 /*13*/][iVar44 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
			}
			else
			{
				Global_1633501.f_104575[iVar43 /*13*/][iVar44 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar9, iVar44, 8);
			}
			if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 3)
			{
				Global_1633501.f_104628[iVar43 /*5*/][iVar44] = unk_0x43D5E279656505E4(iVar0, &cVar9);
			}
			else
			{
				Global_1633501.f_104628[iVar43 /*5*/][iVar44] = -1f;
			}
			iVar44++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_104513[iVar43 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_104513[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_104526[iVar43 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_104526[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 5)
		{
			Global_1633501.f_104539[iVar43 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar9) };
		}
		else
		{
			Global_1633501.f_104539[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 3)
		{
			Global_1633501.f_104552[iVar43] = unk_0x43D5E279656505E4(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_104552[iVar43] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 3)
		{
			Global_1633501.f_104557[iVar43] = unk_0x43D5E279656505E4(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_104557[iVar43] = 0f;
		}
		iVar43++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1633501.f_102134[iVar2 /*18*/]), unk_0x12A8355C6ACDA29F(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1633501.f_102134[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2)
		{
			Global_1633501.f_102134[iVar2 /*18*/].f_16 = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102134[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar9) == 2 && !unk_0x9C88EB7B70229335(&(Global_1633501.f_102134[iVar2 /*18*/])))
		{
			Global_1633501.f_102134[iVar2 /*18*/].f_17 = unk_0x37AC9FA286925FB3(iVar0, &cVar9);
		}
		else
		{
			Global_1633501.f_102134[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cposr") == 3)
	{
		Global_1633501.f_105031 = unk_0x43D5E279656505E4(iVar0, "cposr");
	}
	else
	{
		Global_1633501.f_105031 = 60f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cporv") == 3)
	{
		Global_1633501.f_105034 = unk_0x43D5E279656505E4(iVar0, "cporv");
	}
	else
	{
		Global_1633501.f_105034 = -1f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmbbp") == 2)
	{
		Global_1633501.f_105020 = unk_0x37AC9FA286925FB3(iVar0, "bmbbp");
	}
	else
	{
		Global_1633501.f_105020 = 2;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmber") == 2)
	{
		Global_1633501.f_105021 = unk_0x37AC9FA286925FB3(iVar0, "bmber");
	}
	else
	{
		Global_1633501.f_105021 = 2;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmbet") == 2)
	{
		Global_1633501.f_105022 = unk_0x37AC9FA286925FB3(iVar0, "bmbet");
	}
	else
	{
		Global_1633501.f_105022 = 3000;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmbsi") == 2)
	{
		Global_1633501.f_105023 = unk_0x37AC9FA286925FB3(iVar0, "bmbsi");
	}
	else
	{
		Global_1633501.f_105023 = 150;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmbdi") == 3)
	{
		Global_1633501.f_105024 = unk_0x43D5E279656505E4(iVar0, "bmbdi");
	}
	else
	{
		Global_1633501.f_105024 = 3f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bmbio") == 3)
	{
		Global_1633501.f_105025 = unk_0x43D5E279656505E4(iVar0, "bmbio");
	}
	else
	{
		Global_1633501.f_105025 = 1f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "fvjhdt") == 2)
	{
		Global_1633501.f_105026 = unk_0x37AC9FA286925FB3(iVar0, "fvjhdt");
	}
	else
	{
		Global_1633501.f_105026 = 25;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "fvjhmd") == 2)
	{
		Global_1633501.f_105027 = unk_0x37AC9FA286925FB3(iVar0, "fvjhmd");
	}
	else
	{
		Global_1633501.f_105027 = 5;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "fvjfvd") == 2)
	{
		Global_1633501.f_105028 = unk_0x37AC9FA286925FB3(iVar0, "fvjfvd");
	}
	else
	{
		Global_1633501.f_105028 = 5;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "fvjfvc") == 2)
	{
		Global_1633501.f_105029 = unk_0x37AC9FA286925FB3(iVar0, "fvjfvc");
	}
	else
	{
		Global_1633501.f_105029 = 2;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cpopr") == 3)
	{
		Global_1633501.f_105032 = unk_0x43D5E279656505E4(iVar0, "cpopr");
	}
	else
	{
		Global_1633501.f_105032 = 5f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cpohr") == 3)
	{
		Global_1633501.f_105033 = unk_0x43D5E279656505E4(iVar0, "cpohr");
	}
	else
	{
		Global_1633501.f_105033 = 60f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bevhtd") == 3)
	{
		Global_1633501.f_42495 = unk_0x43D5E279656505E4(iVar0, "bevhtd");
	}
	else
	{
		Global_1633501.f_42495 = 0.075f;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		StringCopy(&cVar11, "fsclv", 16);
		StringIntConCat(&cVar11, iVar2, 16);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 5)
		{
			Global_1633501.f_42498[iVar2 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar11) };
		}
		else
		{
			Global_1633501.f_42498[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar11, "fsclr", 16);
		StringIntConCat(&cVar11, iVar2, 16);
		if (unk_0x0481328AA6FEFDAB(iVar0, &cVar11) == 5)
		{
			Global_1633501.f_42529[iVar2 /*3*/] = { unk_0x51AA166972995C47(iVar0, &cVar11) };
		}
		else
		{
			Global_1633501.f_42529[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		iVar2++;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "bevhdd") == 3)
	{
		Global_1633501.f_105033 = unk_0x43D5E279656505E4(iVar0, "bevhdd");
	}
	else
	{
		Global_1633501.f_105033 = 0.075f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc0") == 2)
	{
		Global_1633501.f_105035 = unk_0x37AC9FA286925FB3(iVar0, "ratc0");
	}
	else
	{
		Global_1633501.f_105035 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc1") == 2)
	{
		Global_1633501.f_105036 = unk_0x37AC9FA286925FB3(iVar0, "ratc1");
	}
	else
	{
		Global_1633501.f_105036 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc2") == 2)
	{
		Global_1633501.f_105037 = unk_0x37AC9FA286925FB3(iVar0, "ratc2");
	}
	else
	{
		Global_1633501.f_105037 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc3") == 2)
	{
		Global_1633501.f_105038 = unk_0x37AC9FA286925FB3(iVar0, "ratc3");
	}
	else
	{
		Global_1633501.f_105038 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc4") == 2)
	{
		Global_1633501.f_105039 = unk_0x37AC9FA286925FB3(iVar0, "ratc4");
	}
	else
	{
		Global_1633501.f_105039 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc5") == 2)
	{
		Global_1633501.f_105040 = unk_0x37AC9FA286925FB3(iVar0, "ratc5");
	}
	else
	{
		Global_1633501.f_105040 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc6") == 2)
	{
		Global_1633501.f_105041 = unk_0x37AC9FA286925FB3(iVar0, "ratc6");
	}
	else
	{
		Global_1633501.f_105041 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc9") == 2)
	{
		Global_1633501.f_105045 = unk_0x37AC9FA286925FB3(iVar0, "ratc9");
	}
	else
	{
		Global_1633501.f_105045 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc7") == 2)
	{
		Global_1633501.f_105043 = unk_0x37AC9FA286925FB3(iVar0, "ratc7");
	}
	else
	{
		Global_1633501.f_105043 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratc8") == 2)
	{
		Global_1633501.f_105044 = unk_0x37AC9FA286925FB3(iVar0, "ratc8");
	}
	else
	{
		Global_1633501.f_105044 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ratcm") == 3)
	{
		Global_1633501.f_105042 = unk_0x43D5E279656505E4(iVar0, "ratcm");
	}
	else
	{
		Global_1633501.f_105042 = -1f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "cdrt") == 3)
	{
		Global_1633501.f_105047 = unk_0x43D5E279656505E4(iVar0, "cdrt");
	}
	else
	{
		Global_1633501.f_105047 = -1f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_1633501.f_105048), unk_0x12A8355C6ACDA29F(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1633501.f_105048), "", 16);
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_1633501.f_105052), unk_0x12A8355C6ACDA29F(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1633501.f_105052), "", 16);
	}
	func_210();
	if (unk_0x0481328AA6FEFDAB(iVar0, "ssdsp") == 5)
	{
		Global_1633501.f_107502 = { unk_0x51AA166972995C47(iVar0, "ssdsp") };
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ssdsr") == 3)
	{
		Global_1633501.f_107505 = unk_0x43D5E279656505E4(iVar0, "ssdsr");
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ssder") == 3)
	{
		Global_1633501.f_107506 = unk_0x43D5E279656505E4(iVar0, "ssder");
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ssdst") == 2)
	{
		Global_1633501.f_107507 = unk_0x37AC9FA286925FB3(iVar0, "ssdst");
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "ssdtg") == 2)
	{
		Global_1633501.f_107508 = unk_0x37AC9FA286925FB3(iVar0, "ssdtg");
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp0") == 2)
	{
		Global_1633501.f_107666 = unk_0x37AC9FA286925FB3(iVar0, "vwp0");
	}
	else
	{
		Global_1633501.f_107666 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp1") == 2)
	{
		Global_1633501.f_107667 = unk_0x37AC9FA286925FB3(iVar0, "vwp1");
	}
	else
	{
		Global_1633501.f_107667 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp2") == 2)
	{
		Global_1633501.f_107669 = unk_0x37AC9FA286925FB3(iVar0, "vwp2");
	}
	else
	{
		Global_1633501.f_107669 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp3") == 2)
	{
		Global_1633501.f_107670 = unk_0x37AC9FA286925FB3(iVar0, "vwp3");
	}
	else
	{
		Global_1633501.f_107670 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp4") == 2)
	{
		Global_1633501.f_107671 = unk_0x37AC9FA286925FB3(iVar0, "vwp4");
	}
	else
	{
		Global_1633501.f_107671 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp5") == 2)
	{
		Global_1633501.f_107668 = unk_0x37AC9FA286925FB3(iVar0, "vwp5");
	}
	else
	{
		Global_1633501.f_107668 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp15") == 2)
	{
		Global_1633501.f_107673 = unk_0x37AC9FA286925FB3(iVar0, "vwp15");
	}
	else
	{
		Global_1633501.f_107673 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwp16") == 2)
	{
		Global_1633501.f_107674 = unk_0x37AC9FA286925FB3(iVar0, "vwp16");
	}
	else
	{
		Global_1633501.f_107674 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwpbhd") == 2)
	{
		Global_1633501.f_107672 = unk_0x37AC9FA286925FB3(iVar0, "vwpbhd");
	}
	else
	{
		Global_1633501.f_107672 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwprbs") == 2)
	{
		Global_1633501.f_107678 = unk_0x37AC9FA286925FB3(iVar0, "vwprbs");
	}
	else
	{
		Global_1633501.f_107678 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwmgfr") == 2)
	{
		Global_1633501.f_107696 = unk_0x37AC9FA286925FB3(iVar0, "vwmgfr");
	}
	else
	{
		Global_1633501.f_107696 = 5;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwmgda") == 2)
	{
		Global_1633501.f_107697 = unk_0x37AC9FA286925FB3(iVar0, "vwmgda");
	}
	else
	{
		Global_1633501.f_107697 = 350;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwmgnb") == 2)
	{
		Global_1633501.f_107698 = unk_0x37AC9FA286925FB3(iVar0, "vwmgnb");
	}
	else
	{
		Global_1633501.f_107698 = 100;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "crttn") == 2)
	{
		Global_1633501.f_107699 = unk_0x37AC9FA286925FB3(iVar0, "crttn");
	}
	else
	{
		Global_1633501.f_107699 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "smoc") == 2)
	{
		Global_1633501.f_42497 = unk_0x37AC9FA286925FB3(iVar0, "smoc");
	}
	else
	{
		Global_1633501.f_42497 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "otrds") == 2)
	{
		Global_1633501.f_107947 = unk_0x37AC9FA286925FB3(iVar0, "otrds");
	}
	else
	{
		Global_1633501.f_107947 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "otsdr") == 2)
	{
		Global_1633501.f_107949 = unk_0x37AC9FA286925FB3(iVar0, "otsdr");
	}
	else
	{
		Global_1633501.f_107949 = -1;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "otrsc") == 2)
	{
		Global_1633501.f_107950 = unk_0x37AC9FA286925FB3(iVar0, "otrsc");
	}
	else
	{
		Global_1633501.f_107950 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "otrpc") == 2)
	{
		Global_1633501.f_107948 = unk_0x37AC9FA286925FB3(iVar0, "otrpc");
	}
	else
	{
		Global_1633501.f_107948 = 0;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "vwprbs") == 2)
	{
		Global_1633501.f_107678 = unk_0x37AC9FA286925FB3(iVar0, "vwprbs");
	}
	else
	{
		Global_1633501.f_107678 = 0;
	}
	Global_1633501.f_107689 = { unk_0x51AA166972995C47(iVar0, "vtwsp") };
	Global_1633501.f_107692 = { unk_0x51AA166972995C47(iVar0, "vtwsr") };
	if (unk_0x0481328AA6FEFDAB(iVar0, "tsc3") == 3)
	{
		Global_1633501.f_107675 = unk_0x43D5E279656505E4(iVar0, "tsc3");
	}
	else
	{
		Global_1633501.f_107675 = 0f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "tsc4") == 3)
	{
		Global_1633501.f_107676 = unk_0x43D5E279656505E4(iVar0, "tsc4");
	}
	else
	{
		Global_1633501.f_107676 = 0f;
	}
	if (unk_0x0481328AA6FEFDAB(iVar0, "csstd") == 2)
	{
		Global_1633501.f_107677 = unk_0x37AC9FA286925FB3(iVar0, "csstd");
	}
	else
	{
		Global_1633501.f_107677 = -1;
	}
}

void func_210()
{
	Global_1633501.f_107502 = { 0f, 0f, 0f };
	Global_1633501.f_107505 = 30f;
	Global_1633501.f_107506 = 5f;
	Global_1633501.f_107507 = 30000;
	Global_1633501.f_107508 = 15000;
}

int func_211(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = unk_0x0C36F33B3F746611(iVar0);
		if ((unk_0x7268A1112372AA44(iVar5) && unk_0xD54DE3C9493BFEC2(iVar5)) && iVar5 != unk_0xBE369BE1BC57A796())
		{
			iVar2 = iVar5;
			if ((!func_212(iVar5) && Global_1591201[iVar2 /*602*/].f_203 != 8) && !unk_0x48B8265059381CD0(Global_1591201[iVar2 /*602*/].f_39.f_18, 14))
			{
				if (Global_1591201[iVar2 /*602*/].f_96.f_28 != -1)
				{
					unk_0xEB79FECD9022AAF0(&uVar1, Global_1591201[iVar2 /*602*/].f_96.f_28);
					if (Global_1591201[iVar2 /*602*/].f_96.f_28 >= iParam0 && iVar2 < unk_0xBE369BE1BC57A796())
					{
						bVar4 = true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (!unk_0x48B8265059381CD0(uVar1, iVar0))
		{
			if (bVar4)
			{
				bVar4 = false;
			}
			else
			{
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_212(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_1591201[iParam0 /*602*/].f_96.f_32, 5);
}

var func_213()
{
	return Global_1742351.f_3;
}

int func_214()
{
	if (unk_0xF7271A9481CAC8E3())
	{
		return func_216();
	}
	return func_215(Global_1633501.f_88646);
}

int func_215(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_216()
{
	return Global_2443134.f_12;
}

int func_217()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C36F33B3F746611(iVar0);
		if ((((unk_0x7268A1112372AA44(iVar2) && unk_0xD54DE3C9493BFEC2(iVar2)) && !func_212(iVar2)) && Global_1591201[iVar2 /*602*/].f_203 != 8) && !unk_0x48B8265059381CD0(Global_1591201[iVar2 /*602*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_218()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_548.f_1, 0);
}

var func_219()
{
	return unk_0xC7E52B74A3B4973C("CREATOR_NO_T");
}

bool func_220()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_139, 0);
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		
		case 1:
			return 13;
		
		case 3:
			return 6;
		
		case 2:
			return 2;
		
		case 4:
			return 12;
		
		case 5:
			return 25;
		
		default:
	}
	return 0;
}

void func_222()
{
	if (func_223())
	{
		Global_2450895.f_8 = 1;
	}
	Global_2450895.f_7 = 1;
}

bool func_223()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 11);
}

int func_224(int iParam0)
{
	if (unk_0xF20D8448F6AFC86C() || (unk_0x7C2F31E78C33DE0F() && iParam0 == 0))
	{
		if (unk_0x5DC8C64FE18EADF7(1) == 0 || unk_0xD4AA13DCCEC54C48(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5DC8C64FE18EADF7(1) == 0)
	{
		return 0;
	}
	if (func_225() == 0)
	{
		return 0;
	}
	return 1;
}

int func_225()
{
	if (unk_0xF20D8448F6AFC86C() && unk_0x8AB33CE0431CEDCB())
	{
		return 1;
	}
	if (unk_0xB15049400DCD8DC9() && unk_0x8AB33CE0431CEDCB())
	{
		return 1;
	}
	if ((unk_0x7C2F31E78C33DE0F() && unk_0x26CBBEAE27F89922() == 0) && unk_0x8AB33CE0431CEDCB())
	{
		return 1;
	}
	if (unk_0x8EA3D5407E9F4AF0() && unk_0x8AB33CE0431CEDCB())
	{
		return 1;
	}
	if (unk_0xEF4E5E47AF0D4480() && unk_0x8AB33CE0431CEDCB())
	{
		return 1;
	}
	return 0;
}

int func_226(int iParam0)
{
	if (unk_0xF20D8448F6AFC86C() || (unk_0x7C2F31E78C33DE0F() && iParam0 == 0))
	{
		if (unk_0x5DC8C64FE18EADF7(0) == 0 || unk_0xD4AA13DCCEC54C48(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x5DC8C64FE18EADF7(0) == 0)
	{
		return 0;
	}
	if (func_225() == 0)
	{
		return 0;
	}
	return 1;
}

void func_227(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	Global_1633501.f_89286 = 0;
	if (bParam0)
	{
		if (((!func_157() || func_239() == 36) || func_239() == 39) || func_239() == 34)
		{
			Global_1633501.f_88646 = 0;
		}
		Global_1633501.f_61976 = -1;
		Global_1633501.f_11 = 0;
		Global_1633501.f_12 = 0;
		Global_1633501.f_13 = 0;
		Global_1633501.f_14 = 0;
		Global_1633501.f_15 = 0;
		Global_1633501.f_16 = 0;
		Global_1633501.f_17 = 0;
		Global_1633501.f_18 = 0;
		Global_1633501.f_19 = 0;
		Global_1633501.f_20 = 0;
		Global_1633501.f_21 = 0;
		Global_1633501.f_22 = 0;
		Global_1633501.f_23 = 0;
		Global_1633501.f_91 = 0;
		Global_1633501.f_102485 = 0;
		Global_1633501.f_10 = 0;
		Global_1633501.f_25 = 0;
		Global_1633501.f_50 = 0;
		Global_1633501.f_27 = 0;
		Global_1633501.f_49 = 0;
		Global_1633501.f_51 = 0;
		Global_1633501.f_52 = 0;
		Global_1633501.f_54 = 0;
		Global_1633501.f_55 = 0;
		Global_1633501.f_56 = 0;
		Global_1633501.f_57 = 0;
		Global_1633501.f_29 = 0;
		Global_1633501.f_30 = 1;
		Global_1633501.f_6 = 0;
		Global_1633501.f_45 = 0;
		Global_1633501.f_107626 = 10;
		Global_1633501.f_107627 = 5f;
		Global_1633501.f_107628 = 10;
		Global_1633501.f_48 = 1;
		Global_1633501.f_26 = 0;
		Global_1633501.f_89263 = 0;
		Global_1633501.f_89266 = 0;
		Global_1633501.f_89265 = 0;
		Global_1633501.f_89262 = 0;
		Global_1633501.f_107591 = 0;
		if (bParam1)
		{
			Global_1633501.f_4 = 0;
			Global_1633501.f_5 = 0;
		}
		Global_1633501.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1633501.f_35487[iVar0 /*38*/] = -1;
			Global_1633501.f_35487[iVar0 /*38*/].f_1 = -1;
			Global_1633501.f_35487[iVar0 /*38*/].f_2 = 0;
			Global_1633501.f_35487[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1633501.f_89267 = 0;
		Global_1633501.f_89268 = 0;
		Global_1633501.f_89269 = 0;
		Global_1633501.f_89258 = -1;
		Global_1633501.f_89257 = 0;
		Global_1633501.f_61 = 0;
		Global_1633501.f_69 = { 0f, 0f, 0f };
		Global_1633501.f_72 = { 0f, 0f, 0f };
		Global_1633501.f_75 = { 0f, 0f, 0f };
		Global_1633501.f_78 = { 0f, 0f, 0f };
		Global_1633501.f_81 = { 0f, 0f, 0f };
		Global_1633501.f_84 = { 0f, 0f, 0f };
		Global_1633501.f_87 = 0f;
		Global_1633501.f_88 = 0f;
		Global_1633501.f_88621 = 0f;
		Global_1633501.f_90 = 0;
		Global_1633501.f_89285 = 0;
		Global_1633501.f_107580 = 0;
		Global_1633501.f_102697 = 0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			Global_1633501.f_41937[iVar0] = 0;
			Global_1633501.f_41920[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1633501.f_107706[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1633501.f_93081[iVar0] = 0;
		Global_1633501.f_93088[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_93095 = 0;
	Global_1633501.f_93096 = -1;
	Global_1633501.f_1 = -1;
	StringCopy(&(Global_1633501.f_88971), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1633501.f_92685[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1633501.f_104509 = 0;
	Global_1633501.f_44 = 0;
	Global_1633501.f_63 = { 0f, 0f, 0f };
	Global_1633501.f_102696 = -1;
	Global_1633501.f_89264 = 0f;
	StringCopy(&(Global_1633501.f_88653), "", 64);
	StringCopy(&(Global_1633501.f_88955), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1633501.f_88939[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1633501.f_88675[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_238();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1633501.f_35487[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_237();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_37[iVar0] = 0;
		Global_1633501.f_102459[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_102464[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_32[iVar0] = 1;
		Global_1633501.f_88187[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88200[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88213[iVar0] = 0f;
		Global_1633501.f_104513[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104526[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104539[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_104552[iVar0] = 45f;
		Global_1633501.f_104557[iVar0] = 0f;
		Global_1633501.f_85058[iVar0] = -1;
		StringCopy(&(Global_1633501.f_104868[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_104933[iVar0 /*16*/]), "", 64);
		Global_1633501.f_104998[iVar0] = 0;
		StringCopy(&(Global_1633501.f_104670[iVar0 /*16*/]), "", 64);
		Global_1633501.f_93135[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1633501.f_104735[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1633501.f_36330[iVar0] = -1;
		Global_1633501.f_36335[iVar0] = -1;
		StringCopy(&(Global_1633501.f_107509[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1633501.f_107526[iVar0 /*4*/]), "", 16);
		Global_1633501.f_107543[iVar0] = 0;
		Global_1633501.f_107573[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_107615 = 0;
	Global_1633501.f_107614 = 0;
	Global_1633501.f_107616 = 0;
	Global_1633501.f_107617 = 1;
	Global_1633501.f_107618 = 2;
	Global_1633501.f_107619 = 3;
	Global_1633501.f_107620 = 4;
	Global_1633501.f_107621 = 6;
	Global_1633501.f_107622 = 7;
	Global_1633501.f_107623 = 9;
	Global_1633501.f_107624 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_107679[iVar0] = 0;
		Global_1633501.f_107684[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_107630 = 5;
	Global_1633501.f_107629 = 0;
	Global_1633501.f_107625 = 3;
	Global_1633501.f_107701 = 5000;
	Global_1633501.f_107702 = 2500;
	Global_1633501.f_107703 = 3000;
	Global_1633501.f_104562 = { 0f, 0f, 0f };
	Global_1633501.f_104565 = { 0f, 0f, 0f };
	Global_1633501.f_104568 = { 0f, 0f, 0f };
	Global_1633501.f_104571 = 45f;
	Global_1633501.f_104572 = 0f;
	Global_1633501.f_104573 = 0;
	Global_1633501.f_105016 = 10000;
	Global_1633501.f_105030 = 1;
	Global_1633501.f_105017 = 1f;
	Global_1633501.f_107664 = 1;
	Global_1633501.f_107665 = 0;
	Global_1633501.f_105018 = 0f;
	Global_1633501.f_105031 = 60f;
	Global_1633501.f_105032 = 5f;
	Global_1633501.f_105033 = 60f;
	Global_1633501.f_105034 = -1f;
	Global_1633501.f_105020 = 2;
	Global_1633501.f_105021 = 2;
	Global_1633501.f_105022 = 3000;
	Global_1633501.f_105023 = 150;
	Global_1633501.f_105024 = 3f;
	Global_1633501.f_105025 = 1f;
	Global_1633501.f_105026 = 25;
	Global_1633501.f_105027 = 5;
	Global_1633501.f_105028 = 5;
	Global_1633501.f_105029 = 2000;
	Global_1633501.f_105047 = -1f;
	StringCopy(&(Global_1633501.f_105048), "", 16);
	StringCopy(&(Global_1633501.f_105052), "", 16);
	Global_1633501.f_42495 = 0.075f;
	Global_1633501.f_42496 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_42498[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_42529[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_105035 = 0;
	Global_1633501.f_105044 = 0;
	Global_1633501.f_105036 = 0;
	Global_1633501.f_105037 = 0;
	Global_1633501.f_105038 = 0;
	Global_1633501.f_105039 = 0;
	Global_1633501.f_105040 = 0;
	Global_1633501.f_105041 = 0;
	Global_1633501.f_105045 = 0;
	Global_1633501.f_105042 = -1f;
	Global_1633501.f_105043 = 0;
	Global_1633501.f_105046 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1633501.f_79920[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_79969[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1633501.f_80018[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1633501.f_80119[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_235(&(Global_1633501.f_93140[iVar0 /*1274*/]));
		func_233(&(Global_1633501.f_99511[iVar0 /*434*/]));
		iVar0++;
	}
	func_233(&(Global_1633501.f_101682));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1633501.f_102593[iVar0 /*4*/].f_3 = 0;
		Global_1633501.f_102593[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_102694 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_61912[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_61973 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_190(&(Global_1633501.f_89303[iVar0 /*49*/]), iVar0);
		iVar0++;
	}
	Global_1633501.f_92974[0] = 0;
	Global_1633501.f_92974[1] = 0;
	Global_1633501.f_92978 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_232(&(Global_1633501.f_102491[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1633501.f_107548 = 0;
	Global_1633501.f_2 = 0;
	Global_1633501.f_89238 = 0;
	Global_1633501.f_102485 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_89271[iVar0] = -1;
		Global_1633501.f_102698[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_107549 = 0;
	Global_1633501.f_107571 = 0;
	Global_1633501.f_89301 = 0;
	Global_1633501.f_89302 = 0;
	Global_1633501.f_102737 = 0.5f;
	Global_1633501.f_92992 = 1;
	Global_1633501.f_92994 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_102738[iVar0] = 0f;
		Global_1633501.f_102759[iVar0] = 0f;
		Global_1633501.f_102780[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_42574[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_42622[iVar0] = -1;
		iVar0++;
	}
	Global_1632256 = 0;
	Global_1633501.f_7 = 0;
	Global_1633501.f_89244 = 0;
	Global_1633501.f_34691 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1633501.f_84757)
	{
		Global_1633501.f_84757[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1633501.f_84757[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_35451[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35451[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35438[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35438[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35464[iVar0 /*3*/][0] = 0;
		Global_1633501.f_35464[iVar0 /*3*/][1] = 0;
		Global_1633501.f_35477[iVar0] = 0;
		Global_1633501.f_35482[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1633501.f_93019[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_93112[iVar0 /*2*/][0] = 0;
		Global_1633501.f_93126[iVar0 /*2*/][0] = 0;
		Global_1633501.f_92[iVar0 /*8637*/] = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_4 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_7 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_11 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_14 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_15 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_18 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_19 = { 0f, 0f, 0f };
		Global_1633501.f_92[iVar0 /*8637*/].f_22 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_23 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_36 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_24 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_25 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_26 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_27 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_28 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_29 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_30 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_31 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_32 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_33 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_34 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_57 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_3667 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3669 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3690 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3763 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4882 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3668 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3670 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4883 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_59 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_60 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_61 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_207 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_208 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_209 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_354 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_355 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_356 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4884 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_55 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_56 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3295 = 60000;
		Global_1633501.f_92[iVar0 /*8637*/].f_3521 = 60000;
		Global_1633501.f_92[iVar0 /*8637*/].f_4350 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_583 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_584 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_8454 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_8455 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_8456 = 1;
		Global_1633501.f_92[iVar0 /*8637*/].f_3301 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3302 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_3303[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3321[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3339[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3357[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3393[iVar1] = 4;
			Global_1633501.f_92[iVar0 /*8637*/].f_3411[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3447[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3465[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3483[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_3501[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_3429[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3375[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8601[iVar1] = 10;
			Global_1633501.f_92[iVar0 /*8637*/].f_8619[iVar1] = 10;
			iVar1++;
		}
		Global_1633501.f_34641[iVar0] = 0;
		Global_1633501.f_34646[iVar0] = 0;
		Global_1633501.f_34651[iVar0] = -1;
		Global_1633501.f_34697[iVar0] = 0;
		StringCopy(&(Global_1633501.f_34702[iVar0 /*4*/]), "", 16);
		Global_1633501.f_34724[iVar0] = 3;
		Global_1633501.f_34729[iVar0] = -1;
		Global_1633501.f_34692[iVar0] = 0;
		Global_1633501.f_34719[iVar0] = 0;
		Global_1633501.f_92980[iVar0] = 0;
		Global_1633501.f_92985[iVar0] = 0;
		Global_1633501.f_42607[iVar0] = 100;
		Global_1633501.f_42612[iVar0] = 1f;
		Global_1633501.f_42617[iVar0] = 0;
		Global_1633501.f_42627[iVar0] = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4676 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4677 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4678 = 0;
		Global_1632256.f_1[iVar0] = 0;
		Global_1633501.f_93097[iVar0] = 0;
		Global_1633501.f_93102[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1633501.f_88312[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1633501.f_88421[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1633501.f_88466[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1633501.f_105003[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1633501.f_41954[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_107550[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1633501.f_42047[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1633501.f_42047[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_104575[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_104628[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_62[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_210[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_357[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_133[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_281[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_428[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_92[iVar0 /*8637*/].f_501[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_506[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_35869[iVar1 /*27*/] = 0;
			Global_1633501.f_35869[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1633501.f_35869[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1633501.f_35869[iVar1 /*27*/].f_25 = 0f;
			Global_1633501.f_35869[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1633501.f_35869[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1633501.f_35869[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1633501.f_35869[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1633501.f_92[iVar0 /*8637*/].f_4496[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4514[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4532[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4550[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4568[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4586[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4604[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4622[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4640[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4658[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_37[iVar1] = -1;
			Global_1633501.f_61826[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4679[iVar1] = 60000;
			Global_1633501.f_92[iVar0 /*8637*/].f_4697[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_4801[iVar2 /*16*/]), "", 64);
				Global_1633501.f_92[iVar0 /*8637*/].f_4715[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1633501.f_34734[iVar1 /*5*/][iVar0] = -1;
			Global_1633501.f_34820[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_34906[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_34992[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_35078[iVar1 /*5*/][iVar0] = 0;
			Global_1633501.f_35164[iVar1 /*5*/][iVar0] = 1500;
			Global_1633501.f_35250[iVar1 /*5*/][iVar0] = 1400;
			Global_1633501.f_35336[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1632256.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1632256.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_603[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_621[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3523[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3541[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3559[iVar1] = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3631[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3649[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3691[iVar1] = 10000;
			Global_1633501.f_92[iVar0 /*8637*/].f_3671[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3727[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3577[iVar1] = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_3745[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3764[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4048[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4084[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3800[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3782[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3940[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4066[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4102[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3994[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4012[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3958[iVar1] = 100;
			Global_1633501.f_92[iVar0 /*8637*/].f_3818[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_3870[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_3922[iVar1] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_3976[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4030[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4120[iVar1] = -1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_891[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_909[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_927[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_945[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_981[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_639[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_657[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_963[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_999[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8112[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8130[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8148[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8166[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8184[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8202[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8382[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8220[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8238[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8256[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8274[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8292[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8310[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_511[iVar1] = 5;
			Global_1633501.f_92[iVar0 /*8637*/].f_529[iVar1] = 20;
			Global_1633501.f_92[iVar0 /*8637*/].f_4388[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4406[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4424[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4442[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_4460[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_855[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_873[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3595[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_3613[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_547[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_565[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_585[iVar1] = 0;
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_4885[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5158[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5431[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6250[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5704[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_5977[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7888[0 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7888[1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6523[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_6796[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7069[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7342[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1633501.f_92[iVar0 /*8637*/].f_7615[iVar1 /*16*/]), "", 64);
			Global_1633501.f_92[iVar0 /*8637*/].f_4260[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4296[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4278[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_4138[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_4190[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_16 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_19 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_17 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_18 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_20 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_21 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_22 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1021[iVar1 /*28*/].f_23 = 120;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_16 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_19 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_17 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_18 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_20 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_21 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_22 = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_1498[iVar1 /*28*/].f_23 = 120;
			Global_1633501.f_92[iVar0 /*8637*/].f_4242[iVar1] = 3f;
			Global_1633501.f_92[iVar0 /*8637*/].f_3709[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4314[iVar1] = 10.5f;
			Global_1633501.f_92[iVar0 /*8637*/].f_4332[iVar1] = 1f;
			Global_1633501.f_92[iVar0 /*8637*/].f_4478[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_675[iVar1] = 12;
			Global_1633501.f_92[iVar0 /*8637*/].f_693[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_711[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_729[iVar1] = 12;
			Global_1633501.f_92[iVar0 /*8637*/].f_747[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_765[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_783[iVar1] = 100;
			Global_1633501.f_92[iVar0 /*8637*/].f_8475[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_801[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_819[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_837[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8436[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/] = 1000;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_1 = 1.15f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_2 = 25;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_7 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_3 = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_5 = 25;
			Global_1633501.f_92[iVar0 /*8637*/].f_2522[iVar1 /*8*/].f_6 = 10f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/].f_1 = 1;
			Global_1633501.f_92[iVar0 /*8637*/].f_2847[iVar1 /*3*/].f_2 = 50;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[0] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[1] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[2] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_1[3] = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_6 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_7 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_8 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_9 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2659[iVar1 /*11*/].f_10 = 0f;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/].f_1 = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_2968[iVar1 /*3*/].f_2 = 0;
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 <= 14)
			{
				Global_1633501.f_92[iVar0 /*8637*/].f_3020[iVar1 /*16*/][iVar3] = 0;
				iVar3++;
			}
			Global_1633501.f_92[iVar0 /*8637*/].f_8493[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8511[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8529[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8547[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8565[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8583[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][0] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][2] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_7921[iVar1 /*5*/][3] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8007[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][0] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8025[iVar1 /*4*/][2] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8094[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_4352[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8328[iVar1] = 0;
			Global_1633501.f_92[iVar0 /*8637*/].f_8346[iVar1] = -1;
			Global_1633501.f_92[iVar0 /*8637*/].f_8364[iVar1] = 0;
			func_231(&(Global_1633501.f_92[iVar0 /*8637*/].f_2899[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1633501.f_92[iVar0 /*8637*/].f_3294 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3520 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3293 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3519 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3296 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3297 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3298 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3299 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3300 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_3522 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_1017 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_1018 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_352 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_353 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_499 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_500 = -1;
		Global_1633501.f_92[iVar0 /*8637*/].f_4866 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4867 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4868 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4869 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4870 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4871 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4872 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4873 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4874 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4875 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4876 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4877 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4878 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4879 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4880 = 0;
		Global_1633501.f_92[iVar0 /*8637*/].f_4881 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_80067[iVar0] = 0;
		Global_1633501.f_80072[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_80083 = 0;
	Global_1633501.f_80084 = 0;
	Global_1633501.f_80085 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_80086[iVar0] = 0;
		Global_1633501.f_80097[iVar0] = 0;
		Global_1633501.f_80108[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_66 = { 0f, 0f, 0f };
	Global_1633501.f_36340 = { 0f, 0f, 0f };
	Global_1633501.f_89 = 0f;
	Global_1633501.f_102116 = { 0f, 0f, 0f };
	Global_1633501.f_107549 = 0;
	Global_1633501.f_107571 = 0;
	Global_1633501.f_89239[0] = 0;
	Global_1633501.f_89239[1] = 0;
	Global_1633501.f_89242 = 0;
	Global_1633501.f_89238 = 0;
	Global_1633501.f_102703 = 0;
	Global_1633501.f_102704 = 0;
	Global_1633501.f_102705 = 0;
	Global_1633501.f_102706 = 0;
	Global_1633501.f_102708 = 0;
	Global_1633501.f_102710 = 0;
	Global_1633501.f_102712 = 0;
	Global_1633501.f_102715 = 0;
	Global_1633501.f_102716 = 0;
	Global_1633501.f_102717 = 0;
	Global_1633501.f_102718 = 0;
	Global_1633501.f_102719 = 0;
	Global_1633501.f_102720 = 0;
	Global_1633501.f_102726 = -1;
	Global_1633501.f_102727 = -1;
	Global_1633501.f_102728 = -1;
	Global_1633501.f_102729 = -1;
	Global_1633501.f_102730 = -1;
	Global_1633501.f_102731 = -1;
	Global_1633501.f_102732 = -1;
	Global_1633501.f_102733 = -1;
	Global_1633501.f_102734 = -1;
	Global_1633501.f_102735 = -1;
	Global_1633501.f_102736 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1633501.f_37044[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_38098[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_36343[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37397[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_37255[iVar0] = 0f;
		Global_1633501.f_38309[iVar0] = 0f;
		Global_1633501.f_39370[iVar0] = 1f;
		Global_1633501.f_38380[iVar0] = 0;
		Global_1633501.f_38522[iVar0] = 0;
		Global_1633501.f_38451[iVar0] = -1;
		Global_1633501.f_38593[iVar0] = 0;
		Global_1633501.f_39299[iVar0] = 0f;
		Global_1633501.f_38664[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_38875[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_39086[iVar0] = -1;
		Global_1633501.f_39157[iVar0] = 0;
		Global_1633501.f_37326[iVar0] = 0;
		iVar0++;
	}
	Global_1633501.f_41910 = 0;
	if (bParam0)
	{
		Global_1633501.f_41911 = 0;
		Global_1633501.f_41919 = 0;
	}
	Global_1633501.f_41917 = 0;
	Global_1633501.f_41918 = 0;
	Global_1633501.f_42566 = 0f;
	Global_1633501.f_44917 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1633501.f_44918[iVar0 /*61*/] = { 0f, 0f, 0f };
		Global_1633501.f_44918[iVar0 /*61*/].f_6 = 0f;
		Global_1633501.f_44918[iVar0 /*61*/].f_7 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_9 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_8 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_10 = 1;
		Global_1633501.f_44918[iVar0 /*61*/].f_19 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_12 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_13 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_14 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_15 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_11 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_45 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_46 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_47 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_16 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_17 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_18 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_20 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_48 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_21 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_22 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_23 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_24 = 1;
		Global_1633501.f_44918[iVar0 /*61*/].f_34 = 10f;
		Global_1633501.f_44918[iVar0 /*61*/].f_35 = -1;
		Global_1633501.f_44918[iVar0 /*61*/].f_59 = 0;
		Global_1633501.f_44918[iVar0 /*61*/].f_60 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_230(&(Global_1633501.f_105056[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1633501.f_107497 = 0;
	Global_1633501.f_54146 = 0;
	Global_1633501.f_54147 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_54148[iVar0 /*32*/] = { 0f, 0f, 0f };
		Global_1633501.f_54148[iVar0 /*32*/].f_6 = 0f;
		Global_1633501.f_54148[iVar0 /*32*/].f_7 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_8 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_12 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_11 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_13 = 1;
		Global_1633501.f_54148[iVar0 /*32*/].f_18 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_31 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_14 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_28 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_29 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_30 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_15 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_16 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_17 = -1;
		Global_1633501.f_54148[iVar0 /*32*/].f_9 = 0;
		Global_1633501.f_54148[iVar0 /*32*/].f_10 = 1;
		iVar0++;
	}
	Global_1633501.f_44592 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1633501.f_44593[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1633501.f_44593[iVar0 /*19*/].f_3 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_4 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_14 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_12 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_15 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_16 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_6 = -1;
		Global_1633501.f_44593[iVar0 /*19*/].f_5 = -1;
		Global_1633501.f_44593[iVar0 /*19*/].f_13 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_8 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_9 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_10 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_11 = 0f;
		Global_1633501.f_44593[iVar0 /*19*/].f_7 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_17 = 0;
		Global_1633501.f_44593[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1633501.f_44879 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1633501.f_44880[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1633501.f_44880[iVar0 /*7*/].f_3 = 0f;
		Global_1633501.f_44880[iVar0 /*7*/].f_4 = 0;
		Global_1633501.f_44880[iVar0 /*7*/].f_5 = 0;
		Global_1633501.f_44880[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1633501.f_42567 = 3.5f;
		Global_1633501.f_42568 = 7f;
		Global_1633501.f_42569 = 0f;
		Global_1633501.f_42570 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1633501.f_42574[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1633501.f_42622[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1633501.f_89276 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_41899[iVar0] = 0;
		Global_1633501.f_93076[iVar0] = -1;
		Global_1633501.f_93121[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1633501.f_41405[iVar1 /*29*/][iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1633501.f_41405[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1633501.f_41405[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1633501.f_102486[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1633501.f_42633 = 1;
	}
	Global_1633501.f_42635 = 0;
	Global_1633501.f_42636 = 0;
	Global_1633501.f_42637 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_42638[iVar0 /*93*/] = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_4 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_3 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_7 = 50f;
		Global_1633501.f_42638[iVar0 /*93*/].f_8 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_9 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_10 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_11 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_14 = 0f;
		Global_1633501.f_42638[iVar0 /*93*/].f_15 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_16 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_27 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_29 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_30 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_31 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_44 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_43 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_45 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_46 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_47 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_48 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_49 = 60;
		Global_1633501.f_42638[iVar0 /*93*/].f_50 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_37 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_92 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_32 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_33 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_34 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_55 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_35 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_51 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_52 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_53 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_83 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_84 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_85 = { 0f, 0f, 0f };
		Global_1633501.f_42638[iVar0 /*93*/].f_88 = 0;
		Global_1633501.f_42638[iVar0 /*93*/].f_81 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_82 = -1;
		Global_1633501.f_42638[iVar0 /*93*/].f_89 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_42638[iVar0 /*93*/].f_17[iVar1] = 0;
			Global_1633501.f_42638[iVar0 /*93*/].f_22[iVar1] = 99999;
			Global_1633501.f_42638[iVar0 /*93*/].f_65[iVar1] = 0;
			Global_1633501.f_42638[iVar0 /*93*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1633501.f_102134[iVar0 /*18*/]), "", 64);
		Global_1633501.f_102134[iVar0 /*18*/].f_16 = 0;
		Global_1633501.f_102134[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1633501.f_54821 = 0;
	Global_1633501.f_54822 = 0;
	if (bParam0)
	{
		if (func_125() && !func_177())
		{
			Global_1633501.f_54823 = -1;
		}
		else
		{
			Global_1633501.f_54823 = 0;
		}
	}
	Global_1633501.f_54824 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_54825[iVar0 /*40*/] = { 0f, 0f, 0f };
		Global_1633501.f_54825[iVar0 /*40*/].f_3 = 0f;
		Global_1633501.f_54825[iVar0 /*40*/].f_13 = 77;
		Global_1633501.f_54825[iVar0 /*40*/].f_4 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_5 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_21 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_22 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_7 = 1f;
		Global_1633501.f_54825[iVar0 /*40*/].f_24 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_25 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_26 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_33 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_30 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_36 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_34 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_31 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_37 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_35 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_32 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_38 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_27 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_28 = -1;
		Global_1633501.f_54825[iVar0 /*40*/].f_29 = 0;
		Global_1633501.f_54825[iVar0 /*40*/].f_39 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_54825[iVar0 /*40*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_229();
	func_228();
	Global_1633501.f_107947 = -1;
	Global_1633501.f_107948 = 0;
	Global_1633501.f_107950 = 0;
	Global_1633501.f_107949 = -1;
	Global_1633501.f_42497 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1633501.f_80077[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_89290 = -1;
	Global_1633501.f_89291 = 15;
	Global_1633501.f_89292 = -1;
	Global_1633501.f_89297 = -1;
	Global_1633501.f_89298 = 0;
	Global_1633501.f_89293 = 2.5f;
	Global_1633501.f_89294 = 8f;
	Global_1633501.f_89295 = 2.5f;
	Global_1633501.f_89296 = 8f;
	Global_1633501.f_57267 = 0;
	Global_1633501.f_44916 = 0;
	if (bParam0)
	{
		Global_1633501.f_42573 = -1;
		Global_1633501.f_41915 = -1;
	}
	Global_1633501.f_57268 = 0;
	Global_1633501.f_57269 = 0;
	Global_1633501.f_57270 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1633501.f_57271[iVar0 /*138*/] = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_3 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_4 = 50f;
		Global_1633501.f_57271[iVar0 /*138*/].f_5 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_6 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_7 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_8 = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_11 = 0f;
		Global_1633501.f_57271[iVar0 /*138*/].f_12 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_23 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_24 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_25 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_26 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_30 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_31 = 100;
		Global_1633501.f_57271[iVar0 /*138*/].f_32 = 1001f;
		Global_1633501.f_57271[iVar0 /*138*/].f_33 = 1001f;
		Global_1633501.f_57271[iVar0 /*138*/].f_35 = 1.5f;
		Global_1633501.f_57271[iVar0 /*138*/].f_44 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_111 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_45 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_46 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_27 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_28 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_29 = -1f;
		Global_1633501.f_57271[iVar0 /*138*/].f_50 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_39 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_40 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_41 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_63 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_64 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_66 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_109 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_108 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1633501.f_57271[iVar0 /*138*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_57271[iVar0 /*138*/].f_119[iVar1] = 0f;
			iVar1++;
		}
		Global_1633501.f_57271[iVar0 /*138*/].f_65 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_72 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_42 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_122 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_127 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_128 = { 0f, 0f, 0f };
		Global_1633501.f_57271[iVar0 /*138*/].f_131 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_124 = -1f;
		Global_1633501.f_57271[iVar0 /*138*/].f_123 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_126 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_36 = 0;
		Global_1633501.f_57271[iVar0 /*138*/].f_37 = 5;
		Global_1633501.f_57271[iVar0 /*138*/].f_136 = -1;
		Global_1633501.f_57271[iVar0 /*138*/].f_125 = 10;
		Global_1633501.f_57271[iVar0 /*138*/].f_137 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_57271[iVar0 /*138*/].f_13[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_18[iVar1] = 99999;
			Global_1633501.f_57271[iVar0 /*138*/].f_102[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_85[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_90[iVar1] = 0;
			Global_1633501.f_57271[iVar0 /*138*/].f_53[iVar1] = -1;
			Global_1633501.f_57271[iVar0 /*138*/].f_58[iVar1] = -1;
			Global_1633501.f_57271[iVar0 /*138*/].f_67[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_88220 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_88221[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1633501.f_88221[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1633501.f_88221[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1633501.f_80200 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_80207[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1633501.f_80207[iVar0 /*15*/].f_3 = 0f;
		Global_1633501.f_80207[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_80201[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1633501.f_81108[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_61974 = 0;
	Global_1633501.f_61977 = 0;
	Global_1633501.f_61978 = 0;
	Global_1633501.f_61975 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1633501.f_61979[iVar0 /*299*/].f_40 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_50 = 0;
		Global_1633501.f_61979[iVar0 /*299*/] = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_3 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_4 = 0.75f;
		Global_1633501.f_61979[iVar0 /*299*/].f_15 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_16 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_17 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_33 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_37 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_38 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_39 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_216 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_215 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_217 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_218 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_219 = 20;
		Global_1633501.f_61979[iVar0 /*299*/].f_227 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_57 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_48 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_35 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_36 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_49 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_189 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_190 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_191 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_192 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_193 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_194 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_195 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_196 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_34 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_13 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_5 = 50f;
		Global_1633501.f_61979[iVar0 /*299*/].f_6 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_7 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_14 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_8 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_9 = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_12 = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_176 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_64 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_168 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_169 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_170 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_176 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_186 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_177 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_185 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_65 = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_58 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_59 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_63 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_60 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_253 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_264 = 1f;
		Global_1633501.f_61979[iVar0 /*299*/].f_265 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_81 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_202 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_53 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_203 = 250;
		Global_1633501.f_61979[iVar0 /*299*/].f_206 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_207 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_270 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_208 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_271 = 4;
		Global_1633501.f_61979[iVar0 /*299*/].f_238 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_154 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_155 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_156 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_228 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_229 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_230 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_267 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_266 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_268 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_269 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_157 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_158 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_61 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_18[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_23[iVar1] = 2;
			Global_1633501.f_61979[iVar0 /*299*/].f_28[iVar1] = 99999;
			Global_1633501.f_61979[iVar0 /*299*/].f_197[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_239[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_244[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_254[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_259[iVar1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_273[iVar1] = -2;
			Global_1633501.f_61979[iVar0 /*299*/].f_171[iVar1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_232[iVar1] = 0;
			iVar1++;
		}
		Global_1633501.f_61979[iVar0 /*299*/].f_116[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_122[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_134[0] = 0f;
		Global_1633501.f_61979[iVar0 /*299*/].f_82[0] = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_88[0] = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_94[0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_61979[iVar0 /*299*/].f_110[0] = 3;
		Global_1633501.f_61979[iVar0 /*299*/].f_128[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_68[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_82[iVar1 + 1] = 0;
			Global_1633501.f_61979[iVar0 /*299*/].f_116[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_122[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_134[iVar1 + 1] = 0f;
			Global_1633501.f_61979[iVar0 /*299*/].f_88[iVar1 + 1] = -1;
			Global_1633501.f_61979[iVar0 /*299*/].f_94[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_110[iVar1 + 1] = 3;
			Global_1633501.f_61979[iVar0 /*299*/].f_128[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_140[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1633501.f_61979[iVar0 /*299*/].f_286[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_61979[iVar0 /*299*/].f_293[iVar1] = 0f;
			iVar1++;
		}
		Global_1633501.f_61979[iVar0 /*299*/].f_187 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_188 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_272 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_278 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_279 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_280 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_284 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_281 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_282 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_283 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_285 = -1;
		Global_1633501.f_61979[iVar0 /*299*/].f_297 = 0;
		Global_1633501.f_61979[iVar0 /*299*/].f_298 = 0;
		iVar0++;
	}
	Global_1633501.f_80200 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1633501.f_80207[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1633501.f_80207[iVar0 /*15*/].f_3 = 0f;
		Global_1633501.f_80207[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1633501.f_41905[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1633501.f_39442[iVar0 /*109*/].f_53 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_46 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_20 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_28 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_29 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_30 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_55 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_56 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/] = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_21 = { 0f, 0f, 0f };
		Global_1633501.f_39442[iVar0 /*109*/].f_24 = { 0f, 0f, 0f };
		Global_1633501.f_39442[iVar0 /*109*/].f_27 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_97 = 10.5f;
		Global_1633501.f_39442[iVar0 /*109*/].f_99 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_100 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_101 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_96 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_54 = 0;
		Global_1633501.f_39442[iVar0 /*109*/].f_19 = 1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_102 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_103 = -1f;
		Global_1633501.f_39442[iVar0 /*109*/].f_104 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_105 = 0f;
		Global_1633501.f_39442[iVar0 /*109*/].f_106 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_108 = -1;
		Global_1633501.f_39442[iVar0 /*109*/].f_47 = 0;
		if (Global_1633501.f_39442[iVar0 /*109*/].f_107 != 0)
		{
			unk_0xCD9B3CC980D9A08F(Global_1633501.f_39442[iVar0 /*109*/].f_107);
			Global_1633501.f_39442[iVar0 /*109*/].f_107 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_39442[iVar0 /*109*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1633501.f_39442[iVar0 /*109*/].f_14[iVar1] = 0f;
			Global_1633501.f_39442[iVar0 /*109*/].f_36[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_41[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_31[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_62[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_67[iVar1] = 99999;
			Global_1633501.f_39442[iVar0 /*109*/].f_72[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_77[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_57[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_82[iVar1] = 0;
			Global_1633501.f_39442[iVar0 /*109*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1633501.f_88218 = 0;
	Global_1633501.f_43 = 0;
	Global_1633501.f_104510 = 12;
	Global_1633501.f_104511 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_102120[iVar0] = -1;
		Global_1633501.f_102125[iVar0] = -1;
		iVar0++;
	}
	Global_1633501.f_42634 = 0;
	Global_1633501.f_102721 = -1;
	Global_1633501.f_102130 = 0;
	Global_1633501.f_102119 = 0;
	Global_1633501.f_102132 = 0;
	Global_1633501.f_102131 = 0;
	Global_1633501.f_102133 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1633501.f_107583[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1633501.f_89249[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 29)
	{
		Global_1633501.f_85094[iVar4] = -1;
		Global_1633501.f_85063[iVar4] = -1;
		iVar5 = 0;
		while (iVar5 <= 9)
		{
			iVar6 = 0;
			while (iVar6 <= 3)
			{
				Global_1633501.f_85125[iVar4 /*51*/][iVar5 /*5*/][iVar6] = -1;
				Global_1633501.f_86656[iVar4 /*51*/][iVar5 /*5*/][iVar6] = -1;
				iVar6++;
			}
			iVar5++;
		}
		iVar4++;
	}
	Global_1633501.f_107678 = 0;
	Global_1633501.f_107689 = { 0f, 0f, 0f };
	Global_1633501.f_107692 = { 0f, 0f, 0f };
	func_210();
}

void func_228()
{
	int iVar0;
	
	Global_1633501.f_107725 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1633501.f_107726[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_107726[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_107726[iVar0 /*11*/].f_7 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_8 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_9 = 0;
		Global_1633501.f_107726[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	
	Global_1633501.f_88954 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1633501.f_88977[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88977[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1633501.f_88977[iVar0 /*26*/].f_9 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_20 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_22 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_23 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_21 = 0;
		Global_1633501.f_88977[iVar0 /*26*/].f_7 = 0f;
		Global_1633501.f_88977[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1633501.f_88977[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_230(var uParam0)
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

void func_231(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_232(var uParam0)
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

void func_233(char* sParam0)
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
		func_234(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_234(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_235(char* sParam0)
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
		sParam0->f_42[iVar0] = -1;
		iVar0++;
	}
	sParam0->f_1102 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1108[iVar0] = 0;
		sParam0->f_1110[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_48 = 0;
	sParam0->f_47 = 0;
	sParam0->f_49 = 0;
	sParam0->f_740 = 0;
	sParam0->f_441 = 0;
	sParam0->f_442 = 0;
	sParam0->f_443 = 0;
	sParam0->f_444 = { 0f, 0f, 0f };
	sParam0->f_733 = { 0f, 0f, 0f };
	sParam0->f_736 = 0f;
	sParam0->f_737 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_236(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_234(&(sParam0->f_741[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_236(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_50[iParam1] = 0;
		sParam0->f_71[iParam1] = 0;
		sParam0->f_92[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_153[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_214[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_275[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_336[iParam1] = 0f;
		sParam0->f_357[iParam1] = 0f;
		sParam0->f_378[iParam1] = 0;
		sParam0->f_399[iParam1] = -1;
		sParam0->f_420[iParam1] = 0f;
		sParam0->f_447[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_508[iParam1] = 0f;
		StringCopy(&(sParam0->f_1112[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1193[iParam1 /*4*/]), "", 16);
	}
}

void func_237()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1633501.f_42472[iVar0] = 0;
		iVar0++;
	}
}

void func_238()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1633501.f_88804[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_239()
{
	return Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_188;
}

int func_240()
{
	if (unk_0x95DBE123BC2DB80B())
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

bool func_241()
{
	return unk_0x48B8265059381CD0(Global_970912.f_8, 0);
}

bool func_242()
{
	return unk_0x48B8265059381CD0(Global_2443134, 4);
}

bool func_243()
{
	return unk_0x48B8265059381CD0(Global_2443134, 28);
}

var func_244()
{
	return Global_2443134.f_571;
}

void func_245()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394783 = { Var0 };
	StringCopy(&(Global_2394783.f_30), "", 64);
	StringCopy(&(Global_2394783.f_46), "", 64);
	StringCopy(&(Global_2394783.f_15), "", 32);
}

void func_246()
{
	unk_0x21E7933CCC7B3724(&Global_2443134, 4);
}

void func_247()
{
	unk_0x21E7933CCC7B3724(&Global_2443134, 28);
}

void func_248(bool bParam0, bool bParam1, bool bParam2)
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
	Global_1573289[0] = 0;
	Global_1573289[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_95(bParam0, 0);
	}
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 124:
			return 15;
		
		case 131:
			return 8;
		
		case 125:
			return 14;
		
		case 129:
			return 122;
		
		case 132:
			return 1;
		
		case 130:
			return 5;
		
		case 133:
			return 6;
		
		case 126:
			return 11;
		
		case 134:
			return 0;
		
		case 135:
			return 2;
		
		case 127:
			return 13;
		
		case 136:
			return 3;
		
		case 128:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 86:
			return 182;
		
		case 87:
			return 183;
		
		case 88:
			return 185;
		
		case 89:
			return 186;
		
		case 90:
			return 190;
		
		case 91:
			return 191;
		
		case 92:
			return 192;
		
		case 93:
			return 193;
		
		case 101:
			return 205;
		
		case 94:
			return 194;
		
		case 95:
			return 197;
		
		case 96:
			return 198;
		
		case 98:
			return 199;
		
		case 99:
			return 200;
		
		case 100:
			return 201;
		
		case 102:
			return 207;
		
		case 103:
			return 208;
		
		case 104:
			return 209;
		
		case 105:
			return 210;
		
		case 97:
			return 195;
		
		default:
	}
	return 228;
}

bool func_250()
{
	return Global_2394783;
}

var func_251()
{
	return Global_2394783.f_3;
}

