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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	struct<5> Local_89 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_106 = 1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = -1;
	var uLocal_111 = -1;
	var uLocal_112 = 2;
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
	var uLocal_124 = 2;
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
	struct<88> Local_182 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_270 = 0;
	bool bLocal_271 = 0;
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	unk_0x60F2C6DC397A6833();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_271 = false;
		bVar0 = func_223();
		Global_2394746.f_3 = 0;
		Global_2395194 = 0;
		if (func_222())
		{
			bLocal_271 = true;
			Var1 = { Global_2394746.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_221(Global_2394746.f_4);
			iVar20 = unk_0x4D29100D094E5511();
			bVar21 = Global_2394746.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394746.f_15 };
			}
			if (Global_2394746.f_25)
			{
				func_220(&Local_89, 1, 1);
				unk_0xF17F4B0641AB2DE1(&(Global_1587523[iVar20 /*444*/].f_39.f_18), 2);
				unk_0xF17F4B0641AB2DE1(&(Global_1587523[iVar20 /*444*/].f_39.f_18), 1);
				unk_0xF17F4B0641AB2DE1(&(Global_1587523[iVar20 /*444*/].f_39.f_18), 3);
				func_219();
				func_218();
				Global_2394746.f_25 = 0;
			}
			if (!unk_0x0E063DDE8855EC52())
			{
				func_217();
			}
			else if (!func_101(&Local_89, &cVar11, &(Global_1587523[iVar20 /*444*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 0))
			{
				Global_2394746.f_23 = 0;
				Global_2394746.f_27 = -1;
				if (bVar0)
				{
					func_220(&Local_89, 1, 1);
					unk_0x956CD1FBB4159389();
					func_100();
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 0;
					if (Global_2394746.f_27 < 0)
					{
						Global_2394746.f_27 = 0;
					}
					else
					{
						Global_2394746.f_27++;
						if (Global_2394746.f_27 >= 10)
						{
							func_217();
							Global_2394746.f_25 = 1;
						}
					}
				}
			}
			else if (Local_89.f_0)
			{
				Global_2394746.f_23 = 1;
				Global_2394746.f_24 = 1;
				if (Global_2394746.f_27 < 0)
				{
					Global_2394746.f_27 = 0;
				}
				else
				{
					Global_2394746.f_27++;
					if (Global_2394746.f_27 >= 10)
					{
						func_217();
					}
				}
			}
			else
			{
				Global_2394746.f_26++;
				if (Global_2394746.f_26 >= 3)
				{
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 0;
					if (Global_2394746.f_27 < 0)
					{
						Global_2394746.f_27 = 0;
					}
					else
					{
						Global_2394746.f_27++;
						if (Global_2394746.f_27 >= 10)
						{
							func_217();
							Global_2394746.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394746.f_25 = 1;
				}
			}
		}
		if (func_99())
		{
			bLocal_271 = true;
			MemCopy(&cVar22, {Global_2394746.f_4.f_3}, 8);
			if (Global_2394746.f_23)
			{
				func_217();
			}
			else
			{
				if (Global_2394746.f_25)
				{
					func_220(&Local_89, 1, 1);
					Global_2394746.f_25 = 0;
				}
				if (!func_95(&Local_89, &cVar22, &Local_182))
				{
					Global_2394746.f_23 = 0;
					Global_2394746.f_27 = -1;
				}
				else if (Local_89.f_0)
				{
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 1;
					Global_2394746.f_28 = Local_182.f_65;
					Global_2394746.f_29 = Local_182.f_68;
					Global_2394746.f_30 = { Local_182.f_22 };
					Global_2394746.f_46 = { Local_182.f_38 };
					Global_2398693 = { Local_182 };
				}
				else
				{
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 0;
				}
			}
		}
		if (func_94())
		{
			bLocal_271 = true;
			if (Global_2394746.f_23)
			{
				func_217();
			}
			else
			{
				if (Global_2394746.f_25)
				{
					func_220(&Local_89, 1, 1);
					Global_2394746.f_25 = 0;
				}
				iVar30 = Local_89.f_4;
				if (!func_5(&Local_89))
				{
					Global_2395194 = 1;
					if (iVar30 != Local_89.f_4)
					{
						if (Local_89.f_4 == 4)
						{
							iLocal_270 = (unk_0xA0F74982C6AAA9D4() + 50000);
						}
					}
					bVar31 = false;
					if (Local_89.f_4 == 4)
					{
						if (unk_0xA0F74982C6AAA9D4() > iLocal_270)
						{
							Global_2394746.f_23 = 1;
							Global_2394746.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394746.f_23 = 0;
						Global_2394746.f_27 = -1;
					}
				}
				else if (Local_89.f_0)
				{
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 1;
				}
				else
				{
					Global_2394746.f_23 = 1;
					Global_2394746.f_24 = 0;
				}
			}
		}
		if (!bLocal_271)
		{
			if (func_4(unk_0x4D29100D094E5511()) || func_3(unk_0x4D29100D094E5511()))
			{
				if (!func_1(unk_0x4D29100D094E5511(), 1, 0))
				{
					unk_0x7C3AA2D27E16E2AD();
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
	if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xF426A5DE932B3BEE(Global_1587523[iParam0 /*444*/].f_250.f_7, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
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
	return Global_2418472[iParam0 /*313*/].f_114 == 7;
}

bool func_4(int iParam0)
{
	return Global_2418472[iParam0 /*313*/].f_114 == 2;
}

int func_5(bool bParam0)
{
	if (!func_93())
	{
		if (func_90())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_89())
			{
				return 0;
			}
			if (func_88())
			{
				return 0;
			}
			func_87();
			func_86();
			func_85();
			if (func_93())
			{
				unk_0xAA8C55D537E5DF52(1);
			}
			else
			{
				unk_0xAA8C55D537E5DF52(0);
			}
			bParam0->f_13 = Global_2395193;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_84(bParam0, 24);
			break;
		
		case 24:
			if (func_82(bParam0->f_13))
			{
				func_220(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_84(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0xD51F5201A4150360(&Global_2394808, bParam0->f_13, 1, func_81(0)))
			{
				func_84(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x63E547C031261612())
			{
				if (unk_0x3AD626F7E34A3E91())
				{
					*bParam0 = 0;
				}
				else
				{
					func_220(bParam0, 1, 1);
					bParam0->f_40 = unk_0xF88F96DA990E8684();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xB0ED650B7DC3072D() > 0)
				{
					func_84(bParam0, 4);
				}
				else
				{
					func_220(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x206F6AD5CFF9B8B0())
			{
				func_86();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_220(bParam0, 1, 1);
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
						if (unk_0xBF5127EAB2CAEF2C() != 0)
						{
							unk_0xAD8E5BF5EF384D7D();
						}
						if (unk_0xC2407D11F17B893F(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_86();
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
	
	iVar0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(iVar0, "mission");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "gen");
	if (func_93())
	{
		if (func_80(unk_0x992D1F4B2174DAE9(bParam0->f_7)))
		{
			if (unk_0xBF5127EAB2CAEF2C() != 0)
			{
				unk_0xAD8E5BF5EF384D7D();
			}
			return;
		}
	}
	if ((unk_0x0C70A268552D2D17(iVar2, "type") == 0 && unk_0x0C70A268552D2D17(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xBF5127EAB2CAEF2C() != 0)
		{
			unk_0xAD8E5BF5EF384D7D();
		}
		return;
	}
	if (Global_262145.f_6123)
	{
		if (unk_0x0C70A268552D2D17(iVar2, "type") == 0)
		{
			if (unk_0x0C70A268552D2D17(iVar2, "subtype") == 1 || unk_0x0C70A268552D2D17(iVar2, "subtype") == 7)
			{
				if (unk_0xBF5127EAB2CAEF2C() != 0)
				{
					unk_0xAD8E5BF5EF384D7D();
				}
				return;
			}
			iVar3 = unk_0x0C70A268552D2D17(iVar2, "optbs");
			if (unk_0xF426A5DE932B3BEE(iVar3, 4) || unk_0xF426A5DE932B3BEE(iVar3, 12))
			{
				if (unk_0xBF5127EAB2CAEF2C() != 0)
				{
					unk_0xAD8E5BF5EF384D7D();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_79();
		Global_794608.f_2 = 0;
		Global_794608.f_111850 = 0;
		func_78();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794608.f_111865[iVar4] = 0;
			Global_794608.f_111851[iVar4] = 0;
			iVar4++;
		}
		if (func_75())
		{
			func_74(1);
			func_74(0);
			func_72(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794608.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_93())
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_4 = unk_0x4269ED40BB5FF584(bParam0->f_7, 0);
		Global_794608.f_4[bParam0->f_9 /*88*/].f_67 = func_71(bParam0->f_7);
		Global_794608.f_4[bParam0->f_9 /*88*/].f_66 = unk_0x4269ED40BB5FF584(bParam0->f_7, Global_794608.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_5 = unk_0x077BA247D239DFC4(bParam0->f_7);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { func_70(iVar2, "start") };
	if (unk_0x12B8990BAE31537D(iVar2, "optbs") == 2)
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_76 = unk_0x0C70A268552D2D17(iVar2, "optbs");
	}
	unk_0xF17F4B0641AB2DE1(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0xF17F4B0641AB2DE1(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0xF17F4B0641AB2DE1(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0xF17F4B0641AB2DE1(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 28);
	unk_0xF17F4B0641AB2DE1(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 27);
	Global_794608.f_4[bParam0->f_9 /*88*/].f_59 = { func_70(iVar2, "cam") };
	Global_794608.f_4[bParam0->f_9 /*88*/].f_62 = { func_69(iVar2) };
	if (!func_93())
	{
		if (unk_0xC009FB0DDD3D9458(unk_0x077BA247D239DFC4(bParam0->f_7)))
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_54 = unk_0x4C9052DD8093FA6E(bParam0->f_7);
		}
		else
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0x12B8990BAE31537D(iVar2, "mgrk") == 2)
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_7 = unk_0x0C70A268552D2D17(iVar2, "mgrk");
	}
	if (unk_0x12B8990BAE31537D(iVar2, "mght") == 2)
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_8 = unk_0x0C70A268552D2D17(iVar2, "mght");
	}
	Global_794608.f_98389[bParam0->f_9 /*12*/].f_10 = unk_0x0C70A268552D2D17(iVar2, "cncmbs");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_69 = unk_0x0C70A268552D2D17(iVar2, "min");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_71 = unk_0x0C70A268552D2D17(iVar2, "num");
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_22), unk_0xF6CBC32F5D0A2A74(bParam0->f_7), 64);
	Global_794608.f_4[bParam0->f_9 /*88*/].f_65 = unk_0x0C70A268552D2D17(iVar2, "type");
	if (func_93())
	{
		StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_6), func_68(), 64);
	}
	else
	{
		StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_6), unk_0xC2F143A8DD0D2A43(bParam0->f_7), 64);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_70 = unk_0x0C70A268552D2D17(iVar2, "rank");
	Global_794608.f_98389[bParam0->f_9 /*12*/] = unk_0x0C70A268552D2D17(iVar2, "tnum");
	if (!func_93())
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_73 = func_67(unk_0x4F6C7DD68DDBCBBD(bParam0->f_7, 0), unk_0xC1EBF68842083E1C(bParam0->f_7, 0));
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_3 = unk_0xC1EBF68842083E1C(bParam0->f_7, 0);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_75 = unk_0x0C70A268552D2D17(iVar2, "charcon");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_78 = unk_0x0C70A268552D2D17(iVar2, "ltm");
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_968690.f_598 < 85)
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_68 = Global_968690.f_598;
			Global_968690[Global_794608.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { func_70(iVar2, "area") };
			if (unk_0x12B8990BAE31537D(iVar2, "rad") == 2)
			{
				Global_968690.f_512[Global_794608.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar2, "rad"));
			}
			else
			{
				Global_968690.f_512[Global_794608.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xA361D922F3339879(iVar2, "rad");
			}
			Global_968690.f_256[Global_794608.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { Global_794608.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794608.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_968690.f_598++;
		}
	}
	else
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_68 = unk_0x0C70A268552D2D17(iVar2, "subtype");
		Global_794608.f_4[bParam0->f_9 /*88*/].f_80 = unk_0x0C70A268552D2D17(iVar2, "adverm");
	}
	StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/]), unk_0x992D1F4B2174DAE9(bParam0->f_7), 24);
	iVar93 = unk_0x70ABFF261710305D(&(Global_794608.f_4[bParam0->f_9 /*88*/]));
	Global_794608.f_98389[bParam0->f_9 /*12*/].f_2 = iVar93;
	func_66(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794608.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794608.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_93())
	{
		if (unk_0xC1C5B83BB6719C6C(unk_0x992D1F4B2174DAE9(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0x26545538B51562AD(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1)
	{
		if (Global_794608.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794608.f_111851[Global_794608.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_65(bParam0->f_9))
			{
				Global_794608.f_111851[7]++;
			}
			else if (func_64(bParam0->f_9))
			{
				Global_794608.f_111851[4]++;
			}
			else if (func_63(bParam0->f_9))
			{
				Global_794608.f_111851[10]++;
			}
			else if (func_62(bParam0->f_9))
			{
				Global_794608.f_111851[12]++;
			}
		}
	}
	if (unk_0xBF5127EAB2CAEF2C() != 0)
	{
		unk_0xAD8E5BF5EF384D7D();
	}
	if (!func_93())
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_1 = unk_0x70ABFF261710305D(unk_0xA2461EDFF244BD0B(bParam0->f_7));
		if ((Global_794608.f_111850 < 5 && Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794608.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794608.f_98389[bParam0->f_9 /*12*/].f_9 = Global_794608.f_111850;
			StringCopy(&(Global_794608.f_111819[Global_794608.f_111850 /*6*/]), unk_0xA2461EDFF244BD0B(bParam0->f_7), 24);
			Global_794608.f_111850++;
		}
		func_56(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, &(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794608.f_4[bParam0->f_9 /*88*/].f_77), Global_794608.f_4[bParam0->f_9 /*88*/].f_80);
		func_52(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0x41AD4ED4B469EA5B(bParam0->f_7))
			{
				unk_0x26545538B51562AD(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else
		{
			if (func_32(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, Global_794608.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794608.f_111851[11]++;
			}
			if (unk_0x41AD4ED4B469EA5B(bParam0->f_7))
			{
				unk_0x26545538B51562AD(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0xF426A5DE932B3BEE(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794608.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794608.f_111851[9]++;
				}
				if (Global_794608.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794608.f_111865[Global_794608.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794608.f_98389[bParam0->f_9 /*12*/].f_6 = unk_0xA2FB7E556C1142B3(bParam0->f_7);
			}
		}
	}
	if (!bParam1)
	{
		if (func_75())
		{
			func_30(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, unk_0xF426A5DE932B3BEE(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794608.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_75, Global_794608.f_4[bParam0->f_9 /*88*/].f_70, unk_0xF426A5DE932B3BEE(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_75, Global_794608.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_969289[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794608.f_2++;
	if (unk_0xBF5127EAB2CAEF2C() != 0)
	{
		unk_0xAD8E5BF5EF384D7D();
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
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347652 = iParam1;
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
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1347635)
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
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
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
	if (func_20(unk_0x4D29100D094E5511()) < iParam4)
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
	while (iVar0 < 8)
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
		if (Global_275884[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_275884[iVar3] < iParam0)
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
			if (iParam0 == unk_0x4D29100D094E5511())
			{
				return Global_1347756[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1587523[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347756[func_24(-1)];
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
		return unk_0xF426A5DE932B3BEE(Global_2428492.f_1, iParam0);
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
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312747;
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
	
	if (func_75())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0x4D29100D094E5511()) < iParam2)
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
				
				case 9:
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
	
	if (!func_75())
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
			if (func_20(unk_0x4D29100D094E5511()) < iParam3)
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
				
				case 9:
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
		if (iParam0 == Global_262145.f_7477[iVar0])
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
		if (iParam0 == Global_262145.f_7510[iVar0])
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
		if (iParam0 == Global_262145.f_7499[iVar0])
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
		if (iParam0 == Global_262145.f_7488[iVar0])
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
		if (iParam0 == Global_262145.f_7464[iVar0])
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
		if (iParam0 == Global_262145.f_7453[iVar0])
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
		if (iParam0 == Global_262145.f_7442[iVar0])
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
		if (iParam0 == Global_262145.f_7431[iVar0])
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
		if (iParam0 == Global_262145.f_7398[iVar0])
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
		if (iParam0 == Global_262145.f_7420[iVar0])
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
		if (iParam0 == Global_262145.f_7409[iVar0])
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
		if (iParam0 == Global_262145.f_7387[iVar0])
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
		if (iParam0 == Global_262145.f_7376[iVar0])
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
		if (iParam0 == Global_262145.f_7365[iVar0])
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
		if (iParam0 == Global_262145.f_7331[iVar0])
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
		if (iParam0 == Global_262145.f_7339[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7326 || iParam0 == Global_262145.f_7327) || iParam0 == Global_262145.f_7328) || iParam0 == Global_262145.f_7329) || iParam0 == Global_262145.f_7330)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7321 || iParam0 == Global_262145.f_7322) || iParam0 == Global_262145.f_7323) || iParam0 == Global_262145.f_7324) || iParam0 == Global_262145.f_7325)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7314 || iParam0 == Global_262145.f_7315) || iParam0 == Global_262145.f_7316) || iParam0 == Global_262145.f_7317) || iParam0 == Global_262145.f_7318) || iParam0 == Global_262145.f_7319) || iParam0 == Global_262145.f_7320)
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
		if (iParam0 == Global_262145.f_7347[iVar0])
		{
			Global_794608.f_111806[0 /*11*/][iVar0] = iParam1;
			Global_794608.f_4[iParam1 /*88*/].f_56 = { func_55(0, iVar0) };
			Global_794608.f_4[iParam1 /*88*/].f_59 = { func_54(0, iVar0) };
			Global_794608.f_4[iParam1 /*88*/].f_62 = { func_53(0, iVar0) };
			Global_794608.f_98389[iParam1 /*12*/].f_11 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794608.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794608.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794608.f_111806[0 /*11*/].f_9 <= iVar0)
			{
				Global_794608.f_111806[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_7356[iVar0])
		{
			Global_794608.f_98389[iParam1 /*12*/].f_11 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794608.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794608.f_4[iParam1 /*88*/].f_73 = -1;
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
		unk_0x26545538B51562AD(uParam1, 15);
	}
	else if (func_50(iParam0))
	{
		unk_0x26545538B51562AD(uParam1, 18);
	}
	else if (func_49(iParam0))
	{
		unk_0x26545538B51562AD(uParam1, 19);
	}
	else if (func_47(iParam0))
	{
		unk_0x26545538B51562AD(uParam1, 28);
	}
	else if (func_48(iParam0))
	{
		unk_0x26545538B51562AD(uParam1, 27);
	}
	else if (func_46(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 0);
	}
	else if (func_45(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 1);
	}
	else if (func_44(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 2);
	}
	else if (func_43(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 3);
	}
	else if (func_42(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 4);
	}
	else if (func_41(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 5);
	}
	else if (func_40(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 6);
	}
	else if (func_39(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 7);
	}
	else if (func_38(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 8);
	}
	else if (func_37(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 9);
	}
	else if (func_33(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 10);
	}
	else if (func_36(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 11);
	}
	else if (func_35(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 12);
	}
	else if (func_61(iParam3))
	{
		unk_0x26545538B51562AD(uParam2, 13);
	}
	else if (func_34(iParam0))
	{
		unk_0x26545538B51562AD(uParam2, 14);
	}
	else if (func_60(iParam3))
	{
		unk_0x26545538B51562AD(uParam2, 16);
	}
	else if (func_59(iParam3))
	{
		unk_0x26545538B51562AD(uParam2, 17);
	}
	else if (func_58(iParam3))
	{
		unk_0x26545538B51562AD(uParam2, 20);
	}
	else if (func_57(iParam3))
	{
		unk_0x26545538B51562AD(uParam2, 21);
	}
}

bool func_57(int iParam0)
{
	return iParam0 == 1;
}

bool func_58(int iParam0)
{
	return iParam0 == 6;
}

bool func_59(int iParam0)
{
	return iParam0 == 4;
}

bool func_60(int iParam0)
{
	return iParam0 == 2;
}

bool func_61(int iParam0)
{
	return iParam0 == 3;
}

bool func_62(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_794608.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_63(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_794608.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_64(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_794608.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_65(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_794608.f_4[iParam0 /*88*/].f_76, 7);
}

void func_66(int iParam0, var uParam1, var uParam2)
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

int func_67(float fParam0, int iParam1)
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

var func_68()
{
	return unk_0xC754513C760635E8("CREATOR_RSC");
}

Vector3 func_69(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x12B8990BAE31537D(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0xA361D922F3339879(iParam0, "camp");
	}
	else if (unk_0x12B8990BAE31537D(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iParam0, "camp"));
	}
	if (unk_0x12B8990BAE31537D(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0xA361D922F3339879(iParam0, "camh");
	}
	else if (unk_0x12B8990BAE31537D(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_70(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x12B8990BAE31537D(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x10AC91A12AB855AE(iParam0, sParam1) };
	}
	else if (unk_0x12B8990BAE31537D(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x1B61845568F6F93A(iParam0, sParam1);
		if (unk_0x12B8990BAE31537D(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0xA361D922F3339879(iVar3, "x");
		}
		if (unk_0x12B8990BAE31537D(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0xA361D922F3339879(iVar3, "y");
		}
		if (unk_0x12B8990BAE31537D(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0xA361D922F3339879(iVar3, "z");
		}
	}
	return Var0;
}

int func_71(int iParam0)
{
	if (unk_0x022946F7817A501F(iParam0))
	{
		return 2;
	}
	else if (unk_0xA603A612A24DFB75(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_72(int iParam0)
{
	func_73(joaat("mpply_big_feed_init"), iParam0);
}

void func_73(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x7D67977BA351D3A8(iVar0, uParam1, 1);
	}
}

void func_74(bool bParam0)
{
	if (!func_75())
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

int func_75()
{
	if (func_77() && func_76(0))
	{
		return 1;
	}
	return 0;
}

var func_76(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_77()
{
	return func_76(func_25() + 1);
}

void func_78()
{
	int iVar0;
	
	Global_968690.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_968690[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_968690.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_968690.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794608.f_111806[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794608.f_111806[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_80(char* sParam0)
{
	if ((((((((((((((((unk_0xC1C5B83BB6719C6C(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0xC1C5B83BB6719C6C(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0xC1C5B83BB6719C6C(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0xC1C5B83BB6719C6C(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0xC1C5B83BB6719C6C(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0xC1C5B83BB6719C6C(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0xC1C5B83BB6719C6C(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0xC1C5B83BB6719C6C(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0xC1C5B83BB6719C6C(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0xC1C5B83BB6719C6C(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0xC1C5B83BB6719C6C(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0xC1C5B83BB6719C6C(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0xC1C5B83BB6719C6C(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0xC1C5B83BB6719C6C(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0xC1C5B83BB6719C6C(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0xC1C5B83BB6719C6C(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0xC1C5B83BB6719C6C(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_81(int iParam0)
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

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3763 == 1)
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
					if (Global_786484.f_3082[iVar1 /*12*/].f_1 == unk_0x70ABFF261710305D(&(Global_2394808[iVar0 /*6*/])))
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
		Global_794608.f_4[(1100 + iVar0) /*88*/] = { Global_786484.f_1[iVar2[iVar0] /*88*/] };
		Global_794608.f_98389[(1100 + iVar0) /*12*/] = { Global_786484.f_3082[iVar2[iVar0] /*12*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1715897.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3503[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_83(1);
	return 1;
}

void func_83(int iParam0)
{
	Global_1715897.f_1784 = iParam0;
}

void func_84(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_85()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1100;
	while (iVar88 <= 1117)
	{
		Global_794608.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_86()
{
	if (unk_0xBF5127EAB2CAEF2C() != 0)
	{
		unk_0xAD8E5BF5EF384D7D();
	}
}

void func_87()
{
	if (func_93())
	{
		unk_0x690EF66897686FB2();
	}
	else
	{
		unk_0xE61CCCA5BC5F8EC4();
	}
}

bool func_88()
{
	return Global_2441456.f_4;
}

int func_89()
{
	if (unk_0xD80AC83DA90E9050())
	{
		return 1;
	}
	else if (unk_0x6BF802D7F4BAE5FF())
	{
		return 1;
	}
	else if (unk_0xEADA9DF72CFCEC5A())
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	if (!func_91())
	{
		return 1;
	}
	return 0;
}

int func_91()
{
	if (func_92())
	{
		return 0;
	}
	if (unk_0x878E45E8C4AA7963() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_92()
{
	return Global_2443548;
}

bool func_93()
{
	return Global_1572867.f_4;
}

bool func_94()
{
	return Global_2394746.f_2;
}

int func_95(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_89())
			{
				return 0;
			}
			func_87();
			func_86();
			if (func_93())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0xAA8C55D537E5DF52(0);
			}
			func_84(bParam0, 1);
			break;
		
		case 1:
			if (unk_0xB0CDA3458C2AE967(sParam1, func_81(0)))
			{
				func_84(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x63E547C031261612())
			{
				bParam0->f_40 = unk_0xF88F96DA990E8684();
				if (unk_0x3AD626F7E34A3E91())
				{
				}
				else
				{
					func_220(bParam0, 1, 1);
					bParam0->f_40 = unk_0xF88F96DA990E8684();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xB0ED650B7DC3072D() > 0)
				{
					if (unk_0xC2407D11F17B893F(0))
					{
						func_96(sParam2, 0);
						func_220(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_220(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_96(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(iVar0, "mission");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "gen");
	StringCopy(sParam0, unk_0x992D1F4B2174DAE9(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0xC2F143A8DD0D2A43(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0xF6CBC32F5D0A2A74(iParam1), 64);
	sParam0->f_56 = { func_70(iVar2, "start") };
	sParam0->f_59 = { func_70(iVar2, "cam") };
	sParam0->f_62 = { func_69(iVar2) };
	sParam0->f_65 = unk_0x0C70A268552D2D17(iVar2, "type");
	sParam0->f_68 = unk_0x0C70A268552D2D17(iVar2, "subtype");
	sParam0->f_80 = unk_0x0C70A268552D2D17(iVar2, "adverm");
	sParam0->f_79 = unk_0x0C70A268552D2D17(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x0C70A268552D2D17(iVar2, "min");
	sParam0->f_70 = unk_0x0C70A268552D2D17(iVar2, "rank");
	sParam0->f_71 = unk_0x0C70A268552D2D17(iVar2, "num");
	sParam0->f_73 = func_67(unk_0x4F6C7DD68DDBCBBD(iParam1, 0), unk_0xC1EBF68842083E1C(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x0C70A268552D2D17(iVar2, "charcon");
	if (func_98(unk_0x70ABFF261710305D(unk_0xA2461EDFF244BD0B(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_97() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4740)
		{
			sParam0->f_71 = Global_262145.f_4740;
		}
		if (sParam0->f_69 > Global_262145.f_4740)
		{
			sParam0->f_69 = Global_262145.f_4740;
		}
	}
	if (!func_93())
	{
		iVar3 = unk_0x077BA247D239DFC4(iParam1);
		if (unk_0xC009FB0DDD3D9458(iVar3))
		{
			sParam0->f_54 = unk_0x4C9052DD8093FA6E(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x12B8990BAE31537D(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x0C70A268552D2D17(iVar2, "ltm");
	}
	unk_0x26545538B51562AD(&(sParam0->f_76), 13);
	func_86();
}

int func_97()
{
	return Global_25120;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7347[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_99()
{
	return Global_2394746.f_1;
}

void func_100()
{
	Global_2441456.f_8 = 0;
	Global_2441456.f_7 = 0;
}

int func_101(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0x26545538B51562AD(uParam2, 3);
		if (!unk_0xF426A5DE932B3BEE(*uParam2, 2))
		{
		}
		unk_0x26545538B51562AD(uParam2, 2);
		return 1;
	}
	if ((func_216() && func_215()) || func_214())
	{
		if (!unk_0xF426A5DE932B3BEE(*uParam2, 2))
		{
		}
		unk_0x26545538B51562AD(uParam2, 2);
		unk_0x26545538B51562AD(uParam2, 1);
		unk_0x26545538B51562AD(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xF426A5DE932B3BEE(*uParam2, 3))
		{
			unk_0x26545538B51562AD(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_213())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_212())
		{
			if (unk_0xF426A5DE932B3BEE(*uParam2, 2))
			{
				unk_0x26545538B51562AD(uParam2, 3);
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
		if (func_88())
		{
			return 0;
		}
	}
	if (!unk_0xF426A5DE932B3BEE(*uParam2, 2))
	{
		if (!unk_0xF426A5DE932B3BEE(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_201(1, 1, bParam11);
			}
			unk_0x26545538B51562AD(uParam2, 1);
			func_220(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_115(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, iParam13))
		{
			if (((func_114() || Global_1617379 == 31) || Global_1617379 == 6) || Global_1617379 == 4)
			{
				if (Global_1617379.f_25 < 1)
				{
					Global_1617379.f_25 = 1;
				}
				if (Global_1617379.f_24 < 1)
				{
					Global_1617379.f_24 = 1;
				}
				if (!func_113())
				{
					func_112();
				}
			}
			else if (Global_1617379 == 1)
			{
				Global_1347825.f_4 = 99;
				Global_1347825.f_6 = Global_1617379.f_46;
				Global_1347825.f_7 = Global_1617379.f_41500;
				Global_1347825.f_9 = Global_1617379.f_34298;
				Global_1347825.f_11 = Global_1617379.f_47;
				Global_1347825.f_12 = Global_1617379.f_49;
				Global_1347825.f_13 = Global_1617379.f_51;
				Global_1347825.f_14 = Global_1617379.f_50;
				Global_1347825.f_16 = Global_1617379.f_22;
				Global_1347825.f_5 = Global_1617379.f_44;
				Global_1347825.f_10 = Global_1617379.f_57;
			}
			else if (func_111())
			{
				Global_2493533.f_7 = 9901;
				Global_2493533.f_8 = Global_1617379.f_33654 + 1;
				if (func_110(Global_1617379.f_29651))
				{
					Global_1617379.f_29651 = { Global_1617379.f_61 };
				}
			}
			unk_0x26545538B51562AD(uParam2, 2);
			unk_0xF17F4B0641AB2DE1(uParam2, 1);
			unk_0x26545538B51562AD(uParam2, 3);
			if (*uParam0)
			{
				func_109();
				func_108();
				if (func_107())
				{
					func_104(Global_1617379.f_20);
				}
				Global_1617379.f_71008 = 1;
			}
			else
			{
				func_218();
			}
			if (!func_103())
			{
				func_102();
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
		unk_0x26545538B51562AD(uParam2, 3);
		if (Global_1617379.f_71008)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_102()
{
	Global_2434762.f_27.f_49 = 1;
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x75CB9E30BA492FF0(&(Global_1617379.f_70658[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_104(int iParam0)
{
	if (!func_106())
	{
		unk_0xB2EC87ED12953BF5(2);
		unk_0x9CF1A2FC311C3F00(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x3BC462DDC9D9A953((iParam0 / 2));
		func_105();
	}
}

void func_105()
{
	unk_0x26545538B51562AD(&(Global_2434762.f_2), 3);
}

bool func_106()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762.f_2, 3);
}

bool func_107()
{
	return unk_0xF426A5DE932B3BEE(Global_2435528.f_1.f_2808, 8);
}

void func_108()
{
	unk_0x26545538B51562AD(&Global_2434762, 4);
}

void func_109()
{
	unk_0x26545538B51562AD(&Global_2434762, 28);
}

int func_110(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	if (Global_1617379 == 2 || Global_1617379 == 8)
	{
		return 1;
	}
	return 0;
}

void func_112()
{
	Global_1706782.f_5 = 0;
	Global_1706782.f_11 = -1;
}

int func_113()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1617379.f_25)
	{
		iVar1 = 0;
		while (iVar1 < Global_1617379.f_25)
		{
			if (Global_1617379.f_32[iVar0] != Global_1617379.f_32[iVar1])
			{
				return 0;
			}
			else if (Global_1617379.f_27[iVar0] != Global_1617379.f_27[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_114()
{
	if ((((((Global_1617379 == 0 || Global_1617379 == 4) || Global_1617379 == 6) || Global_1617379 == 3) || Global_1617379 == 31) || Global_1617379.f_2 == 6) || Global_1617379.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_115(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, var uParam14)
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
		if (func_88() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_93() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_90())
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
			uParam0->f_24 = func_200(1);
			uParam0->f_25 = func_198(1);
			if (func_89())
			{
				return 0;
			}
			func_87();
			func_86();
			if (func_93() || bParam9)
			{
				unk_0xAA8C55D537E5DF52(1);
			}
			else
			{
				unk_0xAA8C55D537E5DF52(0);
			}
			func_196();
			if (bParam4)
			{
				func_84(uParam0, 11);
			}
			else
			{
				func_84(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_93() || bParam9)
			{
				if (unk_0x7C1AAF1967B5F60A(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1617379.f_71015 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1617379.f_70652), sParam1, 24);
						}
						func_151(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_84(uParam0, 9);
						*uParam0 = 1;
						func_100();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_970889.f_42), sParam1, 24);
							Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_970889.f_12 };
							func_150(&iVar1, &uVar0, &Global_970889);
							if (Global_970889.f_65 == 0)
							{
								func_220(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_86();
								func_100();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_969327.f_42), sParam1, 24);
							Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_969327.f_12 };
							func_150(&iVar1, &uVar0, &Global_969327);
							uParam0->f_8 = 0;
							if (Global_969327.f_65 == 0)
							{
								func_220(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_86();
								func_100();
								return 1;
							}
						}
						func_86();
						unk_0x690EF66897686FB2();
						unk_0xAA8C55D537E5DF52(1);
						func_149(uParam0);
						func_84(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_100();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_100();
					func_86();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_81(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x97C9BE374886D19C(uParam0->f_5);
				func_84(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x29DBBAC3854E937B(sParam1, 1, func_81(iParam2)))
				{
					func_84(uParam0, 3);
				}
			}
			else if (unk_0xB0CDA3458C2AE967(sParam1, func_81(iParam2)))
			{
				func_84(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x63E547C031261612())
			{
				uParam0->f_40 = unk_0xF88F96DA990E8684();
				if (unk_0x3AD626F7E34A3E91())
				{
				}
				else
				{
					func_220(uParam0, 1, 1);
					uParam0->f_40 = unk_0xF88F96DA990E8684();
					*uParam0 = 0;
					func_100();
					return 1;
				}
				if (unk_0xB0ED650B7DC3072D() > 0)
				{
					if (!bParam12 && !func_147(uParam0->f_24, uParam0->f_25, unk_0xC2F143A8DD0D2A43(0), unk_0xFAC0FD9BE1542948(0)))
					{
						func_220(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_100();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0x97C9BE374886D19C(uParam0->f_5);
						func_84(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0xC2407D11F17B893F(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_970889.f_12), unk_0xF6CBC32F5D0A2A74(0), 64);
								StringCopy(&(Global_970889.f_36), unk_0x992D1F4B2174DAE9(0), 24);
								Global_970889.f_71 = unk_0xFAC0FD9BE1542948(0);
								StringCopy(&(Global_970889.f_42), sParam1, 24);
								Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_970889.f_12 };
								func_150(&iVar1, &uVar0, &Global_970889);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_969327.f_12), unk_0xF6CBC32F5D0A2A74(0), 64);
								StringCopy(&(Global_969327.f_36), unk_0x992D1F4B2174DAE9(0), 24);
								Global_969327.f_71 = unk_0xFAC0FD9BE1542948(0);
								StringCopy(&(Global_969327.f_42), sParam1, 24);
								Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_969327.f_12 };
								func_150(&iVar1, &uVar0, &Global_969327);
								uParam0->f_8 = 0;
							}
							func_86();
							func_84(uParam0, 10);
						}
						else
						{
							func_220(uParam0, 1, 1);
							*uParam0 = 0;
							func_100();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0xC2407D11F17B893F(0))
						{
							if (uParam0->f_16)
							{
								func_145(&iVar1, &uVar0, &Global_970889, iParam6);
								if (iParam6 == 1)
								{
									func_220(uParam0, 1, 1);
									*uParam0 = 1;
									func_100();
									return 1;
								}
								StringCopy(&(Global_970889.f_12), unk_0xF6CBC32F5D0A2A74(0), 64);
								StringCopy(&(Global_970889.f_36), unk_0x992D1F4B2174DAE9(0), 24);
								StringCopy(&(Global_970889.f_42), sParam1, 24);
								Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_970889.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_145(&iVar1, &uVar0, &Global_969327, iParam6);
								if (iParam6 == 1)
								{
									func_220(uParam0, 1, 1);
									*uParam0 = 1;
									func_100();
									return 1;
								}
								StringCopy(&(Global_969327.f_12), unk_0xF6CBC32F5D0A2A74(0), 64);
								StringCopy(&(Global_969327.f_36), unk_0x992D1F4B2174DAE9(0), 24);
								StringCopy(&(Global_969327.f_42), sParam1, 24);
								Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_19 = { Global_969327.f_12 };
								uParam0->f_8 = 0;
							}
							func_86();
							func_84(uParam0, 10);
						}
						else
						{
							func_220(uParam0, 1, 1);
							*uParam0 = 0;
							func_100();
							return 1;
						}
					}
				}
				else
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					func_100();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xDA37C2E18F19C6A7(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xDBF01C7AD4901C01();
				}
				if (unk_0xC8A24345CF20119D(uParam0->f_5))
				{
					func_84(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_84(uParam0, 0);
					return 0;
				}
				else
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					func_100();
					return 1;
				}
			}
			else if (func_144() || func_143() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0x60B08CFC977781CB("FMMC_DOWNLOAD");
					unk_0x28C463CBC3CAAFBE(5);
				}
			}
			break;
		
		case 6:
			if (bParam13 && !func_142())
			{
				return 0;
			}
			if (unk_0xD2761819C51ABB60(uParam0->f_5))
			{
				if (unk_0xFA18904B107F3909(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_201(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1617379.f_71015 = 1;
							Global_1617379.f_71004 = 1;
							StringCopy(&(Global_1617379.f_70341), "", 64);
							StringCopy(&(Global_1617379.f_70388), "", 24);
							StringCopy(&(Global_1617379.f_70366), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1617379.f_70652), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1617379.f_70365 = unk_0x70ABFF261710305D(unk_0xA2461EDFF244BD0B(0));
							StringCopy(&(Global_1617379.f_70388), unk_0xC2F143A8DD0D2A43(0), 24);
							Global_1617379.f_71015 = unk_0xFAC0FD9BE1542948(0);
							if (Global_1617379.f_71015 == 1 || Global_1617379.f_71015 == 2)
							{
								StringCopy(&(Global_1617379.f_70366), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1617379.f_70366), unk_0xC2F143A8DD0D2A43(0), 24);
							}
							if ((Global_1617379.f_71015 == 0 || Global_1617379.f_71015 == 3) && unk_0x02BD86B02FDFBF77(0))
							{
								StringCopy(&(Global_1617379.f_70341), unk_0xD358A441FAC2240C(unk_0x4D29100D094E5511()), 64);
							}
							else if ((unk_0xD0333FE560420AC5() && (Global_1617379.f_71015 == 0 || Global_1617379.f_71015 == 3)) && func_141(&iVar33, &(Global_1617379.f_70388)))
							{
								StringCopy(&(Global_1617379.f_70341), unk_0xD358A441FAC2240C(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1617379.f_70341), unk_0xED8AB6B3AF5FBAD6(0), 64);
							}
							Global_1617379.f_70672 = unk_0xC1EBF68842083E1C(0, 0);
							Global_1617379.f_71006 = unk_0x4FDDFB280457073C(0);
							uParam0->f_23 = func_71(0);
							Global_1617379.f_84040 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1617379.f_70652), unk_0x992D1F4B2174DAE9(0), 24);
							}
							if (Global_1617379.f_71015 == 0 || Global_1617379.f_71015 == 3)
							{
								if ((unk_0xF2C8BD6800A468EF(0, &uVar4) && unk_0x5C131CC0633E1D17(&uVar4, 13)) && unk_0xCD9EF71963819AF0(&uVar4))
								{
									Var17 = { Global_1617379.f_70341 };
									func_140(1, Var17);
								}
								else
								{
									func_140(0, Var17);
								}
							}
							else
							{
								func_140(0, Var17);
							}
							Global_1617379.f_8 = func_67(unk_0x4F6C7DD68DDBCBBD(0, 0), unk_0xC1EBF68842083E1C(0, 0));
							if (unk_0x41AD4ED4B469EA5B(uParam0->f_7))
							{
								Global_1617379.f_71005 = unk_0xA2FB7E556C1142B3(0);
								Global_1617379.f_71007 = 1;
							}
							else
							{
								Global_1617379.f_71005 = 0;
								Global_1617379.f_71007 = 0;
							}
							Global_1617379.f_71004 = unk_0xB633756014C8819D(0);
							uParam0->f_34 = unk_0x077BA247D239DFC4(0);
							if (!func_93())
							{
								if (unk_0xC009FB0DDD3D9458(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x4C9052DD8093FA6E(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1617379.f_70671 = uParam0->f_30;
							Global_2435528.f_4088.f_3 = unk_0x921ABE96CE730C82(0, 0);
							Global_2435528.f_4088.f_2 = unk_0xA78C7D576D2598B5(0, 0);
							if (Global_1617379.f_71015 == 1 || Global_1617379.f_71015 == 2)
							{
								StringCopy(&(Global_1617379.f_70341), func_68(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1617379.f_70652), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_93())
						{
							func_151(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
							if (bParam13 || uParam14)
							{
								func_84(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_151(-1, bParam11, 0, 0);
						}
						if (func_137(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xBF5127EAB2CAEF2C();
						iVar2 = unk_0x1B61845568F6F93A(iVar1, "mission");
						iVar3 = unk_0x1B61845568F6F93A(iVar2, "gen");
						StringCopy(&(Global_2428492.f_3178), unk_0xF6CBC32F5D0A2A74(0), 32);
						Global_2428492.f_3178.f_8 = unk_0x0C70A268552D2D17(iVar3, "type");
						uParam0->f_17 = unk_0x41AD4ED4B469EA5B(0);
						*uParam0 = 1;
						func_100();
						unk_0x806C6C94A234DAFE(uParam0->f_5);
						func_86();
						return 1;
					}
					unk_0x806C6C94A234DAFE(uParam0->f_5);
					func_86();
				}
				else if (iParam2 == 0)
				{
					func_220(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_100();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_220(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_100();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_151(uParam0->f_34, bParam11, (bParam13 || uParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_137(uParam0, iParam2, (bParam13 || uParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_135(uParam0, 0, bParam3, 0))
			{
				func_84(uParam0, 0);
				func_86();
				if ((((func_129(Global_1617379.f_70365) && func_114()) && !bParam9) && !unk_0x75CB9E30BA492FF0(&(Global_1617379.f_70658[0 /*6*/]))) && (func_144() || (func_124() && !func_123())))
				{
					uParam0->f_8 = 0;
					func_84(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_71(0);
						uParam0->f_21 = unk_0x4269ED40BB5FF584(0, uParam0->f_23);
					}
					func_122(&(uParam0->f_41), 0);
					func_84(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_220(uParam0, 1, 0);
					func_100();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x29DBBAC3854E937B(&(Global_1617379.f_70658[0 /*6*/]), 1, func_81(iParam2)))
			{
				func_84(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x63E547C031261612())
			{
				uParam0->f_40 = unk_0xF88F96DA990E8684();
				if (unk_0x3AD626F7E34A3E91())
				{
				}
				else
				{
					func_220(uParam0, 1, 1);
					uParam0->f_40 = unk_0xF88F96DA990E8684();
					*uParam0 = 0;
					func_100();
					return 1;
				}
				if (unk_0xB0ED650B7DC3072D() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0x97C9BE374886D19C(uParam0->f_5);
					func_84(uParam0, 22);
				}
				else
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					func_100();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xDA37C2E18F19C6A7(uParam0->f_5))
			{
				if (unk_0xC8A24345CF20119D(uParam0->f_5))
				{
					func_84(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_84(uParam0, 0);
					return 0;
				}
				else
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					func_100();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xD2761819C51ABB60(uParam0->f_5))
			{
				if (unk_0xFA18904B107F3909(uParam0->f_5))
				{
					func_119();
					func_220(uParam0, 1, 0);
					Global_1616134 = 1;
					func_100();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_220(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_100();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xF426A5DE932B3BEE(Global_1617379.f_7, 0))
			{
				if (bParam7)
				{
					if (func_118(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_220(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_100();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_220(uParam0, 1, 0);
					func_100();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_220(uParam0, 1, 1);
				func_100();
				return 1;
			}
			break;
		
		case 10:
			if (func_135(uParam0, 0, bParam3, iParam2))
			{
				func_86();
				func_84(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0xF03F58AF5794C005(&(Global_970889.f_1177), Global_970889.f_65, func_81(0)))
				{
					func_84(uParam0, 12);
				}
			}
			else if (unk_0xF03F58AF5794C005(&(Global_969327.f_1177), Global_969327.f_65, func_81(0)))
			{
				func_84(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x63E547C031261612())
			{
				if (unk_0x3AD626F7E34A3E91())
				{
				}
				else
				{
					func_220(uParam0, 1, 1);
					uParam0->f_40 = unk_0xF88F96DA990E8684();
					*uParam0 = 0;
					func_100();
					return 1;
				}
				if (unk_0xB0ED650B7DC3072D() > 0)
				{
					if (uParam0->f_16)
					{
						Global_970889.f_65 = unk_0xB0ED650B7DC3072D();
					}
					else
					{
						Global_969327.f_65 = unk_0xB0ED650B7DC3072D();
					}
					uParam0->f_8 = 0;
					func_220(uParam0, 0, bParam8);
					func_149(uParam0);
					func_84(uParam0, 13);
				}
				else
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					func_100();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_93())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_970889.f_65 - 1))
					{
						if (unk_0x7C1AAF1967B5F60A(&(Global_970889.f_1177[uParam0->f_9 /*6*/])))
						{
							func_117(uParam0, &Global_970889);
							unk_0x690EF66897686FB2();
						}
						uParam0->f_9++;
					}
					func_100();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_969327.f_65 - 1))
					{
						if (unk_0x7C1AAF1967B5F60A(&(Global_969327.f_1177[uParam0->f_9 /*6*/])))
						{
							func_117(uParam0, &Global_969327);
							unk_0x690EF66897686FB2();
						}
						uParam0->f_9++;
					}
					func_100();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_116(uParam0, &Global_970889))
				{
					if (uParam0->f_27)
					{
						func_220(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_100();
						return 1;
					}
					else
					{
						func_84(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_116(uParam0, &Global_969327))
			{
				if (uParam0->f_27)
				{
					func_220(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_100();
					return 1;
				}
				else
				{
					func_84(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_84(uParam0, 0);
			func_86();
			func_220(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_100();
			return 1;
			break;
	}
	return 0;
}

int func_116(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0xC2407D11F17B893F(uParam0->f_7))
		{
			if (!func_147(uParam0->f_24, uParam0->f_25, unk_0xC2F143A8DD0D2A43(0), unk_0xFAC0FD9BE1542948(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_117(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_86();
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

void func_117(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(iVar0, "mission");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_70(iVar2, "start") };
	if (func_93())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0xD856A6F0C791DA48(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0xF6CBC32F5D0A2A74(uParam0->f_7), 64);
	}
	if (!func_93())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0x4C9052DD8093FA6E(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0xFAC0FD9BE1542948(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0x0C70A268552D2D17(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0x0C70A268552D2D17(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0x0C70A268552D2D17(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0x0C70A268552D2D17(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0x0C70A268552D2D17(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_70(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_69(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0x0C70A268552D2D17(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_71(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0xED8AB6B3AF5FBAD6(uParam0->f_7), 24);
	if (!func_93())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_67(unk_0x4F6C7DD68DDBCBBD(uParam0->f_7, 0), unk_0xC1EBF68842083E1C(uParam0->f_7, 0));
	}
	if (func_97() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4740)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4740;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4740)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4740;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0x0C70A268552D2D17(iVar2, "rank");
	func_66(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0x26545538B51562AD(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0x992D1F4B2174DAE9(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xBF5127EAB2CAEF2C() != 0)
	{
		unk_0xAD8E5BF5EF384D7D();
	}
	if (!func_93())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0x992D1F4B2174DAE9(uParam0->f_9), 24);
		if (unk_0x41AD4ED4B469EA5B(uParam0->f_9))
		{
			unk_0x26545538B51562AD(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0xBF5127EAB2CAEF2C() != 0)
			{
				unk_0xAD8E5BF5EF384D7D();
			}
		}
	}
}

int func_118(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0x1A90CAA99695820C(*uParam0);
			}
			unk_0x86B0EECEA9CC39C1();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x3E345EA475A90669(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xAC319495958148AE(unk_0xA6ADA372B73F2EB8(0, uParam3)))
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
							unk_0x1A90CAA99695820C(*uParam0);
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

void func_119()
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
	
	iVar0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(iVar0, "mission");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "endcon");
	iVar3 = unk_0x1B61845568F6F93A(iVar1, "ene");
	iVar4 = unk_0x0C70A268552D2D17(iVar3, "no");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar3, "loc");
	iVar6 = unk_0x1B61845568F6F93A(iVar1, "goto");
	iVar7 = unk_0x0C70A268552D2D17(iVar6, "no");
	iVar8 = unk_0x1B61845568F6F93A(iVar1, "veh");
	iVar9 = unk_0x0C70A268552D2D17(iVar8, "no");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar8, "loc");
	iVar11 = unk_0x1B61845568F6F93A(iVar1, "obj");
	iVar12 = unk_0x0C70A268552D2D17(iVar11, "no");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1617379.f_25 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1616134.f_1[iVar14] = unk_0x9B63716C99E9B205(unk_0x6D57F4CEAF9EFFBB(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x6D57F4CEAF9EFFBB(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x6D57F4CEAF9EFFBB(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x6D57F4CEAF9EFFBB(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1616134.f_1[iVar14] - 1))
			{
				Global_1616134.f_6[iVar14 /*18*/][iVar15] = unk_0x9B63716C99E9B205(uVar25[iVar14], iVar15);
				Global_1616134.f_79[iVar14 /*18*/][iVar15] = unk_0x9B63716C99E9B205(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1616134.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xFC143A57593B7EBA(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1616134.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1617379.f_25 - 1))
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
		while (iVar14 < Global_1616134.f_1[iVar80])
		{
			if ((!unk_0xF426A5DE932B3BEE(Global_1616134.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x9B63716C99E9B205(uVar60[iVar80], iVar14);
			iVar193 = unk_0x9B63716C99E9B205(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_121(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1717830.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar10, iVar14) };
					Global_1717830.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1717830.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_120(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x9B63716C99E9B205(uVar70[iVar80], iVar14);
			iVar193 = unk_0x9B63716C99E9B205(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_121(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1717830.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar13, iVar14) };
					Global_1717830.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1717830.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_120(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x9B63716C99E9B205(uVar50[iVar80], iVar14);
			iVar15 = unk_0x9B63716C99E9B205(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_121(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1717830.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar55[iVar80], iVar14) };
					Global_1717830.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1717830.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_120(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x6D57F4CEAF9EFFBB(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x9B63716C99E9B205(uVar40[iVar80], iVar14);
			iVar15 = unk_0x9B63716C99E9B205(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF426A5DE932B3BEE(Global_1616134.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_121(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1717830.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0xFC5E9F9EB9E91418(iVar5, iVar14) };
					Global_1717830.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1717830.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1717830.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1717830.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_120(iVar15, 2) };
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
				if (Global_1717830.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1717830.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1717830.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1717830.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1717830.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xBF5127EAB2CAEF2C() != 0)
	{
		unk_0xAD8E5BF5EF384D7D();
	}
}

Vector3 func_120(int iParam0, int iParam1)
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

int func_121(int iParam0, int iParam1, int iParam2)
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

void func_122(var uParam0, bool bParam1)
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
		unk_0x1A90CAA99695820C(*uParam0);
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

bool func_123()
{
	return Global_2434762.f_595;
}

int func_124()
{
	if (((func_128() || func_127()) || func_126()) || func_125())
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762, 1);
}

bool func_126()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762, 2);
}

bool func_127()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762, 20);
}

var func_128()
{
	return Global_2434762.f_574;
}

int func_129(int iParam0)
{
	if ((((func_134(iParam0) || func_133(iParam0)) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_130(int iParam0)
{
	return iParam0 == Global_262145.f_6942;
}

bool func_131(int iParam0)
{
	return iParam0 == Global_262145.f_6936;
}

bool func_132(int iParam0)
{
	return iParam0 == Global_262145.f_6930;
}

bool func_133(int iParam0)
{
	return iParam0 == Global_262145.f_6923;
}

bool func_134(int iParam0)
{
	return iParam0 == Global_262145.f_6918;
}

int func_135(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_90())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_93())
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
			func_86();
			func_136();
			Global_1706742.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1706767.f_5 = 0;
				Global_1706767.f_4 = 0;
				Global_1706767.f_1 = 0;
				Global_1706767.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1706767.f_5 = 0;
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
			if (unk_0xB2EF5E9FF22C9C91(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xBF5127EAB2CAEF2C();
					Global_1706773 = unk_0x0C70A268552D2D17(iVar0, "pt");
					Global_1706773.f_1 = unk_0x0C70A268552D2D17(iVar0, "pu");
					Global_1706773.f_2 = unk_0x0C70A268552D2D17(iVar0, "ft");
					Global_1706773.f_3 = unk_0x0C70A268552D2D17(iVar0, "fu");
					Global_1706773.f_4 = unk_0x0C70A268552D2D17(iVar0, "qt");
					Global_1706773.f_5 = unk_0x0C70A268552D2D17(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xBF5127EAB2CAEF2C();
					Global_1706742.f_10 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "dt"));
					Global_1706742.f_11 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "du"));
					Global_1706742.f_9 = (Global_1706742.f_10 / Global_1706742.f_11);
					Global_1706742.f_13 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "pt"));
					Global_1706742.f_14 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "pu"));
					Global_977900 = unk_0xF2DB717A73826179(Global_1706742.f_14);
					Global_1706742.f_12 = (Global_1706742.f_13 / Global_1706742.f_14);
					Global_1706742.f_15 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "qt"));
					Global_1706742.f_17 = unk_0xBBDA792448DB5A89(unk_0x0C70A268552D2D17(iVar0, "qu"));
					Global_1706742.f_16 = (Global_1706742.f_15 / Global_1706742.f_17);
				}
				if (unk_0xBF5127EAB2CAEF2C() != 0)
				{
					unk_0xAD8E5BF5EF384D7D();
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
			if (unk_0x41AD4ED4B469EA5B(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x90A5A4F231DA97D4(iParam1))
					{
						iVar0 = unk_0xBF5127EAB2CAEF2C();
						if (iParam3 == 0)
						{
							Global_1706742 = unk_0x0C70A268552D2D17(iVar0, "quit");
							Global_1706742.f_2 = unk_0x0C70A268552D2D17(iVar0, "ply");
							Global_1706742.f_8 = unk_0x0C70A268552D2D17(iVar0, "fl");
							if (Global_1706742.f_2 > 0)
							{
								Global_1706742.f_5 = 1;
							}
							unk_0xAD8E5BF5EF384D7D();
						}
						else if (iParam3 == 4)
						{
							Global_1706767.f_5 = unk_0x472E86F64AA98B04(iVar0, "won");
							Global_1706767.f_4 = unk_0x0C70A268552D2D17(iVar0, "ply");
							Global_1706767.f_1 = unk_0x0C70A268552D2D17(iVar0, "quit");
							Global_1706767.f_2 = unk_0x0C70A268552D2D17(iVar0, "fl");
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

void func_136()
{
	Global_1706742 = 0;
	Global_1706742.f_2 = 0;
	Global_1706742.f_8 = 0;
	Global_1706742.f_3 = 0;
	Global_1706742.f_6 = 0;
}

int func_137(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_139() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_93() && iParam1 == 0) && !bParam3)
			{
				if (Global_1617379.f_71015 == 0)
				{
					if (Global_1617379 == 0)
					{
						if (((((Global_1617379.f_2 != 6 && !unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 20)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 21)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 22)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_4, 23)) && Global_1617379.f_2 != 5)
						{
							func_220(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_100();
							unk_0x806C6C94A234DAFE(uParam0->f_5);
							func_86();
							return 1;
						}
					}
					else if (Global_1617379 != 2 && Global_1617379 != 1)
					{
						func_220(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_100();
						unk_0x806C6C94A234DAFE(uParam0->f_5);
						func_86();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1617379 == 0 && Global_1617379.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_93())
		{
			if (!unk_0xC009FB0DDD3D9458(unk_0x077BA247D239DFC4(0)))
			{
				Global_1617379.f_71002 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_138();
	}
	func_84(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_138()
{
	unk_0x26545538B51562AD(&(Global_2434762.f_27.f_3), 7);
}

bool func_139()
{
	return unk_0xA29E536967D6DF2E(-1762644250);
}

void func_140(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2445494, "", 64);
	}
	else
	{
		Global_2445494 = { Param1 };
	}
	Global_2445493 = iParam0;
}

int func_141(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x75CB9E30BA492FF0(uParam1))
	{
		return 0;
	}
	unk_0xFCD2AE5FE6E8F557(uParam1, &uVar0, 13);
	if (unk_0x5C131CC0633E1D17(&uVar0, 13) && unk_0x9B9C3FABD760DD83(&uVar0))
	{
		*uParam0 = unk_0xB90971D5077FD42A(&uVar0);
		if (unk_0x27C9C05A6B4E58D2(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_142()
{
	return Global_2434762.f_27.f_47;
}

int func_143()
{
	return Global_2443499;
}

bool func_144()
{
	return Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_180 != 0;
}

void func_145(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(*uParam0, "data");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "trg");
	*uParam1 = unk_0x6D57F4CEAF9EFFBB(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x12B8990BAE31537D(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x472E86F64AA98B04(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x472E86F64AA98B04(iVar1, "open");
	Var3 = { func_146(unk_0xC2F143A8DD0D2A43(0)) };
	unk_0xCA2992FB3936A00C(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x0C70A268552D2D17(iVar2, "scr");
	uParam2->f_5 = unk_0x0C70A268552D2D17(iVar2, "time");
	uParam2->f_1 = unk_0x0C70A268552D2D17(iVar1, "cash");
	uParam2->f_65 = unk_0xEC85C2DC9477300E(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0x12A772D94035846C(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0xD856A6F0C791DA48(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0x0C70A268552D2D17(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0x0C70A268552D2D17(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_146(var uParam0)
{
	struct<13> Var0;
	
	unk_0x8A34069145D90300(uParam0, &Var0, 13);
	return Var0;
}

int func_147(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_146(sParam2) };
		Var13 = { func_148(unk_0x4D29100D094E5511()) };
		if (bParam1)
		{
			if (unk_0xFE7DEF93F4F2A351(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0xCD9EF71963819AF0(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0xD0333FE560420AC5())
		{
			if (unk_0xFE7DEF93F4F2A351(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x0ACA001EEA1E1F3C(&Var0) && unk_0xA68EEF5FA3062966(&Var0))
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
			Var13 = { func_148(unk_0x4D29100D094E5511()) };
			if (!unk_0xFE7DEF93F4F2A351(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_148(int iParam0)
{
	struct<13> Var0;
	
	unk_0x224B05ED6725EA52(iParam0, &Var0, 13);
	return Var0;
}

void func_149(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_970889.f_6 = 0;
		Global_970889.f_7 = 32;
	}
	else
	{
		Global_969327.f_6 = 0;
		Global_969327.f_7 = 32;
	}
}

void func_150(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xBF5127EAB2CAEF2C();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x6D57F4CEAF9EFFBB(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0xEC85C2DC9477300E(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0x12A772D94035846C(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0xD856A6F0C791DA48(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x472E86F64AA98B04(*uParam0, "h2h");
	uParam2->f_9 = unk_0x472E86F64AA98B04(*uParam0, "ch");
	if (func_93())
	{
		StringCopy(&(uParam2->f_12), unk_0xD856A6F0C791DA48(*uParam0, "name"), 64);
	}
}

void func_151(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xBF5127EAB2CAEF2C();
	iVar1 = unk_0x1B61845568F6F93A(iVar0, "mission");
	iVar2 = unk_0x1B61845568F6F93A(iVar1, "gen");
	Global_1617379.f_70975 = unk_0x0C70A268552D2D17(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_190(iVar1, iParam0, bParam1);
		func_189(iVar1);
		func_188(&iVar1);
		func_187(&iVar1);
		func_186(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_114())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_185(iVar1);
			func_184(iVar1);
			func_183(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_182(iVar1);
			func_181(iVar2);
			func_180(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_179(iVar1);
			func_178(iVar1);
			func_177(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_111())
	{
		func_175(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_173(iVar1);
		func_172(iVar1);
		func_171(iVar1);
		func_170(iVar1);
		func_169(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_167(iVar1);
		func_166(iVar1);
		func_164(iVar1);
		func_160(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1617379 == 1)
	{
		func_184(iVar1);
		func_159(iVar1);
	}
	else
	{
		func_154(iVar1);
	}
	if (unk_0xF426A5DE932B3BEE(Global_1617379.f_17, 19))
	{
		func_153(iVar1);
	}
	unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_4), 15);
	unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_4), 18);
	unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_4), 19);
	unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_4), 28);
	unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_4), 27);
	if (func_51(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_4), 15);
	}
	else if (func_50(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_4), 18);
	}
	else if (func_49(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_4), 19);
	}
	else if (func_47(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_4), 28);
	}
	else if (func_48(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_4), 27);
	}
	else if (func_46(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 0);
	}
	else if (func_45(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 1);
	}
	else if (func_44(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 2);
	}
	else if (func_40(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 6);
	}
	else if (func_39(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 7);
	}
	else if (func_38(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 8);
	}
	else if (func_37(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 9);
	}
	else if (func_33(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 10);
	}
	else if (func_36(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 11);
	}
	else if (func_35(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 12);
	}
	else if (func_61(Global_1617379.f_88495))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 13);
	}
	else if (func_34(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 14);
	}
	else if (func_43(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 3);
	}
	else if (func_42(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 4);
	}
	else if (func_60(Global_1617379.f_88495))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 16);
	}
	else if (func_59(Global_1617379.f_88495))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 17);
	}
	else if (func_58(Global_1617379.f_88495))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 20);
	}
	else if (func_57(Global_1617379.f_88495))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 21);
	}
	else if (func_41(Global_1617379.f_70365))
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_5), 5);
	}
	func_152(Global_1617379.f_70365);
}

void func_152(int iParam0)
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
		if (iParam0 == Global_262145.f_7347[iVar0] || iParam0 == Global_262145.f_7356[iVar0])
		{
			Global_1617379.f_61 = { func_55(0, iVar0) };
			Global_1617379.f_64 = { func_54(0, iVar0) };
			Var1 = { func_53(0, iVar0) };
			Global_1617379.f_76 = Var1.f_2;
			Global_1617379.f_1 = 0;
			Global_1617379.f_2 = 8;
			Global_1617379.f_70982 = 0;
			Global_1617379.f_70986 = 16777215;
		}
		iVar0++;
	}
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x1B61845568F6F93A(iParam0, "fsp");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "loc");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (unk_0xC128BEC1E47D7A3B(iVar2, iVar0) == 5)
		{
			Global_1617379.f_66476[iVar0 /*5*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
			Global_1617379.f_66476[iVar0 /*5*/].f_3 = unk_0x84CC82885F6E3E3E(iVar3, iVar0);
		}
		else
		{
			Global_1617379.f_66476[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_1617379.f_66476[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_154(int iParam0)
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
	
	iVar6 = unk_0x1B61845568F6F93A(iParam0, "ene");
	Global_1617379.f_47405 = unk_0x0C70A268552D2D17(iVar6, "no");
	if (unk_0x12B8990BAE31537D(iVar6, "spcap") == 2 && unk_0x0C70A268552D2D17(iVar6, "spcap") != 0)
	{
		Global_1617379.f_47406 = unk_0x0C70A268552D2D17(iVar6, "spcap");
	}
	else
	{
		Global_1617379.f_47406 = 50;
	}
	Global_1617379.f_47408 = unk_0x0C70A268552D2D17(iVar6, "time");
	Global_1617379.f_47409 = unk_0x0C70A268552D2D17(iVar6, "pal");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar6, "loc");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar6, "head");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar6, "rng");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar6, "model");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gun");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar6, "skill");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar6, "rsp");
	if (Global_1617379 == 1)
	{
		uVar14[0] = unk_0x6D57F4CEAF9EFFBB(iVar6, "team");
	}
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar6, "wep");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar6, "hlt");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar6, "lghlt");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar6, "veh");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar6, "foll");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar6, "iaim");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar6, "iaimt");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar6, "iaimr");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar6, "sanim");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar6, "sat");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar6, "saru");
	iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar6, "sara");
	iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar6, "satt");
	iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar6, "whost");
	iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar6, "flee");
	iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar6, "frr");
	iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pfrmr");
	iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psnt");
	iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psnei");
	iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar6, "p2sp");
	iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar6, "p2sh");
	iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar6, "accu");
	iVar41 = unk_0x6D57F4CEAF9EFFBB(iVar6, "lgacc");
	iVar42 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cmsty");
	iVar43 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedbs");
	iVar44 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbstwo");
	iVar45 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs3");
	iVar46 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs4");
	iVar47 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs5");
	iVar48 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs6");
	iVar49 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs7");
	iVar50 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pbs8");
	if (func_114())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1617379.f_25 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar51[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar56[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar61[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar66[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar160[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar166[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar172[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar178[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar190[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar184[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar196[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar202[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			iVar3++;
		}
		iVar101 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt");
		iVar102 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team");
		iVar103 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spawn");
		iVar104 = unk_0x6D57F4CEAF9EFFBB(iVar6, "acts");
		iVar105 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt2");
		iVar106 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team2");
		iVar107 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spawn2");
		iVar108 = unk_0x6D57F4CEAF9EFFBB(iVar6, "acts2");
		iVar109 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt3");
		iVar110 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team3");
		iVar111 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spawn3");
		iVar112 = unk_0x6D57F4CEAF9EFFBB(iVar6, "acts3");
		iVar113 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt4");
		iVar114 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team4");
		iVar115 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spawn4");
		iVar116 = unk_0x6D57F4CEAF9EFFBB(iVar6, "acts4");
		iVar117 = unk_0x6D57F4CEAF9EFFBB(iVar6, "act");
		iVar118 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pper");
		iVar119 = unk_0x6D57F4CEAF9EFFBB(iVar6, "infr");
		iVar120 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cca");
		iVar121 = unk_0x6D57F4CEAF9EFFBB(iVar6, "ccid");
		iVar122 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gfr");
		iVar123 = unk_0x6D57F4CEAF9EFFBB(iVar6, "msr");
		iVar124 = unk_0x6D57F4CEAF9EFFBB(iVar6, "bnr");
		iVar125 = unk_0x6D57F4CEAF9EFFBB(iVar6, "phor");
		iVar126 = unk_0x6D57F4CEAF9EFFBB(iVar6, "folr");
		iVar128 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pcvl");
		iVar129 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pcvr");
		iVar127 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pdfw");
		iVar133 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pvdp1");
		iVar134 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pvdp2");
		iVar130 = unk_0x6D57F4CEAF9EFFBB(iVar6, "paaw");
		iVar131 = unk_0x6D57F4CEAF9EFFBB(iVar6, "paav1");
		iVar132 = unk_0x6D57F4CEAF9EFFBB(iVar6, "paav2");
		iVar135 = unk_0x6D57F4CEAF9EFFBB(iVar6, "dt");
		iVar136 = unk_0x6D57F4CEAF9EFFBB(iVar6, "do");
		iVar137 = unk_0x6D57F4CEAF9EFFBB(iVar6, "dtim");
		iVar138 = unk_0x6D57F4CEAF9EFFBB(iVar6, "dln");
		iVar139 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pvsp");
		iVar145 = unk_0x6D57F4CEAF9EFFBB(iVar6, "drge");
		iVar146 = unk_0x6D57F4CEAF9EFFBB(iVar6, "agrot");
		iVar147 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gtds");
		iVar148 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pstat");
		iVar149 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pstar");
		iVar150 = unk_0x6D57F4CEAF9EFFBB(iVar6, "dmv");
		iVar151 = unk_0x6D57F4CEAF9EFFBB(iVar6, "blkr");
		iVar152 = unk_0x6D57F4CEAF9EFFBB(iVar6, "let");
		iVar153 = unk_0x6D57F4CEAF9EFFBB(iVar6, "escr");
		iVar154 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actr");
		iVar155 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actv");
		iVar156 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actv2");
		iVar157 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actv3");
		iVar158 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actv4");
		iVar159 = unk_0x6D57F4CEAF9EFFBB(iVar6, "actv5");
		iVar208 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedct");
		iVar210 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pdcra");
		iVar209 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedcr");
		iVar211 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedcv");
		iVar212 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedbc");
		iVar213 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pdbps");
		iVar214 = unk_0x6D57F4CEAF9EFFBB(iVar6, "avrad");
		iVar215 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pedst");
		iVar216 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gotor");
		iVar217 = unk_0x6D57F4CEAF9EFFBB(iVar6, "invbs");
		iVar218 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gort");
		iVar219 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gorr");
		iVar220 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gorw");
		iVar221 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cstnm");
		iVar222 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pspdl");
		iVar223 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psgr");
		iVar224 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pssgr");
		iVar225 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psctt");
		iVar226 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pscto");
		iVar227 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pscta");
		iVar228 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psctac");
		iVar229 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psctv");
		iVar230 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pscth");
		iVar231 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psctot");
		iVar232 = unk_0x6D57F4CEAF9EFFBB(iVar6, "psctoi");
		iVar233 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pscatd");
		iVar234 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cutsc");
		iVar235 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cutsh");
		iVar236 = unk_0x6D57F4CEAF9EFFBB(iVar6, "nmpass");
		iVar237 = unk_0x6D57F4CEAF9EFFBB(iVar6, "nmfail");
		iVar140 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pmcp");
		iVar141 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pmcf");
		iVar142 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pambv");
		iVar143 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pwrpt");
		iVar144 = unk_0x6D57F4CEAF9EFFBB(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar238[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar241[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_47405 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1617379.f_47410[iVar0 /*286*/] = { unk_0xFC5E9F9EB9E91418(iVar7, iVar0) };
			Global_1617379.f_47410[iVar0 /*286*/].f_3 = unk_0x84CC82885F6E3E3E(iVar8, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_4 = unk_0x84CC82885F6E3E3E(iVar9, iVar0);
			if (Global_1617379.f_47410[iVar0 /*286*/].f_4 < 0.75f)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_4 = 0.75f;
			}
			iVar2 = unk_0x9B63716C99E9B205(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_14 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_14 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_14 = iVar2;
			}
			if (!func_111() && !func_158())
			{
				if (!unk_0x9151153185C776B3(Global_1617379.f_47410[iVar0 /*286*/].f_14))
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_14 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x9B63716C99E9B205(iVar11, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_15 = iVar2;
			iVar2 = unk_0x9B63716C99E9B205(iVar12, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_16 = iVar2;
			if (Global_1617379 == 1)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_17[0] = unk_0x9B63716C99E9B205(uVar14[0], iVar0);
			}
			Global_1617379.f_47410[iVar0 /*286*/].f_50 = unk_0x9B63716C99E9B205(iVar23, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_36 = unk_0x9B63716C99E9B205(iVar19, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_37 = unk_0x9B63716C99E9B205(iVar20, iVar0);
			if (unk_0xC128BEC1E47D7A3B(iVar21, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_38 = unk_0x9B63716C99E9B205(iVar21, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_38 = -1;
			}
			Global_1617379.f_47410[iVar0 /*286*/].f_56 = unk_0x9B63716C99E9B205(iVar22, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_32 = unk_0x9B63716C99E9B205(iVar13, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_39 = unk_0x9B63716C99E9B205(iVar24, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_40 = unk_0x9B63716C99E9B205(iVar25, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_41 = unk_0x9B63716C99E9B205(iVar26, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_42 = unk_0x9B63716C99E9B205(iVar27, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_43 = unk_0x9B63716C99E9B205(iVar28, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_44 = unk_0x9B63716C99E9B205(iVar29, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_45 = unk_0x84CC82885F6E3E3E(iVar30, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_46 = unk_0x9B63716C99E9B205(iVar31, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_49 = unk_0x9B63716C99E9B205(iVar32, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_47 = unk_0x9B63716C99E9B205(iVar33, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_5 = unk_0x84CC82885F6E3E3E(iVar34, iVar0);
			if ((unk_0xC128BEC1E47D7A3B(iVar35, iVar0) == 3 && unk_0xC128BEC1E47D7A3B(iVar36, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar37, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_6 = unk_0x84CC82885F6E3E3E(iVar35, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_7 = unk_0x9B63716C99E9B205(iVar36, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_8 = unk_0x9B63716C99E9B205(iVar37, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_6 = 0f;
				Global_1617379.f_47410[iVar0 /*286*/].f_7 = 0;
				Global_1617379.f_47410[iVar0 /*286*/].f_8 = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar38, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar39, iVar0) == 3)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_9 = { unk_0xFC5E9F9EB9E91418(iVar38, iVar0) };
				Global_1617379.f_47410[iVar0 /*286*/].f_12 = unk_0x84CC82885F6E3E3E(iVar39, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
				Global_1617379.f_47410[iVar0 /*286*/].f_12 = 0f;
			}
			Global_1617379.f_47410[iVar0 /*286*/].f_34 = unk_0x9B63716C99E9B205(iVar40, iVar0);
			if (unk_0xC128BEC1E47D7A3B(iVar41, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_35 = unk_0x9B63716C99E9B205(iVar41, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_35 = -1;
			}
			Global_1617379.f_47410[iVar0 /*286*/].f_48 = unk_0x9B63716C99E9B205(iVar42, iVar0);
			Global_1617379.f_47410[iVar0 /*286*/].f_188 = unk_0x9B63716C99E9B205(iVar43, iVar0);
			if (unk_0xC128BEC1E47D7A3B(iVar44, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_189 = unk_0x9B63716C99E9B205(iVar44, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_189 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar45, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_190 = unk_0x9B63716C99E9B205(iVar45, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_190 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar46, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_191 = unk_0x9B63716C99E9B205(iVar46, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_191 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar47, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_192 = unk_0x9B63716C99E9B205(iVar47, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_192 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar48, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_193 = unk_0x9B63716C99E9B205(iVar48, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_193 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar49, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_194 = unk_0x9B63716C99E9B205(iVar49, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_194 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar50, iVar0) == 2)
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_195 = unk_0x9B63716C99E9B205(iVar50, iVar0);
			}
			else
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_195 = 0;
			}
			if (func_114())
			{
				Global_1617379.f_47410[iVar0 /*286*/].f_57 = unk_0x9B63716C99E9B205(iVar101, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_58 = unk_0x9B63716C99E9B205(iVar102, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_59 = unk_0x9B63716C99E9B205(iVar103, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_63 = unk_0x9B63716C99E9B205(iVar104, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar105, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_161 = unk_0x9B63716C99E9B205(iVar105, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_158 = unk_0x9B63716C99E9B205(iVar106, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_164 = unk_0x9B63716C99E9B205(iVar107, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_167 = unk_0x9B63716C99E9B205(iVar108, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_162 = unk_0x9B63716C99E9B205(iVar109, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_159 = unk_0x9B63716C99E9B205(iVar110, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_165 = unk_0x9B63716C99E9B205(iVar111, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_168 = unk_0x9B63716C99E9B205(iVar112, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_163 = unk_0x9B63716C99E9B205(iVar113, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_160 = unk_0x9B63716C99E9B205(iVar114, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_166 = unk_0x9B63716C99E9B205(iVar115, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_169 = unk_0x9B63716C99E9B205(iVar116, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_161 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_158 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_164 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_167 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_162 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_159 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_165 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_168 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_163 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_160 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_166 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_169 = 0;
				}
				Global_1617379.f_47410[iVar0 /*286*/].f_62 = unk_0x9B63716C99E9B205(iVar117, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar118, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_201 = unk_0x9B63716C99E9B205(iVar118, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_201 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar119, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_202 = unk_0x9B63716C99E9B205(iVar119, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_202 = 250;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar120, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_205 = unk_0x9B63716C99E9B205(iVar120, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_205 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar121, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_206 = unk_0x9B63716C99E9B205(iVar121, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_206 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar122, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_207 = unk_0x9B63716C99E9B205(iVar122, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_207 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar123, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_203 = unk_0x9B63716C99E9B205(iVar123, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_203 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar124, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_204 = unk_0x9B63716C99E9B205(iVar124, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_204 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar125, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_266 = unk_0x9B63716C99E9B205(iVar125, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_266 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar126, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_267 = unk_0x9B63716C99E9B205(iVar126, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_267 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar128, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_208 = { unk_0xFC5E9F9EB9E91418(iVar128, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_208 = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar129, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_211 = { unk_0xFC5E9F9EB9E91418(iVar129, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_211 = { 0f, 0f, 0f };
				}
				if ((unk_0xC128BEC1E47D7A3B(iVar133, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar134, iVar0) == 5) && unk_0xC128BEC1E47D7A3B(iVar127, iVar0) == 3)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_219 = { unk_0xFC5E9F9EB9E91418(iVar133, iVar0) };
					Global_1617379.f_47410[iVar0 /*286*/].f_222 = { unk_0xFC5E9F9EB9E91418(iVar134, iVar0) };
					Global_1617379.f_47410[iVar0 /*286*/].f_225 = unk_0x84CC82885F6E3E3E(iVar127, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_219 = { 0f, 0f, 0f };
					Global_1617379.f_47410[iVar0 /*286*/].f_222 = { 0f, 0f, 0f };
					Global_1617379.f_47410[iVar0 /*286*/].f_225 = 1f;
				}
				if ((unk_0xC128BEC1E47D7A3B(iVar130, iVar0) == 3 && unk_0xC128BEC1E47D7A3B(iVar131, iVar0) == 5) && unk_0xC128BEC1E47D7A3B(iVar132, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_183 = unk_0x84CC82885F6E3E3E(iVar130, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_177 = { unk_0xFC5E9F9EB9E91418(iVar131, iVar0) };
					Global_1617379.f_47410[iVar0 /*286*/].f_180 = { unk_0xFC5E9F9EB9E91418(iVar132, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_183 = 0f;
					Global_1617379.f_47410[iVar0 /*286*/].f_177 = { 0f, 0f, 0f };
					Global_1617379.f_47410[iVar0 /*286*/].f_180 = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar139, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_237 = unk_0x9B63716C99E9B205(iVar139, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_237 = 0;
				}
				Global_1617379.f_47410[iVar0 /*286*/].f_215 = unk_0x9B63716C99E9B205(iVar135, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_214 = unk_0x9B63716C99E9B205(iVar136, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_216 = unk_0x9B63716C99E9B205(iVar137, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_217 = unk_0x9B63716C99E9B205(iVar138, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_218 = unk_0x9B63716C99E9B205(iVar145, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_226 = unk_0x9B63716C99E9B205(iVar146, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_184 = unk_0x9B63716C99E9B205(iVar147, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_33 = unk_0x9B63716C99E9B205(iVar150, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_13 = unk_0x84CC82885F6E3E3E(iVar151, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_175 = unk_0x9B63716C99E9B205(iVar152, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_185 = unk_0x9B63716C99E9B205(iVar153, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_176 = unk_0x9B63716C99E9B205(iVar154, iVar0);
				Global_1617379.f_47410[iVar0 /*286*/].f_64 = { unk_0xFC5E9F9EB9E91418(iVar155, iVar0) };
				Global_1617379.f_47410[iVar0 /*286*/].f_64 = { unk_0xFC5E9F9EB9E91418(iVar155, iVar0) };
				if (unk_0xC128BEC1E47D7A3B(iVar156, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[0 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar156, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar157, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[1 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar157, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar158, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[2 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar158, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar159, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[3 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar159, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_67[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar148, iVar0) == 2 && unk_0xC128BEC1E47D7A3B(iVar149, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_186 = unk_0x9B63716C99E9B205(iVar148, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_187 = unk_0x9B63716C99E9B205(iVar149, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_186 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_187 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0xC128BEC1E47D7A3B(uVar160[iVar3], iVar0) == 2)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_81[iVar3] = unk_0x9B63716C99E9B205(uVar160[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_81[iVar3] = 0;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar166[iVar3], iVar0) == 2)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_87[iVar3] = unk_0x9B63716C99E9B205(uVar166[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_87[iVar3] = 0;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar172[iVar3], iVar0) == 5 && unk_0xC128BEC1E47D7A3B(uVar178[iVar3], iVar0) == 2)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_93[iVar3 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar172[iVar3], iVar0) };
						Global_1617379.f_47410[iVar0 /*286*/].f_109[iVar3] = unk_0x9B63716C99E9B205(uVar178[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_93[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1617379.f_47410[iVar0 /*286*/].f_109[iVar3] = 3;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar184[iVar3], iVar0) == 2)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_127[iVar3] = unk_0x9B63716C99E9B205(uVar184[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_127[iVar3] = -1;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar190[iVar3], iVar0) == 3)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_115[iVar3] = unk_0x84CC82885F6E3E3E(uVar190[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_115[iVar3] = 0f;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar196[iVar3], iVar0) == 3)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_121[iVar3] = unk_0x84CC82885F6E3E3E(uVar196[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_121[iVar3] = 0f;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar202[iVar3], iVar0) == 3)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_133[iVar3] = unk_0x84CC82885F6E3E3E(uVar202[iVar3], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_133[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar209, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_227 = unk_0x9B63716C99E9B205(iVar209, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_227 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar208, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_228 = unk_0x9B63716C99E9B205(iVar208, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_228 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar211, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_230 = unk_0x9B63716C99E9B205(iVar211, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_230 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar210, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_229 = unk_0x9B63716C99E9B205(iVar210, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_229 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar215, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_236 = unk_0x9B63716C99E9B205(iVar215, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_236 = -3;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar212, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_252 = unk_0x9B63716C99E9B205(iVar212, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_252 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar213, iVar0) == 3)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_263 = unk_0x84CC82885F6E3E3E(iVar213, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_263 = 1f;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar214, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_80 = unk_0x9B63716C99E9B205(iVar214, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_80 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar216, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_51 = unk_0x9B63716C99E9B205(iVar216, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_51 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar217, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_52 = unk_0x9B63716C99E9B205(iVar217, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_52 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar221, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_156 = unk_0x9B63716C99E9B205(iVar221, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_156 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar222, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_157 = unk_0x9B63716C99E9B205(iVar222, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_157 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar223, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_60 = unk_0x9B63716C99E9B205(iVar223, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_60 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar224, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_61 = unk_0x9B63716C99E9B205(iVar224, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_61 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar140, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_250 = unk_0x9B63716C99E9B205(iVar140, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_250 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar141, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_251 = unk_0x9B63716C99E9B205(iVar141, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_251 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar142, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_268 = unk_0x9B63716C99E9B205(iVar142, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_268 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar143, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_274 = unk_0x9B63716C99E9B205(iVar143, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_274 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar144, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_275 = unk_0x9B63716C99E9B205(iVar144, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_275 = -1;
				}
				if ((unk_0xC128BEC1E47D7A3B(iVar225, iVar0) == 2 && unk_0xC128BEC1E47D7A3B(iVar226, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar227, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_145 = unk_0x9B63716C99E9B205(iVar225, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_146 = unk_0x9B63716C99E9B205(iVar226, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_148 = unk_0x9B63716C99E9B205(iVar227, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_145 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_146 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_148 = 0;
				}
				if ((unk_0xC128BEC1E47D7A3B(iVar231, iVar0) == 2 && unk_0xC128BEC1E47D7A3B(iVar232, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar233, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_153 = unk_0x9B63716C99E9B205(iVar231, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_154 = unk_0x9B63716C99E9B205(iVar232, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_155 = unk_0x9B63716C99E9B205(iVar233, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_153 = 0;
					Global_1617379.f_47410[iVar0 /*286*/].f_154 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_155 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar228, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_147 = unk_0x9B63716C99E9B205(iVar228, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_147 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar229, iVar0) == 5)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_149 = { unk_0xFC5E9F9EB9E91418(iVar229, iVar0) };
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_149 = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(iVar230, iVar0) == 3)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_152 = unk_0x84CC82885F6E3E3E(iVar230, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_152 = 0f;
				}
				if ((unk_0xC128BEC1E47D7A3B(iVar218, iVar0) == 2 && unk_0xC128BEC1E47D7A3B(iVar219, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar220, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_53 = unk_0x9B63716C99E9B205(iVar218, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_54 = unk_0x9B63716C99E9B205(iVar219, iVar0);
					Global_1617379.f_47410[iVar0 /*286*/].f_55 = unk_0x9B63716C99E9B205(iVar220, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_53 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_54 = -1;
					Global_1617379.f_47410[iVar0 /*286*/].f_55 = joaat("weapon_pistol");
				}
				if (Global_1617379.f_2 != 6 && unk_0xC128BEC1E47D7A3B(iVar234, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_264 = unk_0x9B63716C99E9B205(iVar234, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_264 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar236, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_248 = unk_0x9B63716C99E9B205(iVar236, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_248 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar237, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_249 = unk_0x9B63716C99E9B205(iVar237, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_249 = -1;
				}
				if (Global_1617379.f_2 != 6 && unk_0xC128BEC1E47D7A3B(iVar235, iVar0) == 2)
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_265 = unk_0x9B63716C99E9B205(iVar235, iVar0);
				}
				else
				{
					Global_1617379.f_47410[iVar0 /*286*/].f_265 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xC128BEC1E47D7A3B(uVar238[iVar1], iVar0) == 5)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_276[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar238[iVar1], iVar0) };
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xC128BEC1E47D7A3B(uVar241[iVar1], iVar0) == 3)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_283[iVar1] = unk_0x84CC82885F6E3E3E(uVar241[iVar1], iVar0);
					}
					else
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_283[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1617379.f_25 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1617379.f_47410[iVar0 /*286*/].f_17[iVar3] = unk_0x9B63716C99E9B205(uVar14[iVar3], iVar0);
						Global_1617379.f_47410[iVar0 /*286*/].f_22[iVar3] = unk_0x9B63716C99E9B205(uVar51[iVar3], iVar0);
						Global_1617379.f_47410[iVar0 /*286*/].f_27[iVar3] = unk_0x9B63716C99E9B205(uVar56[iVar3], iVar0);
						if (Global_1617379.f_47410[iVar0 /*286*/].f_27[iVar3] == -1)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_27[iVar3] = 99999;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar61[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_196[iVar3] = unk_0x9B63716C99E9B205(uVar61[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_196[iVar3] = -1;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar66[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_170[iVar3] = unk_0x9B63716C99E9B205(uVar66[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_170[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar71[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_238[iVar3] = unk_0x9B63716C99E9B205(uVar71[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_238[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar76[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_243[iVar3] = unk_0x9B63716C99E9B205(uVar76[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_243[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar81[iVar3], iVar0) == 2 && unk_0xC128BEC1E47D7A3B(uVar86[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_253[iVar3] = unk_0x9B63716C99E9B205(uVar81[iVar3], iVar0);
							Global_1617379.f_47410[iVar0 /*286*/].f_258[iVar3] = unk_0x9B63716C99E9B205(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_253[iVar3] = -1;
							Global_1617379.f_47410[iVar0 /*286*/].f_258[iVar3] = -1;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar91[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_269[iVar3] = unk_0x9B63716C99E9B205(uVar91[iVar3], iVar0);
						}
						else if (unk_0xF426A5DE932B3BEE(Global_1617379.f_28750[iVar3 /*3*/][func_157(iVar0)], func_156(iVar0)))
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_269[iVar3] = -1;
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_269[iVar3] = -2;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar96[iVar3], iVar0) == 2)
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_231[iVar3] = unk_0x9B63716C99E9B205(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_47410[iVar0 /*286*/].f_231[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_155(&iVar6);
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
	
	Global_1617379.f_64842[0] = unk_0x0C70A268552D2D17(*iParam0, "no0");
	iVar1 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "loc0");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "head0");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "bit0");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "veh0");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_64842[0] - 1))
	{
		Global_1617379.f_65389[0 /*262*/][iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar1, iVar0) };
		Global_1617379.f_65389[0 /*262*/][iVar0 /*9*/].f_3 = unk_0x84CC82885F6E3E3E(iVar2, iVar0);
		Global_1617379.f_65389[0 /*262*/][iVar0 /*9*/].f_5 = unk_0x9B63716C99E9B205(iVar3, iVar0);
		if (unk_0xC128BEC1E47D7A3B(iVar4, iVar0) == 2)
		{
			Global_1617379.f_65389[0 /*262*/][iVar0 /*9*/].f_7 = unk_0x9B63716C99E9B205(iVar4, iVar0);
		}
		else
		{
			Global_1617379.f_65389[0 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1617379.f_64842[1] = unk_0x0C70A268552D2D17(*iParam0, "no1");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "loc1");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "head1");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "bit1");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "veh1");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_64842[1] - 1))
	{
		Global_1617379.f_65389[1 /*262*/][iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar5, iVar0) };
		Global_1617379.f_65389[1 /*262*/][iVar0 /*9*/].f_3 = unk_0x84CC82885F6E3E3E(iVar6, iVar0);
		Global_1617379.f_65389[1 /*262*/][iVar0 /*9*/].f_5 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		if (unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 2)
		{
			Global_1617379.f_65389[1 /*262*/][iVar0 /*9*/].f_7 = unk_0x9B63716C99E9B205(iVar8, iVar0);
		}
		else
		{
			Global_1617379.f_65389[1 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1617379.f_64842[2] = unk_0x0C70A268552D2D17(*iParam0, "no2");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "loc2");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "head2");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "bit2");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "veh2");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_64842[2] - 1))
	{
		Global_1617379.f_65389[2 /*262*/][iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar9, iVar0) };
		Global_1617379.f_65389[2 /*262*/][iVar0 /*9*/].f_3 = unk_0x84CC82885F6E3E3E(iVar10, iVar0);
		Global_1617379.f_65389[2 /*262*/][iVar0 /*9*/].f_5 = unk_0x9B63716C99E9B205(iVar11, iVar0);
		if (unk_0xC128BEC1E47D7A3B(iVar12, iVar0) == 2)
		{
			Global_1617379.f_65389[2 /*262*/][iVar0 /*9*/].f_7 = unk_0x9B63716C99E9B205(iVar12, iVar0);
		}
		else
		{
			Global_1617379.f_65389[2 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
	Global_1617379.f_64842[3] = unk_0x0C70A268552D2D17(*iParam0, "no3");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "loc3");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "head3");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "bit3");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(*iParam0, "veh3");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_64842[3] - 1))
	{
		Global_1617379.f_65389[3 /*262*/][iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar13, iVar0) };
		Global_1617379.f_65389[3 /*262*/][iVar0 /*9*/].f_3 = unk_0x84CC82885F6E3E3E(iVar14, iVar0);
		Global_1617379.f_65389[3 /*262*/][iVar0 /*9*/].f_5 = unk_0x9B63716C99E9B205(iVar15, iVar0);
		if (unk_0xC128BEC1E47D7A3B(iVar16, iVar0) == 2)
		{
			Global_1617379.f_65389[3 /*262*/][iVar0 /*9*/].f_7 = unk_0x9B63716C99E9B205(iVar16, iVar0);
		}
		else
		{
			Global_1617379.f_65389[3 /*262*/][iVar0 /*9*/].f_7 = -1;
		}
		iVar0++;
	}
}

int func_156(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_157(iParam0) * 31);
}

int func_157(int iParam0)
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

int func_158()
{
	if (Global_1617379 == 6)
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x1B61845568F6F93A(iParam0, "ene");
	Global_1617379.f_64841 = unk_0x0C70A268552D2D17(iVar1, "no");
	Global_1617379.f_34248 = unk_0x0C70A268552D2D17(iVar1, "veh");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "loc");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "head");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar1, "team");
	if (Global_1617379.f_64841 > 60)
	{
		Global_1617379.f_64841 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_64841 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1617379.f_64848[iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
			Global_1617379.f_64848[iVar0 /*9*/].f_3 = unk_0x84CC82885F6E3E3E(iVar3, iVar0);
			Global_1617379.f_64848[iVar0 /*9*/].f_4 = unk_0x9B63716C99E9B205(iVar4, iVar0);
		}
		iVar0++;
	}
	func_155(&iVar1);
}

void func_160(int iParam0)
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
	
	iVar2 = unk_0x1B61845568F6F93A(iParam0, "dprop");
	Global_1617379.f_40843 = func_163(unk_0x0C70A268552D2D17(iVar2, "no"), 0, 100);
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar2, "loc");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar2, "vRot");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar2, "head");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar2, "model");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst2");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso2");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss2");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc2");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst3");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso3");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss3");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc3");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst4");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso4");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss4");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc4");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpct");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpcr");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prcra");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpbs");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpkt");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpdclr");
	if (Global_1617379.f_40843 > 20)
	{
		Global_1617379.f_40843 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_40843 - 1))
	{
		Global_1617379.f_40845[iVar0 /*31*/] = { unk_0xFC5E9F9EB9E91418(iVar3, iVar0) };
		Global_1617379.f_40845[iVar0 /*31*/].f_3 = { unk_0xFC5E9F9EB9E91418(iVar4, iVar0) };
		Global_1617379.f_40845[iVar0 /*31*/].f_6 = unk_0x84CC82885F6E3E3E(iVar5, iVar0);
		Global_1617379.f_40845[iVar0 /*31*/].f_8 = -1;
		iVar1 = unk_0x9B63716C99E9B205(iVar6, iVar0);
		Global_1617379.f_40845[iVar0 /*31*/].f_7 = func_162(iVar1);
		if (!unk_0x9151153185C776B3(Global_1617379.f_40845[iVar0 /*31*/].f_7))
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1617379.f_40845[iVar0 /*31*/].f_12 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		Global_1617379.f_40845[iVar0 /*31*/].f_11 = unk_0x9B63716C99E9B205(iVar8, iVar0);
		Global_1617379.f_40845[iVar0 /*31*/].f_13 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		if (Global_1617379.f_40845[iVar0 /*31*/].f_13 == -1)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_13 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar11, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_19 = unk_0x9B63716C99E9B205(iVar11, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_22 = unk_0x9B63716C99E9B205(iVar12, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_25 = unk_0x9B63716C99E9B205(iVar13, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_20 = unk_0x9B63716C99E9B205(iVar15, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_23 = unk_0x9B63716C99E9B205(iVar16, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_26 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_21 = unk_0x9B63716C99E9B205(iVar19, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_24 = unk_0x9B63716C99E9B205(iVar20, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_27 = unk_0x9B63716C99E9B205(iVar21, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_22 = -1;
			Global_1617379.f_40845[iVar0 /*31*/].f_19 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_25 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_23 = -1;
			Global_1617379.f_40845[iVar0 /*31*/].f_20 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_26 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_24 = -1;
			Global_1617379.f_40845[iVar0 /*31*/].f_21 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_14 = unk_0x9B63716C99E9B205(iVar10, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_28 = unk_0x9B63716C99E9B205(iVar14, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_29 = unk_0x9B63716C99E9B205(iVar18, iVar0);
			Global_1617379.f_40845[iVar0 /*31*/].f_30 = unk_0x9B63716C99E9B205(iVar22, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_14 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_28 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_29 = 0;
			Global_1617379.f_40845[iVar0 /*31*/].f_30 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar24, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_15 = unk_0x9B63716C99E9B205(iVar24, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar23, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_16 = unk_0x9B63716C99E9B205(iVar23, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar25, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_17 = unk_0x9B63716C99E9B205(iVar25, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_17 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar26, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_18 = unk_0x9B63716C99E9B205(iVar26, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_18 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar27, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_9 = unk_0x9B63716C99E9B205(iVar27, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_9 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar28, iVar0) == 2)
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_10 = unk_0x9B63716C99E9B205(iVar28, iVar0);
		}
		else
		{
			Global_1617379.f_40845[iVar0 /*31*/].f_10 = 0;
		}
		iVar0++;
	}
	iVar29 = iVar0;
	if (func_161() || Global_1617379 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1617379.f_34300 - 1))
		{
			Global_1617379.f_40845[iVar29 /*31*/] = { Global_1617379.f_34303[iVar0 /*89*/] };
			Global_1617379.f_40845[iVar29 /*31*/].f_3 = { Global_1617379.f_34303[iVar0 /*89*/].f_4 };
			Global_1617379.f_40845[iVar29 /*31*/].f_6 = Global_1617379.f_34303[iVar0 /*89*/].f_3;
			Global_1617379.f_40845[iVar29 /*31*/].f_8 = iVar0;
			Global_1617379.f_40845[iVar29 /*31*/].f_7 = joaat("prop_container_ld_pu");
			iVar30 = 0;
			while (iVar30 <= 3)
			{
				Global_1617379.f_34303[iVar29 /*89*/].f_17[iVar30] = 0;
				Global_1617379.f_34303[iVar29 /*89*/].f_22[iVar30] = 99999;
				iVar30++;
			}
			Global_1617379.f_40844++;
			Global_1617379.f_40843++;
			iVar29++;
			iVar0++;
		}
	}
}

int func_161()
{
	if (Global_1617379 == 0 && Global_1617379.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
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
	if ((unk_0x748A964A12412EBB() || unk_0xD0333FE560420AC5()) || unk_0xDFCB321F1D24137F())
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
	else if (unk_0xE060CF72D1CA5C87() || unk_0x3E00A1016DB5AFEF())
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

int func_163(int iParam0, int iParam1, int iParam2)
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

void func_164(int iParam0)
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
	
	iVar2 = unk_0x1B61845568F6F93A(iParam0, "prop");
	Global_1617379.f_36498 = unk_0x0C70A268552D2D17(iVar2, "no");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar2, "loc");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar2, "vRot");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar2, "head");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar2, "model");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst2");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso2");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss2");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc2");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst3");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso3");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss3");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc3");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asst4");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asso4");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar2, "asss4");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar2, "pasc4");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar2, "bpbid");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar2, "bpbip");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar2, "bpbpt");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar2, "aldel");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar2, "alsnd");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar2, "flvfx");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpcl");
	iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prplod");
	iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpatn");
	iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpasn");
	iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpclr");
	iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prptsp");
	iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prptds");
	iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpct");
	iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpcr");
	iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prcra");
	iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prpbs");
	iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar2, "prers");
	if (Global_1617379.f_36498 > 100)
	{
		Global_1617379.f_36498 = 100;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_36498 - 1))
	{
		Global_1617379.f_36499[iVar0 /*43*/] = { unk_0xFC5E9F9EB9E91418(iVar3, iVar0) };
		Global_1617379.f_36499[iVar0 /*43*/].f_3 = { unk_0xFC5E9F9EB9E91418(iVar4, iVar0) };
		Global_1617379.f_36499[iVar0 /*43*/].f_6 = unk_0x84CC82885F6E3E3E(iVar5, iVar0);
		iVar1 = unk_0x9B63716C99E9B205(iVar6, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_7 = func_162(iVar1);
		if (!unk_0x9151153185C776B3(Global_1617379.f_36499[iVar0 /*43*/].f_7))
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1617379.f_36499[iVar0 /*43*/].f_9 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_8 = unk_0x9B63716C99E9B205(iVar8, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_10 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		if (Global_1617379.f_36499[iVar0 /*43*/].f_10 == -1)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_10 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar23, iVar0) == 1)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_40 = unk_0x31C444FBA3B6A27B(iVar23, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_40 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar24, iVar0) == 1)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_41 = unk_0x31C444FBA3B6A27B(iVar24, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_41 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar25, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_42 = unk_0x9B63716C99E9B205(iVar25, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_42 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar11, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_27 = unk_0x9B63716C99E9B205(iVar11, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_30 = unk_0x9B63716C99E9B205(iVar12, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_33 = unk_0x9B63716C99E9B205(iVar13, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_28 = unk_0x9B63716C99E9B205(iVar15, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_31 = unk_0x9B63716C99E9B205(iVar16, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_34 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_29 = unk_0x9B63716C99E9B205(iVar19, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_32 = unk_0x9B63716C99E9B205(iVar20, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_35 = unk_0x9B63716C99E9B205(iVar21, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_30 = -1;
			Global_1617379.f_36499[iVar0 /*43*/].f_27 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_33 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_31 = -1;
			Global_1617379.f_36499[iVar0 /*43*/].f_28 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_34 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_32 = -1;
			Global_1617379.f_36499[iVar0 /*43*/].f_29 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_35 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_11 = unk_0x9B63716C99E9B205(iVar10, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_36 = unk_0x9B63716C99E9B205(iVar14, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_37 = unk_0x9B63716C99E9B205(iVar18, iVar0);
			Global_1617379.f_36499[iVar0 /*43*/].f_38 = unk_0x9B63716C99E9B205(iVar22, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_11 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_36 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_37 = 0;
			Global_1617379.f_36499[iVar0 /*43*/].f_38 = 0;
		}
		Global_1617379.f_36499[iVar0 /*43*/].f_12 = unk_0x9B63716C99E9B205(iVar26, iVar0);
		if (Global_1617379.f_36499[iVar0 /*43*/].f_12 > 0 && Global_1617379.f_36499[iVar0 /*43*/].f_12 < 1000)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_12 = func_165(Global_1617379.f_36499[iVar0 /*43*/].f_12);
		}
		Global_1617379.f_36499[iVar0 /*43*/].f_13 = unk_0x9B63716C99E9B205(iVar27, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_14 = unk_0x9B63716C99E9B205(iVar28, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_15 = unk_0x9B63716C99E9B205(iVar29, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_25 = unk_0x84CC82885F6E3E3E(iVar34, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_26 = unk_0x84CC82885F6E3E3E(iVar35, iVar0);
		if (unk_0xC128BEC1E47D7A3B(iVar30, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_21 = unk_0x9B63716C99E9B205(iVar30, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_21 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar31, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_22 = unk_0x9B63716C99E9B205(iVar31, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_22 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar32, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_23 = unk_0x9B63716C99E9B205(iVar32, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_23 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar33, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_24 = unk_0x9B63716C99E9B205(iVar33, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_24 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar34, iVar0) == 3)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_25 = unk_0x84CC82885F6E3E3E(iVar34, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_25 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar35, iVar0) == 3)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_26 = unk_0x84CC82885F6E3E3E(iVar35, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_26 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar37, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_16 = unk_0x9B63716C99E9B205(iVar37, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_16 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar36, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_17 = unk_0x9B63716C99E9B205(iVar36, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_17 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar38, iVar0) == 2)
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_18 = unk_0x9B63716C99E9B205(iVar38, iVar0);
		}
		else
		{
			Global_1617379.f_36499[iVar0 /*43*/].f_18 = -1;
		}
		Global_1617379.f_36499[iVar0 /*43*/].f_19 = unk_0x9B63716C99E9B205(iVar39, iVar0);
		Global_1617379.f_36499[iVar0 /*43*/].f_20 = unk_0x9B63716C99E9B205(iVar40, iVar0);
		iVar0++;
	}
}

int func_165(int iParam0)
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

void func_166(int iParam0)
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
	int iVar118;
	
	iVar6 = unk_0x1B61845568F6F93A(iParam0, "veh");
	Global_1617379.f_43061 = unk_0x0C70A268552D2D17(iVar6, "no");
	Global_1617379.f_43062 = unk_0x0C70A268552D2D17(iVar6, "time");
	Global_1617379.f_43063 = unk_0x0C70A268552D2D17(iVar6, "pal");
	iVar7 = unk_0x1B61845568F6F93A(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1617379.f_25 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1617379.f_80[iVar3 /*6968*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1617379.f_47257[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1617379.f_28046[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28132[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28132[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28218[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28218[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28304[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28304[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28390[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28390[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28476[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28476[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28562[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28562[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x12B8990BAE31537D(iVar7, &cVar4) == 2)
				{
					Global_1617379.f_28648[iVar0 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar7, &cVar4);
				}
				else
				{
					Global_1617379.f_28648[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar6, "loc");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar6, "head");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar6, "model");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar6, "col");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar6, "rsp");
	if (func_114())
	{
		iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vrr");
		iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vrmr");
		iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vsnt");
		iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vsnei");
		iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar6, "v2sp");
		iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar6, "v2sh");
		iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt");
		iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team");
		iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spwn");
		iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt2");
		iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team2");
		iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spwn2");
		iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt3");
		iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team3");
		iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spwn3");
		iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar6, "objt4");
		iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar6, "team4");
		iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar6, "spwn4");
		Global_1617379.f_36497 = unk_0x0C70A268552D2D17(iVar6, "nocr");
		iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar6, "crgdm");
		iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar6, "liv");
		iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar6, "modps");
		iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar6, "colc");
		iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar6, "col2");
		iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar6, "col3");
		Global_1617379.f_43064 = unk_0x0C70A268552D2D17(iVar6, "burst");
		iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar6, "hlth");
		iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar6, "enghp");
		iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar6, "ptrhp");
		iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar6, "bdyhp");
		iVar41 = unk_0x6D57F4CEAF9EFFBB(iVar6, "drbs");
		iVar42 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vbs2");
		iVar43 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vbs3");
		iVar44 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vbs4");
		iVar45 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vebs");
		iVar46 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehct");
		iVar49 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vhcra");
		iVar47 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehcr");
		iVar48 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehcv");
		iVar50 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehbc");
		iVar51 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehbr");
		iVar52 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vspdl");
		iVar53 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vsgr");
		iVar54 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vssgr");
		iVar55 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vcnm");
		iVar56 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehap");
		iVar57 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehat");
		iVar58 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vehdu");
		iVar59 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vldt");
		iVar60 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vldr");
		iVar61 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cutsc");
		iVar62 = unk_0x6D57F4CEAF9EFFBB(iVar6, "cutsh");
		iVar66 = unk_0x6D57F4CEAF9EFFBB(iVar6, "nmpass");
		iVar67 = unk_0x6D57F4CEAF9EFFBB(iVar6, "nmfail");
		iVar63 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vmcp");
		iVar64 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vmcf");
		iVar65 = unk_0x6D57F4CEAF9EFFBB(iVar6, "gotor");
		iVar115 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vphrang");
		iVar116 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vwpndmg");
		iVar117 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vtmhrn");
		iVar118 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vdrpovr");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar108[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar111[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			iVar1++;
		}
		iVar114 = unk_0x6D57F4CEAF9EFFBB(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1617379.f_25 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar68[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar73[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar78[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar83[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar88[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar93[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar98[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar103[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_43061 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1617379.f_43065[iVar0 /*127*/] = { unk_0xFC5E9F9EB9E91418(iVar8, iVar0) };
			Global_1617379.f_43065[iVar0 /*127*/].f_3 = unk_0x84CC82885F6E3E3E(iVar9, iVar0);
			iVar2 = unk_0x9B63716C99E9B205(iVar16, iVar0);
			Global_1617379.f_43065[iVar0 /*127*/].f_12 = iVar2;
			if (!func_111())
			{
				if (!unk_0x9151153185C776B3(Global_1617379.f_43065[iVar0 /*127*/].f_12))
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_12 = joaat("baller");
				}
			}
			Global_1617379.f_43065[iVar0 /*127*/].f_23 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			Global_1617379.f_43065[iVar0 /*127*/].f_29 = unk_0x9B63716C99E9B205(iVar18, iVar0);
			if (func_114())
			{
				if (((unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 3 && unk_0xC128BEC1E47D7A3B(iVar11, iVar0) == 3) && unk_0xC128BEC1E47D7A3B(iVar12, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar13, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_4 = unk_0x84CC82885F6E3E3E(iVar10, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_5 = unk_0x84CC82885F6E3E3E(iVar11, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_6 = unk_0x9B63716C99E9B205(iVar12, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_7 = unk_0x9B63716C99E9B205(iVar13, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_4 = 100f;
					Global_1617379.f_43065[iVar0 /*127*/].f_5 = 0f;
					Global_1617379.f_43065[iVar0 /*127*/].f_6 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_7 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar14, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar15, iVar0) == 3)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_8 = { unk_0xFC5E9F9EB9E91418(iVar14, iVar0) };
					Global_1617379.f_43065[iVar0 /*127*/].f_11 = unk_0x84CC82885F6E3E3E(iVar15, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_8 = { 0f, 0f, 0f };
					Global_1617379.f_43065[iVar0 /*127*/].f_11 = 0f;
				}
				Global_1617379.f_43065[iVar0 /*127*/].f_36 = unk_0x9B63716C99E9B205(iVar19, iVar0);
				Global_1617379.f_43065[iVar0 /*127*/].f_37 = unk_0x9B63716C99E9B205(iVar20, iVar0);
				Global_1617379.f_43065[iVar0 /*127*/].f_38 = unk_0x9B63716C99E9B205(iVar21, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar22, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_71 = unk_0x9B63716C99E9B205(iVar22, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_68 = unk_0x9B63716C99E9B205(iVar23, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_74 = unk_0x9B63716C99E9B205(iVar24, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_72 = unk_0x9B63716C99E9B205(iVar25, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_69 = unk_0x9B63716C99E9B205(iVar26, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_75 = unk_0x9B63716C99E9B205(iVar27, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_73 = unk_0x9B63716C99E9B205(iVar28, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_70 = unk_0x9B63716C99E9B205(iVar29, iVar0);
					Global_1617379.f_43065[iVar0 /*127*/].f_76 = unk_0x9B63716C99E9B205(iVar30, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_71 = -1;
					Global_1617379.f_43065[iVar0 /*127*/].f_68 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_74 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_72 = -1;
					Global_1617379.f_43065[iVar0 /*127*/].f_69 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_75 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_73 = -1;
					Global_1617379.f_43065[iVar0 /*127*/].f_70 = 0;
					Global_1617379.f_43065[iVar0 /*127*/].f_76 = 0;
				}
				Global_1617379.f_43065[iVar0 /*127*/].f_27 = unk_0x9B63716C99E9B205(iVar32, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar33, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_28 = unk_0x9B63716C99E9B205(iVar33, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_28 = -1;
				}
				Global_1617379.f_43065[iVar0 /*127*/].f_30 = unk_0x9B63716C99E9B205(iVar37, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar38, iVar0) == 3 && unk_0x84CC82885F6E3E3E(iVar38, iVar0) > 0f)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_31 = unk_0x84CC82885F6E3E3E(iVar38, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_31 = 1001f;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar31, iVar0) == 3 && unk_0x84CC82885F6E3E3E(iVar31, iVar0) >= 0f)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_34 = unk_0x84CC82885F6E3E3E(iVar31, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_34 = 1.5f;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar39, iVar0) == 3 && unk_0x84CC82885F6E3E3E(iVar39, iVar0) > 0f)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_32 = unk_0x84CC82885F6E3E3E(iVar39, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_32 = 1001f;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar40, iVar0) == 3 && unk_0x84CC82885F6E3E3E(iVar40, iVar0) > 0f)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_33 = unk_0x84CC82885F6E3E3E(iVar40, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_33 = 1001f;
				}
				Global_1617379.f_43065[iVar0 /*127*/].f_41 = unk_0x9B63716C99E9B205(iVar41, iVar0);
				Global_1617379.f_43065[iVar0 /*127*/].f_42 = unk_0x9B63716C99E9B205(iVar42, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar43, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_43 = unk_0x9B63716C99E9B205(iVar43, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_43 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar44, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_44 = unk_0x9B63716C99E9B205(iVar44, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_44 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar34, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_26 = unk_0x9B63716C99E9B205(iVar34, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_26 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar35, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_24 = unk_0x9B63716C99E9B205(iVar35, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_24 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar36, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_25 = unk_0x9B63716C99E9B205(iVar36, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_25 = -1;
				}
				Global_1617379.f_43065[iVar0 /*127*/].f_105 = unk_0x9B63716C99E9B205(iVar45, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar47, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_58 = unk_0x9B63716C99E9B205(iVar47, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_58 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar46, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_59 = unk_0x9B63716C99E9B205(iVar46, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_59 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar49, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_60 = unk_0x9B63716C99E9B205(iVar49, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_60 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar48, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_61 = unk_0x9B63716C99E9B205(iVar48, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_61 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar52, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_67 = unk_0x9B63716C99E9B205(iVar52, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_67 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar53, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_39 = unk_0x9B63716C99E9B205(iVar53, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_39 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar54, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_40 = unk_0x9B63716C99E9B205(iVar54, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_40 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar55, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_77 = unk_0x9B63716C99E9B205(iVar55, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_77 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar63, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_95 = unk_0x9B63716C99E9B205(iVar63, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_95 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar64, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_96 = unk_0x9B63716C99E9B205(iVar64, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_96 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar56, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_78 = unk_0x9B63716C99E9B205(iVar56, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_78 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar57, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_79 = unk_0x9B63716C99E9B205(iVar57, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_79 = 1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar58, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_92 = unk_0x9B63716C99E9B205(iVar58, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_92 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar59, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_93 = unk_0x9B63716C99E9B205(iVar59, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_93 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar60, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_94 = unk_0x9B63716C99E9B205(iVar60, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_94 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar50, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_46 = unk_0x9B63716C99E9B205(iVar50, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_46 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar51, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_47 = unk_0x9B63716C99E9B205(iVar51, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_47 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar65, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_35 = unk_0x9B63716C99E9B205(iVar65, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_35 = 0;
				}
				if (Global_1617379.f_2 != 6 && unk_0xC128BEC1E47D7A3B(iVar61, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_103 = unk_0x9B63716C99E9B205(iVar61, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_103 = -1;
				}
				if (Global_1617379.f_2 != 6 && unk_0xC128BEC1E47D7A3B(iVar62, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_104 = unk_0x9B63716C99E9B205(iVar62, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_104 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar66, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_90 = unk_0x9B63716C99E9B205(iVar66, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_90 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar67, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_91 = unk_0x9B63716C99E9B205(iVar67, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_91 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0xC128BEC1E47D7A3B(uVar108[iVar1], iVar0) == 5)
					{
						Global_1617379.f_43065[iVar0 /*127*/].f_107[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar108[iVar1], iVar0) };
					}
					else
					{
						Global_1617379.f_43065[iVar0 /*127*/].f_107[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0xC128BEC1E47D7A3B(uVar111[iVar1], iVar0) == 3)
					{
						Global_1617379.f_43065[iVar0 /*127*/].f_114[iVar1] = unk_0x84CC82885F6E3E3E(uVar111[iVar1], iVar0);
					}
					else
					{
						Global_1617379.f_43065[iVar0 /*127*/].f_114[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar114, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_106 = unk_0x9B63716C99E9B205(iVar114, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_106 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar115, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_117 = unk_0x9B63716C99E9B205(iVar115, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_117 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar116, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_122 = unk_0x9B63716C99E9B205(iVar116, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_122 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar117, iVar0) == 2)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_118 = unk_0x9B63716C99E9B205(iVar117, iVar0);
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_118 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar118, iVar0) == 5)
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_119 = { unk_0xFC5E9F9EB9E91418(iVar118, iVar0) };
				}
				else
				{
					Global_1617379.f_43065[iVar0 /*127*/].f_119 = { 0f, 0f, 0f };
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1617379.f_25 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1617379.f_43065[iVar0 /*127*/].f_13[iVar3] = unk_0x9B63716C99E9B205(uVar68[iVar3], iVar0);
						Global_1617379.f_43065[iVar0 /*127*/].f_18[iVar3] = unk_0x9B63716C99E9B205(uVar73[iVar3], iVar0);
						if (Global_1617379.f_43065[iVar0 /*127*/].f_18[iVar3] == -1)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_18[iVar3] = 99999;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar78[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_97[iVar3] = unk_0x9B63716C99E9B205(uVar78[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_97[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar83[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_80[iVar3] = unk_0x9B63716C99E9B205(uVar83[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_80[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar88[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_85[iVar3] = unk_0x9B63716C99E9B205(uVar88[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_85[iVar3] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar93[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_48[iVar3] = unk_0x9B63716C99E9B205(uVar93[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_48[iVar3] = -1;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar98[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_53[iVar3] = unk_0x9B63716C99E9B205(uVar98[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_53[iVar3] = -1;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar103[iVar3], iVar0) == 2)
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_62[iVar3] = unk_0x9B63716C99E9B205(uVar103[iVar3], iVar0);
						}
						else
						{
							Global_1617379.f_43065[iVar0 /*127*/].f_62[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_167(int iParam0)
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
	
	iVar5 = unk_0x1B61845568F6F93A(iParam0, "weap");
	Global_1617379.f_41497 = unk_0x0C70A268552D2D17(iVar5, "no");
	if (Global_1617379 == 0)
	{
		if (Global_1617379.f_41497 > 40)
		{
			Global_1617379.f_41497 = 40;
		}
	}
	else if (Global_1617379.f_41497 > 40)
	{
		Global_1617379.f_41497 = 40;
	}
	Global_1617379.f_41499 = unk_0x0C70A268552D2D17(iVar5, "time");
	Global_1617379.f_41500 = unk_0x0C70A268552D2D17(iVar5, "pal");
	Global_1617379.f_48 = unk_0x0C70A268552D2D17(iVar5, "blip");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar5, "loc");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar5, "head");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar5, "type");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar5, "sub");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar5, "bits");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar5, "clip");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar5, "brest1");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar5, "brest2");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar5, "brest3");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar5, "brest4");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar5, "dmgmult");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar5, "rput");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasst");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasso");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasss");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasst2");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasso2");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasss2");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasst3");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasso3");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasss3");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasst4");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasso4");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vasss4");
	iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vclnr");
	iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vclnt");
	iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vclnrl");
	Global_1617379.f_43060 = unk_0x472E86F64AA98B04(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_41497 - 1))
	{
		if (iVar0 < 40)
		{
			Global_1617379.f_41501[iVar0 /*38*/] = { unk_0xFC5E9F9EB9E91418(iVar6, iVar0) };
			Global_1617379.f_41501[iVar0 /*38*/].f_3 = unk_0x84CC82885F6E3E3E(iVar7, iVar0);
			iVar1 = unk_0x9B63716C99E9B205(iVar8, iVar0);
			Global_1617379.f_41501[iVar0 /*38*/].f_13 = iVar1;
			if (!func_168(Global_1617379.f_41501[iVar0 /*38*/].f_13))
			{
				if (Global_1617379.f_41501[iVar0 /*38*/].f_13 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_13 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_13 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1617379.f_41501[iVar0 /*38*/].f_4 = unk_0x9B63716C99E9B205(iVar9, iVar0);
			Global_1617379.f_41501[iVar0 /*38*/].f_6 = unk_0x9B63716C99E9B205(iVar10, iVar0);
			Global_1617379.f_41501[iVar0 /*38*/].f_5 = unk_0x9B63716C99E9B205(iVar11, iVar0);
			Global_1617379.f_41501[iVar0 /*38*/].f_21 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			if (unk_0xC128BEC1E47D7A3B(iVar12, iVar0) == 1)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[0] = unk_0x31C444FBA3B6A27B(iVar12, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[0] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar13, iVar0) == 1)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[1] = unk_0x31C444FBA3B6A27B(iVar13, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar14, iVar0) == 1)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[2] = unk_0x31C444FBA3B6A27B(iVar14, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[2] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar15, iVar0) == 1)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[3] = unk_0x31C444FBA3B6A27B(iVar15, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_8[3] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar16, iVar0) == 3)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_7 = unk_0x84CC82885F6E3E3E(iVar16, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_7 = 1f;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar17, iVar0) == 2)
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_21 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			}
			else
			{
				Global_1617379.f_41501[iVar0 /*38*/].f_21 = -1;
			}
			if (func_114())
			{
				if (unk_0xC128BEC1E47D7A3B(iVar32, iVar0) == 2)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_26 = unk_0x9B63716C99E9B205(iVar32, iVar0);
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_26 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar31, iVar0) == 2)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_27 = unk_0x9B63716C99E9B205(iVar31, iVar0);
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_27 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar30, iVar0) == 2)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_28 = unk_0x9B63716C99E9B205(iVar30, iVar0);
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_28 = 0;
				}
				Global_1617379.f_41501[iVar0 /*38*/].f_23 = unk_0x9B63716C99E9B205(iVar18, iVar0);
				Global_1617379.f_41501[iVar0 /*38*/].f_24 = unk_0x9B63716C99E9B205(iVar19, iVar0);
				Global_1617379.f_41501[iVar0 /*38*/].f_25 = unk_0x9B63716C99E9B205(iVar20, iVar0);
				if (Global_1617379.f_41501[iVar0 /*38*/].f_25 == -1)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_25 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar22, iVar0) == 2)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_32 = unk_0x9B63716C99E9B205(iVar21, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_29 = unk_0x9B63716C99E9B205(iVar22, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_35 = unk_0x9B63716C99E9B205(iVar23, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_33 = unk_0x9B63716C99E9B205(iVar24, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_30 = unk_0x9B63716C99E9B205(iVar25, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_36 = unk_0x9B63716C99E9B205(iVar26, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_34 = unk_0x9B63716C99E9B205(iVar27, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_31 = unk_0x9B63716C99E9B205(iVar28, iVar0);
					Global_1617379.f_41501[iVar0 /*38*/].f_37 = unk_0x9B63716C99E9B205(iVar29, iVar0);
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_32 = -1;
					Global_1617379.f_41501[iVar0 /*38*/].f_29 = 0;
					Global_1617379.f_41501[iVar0 /*38*/].f_35 = 0;
					Global_1617379.f_41501[iVar0 /*38*/].f_33 = -1;
					Global_1617379.f_41501[iVar0 /*38*/].f_30 = 0;
					Global_1617379.f_41501[iVar0 /*38*/].f_36 = 0;
					Global_1617379.f_41501[iVar0 /*38*/].f_34 = -1;
					Global_1617379.f_41501[iVar0 /*38*/].f_31 = 0;
					Global_1617379.f_41501[iVar0 /*38*/].f_37 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0xC128BEC1E47D7A3B(iVar33, iVar2) == 2)
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_14[iVar2] = unk_0x9B63716C99E9B205(iVar33, iVar2);
				}
				else
				{
					Global_1617379.f_41501[iVar0 /*38*/].f_14[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_168(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	
	if (unk_0x1B61845568F6F93A(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x1B61845568F6F93A(iParam0, "ptemp");
	Global_1617379.f_88444 = unk_0x0C70A268552D2D17(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_88444 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar5[iVar0], iVar1) == 5)
			{
				Global_1617379.f_86313[iVar0 /*213*/][iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_86313[iVar0 /*213*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar16[iVar0], iVar1) == 5)
			{
				Global_1617379.f_86313[iVar0 /*213*/].f_91[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_86313[iVar0 /*213*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar27[iVar0], iVar1) == 2)
			{
				Global_1617379.f_86313[iVar0 /*213*/].f_182[iVar1] = unk_0x9B63716C99E9B205(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_86313[iVar0 /*213*/].f_182[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_170(int iParam0)
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
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	
	iVar5 = unk_0x1B61845568F6F93A(iParam0, "obj");
	Global_1617379.f_34300 = unk_0x0C70A268552D2D17(iVar5, "no");
	Global_1617379.f_34301 = unk_0x0C70A268552D2D17(iVar5, "pal");
	Global_1617379.f_34302 = unk_0x0C70A268552D2D17(iVar5, "rtm");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar5, "loc");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar5, "head");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar5, "model");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ped");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar5, "rsp");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar5, "rot");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar5, "cont");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar5, "valu");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ammoforwep");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar5, "cpup");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar5, "cpupr");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar5, "cpupt");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar5, "bits");
	if (func_114())
	{
		iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obrr");
		iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obrmr");
		iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar5, "osnt");
		iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar5, "osnei");
		iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objbr");
		iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar5, "o2sp");
		iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar5, "o2sh");
		iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar5, "mgbs");
		iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objct");
		iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar5, "team");
		iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar5, "spwn");
		iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objct2");
		iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar5, "team2");
		iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar5, "spwn2");
		iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objct3");
		iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar5, "team3");
		iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar5, "spwn3");
		iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objct4");
		iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar5, "team4");
		iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar5, "spwn4");
		iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar5, "hlt");
		iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obb");
		iVar41 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obbc");
		iVar42 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objclt");
		iVar43 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objcr");
		iVar44 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obcra");
		iVar45 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ospdl");
		iVar46 = unk_0x6D57F4CEAF9EFFBB(iVar5, "osgr");
		iVar47 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ossgr");
		iVar48 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objcnm");
		iVar49 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objap");
		iVar50 = unk_0x6D57F4CEAF9EFFBB(iVar5, "objapt");
		iVar51 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obint");
		iVar52 = unk_0x6D57F4CEAF9EFFBB(iVar5, "obrom");
		iVar53 = unk_0x6D57F4CEAF9EFFBB(iVar5, "inco");
		iVar54 = unk_0x6D57F4CEAF9EFFBB(iVar5, "inhsh");
		iVar55 = unk_0x6D57F4CEAF9EFFBB(iVar5, "vehpu");
		iVar56 = unk_0x6D57F4CEAF9EFFBB(iVar5, "airpu");
		iVar59 = unk_0x6D57F4CEAF9EFFBB(iVar5, "gotor");
		iVar60 = unk_0x6D57F4CEAF9EFFBB(iVar5, "nmpass");
		iVar61 = unk_0x6D57F4CEAF9EFFBB(iVar5, "nmfail");
		iVar57 = unk_0x6D57F4CEAF9EFFBB(iVar5, "omcp");
		iVar58 = unk_0x6D57F4CEAF9EFFBB(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1617379.f_25 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar62[iVar2] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar67[iVar2] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar72[iVar2] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar77[iVar2] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_34300 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1617379.f_34303[iVar0 /*89*/] = { unk_0xFC5E9F9EB9E91418(iVar6, iVar0) };
			Global_1617379.f_34303[iVar0 /*89*/].f_3 = unk_0x84CC82885F6E3E3E(iVar7, iVar0);
			iVar1 = unk_0x9B63716C99E9B205(iVar15, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_16 = iVar1;
			if (Global_1617379.f_34303[iVar0 /*89*/].f_16 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1617379.f_34303[iVar0 /*89*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0x9151153185C776B3(Global_1617379.f_34303[iVar0 /*89*/].f_16))
			{
				Global_1617379.f_34303[iVar0 /*89*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_1617379.f_34303[iVar0 /*89*/].f_16 == joaat("prop_cctv_cam_06a"))
			{
				Global_1617379.f_34303[iVar0 /*89*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1617379.f_34303[iVar0 /*89*/].f_16 == joaat("prop_cctv_cam_07a"))
			{
				Global_1617379.f_34303[iVar0 /*89*/].f_16 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1617379.f_34303[iVar0 /*89*/].f_27 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_4 = { unk_0xFC5E9F9EB9E91418(iVar18, iVar0) };
			Global_1617379.f_34303[iVar0 /*89*/].f_31 = unk_0x9B63716C99E9B205(iVar16, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_45 = unk_0x9B63716C99E9B205(iVar19, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_46 = unk_0x9B63716C99E9B205(iVar20, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_47 = unk_0x9B63716C99E9B205(iVar21, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_48 = unk_0x9B63716C99E9B205(iVar22, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_49 = unk_0x9B63716C99E9B205(iVar24, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_50 = unk_0x9B63716C99E9B205(iVar23, iVar0);
			Global_1617379.f_34303[iVar0 /*89*/].f_43 = unk_0x9B63716C99E9B205(iVar25, iVar0);
			if (unk_0xC128BEC1E47D7A3B(iVar56, iVar0) == 2)
			{
				if (unk_0x9B63716C99E9B205(iVar56, iVar0) == 1)
				{
					if (!unk_0xF426A5DE932B3BEE(Global_1617379.f_34303[iVar0 /*89*/].f_43, 4))
					{
						unk_0x26545538B51562AD(&(Global_1617379.f_34303[iVar0 /*89*/].f_43), 4);
					}
				}
			}
			if (func_114())
			{
				if (((unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 3 && unk_0xC128BEC1E47D7A3B(iVar9, iVar0) == 3) && unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 2) && unk_0xC128BEC1E47D7A3B(iVar11, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_7 = unk_0x84CC82885F6E3E3E(iVar8, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_8 = unk_0x84CC82885F6E3E3E(iVar9, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_9 = unk_0x9B63716C99E9B205(iVar10, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_10 = unk_0x9B63716C99E9B205(iVar11, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_7 = 50f;
					Global_1617379.f_34303[iVar0 /*89*/].f_8 = 0f;
					Global_1617379.f_34303[iVar0 /*89*/].f_9 = 0;
					Global_1617379.f_34303[iVar0 /*89*/].f_10 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar14, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_15 = unk_0x9B63716C99E9B205(iVar14, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_15 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar12, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar13, iVar0) == 3)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_11 = { unk_0xFC5E9F9EB9E91418(iVar12, iVar0) };
					Global_1617379.f_34303[iVar0 /*89*/].f_14 = unk_0x84CC82885F6E3E3E(iVar13, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_11 = { 0f, 0f, 0f };
					Global_1617379.f_34303[iVar0 /*89*/].f_14 = 0f;
				}
				Global_1617379.f_34303[iVar0 /*89*/].f_44 = unk_0x9B63716C99E9B205(iVar26, iVar0);
				Global_1617379.f_34303[iVar0 /*89*/].f_32 = unk_0x9B63716C99E9B205(iVar27, iVar0);
				Global_1617379.f_34303[iVar0 /*89*/].f_33 = unk_0x9B63716C99E9B205(iVar28, iVar0);
				Global_1617379.f_34303[iVar0 /*89*/].f_34 = unk_0x9B63716C99E9B205(iVar29, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar30, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_59 = unk_0x9B63716C99E9B205(iVar30, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_56 = unk_0x9B63716C99E9B205(iVar31, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_62 = unk_0x9B63716C99E9B205(iVar32, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_60 = unk_0x9B63716C99E9B205(iVar33, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_57 = unk_0x9B63716C99E9B205(iVar34, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_63 = unk_0x9B63716C99E9B205(iVar35, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_61 = unk_0x9B63716C99E9B205(iVar36, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_58 = unk_0x9B63716C99E9B205(iVar37, iVar0);
					Global_1617379.f_34303[iVar0 /*89*/].f_64 = unk_0x9B63716C99E9B205(iVar38, iVar0);
				}
				Global_1617379.f_34303[iVar0 /*89*/].f_28 = unk_0x9B63716C99E9B205(iVar39, iVar0);
				Global_1617379.f_34303[iVar0 /*89*/].f_29 = unk_0x9B63716C99E9B205(iVar40, iVar0);
				Global_1617379.f_34303[iVar0 /*89*/].f_37 = unk_0x9B63716C99E9B205(iVar55, iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar41, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_30 = unk_0x9B63716C99E9B205(iVar41, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_30 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar43, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_51 = unk_0x9B63716C99E9B205(iVar43, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_51 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar42, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_52 = unk_0x9B63716C99E9B205(iVar42, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_52 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar44, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_53 = unk_0x9B63716C99E9B205(iVar44, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_53 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar45, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_55 = unk_0x9B63716C99E9B205(iVar45, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_55 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar46, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_35 = unk_0x9B63716C99E9B205(iVar46, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_35 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar47, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_36 = unk_0x9B63716C99E9B205(iVar47, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_36 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar48, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_80 = unk_0x9B63716C99E9B205(iVar48, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_80 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar57, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_77 = unk_0x9B63716C99E9B205(iVar57, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_77 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar58, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_78 = unk_0x9B63716C99E9B205(iVar58, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_78 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar49, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_81 = unk_0x9B63716C99E9B205(iVar49, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_81 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar50, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_82 = unk_0x9B63716C99E9B205(iVar50, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_82 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar51, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_83 = unk_0x9B63716C99E9B205(iVar51, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_83 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar52, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_84 = unk_0x9B63716C99E9B205(iVar52, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_84 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar53, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar54, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_85 = { unk_0xFC5E9F9EB9E91418(iVar53, iVar0) };
					Global_1617379.f_34303[iVar0 /*89*/].f_88 = unk_0x9B63716C99E9B205(iVar54, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_85 = { 0f, 0f, 0f };
					Global_1617379.f_34303[iVar0 /*89*/].f_88 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar59, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_54 = unk_0x9B63716C99E9B205(iVar59, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_54 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar60, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_75 = unk_0x9B63716C99E9B205(iVar60, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_75 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar61, iVar0) == 2)
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_76 = unk_0x9B63716C99E9B205(iVar61, iVar0);
				}
				else
				{
					Global_1617379.f_34303[iVar0 /*89*/].f_76 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1617379.f_25 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1617379.f_34303[iVar0 /*89*/].f_17[iVar2] = unk_0x9B63716C99E9B205(uVar62[iVar2], iVar0);
						Global_1617379.f_34303[iVar0 /*89*/].f_22[iVar2] = unk_0x9B63716C99E9B205(uVar67[iVar2], iVar0);
						if (Global_1617379.f_34303[iVar0 /*89*/].f_22[iVar2] == -1)
						{
							Global_1617379.f_34303[iVar0 /*89*/].f_22[iVar2] = 99999;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar72[iVar2], iVar0) == 2)
						{
							Global_1617379.f_34303[iVar0 /*89*/].f_65[iVar2] = unk_0x9B63716C99E9B205(uVar72[iVar2], iVar0);
						}
						else
						{
							Global_1617379.f_34303[iVar0 /*89*/].f_65[iVar2] = 0;
						}
						if (unk_0xC128BEC1E47D7A3B(uVar77[iVar2], iVar0) == 2)
						{
							Global_1617379.f_34303[iVar0 /*89*/].f_70[iVar2] = unk_0x9B63716C99E9B205(uVar77[iVar2], iVar0);
						}
						else
						{
							Global_1617379.f_34303[iVar0 /*89*/].f_70[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_171(int iParam0)
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
	
	iVar6 = unk_0x1B61845568F6F93A(iParam0, "zone");
	Global_1617379.f_70673 = unk_0x0C70A268552D2D17(iVar6, "no");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vto");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar6, "vld");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar6, "zntp");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar6, "znbs");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar6, "znwd");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar6, "znwvd");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar6, "znatp");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar6, "znwid");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1617379.f_70673 > 10)
	{
		Global_1617379.f_70673 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_70673 - 1))
	{
		Global_1617379.f_70696[iVar0 /*26*/][0 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar7, iVar0) };
		Global_1617379.f_70696[iVar0 /*26*/][1 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar8, iVar0) };
		Global_1617379.f_70696[iVar0 /*26*/].f_9 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar10[iVar1], iVar0) == 2)
			{
				Global_1617379.f_70696[iVar0 /*26*/].f_10[iVar1] = unk_0x9B63716C99E9B205(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1617379.f_70696[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar15[iVar1], iVar0) == 2)
			{
				Global_1617379.f_70696[iVar0 /*26*/].f_15[iVar1] = unk_0x9B63716C99E9B205(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1617379.f_70696[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar20, iVar0) == 2)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_20 = unk_0x9B63716C99E9B205(iVar20, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar21, iVar0) == 3)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_22 = unk_0x84CC82885F6E3E3E(iVar21, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar22, iVar0) == 3)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_23 = unk_0x84CC82885F6E3E3E(iVar22, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar23, iVar0) == 2)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_8 = unk_0x9B63716C99E9B205(iVar23, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar24, iVar0) == 3)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_7 = unk_0x84CC82885F6E3E3E(iVar24, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar25, iVar0) == 2)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_21 = unk_0x9B63716C99E9B205(iVar25, iVar0);
		}
		else
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x1B61845568F6F93A(iParam0, "usj");
	Global_1617379.f_69939 = unk_0x0C70A268552D2D17(iVar1, "no");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "vto");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "vld");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar1, "vcm");
	if (Global_1617379.f_69939 > 10)
	{
		Global_1617379.f_69939 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_69939 - 1))
	{
		Global_1617379.f_69940[iVar0 /*9*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
		Global_1617379.f_69940[iVar0 /*9*/].f_3 = { unk_0xFC5E9F9EB9E91418(iVar3, iVar0) };
		Global_1617379.f_69940[iVar0 /*9*/].f_6 = { unk_0xFC5E9F9EB9E91418(iVar4, iVar0) };
		iVar0++;
	}
}

void func_173(int iParam0)
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
	
	if (unk_0x1B61845568F6F93A(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x1B61845568F6F93A(iParam0, "ddtrig");
	Global_1617379.f_74348 = unk_0x0C70A268552D2D17(iVar4, "no");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar4, "id");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar4, "fid");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar4, "rule");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar4, "team");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar4, "pos");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar4, "rad");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar4, "tdel");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar4, "tpnt");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar4, "crkls");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar4, "spveh");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar4, "skprs");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar4, "fcsped");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar4, "prty");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar4, "dbs");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar4, "dbs2");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar4, "drole");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar4, "dspk");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar4, "dspk2");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar4, "panim");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar4, "blok");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar4, "root");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar4, "mgveh");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar4, "vehtg");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar4, "prerq");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar4, "vehdm");
	iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar30[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1617379.f_74348 > 69)
	{
		Global_1617379.f_74348 = 69;
	}
	if (unk_0xC128BEC1E47D7A3B(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1617379.f_74348 - 1))
		{
			if (unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 2)
			{
				func_174(&(Global_1617379.f_71018[iVar0 /*44*/]), iVar0);
				if (iVar6 != 0 && unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_1 = unk_0x9B63716C99E9B205(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/] = unk_0x9B63716C99E9B205(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_2 = unk_0x9B63716C99E9B205(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_3 = unk_0x9B63716C99E9B205(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_6 = { unk_0xFC5E9F9EB9E91418(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_9 = unk_0x84CC82885F6E3E3E(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_5 = unk_0x9B63716C99E9B205(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_12 = unk_0x9B63716C99E9B205(iVar12, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_13 = unk_0x9B63716C99E9B205(iVar17, iVar0);
				}
				if (iVar18 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_10 = unk_0x9B63716C99E9B205(iVar18, iVar0);
				}
				if (iVar19 != 0)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_11 = unk_0x9B63716C99E9B205(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0xC128BEC1E47D7A3B(iVar20, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_4 = unk_0x9B63716C99E9B205(iVar20, iVar0);
				}
				else
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_4 = 0;
				}
				if (iVar26 != 0 && unk_0xC128BEC1E47D7A3B(iVar26, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_17 = unk_0x9B63716C99E9B205(iVar26, iVar0);
				}
				if (iVar13 != 0 && unk_0xC128BEC1E47D7A3B(iVar13, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_21 = unk_0x9B63716C99E9B205(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0xC128BEC1E47D7A3B(iVar14, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_28 = unk_0x9B63716C99E9B205(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0xC128BEC1E47D7A3B(iVar15, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_29 = unk_0x9B63716C99E9B205(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0xC128BEC1E47D7A3B(iVar16, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_22 = unk_0x9B63716C99E9B205(iVar16, iVar0);
				}
				if (iVar21 != 0 && unk_0xC128BEC1E47D7A3B(iVar21, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_14 = unk_0x9B63716C99E9B205(iVar21, iVar0);
				}
				if (iVar22 != 0 && unk_0xC128BEC1E47D7A3B(iVar22, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_15 = unk_0x9B63716C99E9B205(iVar22, iVar0);
				}
				if (iVar23 != 0 && unk_0xC128BEC1E47D7A3B(iVar23, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_16 = unk_0x9B63716C99E9B205(iVar23, iVar0);
				}
				if (iVar27 != 0 && unk_0xC128BEC1E47D7A3B(iVar27, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_18 = unk_0x9B63716C99E9B205(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0xC128BEC1E47D7A3B(iVar28, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_19 = unk_0x9B63716C99E9B205(iVar28, iVar0);
				}
				if (iVar29 != 0 && unk_0xC128BEC1E47D7A3B(iVar29, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_20 = unk_0x9B63716C99E9B205(iVar29, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar30[iVar1] != 0 && unk_0xC128BEC1E47D7A3B(uVar30[iVar1], iVar0) == 2)
					{
						Global_1617379.f_71018[iVar0 /*44*/].f_23[iVar1] = unk_0x9B63716C99E9B205(uVar30[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar35 != 0 && unk_0xC128BEC1E47D7A3B(iVar35, iVar0) == 2)
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_42 = unk_0x9B63716C99E9B205(iVar35, iVar0);
				}
				else
				{
					Global_1617379.f_71018[iVar0 /*44*/].f_42 = 0;
				}
				if (iVar24 != 0)
				{
					StringCopy(&(Global_1617379.f_71018[iVar0 /*44*/].f_30), unk_0xFC143A57593B7EBA(iVar24, iVar0), 24);
				}
				if (iVar25 != 0)
				{
					StringCopy(&(Global_1617379.f_71018[iVar0 /*44*/].f_36), unk_0xFC143A57593B7EBA(iVar25, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1617379.f_74348 - 1))
		{
			Global_1617379.f_71018[iVar0 /*44*/] = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_2 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_3 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_6 = { 0f, 0f, 0f };
			Global_1617379.f_71018[iVar0 /*44*/].f_9 = 3f;
			Global_1617379.f_71018[iVar0 /*44*/].f_5 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_12 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_21 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_28 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_29 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_13 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_10 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_11 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_4 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_14 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_15 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_16 = 0;
			StringCopy(&(Global_1617379.f_71018[iVar0 /*44*/].f_30), "", 24);
			StringCopy(&(Global_1617379.f_71018[iVar0 /*44*/].f_36), "", 24);
			Global_1617379.f_71018[iVar0 /*44*/].f_17 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_18 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_19 = -1;
			Global_1617379.f_71018[iVar0 /*44*/].f_20 = 0;
			Global_1617379.f_71018[iVar0 /*44*/].f_42 = 0;
			iVar0++;
		}
	}
	if (unk_0x12B8990BAE31537D(iParam0, "dtmp") == 2)
	{
		Global_1617379.f_74344[0] = unk_0x0C70A268552D2D17(iParam0, "dtmp");
	}
	else
	{
		Global_1617379.f_74344[0] = 0;
	}
	if (unk_0x12B8990BAE31537D(iParam0, "dtmp2") == 2)
	{
		Global_1617379.f_74344[1] = unk_0x0C70A268552D2D17(iParam0, "dtmp2");
	}
	else
	{
		Global_1617379.f_74344[1] = 0;
	}
	if (unk_0x12B8990BAE31537D(iParam0, "dtmp3") == 2)
	{
		Global_1617379.f_74344[2] = unk_0x0C70A268552D2D17(iParam0, "dtmp3");
	}
	else
	{
		Global_1617379.f_74344[2] = 0;
	}
}

void func_174(var uParam0, int iParam1)
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
		unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_74344[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_43))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_43));
	}
}

void func_175(int iParam0)
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
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16[3];
	int iVar20;
	char[] cVar21[8];
	
	iVar2 = unk_0x1B61845568F6F93A(iParam0, "race");
	Global_1617379.f_33653 = unk_0x0C70A268552D2D17(iVar2, "chp");
	iVar3 = (Global_1617379.f_33653 - 1);
	Global_1617379.f_33654 = unk_0x0C70A268552D2D17(iVar2, "lap");
	Global_1617379.f_33655 = unk_0x0C70A268552D2D17(iVar2, "type");
	if (func_97() == 2)
	{
		if (Global_1617379.f_33655 == 6)
		{
			Global_1617379.f_33655 = 0;
		}
		else if (Global_1617379.f_33655 == 7)
		{
			Global_1617379.f_33655 = 1;
		}
	}
	Global_1617379.f_33656 = unk_0x0C70A268552D2D17(iVar2, "gtar");
	Global_1617379.f_34241 = unk_0xA361D922F3339879(iVar2, "head");
	Global_1617379.f_34242 = unk_0xA361D922F3339879(iVar2, "lrgs");
	Global_1617379.f_34243 = unk_0xA361D922F3339879(iVar2, "udgs");
	Global_1617379.f_34244 = unk_0xA361D922F3339879(iVar2, "gw");
	Global_1617379.f_34245 = unk_0xA361D922F3339879(iVar2, "gl");
	Global_1617379.f_34246 = unk_0x0C70A268552D2D17(iVar2, "lanes");
	Global_1617379.f_29651 = { unk_0x10AC91A12AB855AE(iVar2, "grid") };
	Global_1617379.f_33658 = unk_0x0C70A268552D2D17(iVar2, "icv");
	Global_1617379.f_33660 = unk_0x0C70A268552D2D17(iVar2, "tri1");
	Global_1617379.f_33661 = unk_0x0C70A268552D2D17(iVar2, "tri2");
	Global_1617379.f_33662 = unk_0x0C70A268552D2D17(iVar2, "clbs");
	Global_1617379.f_34240 = unk_0x0C70A268552D2D17(iVar2, "ptp");
	Global_1617379.f_34238 = unk_0x0C70A268552D2D17(iVar2, "strtg");
	Global_1617379.f_34239 = unk_0x0C70A268552D2D17(iVar2, "rcdam");
	Global_1617379.f_31274 = unk_0xA361D922F3339879(iVar2, "rdis");
	Global_1617379.f_34236 = unk_0x0C70A268552D2D17(iVar2, "gridty");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar2, "chh");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar2, "chs");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar2, "chl");
	uVar7 = unk_0x6D57F4CEAF9EFFBB(iVar2, "rsp");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar2, "sndchk");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar2, "sndrsp");
	uVar10 = unk_0x6D57F4CEAF9EFFBB(iVar2, "rndchk");
	uVar11 = unk_0x6D57F4CEAF9EFFBB(iVar2, "rndchks");
	if (Global_1617379.f_33655 == 8)
	{
		Global_1617379.f_33653 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_110(unk_0xFC5E9F9EB9E91418(iVar6, iVar0)))
			{
				Global_1617379.f_33653++;
			}
			iVar0++;
		}
		iVar3 = Global_1617379.f_33653;
	}
	iVar12 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1617379.f_33655 == 8)
			{
				iVar12 = func_176(iVar6, iVar12);
			}
			else
			{
				iVar12 = iVar0;
			}
			Global_1617379.f_30355[iVar0 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar6, iVar12) };
			Global_1617379.f_30990[iVar0] = unk_0x84CC82885F6E3E3E(iVar4, iVar12);
			if (unk_0xC128BEC1E47D7A3B(iVar5, iVar12) == 3)
			{
				Global_1617379.f_31203[iVar0] = unk_0x84CC82885F6E3E3E(iVar5, iVar12);
			}
			else
			{
				Global_1617379.f_31203[iVar0] = 1f;
			}
			if (Global_1617379.f_31203[iVar0] < 1f)
			{
				Global_1617379.f_31203[iVar0] = 1f;
			}
			Global_1617379.f_30777[iVar0] = unk_0x31C444FBA3B6A27B(uVar7, iVar12);
			Global_1617379.f_30848[iVar0] = unk_0x31C444FBA3B6A27B(uVar10, iVar12);
			Global_1617379.f_30566[iVar0 /*3*/] = { unk_0xFC5E9F9EB9E91418(iVar8, iVar12) };
			Global_1617379.f_31061[iVar0] = unk_0x84CC82885F6E3E3E(iVar9, iVar12);
			Global_1617379.f_30919[iVar0] = unk_0x31C444FBA3B6A27B(uVar11, iVar12);
			iVar12++;
		}
		iVar0++;
	}
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_20 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x9B63716C99E9B205(iVar13, iVar0);
			Global_1617379.f_34249[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar2, "aveh");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x9B63716C99E9B205(iVar14, iVar0);
		Global_1617379.f_33663[iVar0] = iVar1;
		Global_1617379.f_33679[iVar0] = 0;
		Global_1617379.f_33679[iVar0] = unk_0x9B63716C99E9B205(iVar15, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar21, "vspn", 8);
		StringIntConCat(&cVar21, iVar0, 8);
		uVar16[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar2, &cVar21);
		iVar20 = 0;
		while (iVar20 <= iVar3)
		{
			Global_1617379.f_29654[iVar20 /*10*/][iVar0 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar16[iVar0], iVar20) };
			iVar20++;
		}
		iVar0++;
	}
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_110(unk_0xFC5E9F9EB9E91418(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x1B61845568F6F93A(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x1B61845568F6F93A(iParam0, "dhprop");
	Global_1617379.f_84039 = unk_0x0C70A268552D2D17(iVar1, "no");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "pos");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "mn");
	if (Global_1617379.f_84039 > 25)
	{
		Global_1617379.f_84039 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_84039 - 1))
	{
		if (unk_0xC128BEC1E47D7A3B(iVar2, iVar0) == 5)
		{
			Global_1617379.f_83938[iVar0 /*4*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
			Global_1617379.f_83938[iVar0 /*4*/].f_3 = unk_0x9B63716C99E9B205(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_178(int iParam0)
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
	
	if (unk_0x1B61845568F6F93A(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x1B61845568F6F93A(iParam0, "ddblip");
	Global_1617379.f_83937 = unk_0x0C70A268552D2D17(iVar1, "no");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "pos");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "rule");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar1, "team");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar1, "type");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar1, "size");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar1, "veh");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar1, "clr");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar1, "bits");
	if (Global_1617379.f_83937 > 10)
	{
		Global_1617379.f_83937 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_83937 - 1))
	{
		if (unk_0xC128BEC1E47D7A3B(iVar2, iVar0) == 5)
		{
			Global_1617379.f_83836[iVar0 /*10*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
			Global_1617379.f_83836[iVar0 /*10*/].f_3 = unk_0x9B63716C99E9B205(iVar3, iVar0);
			Global_1617379.f_83836[iVar0 /*10*/].f_4 = unk_0x9B63716C99E9B205(iVar4, iVar0);
			Global_1617379.f_83836[iVar0 /*10*/].f_8 = unk_0x9B63716C99E9B205(iVar8, iVar0);
			Global_1617379.f_83836[iVar0 /*10*/].f_9 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		}
		if (unk_0xC128BEC1E47D7A3B(iVar5, iVar0) == 2)
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_6 = unk_0x9B63716C99E9B205(iVar5, iVar0);
		}
		else
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 2)
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_5 = unk_0x9B63716C99E9B205(iVar6, iVar0);
		}
		else
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar7, iVar0) == 2)
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_7 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		}
		else
		{
			Global_1617379.f_83836[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_179(int iParam0)
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
	
	if (unk_0x1B61845568F6F93A(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x1B61845568F6F93A(iParam0, "mocap");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar5, "name");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar5, "bits");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar5, "bits2");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar5, "timer");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar5, "rng");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ccp");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ccr");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar5, "ccs");
	iVar62 = unk_0x6D57F4CEAF9EFFBB(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1617379.f_80856[iVar0 /*434*/]), unk_0xFC143A57593B7EBA(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_80856[iVar0 /*434*/]), "", 64);
		}
		if (unk_0xC128BEC1E47D7A3B(iVar7, iVar0) == 2)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_16 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 2)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_17 = unk_0x9B63716C99E9B205(iVar8, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar62, iVar0) == 2)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_424 = unk_0x9B63716C99E9B205(iVar62, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar9, iVar0) == 2)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_61 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 2)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_62 = unk_0x9B63716C99E9B205(iVar10, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar11, iVar0) == 5)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_54 = { unk_0xFC5E9F9EB9E91418(iVar11, iVar0) };
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0xC128BEC1E47D7A3B(iVar12, iVar0) == 3)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_60 = unk_0x84CC82885F6E3E3E(iVar12, iVar0);
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar13, iVar0) == 5)
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_57 = { unk_0xFC5E9F9EB9E91418(iVar13, iVar0) };
		}
		else
		{
			Global_1617379.f_80856[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar14[iVar0], iVar1) == 5)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar20[iVar0], iVar1) == 5)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar26[iVar0], iVar1) == 3)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_44[iVar1] = unk_0x84CC82885F6E3E3E(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar32[iVar0], iVar1) == 3)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_49[iVar1] = unk_0x84CC82885F6E3E3E(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar63[iVar0], iVar2) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_425[iVar2] = unk_0x9B63716C99E9B205(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar69[iVar0], iVar2) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_430[iVar2] = unk_0x9B63716C99E9B205(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar75[iVar0], iVar2) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_432[iVar2] = unk_0x9B63716C99E9B205(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar38[iVar0], iVar1) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x9B63716C99E9B205(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar44[iVar0], iVar1) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x9B63716C99E9B205(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar50[iVar0], iVar1) == 2)
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x9B63716C99E9B205(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xFC143A57593B7EBA(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1617379.f_80856[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_180(int iParam0)
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
	
	if (unk_0x1B61845568F6F93A(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x1B61845568F6F93A(iParam0, "cuts");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar4, "name");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar4, "bits");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar4, "shot");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar4, "anim");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar4, "midp");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar4, "rng");
	iVar161 = unk_0x6D57F4CEAF9EFFBB(iVar4, "train");
	iVar162 = unk_0x6D57F4CEAF9EFFBB(iVar4, "trahl");
	iVar163 = unk_0x6D57F4CEAF9EFFBB(iVar4, "traou");
	iVar164 = unk_0x6D57F4CEAF9EFFBB(iVar4, "trapo");
	iVar165 = unk_0x6D57F4CEAF9EFFBB(iVar4, "ccp");
	iVar166 = unk_0x6D57F4CEAF9EFFBB(iVar4, "ccr");
	iVar167 = unk_0x6D57F4CEAF9EFFBB(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0xC128BEC1E47D7A3B(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/]), unk_0xFC143A57593B7EBA(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_4 = unk_0x9B63716C99E9B205(iVar6, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_5 = unk_0x9B63716C99E9B205(iVar6, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar7, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_43 = unk_0x9B63716C99E9B205(iVar7, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_42 = unk_0x9B63716C99E9B205(iVar8, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar9, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_44 = unk_0x9B63716C99E9B205(iVar9, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar10, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_735 = unk_0x9B63716C99E9B205(iVar10, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar165, iVar0) == 5)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_728 = { unk_0xFC5E9F9EB9E91418(iVar165, iVar0) };
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0xC128BEC1E47D7A3B(iVar166, iVar0) == 3)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_731 = unk_0x84CC82885F6E3E3E(iVar166, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar167, iVar0) == 5)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_732 = { unk_0xFC5E9F9EB9E91418(iVar167, iVar0) };
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0xC128BEC1E47D7A3B(iVar161, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_436 = unk_0x9B63716C99E9B205(iVar161, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar162, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_438 = unk_0x9B63716C99E9B205(iVar162, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar163, iVar0) == 2)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_437 = unk_0x9B63716C99E9B205(iVar163, iVar0);
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar164, iVar0) == 5)
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_439 = { unk_0xFC5E9F9EB9E91418(iVar164, iVar0) };
		}
		else
		{
			Global_1617379.f_74510[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar95[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar101[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar89[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_32[iVar1] = unk_0x84CC82885F6E3E3E(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar107[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_37[iVar1] = unk_0x84CC82885F6E3E3E(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar11[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_45[iVar1] = unk_0x9B63716C99E9B205(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar17[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_66[iVar1] = unk_0x9B63716C99E9B205(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar23[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar29[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar35[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar41[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar47[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_331[iVar1] = unk_0x84CC82885F6E3E3E(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar53[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_352[iVar1] = unk_0x84CC82885F6E3E3E(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar71[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_373[iVar1] = unk_0x9B63716C99E9B205(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar77[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_394[iVar1] = unk_0x9B63716C99E9B205(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar83[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_415[iVar1] = unk_0x84CC82885F6E3E3E(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar113[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_524[iVar1] = unk_0x9B63716C99E9B205(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar119[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar125[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar131[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar131[iVar0], iVar1) };
				Global_1617379.f_84083[iVar1] = Global_1617379.f_74510[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1617379.f_84104[iVar1] = Global_1617379.f_74510[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1617379.f_84125[iVar1] = Global_1617379.f_74510[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar137[iVar0], iVar1) == 5)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0xC128BEC1E47D7A3B(uVar143[iVar0], iVar1) == 3)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_503[iVar1] = unk_0x84CC82885F6E3E3E(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0xFC143A57593B7EBA(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0xC128BEC1E47D7A3B(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0xFC143A57593B7EBA(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1617379.f_74510[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0xC128BEC1E47D7A3B(uVar59[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0x9B63716C99E9B205(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(uVar65[iVar0], iVar1) == 2)
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0x9B63716C99E9B205(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1617379.f_74510[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_181(int iParam0)
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
	
	if (unk_0x1B61845568F6F93A(iParam0, "eoir") == 0 || unk_0x1B61845568F6F93A(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iParam0, "eoid");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iParam0, "eoet");
	iVar10 = unk_0x1B61845568F6F93A(iParam0, "eoir");
	iVar11 = unk_0x1B61845568F6F93A(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0xC128BEC1E47D7A3B(iVar8, iVar0) == 2)
		{
			Global_1617379.f_66813[iVar0] = unk_0x9B63716C99E9B205(iVar8, iVar0);
		}
		else
		{
			Global_1617379.f_66813[iVar0] = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar9, iVar0) == 2)
		{
			Global_1617379.f_66782[iVar0] = unk_0x9B63716C99E9B205(iVar9, iVar0);
		}
		else
		{
			Global_1617379.f_66782[iVar0] = -1;
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
				if (unk_0x12B8990BAE31537D(iVar10, &cVar4) == 2)
				{
					Global_1617379.f_66844[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x0C70A268552D2D17(iVar10, &cVar4);
				}
				else
				{
					Global_1617379.f_66844[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x12B8990BAE31537D(iVar11, &cVar4) == 2)
				{
					Global_1617379.f_68375[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x0C70A268552D2D17(iVar11, &cVar4);
				}
				else
				{
					Global_1617379.f_66844[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1617379.f_66813[iVar0];
		iVar13 = Global_1617379.f_66782[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1617379.f_66813[iVar3] == iVar12) && Global_1617379.f_66782[iVar3] == iVar13)
				{
					Global_1617379.f_66782[iVar3] = -1;
					Global_1617379.f_66813[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 9)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1617379.f_66844[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							Global_1617379.f_68375[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
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

void func_182(int iParam0)
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
	
	iVar4 = unk_0x1B61845568F6F93A(iParam0, "kill");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar4, "no");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar4, "mcp");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1617379.f_25 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1617379.f_33642[iVar1] = unk_0x9B63716C99E9B205(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1617379.f_33642[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1617379.f_33148[iVar0 /*29*/][iVar1] = unk_0x9B63716C99E9B205(uVar8[iVar1], iVar0);
					Global_1617379.f_33148[iVar0 /*29*/].f_5[iVar1] = unk_0x9B63716C99E9B205(uVar13[iVar1], iVar0);
					if (Global_1617379.f_33148[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1617379.f_33148[iVar0 /*29*/].f_10[iVar1] = unk_0x9B63716C99E9B205(uVar18[iVar1], iVar0);
					if (unk_0xC128BEC1E47D7A3B(uVar23[iVar1], iVar0) == 2)
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_15[iVar1] = unk_0x9B63716C99E9B205(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar28[iVar1], iVar0) == 2)
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_20[iVar1] = unk_0x9B63716C99E9B205(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0xC128BEC1E47D7A3B(iVar6, iVar0) == 2)
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_28 = unk_0x9B63716C99E9B205(iVar6, iVar0);
					}
					else
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0xC128BEC1E47D7A3B(iVar7, iVar0) == 2)
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_27 = unk_0x9B63716C99E9B205(iVar7, iVar0);
					}
					else
					{
						Global_1617379.f_33148[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_183(int iParam0)
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
	
	iVar4 = unk_0x1B61845568F6F93A(iParam0, "goto");
	Global_1617379.f_33648[0] = unk_0x0C70A268552D2D17(iVar4, "no");
	Global_1617379.f_6 = unk_0x0C70A268552D2D17(iVar4, "atrig");
	iVar80 = unk_0x6D57F4CEAF9EFFBB(iVar4, "lmcp");
	iVar81 = unk_0x6D57F4CEAF9EFFBB(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1617379.f_25 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1617379.f_33648[0] - 1))
			{
				Global_1617379.f_31275[iVar0 /*104*/].f_1[0 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar5[iVar1], iVar0) };
				Global_1617379.f_31275[iVar0 /*104*/].f_14[0] = unk_0x84CC82885F6E3E3E(uVar10[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_62[iVar1] = unk_0x9B63716C99E9B205(uVar15[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_67[iVar1] = unk_0x9B63716C99E9B205(uVar20[iVar1], iVar0);
				if (Global_1617379.f_31275[iVar0 /*104*/].f_67[iVar1] == -1)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_67[iVar1] = 99999;
				}
				Global_1617379.f_31275[iVar0 /*104*/].f_72[iVar1] = unk_0x9B63716C99E9B205(uVar25[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_48[iVar1] = unk_0x84CC82885F6E3E3E(uVar60[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_77[iVar1] = unk_0x9B63716C99E9B205(uVar30[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_36[iVar1] = unk_0x9B63716C99E9B205(uVar35[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_53 = unk_0x9B63716C99E9B205(uVar50[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_31[0] = unk_0x9B63716C99E9B205(uVar40[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_41[0] = unk_0x9B63716C99E9B205(uVar45[iVar1], iVar0);
				Global_1617379.f_31275[iVar0 /*104*/].f_98 = unk_0x84CC82885F6E3E3E(uVar55[iVar1], iVar0);
				if (unk_0xC128BEC1E47D7A3B(iVar80, iVar0) == 2)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_94 = unk_0x9B63716C99E9B205(iVar80, iVar0);
				}
				else
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_94 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(iVar81, iVar0) == 2)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_95 = unk_0x9B63716C99E9B205(iVar81, iVar0);
				}
				else
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_95 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar65[iVar1], iVar0) == 2)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_57[iVar1] = unk_0x9B63716C99E9B205(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_57[iVar1] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar70[iVar1], iVar0) == 2)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_82[iVar1] = unk_0x9B63716C99E9B205(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_82[iVar1] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar75[iVar1], iVar0) == 2)
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_87[iVar1] = unk_0x9B63716C99E9B205(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1617379.f_31275[iVar0 /*104*/].f_87[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locbc");
	iVar83 = unk_0x6D57F4CEAF9EFFBB(iVar4, "loc2rd");
	iVar84 = unk_0x6D57F4CEAF9EFFBB(iVar4, "loclbr");
	iVar85 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locdir");
	iVar86 = unk_0x6D57F4CEAF9EFFBB(iVar4, "loctol");
	iVar87 = unk_0x6D57F4CEAF9EFFBB(iVar4, "lochgt");
	iVar88 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locart");
	iVar89 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locaa1");
	iVar90 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locaa2");
	iVar91 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locaaw");
	iVar92 = unk_0x6D57F4CEAF9EFFBB(iVar4, "nmpass");
	iVar93 = unk_0x6D57F4CEAF9EFFBB(iVar4, "nmfail");
	iVar94 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locstd");
	iVar95 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locstm");
	iVar96 = unk_0x6D57F4CEAF9EFFBB(iVar4, "lcbs2");
	iVar97 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locti");
	iVar98 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locgc");
	iVar99 = unk_0x6D57F4CEAF9EFFBB(iVar4, "loclto");
	iVar100 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locloo");
	iVar101 = unk_0x6D57F4CEAF9EFFBB(iVar4, "loccors");
	iVar102 = unk_0x6D57F4CEAF9EFFBB(iVar4, "lochght");
	iVar103 = unk_0x6D57F4CEAF9EFFBB(iVar4, "locdpth");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_33648[0] - 1))
	{
		if (unk_0xC128BEC1E47D7A3B(iVar82, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_46 = unk_0x9B63716C99E9B205(iVar82, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_46 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar83, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_20 = unk_0x84CC82885F6E3E3E(iVar83, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_20 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar84, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_19 = unk_0x84CC82885F6E3E3E(iVar84, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_19 = 1f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar85, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_28 = unk_0x84CC82885F6E3E3E(iVar85, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_28 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar86, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_29 = unk_0x84CC82885F6E3E3E(iVar86, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_29 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar87, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_30 = unk_0x84CC82885F6E3E3E(iVar87, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_30 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar97, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_55 = unk_0x84CC82885F6E3E3E(iVar97, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_55 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar98, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_56 = unk_0x84CC82885F6E3E3E(iVar98, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_56 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar88, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/] = unk_0x9B63716C99E9B205(iVar88, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/] = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar92, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_92 = unk_0x9B63716C99E9B205(iVar92, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_92 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar93, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_93 = unk_0x9B63716C99E9B205(iVar93, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_93 = -1;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar94, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_97 = unk_0x84CC82885F6E3E3E(iVar94, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_97 = 10.5f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar102, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_99 = unk_0x84CC82885F6E3E3E(iVar102, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_99 = 1f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar103, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_100 = unk_0x84CC82885F6E3E3E(iVar103, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_100 = 0f;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar95, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_96 = unk_0x9B63716C99E9B205(iVar95, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_96 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar96, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_54 = unk_0x9B63716C99E9B205(iVar96, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_54 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar100, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_101 = unk_0x9B63716C99E9B205(iVar100, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_101 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar101, iVar0) == 2)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_47 = unk_0x9B63716C99E9B205(iVar101, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_47 = 0;
		}
		if (unk_0xC128BEC1E47D7A3B(iVar99, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_102 = unk_0x84CC82885F6E3E3E(iVar99, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_102 = 0f;
		}
		if ((unk_0xC128BEC1E47D7A3B(iVar89, iVar0) == 5 && unk_0xC128BEC1E47D7A3B(iVar90, iVar0) == 5) && unk_0xC128BEC1E47D7A3B(iVar91, iVar0) == 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_21 = { unk_0xFC5E9F9EB9E91418(iVar89, iVar0) };
			Global_1617379.f_31275[iVar0 /*104*/].f_24 = { unk_0xFC5E9F9EB9E91418(iVar90, iVar0) };
			Global_1617379.f_31275[iVar0 /*104*/].f_27 = unk_0x84CC82885F6E3E3E(iVar91, iVar0);
		}
		else
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_21 = { 0f, 0f, 0f };
			Global_1617379.f_31275[iVar0 /*104*/].f_24 = { 0f, 0f, 0f };
			Global_1617379.f_31275[iVar0 /*104*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x12B8990BAE31537D(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x1B61845568F6F93A(iParam0, "cover");
		Global_1617379.f_36460 = unk_0x0C70A268552D2D17(iVar1, "no");
		iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar1, "loc");
		iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar1, "dir");
		iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar1, "use");
		iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar1, "high");
		iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1617379.f_36460 - 1))
		{
			Global_1617379.f_36461[iVar0 /*7*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar0) };
			Global_1617379.f_36461[iVar0 /*7*/].f_3 = unk_0x84CC82885F6E3E3E(iVar3, iVar0);
			Global_1617379.f_36461[iVar0 /*7*/].f_4 = unk_0x9B63716C99E9B205(iVar4, iVar0);
			Global_1617379.f_36461[iVar0 /*7*/].f_5 = unk_0x9B63716C99E9B205(iVar5, iVar0);
			Global_1617379.f_36461[iVar0 /*7*/].f_6 = unk_0x9B63716C99E9B205(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_185(int iParam0)
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
	
	iVar2 = unk_0x1B61845568F6F93A(iParam0, "door");
	Global_1617379.f_36173 = unk_0x0C70A268552D2D17(iVar2, "no");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar2, "loc");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar2, "fopen");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar2, "model");
	uVar6 = unk_0x6D57F4CEAF9EFFBB(iVar2, "lock");
	uVar7 = unk_0x6D57F4CEAF9EFFBB(iVar2, "swing");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar2, "udrle");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar2, "udtem");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar2, "udrat");
	uVar11 = unk_0x6D57F4CEAF9EFFBB(iVar2, "swingu");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar2, "audst");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar2, "aurt");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar2, "uaudst");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar2, "uaurt");
	uVar16 = unk_0x6D57F4CEAF9EFFBB(iVar2, "lfp");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar2, "dtime");
	uVar18 = unk_0x6D57F4CEAF9EFFBB(iVar2, "mid");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1617379.f_36173 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1617379.f_36174[iVar0 /*19*/] = { unk_0xFC5E9F9EB9E91418(iVar3, iVar0) };
			Global_1617379.f_36174[iVar0 /*19*/].f_3 = unk_0x84CC82885F6E3E3E(iVar4, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_14 = unk_0x31C444FBA3B6A27B(uVar6, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_15 = unk_0x31C444FBA3B6A27B(uVar7, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_5 = unk_0x9B63716C99E9B205(iVar8, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_6 = unk_0x9B63716C99E9B205(iVar9, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_13 = unk_0x84CC82885F6E3E3E(iVar10, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_16 = unk_0x31C444FBA3B6A27B(uVar11, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_8 = unk_0x84CC82885F6E3E3E(iVar13, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_9 = unk_0x84CC82885F6E3E3E(iVar12, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_10 = unk_0x84CC82885F6E3E3E(iVar15, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_11 = unk_0x84CC82885F6E3E3E(iVar14, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_12 = unk_0x31C444FBA3B6A27B(uVar16, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_18 = unk_0x9B63716C99E9B205(iVar19, iVar0);
			iVar1 = unk_0x9B63716C99E9B205(iVar5, iVar0);
			Global_1617379.f_36174[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0xC128BEC1E47D7A3B(iVar17, iVar0) == 2)
			{
				Global_1617379.f_36174[iVar0 /*19*/].f_7 = unk_0x9B63716C99E9B205(iVar17, iVar0);
			}
			else
			{
				Global_1617379.f_36174[iVar0 /*19*/].f_7 = 0;
			}
			Global_1617379.f_36174[iVar0 /*19*/].f_17 = unk_0x31C444FBA3B6A27B(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_186(int iParam0)
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
	struct<5> Var335;
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
	var uVar771[4];
	var uVar776[4];
	var uVar781[4];
	var uVar786[4];
	var uVar791[4];
	var uVar796[4];
	var uVar801[4];
	var uVar806[4];
	var uVar811[4];
	var uVar816[4];
	var uVar821[4];
	var uVar826[4];
	var uVar831[4];
	var uVar836[4];
	var uVar841[4];
	var uVar846[4];
	var uVar851[4];
	var uVar856[4];
	var uVar861[4];
	var uVar866[4];
	var uVar871[4];
	var uVar876[4];
	var uVar881[4];
	var uVar886[4];
	var uVar891[4];
	var uVar896[4];
	var uVar901[4];
	var uVar906[4];
	var uVar911[4];
	var uVar916[4];
	var uVar921[4];
	var uVar926[4];
	var uVar931[4];
	var uVar936[4];
	var uVar941[4];
	var uVar946[4];
	var uVar951[4];
	var uVar956[4];
	var uVar961[4];
	var uVar966[4];
	var uVar971[4];
	var uVar976[4];
	var uVar981[4];
	var uVar986[4];
	var uVar991[4];
	var uVar996[4];
	var uVar1001[4];
	int iVar1006;
	int iVar1007;
	int iVar1008;
	int iVar1009;
	int iVar1010;
	
	iVar0 = unk_0x1B61845568F6F93A(*iParam0, "endcon");
	Var335 = 4;
	Var335.f_1 = 4;
	Var335.f_1.f_5 = 4;
	Var335.f_1.f_5.f_5 = 4;
	Var335.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1617379.f_25 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rloft", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar766[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "diagwf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar831[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "twpptd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar836[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar841[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhsi", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar846[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvhsd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar851[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "blolt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar856[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mxhth", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar861[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "cbmanr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar866[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rgnd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar871[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rgnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar876[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rgnm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar881[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar886[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnr1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar891[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar896[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnr3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar901[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnr4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar906[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnpl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar911[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar916[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar921[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drno", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar926[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drnRt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar931[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmmxh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar971[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmspm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar976[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmhrgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar1001[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmsjd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar981[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmhok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar986[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmstd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar991[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmmph", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar996[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "minspd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar771[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdlp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar776[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "pribt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar781[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bosth", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar786[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bosti", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar791[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mspdmx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar796[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "prmg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar801[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "traf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar806[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "pden", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar811[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "shdtxt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar816[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "hitsnd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar821[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar295[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "rdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar826[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dsosui", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "dops", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar245[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs6", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar250[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs7", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar255[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "irfbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar325[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar330[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar270[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar275[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar280[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar285[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar290[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar305[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar310[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar315[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar320[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar366[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar371[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar376[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar381[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar386[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar391[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar396[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar401[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar361[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2t", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2mm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outbt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outclo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outclr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outmm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "sia", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar716[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "stiam", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar721[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmiam2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar726[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "sim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar731[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar736[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "mmi2m", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar741[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar746[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "uacp2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar751[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "fleer", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar761[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "fleev", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar756[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var335[iVar1 /*5*/][iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar356[iVar3] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
				iVar3++;
			}
			StringCopy(&cVar4, "grtug", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar936[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "grwep", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar941[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "grclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar946[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "grkil", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar951[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lbred", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar956[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lbgre", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar961[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			StringCopy(&cVar4, "lbblu", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar966[iVar1] = unk_0x6D57F4CEAF9EFFBB(iVar0, &cVar4);
			iVar1006 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1617379.f_80[iVar1 /*6968*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_484[iVar2] = unk_0x9B63716C99E9B205(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_484[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar20[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_502[iVar2] = unk_0x9B63716C99E9B205(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_502[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2879[iVar2] = unk_0x9B63716C99E9B205(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2879[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2951[iVar2] = unk_0x9B63716C99E9B205(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2951[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2969[iVar2] = unk_0x9B63716C99E9B205(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2969[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4200[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4200[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_428[iVar2] = unk_0x9B63716C99E9B205(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_428[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_446[iVar2] = unk_0x9B63716C99E9B205(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_446[iVar2] = 0;
				}
				if (uVar766[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6698[iVar2] = unk_0x9B63716C99E9B205(uVar766[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6698[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar771[iVar1], iVar2) == 2 && Global_1617379.f_2 != 6)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6716[iVar2] = unk_0x9B63716C99E9B205(uVar771[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6716[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar776[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6734[iVar2] = unk_0x9B63716C99E9B205(uVar776[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6734[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar781[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6914[iVar2] = unk_0x9B63716C99E9B205(uVar781[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6914[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar786[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6932[iVar2] = unk_0x9B63716C99E9B205(uVar786[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6932[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar791[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6950[iVar2] = unk_0x9B63716C99E9B205(uVar791[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6950[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar831[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2731[iVar2] = unk_0x9B63716C99E9B205(uVar831[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2731[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar836[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2803[iVar2] = unk_0x9B63716C99E9B205(uVar836[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2803[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar841[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2749[iVar2] = unk_0x9B63716C99E9B205(uVar841[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2749[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar846[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2767[iVar2] = unk_0x9B63716C99E9B205(uVar846[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2767[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar851[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2785[iVar2] = unk_0x9B63716C99E9B205(uVar851[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2785[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar856[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2821[iVar2] = unk_0x9B63716C99E9B205(uVar856[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2821[iVar2] = 4;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar861[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2839[iVar2] = unk_0x9B63716C99E9B205(uVar861[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2839[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar866[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2857[iVar2] = unk_0x9B63716C99E9B205(uVar866[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2857[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar871[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/] = unk_0x84CC82885F6E3E3E(uVar871[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar876[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/].f_1 = unk_0x9B63716C99E9B205(uVar876[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/].f_1 = 1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar881[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/].f_2 = unk_0x9B63716C99E9B205(uVar881[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2548[iVar2 /*3*/].f_2 = 50;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar886[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/] = unk_0x84CC82885F6E3E3E(uVar886[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar891[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[0] = unk_0x84CC82885F6E3E3E(uVar891[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[0] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar896[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[1] = unk_0x84CC82885F6E3E3E(uVar896[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[1] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar901[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[2] = unk_0x84CC82885F6E3E3E(uVar901[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[2] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar906[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[3] = unk_0x84CC82885F6E3E3E(uVar906[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_1[3] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar911[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_6 = unk_0x84CC82885F6E3E3E(uVar911[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_6 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar916[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_7 = unk_0x84CC82885F6E3E3E(uVar916[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_7 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar921[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_8 = unk_0x84CC82885F6E3E3E(uVar921[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_8 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar926[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_9 = unk_0x84CC82885F6E3E3E(uVar926[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_9 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar931[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_10 = unk_0x84CC82885F6E3E3E(uVar931[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2360[iVar2 /*11*/].f_10 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar971[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/] = unk_0x9B63716C99E9B205(uVar971[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/] = 1000;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar976[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_1 = unk_0x84CC82885F6E3E3E(uVar976[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_1 = 1.15f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar1001[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_6 = unk_0x84CC82885F6E3E3E(uVar1001[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_6 = 10f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar981[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_2 = unk_0x9B63716C99E9B205(uVar981[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_2 = 25;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar986[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_7 = unk_0x9B63716C99E9B205(uVar986[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_7 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar991[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_3 = unk_0x9B63716C99E9B205(uVar991[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_3 = 1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar996[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_5 = unk_0x9B63716C99E9B205(uVar996[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2223[iVar2 /*8*/].f_5 = 25;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar796[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6752[iVar2] = unk_0x9B63716C99E9B205(uVar796[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6752[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar801[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6770[iVar2] = unk_0x9B63716C99E9B205(uVar801[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6770[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar806[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6824[iVar2] = unk_0x9B63716C99E9B205(uVar806[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6824[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar811[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6842[iVar2] = unk_0x9B63716C99E9B205(uVar811[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6842[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar816[iVar1], iVar2) == 2)
				{
					iVar1007 = unk_0x9B63716C99E9B205(uVar816[iVar1], iVar2);
					if (iVar1007 > 0)
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_6788[iVar2] = iVar1007;
					}
					else
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_6788[iVar2] = 0;
					}
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6788[iVar2] = 0;
				}
				if (uVar821[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6806[iVar2] = unk_0x9B63716C99E9B205(uVar821[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6806[iVar2] = 0;
				}
				if (Global_1617379.f_80[iVar1 /*6968*/].f_446[iVar2] == 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_446[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_466[iVar2] = unk_0x9B63716C99E9B205(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_466[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3005[iVar2] = unk_0x9B63716C99E9B205(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3005[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2987[iVar2] = unk_0x9B63716C99E9B205(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2987[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3027[iVar2] = unk_0x9B63716C99E9B205(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3027[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar85[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3047[iVar2] = unk_0x9B63716C99E9B205(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3047[iVar2] = 10000;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar90[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3083[iVar2] = unk_0x9B63716C99E9B205(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3083[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_556[iVar2] = unk_0x9B63716C99E9B205(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_556[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_574[iVar2] = unk_0x9B63716C99E9B205(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_574[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_628[iVar2] = unk_0x9B63716C99E9B205(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_628[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_646[iVar2] = unk_0x9B63716C99E9B205(uVar145[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_646[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_592[iVar2] = unk_0x9B63716C99E9B205(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_592[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_610[iVar2] = unk_0x9B63716C99E9B205(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_610[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar110[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3065[iVar2] = unk_0x9B63716C99E9B205(uVar110[iVar1], iVar2);
				}
				else if (unk_0xC128BEC1E47D7A3B(iVar1006, iVar1) == 2 && iVar1006 != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3065[iVar2] = unk_0x9B63716C99E9B205(iVar1006, iVar1);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3065[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar105[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_682[iVar2] = unk_0x9B63716C99E9B205(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_682[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar300[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_538[iVar2] = unk_0x9B63716C99E9B205(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_538[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar295[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_520[iVar2] = unk_0x9B63716C99E9B205(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_520[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_664[iVar2] = unk_0x9B63716C99E9B205(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_664[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_700[iVar2] = unk_0x9B63716C99E9B205(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_700[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6644[iVar2] = unk_0x9B63716C99E9B205(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6644[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6662[iVar2] = unk_0x9B63716C99E9B205(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6662[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar135[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6680[iVar2] = unk_0x9B63716C99E9B205(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6680[iVar2] = 0;
				}
				if (uVar150[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3494[iVar2 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar150[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3494[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_161())
				{
					if (uVar155[iVar1] != 0)
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4473[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar155[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4473[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3546[iVar2 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar160[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3546[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar165[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3616[iVar2] = unk_0x9B63716C99E9B205(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3616[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar170[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3652[iVar2] = unk_0x9B63716C99E9B205(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3652[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3101[iVar2] = unk_0x9B63716C99E9B205(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3101[iVar2] = 0;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3598[iVar2] = unk_0x84CC82885F6E3E3E(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3598[iVar2] = 0f;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3852[iVar2] = unk_0x9B63716C99E9B205(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3852[iVar2] = 0;
				}
				if (uVar230[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3870[iVar2] = unk_0x9B63716C99E9B205(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3870[iVar2] = 0;
				}
				if (uVar235[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3888[iVar2] = unk_0x9B63716C99E9B205(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3888[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar240[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3906[iVar2] = unk_0x9B63716C99E9B205(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3906[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar245[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3924[iVar2] = unk_0x9B63716C99E9B205(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3924[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar250[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3942[iVar2] = unk_0x9B63716C99E9B205(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3942[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar255[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3960[iVar2] = unk_0x9B63716C99E9B205(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3960[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar260[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3978[iVar2] = unk_0x9B63716C99E9B205(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3978[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar265[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_37[iVar2] = unk_0x9B63716C99E9B205(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0xC128BEC1E47D7A3B(Var335[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_4034[iVar2 /*5*/][iVar3] = unk_0x9B63716C99E9B205(Var335[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_4034[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0xC128BEC1E47D7A3B(uVar356[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4120[iVar3 /*16*/]), unk_0xFC143A57593B7EBA(uVar356[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4120[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar325[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3998[iVar2] = unk_0x9B63716C99E9B205(uVar325[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3998[iVar2] = Global_1617379.f_80[iVar1 /*6968*/].f_2723;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar330[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_4016[iVar2] = unk_0x9B63716C99E9B205(uVar330[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_4016[iVar2] = Global_1617379.f_80[iVar1 /*6968*/].f_2877;
				}
				if (bVar8)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][0] = unk_0x9B63716C99E9B205(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][1] = unk_0x9B63716C99E9B205(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][2] = unk_0x9B63716C99E9B205(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][3] = unk_0x9B63716C99E9B205(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6453[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][0] = unk_0x9B63716C99E9B205(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][1] = unk_0x9B63716C99E9B205(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][2] = unk_0x9B63716C99E9B205(uVar315[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6557[iVar2 /*4*/][2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar320[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6626[iVar2] = unk_0x9B63716C99E9B205(uVar320[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6626[iVar2] = 0;
				}
				iVar1008 = Global_1617379.f_80[iVar1 /*6968*/].f_57;
				while (iVar1008 <= 31)
				{
					if (unk_0xF426A5DE932B3BEE(Global_1617379.f_80[iVar1 /*6968*/].f_6626[iVar2], iVar1008))
					{
						unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_80[iVar1 /*6968*/].f_6626[iVar2]), iVar1008);
					}
					iVar1008++;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar175[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3634[iVar2] = unk_0x9B63716C99E9B205(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3634[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar180[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3670[iVar2] = unk_0x84CC82885F6E3E3E(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3670[iVar2] = -1f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar185[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3688[iVar2] = unk_0x84CC82885F6E3E3E(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3688[iVar2] = -1f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar190[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3726[iVar2] = unk_0x9B63716C99E9B205(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3726[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar195[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3708[iVar2] = unk_0x9B63716C99E9B205(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3708[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar200[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6860[iVar2] = unk_0x9B63716C99E9B205(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6860[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar205[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6878[iVar2] = unk_0x9B63716C99E9B205(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6878[iVar2] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar210[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6896[iVar2] = unk_0x9B63716C99E9B205(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6896[iVar2] = 0;
				}
				if (uVar290[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6539[iVar2] = unk_0x9B63716C99E9B205(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_6539[iVar2] = 0;
				}
				if (uVar366[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3120[iVar2] = unk_0x9B63716C99E9B205(uVar366[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3120[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar371[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3404[iVar2] = unk_0x9B63716C99E9B205(uVar371[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3404[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar376[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3440[iVar2] = unk_0x9B63716C99E9B205(uVar376[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3440[iVar2] = 0;
				}
				if (uVar381[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3156[iVar2] = unk_0x9B63716C99E9B205(uVar381[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3156[iVar2] = 0;
				}
				if (uVar386[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3138[iVar2] = unk_0x9B63716C99E9B205(uVar386[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3138[iVar2] = 0;
				}
				if (uVar391[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3744[iVar2] = unk_0x9B63716C99E9B205(uVar391[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3744[iVar2] = 0;
				}
				if (uVar396[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3816[iVar2] = unk_0x9B63716C99E9B205(uVar396[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3816[iVar2] = -1;
				}
				if (uVar401[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3780[iVar2] = unk_0x9B63716C99E9B205(uVar401[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3780[iVar2] = 0;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3798[iVar2] = unk_0x9B63716C99E9B205(uVar406[iVar1], iVar2);
				}
				else if (Global_1617379.f_80[iVar1 /*6968*/].f_3780[iVar2] != 0 && unk_0xF426A5DE932B3BEE(Global_1617379.f_80[iVar1 /*6968*/].f_3888[iVar2], 8))
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3798[iVar2] = Global_1617379.f_80[iVar1 /*6968*/].f_3780[iVar2];
					Global_1617379.f_80[iVar1 /*6968*/].f_3780[iVar2] = 0;
					unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_80[iVar1 /*6968*/].f_3888[iVar2]), 8);
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3762[iVar2] = unk_0x9B63716C99E9B205(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3762[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3834[iVar2] = unk_0x9B63716C99E9B205(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3834[iVar2] = 0;
				}
				if (uVar421[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3296[iVar2] = unk_0x9B63716C99E9B205(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3296[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar426[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3422[iVar2] = unk_0x9B63716C99E9B205(uVar426[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3422[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar431[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3458[iVar2] = unk_0x9B63716C99E9B205(uVar431[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3458[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar471[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3476[iVar2] = unk_0x84CC82885F6E3E3E(uVar471[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3476[iVar2] = -1f;
				}
				if (uVar361[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3386[iVar2] = unk_0x9B63716C99E9B205(uVar361[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3386[iVar2] = 0;
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3314[iVar2] = unk_0x9B63716C99E9B205(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3314[iVar2] = 100;
				}
				if (uVar441[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3350[iVar2] = unk_0x9B63716C99E9B205(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3350[iVar2] = 0;
				}
				if (uVar446[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3368[iVar2] = unk_0x9B63716C99E9B205(uVar446[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3368[iVar2] = 0;
				}
				if (uVar451[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3332[iVar2] = unk_0x9B63716C99E9B205(uVar451[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3332[iVar2] = 0;
				}
				if (uVar456[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3174[iVar2 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar456[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3174[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar461[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3226[iVar2 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar461[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3226[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar466[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3278[iVar2] = unk_0x84CC82885F6E3E3E(uVar466[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_3278[iVar2] = 0f;
				}
				if (uVar476[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4746[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar476[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_4746[iVar2 /*16*/]), "", 64);
				}
				if (!func_161())
				{
					if (uVar481[iVar1] != 0)
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5225[iVar2 /*6*/]), unk_0xFC143A57593B7EBA(uVar481[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5225[iVar2 /*6*/]), "", 24);
					}
					if (uVar486[iVar1] != 0)
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5019[iVar2 /*6*/]), unk_0xFC143A57593B7EBA(uVar486[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5019[iVar2 /*6*/]), "", 24);
					}
					if (uVar491[iVar1] != 0)
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5122[iVar2 /*6*/]), unk_0xFC143A57593B7EBA(uVar491[iVar1], iVar2), 24);
					}
					else
					{
						StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5122[iVar2 /*6*/]), "", 24);
					}
				}
				if (uVar496[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5328[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar496[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5328[iVar2 /*16*/]), "", 64);
				}
				if (uVar511[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5601[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar511[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5601[iVar2 /*16*/]), "", 64);
				}
				if (uVar501[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5874[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar501[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_5874[iVar2 /*16*/]), "", 64);
				}
				if (uVar506[iVar1] != 0)
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_6147[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(uVar506[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_6147[iVar2 /*16*/]), "", 64);
				}
				if (uVar516[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2897[iVar2] = unk_0x9B63716C99E9B205(uVar516[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2897[iVar2] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar826[iVar1], iVar2) == 2)
				{
					if (unk_0x9B63716C99E9B205(uVar826[iVar1], iVar2) > 1)
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_2933[iVar2] = unk_0x9B63716C99E9B205(uVar826[iVar1], iVar2);
					}
					else
					{
						Global_1617379.f_80[iVar1 /*6968*/].f_2933[iVar2] = 1;
					}
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2933[iVar2] = 1;
				}
				if (uVar521[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2915[iVar2] = unk_0x9B63716C99E9B205(uVar521[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2915[iVar2] = 0;
				}
				if (uVar566[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_3 = { unk_0xFC5E9F9EB9E91418(uVar566[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar571[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_6 = { unk_0xFC5E9F9EB9E91418(uVar571[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar576[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_10 = unk_0x84CC82885F6E3E3E(uVar576[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_13 = { unk_0xFC5E9F9EB9E91418(uVar581[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar556[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/] = { unk_0xFC5E9F9EB9E91418(uVar556[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (unk_0xC128BEC1E47D7A3B(uVar561[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_9 = unk_0x84CC82885F6E3E3E(uVar561[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar551[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_16 = unk_0x9B63716C99E9B205(uVar551[iVar1], iVar2);
				}
				if (uVar671[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_13 = { unk_0xFC5E9F9EB9E91418(uVar671[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar646[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/] = { unk_0xFC5E9F9EB9E91418(uVar646[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar656[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_3 = { unk_0xFC5E9F9EB9E91418(uVar656[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar651[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_6 = { unk_0xFC5E9F9EB9E91418(uVar651[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar666[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_10 = unk_0x84CC82885F6E3E3E(uVar666[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_10 = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar661[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_9 = unk_0x84CC82885F6E3E3E(uVar661[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar641[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_16 = unk_0x9B63716C99E9B205(uVar641[iVar1], iVar2);
				}
				if (uVar536[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_3 = { unk_0xFC5E9F9EB9E91418(uVar536[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar541[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_6 = { unk_0xFC5E9F9EB9E91418(uVar541[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar546[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_10 = unk_0x84CC82885F6E3E3E(uVar546[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar526[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/] = { unk_0xFC5E9F9EB9E91418(uVar526[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar531[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_9 = unk_0x84CC82885F6E3E3E(uVar531[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1676[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar756[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2153[iVar2 /*3*/] = { unk_0xFC5E9F9EB9E91418(uVar756[iVar1], iVar2) };
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2153[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar761[iVar1] != 0)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2205[iVar2] = unk_0x84CC82885F6E3E3E(uVar761[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2205[iVar2] = 0f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar586[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_19 = unk_0x9B63716C99E9B205(uVar586[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar591[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_17 = unk_0x9B63716C99E9B205(uVar591[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar596[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_18 = unk_0x9B63716C99E9B205(uVar596[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar601[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_20 = unk_0x9B63716C99E9B205(uVar601[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar606[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_23 = unk_0x9B63716C99E9B205(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar611[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_24 = unk_0x84CC82885F6E3E3E(uVar611[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_24 = 5f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar616[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_25 = unk_0x84CC82885F6E3E3E(uVar616[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_25 = 10f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar621[iVar1], iVar2) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_26 = unk_0x84CC82885F6E3E3E(uVar621[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_26 = 30f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar626[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_27 = unk_0x9B63716C99E9B205(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar631[iVar1], iVar2) == 2 && unk_0xC128BEC1E47D7A3B(uVar636[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_21 = unk_0x9B63716C99E9B205(uVar631[iVar1], iVar2);
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_22 = unk_0x9B63716C99E9B205(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_21 = 0;
					Global_1617379.f_80[iVar1 /*6968*/].f_722[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar676[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_19 = unk_0x9B63716C99E9B205(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar681[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_17 = unk_0x9B63716C99E9B205(uVar681[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar686[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_18 = unk_0x9B63716C99E9B205(uVar686[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar691[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_20 = unk_0x9B63716C99E9B205(uVar691[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar696[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_23 = unk_0x9B63716C99E9B205(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar701[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_27 = unk_0x9B63716C99E9B205(uVar701[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar706[iVar1], iVar2) == 2 && unk_0xC128BEC1E47D7A3B(uVar711[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_21 = unk_0x9B63716C99E9B205(uVar706[iVar1], iVar2);
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_22 = unk_0x9B63716C99E9B205(uVar711[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_21 = 0;
					Global_1617379.f_80[iVar1 /*6968*/].f_1199[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar936[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/] = unk_0x9B63716C99E9B205(uVar936[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar941[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_1 = unk_0x9B63716C99E9B205(uVar941[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_1 = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar946[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_2 = unk_0x9B63716C99E9B205(uVar946[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_2 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar951[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_3 = unk_0x9B63716C99E9B205(uVar951[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2600[iVar2 /*4*/].f_3 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar956[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/] = unk_0x9B63716C99E9B205(uVar956[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar966[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/].f_2 = unk_0x9B63716C99E9B205(uVar966[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/].f_2 = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar961[iVar1], iVar2) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/].f_1 = unk_0x9B63716C99E9B205(uVar961[iVar1], iVar2);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_2669[iVar2 /*3*/].f_1 = 0;
				}
				iVar2++;
			}
			iVar1009 = 0;
			while (iVar1009 <= 56)
			{
				if (unk_0xC128BEC1E47D7A3B(uVar716[iVar1], iVar1009) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_61[iVar1009] = unk_0x9B63716C99E9B205(uVar716[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_61[iVar1009] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar721[iVar1], iVar1009) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_180[iVar1009] = unk_0x9B63716C99E9B205(uVar721[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_180[iVar1009] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar726[iVar1], iVar1009) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_300[iVar1009] = unk_0x9B63716C99E9B205(uVar726[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_300[iVar1009] = 0;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar731[iVar1], iVar1009) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_119[iVar1009] = unk_0x84CC82885F6E3E3E(uVar731[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_119[iVar1009] = 1f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar736[iVar1], iVar1009) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_238[iVar1009] = unk_0x84CC82885F6E3E3E(uVar736[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_238[iVar1009] = 1f;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar741[iVar1], iVar1009) == 3)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_358[iVar1009] = unk_0x84CC82885F6E3E3E(uVar741[iVar1], iVar1009);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_358[iVar1009] = 1f;
				}
				iVar1009++;
			}
			iVar1010 = 0;
			while (iVar1010 <= 3)
			{
				if (unk_0xC128BEC1E47D7A3B(uVar746[iVar1], iVar1010) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_418[iVar1010] = unk_0x9B63716C99E9B205(uVar746[iVar1], iVar1010);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_418[iVar1010] = -1;
				}
				if (unk_0xC128BEC1E47D7A3B(uVar751[iVar1], iVar1010) == 2)
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_423[iVar1010] = unk_0x9B63716C99E9B205(uVar751[iVar1], iVar1010);
				}
				else
				{
					Global_1617379.f_80[iVar1 /*6968*/].f_423[iVar1010] = -1;
				}
				iVar1010++;
			}
		}
		iVar1++;
	}
}

void func_187(int iParam0)
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
	var uVar41;
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
	var uVar54[10];
	
	iVar0 = unk_0x1B61845568F6F93A(*iParam0, "endcon");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar0, "numpt");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar0, "ptint");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pptint");
	bVar7 = true;
	if (unk_0x12B8990BAE31537D(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mnumpt");
	}
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tcp");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tcr");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar0, "abits");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar0, "sdobs");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar0, "edobs");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar0, "dogps");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar0, "teamv");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar0, "teamrvc");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcvbs");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcobs");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcpbs");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcgbs");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rpgbs");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcpbs1");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcpbs2");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcgbs1");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mcgbs2");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rpgbs1");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rpgbs2");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar0, "inpts");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar0, "ldsf1");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar0, "ldsf2");
	iVar30 = 1;
	if (unk_0x12B8990BAE31537D(iVar0, "tehlh") == 7)
	{
		iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tehlh");
		iVar30 = 1;
	}
	else
	{
		iVar30 = 0;
	}
	iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tehrn");
	iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar0, "spsy1");
	iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar0, "spsy2");
	iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tenms");
	iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar0, "csttn");
	iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar0, "cstrn");
	iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar0, "nrl");
	iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tstrt");
	iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tstop");
	uVar41 = unk_0x6D57F4CEAF9EFFBB(iVar0, "sms");
	iVar42 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tblpv1");
	iVar43 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tblpv2");
	iVar44 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tblpv3");
	iVar45 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tblpv4");
	iVar46 = unk_0x6D57F4CEAF9EFFBB(iVar0, "thudv1");
	iVar47 = unk_0x6D57F4CEAF9EFFBB(iVar0, "thudv2");
	iVar48 = unk_0x6D57F4CEAF9EFFBB(iVar0, "thudv3");
	iVar49 = unk_0x6D57F4CEAF9EFFBB(iVar0, "thudv4");
	iVar50 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rcst1q");
	iVar51 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rcst2q");
	iVar52 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rcst3q");
	iVar53 = unk_0x6D57F4CEAF9EFFBB(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0xEC85C2DC9477300E(uVar41) - 1))
	{
		uVar54[iVar1] = unk_0x12A772D94035846C(uVar41, iVar1);
		Global_1617379.f_28799[iVar1 /*38*/] = unk_0x0C70A268552D2D17(uVar54[iVar1], "team");
		Global_1617379.f_28799[iVar1 /*38*/].f_1 = unk_0x0C70A268552D2D17(uVar54[iVar1], "rule");
		Global_1617379.f_28799[iVar1 /*38*/].f_2 = unk_0x0C70A268552D2D17(uVar54[iVar1], "time");
		StringCopy(&(Global_1617379.f_28799[iVar1 /*38*/].f_4[0 /*16*/]), unk_0xD856A6F0C791DA48(uVar54[iVar1], "txt0"), 64);
		StringCopy(&(Global_1617379.f_28799[iVar1 /*38*/].f_4[1 /*16*/]), unk_0xD856A6F0C791DA48(uVar54[iVar1], "txt1"), 64);
		Global_1617379.f_28799[iVar1 /*38*/].f_3 = unk_0x0C70A268552D2D17(uVar54[iVar1], "delay");
		Global_1617379.f_28799[iVar1 /*38*/].f_37 = unk_0x0C70A268552D2D17(uVar54[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1617379.f_25 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0x9B63716C99E9B205(iVar14, iVar1);
				Global_1617379.f_34249[iVar1] = uVar2;
			}
			else
			{
				Global_1617379.f_34249[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_1617379.f_34287[iVar1] = unk_0x9B63716C99E9B205(iVar15, iVar1);
			}
			else
			{
				Global_1617379.f_34287[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1617379.f_27[iVar1] = unk_0x9B63716C99E9B205(iVar3, iVar1);
			}
			if (Global_1617379.f_27[iVar1] < 1)
			{
				Global_1617379.f_27[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				Global_1617379.f_29641[iVar1] = unk_0x9B63716C99E9B205(iVar4, iVar1);
			}
			else
			{
				Global_1617379.f_29641[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				Global_1617379.f_29646[iVar1] = unk_0x9B63716C99E9B205(iVar5, iVar1);
			}
			else
			{
				Global_1617379.f_29646[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_1617379.f_32[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_1617379.f_32[iVar1] = unk_0x9B63716C99E9B205(iVar6, iVar1);
				}
				if (Global_1617379.f_32[iVar1] < 0)
				{
					Global_1617379.f_32[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4 = { unk_0xFC5E9F9EB9E91418(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_7 = { unk_0xFC5E9F9EB9E91418(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_718 = unk_0x9B63716C99E9B205(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_719 = unk_0x9B63716C99E9B205(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_720 = unk_0x9B63716C99E9B205(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_721 = unk_0x9B63716C99E9B205(iVar13, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar28, iVar1) == 2 && iVar28 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_464 = unk_0x9B63716C99E9B205(iVar28, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_464 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar29, iVar1) == 2 && iVar29 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_465 = unk_0x9B63716C99E9B205(iVar29, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_465 = 0;
			}
			if (iVar16 != 0)
			{
				Global_1617379.f_28789[iVar1] = unk_0x9B63716C99E9B205(iVar16, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar17, iVar1) == 2)
			{
				Global_1617379.f_28794[iVar1] = unk_0x9B63716C99E9B205(iVar17, iVar1);
			}
			else
			{
				Global_1617379.f_28794[iVar1] = 0;
			}
			if (iVar18 != 0)
			{
				Global_1617379.f_28745[iVar1] = unk_0x9B63716C99E9B205(iVar18, iVar1);
			}
			if (iVar21 != 0)
			{
				Global_1617379.f_28776[iVar1 /*3*/][0] = unk_0x9B63716C99E9B205(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1617379.f_28776[iVar1 /*3*/][1] = unk_0x9B63716C99E9B205(iVar22, iVar1);
			}
			if (Global_1617379.f_28745[iVar1] != 0 && Global_1617379.f_28776[iVar1 /*3*/][0] == 0)
			{
				Global_1617379.f_28776[iVar1 /*3*/][0] = Global_1617379.f_28745[iVar1];
			}
			if (iVar19 != 0)
			{
				Global_1617379.f_28740[iVar1] = unk_0x9B63716C99E9B205(iVar19, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1617379.f_28763[iVar1 /*3*/][0] = unk_0x9B63716C99E9B205(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1617379.f_28763[iVar1 /*3*/][1] = unk_0x9B63716C99E9B205(iVar24, iVar1);
			}
			if (Global_1617379.f_28740[iVar1] != 0 && Global_1617379.f_28763[iVar1 /*3*/][0] == 0)
			{
				Global_1617379.f_28763[iVar1 /*3*/][0] = Global_1617379.f_28740[iVar1];
			}
			if (iVar20 != 0)
			{
				Global_1617379.f_28735[iVar1] = unk_0x9B63716C99E9B205(iVar20, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1617379.f_28750[iVar1 /*3*/][0] = unk_0x9B63716C99E9B205(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1617379.f_28750[iVar1 /*3*/][1] = unk_0x9B63716C99E9B205(iVar26, iVar1);
			}
			if (Global_1617379.f_28735[iVar1] != 0 && Global_1617379.f_28750[iVar1 /*3*/][0] == 0)
			{
				Global_1617379.f_28750[iVar1 /*3*/][0] = Global_1617379.f_28735[iVar1];
			}
			if (iVar27 != 0)
			{
				Global_1617379.f_28004[iVar1] = unk_0x9B63716C99E9B205(iVar27, iVar1);
			}
			if (iVar30 && iVar31 != 0)
			{
				Global_1617379.f_28036[iVar1] = unk_0x9B63716C99E9B205(iVar31, iVar1);
			}
			else
			{
				Global_1617379.f_28036[iVar1] = 3;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar32, iVar1) == 2)
			{
				Global_1617379.f_28041[iVar1] = unk_0x9B63716C99E9B205(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_6420[0 /*16*/]), unk_0xFC143A57593B7EBA(iVar33, iVar1), 64);
			}
			if (iVar34 != 0)
			{
				StringCopy(&(Global_1617379.f_80[iVar1 /*6968*/].f_6420[1 /*16*/]), unk_0xFC143A57593B7EBA(iVar34, iVar1), 64);
			}
			if (iVar35 != 0)
			{
				Global_1617379.f_28009[iVar1] = unk_0x9B63716C99E9B205(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				StringCopy(&(Global_1617379.f_28014[iVar1 /*4*/]), unk_0xFC143A57593B7EBA(iVar36, iVar1), 16);
			}
			if (iVar37 != 0)
			{
				Global_1617379.f_28031[iVar1] = unk_0x9B63716C99E9B205(iVar37, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar39, iVar1) == 2 && iVar39 != 0)
			{
				Global_1617379.f_74350[iVar1] = unk_0x9B63716C99E9B205(iVar39, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar40, iVar1) == 2 && iVar40 != 0)
			{
				Global_1617379.f_74355[iVar1] = unk_0x9B63716C99E9B205(iVar40, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_57 = unk_0x9B63716C99E9B205(iVar38, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar42, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4185 = unk_0x9B63716C99E9B205(iVar42, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4185 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar43, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4186 = unk_0x9B63716C99E9B205(iVar43, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4186 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar44, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4187 = unk_0x9B63716C99E9B205(iVar44, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4187 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar45, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4188 = unk_0x9B63716C99E9B205(iVar45, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4188 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar46, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4189 = unk_0x9B63716C99E9B205(iVar46, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4189 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar47, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4190 = unk_0x9B63716C99E9B205(iVar47, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4190 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar48, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4191 = unk_0x9B63716C99E9B205(iVar48, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4191 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar49, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4192 = unk_0x9B63716C99E9B205(iVar49, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4192 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar50, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4193 = unk_0x9B63716C99E9B205(iVar50, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4193 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar51, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4194 = unk_0x9B63716C99E9B205(iVar51, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4194 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar52, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4195 = unk_0x9B63716C99E9B205(iVar52, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4195 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar53, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4196 = unk_0x9B63716C99E9B205(iVar53, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4196 = 0;
			}
		}
		iVar1++;
	}
}

void func_188(int iParam0)
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
	
	iVar0 = unk_0x1B61845568F6F93A(*iParam0, "endcon");
	iVar2 = unk_0x6D57F4CEAF9EFFBB(iVar0, "stpos");
	iVar3 = unk_0x6D57F4CEAF9EFFBB(iVar0, "delr");
	iVar4 = unk_0x6D57F4CEAF9EFFBB(iVar0, "epos");
	iVar5 = unk_0x6D57F4CEAF9EFFBB(iVar0, "endr");
	iVar6 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vareapos");
	iVar7 = unk_0x6D57F4CEAF9EFFBB(iVar0, "arear");
	iVar8 = unk_0x6D57F4CEAF9EFFBB(iVar0, "time");
	iVar9 = unk_0x6D57F4CEAF9EFFBB(iVar0, "plkr");
	iVar10 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pekr");
	iVar11 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vhkr");
	iVar12 = unk_0x6D57F4CEAF9EFFBB(iVar0, "obkr");
	iVar13 = unk_0x6D57F4CEAF9EFFBB(iVar0, "dr");
	iVar14 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pedr");
	iVar15 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vedr");
	iVar16 = unk_0x6D57F4CEAF9EFFBB(iVar0, "obdr");
	iVar17 = unk_0x6D57F4CEAF9EFFBB(iVar0, "lwmbs");
	iVar18 = unk_0x6D57F4CEAF9EFFBB(iVar0, "flmbs");
	iVar19 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vdoibs");
	iVar20 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vdohu");
	iVar21 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tmbts");
	iVar22 = unk_0x6D57F4CEAF9EFFBB(iVar0, "tmbt2");
	iVar23 = unk_0x6D57F4CEAF9EFFBB(iVar0, "swmbs");
	iVar24 = unk_0x6D57F4CEAF9EFFBB(iVar0, "gbmbs");
	iVar25 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pcbd");
	iVar26 = unk_0x6D57F4CEAF9EFFBB(iVar0, "lwbs");
	iVar27 = unk_0x6D57F4CEAF9EFFBB(iVar0, "wodia");
	iVar28 = unk_0x6D57F4CEAF9EFFBB(iVar0, "repcr");
	iVar29 = unk_0x6D57F4CEAF9EFFBB(iVar0, "woabs");
	iVar30 = unk_0x6D57F4CEAF9EFFBB(iVar0, "fwoabs");
	iVar31 = unk_0x6D57F4CEAF9EFFBB(iVar0, "fail");
	iVar32 = unk_0x6D57F4CEAF9EFFBB(iVar0, "vehrsp");
	iVar33 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mtlr");
	iVar34 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mslr");
	iVar35 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mlpl");
	iVar36 = unk_0x6D57F4CEAF9EFFBB(iVar0, "plyl");
	iVar37 = unk_0x6D57F4CEAF9EFFBB(iVar0, "shd");
	iVar38 = unk_0x6D57F4CEAF9EFFBB(iVar0, "spar");
	iVar39 = unk_0x6D57F4CEAF9EFFBB(iVar0, "2spar");
	iVar40 = unk_0x6D57F4CEAF9EFFBB(iVar0, "boud");
	iVar41 = unk_0x6D57F4CEAF9EFFBB(iVar0, "bla");
	iVar42 = unk_0x6D57F4CEAF9EFFBB(iVar0, "wla");
	iVar43 = unk_0x6D57F4CEAF9EFFBB(iVar0, "patm");
	iVar44 = unk_0x6D57F4CEAF9EFFBB(iVar0, "bnd2");
	iVar45 = unk_0x6D57F4CEAF9EFFBB(iVar0, "bla2");
	iVar46 = unk_0x6D57F4CEAF9EFFBB(iVar0, "wla2");
	iVar47 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pat2");
	iVar48 = unk_0x6D57F4CEAF9EFFBB(iVar0, "inv");
	iVar49 = unk_0x6D57F4CEAF9EFFBB(iVar0, "inv2");
	iVar50 = unk_0x6D57F4CEAF9EFFBB(iVar0, "invsw");
	iVar51 = unk_0x6D57F4CEAF9EFFBB(iVar0, "invtm");
	iVar52 = unk_0x6D57F4CEAF9EFFBB(iVar0, "invrl");
	iVar53 = unk_0x6D57F4CEAF9EFFBB(iVar0, "inv2tm");
	iVar54 = unk_0x6D57F4CEAF9EFFBB(iVar0, "inv2rl");
	iVar55 = unk_0x6D57F4CEAF9EFFBB(iVar0, "sinv");
	iVar56 = unk_0x6D57F4CEAF9EFFBB(iVar0, "sinv2");
	iVar57 = unk_0x6D57F4CEAF9EFFBB(iVar0, "minv");
	iVar58 = unk_0x6D57F4CEAF9EFFBB(iVar0, "minv2");
	iVar59 = unk_0x6D57F4CEAF9EFFBB(iVar0, "ppk");
	iVar60 = unk_0x6D57F4CEAF9EFFBB(iVar0, "mts");
	iVar61 = unk_0x6D57F4CEAF9EFFBB(iVar0, "spwia");
	iVar62 = unk_0x6D57F4CEAF9EFFBB(iVar0, "2spwia");
	iVar63 = unk_0x6D57F4CEAF9EFFBB(iVar0, "pcl");
	iVar64 = unk_0x6D57F4CEAF9EFFBB(iVar0, "ocl");
	iVar65 = unk_0x6D57F4CEAF9EFFBB(iVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_1617379.f_25 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/] = { unk_0xFC5E9F9EB9E91418(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3024 = unk_0x9B63716C99E9B205(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3045 = unk_0x9B63716C99E9B205(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3706 = unk_0x9B63716C99E9B205(iVar19, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar20, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3707 = unk_0x9B63716C99E9B205(iVar20, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3707 = 0;
			}
			if (iVar21 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3996 = unk_0x9B63716C99E9B205(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3997 = unk_0x9B63716C99E9B205(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3026 = unk_0x9B63716C99E9B205(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3119 = unk_0x9B63716C99E9B205(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4197 = unk_0x9B63716C99E9B205(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3023 = unk_0x9B63716C99E9B205(iVar26, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3025 = unk_0x9B63716C99E9B205(iVar29, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2729 = unk_0x9B63716C99E9B205(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2730 = unk_0x9B63716C99E9B205(iVar28, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3046 = unk_0x9B63716C99E9B205(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4198 = unk_0x9B63716C99E9B205(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_4199 = unk_0x9B63716C99E9B205(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_32 = unk_0x9B63716C99E9B205(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_33 = unk_0x9B63716C99E9B205(iVar34, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar35, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_34 = unk_0x9B63716C99E9B205(iVar35, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_34 = 0;
			}
			if (iVar36 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_36 = unk_0x9B63716C99E9B205(iVar36, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2724 = unk_0x9B63716C99E9B205(iVar38, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2726 = unk_0x9B63716C99E9B205(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2722 = unk_0x9B63716C99E9B205(iVar40, iVar1);
			}
			if (iVar41 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2721 = unk_0x9B63716C99E9B205(iVar41, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar43, iVar1) == 2 && iVar43 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2723 = unk_0x9B63716C99E9B205(iVar43, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2723 = 60000;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar44, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2876 = unk_0x9B63716C99E9B205(iVar44, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2876 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar45, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2875 = unk_0x9B63716C99E9B205(iVar45, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2875 = 0;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar47, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2877 = unk_0x9B63716C99E9B205(iVar47, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2877 = 60000;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar46, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2878 = unk_0x9B63716C99E9B205(iVar46, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2878 = 0;
			}
			if (iVar48 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_59 = unk_0x9B63716C99E9B205(iVar48, iVar1);
			}
			if (iVar49 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_60 = unk_0x9B63716C99E9B205(iVar49, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar50, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_177 = unk_0x9B63716C99E9B205(iVar50, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_177 = -1;
			}
			if (unk_0xC128BEC1E47D7A3B(iVar51, iVar1) == 2 && unk_0xC128BEC1E47D7A3B(iVar52, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_296 = unk_0x9B63716C99E9B205(iVar51, iVar1);
				Global_1617379.f_80[iVar1 /*6968*/].f_297 = unk_0x9B63716C99E9B205(iVar52, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_296 = -1;
				Global_1617379.f_80[iVar1 /*6968*/].f_297 = -1;
			}
			if (iVar55 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_178 = unk_0x9B63716C99E9B205(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_179 = unk_0x9B63716C99E9B205(iVar56, iVar1);
			}
			if (unk_0xC128BEC1E47D7A3B(iVar53, iVar1) == 2 && unk_0xC128BEC1E47D7A3B(iVar54, iVar1) == 2)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_416 = unk_0x9B63716C99E9B205(iVar53, iVar1);
				Global_1617379.f_80[iVar1 /*6968*/].f_417 = unk_0x9B63716C99E9B205(iVar54, iVar1);
			}
			else
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_416 = -1;
				Global_1617379.f_80[iVar1 /*6968*/].f_417 = -1;
			}
			if (iVar57 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_298 = unk_0x9B63716C99E9B205(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_299 = unk_0x9B63716C99E9B205(iVar58, iVar1);
			}
			if (iVar59 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_55 = unk_0x9B63716C99E9B205(iVar59, iVar1);
			}
			if (iVar60 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_56 = unk_0x9B63716C99E9B205(iVar60, iVar1);
			}
			if (iVar61 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2725 = unk_0x9B63716C99E9B205(iVar61, iVar1);
			}
			if (iVar62 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2727 = unk_0x9B63716C99E9B205(iVar62, iVar1);
			}
			if (iVar42 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_2728 = unk_0x9B63716C99E9B205(iVar42, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_3 = unk_0x84CC82885F6E3E3E(iVar37, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1617379.f_27953[iVar1] = unk_0x9B63716C99E9B205(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1617379.f_27958[iVar1] = unk_0x9B63716C99E9B205(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_35 = unk_0x9B63716C99E9B205(iVar65, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_14 = unk_0x9B63716C99E9B205(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_15 = { unk_0xFC5E9F9EB9E91418(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_18 = unk_0x9B63716C99E9B205(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_19 = { unk_0xFC5E9F9EB9E91418(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_22 = unk_0x9B63716C99E9B205(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_23 = unk_0x9B63716C99E9B205(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_24 = unk_0x9B63716C99E9B205(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_25 = unk_0x9B63716C99E9B205(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_26 = unk_0x9B63716C99E9B205(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_27 = unk_0x9B63716C99E9B205(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_28 = unk_0x9B63716C99E9B205(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_29 = unk_0x9B63716C99E9B205(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_30 = unk_0x9B63716C99E9B205(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1617379.f_80[iVar1 /*6968*/].f_31 = unk_0x9B63716C99E9B205(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1B61845568F6F93A(iParam0, "rule");
	Global_1617379.f_44 = unk_0x0C70A268552D2D17(iVar0, "time");
	Global_1617379.f_46 = unk_0x0C70A268552D2D17(iVar0, "score");
	Global_1617379.f_57 = unk_0x0C70A268552D2D17(iVar0, "prule");
	Global_1617379.f_41498 = unk_0x0C70A268552D2D17(iVar0, "ptyp");
	Global_1617379.f_47 = unk_0x0C70A268552D2D17(iVar0, "blip");
	Global_1617379.f_49 = unk_0x0C70A268552D2D17(iVar0, "tag");
	Global_1617379.f_50 = unk_0x0C70A268552D2D17(iVar0, "voice");
	Global_1617379.f_51 = unk_0x0C70A268552D2D17(iVar0, "radio");
	Global_1617379.f_52 = unk_0x0C70A268552D2D17(iVar0, "aim");
	Global_1617379.f_34298 = unk_0x0C70A268552D2D17(iVar0, "pol");
	Global_1617379.f_40 = unk_0x0C70A268552D2D17(iVar0, "liv");
	Global_1617379.f_33657 = unk_0x0C70A268552D2D17(iVar0, "traf");
	Global_1617379.f_70978 = unk_0x0C70A268552D2D17(iVar0, "tod");
	Global_1617379.f_70963 = unk_0x0C70A268552D2D17(iVar0, "weth");
	Global_1617379.f_70980 = unk_0x0C70A268552D2D17(iVar0, "apeds");
	Global_1617379.f_70979 = unk_0x0C70A268552D2D17(iVar0, "vehd");
	Global_1617379.f_55 = unk_0x0C70A268552D2D17(iVar0, "vdm");
	Global_1617379.f_53 = unk_0x0C70A268552D2D17(iVar0, "tdm");
	Global_1617379.f_27953[0] = unk_0x0C70A268552D2D17(iVar0, "pcr");
	Global_1617379.f_27958[0] = unk_0x0C70A268552D2D17(iVar0, "ocr");
}

void func_190(int iParam0, int iParam1, bool bParam2)
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
	int iVar30;
	char cVar31[16];
	char cVar35[16];
	int iVar39;
	int iVar40;
	int iVar41;
	
	iVar0 = unk_0x1B61845568F6F93A(iParam0, "gen");
	Global_1617379 = unk_0x0C70A268552D2D17(iVar0, "type");
	Global_1617379.f_9 = unk_0x472E86F64AA98B04(iVar0, "ngjob");
	unk_0xF426A5DE932B3BEE(Global_1617379.f_7, 0);
	bVar1 = unk_0x472E86F64AA98B04(iVar0, "photo");
	if (bVar1)
	{
		unk_0x26545538B51562AD(&(Global_1617379.f_7), 0);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_7), 0);
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ivm") == 2)
	{
		Global_1617379.f_34248 = unk_0x0C70A268552D2D17(iVar0, "ivm");
	}
	if (unk_0x12B8990BAE31537D(iVar0, "fixcam") == 2)
	{
		Global_1617379.f_74363 = unk_0x0C70A268552D2D17(iVar0, "fixcam");
	}
	else
	{
		Global_1617379.f_74363 = 0;
	}
	Global_1617379.f_4 = unk_0x0C70A268552D2D17(iVar0, "optbs");
	Global_1617379.f_70 = { unk_0x10AC91A12AB855AE(iVar0, "camo") };
	Global_1617379.f_73 = { unk_0x10AC91A12AB855AE(iVar0, "camro") };
	Global_1617379.f_64 = { unk_0x10AC91A12AB855AE(iVar0, "cam") };
	Global_1617379.f_76 = unk_0xA361D922F3339879(iVar0, "camh");
	Global_1617379.f_70340 = unk_0xA361D922F3339879(iVar0, "dmbds");
	Global_1617379.f_58 = { unk_0x10AC91A12AB855AE(iVar0, "phpo") };
	StringCopy(&(Global_1617379.f_70523[0 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, "szTag"), 64);
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1617379.f_70658[iVar2 /*6*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_114())
	{
		Global_1617379.f_2 = unk_0x0C70A268552D2D17(iVar0, "subtype");
		Global_1617379.f_88495 = unk_0x0C70A268552D2D17(iVar0, "adverm");
		Global_1617379.f_74360 = unk_0x0C70A268552D2D17(iVar0, "testcomplete");
		if (((Global_1617379.f_2 == 6 || Global_1617379.f_2 == 5) || Global_1617379.f_2 == 4) || Global_1617379.f_2 == 9)
		{
			if (unk_0x12B8990BAE31537D(iVar0, "teamBal") == 2)
			{
				Global_1617379.f_74362 = unk_0x0C70A268552D2D17(iVar0, "numRounds");
			}
			else
			{
				Global_1617379.f_74362 = 1;
			}
			if (Global_1617379.f_74362 < 1)
			{
				Global_1617379.f_74362 = 1;
			}
		}
		if (unk_0x12B8990BAE31537D(iVar0, "teamBal") == 2)
		{
			Global_1617379.f_74364 = unk_0x0C70A268552D2D17(iVar0, "teamBal");
		}
		else
		{
			Global_1617379.f_74364 = 5;
		}
	}
	Global_1617379.f_74361 = unk_0x0C70A268552D2D17(iVar0, "testcomplete");
	Global_1617379.f_45 = unk_0x0C70A268552D2D17(iVar0, "endtype");
	Global_1617379.f_11 = unk_0x0C70A268552D2D17(iVar0, "menubs");
	if (unk_0x12B8990BAE31537D(iVar0, "ovrpc") == 2)
	{
		Global_1617379.f_47407 = unk_0x0C70A268552D2D17(iVar0, "ovrpc");
	}
	else
	{
		Global_1617379.f_47407 = -1;
	}
	Global_1617379.f_12 = unk_0x0C70A268552D2D17(iVar0, "menubs2");
	if (unk_0x12B8990BAE31537D(iVar0, "menubs3") == 2)
	{
		Global_1617379.f_13 = unk_0x0C70A268552D2D17(iVar0, "menubs3");
	}
	else
	{
		Global_1617379.f_13 = 0;
	}
	Global_1617379.f_14 = unk_0x0C70A268552D2D17(iVar0, "menubs4");
	Global_1617379.f_15 = unk_0x0C70A268552D2D17(iVar0, "menubs5");
	Global_1617379.f_16 = unk_0x0C70A268552D2D17(iVar0, "menubs6");
	Global_1617379.f_17 = unk_0x0C70A268552D2D17(iVar0, "menubs7");
	Global_1617379.f_18 = unk_0x0C70A268552D2D17(iVar0, "menubs8");
	if (unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 31))
	{
	}
	Global_1617379.f_16 = unk_0x0C70A268552D2D17(iVar0, "menubs6");
	if (unk_0xF426A5DE932B3BEE(Global_1617379.f_16, 16))
	{
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hptfb") == 2)
	{
		Global_1617379.f_79 = unk_0x0C70A268552D2D17(iVar0, "hptfb");
	}
	else
	{
		Global_1617379.f_79 = 0;
	}
	Global_1617379.f_34297 = unk_0x0C70A268552D2D17(iVar0, "teamvbs");
	Global_1617379.f_19 = unk_0x0C70A268552D2D17(iVar0, "cncmbs");
	Global_1617379.f_85850 = unk_0x0C70A268552D2D17(iVar0, "todhr");
	Global_1617379.f_85851 = unk_0x0C70A268552D2D17(iVar0, "todmn");
	Global_1617379.f_10 = unk_0x0C70A268552D2D17(iVar0, "cmpts");
	Global_1617379.f_43 = unk_0x0C70A268552D2D17(iVar0, "rank");
	Global_1617379.f_43 = unk_0x0C70A268552D2D17(iVar0, "rank");
	Global_1617379.f_70982 = unk_0x0C70A268552D2D17(iVar0, "charcon");
	Global_1617379.f_70982 = unk_0x0C70A268552D2D17(iVar0, "char");
	Global_1617379.f_70984 = unk_0x0C70A268552D2D17(iVar0, "xpr");
	Global_1617379.f_70985 = unk_0x0C70A268552D2D17(iVar0, "cshr");
	Global_1617379.f_70989 = unk_0x0C70A268552D2D17(iVar0, "ctsc");
	if (unk_0x12B8990BAE31537D(iVar0, "ecsbs") == 2)
	{
		Global_1617379.f_83027.f_16 = unk_0x0C70A268552D2D17(iVar0, "ecsbs");
	}
	else
	{
		Global_1617379.f_83027.f_16 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ecsbs2") == 2)
	{
		Global_1617379.f_83027.f_17 = unk_0x0C70A268552D2D17(iVar0, "ecsbs2");
	}
	else
	{
		Global_1617379.f_83027.f_17 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ecsrng") == 2)
	{
		Global_1617379.f_83027.f_62 = unk_0x0C70A268552D2D17(iVar0, "ecsrng");
	}
	else
	{
		Global_1617379.f_83027.f_62 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ecscp") == 5)
	{
		Global_1617379.f_83027.f_54 = { unk_0x10AC91A12AB855AE(iVar0, "ecscp") };
	}
	else
	{
		Global_1617379.f_83027.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ecscr") == 3)
	{
		Global_1617379.f_83027.f_60 = unk_0xA361D922F3339879(iVar0, "ecscr");
	}
	else
	{
		Global_1617379.f_83027.f_60 = 0f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ecscs") == 5)
	{
		Global_1617379.f_83027.f_57 = { unk_0x10AC91A12AB855AE(iVar0, "ecscs") };
	}
	else
	{
		Global_1617379.f_83027.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/].f_1 = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/].f_2 = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83027.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_83027.f_63[iVar8 /*12*/].f_4), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1617379.f_83027.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "clbscr") == 2)
	{
		Global_1617379.f_84041 = unk_0x0C70A268552D2D17(iVar0, "clbscr");
	}
	else
	{
		Global_1617379.f_84041 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "disar") == 2)
	{
		Global_1617379.f_84042 = unk_0x0C70A268552D2D17(iVar0, "disar");
	}
	else
	{
		Global_1617379.f_84042 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "rlopt") == 2)
	{
		Global_1617379.f_83830 = unk_0x0C70A268552D2D17(iVar0, "rlopt");
	}
	else
	{
		Global_1617379.f_83830 = 0;
	}
	iVar15 = unk_0x0C70A268552D2D17(iVar0, "gpmn");
	Global_1617379.f_78 = iVar15;
	iVar16 = unk_0x0C70A268552D2D17(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1617379.f_70977 = iVar16;
	}
	else
	{
		Global_1617379.f_70977 = -1;
	}
	Global_1617379.f_70976 = unk_0x0C70A268552D2D17(iVar0, "ausc");
	Global_1617379.f_21 = unk_0x0C70A268552D2D17(iVar0, "minNu");
	Global_1617379.f_20 = unk_0x0C70A268552D2D17(iVar0, "num");
	if (Global_1617379.f_20 == -1)
	{
		Global_1617379.f_20 = 30;
	}
	Global_1617379.f_22 = unk_0x0C70A268552D2D17(iVar0, "time");
	Global_1617379.f_61 = { unk_0x10AC91A12AB855AE(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1617379.f_83461 = { unk_0x10AC91A12AB855AE(iVar0, &cVar17) };
	Global_1617379.f_83475 = unk_0x0C70A268552D2D17(iVar0, "apwbs");
	Global_1617379.f_83464 = unk_0x0C70A268552D2D17(iVar0, "wrploc");
	Global_1617379.f_83478 = unk_0x0C70A268552D2D17(iVar0, "twrst");
	Global_1617379.f_83476 = unk_0x0C70A268552D2D17(iVar0, "iplop");
	Global_1617379.f_83477 = unk_0x0C70A268552D2D17(iVar0, "intop");
	if (unk_0x12B8990BAE31537D(iVar0, "copteam") == 2)
	{
		Global_1617379.f_34299 = unk_0x0C70A268552D2D17(iVar0, "copteam");
	}
	else
	{
		Global_1617379.f_34299 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1617379.f_70674), unk_0xD856A6F0C791DA48(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1617379.f_70674), "", 64);
	}
	iVar21 = 0;
	while (iVar21 <= 21)
	{
		StringCopy(&cVar9, "dmvft", 8);
		StringIntConCat(&cVar9, iVar21, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_34213[iVar21] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_34213[iVar21] = 0;
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
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1617379.f_86074[iVar15 /*33*/][iVar22 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1617379.f_86074[iVar15 /*33*/][iVar22 /*16*/]), "", 64);
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
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
			{
				Global_1617379.f_33695[iVar15 /*23*/][iVar22] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_33695[iVar15 /*23*/][iVar22] = 0;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dvl", 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_34161[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_34161[iVar15] = 0;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dv", 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_34166[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_34166[iVar15] = 0;
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
				if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
				{
					Global_1617379.f_33788[iVar15 /*93*/][iVar23 /*23*/][iVar22] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
				}
				else
				{
					Global_1617379.f_33788[iVar15 /*93*/][iVar23 /*23*/][iVar22] = 0;
				}
				iVar22++;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dvl", 8);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
			{
				Global_1617379.f_34171[iVar15 /*5*/][iVar23] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_34171[iVar15 /*5*/][iVar23] = 0;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dv", 8);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
			{
				Global_1617379.f_34192[iVar15 /*5*/][iVar23] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_34192[iVar15 /*5*/][iVar23] = 0;
			}
			iVar23++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_70968[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_70968[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74505[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74505[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_86009[iVar15 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_86009[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_86207[iVar15 /*6*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 24);
		}
		else
		{
			StringCopy(&(Global_1617379.f_86207[iVar15 /*6*/]), "", 24);
		}
		StringCopy(&cVar9, "tmrph", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_86232[iVar15 /*6*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 24);
		}
		else
		{
			StringCopy(&(Global_1617379.f_86232[iVar15 /*6*/]), "", 24);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_86257[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_86257[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_84043[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_84043[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_70990[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_70990[iVar15] = -1;
		}
		StringCopy(&cVar9, "cwtit", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_88456[iVar15 /*4*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1617379.f_88456[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwstr", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_88473[iVar15 /*4*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1617379.f_88473[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwspre", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_88490[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_88490[iVar15] = -1;
		}
		StringCopy(&cVar9, "rtveft", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_88499[iVar15] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_88499[iVar15] = 0;
		}
		iVar15++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1617379.f_70690), unk_0xD856A6F0C791DA48(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1617379.f_70690), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "avss", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		Global_1617379.f_74451[iVar2] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		iVar3 = func_195(iVar2);
		while (iVar3 <= 31)
		{
			unk_0xF17F4B0641AB2DE1(&(Global_1617379.f_74451[iVar2]), iVar3);
			iVar3++;
		}
		iVar2++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vsclout") == 2)
	{
		Global_1617379.f_74458[0] = unk_0x0C70A268552D2D17(iVar0, "vsclout");
	}
	else
	{
		Global_1617379.f_74458[0] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vsthout") == 2)
	{
		Global_1617379.f_74458[1] = unk_0x0C70A268552D2D17(iVar0, "vsthout");
	}
	else
	{
		Global_1617379.f_74458[1] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vshwout") == 2)
	{
		Global_1617379.f_74458[3] = unk_0x0C70A268552D2D17(iVar0, "vshwout");
	}
	else
	{
		Global_1617379.f_74458[3] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vsenout") == 2)
	{
		Global_1617379.f_74458[2] = unk_0x0C70A268552D2D17(iVar0, "vsenout");
	}
	else
	{
		Global_1617379.f_74458[2] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vstgout") == 2)
	{
		Global_1617379.f_74458[4] = unk_0x0C70A268552D2D17(iVar0, "vstgout");
	}
	else
	{
		Global_1617379.f_74458[4] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vsbsout") == 2)
	{
		Global_1617379.f_74458[5] = unk_0x0C70A268552D2D17(iVar0, "vsbsout");
	}
	else
	{
		Global_1617379.f_74458[5] = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "alfutvs") == 2)
	{
		Global_1617379.f_74465 = unk_0x0C70A268552D2D17(iVar0, "alfutvs");
	}
	else
	{
		Global_1617379.f_74465 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vsdfstc") == 2)
	{
		Global_1617379.f_74466 = unk_0x0C70A268552D2D17(iVar0, "vsdfstc");
	}
	else if (((!unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 23) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 24)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 31)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 8))
	{
		Global_1617379.f_74466 = -1;
	}
	else if (((!unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 23) && unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 24)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 31)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 8))
	{
		Global_1617379.f_74466 = 0;
	}
	else if (((unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 23) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 24)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 31)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 8))
	{
		Global_1617379.f_74466 = 1;
	}
	else if (((!unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 23) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 24)) && unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 31)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 8))
	{
		Global_1617379.f_74466 = 2;
	}
	else if (((!unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 23) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_12, 24)) && !unk_0xF426A5DE932B3BEE(Global_1617379.f_13, 31)) && unk_0xF426A5DE932B3BEE(Global_1617379.f_14, 8))
	{
		Global_1617379.f_74466 = 3;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "dspteam") == 2)
	{
		Global_1617379.f_84066 = unk_0x0C70A268552D2D17(iVar0, "dspteam");
	}
	else
	{
		Global_1617379.f_84066 = -1;
	}
	if (!func_93() && !func_194())
	{
		if (unk_0xC009FB0DDD3D9458(iParam1))
		{
			StringCopy(&(Global_1617379.f_70372), unk_0xD856A6F0C791DA48(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_70372), func_193(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1617379.f_70372), unk_0xD856A6F0C791DA48(iVar0, "nm"), 64);
	}
	Global_1617379.f_71016 = unk_0x0C70A268552D2D17(iVar0, "mgrk");
	Global_1617379.f_71017 = unk_0x0C70A268552D2D17(iVar0, "mght");
	StringCopy(&(Global_1617379.f_70394[0 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[1 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[2 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[3 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[4 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[5 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[6 /*16*/]), "", 64);
	StringCopy(&(Global_1617379.f_70394[7 /*16*/]), "", 64);
	uVar24 = unk_0x6D57F4CEAF9EFFBB(iVar0, "dec");
	iVar25 = unk_0x171888B136481692(unk_0xFC143A57593B7EBA(uVar24, 0));
	if (iParam1 == -1 || unk_0xC009FB0DDD3D9458(iParam1))
	{
		if (iVar25 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0xEC85C2DC9477300E(iVar24) - 1))
			{
				StringCopy(&(Global_1617379.f_70394[iVar2 /*16*/]), unk_0xFC143A57593B7EBA(iVar24, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar27 = unk_0xFC143A57593B7EBA(iVar24, 0);
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
					StringCopy(&(Global_1617379.f_70394[iVar2 /*16*/]), unk_0x38274B7A77FE2ABD(sVar27, (63 * iVar2), iVar26), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1617379.f_70394[0 /*16*/]), func_193(), 64);
	}
	Global_1617379.f_25 = unk_0x0C70A268552D2D17(iVar0, "tnum");
	Global_1617379.f_26 = unk_0x0C70A268552D2D17(iVar0, "mtnum");
	if (!func_192())
	{
		if (!unk_0xF426A5DE932B3BEE(Global_1617379.f_15, 14))
		{
			Global_1617379.f_24 = Global_1617379.f_25;
		}
		else if (unk_0x12B8990BAE31537D(iVar0, "dtn") == 2)
		{
			Global_1617379.f_24 = unk_0x0C70A268552D2D17(iVar0, "dtn");
		}
		else
		{
			Global_1617379.f_24 = Global_1617379.f_25;
		}
	}
	else
	{
		Global_1617379.f_24 = Global_1617379.f_25;
	}
	if ((Global_1617379 == 0 && Global_2434762.f_546.f_11 != 0) && Global_1617379.f_25 != Global_2434762.f_546.f_11)
	{
		Global_1617379.f_25 = Global_2434762.f_546.f_11;
		Global_1617379.f_24 = Global_1617379.f_25;
	}
	if (Global_1617379 == 1)
	{
		if (Global_1617379.f_25 > 4)
		{
			Global_1617379.f_25 = 4;
		}
	}
	else if (Global_1617379.f_25 > 4)
	{
		Global_1617379.f_25 = 4;
	}
	Global_1617379.f_64847 = unk_0x0C70A268552D2D17(iVar0, "atmdm");
	Global_1617379.f_39 = unk_0x0C70A268552D2D17(iVar0, "trel");
	Global_1617379.f_70986 = unk_0x0C70A268552D2D17(iVar0, "ltm");
	Global_1617379.f_67 = { unk_0x10AC91A12AB855AE(iVar0, "vcpr") };
	if (unk_0x12B8990BAE31537D(iVar0, "hstat") == 2)
	{
		Global_1617379.f_70957 = unk_0x0C70A268552D2D17(iVar0, "hstat");
	}
	else
	{
		Global_1617379.f_70957 = 0;
	}
	iVar28 = 0;
	while (iVar28 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar28, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_47343[iVar28 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_47343[iVar28 /*3*/] = { 0f, 0f, 0f };
		}
		iVar28++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "numzr") == 2)
	{
		Global_1617379.f_47404 = unk_0x0C70A268552D2D17(iVar0, "numzr");
	}
	else
	{
		Global_1617379.f_47404 = 0;
	}
	iVar29 = unk_0x1B61845568F6F93A(iParam0, "ene");
	iVar30 = unk_0x0C70A268552D2D17(iVar29, "no");
	iVar2 = 0;
	while (iVar2 < 5)
	{
		StringCopy(&cVar9, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar9, iVar2 + 1, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2 && iVar30 > unk_0x0C70A268552D2D17(iVar0, &cVar9))
		{
			Global_1617379.f_64718[iVar2] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_64718[iVar2] = -1;
		}
		iVar2++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "rsgmx") == 2 && unk_0x12B8990BAE31537D(iVar0, "rsgnu") == 2)
	{
		Global_1617379.f_64724 = unk_0x0C70A268552D2D17(iVar0, "rsgmx");
		Global_1617379.f_64725 = unk_0x0C70A268552D2D17(iVar0, "rsgnu");
		Global_1617379.f_64726 = unk_0x0C70A268552D2D17(iVar0, "rsgbs");
		if (Global_1617379.f_64724 > 0 && Global_1617379.f_64725 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_1617379.f_64724 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar9, "rsg", 8);
					StringIntConCat(&cVar9, iVar2, 8);
					MemCopy(&cVar31, {cVar9}, 4);
					StringConCat(&cVar31, "mx", 16);
					MemCopy(&cVar35, {cVar9}, 4);
					StringConCat(&cVar35, "nu", 16);
					if (unk_0x12B8990BAE31537D(iVar0, &cVar31) == 2 && unk_0x12B8990BAE31537D(iVar0, &cVar35) == 2)
					{
						Global_1617379.f_64727[iVar2] = unk_0x0C70A268552D2D17(iVar0, &cVar31);
						Global_1617379.f_64738[iVar2] = unk_0x0C70A268552D2D17(iVar0, &cVar35);
						MemCopy(&cVar31, {cVar9}, 4);
						StringConCat(&cVar31, "bs", 16);
						Global_1617379.f_64749[iVar2] = unk_0x0C70A268552D2D17(iVar0, &cVar31);
					}
				}
				iVar2++;
			}
		}
	}
	if (unk_0x12B8990BAE31537D(iVar0, "tshd") == 2)
	{
		Global_1617379.f_71009 = unk_0x0C70A268552D2D17(iVar0, "tshd");
	}
	else
	{
		Global_1617379.f_71009 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "mrd") == 2)
	{
		Global_1617379.f_71010 = unk_0x0C70A268552D2D17(iVar0, "mrd");
	}
	else
	{
		Global_1617379.f_71010 = 15;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "srct") == 2)
	{
		Global_1617379.f_71011 = unk_0x0C70A268552D2D17(iVar0, "srct");
	}
	else
	{
		Global_1617379.f_71011 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "tptbd") == 2)
	{
		Global_1617379.f_71012 = unk_0x0C70A268552D2D17(iVar0, "tptbd");
	}
	else
	{
		Global_1617379.f_71012 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "tptba") == 2)
	{
		Global_1617379.f_71013 = unk_0x0C70A268552D2D17(iVar0, "tptba");
	}
	else
	{
		Global_1617379.f_71013 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atspos") == 5)
	{
		Global_1617379.f_85907 = { unk_0x10AC91A12AB855AE(iVar0, "atspos") };
	}
	else
	{
		Global_1617379.f_85907 = { 0f, 0f, 0f };
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atscmp") == 5)
	{
		Global_1617379.f_85901 = { unk_0x10AC91A12AB855AE(iVar0, "atscmp") };
	}
	else
	{
		Global_1617379.f_85901 = { 0f, 0f, 0f };
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atscmr") == 5)
	{
		Global_1617379.f_85904 = { unk_0x10AC91A12AB855AE(iVar0, "atscmr") };
	}
	else
	{
		Global_1617379.f_85904 = { 0f, 0f, 0f };
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atsfov") == 3)
	{
		Global_1617379.f_85910 = unk_0xA361D922F3339879(iVar0, "atsfov");
	}
	else
	{
		Global_1617379.f_85910 = 45f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atshed") == 3)
	{
		Global_1617379.f_85911 = unk_0xA361D922F3339879(iVar0, "atshed");
	}
	else
	{
		Global_1617379.f_85911 = 0f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "atsveh") == 2)
	{
		Global_1617379.f_85912 = unk_0x0C70A268552D2D17(iVar0, "atsveh");
	}
	else
	{
		Global_1617379.f_85912 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hpdt1") == 2)
	{
		Global_1617379.f_70958[0] = unk_0x0C70A268552D2D17(iVar0, "hpdt1");
	}
	else
	{
		Global_1617379.f_70958[0] = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hpdt2") == 2)
	{
		Global_1617379.f_70958[1] = unk_0x0C70A268552D2D17(iVar0, "hpdt2");
	}
	else
	{
		Global_1617379.f_70958[1] = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vdt") == 2)
	{
		Global_1617379.f_70961 = unk_0x0C70A268552D2D17(iVar0, "vdt");
	}
	else
	{
		Global_1617379.f_70961 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrbs") == 2)
	{
		Global_1617379.f_84048 = unk_0x0C70A268552D2D17(iVar0, "hbrbs");
	}
	else
	{
		Global_1617379.f_84048 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrtt") == 2)
	{
		Global_1617379.f_84049 = unk_0x0C70A268552D2D17(iVar0, "hbrtt");
	}
	else
	{
		Global_1617379.f_84049 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrttm") == 2)
	{
		Global_1617379.f_84050 = unk_0x0C70A268552D2D17(iVar0, "hbrttm");
	}
	else
	{
		Global_1617379.f_84050 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrtrl") == 2)
	{
		Global_1617379.f_84051 = unk_0x0C70A268552D2D17(iVar0, "hbrtrl");
	}
	else
	{
		Global_1617379.f_84051 = -1;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrpdt") == 2)
	{
		Global_1617379.f_84053 = unk_0x0C70A268552D2D17(iVar0, "hbrpdt");
	}
	else
	{
		Global_1617379.f_84053 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrvdt") == 2)
	{
		Global_1617379.f_84055 = unk_0x0C70A268552D2D17(iVar0, "hbrvdt");
	}
	else
	{
		Global_1617379.f_84055 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrkt") == 2)
	{
		Global_1617379.f_84057 = unk_0x0C70A268552D2D17(iVar0, "hbrkt");
	}
	else
	{
		Global_1617379.f_84057 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hbrph") == 2)
	{
		Global_1617379.f_84060 = unk_0x0C70A268552D2D17(iVar0, "hbrph");
	}
	else
	{
		Global_1617379.f_84060 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "hecam") == 2)
	{
		Global_1617379.f_84061 = unk_0x0C70A268552D2D17(iVar0, "hecam");
	}
	else
	{
		Global_1617379.f_84061 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "sdrvm") == 2)
	{
		Global_1617379.f_86275 = unk_0x0C70A268552D2D17(iVar0, "sdrvm");
	}
	else
	{
		Global_1617379.f_86275 = 10000;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "mdmgm") == 3)
	{
		Global_1617379.f_86276 = unk_0xA361D922F3339879(iVar0, "mdmgm");
	}
	else
	{
		Global_1617379.f_86276 = 1f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vdt") == 2)
	{
		Global_1617379.f_88496 = unk_0x0C70A268552D2D17(iVar0, "sphft");
	}
	else
	{
		Global_1617379.f_88496 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "vdt") == 2)
	{
		Global_1617379.f_88497 = unk_0x0C70A268552D2D17(iVar0, "cmxdftms");
	}
	else
	{
		Global_1617379.f_88497 = 0;
	}
	if (((unk_0x12B8990BAE31537D(iVar0, "hmmtt") == 2 && unk_0x12B8990BAE31537D(iVar0, "hmmts") == 2) && unk_0x12B8990BAE31537D(iVar0, "hmmte") == 2) && unk_0x12B8990BAE31537D(iVar0, "hmmth") == 2)
	{
		Global_1617379.f_84062 = unk_0x0C70A268552D2D17(iVar0, "hmmtt");
		Global_1617379.f_84063 = unk_0x0C70A268552D2D17(iVar0, "hmmts");
		Global_1617379.f_84064 = unk_0x0C70A268552D2D17(iVar0, "hmmte");
		Global_1617379.f_84065 = unk_0x0C70A268552D2D17(iVar0, "hmmth");
	}
	else
	{
		Global_1617379.f_84062 = 0;
		Global_1617379.f_84063 = 0;
		Global_1617379.f_84064 = 0;
		Global_1617379.f_84065 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "tstrm") == 2)
	{
		Global_1617379.f_85849 = unk_0x0C70A268552D2D17(iVar0, "tstrm");
	}
	else
	{
		Global_1617379.f_85849 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_74055[iVar2 /*8*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1617379.f_74055[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_64571[iVar2 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_64571[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_64620[iVar2 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_64620[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_64669[iVar2 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_64669[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "otxsgo", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_64760[iVar2 /*16*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_64760[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar39 = 0;
	while (iVar39 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar9, "ofit", 8);
			StringIntConCat(&cVar9, iVar3 + 1, 8);
			StringIntConCat(&cVar9, iVar39, 8);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
			{
				Global_1617379.f_74389[iVar39 /*14*/][iVar3] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74482[iVar39 /*2*/][0] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74482[iVar39 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74496[iVar39 /*2*/][0] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74496[iVar39 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74467[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74467[iVar39] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74472[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74472[iVar39] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83465[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83465[iVar39] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83470[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83470[iVar39] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2 && !func_161())
		{
			Global_1617379.f_83804[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83804[iVar39] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar9, "trcmn", 8);
			StringIntConCat(&cVar9, iVar3, 8);
			StringIntConCat(&cVar9, iVar39, 8);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2 && !func_161())
			{
				Global_1617379.f_83809[iVar39 /*5*/][iVar3] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_83809[iVar39 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83831[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83831[iVar39] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_34282[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_34282[iVar39] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_34292[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_34292[iVar39] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_69906[iVar39 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_69906[iVar39 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_69919[iVar39 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_69919[iVar39 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 3)
		{
			Global_1617379.f_69932[iVar39] = unk_0xA361D922F3339879(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_69932[iVar39] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74446[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74446[iVar39] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_74491[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_74491[iVar39] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar39, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_66777[iVar39] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_66777[iVar39] = -1;
		}
		iVar40 = 0;
		while (iVar40 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar39, 16);
			if (iVar40 > 0)
			{
				StringIntConCat(&cVar11, iVar40, 16);
			}
			if (unk_0x12B8990BAE31537D(iVar0, &cVar11) == 5)
			{
				Global_1617379.f_70031[iVar39 /*27*/][iVar40 /*13*/][0 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar11) };
			}
			else
			{
				Global_1617379.f_70031[iVar39 /*27*/][iVar40 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trstf", 16);
			StringIntConCat(&cVar11, iVar39, 16);
			if (iVar40 > 0)
			{
				StringIntConCat(&cVar11, iVar40, 16);
			}
			if (unk_0x12B8990BAE31537D(iVar0, &cVar11) == 5)
			{
				Global_1617379.f_70185[iVar39 /*27*/][iVar40 /*13*/][0 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar11) };
			}
			else
			{
				Global_1617379.f_70185[iVar39 /*27*/][iVar40 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar39, 16);
			if (iVar40 > 0)
			{
				StringIntConCat(&cVar11, iVar40, 16);
			}
			if (unk_0x12B8990BAE31537D(iVar0, &cVar11) == 3)
			{
				Global_1617379.f_70140[iVar39 /*11*/][iVar40 /*5*/][0] = unk_0xA361D922F3339879(iVar0, &cVar11);
			}
			else
			{
				Global_1617379.f_70140[iVar39 /*11*/][iVar40 /*5*/][0] = 0f;
			}
			iVar41 = 0;
			while (iVar41 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar39, 16);
				StringIntConCat(&cVar11, iVar40, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar41, 16);
				if (unk_0x12B8990BAE31537D(iVar0, &cVar11) == 5)
				{
					Global_1617379.f_70031[iVar39 /*27*/][iVar40 /*13*/][iVar41 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar11) };
				}
				else
				{
					Global_1617379.f_70031[iVar39 /*27*/][iVar40 /*13*/][iVar41 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar39, 16);
				StringIntConCat(&cVar11, iVar40, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar41, 16);
				if (unk_0x12B8990BAE31537D(iVar0, &cVar11) == 3)
				{
					Global_1617379.f_70140[iVar39 /*11*/][iVar40 /*5*/][iVar41] = unk_0xA361D922F3339879(iVar0, &cVar11);
				}
				else
				{
					Global_1617379.f_70140[iVar39 /*11*/][iVar40 /*5*/][iVar41] = 0f;
				}
				iVar41++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar39, 8);
			StringIntConCat(&cVar9, iVar40, 8);
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
			{
				Global_1617379.f_86262[iVar39 /*3*/][iVar40] = unk_0x0C70A268552D2D17(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_86262[iVar39 /*3*/][iVar40] = 0;
			}
			iVar40++;
		}
		iVar40 = 0;
		while (iVar40 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar39, 8);
			if (iVar40 > 0)
			{
				StringIntConCat(&cVar9, iVar40, 8);
			}
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
			{
				Global_1617379.f_85914[iVar39 /*13*/][iVar40 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
			}
			else
			{
				Global_1617379.f_85914[iVar39 /*13*/][iVar40 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar39, 8);
			if (iVar40 > 0)
			{
				StringIntConCat(&cVar9, iVar40, 8);
			}
			if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 3)
			{
				Global_1617379.f_85967[iVar39 /*5*/][iVar40] = unk_0xA361D922F3339879(iVar0, &cVar9);
			}
			else
			{
				Global_1617379.f_85967[iVar39 /*5*/][iVar40] = -1f;
			}
			iVar40++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar9, iVar39, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_85852[iVar39 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_85852[iVar39 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar9, iVar39, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_85865[iVar39 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_85865[iVar39 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar9, iVar39, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 5)
		{
			Global_1617379.f_85878[iVar39 /*3*/] = { unk_0x10AC91A12AB855AE(iVar0, &cVar9) };
		}
		else
		{
			Global_1617379.f_85878[iVar39 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar9, iVar39, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 3)
		{
			Global_1617379.f_85891[iVar39] = unk_0xA361D922F3339879(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_85891[iVar39] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar9, iVar39, 8);
		}
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 3)
		{
			Global_1617379.f_85896[iVar39] = unk_0xA361D922F3339879(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_85896[iVar39] = 0f;
		}
		iVar39++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1617379.f_83479[iVar2 /*18*/]), unk_0xD856A6F0C791DA48(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1617379.f_83479[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2)
		{
			Global_1617379.f_83479[iVar2 /*18*/].f_16 = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83479[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x12B8990BAE31537D(iVar0, &cVar9) == 2 && !unk_0x75CB9E30BA492FF0(&(Global_1617379.f_83479[iVar2 /*18*/])))
		{
			Global_1617379.f_83479[iVar2 /*18*/].f_17 = unk_0x0C70A268552D2D17(iVar0, &cVar9);
		}
		else
		{
			Global_1617379.f_83479[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "cposr") == 3)
	{
		Global_1617379.f_86288 = unk_0xA361D922F3339879(iVar0, "cposr");
	}
	else
	{
		Global_1617379.f_86288 = 60f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "cporv") == 3)
	{
		Global_1617379.f_86291 = unk_0xA361D922F3339879(iVar0, "cporv");
	}
	else
	{
		Global_1617379.f_86291 = -1f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "bmber") == 2)
	{
		Global_1617379.f_86279 = unk_0x0C70A268552D2D17(iVar0, "bmber");
	}
	else
	{
		Global_1617379.f_86279 = 2;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "bmbet") == 2)
	{
		Global_1617379.f_86280 = unk_0x0C70A268552D2D17(iVar0, "bmbet");
	}
	else
	{
		Global_1617379.f_86280 = 3000;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "bmbsi") == 2)
	{
		Global_1617379.f_86281 = unk_0x0C70A268552D2D17(iVar0, "bmbsi");
	}
	else
	{
		Global_1617379.f_86281 = 150;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "bmbdi") == 3)
	{
		Global_1617379.f_86282 = unk_0xA361D922F3339879(iVar0, "bmbdi");
	}
	else
	{
		Global_1617379.f_86282 = 3f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "bmbio") == 3)
	{
		Global_1617379.f_86283 = unk_0xA361D922F3339879(iVar0, "bmbio");
	}
	else
	{
		Global_1617379.f_86283 = 1f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "fvjhdt") == 2)
	{
		Global_1617379.f_86284 = unk_0x0C70A268552D2D17(iVar0, "fvjhdt");
	}
	else
	{
		Global_1617379.f_86284 = 25;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "fvjhmd") == 2)
	{
		Global_1617379.f_86285 = unk_0x0C70A268552D2D17(iVar0, "fvjhmd");
	}
	else
	{
		Global_1617379.f_86285 = 5;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "fvjfvd") == 2)
	{
		Global_1617379.f_86286 = unk_0x0C70A268552D2D17(iVar0, "fvjfvd");
	}
	else
	{
		Global_1617379.f_86286 = 5;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "fvjfvc") == 2)
	{
		Global_1617379.f_86287 = unk_0x0C70A268552D2D17(iVar0, "fvjfvc");
	}
	else
	{
		Global_1617379.f_86287 = 2;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "cpopr") == 3)
	{
		Global_1617379.f_86289 = unk_0xA361D922F3339879(iVar0, "cpopr");
	}
	else
	{
		Global_1617379.f_86289 = 5f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "cpohr") == 3)
	{
		Global_1617379.f_86290 = unk_0xA361D922F3339879(iVar0, "cpohr");
	}
	else
	{
		Global_1617379.f_86290 = 60f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc0") == 2)
	{
		Global_1617379.f_86292 = unk_0x0C70A268552D2D17(iVar0, "ratc0");
	}
	else
	{
		Global_1617379.f_86292 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc1") == 2)
	{
		Global_1617379.f_86293 = unk_0x0C70A268552D2D17(iVar0, "ratc1");
	}
	else
	{
		Global_1617379.f_86293 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc2") == 2)
	{
		Global_1617379.f_86294 = unk_0x0C70A268552D2D17(iVar0, "ratc2");
	}
	else
	{
		Global_1617379.f_86294 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc3") == 2)
	{
		Global_1617379.f_86295 = unk_0x0C70A268552D2D17(iVar0, "ratc3");
	}
	else
	{
		Global_1617379.f_86295 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc4") == 2)
	{
		Global_1617379.f_86296 = unk_0x0C70A268552D2D17(iVar0, "ratc4");
	}
	else
	{
		Global_1617379.f_86296 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc5") == 2)
	{
		Global_1617379.f_86297 = unk_0x0C70A268552D2D17(iVar0, "ratc5");
	}
	else
	{
		Global_1617379.f_86297 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc6") == 2)
	{
		Global_1617379.f_86298 = unk_0x0C70A268552D2D17(iVar0, "ratc6");
	}
	else
	{
		Global_1617379.f_86298 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc9") == 2)
	{
		Global_1617379.f_86302 = unk_0x0C70A268552D2D17(iVar0, "ratc9");
	}
	else
	{
		Global_1617379.f_86302 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc7") == 2)
	{
		Global_1617379.f_86300 = unk_0x0C70A268552D2D17(iVar0, "ratc7");
	}
	else
	{
		Global_1617379.f_86300 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratc8") == 2)
	{
		Global_1617379.f_86301 = unk_0x0C70A268552D2D17(iVar0, "ratc8");
	}
	else
	{
		Global_1617379.f_86301 = 0;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ratcm") == 3)
	{
		Global_1617379.f_86299 = unk_0xA361D922F3339879(iVar0, "ratcm");
	}
	else
	{
		Global_1617379.f_86299 = -1f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "cdrt") == 3)
	{
		Global_1617379.f_86304 = unk_0xA361D922F3339879(iVar0, "cdrt");
	}
	else
	{
		Global_1617379.f_86304 = -1f;
	}
	if (unk_0x12B8990BAE31537D(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_1617379.f_86305), unk_0xD856A6F0C791DA48(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1617379.f_86305), "", 16);
	}
	if (unk_0x12B8990BAE31537D(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_1617379.f_86309), unk_0xD856A6F0C791DA48(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1617379.f_86309), "", 16);
	}
	func_191();
	if (unk_0x12B8990BAE31537D(iVar0, "ssdsp") == 5)
	{
		Global_1617379.f_88449 = { unk_0x10AC91A12AB855AE(iVar0, "ssdsp") };
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ssdsr") == 3)
	{
		Global_1617379.f_88452 = unk_0xA361D922F3339879(iVar0, "ssdsr");
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ssder") == 3)
	{
		Global_1617379.f_88453 = unk_0xA361D922F3339879(iVar0, "ssder");
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ssdst") == 2)
	{
		Global_1617379.f_88454 = unk_0x0C70A268552D2D17(iVar0, "ssdst");
	}
	if (unk_0x12B8990BAE31537D(iVar0, "ssdtg") == 2)
	{
		Global_1617379.f_88455 = unk_0x0C70A268552D2D17(iVar0, "ssdtg");
	}
}

void func_191()
{
	Global_1617379.f_88449 = { 0f, 0f, 0f };
	Global_1617379.f_88452 = 30f;
	Global_1617379.f_88453 = 5f;
	Global_1617379.f_88454 = 30000;
	Global_1617379.f_88455 = 15000;
}

bool func_192()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762.f_546.f_1, 0);
}

var func_193()
{
	return unk_0xC754513C760635E8("CREATOR_NO_T");
}

bool func_194()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_131, 0);
}

int func_195(int iParam0)
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
			return 17;
		
		default:
	}
	return 0;
}

void func_196()
{
	if (func_197())
	{
		Global_2441456.f_8 = 1;
	}
	Global_2441456.f_7 = 1;
}

bool func_197()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762.f_2, 11);
}

int func_198(int iParam0)
{
	if (unk_0x3E00A1016DB5AFEF() || (unk_0x748A964A12412EBB() && iParam0 == 0))
	{
		if (unk_0x01B09CB427A5F1A1(1) == 0 || unk_0x34598392CB66EAED(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x01B09CB427A5F1A1(1) == 0)
	{
		return 0;
	}
	if (func_199() == 0)
	{
		return 0;
	}
	return 1;
}

int func_199()
{
	if (unk_0x3E00A1016DB5AFEF() && unk_0x7D343C5B30D80DC6())
	{
		return 1;
	}
	if (unk_0xE060CF72D1CA5C87() && unk_0x7D343C5B30D80DC6())
	{
		return 1;
	}
	if ((unk_0x748A964A12412EBB() && unk_0x554BB0B9E62F2C70() == 0) && unk_0x7D343C5B30D80DC6())
	{
		return 1;
	}
	if (unk_0xD0333FE560420AC5() && unk_0x7D343C5B30D80DC6())
	{
		return 1;
	}
	if (unk_0xDFCB321F1D24137F() && unk_0x7D343C5B30D80DC6())
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	if (unk_0x3E00A1016DB5AFEF() || (unk_0x748A964A12412EBB() && iParam0 == 0))
	{
		if (unk_0x01B09CB427A5F1A1(0) == 0 || unk_0x34598392CB66EAED(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x01B09CB427A5F1A1(0) == 0)
	{
		return 0;
	}
	if (func_199() == 0)
	{
		return 0;
	}
	return 1;
}

void func_201(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1617379.f_71005 = 0;
	if (bParam0)
	{
		Global_1617379.f_47407 = -1;
		Global_1617379.f_11 = 0;
		Global_1617379.f_12 = 0;
		Global_1617379.f_13 = 0;
		Global_1617379.f_14 = 0;
		Global_1617379.f_15 = 0;
		Global_1617379.f_16 = 0;
		Global_1617379.f_17 = 0;
		Global_1617379.f_18 = 0;
		Global_1617379.f_79 = 0;
		Global_1617379.f_83830 = 0;
		Global_1617379.f_10 = 0;
		Global_1617379.f_20 = 0;
		Global_1617379.f_45 = 0;
		Global_1617379.f_22 = 0;
		Global_1617379.f_44 = 0;
		Global_1617379.f_46 = 0;
		Global_1617379.f_47 = 0;
		Global_1617379.f_49 = 0;
		Global_1617379.f_50 = 0;
		Global_1617379.f_51 = 0;
		Global_1617379.f_52 = 0;
		Global_1617379.f_24 = 0;
		Global_1617379.f_25 = 1;
		Global_1617379.f_6 = 0;
		Global_1617379.f_40 = 0;
		Global_1617379.f_43 = 1;
		Global_1617379.f_21 = 0;
		Global_1617379.f_70982 = 0;
		Global_1617379.f_70985 = 0;
		Global_1617379.f_70984 = 0;
		Global_1617379.f_70981 = 0;
		if (bParam1)
		{
			Global_1617379.f_4 = 0;
			Global_1617379.f_5 = 0;
		}
		Global_1617379.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1617379.f_28799[iVar0 /*38*/] = -1;
			Global_1617379.f_28799[iVar0 /*38*/].f_1 = -1;
			Global_1617379.f_28799[iVar0 /*38*/].f_2 = 0;
			Global_1617379.f_28799[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1617379.f_70986 = 0;
		Global_1617379.f_70987 = 0;
		Global_1617379.f_70988 = 0;
		Global_1617379.f_70977 = -1;
		Global_1617379.f_70976 = 0;
		Global_1617379.f_56 = 0;
		Global_1617379.f_64 = { 0f, 0f, 0f };
		Global_1617379.f_67 = { 0f, 0f, 0f };
		Global_1617379.f_70 = { 0f, 0f, 0f };
		Global_1617379.f_73 = { 0f, 0f, 0f };
		Global_1617379.f_76 = 0f;
		Global_1617379.f_70340 = 0f;
		Global_1617379.f_78 = 0;
		Global_1617379.f_71004 = 0;
		Global_1617379.f_84042 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1617379.f_33679[iVar0] = 0;
			Global_1617379.f_33663[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1617379.f_74451[iVar0] = 0;
		Global_1617379.f_74458[iVar0] = -1;
		iVar0++;
	}
	Global_1617379.f_74465 = 0;
	Global_1617379.f_74466 = -1;
	Global_1617379.f_1 = -1;
	StringCopy(&(Global_1617379.f_70690), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1617379.f_74055[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1617379.f_85849 = 0;
	Global_1617379.f_39 = 0;
	Global_1617379.f_58 = { 0f, 0f, 0f };
	Global_1617379.f_84041 = -1;
	Global_1617379.f_70983 = 0f;
	StringCopy(&(Global_1617379.f_70372), "", 64);
	StringCopy(&(Global_1617379.f_70674), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1617379.f_70658[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1617379.f_70394[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_211();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1617379.f_28799[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_210();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_32[iVar0] = 0;
		Global_1617379.f_83804[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_83809[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1617379.f_27[iVar0] = 1;
		Global_1617379.f_69906[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_69919[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_69932[iVar0] = 0f;
		Global_1617379.f_85852[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_85865[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_85878[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_85891[iVar0] = 45f;
		Global_1617379.f_85896[iVar0] = 0f;
		Global_1617379.f_66777[iVar0] = -1;
		StringCopy(&(Global_1617379.f_86207[iVar0 /*6*/]), "", 24);
		StringCopy(&(Global_1617379.f_86232[iVar0 /*6*/]), "", 24);
		Global_1617379.f_86257[iVar0] = 0;
		StringCopy(&(Global_1617379.f_86009[iVar0 /*16*/]), "", 64);
		Global_1617379.f_74505[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1617379.f_86074[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1617379.f_29641[iVar0] = -1;
		Global_1617379.f_29646[iVar0] = -1;
		StringCopy(&(Global_1617379.f_88456[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1617379.f_88473[iVar0 /*4*/]), "", 16);
		Global_1617379.f_88490[iVar0] = 0;
		Global_1617379.f_88499[iVar0] = 0;
		iVar0++;
	}
	Global_1617379.f_85901 = { 0f, 0f, 0f };
	Global_1617379.f_85904 = { 0f, 0f, 0f };
	Global_1617379.f_85907 = { 0f, 0f, 0f };
	Global_1617379.f_85910 = 45f;
	Global_1617379.f_85911 = 0f;
	Global_1617379.f_85912 = 0;
	Global_1617379.f_86275 = 10000;
	Global_1617379.f_86276 = 1f;
	Global_1617379.f_86288 = 60f;
	Global_1617379.f_86289 = 5f;
	Global_1617379.f_86290 = 60f;
	Global_1617379.f_86291 = -1f;
	Global_1617379.f_86278 = 2;
	Global_1617379.f_86279 = 2;
	Global_1617379.f_86280 = 3000;
	Global_1617379.f_86281 = 150;
	Global_1617379.f_86282 = 3f;
	Global_1617379.f_86283 = 1f;
	Global_1617379.f_86284 = 25;
	Global_1617379.f_86285 = 5;
	Global_1617379.f_86286 = 5;
	Global_1617379.f_86287 = 2000;
	Global_1617379.f_86304 = -1f;
	StringCopy(&(Global_1617379.f_86305), "", 16);
	StringCopy(&(Global_1617379.f_86309), "", 16);
	Global_1617379.f_86292 = 0;
	Global_1617379.f_86301 = 0;
	Global_1617379.f_86293 = 0;
	Global_1617379.f_86294 = 0;
	Global_1617379.f_86295 = 0;
	Global_1617379.f_86296 = 0;
	Global_1617379.f_86297 = 0;
	Global_1617379.f_86298 = 0;
	Global_1617379.f_86302 = 0;
	Global_1617379.f_86299 = -1f;
	Global_1617379.f_86300 = 0;
	Global_1617379.f_86303 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1617379.f_64571[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1617379.f_64620[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1617379.f_64669[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1617379.f_64760[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_208(&(Global_1617379.f_74510[iVar0 /*1269*/]));
		func_206(&(Global_1617379.f_80856[iVar0 /*434*/]));
		iVar0++;
	}
	func_206(&(Global_1617379.f_83027));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1617379.f_83938[iVar0 /*4*/].f_3 = 0;
		Global_1617379.f_83938[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1617379.f_84039 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1617379.f_47343[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1617379.f_47404 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_174(&(Global_1617379.f_71018[iVar0 /*44*/]), iVar0);
		iVar0++;
	}
	Global_1617379.f_74344[0] = 0;
	Global_1617379.f_74344[1] = 0;
	Global_1617379.f_74348 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_205(&(Global_1617379.f_83836[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1617379.f_88495 = 0;
	Global_1617379.f_2 = 0;
	Global_1617379.f_70957 = 0;
	Global_1617379.f_83830 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_70990[iVar0] = -1;
		Global_1617379.f_84043[iVar0] = -1;
		iVar0++;
	}
	Global_1617379.f_88496 = 0;
	Global_1617379.f_88497 = 0;
	Global_1617379.f_71016 = 0;
	Global_1617379.f_71017 = 0;
	Global_1617379.f_84082 = 0.5f;
	Global_1617379.f_74362 = 1;
	Global_1617379.f_74364 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1617379.f_84083[iVar0] = 0f;
		Global_1617379.f_84104[iVar0] = 0f;
		Global_1617379.f_84125[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_34249[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_34287[iVar0] = -1;
		iVar0++;
	}
	Global_1616134 = 0;
	Global_1617379.f_7 = 0;
	Global_1617379.f_70963 = 0;
	Global_1617379.f_28003 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1617379.f_66476)
	{
		Global_1617379.f_66476[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1617379.f_66476[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_28763[iVar0 /*3*/][0] = 0;
		Global_1617379.f_28763[iVar0 /*3*/][1] = 0;
		Global_1617379.f_28750[iVar0 /*3*/][0] = 0;
		Global_1617379.f_28750[iVar0 /*3*/][1] = 0;
		Global_1617379.f_28776[iVar0 /*3*/][0] = 0;
		Global_1617379.f_28776[iVar0 /*3*/][1] = 0;
		Global_1617379.f_28789[iVar0] = 0;
		Global_1617379.f_28794[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1617379.f_74389[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1617379.f_74482[iVar0 /*2*/][0] = 0;
		Global_1617379.f_74496[iVar0 /*2*/][0] = 0;
		Global_1617379.f_80[iVar0 /*6968*/] = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_4 = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_7 = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_11 = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_14 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_15 = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_18 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_19 = { 0f, 0f, 0f };
		Global_1617379.f_80[iVar0 /*6968*/].f_22 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_23 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_36 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_24 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_25 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_26 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_27 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_28 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_29 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_30 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_31 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_32 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_33 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_34 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_57 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_3023 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3025 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3046 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3119 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4197 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3024 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3026 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4198 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_59 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_60 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_178 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_179 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_298 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_299 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4199 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_55 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_56 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2723 = 60000;
		Global_1617379.f_80[iVar0 /*6968*/].f_2877 = 60000;
		Global_1617379.f_80[iVar0 /*6968*/].f_3706 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_464 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_465 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2729 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2730 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1617379.f_80[iVar0 /*6968*/].f_2731[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2749[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2767[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2785[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2821[iVar1] = 4;
			Global_1617379.f_80[iVar0 /*6968*/].f_2839[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2857[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2803[iVar1] = -1;
			iVar1++;
		}
		Global_1617379.f_27953[iVar0] = 0;
		Global_1617379.f_27958[iVar0] = 0;
		Global_1617379.f_27963[iVar0] = -1;
		Global_1617379.f_28009[iVar0] = 0;
		StringCopy(&(Global_1617379.f_28014[iVar0 /*4*/]), "", 16);
		Global_1617379.f_28036[iVar0] = 3;
		Global_1617379.f_28041[iVar0] = -1;
		Global_1617379.f_28004[iVar0] = 0;
		Global_1617379.f_28031[iVar0] = 0;
		Global_1617379.f_74350[iVar0] = 0;
		Global_1617379.f_74355[iVar0] = 0;
		Global_1617379.f_34282[iVar0] = 100;
		Global_1617379.f_34292[iVar0] = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3996 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_3997 = 0;
		Global_1616134.f_1[iVar0] = 0;
		Global_1617379.f_74467[iVar0] = 0;
		Global_1617379.f_74472[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1617379.f_70031[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1617379.f_70140[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1617379.f_70185[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1617379.f_86262[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1617379.f_33695[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1617379.f_33788[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1617379.f_33788[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_85914[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_85967[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 56)
		{
			Global_1617379.f_80[iVar0 /*6968*/].f_61[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_180[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_300[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_119[iVar1] = 1f;
			Global_1617379.f_80[iVar0 /*6968*/].f_238[iVar1] = 1f;
			Global_1617379.f_80[iVar0 /*6968*/].f_358[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_80[iVar0 /*6968*/].f_418[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_423[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1617379.f_29180[iVar1 /*27*/] = 0;
			Global_1617379.f_29180[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1617379.f_29180[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1617379.f_29180[iVar1 /*27*/].f_25 = 0f;
			Global_1617379.f_29180[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1617379.f_29180[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1617379.f_29180[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1617379.f_29180[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1617379.f_80[iVar0 /*6968*/].f_3852[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3870[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3888[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3906[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3924[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3942[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3960[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3978[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_37[iVar1] = -1;
			Global_1617379.f_47257[iVar1 /*5*/][iVar0] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3998[iVar1] = 60000;
			Global_1617379.f_80[iVar0 /*6968*/].f_4016[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_4120[iVar2 /*16*/]), "", 64);
				Global_1617379.f_80[iVar0 /*6968*/].f_4034[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1617379.f_28046[iVar1 /*5*/][iVar0] = -1;
			Global_1617379.f_28132[iVar1 /*5*/][iVar0] = 0;
			Global_1617379.f_28218[iVar1 /*5*/][iVar0] = 0;
			Global_1617379.f_28304[iVar1 /*5*/][iVar0] = 0;
			Global_1617379.f_28390[iVar1 /*5*/][iVar0] = 0;
			Global_1617379.f_28476[iVar1 /*5*/][iVar0] = 1500;
			Global_1617379.f_28562[iVar1 /*5*/][iVar0] = 1400;
			Global_1617379.f_28648[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1616134.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1616134.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_484[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_502[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2879[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2897[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2915[iVar1] = 1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2987[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3005[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3047[iVar1] = 10000;
			Global_1617379.f_80[iVar0 /*6968*/].f_3027[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3083[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2933[iVar1] = 1;
			Global_1617379.f_80[iVar0 /*6968*/].f_3101[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3120[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3404[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3440[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3156[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3138[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3296[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3422[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3458[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3350[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3368[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3314[iVar1] = 100;
			Global_1617379.f_80[iVar0 /*6968*/].f_3174[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_3226[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_3278[iVar1] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_3332[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3386[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3476[iVar1] = -1f;
			Global_1617379.f_80[iVar0 /*6968*/].f_592[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_610[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_628[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_646[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_682[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_520[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_538[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_664[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_700[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6644[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6662[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6680[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6698[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6716[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6734[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6914[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6752[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6770[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6788[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6806[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6824[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6842[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_3744[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3762[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3780[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3798[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_3816[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_556[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_574[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2951[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2969[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_428[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_446[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_466[iVar1] = 0;
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_4200[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_4473[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_4746[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5225[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5019[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5122[iVar1 /*6*/]), "", 24);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_6420[0 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_6420[1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5328[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5601[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_5874[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1617379.f_80[iVar0 /*6968*/].f_6147[iVar1 /*16*/]), "", 64);
			Global_1617379.f_80[iVar0 /*6968*/].f_3616[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3652[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3634[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_3494[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_3546[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_16 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_9 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_10 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_19 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_17 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_18 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_20 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_21 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_22 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_722[iVar1 /*28*/].f_23 = 120;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_16 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_9 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_10 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_19 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_17 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_18 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_20 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_21 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_22 = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_1199[iVar1 /*28*/].f_23 = 120;
			Global_1617379.f_80[iVar0 /*6968*/].f_3598[iVar1] = 3f;
			Global_1617379.f_80[iVar0 /*6968*/].f_3065[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3670[iVar1] = 10.5f;
			Global_1617379.f_80[iVar0 /*6968*/].f_3688[iVar1] = 1f;
			Global_1617379.f_80[iVar0 /*6968*/].f_3834[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/] = 1000;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_1 = 1.15f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_2 = 25;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_7 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_3 = 1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_5 = 25;
			Global_1617379.f_80[iVar0 /*6968*/].f_2223[iVar1 /*8*/].f_6 = 10f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2548[iVar1 /*3*/] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2548[iVar1 /*3*/].f_1 = 1;
			Global_1617379.f_80[iVar0 /*6968*/].f_2548[iVar1 /*3*/].f_2 = 50;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_1[0] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_1[1] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_1[2] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_1[3] = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_6 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_7 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_8 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_9 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2360[iVar1 /*11*/].f_10 = 0f;
			Global_1617379.f_80[iVar0 /*6968*/].f_2669[iVar1 /*3*/] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2669[iVar1 /*3*/].f_1 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_2669[iVar1 /*3*/].f_2 = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6453[iVar1 /*5*/][0] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6453[iVar1 /*5*/][1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6453[iVar1 /*5*/][2] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6453[iVar1 /*5*/][3] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6539[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6557[iVar1 /*4*/][0] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6557[iVar1 /*4*/][1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6557[iVar1 /*4*/][2] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6626[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_3708[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6860[iVar1] = 0;
			Global_1617379.f_80[iVar0 /*6968*/].f_6878[iVar1] = -1;
			Global_1617379.f_80[iVar0 /*6968*/].f_6896[iVar1] = 0;
			func_204(&(Global_1617379.f_80[iVar0 /*6968*/].f_2600[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1617379.f_80[iVar0 /*6968*/].f_2722 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2876 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2721 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2875 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2724 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2725 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2726 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2727 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2728 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_2878 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_718 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_719 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_296 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_297 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_416 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_417 = -1;
		Global_1617379.f_80[iVar0 /*6968*/].f_4185 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4186 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4187 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4188 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4189 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4190 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4191 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4192 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4193 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4194 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4195 = 0;
		Global_1617379.f_80[iVar0 /*6968*/].f_4196 = 0;
		iVar0++;
	}
	Global_1617379.f_64724 = 0;
	Global_1617379.f_64725 = 0;
	Global_1617379.f_64726 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1617379.f_64727[iVar0] = 0;
		Global_1617379.f_64738[iVar0] = 0;
		Global_1617379.f_64749[iVar0] = 0;
		iVar0++;
	}
	Global_1617379.f_61 = { 0f, 0f, 0f };
	Global_1617379.f_29651 = { 0f, 0f, 0f };
	Global_1617379.f_77 = 0f;
	Global_1617379.f_83461 = { 0f, 0f, 0f };
	Global_1617379.f_88496 = 0;
	Global_1617379.f_88497 = 0;
	Global_1617379.f_70958[0] = 0;
	Global_1617379.f_70958[1] = 0;
	Global_1617379.f_70961 = 0;
	Global_1617379.f_70957 = 0;
	Global_1617379.f_84048 = 0;
	Global_1617379.f_84049 = 0;
	Global_1617379.f_84050 = 0;
	Global_1617379.f_84051 = 0;
	Global_1617379.f_84053 = 0;
	Global_1617379.f_84055 = 0;
	Global_1617379.f_84057 = 0;
	Global_1617379.f_84060 = 0;
	Global_1617379.f_84061 = 0;
	Global_1617379.f_84062 = 0;
	Global_1617379.f_84063 = 0;
	Global_1617379.f_84064 = 0;
	Global_1617379.f_84065 = 0;
	Global_1617379.f_84071 = -1;
	Global_1617379.f_84072 = -1;
	Global_1617379.f_84073 = -1;
	Global_1617379.f_84074 = -1;
	Global_1617379.f_84075 = -1;
	Global_1617379.f_84076 = -1;
	Global_1617379.f_84077 = -1;
	Global_1617379.f_84078 = -1;
	Global_1617379.f_84079 = -1;
	Global_1617379.f_84080 = -1;
	Global_1617379.f_84081 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1617379.f_30355[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_29654[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_29654[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_29654[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_30990[iVar0] = 0f;
		Global_1617379.f_31203[iVar0] = 1f;
		Global_1617379.f_30848[iVar0] = 0;
		Global_1617379.f_30566[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_31061[iVar0] = 0f;
		Global_1617379.f_30919[iVar0] = 0;
		iVar0++;
	}
	Global_1617379.f_33653 = 0;
	if (bParam0)
	{
		Global_1617379.f_33654 = 0;
		Global_1617379.f_33662 = 0;
	}
	Global_1617379.f_33660 = 0;
	Global_1617379.f_33661 = 0;
	Global_1617379.f_34241 = 0f;
	Global_1617379.f_36498 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		Global_1617379.f_36499[iVar0 /*43*/] = { 0f, 0f, 0f };
		Global_1617379.f_36499[iVar0 /*43*/].f_6 = 0f;
		Global_1617379.f_36499[iVar0 /*43*/].f_7 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_9 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_8 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_10 = 1;
		Global_1617379.f_36499[iVar0 /*43*/].f_19 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_12 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_13 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_14 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_15 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_11 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_36 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_37 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_38 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_16 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_17 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_18 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_20 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_39 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_21 = -1;
		Global_1617379.f_36499[iVar0 /*43*/].f_22 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_23 = 0;
		Global_1617379.f_36499[iVar0 /*43*/].f_24 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_203(&(Global_1617379.f_86313[iVar0 /*213*/]));
		iVar0++;
	}
	Global_1617379.f_88444 = 0;
	Global_1617379.f_40843 = 0;
	Global_1617379.f_40844 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1617379.f_40845[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1617379.f_40845[iVar0 /*31*/].f_6 = 0f;
		Global_1617379.f_40845[iVar0 /*31*/].f_7 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_8 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_12 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_11 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_13 = 1;
		Global_1617379.f_40845[iVar0 /*31*/].f_18 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_14 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_28 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_29 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_30 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_15 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_16 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_17 = -1;
		Global_1617379.f_40845[iVar0 /*31*/].f_9 = 0;
		Global_1617379.f_40845[iVar0 /*31*/].f_10 = 0;
		iVar0++;
	}
	Global_1617379.f_36173 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1617379.f_36174[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1617379.f_36174[iVar0 /*19*/].f_3 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_4 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_14 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_12 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_15 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_16 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_6 = -1;
		Global_1617379.f_36174[iVar0 /*19*/].f_5 = -1;
		Global_1617379.f_36174[iVar0 /*19*/].f_13 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_8 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_9 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_10 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_11 = 0f;
		Global_1617379.f_36174[iVar0 /*19*/].f_7 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_17 = 0;
		Global_1617379.f_36174[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1617379.f_36460 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1617379.f_36461[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1617379.f_36461[iVar0 /*7*/].f_3 = 0f;
		Global_1617379.f_36461[iVar0 /*7*/].f_4 = 0;
		Global_1617379.f_36461[iVar0 /*7*/].f_5 = 0;
		Global_1617379.f_36461[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1617379.f_34242 = 3.5f;
		Global_1617379.f_34243 = 7f;
		Global_1617379.f_34244 = 0f;
		Global_1617379.f_34245 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1617379.f_34249[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1617379.f_34287[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1617379.f_70995 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_33642[iVar0] = 0;
		Global_1617379.f_74446[iVar0] = -1;
		Global_1617379.f_74491[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1617379.f_33148[iVar1 /*29*/][iVar0] = 0;
			Global_1617379.f_33148[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1617379.f_33148[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1617379.f_33148[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1617379.f_33148[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1617379.f_83831[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1617379.f_34298 = 1;
	}
	Global_1617379.f_34300 = 0;
	Global_1617379.f_34301 = 0;
	Global_1617379.f_34302 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1617379.f_34303[iVar0 /*89*/] = { 0f, 0f, 0f };
		Global_1617379.f_34303[iVar0 /*89*/].f_4 = { 0f, 0f, 0f };
		Global_1617379.f_34303[iVar0 /*89*/].f_3 = 0f;
		Global_1617379.f_34303[iVar0 /*89*/].f_7 = 50f;
		Global_1617379.f_34303[iVar0 /*89*/].f_8 = 0f;
		Global_1617379.f_34303[iVar0 /*89*/].f_9 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_10 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_11 = { 0f, 0f, 0f };
		Global_1617379.f_34303[iVar0 /*89*/].f_14 = 0f;
		Global_1617379.f_34303[iVar0 /*89*/].f_15 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_16 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_27 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_29 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_30 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_31 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_44 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_43 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_45 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_46 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_47 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_48 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_49 = 60;
		Global_1617379.f_34303[iVar0 /*89*/].f_50 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_37 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_32 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_33 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_34 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_55 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_35 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_51 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_52 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_53 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_83 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_84 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_85 = { 0f, 0f, 0f };
		Global_1617379.f_34303[iVar0 /*89*/].f_88 = 0;
		Global_1617379.f_34303[iVar0 /*89*/].f_81 = -1;
		Global_1617379.f_34303[iVar0 /*89*/].f_82 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_34303[iVar0 /*89*/].f_17[iVar1] = 0;
			Global_1617379.f_34303[iVar0 /*89*/].f_22[iVar1] = 99999;
			Global_1617379.f_34303[iVar0 /*89*/].f_65[iVar1] = 0;
			Global_1617379.f_34303[iVar0 /*89*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1617379.f_83479[iVar0 /*18*/]), "", 64);
		Global_1617379.f_83479[iVar0 /*18*/].f_16 = 0;
		Global_1617379.f_83479[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1617379.f_41497 = 0;
	Global_1617379.f_41498 = 0;
	if (bParam0)
	{
		if (func_114() && !func_161())
		{
			Global_1617379.f_41499 = -1;
		}
		else
		{
			Global_1617379.f_41499 = 0;
		}
	}
	Global_1617379.f_41500 = 0;
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		Global_1617379.f_41501[iVar0 /*38*/] = { 0f, 0f, 0f };
		Global_1617379.f_41501[iVar0 /*38*/].f_3 = 0f;
		Global_1617379.f_41501[iVar0 /*38*/].f_13 = 77;
		Global_1617379.f_41501[iVar0 /*38*/].f_4 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_5 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_21 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_7 = 1f;
		Global_1617379.f_41501[iVar0 /*38*/].f_23 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_24 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_25 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_32 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_29 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_35 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_33 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_30 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_36 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_34 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_31 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_37 = 0;
		Global_1617379.f_41501[iVar0 /*38*/].f_26 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_27 = -1;
		Global_1617379.f_41501[iVar0 /*38*/].f_28 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_41501[iVar0 /*38*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_202();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1617379.f_64718[iVar0] = -1;
		iVar0++;
	}
	Global_1617379.f_71009 = -1;
	Global_1617379.f_71010 = 15;
	Global_1617379.f_71011 = -1;
	Global_1617379.f_71012 = -1;
	Global_1617379.f_71013 = 0;
	Global_1617379.f_43061 = 0;
	Global_1617379.f_36497 = 0;
	if (bParam0)
	{
		Global_1617379.f_34248 = -1;
		Global_1617379.f_33658 = -1;
	}
	Global_1617379.f_43062 = 0;
	Global_1617379.f_43063 = 0;
	Global_1617379.f_43064 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1617379.f_43065[iVar0 /*127*/] = { 0f, 0f, 0f };
		Global_1617379.f_43065[iVar0 /*127*/].f_3 = 0f;
		Global_1617379.f_43065[iVar0 /*127*/].f_4 = 50f;
		Global_1617379.f_43065[iVar0 /*127*/].f_5 = 0f;
		Global_1617379.f_43065[iVar0 /*127*/].f_6 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_7 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_8 = { 0f, 0f, 0f };
		Global_1617379.f_43065[iVar0 /*127*/].f_11 = 0f;
		Global_1617379.f_43065[iVar0 /*127*/].f_12 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_23 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_24 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_25 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_26 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_29 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_30 = 100;
		Global_1617379.f_43065[iVar0 /*127*/].f_31 = 1001f;
		Global_1617379.f_43065[iVar0 /*127*/].f_32 = 1001f;
		Global_1617379.f_43065[iVar0 /*127*/].f_34 = 1.5f;
		Global_1617379.f_43065[iVar0 /*127*/].f_41 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_106 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_42 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_43 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_27 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_28 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_46 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_36 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_37 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_38 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_58 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_59 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_61 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_104 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_103 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1617379.f_43065[iVar0 /*127*/].f_107[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_43065[iVar0 /*127*/].f_114[iVar1] = 0f;
			iVar1++;
		}
		Global_1617379.f_43065[iVar0 /*127*/].f_60 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_67 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_39 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_117 = 0;
		Global_1617379.f_43065[iVar0 /*127*/].f_118 = -1;
		Global_1617379.f_43065[iVar0 /*127*/].f_119 = { 0f, 0f, 0f };
		Global_1617379.f_43065[iVar0 /*127*/].f_122 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_43065[iVar0 /*127*/].f_13[iVar1] = 0;
			Global_1617379.f_43065[iVar0 /*127*/].f_18[iVar1] = 99999;
			Global_1617379.f_43065[iVar0 /*127*/].f_97[iVar1] = 0;
			Global_1617379.f_43065[iVar0 /*127*/].f_80[iVar1] = 0;
			Global_1617379.f_43065[iVar0 /*127*/].f_85[iVar1] = 0;
			Global_1617379.f_43065[iVar0 /*127*/].f_48[iVar1] = -1;
			Global_1617379.f_43065[iVar0 /*127*/].f_53[iVar1] = -1;
			Global_1617379.f_43065[iVar0 /*127*/].f_62[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1617379.f_69939 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1617379.f_69940[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1617379.f_69940[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1617379.f_69940[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1617379.f_64841 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1617379.f_64848[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1617379.f_64848[iVar0 /*9*/].f_3 = 0f;
		Global_1617379.f_64848[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_64842[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 28)
		{
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/] = { 0f, 0f, 0f };
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/].f_3 = 0f;
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/].f_4 = 0;
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/].f_5 = 0;
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/].f_7 = -1;
			Global_1617379.f_65389[iVar0 /*262*/][iVar1 /*9*/].f_8 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1617379.f_47405 = 0;
	Global_1617379.f_47408 = 0;
	Global_1617379.f_47409 = 0;
	Global_1617379.f_47406 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1617379.f_47410[iVar0 /*286*/].f_39 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_49 = 0;
		Global_1617379.f_47410[iVar0 /*286*/] = { 0f, 0f, 0f };
		Global_1617379.f_47410[iVar0 /*286*/].f_3 = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_4 = 0.75f;
		Global_1617379.f_47410[iVar0 /*286*/].f_14 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_15 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_16 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_32 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_36 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_37 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_38 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_215 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_214 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_216 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_217 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_218 = 20;
		Global_1617379.f_47410[iVar0 /*286*/].f_226 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_56 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_47 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_34 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_35 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_48 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_188 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_189 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_190 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_191 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_192 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_193 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_194 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_195 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_33 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_13 = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_5 = 50f;
		Global_1617379.f_47410[iVar0 /*286*/].f_6 = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_7 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_8 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
		Global_1617379.f_47410[iVar0 /*286*/].f_12 = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_175 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_63 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_167 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_168 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_169 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_175 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_185 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_176 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_184 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_64 = { 0f, 0f, 0f };
		Global_1617379.f_47410[iVar0 /*286*/].f_57 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_58 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_62 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_59 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_252 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_263 = 1f;
		Global_1617379.f_47410[iVar0 /*286*/].f_80 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_201 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_52 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_202 = 250;
		Global_1617379.f_47410[iVar0 /*286*/].f_205 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_206 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_266 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_207 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_267 = 4;
		Global_1617379.f_47410[iVar0 /*286*/].f_237 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_153 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_154 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_155 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_227 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_228 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_229 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_230 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_265 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_264 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_156 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_157 = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_60 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_47410[iVar0 /*286*/].f_17[iVar1] = 0;
			Global_1617379.f_47410[iVar0 /*286*/].f_22[iVar1] = 2;
			Global_1617379.f_47410[iVar0 /*286*/].f_27[iVar1] = 99999;
			Global_1617379.f_47410[iVar0 /*286*/].f_196[iVar1] = -1;
			Global_1617379.f_47410[iVar0 /*286*/].f_238[iVar1] = 0;
			Global_1617379.f_47410[iVar0 /*286*/].f_243[iVar1] = 0;
			Global_1617379.f_47410[iVar0 /*286*/].f_253[iVar1] = -1;
			Global_1617379.f_47410[iVar0 /*286*/].f_258[iVar1] = -1;
			Global_1617379.f_47410[iVar0 /*286*/].f_269[iVar1] = -2;
			Global_1617379.f_47410[iVar0 /*286*/].f_170[iVar1] = 0;
			Global_1617379.f_47410[iVar0 /*286*/].f_231[iVar1] = 0;
			iVar1++;
		}
		Global_1617379.f_47410[iVar0 /*286*/].f_115[0] = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_121[0] = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_133[0] = 0f;
		Global_1617379.f_47410[iVar0 /*286*/].f_81[0] = 0;
		Global_1617379.f_47410[iVar0 /*286*/].f_87[0] = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_93[0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_47410[iVar0 /*286*/].f_109[0] = 3;
		Global_1617379.f_47410[iVar0 /*286*/].f_127[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_47410[iVar0 /*286*/].f_67[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_47410[iVar0 /*286*/].f_81[iVar1 + 1] = 0;
			Global_1617379.f_47410[iVar0 /*286*/].f_115[iVar1 + 1] = 0f;
			Global_1617379.f_47410[iVar0 /*286*/].f_121[iVar1 + 1] = 0f;
			Global_1617379.f_47410[iVar0 /*286*/].f_133[iVar1 + 1] = 0f;
			Global_1617379.f_47410[iVar0 /*286*/].f_87[iVar1 + 1] = -1;
			Global_1617379.f_47410[iVar0 /*286*/].f_93[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_47410[iVar0 /*286*/].f_109[iVar1 + 1] = 3;
			Global_1617379.f_47410[iVar0 /*286*/].f_127[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1617379.f_47410[iVar0 /*286*/].f_139[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1617379.f_47410[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_47410[iVar0 /*286*/].f_283[iVar1] = 0f;
			iVar1++;
		}
		Global_1617379.f_47410[iVar0 /*286*/].f_186 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_187 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_268 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_274 = -1;
		Global_1617379.f_47410[iVar0 /*286*/].f_275 = -1;
		iVar0++;
	}
	Global_1617379.f_64841 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1617379.f_64848[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1617379.f_64848[iVar0 /*9*/].f_3 = 0f;
		Global_1617379.f_64848[iVar0 /*9*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1617379.f_33648[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1617379.f_31275[iVar0 /*104*/].f_53 = 0;
		Global_1617379.f_31275[iVar0 /*104*/].f_46 = 0;
		Global_1617379.f_31275[iVar0 /*104*/].f_20 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_28 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_29 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_30 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_55 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_56 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/] = 0;
		Global_1617379.f_31275[iVar0 /*104*/].f_21 = { 0f, 0f, 0f };
		Global_1617379.f_31275[iVar0 /*104*/].f_24 = { 0f, 0f, 0f };
		Global_1617379.f_31275[iVar0 /*104*/].f_27 = 1f;
		Global_1617379.f_31275[iVar0 /*104*/].f_97 = 10.5f;
		Global_1617379.f_31275[iVar0 /*104*/].f_99 = 1f;
		Global_1617379.f_31275[iVar0 /*104*/].f_100 = 0f;
		Global_1617379.f_31275[iVar0 /*104*/].f_96 = 0;
		Global_1617379.f_31275[iVar0 /*104*/].f_54 = 0;
		Global_1617379.f_31275[iVar0 /*104*/].f_19 = 1f;
		Global_1617379.f_31275[iVar0 /*104*/].f_101 = -1;
		Global_1617379.f_31275[iVar0 /*104*/].f_102 = -1f;
		Global_1617379.f_31275[iVar0 /*104*/].f_47 = 0;
		if (Global_1617379.f_31275[iVar0 /*104*/].f_103 != 0)
		{
			unk_0x680356F7D91033B7(Global_1617379.f_31275[iVar0 /*104*/].f_103);
			Global_1617379.f_31275[iVar0 /*104*/].f_103 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_31275[iVar0 /*104*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1617379.f_31275[iVar0 /*104*/].f_14[iVar1] = 0f;
			Global_1617379.f_31275[iVar0 /*104*/].f_36[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_41[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_31[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_62[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_67[iVar1] = 99999;
			Global_1617379.f_31275[iVar0 /*104*/].f_72[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_77[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_57[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_82[iVar1] = 0;
			Global_1617379.f_31275[iVar0 /*104*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1617379.f_69937 = 0;
	Global_1617379.f_38 = 0;
	Global_1617379.f_85850 = 12;
	Global_1617379.f_85851 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_83465[iVar0] = -1;
		Global_1617379.f_83470[iVar0] = -1;
		iVar0++;
	}
	Global_1617379.f_34299 = 0;
	Global_1617379.f_84066 = -1;
	Global_1617379.f_83475 = 0;
	Global_1617379.f_83464 = 0;
	Global_1617379.f_83477 = 0;
	Global_1617379.f_83476 = 0;
	Global_1617379.f_83478 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1617379.f_70968[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1617379.f_66813[iVar3] = -1;
		Global_1617379.f_66782[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1617379.f_66844[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				Global_1617379.f_68375[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
	func_191();
}

void func_202()
{
	int iVar0;
	int iVar1;
	
	Global_1617379.f_70673 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1617379.f_70696[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_70696[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1617379.f_70696[iVar0 /*26*/].f_9 = 0;
		Global_1617379.f_70696[iVar0 /*26*/].f_20 = 0;
		Global_1617379.f_70696[iVar0 /*26*/].f_22 = 0f;
		Global_1617379.f_70696[iVar0 /*26*/].f_23 = 0f;
		Global_1617379.f_70696[iVar0 /*26*/].f_21 = 0;
		Global_1617379.f_70696[iVar0 /*26*/].f_7 = 0f;
		Global_1617379.f_70696[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1617379.f_70696[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_203(var uParam0)
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

void func_204(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_205(var uParam0)
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

void func_206(char* sParam0)
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
		func_207(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_207(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_208(char* sParam0)
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
		func_209(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_207(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_209(char* sParam0, int iParam1)
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

void func_210()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1617379.f_34213[iVar0] = 0;
		iVar0++;
	}
}

void func_211()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1617379.f_70523[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_212()
{
	if (unk_0x1E114237D972903B())
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

bool func_213()
{
	return unk_0xF426A5DE932B3BEE(Global_969327.f_8, 0);
}

bool func_214()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762, 4);
}

bool func_215()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762, 28);
}

var func_216()
{
	return Global_2434762.f_568;
}

void func_217()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394746 = { Var0 };
	StringCopy(&(Global_2394746.f_30), "", 64);
	StringCopy(&(Global_2394746.f_46), "", 64);
	StringCopy(&(Global_2394746.f_15), "", 32);
}

void func_218()
{
	unk_0xF17F4B0641AB2DE1(&Global_2434762, 4);
}

void func_219()
{
	unk_0xF17F4B0641AB2DE1(&Global_2434762, 28);
}

void func_220(bool bParam0, bool bParam1, bool bParam2)
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
		func_84(bParam0, 0);
	}
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 91:
			return 15;
		
		case 98:
			return 8;
		
		case 92:
			return 14;
		
		case 96:
			return 122;
		
		case 99:
			return 1;
		
		case 97:
			return 5;
		
		case 100:
			return 6;
		
		case 93:
			return 11;
		
		case 101:
			return 0;
		
		case 102:
			return 2;
		
		case 94:
			return 13;
		
		case 103:
			return 3;
		
		case 95:
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
		
		default:
	}
	return 178;
}

bool func_222()
{
	return Global_2394746;
}

var func_223()
{
	return Global_2394746.f_3;
}

