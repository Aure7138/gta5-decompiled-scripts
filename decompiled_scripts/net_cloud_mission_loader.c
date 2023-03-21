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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<5> Local_96 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_113 = 1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1;
	var uLocal_118 = -1;
	var uLocal_119 = 2;
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
	var uLocal_132 = 2;
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
	struct<88> Local_190 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
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
	int iVar31;
	bool bVar32;
	
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	unk_0x0A2FDF6E490B25B3();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_279 = false;
		bVar0 = func_346();
		Global_2394836.f_3 = 0;
		Global_2395284 = 0;
		if (func_345())
		{
			bLocal_279 = true;
			Var1 = { Global_2394836.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_344(Global_2394836.f_4);
			iVar20 = unk_0x7C7787D2D7139A85();
			bVar21 = Global_2394836.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394836.f_15 };
			}
			if (Global_2394836.f_25)
			{
				func_343(&Local_96, 1, 1);
				unk_0x3B76114EC84D5812(&(Global_1590446[iVar20 /*871*/].f_39.f_18), 2);
				unk_0x3B76114EC84D5812(&(Global_1590446[iVar20 /*871*/].f_39.f_18), 1);
				unk_0x3B76114EC84D5812(&(Global_1590446[iVar20 /*871*/].f_39.f_18), 3);
				func_342();
				func_341();
				Global_2394836.f_25 = 0;
			}
			if (!unk_0x393E9918BC37548A())
			{
				func_340();
			}
			else if (!func_119(&Local_96, &cVar11, &(Global_1590446[iVar20 /*871*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394836.f_23 = 0;
				Global_2394836.f_27 = -1;
				if (bVar0)
				{
					func_343(&Local_96, 1, 1);
					unk_0xA04F851BF7B12603();
					func_118();
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_340();
							Global_2394836.f_25 = 1;
						}
					}
				}
			}
			else if (Local_96.f_0)
			{
				Global_2394836.f_23 = 1;
				Global_2394836.f_24 = 1;
				if (Global_2394836.f_27 < 0)
				{
					Global_2394836.f_27 = 0;
				}
				else
				{
					Global_2394836.f_27++;
					if (Global_2394836.f_27 >= 10)
					{
						func_340();
					}
				}
			}
			else
			{
				Global_2394836.f_26++;
				if (Global_2394836.f_26 >= 3)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_340();
							Global_2394836.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394836.f_25 = 1;
				}
			}
		}
		if (func_117())
		{
			bLocal_279 = true;
			MemCopy(&cVar22, {Global_2394836.f_4.f_3}, 8);
			if (Global_2394836.f_23)
			{
				func_340();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_343(&Local_96, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar30 = 0;
				if (!func_113(&Local_96, &cVar22, &Local_190, &iVar30))
				{
					Global_2394836.f_23 = 0;
					Global_2394836.f_27 = -1;
				}
				else if (Local_96.f_0)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
					Global_2394836.f_28 = Local_190.f_65;
					Global_2394836.f_29 = Local_190.f_68;
					Global_2394836.f_30 = { Local_190.f_22 };
					Global_2394836.f_46 = { Local_190.f_38 };
					Global_2448961.f_5 = iVar30;
					Global_2448961.f_6 = iVar30;
					Global_2398783 = { Local_190 };
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (func_112())
		{
			bLocal_279 = true;
			if (Global_2394836.f_23)
			{
				func_340();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_343(&Local_96, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar31 = Local_96.f_4;
				if (!func_5(&Local_96))
				{
					Global_2395284 = 1;
					if (iVar31 != Local_96.f_4)
					{
						if (Local_96.f_4 == 4)
						{
							iLocal_278 = (unk_0x9B35D07DCD0F0B43() + 50000);
						}
					}
					bVar32 = false;
					if (Local_96.f_4 == 4)
					{
						if (unk_0x9B35D07DCD0F0B43() > iLocal_278)
						{
							Global_2394836.f_23 = 1;
							Global_2394836.f_24 = 0;
							bVar32 = true;
						}
					}
					if (!bVar32)
					{
						Global_2394836.f_23 = 0;
						Global_2394836.f_27 = -1;
					}
				}
				else if (Local_96.f_0)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (!bLocal_279)
		{
			if (func_4(unk_0x7C7787D2D7139A85()) || func_3(unk_0x7C7787D2D7139A85()))
			{
				if (!func_1(unk_0x7C7787D2D7139A85(), 1, 0))
				{
					unk_0x9C9E32388A7886A2();
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
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
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
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_4(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

int func_5(bool bParam0)
{
	if (!func_111())
	{
		if (func_108())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_107())
			{
				return 0;
			}
			if (func_106())
			{
				return 0;
			}
			func_105();
			func_104();
			func_103();
			if (func_111())
			{
				unk_0xFC6F880F4838E8FB(1);
			}
			else
			{
				unk_0xFC6F880F4838E8FB(0);
			}
			bParam0->f_13 = Global_2395283;
			bParam0->f_9 = 1200;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_102(bParam0, 24);
			break;
		
		case 24:
			if (func_100(bParam0->f_13))
			{
				func_343(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_102(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x74BBD5413E7F33E7(&Global_2394898, bParam0->f_13, 1, func_99(0)))
			{
				func_102(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x3C0079F135337EF1())
			{
				if (unk_0x6FF9105EB2BC9A5E())
				{
					*bParam0 = 0;
				}
				else
				{
					func_343(bParam0, 1, 1);
					bParam0->f_41 = unk_0x15C7D7C931FD7D2D();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x411B3B3EB88220D3() > 0)
				{
					func_102(bParam0, 4);
				}
				else
				{
					func_343(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD1EDCB7D12827026())
			{
				func_104();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1200 + bParam0->f_13))
			{
				func_343(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1218)
					{
						if (unk_0xD15DDDE2D5991717() != 0)
						{
							unk_0xD7DA134CB17A3ABD();
						}
						if (unk_0x1CEEDAD2579308CA(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_104();
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
	bool bVar94;
	int iVar95;
	
	iVar0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(iVar0, "mission");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "gen");
	if (func_111())
	{
		if (func_98(unk_0xC4380FF860A1D307(bParam0->f_7)))
		{
			if (unk_0xD15DDDE2D5991717() != 0)
			{
				unk_0xD7DA134CB17A3ABD();
			}
			return;
		}
	}
	if ((unk_0xEE6F60A09902D357(iVar2, "type") == 0 && unk_0xEE6F60A09902D357(iVar2, "subtype") == 7) && bParam0->f_9 < 1200)
	{
		if (unk_0xD15DDDE2D5991717() != 0)
		{
			unk_0xD7DA134CB17A3ABD();
		}
		return;
	}
	if (Global_262145.f_7721)
	{
		if (unk_0xEE6F60A09902D357(iVar2, "type") == 0)
		{
			if (unk_0xEE6F60A09902D357(iVar2, "subtype") == 1 || unk_0xEE6F60A09902D357(iVar2, "subtype") == 7)
			{
				if (unk_0xD15DDDE2D5991717() != 0)
				{
					unk_0xD7DA134CB17A3ABD();
				}
				return;
			}
			iVar3 = unk_0xEE6F60A09902D357(iVar2, "optbs");
			if (unk_0xA2BC31158C8CEFD2(iVar3, 4) || unk_0xA2BC31158C8CEFD2(iVar3, 12))
			{
				if (unk_0xD15DDDE2D5991717() != 0)
				{
					unk_0xD7DA134CB17A3ABD();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_97();
		Global_794709.f_2 = 0;
		Global_794709.f_123068 = 0;
		func_96();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794709.f_123083[iVar4] = 0;
			Global_794709.f_123069[iVar4] = 0;
			iVar4++;
		}
		if (func_93())
		{
			func_92(1);
			func_92(0);
			func_90(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794709.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_111())
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_5 = unk_0x63AED635C9E3D07C(bParam0->f_7, 0);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_67 = func_89(bParam0->f_7);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_66 = unk_0x63AED635C9E3D07C(bParam0->f_7, Global_794709.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_6 = unk_0x0D61E1478B41ADF8(bParam0->f_7);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { func_88(iVar2) };
	if (unk_0x1D22B93425E4D657(iVar2, "optbs") == 2)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_76 = unk_0xEE6F60A09902D357(iVar2, "optbs");
	}
	unk_0x3B76114EC84D5812(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0x3B76114EC84D5812(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0x3B76114EC84D5812(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0x3B76114EC84D5812(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 29);
	unk_0x3B76114EC84D5812(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_59 = { func_87(iVar2, "cam") };
	Global_794709.f_4[bParam0->f_9 /*88*/].f_62 = { func_86(iVar2) };
	if (!func_111())
	{
		if (unk_0x62634429A483C408(unk_0x0D61E1478B41ADF8(bParam0->f_7)))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = unk_0x2303DF0D636F58DE(bParam0->f_7);
		}
		else
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0x1D22B93425E4D657(iVar2, "mgrk") == 2)
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_8 = unk_0xEE6F60A09902D357(iVar2, "mgrk");
	}
	if (unk_0x1D22B93425E4D657(iVar2, "mght") == 2)
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_9 = unk_0xEE6F60A09902D357(iVar2, "mght");
	}
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_11 = unk_0xEE6F60A09902D357(iVar2, "cncmbs");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = unk_0xEE6F60A09902D357(iVar2, "min");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = unk_0xEE6F60A09902D357(iVar2, "num");
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = func_85();
	}
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_22), unk_0x48F0D7F4F712BF06(bParam0->f_7), 64);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_65 = unk_0xEE6F60A09902D357(iVar2, "type");
	if (func_111())
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), func_84(), 64);
	}
	else
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), unk_0xCCF4429586AA66AA(bParam0->f_7), 64);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_70 = unk_0xEE6F60A09902D357(iVar2, "rank");
	Global_794709.f_107189[bParam0->f_9 /*13*/] = unk_0xEE6F60A09902D357(iVar2, "tnum");
	if (!func_111())
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_73 = func_83(unk_0x72DDA3F1835FB5C9(bParam0->f_7, 0), unk_0x183CB0AAE2BEC47A(bParam0->f_7, 0));
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_4 = unk_0x183CB0AAE2BEC47A(bParam0->f_7, 0);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = unk_0xEE6F60A09902D357(iVar2, "charcon");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_78 = unk_0xEE6F60A09902D357(iVar2, "ltm");
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/]), unk_0xC4380FF860A1D307(bParam0->f_7), 24);
	iVar93 = unk_0xA8C462EF7D9DC564(&(Global_794709.f_4[bParam0->f_9 /*88*/]));
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_3 = iVar93;
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_958841.f_684 < 85)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = Global_958841.f_684;
			Global_958841[Global_958841.f_684 /*3*/] = { func_87(iVar2, "area") };
			if (unk_0x1D22B93425E4D657(iVar2, "rad") == 2)
			{
				Global_958841.f_512[Global_958841.f_684] = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar2, "rad"));
			}
			else
			{
				Global_958841.f_512[Global_958841.f_684] = unk_0x42AD093E466CD516(iVar2, "rad");
			}
			Global_958841.f_256[Global_958841.f_684 /*3*/] = { Global_794709.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_958841.f_598[Global_958841.f_684] = iVar93;
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794709.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_958841.f_684++;
		}
	}
	else
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = unk_0xEE6F60A09902D357(iVar2, "subtype");
		Global_794709.f_4[bParam0->f_9 /*88*/].f_80 = unk_0xEE6F60A09902D357(iVar2, "adverm");
	}
	func_82(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_111())
	{
		if (unk_0x2553916E420E8EF0(unk_0xC4380FF860A1D307(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xA1E7A40E1F56E511(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_111())
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_1 = unk_0xA8C462EF7D9DC564(unk_0x7C4534D33FF7A510(bParam0->f_7));
	}
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_2 = func_81(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, 1);
	if (func_80(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_75 == 0)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = 1;
		}
	}
	bVar94 = func_79(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	iVar95 = func_78(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	if (iVar95 != -1)
	{
		Global_1694236[iVar95] = bParam0->f_9;
	}
	if ((Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !bVar94)
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794709.f_123069[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_77(bParam0->f_9))
			{
				Global_794709.f_123069[7]++;
			}
			else if (func_76(bParam0->f_9))
			{
				Global_794709.f_123069[4]++;
			}
			else if (func_75(bParam0->f_9))
			{
				Global_794709.f_123069[10]++;
			}
			else if (func_74(bParam0->f_9))
			{
				Global_794709.f_123069[12]++;
			}
		}
	}
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
	}
	if (!func_111())
	{
		if (bVar94)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = Global_794709.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794709.f_123068 < 5 && Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794709.f_107189[bParam0->f_9 /*13*/].f_10 = Global_794709.f_123068;
			StringCopy(&(Global_794709.f_123037[Global_794709.f_123068 /*6*/]), unk_0x7C4534D33FF7A510(bParam0->f_7), 24);
			Global_794709.f_123068++;
		}
		func_59(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_77), Global_794709.f_4[bParam0->f_9 /*88*/].f_80);
		func_55(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0x4094161273EB8DCA(bParam0->f_7))
			{
				unk_0xA1E7A40E1F56E511(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!bVar94)
		{
			if (func_33(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, Global_794709.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794709.f_123069[11]++;
			}
			if (unk_0x4094161273EB8DCA(bParam0->f_7))
			{
				unk_0xA1E7A40E1F56E511(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0xA2BC31158C8CEFD2(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794709.f_123069[9]++;
				}
				if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794709.f_123083[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794709.f_107189[bParam0->f_9 /*13*/].f_7 = unk_0xA8B77AE326A4999F(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !bVar94)
	{
		if (func_93())
		{
			func_31(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, unk_0xA2BC31158C8CEFD2(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_29(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_27(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, unk_0xA2BC31158C8CEFD2(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_959526[0 /*41*/]++;
	}
	bParam0->f_9++;
	Global_794709.f_2++;
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
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
		unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
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
		unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1384128)
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
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
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
	if (func_20(unk_0x7C7787D2D7139A85()) < iParam4)
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
	while (iVar0 < 33)
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
		
		case 53:
			return joaat("hao");
		
		case 34:
			return 1526580161;
		
		case 152:
			return joaat("lazlow");
		
		case 85:
			return joaat("merryweather");
		
		case 84:
			return 1085494823;
		
		case 0:
			return joaat("MICHAEL");
		
		case 1:
			return joaat("FRANKLIN");
		
		case 153:
			return 1548197805;
		
		case 151:
			return 1252576609;
		
		case 14:
			return joaat("JIMMY");
		
		case 15:
			return joaat("tracey");
		
		case 24:
			return joaat("wade");
		
		case 30:
			return joaat("dave");
		
		case 46:
			return 1528098484;
		
		case 47:
			return joaat("chef");
		
		case 54:
			return joaat("hunter");
		
		case 51:
			return joaat("cris");
		
		case 60:
			return joaat("marnie");
		
		case 62:
			return joaat("maude");
		
		case 66:
			return 1028278171;
		
		case 69:
			return -1120398581;
		
		case 154:
			return joaat("paige");
		
		case 82:
			return -867869163;
		
		case 157:
			return -979045660;
		
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
		
		case 9:
			return 53;
		
		case 10:
			return 34;
		
		case 11:
			return 152;
		
		case 12:
			return 85;
		
		case 13:
			return 84;
		
		case 14:
			return 0;
		
		case 15:
			return 1;
		
		case 16:
			return 153;
		
		case 17:
			return 151;
		
		case 18:
			return 14;
		
		case 19:
			return 15;
		
		case 20:
			return 24;
		
		case 21:
			return 30;
		
		case 22:
			return 46;
		
		case 23:
			return 47;
		
		case 24:
			return 54;
		
		case 25:
			return 51;
		
		case 26:
			return 60;
		
		case 27:
			return 62;
		
		case 28:
			return 66;
		
		case 29:
			return 69;
		
		case 30:
			return 154;
		
		case 31:
			return 82;
		
		case 32:
			return 157;
		
		default:
	}
	return 19;
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = func_23(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_21(iVar0, 1);
}

int func_21(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_22(iParam0, 0);
}

int func_22(int iParam0, int iParam1)
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
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
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

int func_23(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return Global_1384279[func_25(-1)];
			}
			else if (func_24(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_25(-1)];
	}
	return 0;
}

int func_24(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312745;
}

void func_27(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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
	iVar1 = func_28(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

int func_28(int iParam0)
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

void func_29(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_93())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0x7C7787D2D7139A85()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_30(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_8(iVar0, 1);
	}
}

int func_30(int iParam0, int iParam1, bool bParam2)
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

void func_31(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_93())
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
			if (func_20(unk_0x7C7787D2D7139A85()) < iParam3)
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
	iVar0 = func_32(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_8(iVar0, 1);
}

int func_32(int iParam0, int iParam1, bool bParam2)
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

int func_33(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_54(iParam0) || func_53(iParam0)) || func_52(iParam0)) || func_51(iParam0, 1)) || func_50(iParam0)) || func_49(iParam0)) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || func_44(iParam0)) || func_43(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam1)) || func_34(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0)
{
	return iParam0 == 65;
}

bool func_35(int iParam0)
{
	return iParam0 == 57;
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
		if (iParam0 == Global_262145.f_9221[iVar0])
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
		if (iParam0 == Global_262145.f_9254[iVar0])
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
		if (iParam0 == Global_262145.f_9243[iVar0])
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
		if (iParam0 == Global_262145.f_9232[iVar0])
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
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9208[iVar0])
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
		if (iParam0 == Global_262145.f_9197[iVar0])
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
		if (iParam0 == Global_262145.f_9186[iVar0])
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
		if (iParam0 == Global_262145.f_9175[iVar0])
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
		if (iParam0 == Global_262145.f_9078[iVar0])
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
		if (iParam0 == Global_262145.f_9100[iVar0])
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
		if (iParam0 == Global_262145.f_9089[iVar0])
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9067[iVar0])
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
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9056[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9045[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9011[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_52(int iParam0)
{
	if ((((iParam0 == Global_262145.f_9006 || iParam0 == Global_262145.f_9007) || iParam0 == Global_262145.f_9008) || iParam0 == Global_262145.f_9009) || iParam0 == Global_262145.f_9010)
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((((iParam0 == Global_262145.f_9001 || iParam0 == Global_262145.f_9002) || iParam0 == Global_262145.f_9003) || iParam0 == Global_262145.f_9004) || iParam0 == Global_262145.f_9005)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_8994 || iParam0 == Global_262145.f_8995) || iParam0 == Global_262145.f_8996) || iParam0 == Global_262145.f_8997) || iParam0 == Global_262145.f_8998) || iParam0 == Global_262145.f_8999) || iParam0 == Global_262145.f_9000)
	{
		return 1;
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= 1200)
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
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			Global_794709.f_123024[0 /*11*/][iVar0] = iParam1;
			Global_794709.f_4[iParam1 /*88*/].f_56 = { func_58(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_59 = { func_57(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_62 = { func_56(0, iVar0) };
			Global_794709.f_107189[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794709.f_123024[0 /*11*/].f_9 <= iVar0)
			{
				Global_794709.f_123024[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_9036[iVar0])
		{
			Global_794709.f_107189[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_56(int iParam0, int iParam1)
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

Vector3 func_57(int iParam0, int iParam1)
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

Vector3 func_58(int iParam0, int iParam1)
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

void func_59(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_54(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam1, 15);
	}
	else if (func_53(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam1, 18);
	}
	else if (func_52(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam1, 19);
	}
	else if (func_50(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam1, 29);
	}
	else if (func_51(iParam0, 1))
	{
		unk_0xA1E7A40E1F56E511(uParam1, 28);
	}
	else if (func_49(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 0);
	}
	else if (func_48(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 1);
	}
	else if (func_47(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 2);
	}
	else if (func_46(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 3);
	}
	else if (func_45(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 4);
	}
	else if (func_44(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 5);
	}
	else if (func_43(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 6);
	}
	else if (func_42(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 7);
	}
	else if (func_41(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 8);
	}
	else if (func_40(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 9);
	}
	else if (func_36(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 10);
	}
	else if (func_39(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 11);
	}
	else if (func_38(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 12);
	}
	else if (func_73(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 13);
	}
	else if (func_37(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 14);
	}
	else if (func_72(iParam0))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 22);
	}
	else if (func_71(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 16);
	}
	else if (func_70(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 17);
	}
	else if (func_69(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 20);
	}
	else if (func_68(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 21);
	}
	else if (func_72(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 22);
	}
	else if (func_67(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 23);
	}
	else if (func_66(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 24);
	}
	else if (func_65(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 25);
	}
	else if (func_64(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 26);
	}
	else if (func_63(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 27);
	}
	else if (func_62(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 28);
	}
	else if (func_61(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 29);
	}
	else if (func_60(iParam3))
	{
		unk_0xA1E7A40E1F56E511(uParam2, 30);
	}
}

bool func_60(int iParam0)
{
	return iParam0 == 17;
}

bool func_61(int iParam0)
{
	return iParam0 == 16;
}

bool func_62(int iParam0)
{
	return iParam0 == 15;
}

bool func_63(int iParam0)
{
	return iParam0 == 14;
}

bool func_64(int iParam0)
{
	return iParam0 == 13;
}

bool func_65(int iParam0)
{
	return iParam0 == 12;
}

bool func_66(int iParam0)
{
	return iParam0 == 11;
}

bool func_67(int iParam0)
{
	return iParam0 == 9;
}

bool func_68(int iParam0)
{
	return (iParam0 == 1 || iParam0 == 67);
}

bool func_69(int iParam0)
{
	return iParam0 == 6;
}

bool func_70(int iParam0)
{
	return iParam0 == 4;
}

bool func_71(int iParam0)
{
	return iParam0 == 2;
}

bool func_72(int iParam0)
{
	return iParam0 == 8;
}

bool func_73(int iParam0)
{
	return iParam0 == 3;
}

bool func_74(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_794709.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_75(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_794709.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_76(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_794709.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_77(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_794709.f_4[iParam0 /*88*/].f_76, 7);
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1 /*51*/][iVar0])
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

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (Global_262145.f_6446[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1 /*51*/][iVar0])
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

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (((Global_262145.f_6446[iVar1] == 202 || Global_262145.f_6446[iVar1] == 203) || Global_262145.f_6446[iVar1] == 204) || (iParam1 && ((((((((Global_262145.f_6446[iVar1] == 224 || Global_262145.f_6446[iVar1] == 223) || Global_262145.f_6446[iVar1] == 232) || Global_262145.f_6446[iVar1] == 245) || Global_262145.f_6446[iVar1] == 246) || Global_262145.f_6446[iVar1] == 251) || Global_262145.f_6446[iVar1] == 252) || Global_262145.f_6446[iVar1] == 253) || Global_262145.f_6446[iVar1] == 161)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5922[iVar1])
				{
					if (iParam0 == Global_262145.f_5032[iVar1 /*51*/][iVar0])
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

void func_82(int iParam0, var uParam1, var uParam2)
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

int func_83(float fParam0, int iParam1)
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

char* func_84()
{
	return unk_0xD54FB72F71EFE6C4("CREATOR_RSC");
}

int func_85()
{
	if (Global_2456316)
	{
		return 32;
	}
	return (32 - Global_2456317);
}

Vector3 func_86(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x1D22B93425E4D657(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x42AD093E466CD516(iParam0, "camp");
	}
	else if (unk_0x1D22B93425E4D657(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iParam0, "camp"));
	}
	if (unk_0x1D22B93425E4D657(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x42AD093E466CD516(iParam0, "camh");
	}
	else if (unk_0x1D22B93425E4D657(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_87(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x1D22B93425E4D657(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x158A0F7CCA751FFB(iParam0, sParam1) };
	}
	else if (unk_0x1D22B93425E4D657(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x7408DCBD37A2C60F(iParam0, sParam1);
		if (unk_0x1D22B93425E4D657(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x42AD093E466CD516(iVar3, "x");
		}
		if (unk_0x1D22B93425E4D657(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x42AD093E466CD516(iVar3, "y");
		}
		if (unk_0x1D22B93425E4D657(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x42AD093E466CD516(iVar3, "z");
		}
	}
	return Var0;
}

Vector3 func_88(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	Var0 = { func_87(iParam0, "start") };
	if (unk_0xD36AE666DF05C607(Var0, -2233.327f, 2436.134f, -14.65155f, -2229.56f, 2399.576f, 11.99761f, 24f, 0, 1))
	{
		Var0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (unk_0xD36AE666DF05C607(Var0, 603.6218f, 5573.046f, 694.484f, 594.2379f, 5542.792f, 727.479f, 33.5f, 0, 1))
	{
		Var0 = { 502.6f, 5537.06f, 777.05f };
	}
	return Var0;
}

int func_89(int iParam0)
{
	if (unk_0x5802E983D501E72A(iParam0))
	{
		return 2;
	}
	else if (unk_0xE719196CF691C499(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_90(int iParam0)
{
	func_91(joaat("mpply_big_feed_init"), iParam0);
}

void func_91(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0EC7EA43028EE330(iVar0, uParam1, 1);
	}
}

void func_92(bool bParam0)
{
	if (!func_93())
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

int func_93()
{
	if (func_95() && func_94(0))
	{
		return 1;
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_95()
{
	return func_94(func_26() + 1);
}

void func_96()
{
	int iVar0;
	
	Global_958841.f_684 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_958841[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_958841.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_958841.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_97()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794709.f_123024[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794709.f_123024[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_98(char* sParam0)
{
	if ((((((((((((((((unk_0x2553916E420E8EF0(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x2553916E420E8EF0(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x2553916E420E8EF0(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x2553916E420E8EF0(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x2553916E420E8EF0(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x2553916E420E8EF0(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x2553916E420E8EF0(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x2553916E420E8EF0(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x2553916E420E8EF0(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x2553916E420E8EF0(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x2553916E420E8EF0(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x2553916E420E8EF0(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x2553916E420E8EF0(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x2553916E420E8EF0(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x2553916E420E8EF0(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x2553916E420E8EF0(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x2553916E420E8EF0(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_99(int iParam0)
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

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3768 == 1)
	{
		return 0;
	}
	if (Global_786550 == 0)
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
		while (iVar1 < Global_786550)
		{
			if (iVar1 < 35)
			{
				if (iVar67 == 0)
				{
					if (Global_786550.f_3082[iVar1 /*13*/].f_1 == unk_0xA8C462EF7D9DC564(&(Global_2394898[iVar0 /*6*/])))
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
		Global_794709.f_4[(1200 + iVar0) /*88*/] = { Global_786550.f_1[iVar2[iVar0] /*88*/] };
		Global_794709.f_107189[(1200 + iVar0) /*13*/] = { Global_786550.f_3082[iVar2[iVar0] /*13*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1663058.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786550.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_101(1);
	return 1;
}

void func_101(int iParam0)
{
	Global_1663058.f_1784 = iParam0;
}

void func_102(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_103()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1200;
	while (iVar88 <= 1217)
	{
		Global_794709.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_104()
{
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
	}
}

void func_105()
{
	if (func_111())
	{
		unk_0xE69D360363A77B7E();
	}
	else
	{
		unk_0x4F5DD274AC9DE9E3();
	}
}

bool func_106()
{
	return Global_2457255.f_4;
}

int func_107()
{
	if (unk_0x3AD58850FCB85E22())
	{
		return 1;
	}
	else if (unk_0x6F6334468240A066())
	{
		return 1;
	}
	else if (unk_0x1C5454FD8046C706())
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (!func_109())
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (func_110())
	{
		return 0;
	}
	if (unk_0x56BDC2B0945F6D74() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_110()
{
	return Global_2459500;
}

bool func_111()
{
	return Global_1573282.f_4;
}

bool func_112()
{
	return Global_2394836.f_2;
}

int func_113(bool bParam0, char* sParam1, char* sParam2, int iParam3)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_107())
			{
				return 0;
			}
			func_105();
			func_104();
			if (func_111())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0xFC6F880F4838E8FB(0);
			}
			func_102(bParam0, 1);
			break;
		
		case 1:
			if (unk_0xC80C06D9894C9443(sParam1, func_99(0)))
			{
				func_102(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x3C0079F135337EF1())
			{
				bParam0->f_41 = unk_0x15C7D7C931FD7D2D();
				if (unk_0x6FF9105EB2BC9A5E())
				{
				}
				else
				{
					func_343(bParam0, 1, 1);
					bParam0->f_41 = unk_0x15C7D7C931FD7D2D();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x411B3B3EB88220D3() > 0)
				{
					if (unk_0x1CEEDAD2579308CA(0))
					{
						func_114(sParam2, 0, iParam3);
						func_343(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_343(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_114(char* sParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(iVar0, "mission");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "gen");
	StringCopy(sParam0, unk_0xC4380FF860A1D307(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0xCCF4429586AA66AA(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x48F0D7F4F712BF06(iParam1), 64);
	sParam0->f_56 = { func_88(iVar2) };
	sParam0->f_59 = { func_87(iVar2, "cam") };
	sParam0->f_62 = { func_86(iVar2) };
	sParam0->f_65 = unk_0xEE6F60A09902D357(iVar2, "type");
	sParam0->f_68 = unk_0xEE6F60A09902D357(iVar2, "subtype");
	sParam0->f_80 = unk_0xEE6F60A09902D357(iVar2, "adverm");
	sParam0->f_79 = unk_0xEE6F60A09902D357(iVar2, "testcomplete");
	sParam0->f_69 = unk_0xEE6F60A09902D357(iVar2, "min");
	sParam0->f_70 = unk_0xEE6F60A09902D357(iVar2, "rank");
	sParam0->f_71 = unk_0xEE6F60A09902D357(iVar2, "num");
	sParam0->f_73 = func_83(unk_0x72DDA3F1835FB5C9(iParam1, 0), unk_0x183CB0AAE2BEC47A(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0xEE6F60A09902D357(iVar2, "charcon");
	*uParam2 = unk_0xA8C462EF7D9DC564(unk_0x7C4534D33FF7A510(0));
	if (func_116(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_115() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4578)
		{
			sParam0->f_71 = Global_262145.f_4578;
		}
		if (sParam0->f_69 > Global_262145.f_4578)
		{
			sParam0->f_69 = Global_262145.f_4578;
		}
	}
	if (!func_111())
	{
		iVar3 = unk_0x0D61E1478B41ADF8(iParam1);
		if (unk_0x62634429A483C408(iVar3))
		{
			sParam0->f_54 = unk_0x2303DF0D636F58DE(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x1D22B93425E4D657(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0xEE6F60A09902D357(iVar2, "ltm");
	}
	unk_0xA1E7A40E1F56E511(&(sParam0->f_76), 13);
	func_104();
}

int func_115()
{
	return Global_30736;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_9027[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117()
{
	return Global_2394836.f_1;
}

void func_118()
{
	Global_2457255.f_8 = 0;
	Global_2457255.f_7 = 0;
}

int func_119(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xA1E7A40E1F56E511(uParam2, 3);
		if (!unk_0xA2BC31158C8CEFD2(*uParam2, 2))
		{
		}
		unk_0xA1E7A40E1F56E511(uParam2, 2);
		return 1;
	}
	if ((func_339() && func_338()) || func_337())
	{
		if (!unk_0xA2BC31158C8CEFD2(*uParam2, 2))
		{
		}
		unk_0xA1E7A40E1F56E511(uParam2, 2);
		unk_0xA1E7A40E1F56E511(uParam2, 1);
		unk_0xA1E7A40E1F56E511(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xA2BC31158C8CEFD2(*uParam2, 3))
		{
			unk_0xA1E7A40E1F56E511(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_336())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_335())
		{
			if (unk_0xA2BC31158C8CEFD2(*uParam2, 2))
			{
				unk_0xA1E7A40E1F56E511(uParam2, 3);
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
		if (func_106())
		{
			return 0;
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(*uParam2, 2))
	{
		if (!unk_0xA2BC31158C8CEFD2(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_298(1, 1, bParam11, 1);
			}
			unk_0xA1E7A40E1F56E511(uParam2, 1);
			func_343(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_137(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_136() || Global_4456448 == 31) || Global_4456448 == 6) || Global_4456448 == 4)
			{
				if (func_135(Global_4456448.f_154360))
				{
					Global_4456448.f_79 = { func_134() };
				}
				if (func_133(Global_4456448.f_154360))
				{
					Global_4456448.f_79 = { func_132() };
				}
				if (Global_4456448.f_42 < 1)
				{
					Global_4456448.f_42 = 1;
				}
				if (Global_4456448.f_41 < 1)
				{
					Global_4456448.f_41 = 1;
				}
				if (!func_131())
				{
					func_130();
				}
			}
			else if (Global_4456448 == 1)
			{
				Global_1384354.f_4 = 99;
				Global_1384354.f_6 = Global_4456448.f_64;
				Global_1384354.f_7 = Global_4456448.f_88011;
				Global_1384354.f_9 = Global_4456448.f_60684;
				Global_1384354.f_11 = Global_4456448.f_65;
				Global_1384354.f_12 = Global_4456448.f_67;
				Global_1384354.f_13 = Global_4456448.f_69;
				Global_1384354.f_14 = Global_4456448.f_68;
				Global_1384354.f_16 = Global_4456448.f_39;
				Global_1384354.f_5 = Global_4456448.f_62;
				Global_1384354.f_10 = Global_4456448.f_75;
			}
			else if (func_129())
			{
				Global_4194340.f_7 = 9901;
				Global_4194340.f_8 = Global_4456448.f_58153 + 1;
				if (func_128(Global_4456448.f_48314))
				{
					Global_4456448.f_48314 = { Global_4456448.f_79 };
				}
			}
			unk_0xA1E7A40E1F56E511(uParam2, 2);
			unk_0x3B76114EC84D5812(uParam2, 1);
			unk_0xA1E7A40E1F56E511(uParam2, 3);
			if (*uParam0)
			{
				func_127();
				func_126();
				if (func_125())
				{
					func_122(Global_4456448.f_37);
				}
				Global_4456448.f_156040 = 1;
			}
			else
			{
				func_341();
			}
			if (!func_121())
			{
				func_120();
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
		unk_0xA1E7A40E1F56E511(uParam2, 3);
		if (Global_4456448.f_156040)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_120()
{
	Global_2448961.f_39.f_57 = 1;
}

int func_121()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!unk_0x9591DE0F00127F2A(&(Global_4456448.f_154678[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_122(int iParam0)
{
	if (!func_124())
	{
		unk_0xD371D9697C8E52A2(2);
		unk_0x1365EAEF05125EC7(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x7CC66DBB71B48687((iParam0 / 2));
		func_123();
	}
}

void func_123()
{
	unk_0xA1E7A40E1F56E511(&(Global_2448961.f_2), 3);
}

bool func_124()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 3);
}

bool func_125()
{
	return unk_0xA2BC31158C8CEFD2(Global_2449755.f_1.f_2809, 8);
}

void func_126()
{
	unk_0xA1E7A40E1F56E511(&Global_2448961, 4);
}

void func_127()
{
	unk_0xA1E7A40E1F56E511(&Global_2448961, 28);
}

int func_128(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (Global_4456448 == 2 || Global_4456448 == 8)
	{
		return 1;
	}
	return 0;
}

void func_130()
{
	Global_1654084.f_5 = 0;
	Global_1654084.f_11 = -1;
}

int func_131()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_42)
	{
		iVar1 = 0;
		while (iVar1 < Global_4456448.f_42)
		{
			if (Global_4456448.f_49[iVar0] != Global_4456448.f_49[iVar1])
			{
				return 0;
			}
			else if (Global_4456448.f_44[iVar0] != Global_4456448.f_44[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_132()
{
	return 2713.297f, -369.5003f, -55.7809f;
}

int func_133(int iParam0)
{
	if ((Global_262145.f_5798[0] == iParam0 || Global_262145.f_5798[6] == iParam0) || Global_262145.f_5798[13] == iParam0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_134()
{
	return 349.7179f, 4870.692f, -61.4014f;
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_136()
{
	if ((((((Global_4456448 == 0 || Global_4456448 == 4) || Global_4456448 == 6) || Global_4456448 == 3) || Global_4456448 == 31) || Global_4456448.f_2 == 6) || Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_137(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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
		if (func_106() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_111() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_108())
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
			uParam0->f_24 = func_297(1);
			uParam0->f_25 = func_295(1);
			if (func_107())
			{
				return 0;
			}
			func_105();
			func_104();
			if (func_111() || bParam9)
			{
				unk_0xFC6F880F4838E8FB(1);
			}
			else
			{
				unk_0xFC6F880F4838E8FB(0);
			}
			func_293();
			if (bParam4)
			{
				func_102(uParam0, 11);
			}
			else
			{
				func_102(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_111() || bParam9)
			{
				if (unk_0x755422B19A2F9974(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_4456448.f_156052 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_4456448.f_154647), sParam1, 24);
						}
						func_179(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_102(uParam0, 9);
						*uParam0 = 1;
						func_118();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_961130.f_42), sParam1, 24);
							Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_961130.f_12 };
							func_178(&iVar1, &uVar0, &Global_961130);
							if (Global_961130.f_65 == 0)
							{
								func_343(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_104();
								func_118();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_959568.f_42), sParam1, 24);
							Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_959568.f_12 };
							func_178(&iVar1, &uVar0, &Global_959568);
							uParam0->f_8 = 0;
							if (Global_959568.f_65 == 0)
							{
								func_343(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_104();
								func_118();
								return 1;
							}
						}
						func_104();
						unk_0xE69D360363A77B7E();
						unk_0xFC6F880F4838E8FB(1);
						func_177(uParam0);
						func_102(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_118();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_118();
					func_104();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_99(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x6AAE898D7E5E8DA1(uParam0->f_5);
				func_102(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x567E66A00CCBFBC5(sParam1, 1, func_99(iParam2)))
				{
					func_102(uParam0, 3);
				}
			}
			else if (unk_0xC80C06D9894C9443(sParam1, func_99(iParam2)))
			{
				func_102(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x3C0079F135337EF1())
			{
				uParam0->f_41 = unk_0x15C7D7C931FD7D2D();
				if (unk_0x6FF9105EB2BC9A5E())
				{
				}
				else
				{
					func_343(uParam0, 1, 1);
					uParam0->f_41 = unk_0x15C7D7C931FD7D2D();
					*uParam0 = 0;
					func_118();
					return 1;
				}
				if (unk_0x411B3B3EB88220D3() > 0)
				{
					if (!bParam12 && !func_175(uParam0->f_24, uParam0->f_25, unk_0xCCF4429586AA66AA(0), unk_0x751561EC4BF6CC71(0)))
					{
						func_343(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_118();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0x6AAE898D7E5E8DA1(uParam0->f_5);
						func_102(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x1CEEDAD2579308CA(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_961130.f_12), unk_0x48F0D7F4F712BF06(0), 64);
								StringCopy(&(Global_961130.f_36), unk_0xC4380FF860A1D307(0), 24);
								Global_961130.f_71 = unk_0x751561EC4BF6CC71(0);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_961130.f_12 };
								func_178(&iVar1, &uVar0, &Global_961130);
								if (Global_961130.f_65 == 0)
								{
									func_343(uParam0, 1, 1);
									*uParam0 = 0;
									uParam0->f_28 = 1;
									func_104();
									func_118();
									return 1;
								}
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_959568.f_12), unk_0x48F0D7F4F712BF06(0), 64);
								StringCopy(&(Global_959568.f_36), unk_0xC4380FF860A1D307(0), 24);
								Global_959568.f_71 = unk_0x751561EC4BF6CC71(0);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_959568.f_12 };
								func_178(&iVar1, &uVar0, &Global_959568);
								uParam0->f_8 = 0;
							}
							func_104();
							func_102(uParam0, 10);
						}
						else
						{
							func_343(uParam0, 1, 1);
							*uParam0 = 0;
							func_118();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x1CEEDAD2579308CA(0))
						{
							if (uParam0->f_16)
							{
								func_173(&iVar1, &uVar0, &Global_961130, iParam6);
								if (iParam6 == 1)
								{
									func_343(uParam0, 1, 1);
									*uParam0 = 1;
									func_118();
									return 1;
								}
								StringCopy(&(Global_961130.f_12), unk_0x48F0D7F4F712BF06(0), 64);
								StringCopy(&(Global_961130.f_36), unk_0xC4380FF860A1D307(0), 24);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_961130.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_173(&iVar1, &uVar0, &Global_959568, iParam6);
								if (iParam6 == 1)
								{
									func_343(uParam0, 1, 1);
									*uParam0 = 1;
									func_118();
									return 1;
								}
								StringCopy(&(Global_959568.f_12), unk_0x48F0D7F4F712BF06(0), 64);
								StringCopy(&(Global_959568.f_36), unk_0xC4380FF860A1D307(0), 24);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_19 = { Global_959568.f_12 };
								uParam0->f_8 = 0;
							}
							func_104();
							func_102(uParam0, 10);
						}
						else
						{
							func_343(uParam0, 1, 1);
							*uParam0 = 0;
							func_118();
							return 1;
						}
					}
				}
				else
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					func_118();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xE3DF2067B15F83CD(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xA8E0AD0360E6D52A();
				}
				if (unk_0x7662778681599A2E(uParam0->f_5))
				{
					func_102(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_102(uParam0, 0);
					return 0;
				}
				else
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					func_118();
					return 1;
				}
			}
			else if (func_172() || func_171() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xDE4C1DB310BFBE72("FMMC_DOWNLOAD");
					unk_0xDB3C29DBB0572E83(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_170()) && !bParam14)
			{
				return 0;
			}
			if (unk_0xB6224AF86F14C6E8(uParam0->f_5))
			{
				if (unk_0x9C0BE0D56F7EF181(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_298(1, 1, bParam11, 1);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_4456448.f_156052 = 1;
							Global_4456448.f_156036 = 1;
							StringCopy(&(Global_4456448.f_154336), "", 64);
							StringCopy(&(Global_4456448.f_154383), "", 24);
							StringCopy(&(Global_4456448.f_154361), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_154647), sParam1, 24);
							}
							uParam0->f_35 = uParam0->f_22;
						}
						else
						{
							Global_4456448.f_154360 = unk_0xA8C462EF7D9DC564(unk_0x7C4534D33FF7A510(0));
							StringCopy(&(Global_4456448.f_154383), unk_0xCCF4429586AA66AA(0), 24);
							Global_4456448.f_156052 = unk_0x751561EC4BF6CC71(0);
							if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
							{
								StringCopy(&(Global_4456448.f_154361), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_4456448.f_154361), unk_0xCCF4429586AA66AA(0), 24);
							}
							if ((Global_4456448.f_156052 == 0 || Global_4456448.f_156052 == 3) && unk_0x6FF5365F54FB81B5(0))
							{
								StringCopy(&(Global_4456448.f_154336), unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), 64);
							}
							else if ((unk_0x77BA37DB22C66465() && (Global_4456448.f_156052 == 0 || Global_4456448.f_156052 == 3)) && func_169(&iVar33, &(Global_4456448.f_154383)))
							{
								StringCopy(&(Global_4456448.f_154336), unk_0xA09A99AC02B24954(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_4456448.f_154336), unk_0xB637C4F4A90F0788(0), 64);
							}
							Global_4456448.f_154654 = unk_0x183CB0AAE2BEC47A(0, 0);
							Global_4456448.f_156038 = unk_0xE353BE8D8A034414(0);
							uParam0->f_23 = func_89(0);
							Global_4456448.f_185377 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_154647), unk_0xC4380FF860A1D307(0), 24);
							}
							if (Global_4456448.f_156052 == 0 || Global_4456448.f_156052 == 3)
							{
								if ((unk_0x0BC8740CB4ABF20D(0, &uVar4) && unk_0x5D17AB84230A234B(&uVar4, 13)) && unk_0xB8A6A83E8C303720(&uVar4))
								{
									Var17 = { Global_4456448.f_154336 };
									func_168(1, Var17);
								}
								else
								{
									func_168(0, Var17);
								}
							}
							else
							{
								func_168(0, Var17);
							}
							Global_4456448.f_8 = func_83(unk_0x72DDA3F1835FB5C9(0, 0), unk_0x183CB0AAE2BEC47A(0, 0));
							if (unk_0x4094161273EB8DCA(uParam0->f_7))
							{
								Global_4456448.f_156037 = unk_0xA8B77AE326A4999F(0);
								Global_4456448.f_156039 = 1;
							}
							else
							{
								Global_4456448.f_156037 = 0;
								Global_4456448.f_156039 = 0;
							}
							Global_4456448.f_156036 = unk_0xA348051FA13AB9B4(0);
							uParam0->f_35 = unk_0x0D61E1478B41ADF8(0);
							if (!func_111())
							{
								if (unk_0x62634429A483C408(uParam0->f_35))
								{
									uParam0->f_31 = unk_0x2303DF0D636F58DE(0);
								}
								else
								{
									uParam0->f_31 = -1;
								}
							}
							Global_4456448.f_154653 = uParam0->f_31;
							Global_2449755.f_4305.f_3 = unk_0xA838AE5F2D40F922(0, 0);
							Global_2449755.f_4305.f_2 = unk_0x465E89E288B5679E(0, 0);
							if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
							{
								StringCopy(&(Global_4456448.f_154336), func_84(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_4456448.f_154647), sParam1, 24);
						}
						uParam0->f_32 = 0;
						if (!func_111())
						{
							func_179(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
							if (func_135(Global_4456448.f_154360))
							{
								Global_4456448.f_79 = { func_134() };
							}
							if (func_133(Global_4456448.f_154360))
							{
								Global_4456448.f_79 = { func_132() };
							}
							if (Global_4456448.f_156052 == 0 && (func_166() || func_164()))
							{
								func_343(uParam0, 1, 1);
								uParam0->f_42.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								func_118();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								func_102(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_179(-1, bParam11, 0, 0);
						}
						if (func_160(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xD15DDDE2D5991717();
						iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "mission");
						iVar3 = unk_0x7408DCBD37A2C60F(iVar2, "gen");
						StringCopy(&(Global_2437549.f_3741), unk_0x48F0D7F4F712BF06(0), 32);
						Global_2437549.f_3741.f_8 = unk_0xEE6F60A09902D357(iVar3, "type");
						uParam0->f_17 = unk_0x4094161273EB8DCA(0);
						*uParam0 = 1;
						func_118();
						unk_0xDDE6D4D19EF3CF38(uParam0->f_5);
						func_104();
						return 1;
					}
					unk_0xDDE6D4D19EF3CF38(uParam0->f_5);
					func_104();
				}
				else if (iParam2 == 0)
				{
					func_343(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_118();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_343(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_118();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_179(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
			if (uParam0->f_32 >= 6)
			{
				if (func_160(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_32++;
			break;
		
		case 9:
			if (func_158(uParam0, 0, bParam3, 0))
			{
				func_102(uParam0, 0);
				func_104();
				if ((((func_152(Global_4456448.f_154360) && func_136()) && !bParam9) && !unk_0x9591DE0F00127F2A(&(Global_4456448.f_154678[0 /*6*/]))) && (func_172() || (func_147() && !func_146())))
				{
					uParam0->f_8 = 0;
					func_102(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_89(0);
						uParam0->f_21 = unk_0x63AED635C9E3D07C(0, uParam0->f_23);
					}
					func_145(&(uParam0->f_42), 0);
					func_102(uParam0, 18);
				}
				else
				{
					uParam0->f_42.f_3 = 1;
					func_343(uParam0, 1, 0);
					func_118();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x567E66A00CCBFBC5(&(Global_4456448.f_154678[0 /*6*/]), 1, func_99(iParam2)))
			{
				func_102(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x3C0079F135337EF1())
			{
				uParam0->f_41 = unk_0x15C7D7C931FD7D2D();
				if (unk_0x6FF9105EB2BC9A5E())
				{
				}
				else
				{
					func_343(uParam0, 1, 1);
					uParam0->f_41 = unk_0x15C7D7C931FD7D2D();
					*uParam0 = 0;
					func_118();
					return 1;
				}
				if (unk_0x411B3B3EB88220D3() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0x6AAE898D7E5E8DA1(uParam0->f_5);
					func_102(uParam0, 22);
				}
				else
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					func_118();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xE3DF2067B15F83CD(uParam0->f_5))
			{
				if (unk_0x7662778681599A2E(uParam0->f_5))
				{
					func_102(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_102(uParam0, 0);
					return 0;
				}
				else
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					func_118();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xB6224AF86F14C6E8(uParam0->f_5))
			{
				if (unk_0x9C0BE0D56F7EF181(uParam0->f_5))
				{
					func_142();
					func_343(uParam0, 1, 0);
					Global_1651902 = 1;
					func_118();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_343(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_118();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_7, 0))
			{
				if (bParam7)
				{
					if (func_141(&(uParam0->f_42), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_343(uParam0, 1, 0);
						uParam0->f_42.f_3 = 1;
						uParam0->f_42.f_1 = 0;
						func_118();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_42.f_4), sParam1, 64);
					uParam0->f_42.f_3 = 1;
					func_343(uParam0, 1, 0);
					func_118();
					return 1;
				}
			}
			else
			{
				uParam0->f_42.f_3 = 1;
				func_343(uParam0, 1, 1);
				func_118();
				return 1;
			}
			break;
		
		case 10:
			if (func_158(uParam0, 0, bParam3, iParam2))
			{
				func_104();
				func_102(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x52BA51BB7CA5EBCA(&(Global_961130.f_1177), Global_961130.f_65, func_99(0)))
				{
					func_102(uParam0, 12);
				}
			}
			else if (unk_0x52BA51BB7CA5EBCA(&(Global_959568.f_1177), Global_959568.f_65, func_99(0)))
			{
				func_102(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x3C0079F135337EF1())
			{
				if (unk_0x6FF9105EB2BC9A5E())
				{
				}
				else
				{
					func_343(uParam0, 1, 1);
					uParam0->f_41 = unk_0x15C7D7C931FD7D2D();
					*uParam0 = 0;
					func_118();
					return 1;
				}
				if (unk_0x411B3B3EB88220D3() > 0)
				{
					if (uParam0->f_16)
					{
						Global_961130.f_65 = unk_0x411B3B3EB88220D3();
					}
					else
					{
						Global_959568.f_65 = unk_0x411B3B3EB88220D3();
					}
					uParam0->f_8 = 0;
					func_343(uParam0, 0, bParam8);
					func_177(uParam0);
					func_102(uParam0, 13);
				}
				else
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					func_118();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_111())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_961130.f_65 - 1))
					{
						if (unk_0x755422B19A2F9974(&(Global_961130.f_1177[uParam0->f_9 /*6*/])))
						{
							func_140(uParam0, &Global_961130);
							unk_0xE69D360363A77B7E();
						}
						uParam0->f_9++;
					}
					func_118();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_959568.f_65 - 1))
					{
						if (unk_0x755422B19A2F9974(&(Global_959568.f_1177[uParam0->f_9 /*6*/])))
						{
							func_140(uParam0, &Global_959568);
							unk_0xE69D360363A77B7E();
						}
						uParam0->f_9++;
					}
					func_118();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_139(uParam0, &Global_961130))
				{
					func_138(uParam0, &Global_961130);
					if (uParam0->f_27)
					{
						func_343(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						uParam0->f_30 = 0;
						func_118();
						return 1;
					}
					else if (uParam0->f_30 == 1)
					{
						func_343(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 0;
						func_118();
						uParam0->f_30 = 1;
						return 1;
					}
					else
					{
						func_102(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_139(uParam0, &Global_959568))
			{
				func_138(uParam0, &Global_959568);
				if (uParam0->f_27)
				{
					func_343(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					uParam0->f_30 = 0;
					func_118();
					return 1;
				}
				else if (uParam0->f_30 == 1)
				{
					func_343(uParam0, 1, bParam8);
					*uParam0 = 0;
					uParam0->f_27 = 0;
					uParam0->f_30 = 1;
					func_118();
					return 1;
				}
				else
				{
					func_102(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_102(uParam0, 0);
			func_104();
			func_343(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_118();
			return 1;
			break;
	}
	return 0;
}

void func_138(var uParam0, var uParam1)
{
	uParam0->f_30 = 0;
	if (uParam1->f_6 > uParam1->f_7)
	{
		uParam0->f_30 = 1;
	}
}

int func_139(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x1CEEDAD2579308CA(uParam0->f_7))
		{
			if (!func_175(uParam0->f_24, uParam0->f_25, unk_0xCCF4429586AA66AA(0), unk_0x751561EC4BF6CC71(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_140(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_104();
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

void func_140(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(iVar0, "mission");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_88(iVar2) };
	if (func_111())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x2B36163AFF2C657B(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x48F0D7F4F712BF06(uParam0->f_7), 64);
	}
	if (!func_111())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0x2303DF0D636F58DE(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0x751561EC4BF6CC71(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0xEE6F60A09902D357(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0xEE6F60A09902D357(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0xEE6F60A09902D357(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0xEE6F60A09902D357(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0xEE6F60A09902D357(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_87(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_86(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0xEE6F60A09902D357(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_89(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0xB637C4F4A90F0788(uParam0->f_7), 24);
	if (!func_111())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_83(unk_0x72DDA3F1835FB5C9(uParam0->f_7, 0), unk_0x183CB0AAE2BEC47A(uParam0->f_7, 0));
	}
	if (func_115() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4578)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4578;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4578)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4578;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0xEE6F60A09902D357(iVar2, "rank");
	func_82(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0xA1E7A40E1F56E511(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0xC4380FF860A1D307(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
	}
	if (!func_111())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0xC4380FF860A1D307(uParam0->f_9), 24);
		if (unk_0x4094161273EB8DCA(uParam0->f_9))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0xD15DDDE2D5991717() != 0)
			{
				unk_0xD7DA134CB17A3ABD();
			}
		}
	}
}

int func_141(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0xC547BC018B86C237(*uParam0);
			}
			unk_0xFF5956F859E3160C();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x6353798F1954730F(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xE735E3FE69455908(unk_0x80A254221412F331(0, uParam3)))
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
							unk_0xC547BC018B86C237(*uParam0);
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

void func_142()
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
	
	iVar0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(iVar0, "mission");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "endcon");
	iVar3 = unk_0x7408DCBD37A2C60F(iVar1, "ene");
	iVar4 = unk_0xEE6F60A09902D357(iVar3, "no");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar3, "loc");
	iVar6 = unk_0x7408DCBD37A2C60F(iVar1, "goto");
	iVar7 = unk_0xEE6F60A09902D357(iVar6, "no");
	iVar8 = unk_0x7408DCBD37A2C60F(iVar1, "veh");
	iVar9 = unk_0xEE6F60A09902D357(iVar8, "no");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar8, "loc");
	iVar11 = unk_0x7408DCBD37A2C60F(iVar1, "obj");
	iVar12 = unk_0xEE6F60A09902D357(iVar11, "no");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_4456448.f_42 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1651902.f_1[iVar14] = unk_0xF6EB12D7E162DA9C(unk_0xCB845A663B4DD2F3(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0xCB845A663B4DD2F3(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0xCB845A663B4DD2F3(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0xCB845A663B4DD2F3(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1651902.f_1[iVar14] - 1))
			{
				Global_1651902.f_6[iVar14 /*18*/][iVar15] = unk_0xF6EB12D7E162DA9C(uVar25[iVar14], iVar15);
				Global_1651902.f_79[iVar14 /*18*/][iVar15] = unk_0xF6EB12D7E162DA9C(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1651902.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0x3854C8AFB1001E7E(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1651902.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_4456448.f_42 - 1))
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
		while (iVar14 < Global_1651902.f_1[iVar80])
		{
			if ((!unk_0xA2BC31158C8CEFD2(Global_1651902.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0xCB845A663B4DD2F3(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0xCB845A663B4DD2F3(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0xF6EB12D7E162DA9C(uVar60[iVar80], iVar14);
			iVar193 = unk_0xF6EB12D7E162DA9C(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_144(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664991.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xB6537A31819F86E5(iVar10, iVar14) };
					Global_1664991.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1664991.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_143(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0xCB845A663B4DD2F3(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0xCB845A663B4DD2F3(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0xF6EB12D7E162DA9C(uVar70[iVar80], iVar14);
			iVar193 = unk_0xF6EB12D7E162DA9C(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_144(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664991.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xB6537A31819F86E5(iVar13, iVar14) };
					Global_1664991.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1664991.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_143(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0xCB845A663B4DD2F3(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0xCB845A663B4DD2F3(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0xCB845A663B4DD2F3(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0xF6EB12D7E162DA9C(uVar50[iVar80], iVar14);
			iVar15 = unk_0xF6EB12D7E162DA9C(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_144(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1664991.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xB6537A31819F86E5(uVar55[iVar80], iVar14) };
					Global_1664991.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1664991.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_143(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0xCB845A663B4DD2F3(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0xCB845A663B4DD2F3(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0xF6EB12D7E162DA9C(uVar40[iVar80], iVar14);
			iVar15 = unk_0xF6EB12D7E162DA9C(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xA2BC31158C8CEFD2(Global_1651902.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_144(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1664991.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0xB6537A31819F86E5(iVar5, iVar14) };
					Global_1664991.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1664991.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1664991.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1664991.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_143(iVar15, 2) };
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
				if (Global_1664991.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1664991.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1664991.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1664991.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1664991.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xD15DDDE2D5991717() != 0)
	{
		unk_0xD7DA134CB17A3ABD();
	}
}

Vector3 func_143(int iParam0, int iParam1)
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

int func_144(int iParam0, int iParam1, int iParam2)
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

void func_145(var uParam0, bool bParam1)
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
		unk_0xC547BC018B86C237(*uParam0);
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

bool func_146()
{
	return Global_2448961.f_619;
}

int func_147()
{
	if (((func_151() || func_150()) || func_149()) || func_148())
	{
		return 1;
	}
	return 0;
}

bool func_148()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 1);
}

bool func_149()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 2);
}

bool func_150()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 20);
}

var func_151()
{
	return Global_2448961.f_598;
}

int func_152(int iParam0)
{
	if ((((func_157(iParam0) || func_156(iParam0)) || func_155(iParam0)) || func_154(iParam0)) || func_153(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_153(int iParam0)
{
	return iParam0 == Global_262145.f_8610;
}

bool func_154(int iParam0)
{
	return iParam0 == Global_262145.f_8604;
}

bool func_155(int iParam0)
{
	return iParam0 == Global_262145.f_8598;
}

bool func_156(int iParam0)
{
	return iParam0 == Global_262145.f_8591;
}

bool func_157(int iParam0)
{
	return iParam0 == Global_262145.f_8586;
}

int func_158(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_108())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_111())
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
			func_104();
			func_159();
			Global_1654044.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1654069.f_5 = 0;
				Global_1654069.f_4 = 0;
				Global_1654069.f_1 = 0;
				Global_1654069.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1654069.f_5 = 0;
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
			if (unk_0x9AA8FECB3F56CD6D(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xD15DDDE2D5991717();
					Global_1654075 = unk_0xEE6F60A09902D357(iVar0, "pt");
					Global_1654075.f_1 = unk_0xEE6F60A09902D357(iVar0, "pu");
					Global_1654075.f_2 = unk_0xEE6F60A09902D357(iVar0, "ft");
					Global_1654075.f_3 = unk_0xEE6F60A09902D357(iVar0, "fu");
					Global_1654075.f_4 = unk_0xEE6F60A09902D357(iVar0, "qt");
					Global_1654075.f_5 = unk_0xEE6F60A09902D357(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xD15DDDE2D5991717();
					Global_1654044.f_10 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "dt"));
					Global_1654044.f_11 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "du"));
					Global_1654044.f_9 = (Global_1654044.f_10 / Global_1654044.f_11);
					Global_1654044.f_13 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "pt"));
					Global_1654044.f_14 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "pu"));
					Global_968151 = unk_0xF2DB717A73826179(Global_1654044.f_14);
					Global_1654044.f_12 = (Global_1654044.f_13 / Global_1654044.f_14);
					Global_1654044.f_15 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "qt"));
					Global_1654044.f_17 = unk_0xBBDA792448DB5A89(unk_0xEE6F60A09902D357(iVar0, "qu"));
					Global_1654044.f_16 = (Global_1654044.f_15 / Global_1654044.f_17);
				}
				if (unk_0xD15DDDE2D5991717() != 0)
				{
					unk_0xD7DA134CB17A3ABD();
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
			if (unk_0x4094161273EB8DCA(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x2089E37E3F4579A0(iParam1))
					{
						iVar0 = unk_0xD15DDDE2D5991717();
						if (iParam3 == 0)
						{
							Global_1654044 = unk_0xEE6F60A09902D357(iVar0, "quit");
							Global_1654044.f_2 = unk_0xEE6F60A09902D357(iVar0, "ply");
							Global_1654044.f_8 = unk_0xEE6F60A09902D357(iVar0, "fl");
							if (Global_1654044.f_2 > 0)
							{
								Global_1654044.f_5 = 1;
							}
							unk_0xD7DA134CB17A3ABD();
						}
						else if (iParam3 == 4)
						{
							Global_1654069.f_5 = unk_0x6F7A89248B266B1B(iVar0, "won");
							Global_1654069.f_4 = unk_0xEE6F60A09902D357(iVar0, "ply");
							Global_1654069.f_1 = unk_0xEE6F60A09902D357(iVar0, "quit");
							Global_1654069.f_2 = unk_0xEE6F60A09902D357(iVar0, "fl");
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

void func_159()
{
	Global_1654044 = 0;
	Global_1654044.f_2 = 0;
	Global_1654044.f_8 = 0;
	Global_1654044.f_3 = 0;
	Global_1654044.f_6 = 0;
}

int func_160(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_163() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_111() && iParam1 == 0) && !bParam3)
			{
				if (Global_4456448.f_156052 == 0)
				{
					if (func_162())
					{
						func_343(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_118();
						unk_0xDDE6D4D19EF3CF38(uParam0->f_5);
						func_104();
						return 1;
					}
				}
			}
		}
	}
	if (Global_4456448 == 0 && Global_4456448.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_111())
		{
			if (!unk_0x62634429A483C408(unk_0x0D61E1478B41ADF8(0)))
			{
				Global_4456448.f_156034 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_161();
	}
	func_102(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_161()
{
	unk_0xA1E7A40E1F56E511(&(Global_2448961.f_39.f_4), 7);
}

int func_162()
{
	if (((Global_4456448 != 2 && Global_4456448 != 0) && Global_4456448 != 1) && Global_4456448 != 3)
	{
		return 1;
	}
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_190930 != 0)
		{
			return 1;
		}
		if (Global_4456448.f_2 == 4)
		{
			return 1;
		}
		if (Global_4456448.f_2 != 5 && ((((Global_4456448.f_2 != 6 && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 20)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 21)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 22)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 23)))
		{
			return 1;
		}
	}
	if (Global_4456448 == 2)
	{
		if (Global_4456448.f_58154 == 8 || Global_4456448.f_58154 == 9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_163()
{
	return unk_0x9742C47C6EA02281(-1762644250);
}

int func_164()
{
	if (Global_4456448.f_47842 || func_165())
	{
		return 1;
	}
	return 0;
}

int func_165()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((((((((((Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar") || Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar2")) || Global_4456448.f_60605[iVar0] == -1894510521) || Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar3")) || Global_4456448.f_60605[iVar0] == -1562909828) || Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar4")) || Global_4456448.f_60605[iVar0] == 338623111) || Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar5")) || Global_4456448.f_60605[iVar0] == joaat("prop_rail_boxcar5_d")) || Global_4456448.f_60605[iVar0] == -1529940538) || Global_4456448.f_60605[iVar0] == 1152304222) || Global_4456448.f_60605[iVar0] == joaat("freight")) || Global_4456448.f_60605[iVar0] == joaat("metrotrain"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_166()
{
	if ((Global_4456448.f_79.f_2 < 0f || func_167(Global_4456448.f_79, 999, 2f)) || (Global_4456448.f_49441[0 /*3*/].f_2 < -2f && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_49954[0], 5)))
	{
		return 1;
	}
	return 0;
}

int func_167(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1049852[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if (((Global_1049852[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && unk_0xD36AE666DF05C607(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1049852[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1)) || (Global_1049852[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0xD36AE666DF05C607(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1049852[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049852[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0xD36AE666DF05C607(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1049852[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_167(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_167(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_167(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_168(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2461298, "", 64);
	}
	else
	{
		Global_2461298 = { Param1 };
	}
	Global_2461297 = iParam0;
}

int func_169(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x9591DE0F00127F2A(uParam1))
	{
		return 0;
	}
	unk_0xA7EBB3B1D4BB4102(uParam1, &uVar0, 13);
	if (unk_0x5D17AB84230A234B(&uVar0, 13) && unk_0xD093FBECDA11806C(&uVar0))
	{
		*uParam0 = unk_0x8E7B4881D16C0E9D(&uVar0);
		if (unk_0xD56C8C2B75BF9665(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_170()
{
	return Global_2448961.f_39.f_55;
}

int func_171()
{
	return Global_2459450;
}

bool func_172()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196 != 0;
}

void func_173(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(*uParam0, "data");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "trg");
	*uParam1 = unk_0xCB845A663B4DD2F3(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x1D22B93425E4D657(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x6F7A89248B266B1B(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x6F7A89248B266B1B(iVar1, "open");
	Var3 = { func_174(unk_0xCCF4429586AA66AA(0)) };
	unk_0x4065D3D900AB253F(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0xEE6F60A09902D357(iVar2, "scr");
	uParam2->f_5 = unk_0xEE6F60A09902D357(iVar2, "time");
	uParam2->f_1 = unk_0xEE6F60A09902D357(iVar1, "cash");
	uParam2->f_65 = unk_0x6B06CA8F004A94A0(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0x3FB03F18D2FA9F6D(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x2B36163AFF2C657B(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0xEE6F60A09902D357(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0xEE6F60A09902D357(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_174(var uParam0)
{
	struct<13> Var0;
	
	unk_0x17F928ADDDB92B4C(uParam0, &Var0, 13);
	return Var0;
}

int func_175(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_174(sParam2) };
		Var13 = { func_176(unk_0x7C7787D2D7139A85()) };
		if (bParam1)
		{
			if (unk_0xD7DE6AEF5C87DE06(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0xB8A6A83E8C303720(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x77BA37DB22C66465())
		{
			if (unk_0xD7DE6AEF5C87DE06(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x0A1F23E5539480AB(&Var0) && unk_0xCA3736B46FE270BB(&Var0))
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
			Var13 = { func_176(unk_0x7C7787D2D7139A85()) };
			if (!unk_0xD7DE6AEF5C87DE06(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_176(int iParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
	return Var0;
}

void func_177(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_961130.f_6 = 0;
		Global_961130.f_7 = 32;
	}
	else
	{
		Global_959568.f_6 = 0;
		Global_959568.f_7 = 32;
	}
}

void func_178(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xD15DDDE2D5991717();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0xCB845A663B4DD2F3(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x6B06CA8F004A94A0(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0x3FB03F18D2FA9F6D(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x2B36163AFF2C657B(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x6F7A89248B266B1B(*uParam0, "h2h");
	uParam2->f_9 = unk_0x6F7A89248B266B1B(*uParam0, "ch");
	if (func_111())
	{
		StringCopy(&(uParam2->f_12), unk_0x2B36163AFF2C657B(*uParam0, "name"), 64);
	}
}

void func_179(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xD15DDDE2D5991717();
	iVar1 = unk_0x7408DCBD37A2C60F(iVar0, "mission");
	iVar2 = unk_0x7408DCBD37A2C60F(iVar1, "gen");
	Global_4456448.f_156007 = unk_0xEE6F60A09902D357(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_262(iVar1, iParam0, bParam1);
		func_261(iVar1);
		func_260(&iVar1);
		func_259(&iVar1);
		func_258(&iVar1);
		func_257(&iVar1);
		func_256(&iVar1);
		func_255(&iVar1);
		func_253(&iVar1);
		func_252(&iVar1);
		func_251(&iVar1);
		func_249(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_136())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_248(iVar1);
			func_247(iVar1);
			func_246(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_245(iVar1);
			func_244(iVar2);
			func_243(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_237(iVar1);
			func_236(iVar1);
			func_235(iVar1);
			func_234(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_129())
	{
		func_229(iVar1);
		func_235(iVar1);
	}
	else if (func_228())
	{
		func_235(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_226(iVar1);
		func_225(iVar1);
		func_224(iVar1);
		func_222(iVar1);
		func_221(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_217(iVar1);
		func_209(iVar1);
		func_205(iVar1);
		func_198(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_4456448 == 1)
	{
		func_247(iVar1);
		func_197(iVar1);
	}
	else if ((((Global_4456448 == 0 || Global_4456448.f_58154 == 8) || Global_4456448.f_58154 == 9) || Global_4456448 == 6) || func_196())
	{
		func_190(iVar1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_17, 19))
	{
		func_189(iVar1);
	}
	unk_0x3B76114EC84D5812(&(Global_4456448.f_4), 15);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_4), 18);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_4), 19);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_4), 29);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_4), 28);
	if (func_196() && func_188(Global_4456448.f_190930))
	{
		func_184(&iVar1);
	}
	if (func_79(Global_4456448.f_154360))
	{
		Global_4456448.f_38 = Global_4456448.f_37;
	}
	if ((!func_182(unk_0x7C7787D2D7139A85()) && !func_181()) && !Global_1653164)
	{
		iVar3 = func_81(Global_4456448.f_154360, 1);
		if (iVar3 != -1)
		{
			if (Global_262145.f_4919[iVar3] != -1 && Global_262145.f_6446[iVar3] != 251)
			{
				Global_4456448.f_38 = Global_262145.f_4919[iVar3];
			}
			if (Global_262145.f_4868[iVar3] != -1 && Global_262145.f_6446[iVar3] != 251)
			{
				Global_4456448.f_37 = Global_262145.f_4868[iVar3];
			}
		}
	}
	if (func_54(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_4), 15);
	}
	else if (func_53(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_4), 18);
	}
	else if (func_52(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_4), 19);
	}
	else if (func_50(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_4), 29);
	}
	else if (func_51(Global_4456448.f_154360, 1))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_4), 28);
	}
	else if (func_49(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 0);
	}
	else if (func_48(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 1);
	}
	else if (func_47(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 2);
	}
	else if (func_43(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 6);
	}
	else if (func_42(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 7);
	}
	else if (func_41(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 8);
	}
	else if (func_40(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 9);
	}
	else if (func_36(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 10);
	}
	else if (func_39(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 11);
	}
	else if (func_38(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 12);
	}
	else if (func_73(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 13);
	}
	else if (func_72(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 22);
	}
	else if (func_37(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 14);
	}
	else if (func_46(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 3);
	}
	else if (func_45(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 4);
	}
	else if (func_71(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 16);
	}
	else if (func_70(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 17);
	}
	else if (func_69(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 20);
	}
	else if (func_68(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 21);
	}
	else if (func_72(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 22);
	}
	else if (func_44(Global_4456448.f_154360))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 5);
	}
	else if (func_67(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 23);
	}
	else if (func_63(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 27);
	}
	else if (func_66(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 24);
	}
	else if (func_64(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 26);
	}
	else if (func_65(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 25);
	}
	else if (func_62(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 28);
	}
	else if (func_61(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 29);
	}
	else if (func_60(Global_4456448.f_190930))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_5), 30);
	}
	func_180(Global_4456448.f_154360);
}

void func_180(int iParam0)
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
		if (iParam0 == Global_262145.f_9027[iVar0] || iParam0 == Global_262145.f_9036[iVar0])
		{
			Global_4456448.f_79 = { func_58(0, iVar0) };
			Global_4456448.f_82 = { func_57(0, iVar0) };
			Var1 = { func_56(0, iVar0) };
			Global_4456448.f_101 = Var1.f_2;
			Global_4456448.f_1 = 0;
			Global_4456448.f_2 = 8;
			Global_4456448.f_156015 = 0;
			Global_4456448.f_156018 = 16777215;
		}
		iVar0++;
	}
}

bool func_181()
{
	return unk_0xA2BC31158C8CEFD2(Global_2449755.f_1.f_2809, 5);
}

bool func_182(int iParam0)
{
	return func_183(iParam0);
}

bool func_183(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
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
	char cVar7[16];
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "surv");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wave") == 2)
	{
		Global_4456448.f_192215 = unk_0xEE6F60A09902D357(iVar0, "wave");
	}
	else
	{
		Global_4456448.f_192215 = 10;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvtst") == 2)
	{
		Global_4456448.f_192215.f_2728 = unk_0xEE6F60A09902D357(iVar0, "wvtst");
	}
	else
	{
		Global_4456448.f_192215.f_2728 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sbits") == 2)
	{
		Global_4456448.f_192215.f_2808 = unk_0xEE6F60A09902D357(iVar0, "sbits");
	}
	else
	{
		Global_4456448.f_192215.f_2808 = 0;
	}
	iVar2 = 1;
	while (iVar2 <= Global_4456448.f_192215)
	{
		StringCopy(&cVar7, "wKil", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_1[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_1[iVar2] = func_187(13, iVar2, 0);
		}
		StringCopy(&cVar7, "wveq", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_2729[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_2729[iVar2] = func_187(17, iVar2, 0);
		}
		StringCopy(&cVar7, "wvss", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_2773[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_2773[iVar2] = func_187(18, iVar2, 0);
		}
		StringCopy(&cVar7, "wdif", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_2751[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_2751[iVar2] = func_187(19, iVar2, 0);
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			StringCopy(&cVar7, "sqd", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_23[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_23[iVar2 /*4*/][iVar3] = func_187(0, iVar2, iVar3);
			}
			StringCopy(&cVar7, "pps", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_108[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_108[iVar2 /*4*/][iVar3] = func_187(1, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_278[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_278[iVar2 /*4*/][iVar3] = func_187(8, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_363[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_363[iVar2 /*4*/][iVar3] = func_187(9, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdAC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_448[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_448[iVar2 /*4*/][iVar3] = func_187(10, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_533[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_533[iVar2 /*4*/][iVar3] = func_187(12, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_193[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_193[iVar2 /*4*/][iVar3] = func_186(7, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_618[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_618[iVar2 /*4*/][iVar3] = func_187(24, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_703[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_703[iVar2 /*4*/][iVar3] = func_187(25, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_788[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_788[iVar2 /*4*/][iVar3] = func_187(26, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_873[iVar2 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_873[iVar2 /*4*/][iVar3] = func_186(27, iVar2, iVar3);
			}
			iVar3++;
		}
		StringCopy(&cVar7, "lVeh", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_958[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_958[iVar2] = func_187(3, iVar2, 0);
		}
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&cVar7, "vped", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_980[iVar2 /*5*/][iVar4] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_980[iVar2 /*5*/][iVar4] = func_187(4, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vmn", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1086[iVar2 /*5*/][iVar4] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1086[iVar2 /*5*/][iVar4] = func_186(5, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vHP", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1192[iVar2 /*5*/][iVar4] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1192[iVar2 /*5*/][iVar4] = func_187(14, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1298[iVar2 /*5*/][iVar4] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1298[iVar2 /*5*/][iVar4] = func_187(28, iVar2, iVar4);
			}
			iVar4++;
		}
		StringCopy(&cVar7, "sHeli", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_192215.f_2440[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_192215.f_2440[iVar2] = func_187(6, iVar2, 0);
		}
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			StringCopy(&cVar7, "airMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_2462[iVar2 /*4*/][iVar5] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_2462[iVar2 /*4*/][iVar5] = func_186(15, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_2547[iVar2 /*4*/][iVar5] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_2547[iVar2 /*4*/][iVar5] = func_187(16, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_2632[iVar2 /*4*/][iVar5] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_2632[iVar2 /*4*/][iVar5] = func_187(28, iVar2, iVar5);
			}
			iVar5++;
		}
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			StringCopy(&cVar7, "wepTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1404[iVar2 /*5*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1404[iVar2 /*5*/][iVar6] = func_185(iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1510[iVar2 /*5*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1510[iVar2 /*5*/][iVar6] = func_187(20, iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1616[iVar2 /*5*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_192215.f_1616[iVar2 /*5*/][iVar6] = func_187(21, iVar2, iVar6);
			}
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 <= 9)
		{
			StringCopy(&cVar7, "ldWTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1722[iVar2 /*11*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_1954[iVar2 /*11*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_192215.f_2186[iVar2 /*11*/][iVar6] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
			}
			iVar6++;
		}
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "swwon") == 2)
		{
			Global_4456448.f_192215.f_2418[iVar2] = unk_0xEE6F60A09902D357(iVar0, "swwon");
		}
		else
		{
			Global_4456448.f_192215.f_2418[iVar2] = 0;
		}
		iVar2++;
	}
	StringCopy(&cVar7, "sqdMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_192215.f_193[0 /*4*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_192215.f_193[0 /*4*/][0] = func_186(7, 0, 0);
	}
	StringCopy(&cVar7, "vmn", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "v", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_192215.f_1086[0 /*5*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_192215.f_1086[0 /*5*/][0] = func_186(5, 0, 0);
	}
	StringCopy(&cVar7, "airMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "a", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_192215.f_2462[0 /*4*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_192215.f_2462[0 /*4*/][0] = func_186(15, 0, 0);
	}
	StringCopy(&cVar7, "hvyMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_192215.f_873[0 /*4*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_192215.f_873[0 /*4*/][0] = func_186(27, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		StringCopy(&cVar7, "sbndsv", 16);
		StringIntConCat(&cVar7, iVar1, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar7) == 5)
		{
			Global_4456448.f_192215.f_2717[iVar1 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar7) };
		}
		else
		{
			Global_4456448.f_192215.f_2717[iVar1 /*3*/] = { 0f, 0f, 0f };
		}
		iVar1++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sbndsr") == 3)
	{
		Global_4456448.f_192215.f_2724 = unk_0x42AD093E466CD516(iVar0, "sbndsr");
	}
	else
	{
		Global_4456448.f_192215.f_2724 = 100f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sbndsh") == 3)
	{
		Global_4456448.f_192215.f_2725 = unk_0x42AD093E466CD516(iVar0, "sbndsh");
	}
	else
	{
		Global_4456448.f_192215.f_2725 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sbndsbo") == 3)
	{
		Global_4456448.f_192215.f_2726 = unk_0x42AD093E466CD516(iVar0, "sbndsbo");
	}
	else
	{
		Global_4456448.f_192215.f_2726 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sbndst") == 2)
	{
		Global_4456448.f_192215.f_2727 = unk_0xEE6F60A09902D357(iVar0, "sbndst");
	}
	else
	{
		Global_4456448.f_192215.f_2727 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvalv") == 2)
	{
		Global_4456448.f_192215.f_2795 = unk_0xEE6F60A09902D357(iVar0, "wvalv");
	}
	else
	{
		Global_4456448.f_192215.f_2795 = 360;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvaav") == 2)
	{
		Global_4456448.f_192215.f_2796 = unk_0xEE6F60A09902D357(iVar0, "wvaav");
	}
	else
	{
		Global_4456448.f_192215.f_2796 = 1200;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvscb") == 2)
	{
		Global_4456448.f_192215.f_2798 = unk_0xEE6F60A09902D357(iVar0, "wvscb");
	}
	else
	{
		Global_4456448.f_192215.f_2798 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvpcb") == 2)
	{
		Global_4456448.f_192215.f_2799 = unk_0xEE6F60A09902D357(iVar0, "wvpcb");
	}
	else
	{
		Global_4456448.f_192215.f_2799 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvlvcb") == 2)
	{
		Global_4456448.f_192215.f_2802 = unk_0xEE6F60A09902D357(iVar0, "wvlvcb");
	}
	else
	{
		Global_4456448.f_192215.f_2802 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvlmcb") == 2)
	{
		Global_4456448.f_192215.f_2803 = unk_0xEE6F60A09902D357(iVar0, "wvlmcb");
	}
	else
	{
		Global_4456448.f_192215.f_2803 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvavcb") == 2)
	{
		Global_4456448.f_192215.f_2804 = unk_0xEE6F60A09902D357(iVar0, "wvavcb");
	}
	else
	{
		Global_4456448.f_192215.f_2804 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvamcb") == 2)
	{
		Global_4456448.f_192215.f_2805 = unk_0xEE6F60A09902D357(iVar0, "wvamcb");
	}
	else
	{
		Global_4456448.f_192215.f_2805 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvdcb") == 2)
	{
		Global_4456448.f_192215.f_2800 = unk_0xEE6F60A09902D357(iVar0, "wvdcb");
	}
	else
	{
		Global_4456448.f_192215.f_2800 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvpmcb") == 2)
	{
		Global_4456448.f_192215.f_2801 = unk_0xEE6F60A09902D357(iVar0, "wvpmcb");
	}
	else
	{
		Global_4456448.f_192215.f_2801 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvhcb") == 2)
	{
		Global_4456448.f_192215.f_2806 = unk_0xEE6F60A09902D357(iVar0, "wvhcb");
	}
	else
	{
		Global_4456448.f_192215.f_2806 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvhmcb") == 2)
	{
		Global_4456448.f_192215.f_2807 = unk_0xEE6F60A09902D357(iVar0, "wvhmcb");
	}
	else
	{
		Global_4456448.f_192215.f_2807 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "wvhow") == 2)
	{
		Global_4456448.f_192215.f_2797 = unk_0xEE6F60A09902D357(iVar0, "wvhow");
	}
	else
	{
		Global_4456448.f_192215.f_2797 = 0;
	}
}

int func_185(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			return joaat("weapon_pistol");
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_pistol");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_assaultshotgun");
				
				case 1:
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_assaultshotgun");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_carbinerifle");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_mg");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_combatmg");
				
				case 1:
				case 2:
					return joaat("weapon_assaultrifle");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 9:
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_combatmg");
				
				case 2:
					return joaat("weapon_minigun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_combatmg");
				
				case 2:
					return joaat("weapon_minigun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 9:
							return joaat("sandking");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 3:
						case 6:
							return joaat("sandking");
						
						case 5:
						case 8:
						case 9:
							return joaat("cavalcade");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 6:
						case 8:
						case 9:
							return joaat("speedo");
						
						default:
					}
					break;
			}
			return joaat("sandking");
			break;
		
		case 7:
			return joaat("g_m_y_lost_01");
			break;
		
		case 15:
			return joaat("buzzard2");
			break;
		
		case 27:
			return joaat("u_m_y_juggernaut_01");
			break;
	}
	return 0;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
							return 0;
						
						case 2:
							return 1;
						
						case 3:
							return 0;
						
						case 4:
						case 5:
							return 2;
						
						case 6:
							return 0;
						
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
			}
			break;
		
		case 1:
			return 5;
			break;
		
		case 3:
			switch (iParam1)
			{
				case 3:
				case 5:
				case 6:
				case 8:
					return 2;
				
				default:
			}
			return 0;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 6:
				case 8:
				case 9:
					return 0;
				
				default:
			}
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 125;
				
				case 4:
				case 5:
				case 6:
					return 150;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 200;
				
				default:
			}
			return 200;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
					return 30;
				
				default:
			}
			return 20;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 15;
				
				case 4:
				case 5:
				case 6:
					return 20;
				
				case 7:
				case 8:
				case 9:
					return 25;
				
				case 10:
					return 30;
				
				default:
			}
			return 30;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					return 0;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 3;
				
				default:
			}
			return 4;
			break;
		
		case 14:
			return 1000;
			break;
		
		case 16:
			return 350;
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
				case 2:
					return 0;
				
				case 3:
				case 4:
				case 5:
					return 1;
				
				case 6:
				case 7:
				case 8:
					return 2;
				
				case 9:
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 1;
				
				case 4:
				case 5:
					return 2;
				
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 0;
				
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
					return 2;
				
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 2;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 3;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
						case 2:
							return 3;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 25;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
							return 33;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 34;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 24;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 25;
						
						case 1:
						case 2:
							return 33;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
			}
			break;
		
		case 24:
			return 0;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 4;
			break;
		
		case 28:
			return -1;
			break;
	}
	return 0;
}

bool func_188(int iParam0)
{
	return iParam0 == 998;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "fsp");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "loc");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (iVar2 != 0 && unk_0xB988B7EA5B6DE257(iVar2, iVar0) == 5)
		{
			Global_4456448.f_149136[iVar0 /*5*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
			Global_4456448.f_149136[iVar0 /*5*/].f_3 = unk_0xB496A8A1F76DD70A(iVar3, iVar0);
		}
		else
		{
			Global_4456448.f_149136[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_4456448.f_149136[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_190(int iParam0)
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
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
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
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
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
	var uVar242[8];
	var uVar251[8];
	var uVar260[8];
	var uVar269[8];
	var uVar278[8];
	var uVar287[8];
	var uVar296[8];
	var uVar305[8];
	var uVar314[8];
	var uVar323[9];
	var uVar333[9];
	int iVar343;
	int iVar344;
	int iVar345;
	int iVar346;
	int iVar347;
	int iVar348;
	int iVar349;
	int iVar350;
	int iVar351;
	int iVar352;
	int iVar353;
	int iVar354;
	int iVar355;
	int iVar356;
	int iVar357;
	int iVar358;
	int iVar359;
	int iVar360;
	int iVar361;
	int iVar362;
	int iVar363;
	int iVar364;
	int iVar365;
	int iVar366;
	int iVar367;
	int iVar368;
	int iVar369;
	int iVar370;
	int iVar371;
	int iVar372;
	int iVar373;
	int iVar374;
	int iVar375;
	int iVar376;
	int iVar377;
	int iVar378;
	int iVar379;
	int iVar380;
	int iVar381;
	int iVar382;
	int iVar383;
	int iVar384;
	int iVar385;
	int iVar386;
	int iVar387;
	int iVar388;
	int iVar389;
	int iVar390;
	int iVar391;
	int iVar392;
	int iVar393;
	var uVar394[4];
	var uVar399[4];
	int iVar404;
	int iVar405;
	int iVar406;
	int iVar407;
	int iVar408;
	
	iVar6 = unk_0x7408DCBD37A2C60F(iParam0, "ene");
	Global_4456448.f_101955 = unk_0xEE6F60A09902D357(iVar6, "no");
	if (unk_0x1D22B93425E4D657(iVar6, "spcap") == 2 && unk_0xEE6F60A09902D357(iVar6, "spcap") != 0)
	{
		Global_4456448.f_101957 = unk_0xEE6F60A09902D357(iVar6, "spcap");
	}
	else
	{
		Global_4456448.f_101957 = 50;
	}
	Global_4456448.f_101959 = unk_0xEE6F60A09902D357(iVar6, "time");
	Global_4456448.f_101960 = unk_0xEE6F60A09902D357(iVar6, "pal");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar6, "loc");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar6, "head");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar6, "rng");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar6, "model");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar6, "gun");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar6, "skill");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar6, "rsp");
	if (Global_4456448 == 1)
	{
		uVar14[0] = unk_0xCB845A663B4DD2F3(iVar6, "team");
	}
	iVar19 = unk_0xCB845A663B4DD2F3(iVar6, "wep");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar6, "hlt");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar6, "prch");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar6, "lghlt");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar6, "veh");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar6, "foll");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar6, "iaim");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar6, "iaimt");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar6, "iaimr");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar6, "sanim");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar6, "sat");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar6, "saru");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar6, "sara");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar6, "satt");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar6, "pada");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar6, "pbrki");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar6, "pbrks");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar6, "whost");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar6, "flee");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar6, "frr");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar6, "pfrmr");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar6, "psnt");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar6, "psnei");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar6, "prorbs");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar6, "p2sp");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar6, "p2sh");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar6, "pOvSp");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar6, "pOvSpH");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar6, "accu");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar6, "lgacc");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar6, "cmsty");
	iVar50 = unk_0xCB845A663B4DD2F3(iVar6, "pedbs");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar6, "pbstwo");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar6, "pbs3");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar6, "pbs4");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar6, "pbs5");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar6, "pbs6");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar6, "pbs7");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar6, "pbs8");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar6, "pbs9");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar6, "pbs10");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar6, "pbs11");
	iVar61 = unk_0xCB845A663B4DD2F3(iVar6, "pbs12");
	iVar62 = unk_0xCB845A663B4DD2F3(iVar6, "pbs13");
	iVar63 = unk_0xCB845A663B4DD2F3(iVar6, "pbs14");
	iVar64 = unk_0xCB845A663B4DD2F3(iVar6, "pcctva");
	iVar65 = unk_0xCB845A663B4DD2F3(iVar6, "pexpra");
	iVar66 = unk_0xCB845A663B4DD2F3(iVar6, "paot");
	iVar67 = unk_0xCB845A663B4DD2F3(iVar6, "pfh");
	iVar68 = unk_0xCB845A663B4DD2F3(iVar6, "pmfhat");
	iVar69 = unk_0xCB845A663B4DD2F3(iVar6, "pgtho");
	iVar70 = unk_0xCB845A663B4DD2F3(iVar6, "pgthoh");
	iVar71 = unk_0xCB845A663B4DD2F3(iVar6, "fixpd1");
	iVar72 = unk_0xCB845A663B4DD2F3(iVar6, "fixpd2");
	iVar73 = unk_0xCB845A663B4DD2F3(iVar6, "fixpd3");
	iVar74 = unk_0xCB845A663B4DD2F3(iVar6, "fixpd4");
	iVar75 = unk_0xCB845A663B4DD2F3(iVar6, "pedbhd");
	iVar76 = unk_0xCB845A663B4DD2F3(iVar6, "mcvasi");
	iVar77 = unk_0xCB845A663B4DD2F3(iVar6, "cstp0");
	iVar78 = unk_0xCB845A663B4DD2F3(iVar6, "cstp1");
	iVar79 = unk_0xCB845A663B4DD2F3(iVar6, "cstp2");
	iVar80 = unk_0xCB845A663B4DD2F3(iVar6, "mvov1r");
	iVar81 = unk_0xCB845A663B4DD2F3(iVar6, "mvov1t");
	iVar82 = unk_0xCB845A663B4DD2F3(iVar6, "mvov2r");
	iVar83 = unk_0xCB845A663B4DD2F3(iVar6, "mvov2t");
	if (func_136())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_42 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar84[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar89[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar94[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "pSTRWA", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar99[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar104[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar109[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar114[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar119[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar124[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar129[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar134[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "pdria", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar139[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar242[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar251[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar260[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar269[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar287[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar278[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar296[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar305[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "agvg", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar314[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar3++;
		}
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			StringCopy(&cVar4, "pdwr1", 8);
			StringIntConCat(&cVar4, iVar1, 8);
			uVar323[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "pdwr2", 8);
			StringIntConCat(&cVar4, iVar1, 8);
			uVar333[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar1++;
		}
		iVar144 = unk_0xCB845A663B4DD2F3(iVar6, "objt");
		iVar145 = unk_0xCB845A663B4DD2F3(iVar6, "team");
		iVar146 = unk_0xCB845A663B4DD2F3(iVar6, "spawn");
		iVar147 = unk_0xCB845A663B4DD2F3(iVar6, "acts");
		iVar148 = unk_0xCB845A663B4DD2F3(iVar6, "scrrq");
		iVar149 = unk_0xCB845A663B4DD2F3(iVar6, "awysrl");
		iVar150 = unk_0xCB845A663B4DD2F3(iVar6, "objt2");
		iVar151 = unk_0xCB845A663B4DD2F3(iVar6, "team2");
		iVar152 = unk_0xCB845A663B4DD2F3(iVar6, "spawn2");
		iVar153 = unk_0xCB845A663B4DD2F3(iVar6, "acts2");
		iVar154 = unk_0xCB845A663B4DD2F3(iVar6, "scrrq2");
		iVar155 = unk_0xCB845A663B4DD2F3(iVar6, "awysrl2");
		iVar156 = unk_0xCB845A663B4DD2F3(iVar6, "objt3");
		iVar157 = unk_0xCB845A663B4DD2F3(iVar6, "team3");
		iVar158 = unk_0xCB845A663B4DD2F3(iVar6, "spawn3");
		iVar159 = unk_0xCB845A663B4DD2F3(iVar6, "acts3");
		iVar160 = unk_0xCB845A663B4DD2F3(iVar6, "scrrq3");
		iVar161 = unk_0xCB845A663B4DD2F3(iVar6, "awysrl3");
		iVar162 = unk_0xCB845A663B4DD2F3(iVar6, "objt4");
		iVar163 = unk_0xCB845A663B4DD2F3(iVar6, "team4");
		iVar164 = unk_0xCB845A663B4DD2F3(iVar6, "spawn4");
		iVar165 = unk_0xCB845A663B4DD2F3(iVar6, "acts4");
		iVar166 = unk_0xCB845A663B4DD2F3(iVar6, "scrrq4");
		iVar167 = unk_0xCB845A663B4DD2F3(iVar6, "awysr4");
		iVar168 = unk_0xCB845A663B4DD2F3(iVar6, "act");
		iVar169 = unk_0xCB845A663B4DD2F3(iVar6, "pper");
		iVar170 = unk_0xCB845A663B4DD2F3(iVar6, "percr");
		iVar171 = unk_0xCB845A663B4DD2F3(iVar6, "perca");
		iVar172 = unk_0xCB845A663B4DD2F3(iVar6, "infr");
		iVar173 = unk_0xCB845A663B4DD2F3(iVar6, "cca");
		iVar174 = unk_0xCB845A663B4DD2F3(iVar6, "ccid");
		iVar175 = unk_0xCB845A663B4DD2F3(iVar6, "gfr");
		iVar176 = unk_0xCB845A663B4DD2F3(iVar6, "msr");
		iVar177 = unk_0xCB845A663B4DD2F3(iVar6, "bnr");
		iVar178 = unk_0xCB845A663B4DD2F3(iVar6, "phor");
		iVar179 = unk_0xCB845A663B4DD2F3(iVar6, "folr");
		iVar181 = unk_0xCB845A663B4DD2F3(iVar6, "pcvl");
		iVar182 = unk_0xCB845A663B4DD2F3(iVar6, "pcvr");
		iVar180 = unk_0xCB845A663B4DD2F3(iVar6, "pdfw");
		iVar186 = unk_0xCB845A663B4DD2F3(iVar6, "pvdp1");
		iVar187 = unk_0xCB845A663B4DD2F3(iVar6, "pvdp2");
		iVar183 = unk_0xCB845A663B4DD2F3(iVar6, "paaw");
		iVar184 = unk_0xCB845A663B4DD2F3(iVar6, "paav1");
		iVar185 = unk_0xCB845A663B4DD2F3(iVar6, "paav2");
		iVar188 = unk_0xCB845A663B4DD2F3(iVar6, "dt");
		iVar189 = unk_0xCB845A663B4DD2F3(iVar6, "do");
		iVar219 = unk_0xCB845A663B4DD2F3(iVar6, "dltd");
		iVar190 = unk_0xCB845A663B4DD2F3(iVar6, "dtim");
		iVar191 = unk_0xCB845A663B4DD2F3(iVar6, "dln");
		iVar192 = unk_0xCB845A663B4DD2F3(iVar6, "pvsp");
		iVar220 = unk_0xCB845A663B4DD2F3(iVar6, "drge");
		iVar221 = unk_0xCB845A663B4DD2F3(iVar6, "agrot");
		iVar222 = unk_0xCB845A663B4DD2F3(iVar6, "gtds");
		iVar223 = unk_0xCB845A663B4DD2F3(iVar6, "pstat");
		iVar224 = unk_0xCB845A663B4DD2F3(iVar6, "pstar");
		iVar225 = unk_0xCB845A663B4DD2F3(iVar6, "dmv");
		iVar226 = unk_0xCB845A663B4DD2F3(iVar6, "blkr");
		iVar227 = unk_0xCB845A663B4DD2F3(iVar6, "let");
		iVar228 = unk_0xCB845A663B4DD2F3(iVar6, "escr");
		iVar229 = unk_0xCB845A663B4DD2F3(iVar6, "pcoid");
		iVar230 = unk_0xCB845A663B4DD2F3(iVar6, "esco");
		iVar231 = unk_0xCB845A663B4DD2F3(iVar6, "actr");
		iVar232 = unk_0xCB845A663B4DD2F3(iVar6, "spkds");
		iVar233 = unk_0xCB845A663B4DD2F3(iVar6, "entdmr");
		iVar234 = unk_0xCB845A663B4DD2F3(iVar6, "actv");
		iVar235 = unk_0xCB845A663B4DD2F3(iVar6, "actv2");
		iVar236 = unk_0xCB845A663B4DD2F3(iVar6, "actv3");
		iVar237 = unk_0xCB845A663B4DD2F3(iVar6, "actv4");
		iVar238 = unk_0xCB845A663B4DD2F3(iVar6, "actv5");
		iVar239 = unk_0xCB845A663B4DD2F3(iVar6, "actv6");
		iVar240 = unk_0xCB845A663B4DD2F3(iVar6, "actv7");
		iVar241 = unk_0xCB845A663B4DD2F3(iVar6, "actv8");
		iVar343 = unk_0xCB845A663B4DD2F3(iVar6, "pedct");
		iVar345 = unk_0xCB845A663B4DD2F3(iVar6, "pdcra");
		iVar344 = unk_0xCB845A663B4DD2F3(iVar6, "pedcr");
		iVar347 = unk_0xCB845A663B4DD2F3(iVar6, "pedsrT");
		iVar348 = unk_0xCB845A663B4DD2F3(iVar6, "pedsrR");
		iVar346 = unk_0xCB845A663B4DD2F3(iVar6, "pedcv");
		iVar349 = unk_0xCB845A663B4DD2F3(iVar6, "pedbc");
		iVar350 = unk_0xCB845A663B4DD2F3(iVar6, "pdbps");
		iVar351 = unk_0xCB845A663B4DD2F3(iVar6, "pdbso");
		iVar352 = unk_0xCB845A663B4DD2F3(iVar6, "avrad");
		iVar353 = unk_0xCB845A663B4DD2F3(iVar6, "pdtc");
		iVar404 = unk_0xCB845A663B4DD2F3(iVar6, "pdsbr");
		iVar405 = unk_0xCB845A663B4DD2F3(iVar6, "pdrols");
		iVar354 = unk_0xCB845A663B4DD2F3(iVar6, "pedst");
		iVar355 = unk_0xCB845A663B4DD2F3(iVar6, "gotor");
		iVar356 = unk_0xCB845A663B4DD2F3(iVar6, "invbs");
		iVar357 = unk_0xCB845A663B4DD2F3(iVar6, "gort");
		iVar358 = unk_0xCB845A663B4DD2F3(iVar6, "gorr");
		iVar362 = unk_0xCB845A663B4DD2F3(iVar6, "gorw");
		iVar359 = unk_0xCB845A663B4DD2F3(iVar6, "cmvd");
		iVar363 = unk_0xCB845A663B4DD2F3(iVar6, "csct");
		iVar364 = unk_0xCB845A663B4DD2F3(iVar6, "cscr");
		iVar365 = unk_0xCB845A663B4DD2F3(iVar6, "cscs");
		iVar366 = unk_0xCB845A663B4DD2F3(iVar6, "cstnm");
		iVar367 = unk_0xCB845A663B4DD2F3(iVar6, "pspdl");
		iVar368 = unk_0xCB845A663B4DD2F3(iVar6, "psgr");
		iVar369 = unk_0xCB845A663B4DD2F3(iVar6, "pssgr");
		iVar370 = unk_0xCB845A663B4DD2F3(iVar6, "psctt");
		iVar371 = unk_0xCB845A663B4DD2F3(iVar6, "pscto");
		iVar372 = unk_0xCB845A663B4DD2F3(iVar6, "pscta");
		iVar373 = unk_0xCB845A663B4DD2F3(iVar6, "psctac");
		iVar374 = unk_0xCB845A663B4DD2F3(iVar6, "psctv");
		iVar375 = unk_0xCB845A663B4DD2F3(iVar6, "pscth");
		iVar376 = unk_0xCB845A663B4DD2F3(iVar6, "psctot");
		iVar377 = unk_0xCB845A663B4DD2F3(iVar6, "psctoi");
		iVar378 = unk_0xCB845A663B4DD2F3(iVar6, "pscatd");
		iVar379 = unk_0xCB845A663B4DD2F3(iVar6, "pprtot");
		iVar380 = unk_0xCB845A663B4DD2F3(iVar6, "pprtoi");
		iVar381 = unk_0xCB845A663B4DD2F3(iVar6, "ppratd");
		iVar382 = unk_0xCB845A663B4DD2F3(iVar6, "cutsc");
		iVar383 = unk_0xCB845A663B4DD2F3(iVar6, "cutsh");
		iVar384 = unk_0xCB845A663B4DD2F3(iVar6, "cstsc");
		iVar385 = unk_0xCB845A663B4DD2F3(iVar6, "cstsh");
		iVar386 = unk_0xCB845A663B4DD2F3(iVar6, "gtbsr");
		iVar387 = unk_0xCB845A663B4DD2F3(iVar6, "gtbss");
		iVar388 = unk_0xCB845A663B4DD2F3(iVar6, "nmaggg");
		iVar389 = unk_0xCB845A663B4DD2F3(iVar6, "nmpass");
		iVar390 = unk_0xCB845A663B4DD2F3(iVar6, "nmfail");
		iVar391 = unk_0xCB845A663B4DD2F3(iVar6, "pmcp");
		iVar392 = unk_0xCB845A663B4DD2F3(iVar6, "pmcf");
		iVar393 = unk_0xCB845A663B4DD2F3(iVar6, "pmca");
		iVar193 = unk_0xCB845A663B4DD2F3(iVar6, "pambv");
		iVar194 = unk_0xCB845A663B4DD2F3(iVar6, "pwrpt");
		iVar195 = unk_0xCB845A663B4DD2F3(iVar6, "pcash");
		iVar196 = unk_0xCB845A663B4DD2F3(iVar6, "ptrdi");
		iVar197 = unk_0xCB845A663B4DD2F3(iVar6, "pspov");
		iVar198 = unk_0xCB845A663B4DD2F3(iVar6, "paccc");
		iVar199 = unk_0xCB845A663B4DD2F3(iVar6, "pslp");
		iVar200 = unk_0xCB845A663B4DD2F3(iVar6, "psor");
		iVar201 = unk_0xCB845A663B4DD2F3(iVar6, "psort");
		iVar202 = unk_0xCB845A663B4DD2F3(iVar6, "pspovr");
		iVar214 = unk_0xCB845A663B4DD2F3(iVar6, "pspln");
		iVar213 = unk_0xCB845A663B4DD2F3(iVar6, "pcara");
		iVar203 = unk_0xCB845A663B4DD2F3(iVar6, "paagzn");
		iVar215 = unk_0xCB845A663B4DD2F3(iVar6, "pior");
		iVar216 = unk_0xCB845A663B4DD2F3(iVar6, "piort");
		iVar217 = unk_0xCB845A663B4DD2F3(iVar6, "phbor");
		iVar218 = unk_0xCB845A663B4DD2F3(iVar6, "phbort");
		iVar204 = unk_0xCB845A663B4DD2F3(iVar6, "pfbr");
		iVar205 = unk_0xCB845A663B4DD2F3(iVar6, "pfbd");
		iVar209 = unk_0xCB845A663B4DD2F3(iVar6, "pBcor");
		iVar210 = unk_0xCB845A663B4DD2F3(iVar6, "pLcor");
		iVar211 = unk_0xCB845A663B4DD2F3(iVar6, "pCwhT");
		iVar212 = unk_0xCB845A663B4DD2F3(iVar6, "pFVehS");
		iVar406 = unk_0xCB845A663B4DD2F3(iVar6, "phffa");
		iVar206 = unk_0xCB845A663B4DD2F3(iVar6, "vdamspok");
		iVar360 = unk_0xCB845A663B4DD2F3(iVar6, "pdrlgrr");
		iVar361 = unk_0xCB845A663B4DD2F3(iVar6, "pdrlgrt");
		iVar207 = unk_0xCB845A663B4DD2F3(iVar6, "pznsp");
		iVar208 = unk_0xCB845A663B4DD2F3(iVar6, "pznsp2");
		iVar407 = unk_0xCB845A663B4DD2F3(iVar6, "pcdat");
		iVar408 = unk_0xCB845A663B4DD2F3(iVar6, "pcdl2s");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar394[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar399[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_101955 - 1))
	{
		if (iVar0 < 80)
		{
			Global_4456448.f_101961[iVar0 /*493*/] = { unk_0xB6537A31819F86E5(iVar7, iVar0) };
			Global_4456448.f_101961[iVar0 /*493*/].f_3 = unk_0xB496A8A1F76DD70A(iVar8, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_4 = unk_0xB496A8A1F76DD70A(iVar9, iVar0);
			if (Global_4456448.f_101961[iVar0 /*493*/].f_4 < 0.75f)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_4 = 0.75f;
			}
			iVar2 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_19 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_19 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_19 = iVar2;
			}
			if (!func_129() && !func_195())
			{
				if (!unk_0xCBBFE6965951B21E(Global_4456448.f_101961[iVar0 /*493*/].f_19))
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_19 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_20 = iVar2;
			iVar2 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_21 = iVar2;
			if (Global_4456448 == 1)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_22[0] = unk_0xF6EB12D7E162DA9C(uVar14[0], iVar0);
			}
			Global_4456448.f_101961[iVar0 /*493*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			if (!func_194(Global_4456448.f_101961[iVar0 /*493*/].f_20))
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_20 = joaat("weapon_pistol");
			}
			Global_4456448.f_101961[iVar0 /*493*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			if (iVar22 != 0 && unk_0xB988B7EA5B6DE257(iVar22, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_44 = -1;
			}
			if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_42 = 100;
			}
			Global_4456448.f_101961[iVar0 /*493*/].f_69 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_50 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_51 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_52 = unk_0xB496A8A1F76DD70A(iVar31, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_53 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_429 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_54 = unk_0xB496A8A1F76DD70A(iVar34, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_55 = unk_0xB496A8A1F76DD70A(iVar35, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_56 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_5 = unk_0xB496A8A1F76DD70A(iVar38, iVar0);
			if (((((iVar39 != 0 && iVar40 != 0) && iVar41 != 0) && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_6 = unk_0xB496A8A1F76DD70A(iVar39, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_6 = 0f;
				Global_4456448.f_101961[iVar0 /*493*/].f_7 = 0;
				Global_4456448.f_101961[iVar0 /*493*/].f_8 = -1;
			}
			if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_18 = 0;
			}
			if (((iVar43 != 0 && iVar44 != 0) && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 3)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_9 = { unk_0xB6537A31819F86E5(iVar43, iVar0) };
				Global_4456448.f_101961[iVar0 /*493*/].f_12 = unk_0xB496A8A1F76DD70A(iVar44, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_9 = { 0f, 0f, 0f };
				Global_4456448.f_101961[iVar0 /*493*/].f_12 = 0f;
			}
			if (((iVar45 != 0 && iVar46 != 0) && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 3)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_13 = { unk_0xB6537A31819F86E5(iVar45, iVar0) };
				Global_4456448.f_101961[iVar0 /*493*/].f_16 = unk_0xB496A8A1F76DD70A(iVar46, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_13 = { 0f, 0f, 0f };
				Global_4456448.f_101961[iVar0 /*493*/].f_16 = 0f;
			}
			Global_4456448.f_101961[iVar0 /*493*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
			if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_40 = -1;
			}
			Global_4456448.f_101961[iVar0 /*493*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar49, iVar0);
			Global_4456448.f_101961[iVar0 /*493*/].f_267 = unk_0xF6EB12D7E162DA9C(iVar50, iVar0);
			if (iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_268 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_268 = 0;
			}
			if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_269 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_269 = 0;
			}
			if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_270 = unk_0xF6EB12D7E162DA9C(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_270 = 0;
			}
			if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_271 = unk_0xF6EB12D7E162DA9C(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_271 = 0;
			}
			if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_272 = unk_0xF6EB12D7E162DA9C(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_272 = 0;
			}
			if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_273 = unk_0xF6EB12D7E162DA9C(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_273 = 0;
			}
			if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_274 = unk_0xF6EB12D7E162DA9C(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_274 = 0;
			}
			if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_275 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_275 = 0;
			}
			if (iVar59 != 0 && unk_0xB988B7EA5B6DE257(iVar59, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_276 = unk_0xF6EB12D7E162DA9C(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_276 = 0;
			}
			if (iVar60 != 0 && unk_0xB988B7EA5B6DE257(iVar60, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_277 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_277 = 0;
			}
			if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_278 = unk_0xF6EB12D7E162DA9C(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_278 = 0;
			}
			if (iVar62 != 0 && unk_0xB988B7EA5B6DE257(iVar62, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_279 = unk_0xF6EB12D7E162DA9C(iVar62, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_279 = 0;
			}
			if (iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_280 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_280 = 0;
			}
			if (iVar64 != 0 && unk_0xB988B7EA5B6DE257(iVar64, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_281 = unk_0xF6EB12D7E162DA9C(iVar64, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_281 = 0;
			}
			if (iVar65 != 0 && unk_0xB988B7EA5B6DE257(iVar65, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_492 = unk_0xB496A8A1F76DD70A(iVar65, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_492 = 32f;
			}
			if (iVar66 != 0 && unk_0xB988B7EA5B6DE257(iVar66, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_282 = unk_0xF6EB12D7E162DA9C(iVar66, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_282 = -1;
			}
			if (iVar67 != 0 && unk_0xB988B7EA5B6DE257(iVar67, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_283 = unk_0xF6EB12D7E162DA9C(iVar67, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_283 = 0;
			}
			if (iVar71 != 0 && unk_0xB988B7EA5B6DE257(iVar71, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_436 = unk_0xF6EB12D7E162DA9C(iVar71, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_436 = -1;
			}
			if (iVar72 != 0 && unk_0xB988B7EA5B6DE257(iVar72, iVar0) == 3)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_437 = unk_0xB496A8A1F76DD70A(iVar72, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_437 = -1f;
			}
			if (iVar73 != 0 && unk_0xB988B7EA5B6DE257(iVar73, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_438 = unk_0xF6EB12D7E162DA9C(iVar73, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_438 = -1;
			}
			if (iVar74 != 0 && unk_0xB988B7EA5B6DE257(iVar74, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_439 = unk_0xF6EB12D7E162DA9C(iVar74, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_439 = -1;
			}
			if (iVar75 != 0 && unk_0xB988B7EA5B6DE257(iVar75, iVar0) == 3)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_448 = unk_0xB496A8A1F76DD70A(iVar75, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_448 = 0f;
			}
			if (iVar76 != 0 && unk_0xB988B7EA5B6DE257(iVar76, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_489 = unk_0xF6EB12D7E162DA9C(iVar76, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_489 = -1;
			}
			if (iVar77 != 0 && unk_0xB988B7EA5B6DE257(iVar77, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_440 = unk_0xF6EB12D7E162DA9C(iVar77, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_440 = 0;
			}
			if (iVar78 != 0 && unk_0xB988B7EA5B6DE257(iVar78, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_441 = unk_0xF6EB12D7E162DA9C(iVar78, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_441 = -1;
			}
			if (iVar79 != 0 && unk_0xB988B7EA5B6DE257(iVar79, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_442 = unk_0xF6EB12D7E162DA9C(iVar79, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_442 = -1;
			}
			if (iVar80 != 0 && unk_0xB988B7EA5B6DE257(iVar80, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_443 = unk_0xF6EB12D7E162DA9C(iVar80, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_443 = -1;
			}
			if (iVar81 != 0 && unk_0xB988B7EA5B6DE257(iVar81, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_444 = unk_0xF6EB12D7E162DA9C(iVar81, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_444 = -1;
			}
			if (iVar82 != 0 && unk_0xB988B7EA5B6DE257(iVar82, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_445 = unk_0xF6EB12D7E162DA9C(iVar82, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_445 = -1;
			}
			if (iVar83 != 0 && unk_0xB988B7EA5B6DE257(iVar83, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_446 = unk_0xF6EB12D7E162DA9C(iVar83, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_446 = -1;
			}
			if (iVar68 != 0 && unk_0xB988B7EA5B6DE257(iVar68, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_284 = unk_0xF6EB12D7E162DA9C(iVar68, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_284 = -1;
			}
			if (iVar69 != 0 && unk_0xB988B7EA5B6DE257(iVar69, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_426 = unk_0xF6EB12D7E162DA9C(iVar69, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_426 = -1;
			}
			if (iVar70 != 0 && unk_0xB988B7EA5B6DE257(iVar70, iVar0) == 2)
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_427 = unk_0xF6EB12D7E162DA9C(iVar70, iVar0);
			}
			else
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_427 = -1;
			}
			if (func_136())
			{
				Global_4456448.f_101961[iVar0 /*493*/].f_70 = unk_0xF6EB12D7E162DA9C(iVar144, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_71 = unk_0xF6EB12D7E162DA9C(iVar145, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_72 = unk_0xF6EB12D7E162DA9C(iVar146, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_77 = unk_0xF6EB12D7E162DA9C(iVar147, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_78 = unk_0xF6EB12D7E162DA9C(iVar148, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_79 = unk_0xF6EB12D7E162DA9C(iVar149, iVar0);
				if (iVar150 != 0 && unk_0xB988B7EA5B6DE257(iVar150, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_231 = unk_0xF6EB12D7E162DA9C(iVar150, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_228 = unk_0xF6EB12D7E162DA9C(iVar151, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_234 = unk_0xF6EB12D7E162DA9C(iVar152, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_237 = unk_0xF6EB12D7E162DA9C(iVar153, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_240 = unk_0xF6EB12D7E162DA9C(iVar154, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_243 = unk_0xF6EB12D7E162DA9C(iVar155, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_232 = unk_0xF6EB12D7E162DA9C(iVar156, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_229 = unk_0xF6EB12D7E162DA9C(iVar157, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_235 = unk_0xF6EB12D7E162DA9C(iVar158, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_238 = unk_0xF6EB12D7E162DA9C(iVar159, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_241 = unk_0xF6EB12D7E162DA9C(iVar160, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_244 = unk_0xF6EB12D7E162DA9C(iVar161, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_233 = unk_0xF6EB12D7E162DA9C(iVar162, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_230 = unk_0xF6EB12D7E162DA9C(iVar163, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_236 = unk_0xF6EB12D7E162DA9C(iVar164, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_239 = unk_0xF6EB12D7E162DA9C(iVar165, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_242 = unk_0xF6EB12D7E162DA9C(iVar166, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_245 = unk_0xF6EB12D7E162DA9C(iVar167, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_231 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_228 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_234 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_237 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_240 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_243 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_232 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_229 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_235 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_238 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_241 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_244 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_233 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_230 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_236 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_239 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_242 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_245 = -1;
				}
				Global_4456448.f_101961[iVar0 /*493*/].f_76 = unk_0xF6EB12D7E162DA9C(iVar168, iVar0);
				if (iVar169 != 0 && unk_0xB988B7EA5B6DE257(iVar169, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_296 = unk_0xF6EB12D7E162DA9C(iVar169, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_296 = 0;
				}
				if (iVar170 != 0 && unk_0xB988B7EA5B6DE257(iVar170, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_297 = unk_0xB496A8A1F76DD70A(iVar170, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_297 = -1f;
				}
				if (iVar171 != 0 && unk_0xB988B7EA5B6DE257(iVar171, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_298 = unk_0xB496A8A1F76DD70A(iVar171, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_298 = -1f;
				}
				if (iVar172 != 0 && unk_0xB988B7EA5B6DE257(iVar172, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_299 = unk_0xF6EB12D7E162DA9C(iVar172, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_299 = 250;
				}
				if (iVar173 != 0 && unk_0xB988B7EA5B6DE257(iVar173, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_302 = unk_0xF6EB12D7E162DA9C(iVar173, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_302 = 0;
				}
				if (iVar174 != 0 && unk_0xB988B7EA5B6DE257(iVar174, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_303 = unk_0xF6EB12D7E162DA9C(iVar174, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_303 = -1;
				}
				if (iVar175 != 0 && unk_0xB988B7EA5B6DE257(iVar175, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_304 = unk_0xF6EB12D7E162DA9C(iVar175, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_304 = 0;
				}
				if (iVar176 != 0 && unk_0xB988B7EA5B6DE257(iVar176, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_300 = unk_0xF6EB12D7E162DA9C(iVar176, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_300 = 0;
				}
				if (iVar177 != 0 && unk_0xB988B7EA5B6DE257(iVar177, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_301 = unk_0xF6EB12D7E162DA9C(iVar177, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_301 = -1;
				}
				if (iVar178 != 0 && unk_0xB988B7EA5B6DE257(iVar178, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_377 = unk_0xF6EB12D7E162DA9C(iVar178, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_377 = -1;
				}
				if (iVar179 != 0 && unk_0xB988B7EA5B6DE257(iVar179, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_378 = unk_0xF6EB12D7E162DA9C(iVar179, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_378 = -1;
				}
				if (iVar181 != 0 && unk_0xB988B7EA5B6DE257(iVar181, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_305 = { unk_0xB6537A31819F86E5(iVar181, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_305 = { 0f, 0f, 0f };
				}
				if (iVar182 != 0 && unk_0xB988B7EA5B6DE257(iVar182, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_308 = { unk_0xB6537A31819F86E5(iVar182, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_308 = { 0f, 0f, 0f };
				}
				if (((((iVar186 != 0 && iVar187 != 0) && iVar180 != 0) && unk_0xB988B7EA5B6DE257(iVar186, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar187, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar180, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_316 = { unk_0xB6537A31819F86E5(iVar186, iVar0) };
					Global_4456448.f_101961[iVar0 /*493*/].f_319 = { unk_0xB6537A31819F86E5(iVar187, iVar0) };
					Global_4456448.f_101961[iVar0 /*493*/].f_322 = unk_0xB496A8A1F76DD70A(iVar180, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_316 = { 0f, 0f, 0f };
					Global_4456448.f_101961[iVar0 /*493*/].f_319 = { 0f, 0f, 0f };
					Global_4456448.f_101961[iVar0 /*493*/].f_322 = 1f;
				}
				if (((((iVar183 != 0 && iVar184 != 0) && iVar185 != 0) && unk_0xB988B7EA5B6DE257(iVar183, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar184, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar185, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_259 = unk_0xB496A8A1F76DD70A(iVar183, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_253 = { unk_0xB6537A31819F86E5(iVar184, iVar0) };
					Global_4456448.f_101961[iVar0 /*493*/].f_256 = { unk_0xB6537A31819F86E5(iVar185, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_259 = 0f;
					Global_4456448.f_101961[iVar0 /*493*/].f_253 = { 0f, 0f, 0f };
					Global_4456448.f_101961[iVar0 /*493*/].f_256 = { 0f, 0f, 0f };
				}
				if (iVar192 != 0 && unk_0xB988B7EA5B6DE257(iVar192, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_341 = unk_0xF6EB12D7E162DA9C(iVar192, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_341 = 0;
				}
				Global_4456448.f_101961[iVar0 /*493*/].f_312 = unk_0xF6EB12D7E162DA9C(iVar188, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_311 = unk_0xF6EB12D7E162DA9C(iVar189, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_313 = unk_0xF6EB12D7E162DA9C(iVar190, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_314 = unk_0xF6EB12D7E162DA9C(iVar191, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_315 = unk_0xF6EB12D7E162DA9C(iVar220, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_418 = unk_0xF6EB12D7E162DA9C(iVar219, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_323 = unk_0xF6EB12D7E162DA9C(iVar221, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_260 = unk_0xF6EB12D7E162DA9C(iVar222, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar225, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_17 = unk_0xB496A8A1F76DD70A(iVar226, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_251 = unk_0xF6EB12D7E162DA9C(iVar227, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_261 = unk_0xF6EB12D7E162DA9C(iVar228, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_430 = unk_0xF6EB12D7E162DA9C(iVar232, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_447 = unk_0xF6EB12D7E162DA9C(iVar229, iVar0);
				if (iVar233 != 0 && unk_0xB988B7EA5B6DE257(iVar233, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_431 = unk_0xF6EB12D7E162DA9C(iVar233, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_431 = 0;
				}
				if (iVar230 != 0 && unk_0xB988B7EA5B6DE257(iVar230, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_262 = { unk_0xB6537A31819F86E5(iVar230, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_262 = { 0f, 0f, 0f };
				}
				Global_4456448.f_101961[iVar0 /*493*/].f_252 = unk_0xF6EB12D7E162DA9C(iVar231, iVar0);
				Global_4456448.f_101961[iVar0 /*493*/].f_80 = { unk_0xB6537A31819F86E5(iVar234, iVar0) };
				if (iVar235 != 0 && unk_0xB988B7EA5B6DE257(iVar235, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[0 /*3*/] = { unk_0xB6537A31819F86E5(iVar235, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar236 != 0 && unk_0xB988B7EA5B6DE257(iVar236, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[1 /*3*/] = { unk_0xB6537A31819F86E5(iVar236, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar237 != 0 && unk_0xB988B7EA5B6DE257(iVar237, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[2 /*3*/] = { unk_0xB6537A31819F86E5(iVar237, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar238 != 0 && unk_0xB988B7EA5B6DE257(iVar238, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[3 /*3*/] = { unk_0xB6537A31819F86E5(iVar238, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar239 != 0 && unk_0xB988B7EA5B6DE257(iVar239, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[4 /*3*/] = { unk_0xB6537A31819F86E5(iVar239, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[4 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar240 != 0 && unk_0xB988B7EA5B6DE257(iVar240, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[5 /*3*/] = { unk_0xB6537A31819F86E5(iVar240, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[5 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar241 != 0 && unk_0xB988B7EA5B6DE257(iVar241, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[6 /*3*/] = { unk_0xB6537A31819F86E5(iVar241, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_83[6 /*3*/] = { 0f, 0f, 0f };
				}
				if (((iVar223 != 0 && iVar224 != 0) && unk_0xB988B7EA5B6DE257(iVar223, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar224, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_265 = unk_0xF6EB12D7E162DA9C(iVar223, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_266 = unk_0xF6EB12D7E162DA9C(iVar224, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_265 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_266 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 7)
				{
					if (uVar242[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar242[iVar3], iVar0) == 2)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_106[iVar3] = unk_0xF6EB12D7E162DA9C(uVar242[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_106[iVar3] = 0;
					}
					if (uVar251[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar251[iVar3], iVar0) == 2)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_115[iVar3] = unk_0xF6EB12D7E162DA9C(uVar251[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_115[iVar3] = -1;
					}
					if (((uVar260[iVar3] != 0 && uVar269[iVar3] != 0) && unk_0xB988B7EA5B6DE257(uVar260[iVar3], iVar0) == 5) && unk_0xB988B7EA5B6DE257(uVar269[iVar3], iVar0) == 2)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_124[iVar3 /*3*/] = { unk_0xB6537A31819F86E5(uVar260[iVar3], iVar0) };
						Global_4456448.f_101961[iVar0 /*493*/].f_149[iVar3] = unk_0xF6EB12D7E162DA9C(uVar269[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_124[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_4456448.f_101961[iVar0 /*493*/].f_149[iVar3] = 3;
					}
					if (uVar278[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar278[iVar3], iVar0) == 2)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_176[iVar3] = unk_0xF6EB12D7E162DA9C(uVar278[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_176[iVar3] = -1;
					}
					if (uVar287[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar287[iVar3], iVar0) == 3)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_158[iVar3] = unk_0xB496A8A1F76DD70A(uVar287[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_158[iVar3] = 0f;
					}
					if (uVar296[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar296[iVar3], iVar0) == 3)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_167[iVar3] = unk_0xB496A8A1F76DD70A(uVar296[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_167[iVar3] = 0f;
					}
					if (uVar305[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar305[iVar3], iVar0) == 3)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_185[iVar3] = unk_0xB496A8A1F76DD70A(uVar305[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_185[iVar3] = 0f;
					}
					if (uVar314[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar314[iVar3], iVar0) == 2)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_203[iVar3] = unk_0xF6EB12D7E162DA9C(uVar314[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_203[iVar3] = -1;
					}
					iVar3++;
				}
				iVar1 = 0;
				while (iVar1 <= 8)
				{
					if (uVar323[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar323[iVar1], iVar0) == 5)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_449[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar323[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_449[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar333[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar333[iVar1], iVar0) == 3)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_477[iVar1] = unk_0xB496A8A1F76DD70A(uVar333[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_477[iVar1] = 0f;
					}
					iVar1++;
				}
				if (iVar344 != 0 && unk_0xB988B7EA5B6DE257(iVar344, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_324 = unk_0xF6EB12D7E162DA9C(iVar344, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_324 = -1;
				}
				if (iVar343 != 0 && unk_0xB988B7EA5B6DE257(iVar343, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_325 = unk_0xF6EB12D7E162DA9C(iVar343, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_325 = -1;
				}
				if (iVar347 != 0 && unk_0xB988B7EA5B6DE257(iVar347, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_329 = unk_0xF6EB12D7E162DA9C(iVar347, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_329 = -1;
				}
				if (iVar348 != 0 && unk_0xB988B7EA5B6DE257(iVar348, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_328 = unk_0xF6EB12D7E162DA9C(iVar348, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_328 = -1;
				}
				if (iVar346 != 0 && unk_0xB988B7EA5B6DE257(iVar346, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_327 = unk_0xF6EB12D7E162DA9C(iVar346, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_327 = -1;
				}
				if (iVar345 != 0 && unk_0xB988B7EA5B6DE257(iVar345, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_326 = unk_0xF6EB12D7E162DA9C(iVar345, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_326 = -1;
				}
				if (iVar354 != 0 && unk_0xB988B7EA5B6DE257(iVar354, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_340 = unk_0xF6EB12D7E162DA9C(iVar354, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_340 = -3;
				}
				if (iVar349 != 0 && unk_0xB988B7EA5B6DE257(iVar349, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_360 = unk_0xF6EB12D7E162DA9C(iVar349, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_360 = 0;
				}
				if (iVar350 != 0 && unk_0xB988B7EA5B6DE257(iVar350, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_371 = unk_0xB496A8A1F76DD70A(iVar350, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_371 = 1f;
				}
				if (iVar351 != 0 && unk_0xB988B7EA5B6DE257(iVar351, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_372 = unk_0xF6EB12D7E162DA9C(iVar351, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_372 = 0;
				}
				if (iVar353 != 0 && unk_0xB988B7EA5B6DE257(iVar353, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_425 = unk_0xF6EB12D7E162DA9C(iVar353, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_425 = 1;
				}
				if (iVar404 != 0 && unk_0xB988B7EA5B6DE257(iVar404, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_428 = unk_0xB496A8A1F76DD70A(iVar404, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_428 = 0f;
				}
				if (iVar405 != 0 && unk_0xB988B7EA5B6DE257(iVar405, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_433 = unk_0xF6EB12D7E162DA9C(iVar405, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_433 = -1;
				}
				if (iVar407 != 0 && unk_0xB988B7EA5B6DE257(iVar407, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_490 = unk_0xF6EB12D7E162DA9C(iVar407, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_490 = 0;
				}
				if (iVar408 != 0 && unk_0xB988B7EA5B6DE257(iVar408, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_491 = unk_0xF6EB12D7E162DA9C(iVar408, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_491 = 0;
				}
				if (iVar352 != 0 && unk_0xB988B7EA5B6DE257(iVar352, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_105 = unk_0xF6EB12D7E162DA9C(iVar352, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_105 = 0;
				}
				if (iVar355 != 0 && unk_0xB988B7EA5B6DE257(iVar355, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar355, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_60 = 0;
				}
				if (iVar356 != 0 && unk_0xB988B7EA5B6DE257(iVar356, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar356, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_61 = 0;
				}
				if (iVar366 != 0 && unk_0xB988B7EA5B6DE257(iVar366, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_226 = unk_0xF6EB12D7E162DA9C(iVar366, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_226 = -1;
				}
				if (iVar367 != 0 && unk_0xB988B7EA5B6DE257(iVar367, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_227 = unk_0xF6EB12D7E162DA9C(iVar367, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_227 = 0;
				}
				if (iVar368 != 0 && unk_0xB988B7EA5B6DE257(iVar368, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_73 = unk_0xF6EB12D7E162DA9C(iVar368, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_73 = 0;
				}
				if (iVar369 != 0 && unk_0xB988B7EA5B6DE257(iVar369, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_74 = unk_0xF6EB12D7E162DA9C(iVar369, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_74 = 0;
				}
				if (iVar193 != 0 && unk_0xB988B7EA5B6DE257(iVar193, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_379 = unk_0xF6EB12D7E162DA9C(iVar193, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_379 = -1;
				}
				if (iVar194 != 0 && unk_0xB988B7EA5B6DE257(iVar194, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_385 = unk_0xF6EB12D7E162DA9C(iVar194, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_385 = -1;
				}
				if (iVar195 != 0 && unk_0xB988B7EA5B6DE257(iVar195, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_386 = unk_0xF6EB12D7E162DA9C(iVar195, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_386 = -1;
				}
				if (iVar196 != 0 && unk_0xB988B7EA5B6DE257(iVar196, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_387 = unk_0xF6EB12D7E162DA9C(iVar196, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_387 = -1;
				}
				if (iVar197 != 0 && unk_0xB988B7EA5B6DE257(iVar197, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_391 = unk_0xF6EB12D7E162DA9C(iVar197, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_391 = -1;
				}
				if (iVar198 != 0 && unk_0xB988B7EA5B6DE257(iVar198, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_392 = unk_0xB496A8A1F76DD70A(iVar198, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_392 = 0f;
				}
				if (iVar199 != 0 && unk_0xB988B7EA5B6DE257(iVar199, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_388 = unk_0xF6EB12D7E162DA9C(iVar199, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_388 = -1;
				}
				if (iVar200 != 0 && unk_0xB988B7EA5B6DE257(iVar200, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_389 = unk_0xF6EB12D7E162DA9C(iVar200, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_389 = -1;
				}
				if (iVar201 != 0 && unk_0xB988B7EA5B6DE257(iVar201, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_390 = unk_0xF6EB12D7E162DA9C(iVar201, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_390 = -1;
				}
				if (iVar203 != 0 && unk_0xB988B7EA5B6DE257(iVar203, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_419 = unk_0xF6EB12D7E162DA9C(iVar203, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_419 = -1;
				}
				if (iVar204 != 0 && unk_0xB988B7EA5B6DE257(iVar204, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_420 = unk_0xF6EB12D7E162DA9C(iVar204, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_420 = -1;
				}
				if (iVar205 != 0 && unk_0xB988B7EA5B6DE257(iVar205, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_421 = unk_0xF6EB12D7E162DA9C(iVar205, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_421 = 10;
				}
				if (iVar209 != 0 && unk_0xB988B7EA5B6DE257(iVar209, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_422 = unk_0xF6EB12D7E162DA9C(iVar209, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_422 = -1;
				}
				if (iVar210 != 0 && unk_0xB988B7EA5B6DE257(iVar210, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_423 = unk_0xF6EB12D7E162DA9C(iVar210, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_423 = -1;
				}
				if (iVar211 != 0 && unk_0xB988B7EA5B6DE257(iVar211, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_424 = unk_0xF6EB12D7E162DA9C(iVar211, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_424 = 0;
				}
				if (iVar206 != 0 && unk_0xB988B7EA5B6DE257(iVar206, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_432 = unk_0xF6EB12D7E162DA9C(iVar206, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_432 = 0;
				}
				if (iVar207 != 0 && unk_0xB988B7EA5B6DE257(iVar207, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_487 = unk_0xF6EB12D7E162DA9C(iVar207, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_487 = -1;
				}
				if (iVar208 != 0 && unk_0xB988B7EA5B6DE257(iVar208, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_488 = unk_0xF6EB12D7E162DA9C(iVar208, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_488 = 0;
				}
				if (iVar212 != 0 && unk_0xB988B7EA5B6DE257(iVar212, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_75 = unk_0xF6EB12D7E162DA9C(iVar212, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_75 = -1;
				}
				if (iVar406 != 0 && unk_0xB988B7EA5B6DE257(iVar406, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_295 = unk_0xF6EB12D7E162DA9C(iVar406, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_295 = -1;
				}
				if (iVar202 != 0 && unk_0xB988B7EA5B6DE257(iVar202, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_393 = unk_0xF6EB12D7E162DA9C(iVar202, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_393 = -1;
				}
				if (iVar213 != 0 && unk_0xB988B7EA5B6DE257(iVar213, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_412 = unk_0xF6EB12D7E162DA9C(iVar213, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_412 = 10;
				}
				if (iVar215 != 0 && unk_0xB988B7EA5B6DE257(iVar215, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_414 = unk_0xF6EB12D7E162DA9C(iVar215, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_414 = -1;
				}
				if (iVar216 != 0 && unk_0xB988B7EA5B6DE257(iVar216, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_413 = unk_0xF6EB12D7E162DA9C(iVar216, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_413 = 0;
				}
				if (iVar217 != 0 && unk_0xB988B7EA5B6DE257(iVar217, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_416 = unk_0xF6EB12D7E162DA9C(iVar217, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_416 = -1;
				}
				if (iVar218 != 0 && unk_0xB988B7EA5B6DE257(iVar218, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_415 = unk_0xF6EB12D7E162DA9C(iVar218, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_415 = 0;
				}
				if (iVar214 != 0 && unk_0xB988B7EA5B6DE257(iVar214, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_417 = unk_0xF6EB12D7E162DA9C(iVar214, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_417 = 0;
				}
				if (((((iVar370 != 0 && iVar371 != 0) && iVar372 != 0) && unk_0xB988B7EA5B6DE257(iVar370, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar371, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar372, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_212 = unk_0xF6EB12D7E162DA9C(iVar370, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_213 = unk_0xF6EB12D7E162DA9C(iVar371, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_215 = unk_0xF6EB12D7E162DA9C(iVar372, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_212 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_213 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_215 = 0;
				}
				if (((((iVar376 != 0 && iVar377 != 0) && iVar378 != 0) && unk_0xB988B7EA5B6DE257(iVar376, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar377, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar378, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_220 = unk_0xF6EB12D7E162DA9C(iVar376, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_221 = unk_0xF6EB12D7E162DA9C(iVar377, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_222 = unk_0xF6EB12D7E162DA9C(iVar378, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_220 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_221 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_222 = -1;
				}
				if (((((iVar379 != 0 && iVar380 != 0) && iVar381 != 0) && unk_0xB988B7EA5B6DE257(iVar379, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar380, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar381, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_223 = unk_0xF6EB12D7E162DA9C(iVar379, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_224 = unk_0xF6EB12D7E162DA9C(iVar380, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_225 = unk_0xF6EB12D7E162DA9C(iVar381, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_223 = 0;
					Global_4456448.f_101961[iVar0 /*493*/].f_224 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_225 = -1;
				}
				if (iVar373 != 0 && unk_0xB988B7EA5B6DE257(iVar373, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_214 = unk_0xF6EB12D7E162DA9C(iVar373, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_214 = 0;
				}
				if (iVar374 != 0 && unk_0xB988B7EA5B6DE257(iVar374, iVar0) == 5)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_216 = { unk_0xB6537A31819F86E5(iVar374, iVar0) };
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_216 = { 0f, 0f, 0f };
				}
				if (iVar375 != 0 && unk_0xB988B7EA5B6DE257(iVar375, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_219 = unk_0xB496A8A1F76DD70A(iVar375, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_219 = 0f;
				}
				if (iVar360 != 0 && unk_0xB988B7EA5B6DE257(iVar360, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_434 = unk_0xF6EB12D7E162DA9C(iVar360, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_434 = -1;
				}
				if (iVar361 != 0 && unk_0xB988B7EA5B6DE257(iVar361, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_435 = unk_0xF6EB12D7E162DA9C(iVar361, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_435 = -1;
				}
				if (iVar359 != 0 && unk_0xB988B7EA5B6DE257(iVar359, iVar0) == 3)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_68 = unk_0xB496A8A1F76DD70A(iVar359, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_68 = 0f;
				}
				if (((iVar357 != 0 && unk_0xB988B7EA5B6DE257(iVar357, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar358, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar362, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_62 = unk_0xF6EB12D7E162DA9C(iVar357, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_63 = unk_0xF6EB12D7E162DA9C(iVar358, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_64 = unk_0xF6EB12D7E162DA9C(iVar362, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_62 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_63 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_64 = joaat("weapon_pistol");
				}
				if (((((iVar363 != 0 && unk_0xB988B7EA5B6DE257(iVar363, iVar0) == 2) && iVar364 != 0) && unk_0xB988B7EA5B6DE257(iVar364, iVar0) == 2) && iVar365 != 0) && unk_0xB988B7EA5B6DE257(iVar365, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_65 = unk_0xF6EB12D7E162DA9C(iVar363, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_66 = unk_0xF6EB12D7E162DA9C(iVar364, iVar0);
					Global_4456448.f_101961[iVar0 /*493*/].f_67 = unk_0xF6EB12D7E162DA9C(iVar365, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_65 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_66 = -1;
					Global_4456448.f_101961[iVar0 /*493*/].f_67 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0xB988B7EA5B6DE257(iVar382, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_373 = unk_0xF6EB12D7E162DA9C(iVar382, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_373 = -1;
				}
				if (iVar386 != 0 && unk_0xB988B7EA5B6DE257(iVar386, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_6 = unk_0xF6EB12D7E162DA9C(iVar386, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_6 = -1;
				}
				if (iVar387 != 0 && unk_0xB988B7EA5B6DE257(iVar387, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_7 = unk_0xF6EB12D7E162DA9C(iVar387, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_7 = -1;
				}
				if (iVar388 != 0 && unk_0xB988B7EA5B6DE257(iVar388, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_2 = unk_0xF6EB12D7E162DA9C(iVar388, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_2 = -1;
				}
				if (iVar389 != 0 && unk_0xB988B7EA5B6DE257(iVar389, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352 = unk_0xF6EB12D7E162DA9C(iVar389, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352 = -1;
				}
				if (iVar390 != 0 && unk_0xB988B7EA5B6DE257(iVar390, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_1 = unk_0xF6EB12D7E162DA9C(iVar390, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_1 = -1;
				}
				if (iVar391 != 0 && unk_0xB988B7EA5B6DE257(iVar391, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_3 = unk_0xF6EB12D7E162DA9C(iVar391, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_3 = -1;
				}
				if (iVar392 != 0 && unk_0xB988B7EA5B6DE257(iVar392, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_4 = unk_0xF6EB12D7E162DA9C(iVar392, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_4 = -1;
				}
				if (iVar393 != 0 && unk_0xB988B7EA5B6DE257(iVar393, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_5 = unk_0xF6EB12D7E162DA9C(iVar393, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_352.f_5 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0xB988B7EA5B6DE257(iVar383, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_374 = unk_0xF6EB12D7E162DA9C(iVar383, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_374 = 0;
				}
				if (iVar384 != 0 && unk_0xB988B7EA5B6DE257(iVar384, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_375 = unk_0xF6EB12D7E162DA9C(iVar384, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_375 = -1;
				}
				if (iVar385 != 0 && unk_0xB988B7EA5B6DE257(iVar385, iVar0) == 2)
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_376 = unk_0xF6EB12D7E162DA9C(iVar385, iVar0);
				}
				else
				{
					Global_4456448.f_101961[iVar0 /*493*/].f_376 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar394[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar394[iVar1], iVar0) == 5)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_394[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar394[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_394[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar399[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar399[iVar1], iVar0) == 3)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_407[iVar1] = unk_0xB496A8A1F76DD70A(uVar399[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_407[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_42 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_101961[iVar0 /*493*/].f_22[iVar3] = unk_0xF6EB12D7E162DA9C(uVar14[iVar3], iVar0);
						Global_4456448.f_101961[iVar0 /*493*/].f_27[iVar3] = unk_0xF6EB12D7E162DA9C(uVar84[iVar3], iVar0);
						Global_4456448.f_101961[iVar0 /*493*/].f_32[iVar3] = unk_0xF6EB12D7E162DA9C(uVar89[iVar3], iVar0);
						if (Global_4456448.f_101961[iVar0 /*493*/].f_32[iVar3] == -1)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_32[iVar3] = 99999;
						}
						if (uVar94[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar94[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_285[iVar3] = unk_0xF6EB12D7E162DA9C(uVar94[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_285[iVar3] = -1;
						}
						if (uVar99[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar99[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_290[iVar3] = unk_0xF6EB12D7E162DA9C(uVar99[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_290[iVar3] = -1;
						}
						if (uVar104[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar104[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_246[iVar3] = unk_0xF6EB12D7E162DA9C(uVar104[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_246[iVar3] = 0;
						}
						if (uVar109[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar109[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_342[iVar3] = unk_0xF6EB12D7E162DA9C(uVar109[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_342[iVar3] = 0;
						}
						if (uVar114[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar114[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_347[iVar3] = unk_0xF6EB12D7E162DA9C(uVar114[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_347[iVar3] = 0;
						}
						if (((uVar119[iVar3] != 0 && uVar124[iVar3] != 0) && unk_0xB988B7EA5B6DE257(uVar119[iVar3], iVar0) == 2) && unk_0xB988B7EA5B6DE257(uVar124[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_361[iVar3] = unk_0xF6EB12D7E162DA9C(uVar119[iVar3], iVar0);
							Global_4456448.f_101961[iVar0 /*493*/].f_366[iVar3] = unk_0xF6EB12D7E162DA9C(uVar124[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_361[iVar3] = -1;
							Global_4456448.f_101961[iVar0 /*493*/].f_366[iVar3] = -1;
						}
						if (uVar129[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar129[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_380[iVar3] = unk_0xF6EB12D7E162DA9C(uVar129[iVar3], iVar0);
						}
						else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_47380[iVar3 /*4*/][func_193(iVar0)], func_192(iVar0)))
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_380[iVar3] = -1;
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_380[iVar3] = -2;
						}
						if (uVar134[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar134[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_330[iVar3] = unk_0xF6EB12D7E162DA9C(uVar134[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_330[iVar3] = 0;
						}
						if (uVar139[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar139[iVar3], iVar0) == 2)
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_335[iVar3] = unk_0xF6EB12D7E162DA9C(uVar139[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_101961[iVar0 /*493*/].f_335[iVar3] = -1;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_191(&iVar6);
}

void func_191(int iParam0)
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
	
	Global_4456448.f_142774[0] = unk_0xEE6F60A09902D357(*iParam0, "no0");
	iVar1 = unk_0xCB845A663B4DD2F3(*iParam0, "loc0");
	iVar2 = unk_0xCB845A663B4DD2F3(*iParam0, "head0");
	iVar3 = unk_0xCB845A663B4DD2F3(*iParam0, "bit0");
	iVar4 = unk_0xCB845A663B4DD2F3(*iParam0, "veh0");
	iVar5 = unk_0xCB845A663B4DD2F3(*iParam0, "tars0");
	iVar6 = unk_0xCB845A663B4DD2F3(*iParam0, "vfrs0");
	iVar7 = unk_0xCB845A663B4DD2F3(*iParam0, "vfre0");
	iVar8 = unk_0xCB845A663B4DD2F3(*iParam0, "ty0");
	iVar9 = unk_0xCB845A663B4DD2F3(*iParam0, "as0");
	iVar10 = unk_0xCB845A663B4DD2F3(*iParam0, "qu0");
	iVar11 = unk_0xCB845A663B4DD2F3(*iParam0, "gg0");
	iVar12 = unk_0xCB845A663B4DD2F3(*iParam0, "ar0");
	iVar13 = unk_0xCB845A663B4DD2F3(*iParam0, "ttm0");
	iVar14 = unk_0xCB845A663B4DD2F3(*iParam0, "tspr0");
	iVar15 = unk_0xCB845A663B4DD2F3(*iParam0, "lcet0");
	iVar16 = unk_0xCB845A663B4DD2F3(*iParam0, "lcid0");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_142774[0] - 1))
	{
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/] = { unk_0xB6537A31819F86E5(iVar1, iVar0) };
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_3 = unk_0xB496A8A1F76DD70A(iVar2, iVar0);
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar3, iVar0);
		if (iVar4 != 0 && unk_0xB988B7EA5B6DE257(iVar4, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_7 = -1;
		}
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_10 = -1;
		}
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_11 = -1;
		}
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
		Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
		if (iVar13 != 0 && unk_0xB988B7EA5B6DE257(iVar13, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_17 = -2;
		}
		if (iVar14 != 0 && unk_0xB988B7EA5B6DE257(iVar14, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_18 = 0;
		}
		if (iVar15 != 0 && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_19 = -1;
		}
		if (iVar16 != 0 && unk_0xB988B7EA5B6DE257(iVar16, iVar0) == 2)
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
		}
		else
		{
			Global_4456448.f_144041[0 /*1261*/][iVar0 /*21*/].f_20 = -1;
		}
		iVar0++;
	}
	Global_4456448.f_142774[1] = unk_0xEE6F60A09902D357(*iParam0, "no1");
	iVar17 = unk_0xCB845A663B4DD2F3(*iParam0, "loc1");
	iVar18 = unk_0xCB845A663B4DD2F3(*iParam0, "head1");
	iVar19 = unk_0xCB845A663B4DD2F3(*iParam0, "bit1");
	iVar20 = unk_0xCB845A663B4DD2F3(*iParam0, "veh1");
	iVar21 = unk_0xCB845A663B4DD2F3(*iParam0, "tars1");
	iVar22 = unk_0xCB845A663B4DD2F3(*iParam0, "vfrs1");
	iVar23 = unk_0xCB845A663B4DD2F3(*iParam0, "vfre1");
	iVar24 = unk_0xCB845A663B4DD2F3(*iParam0, "ty1");
	iVar25 = unk_0xCB845A663B4DD2F3(*iParam0, "as1");
	iVar26 = unk_0xCB845A663B4DD2F3(*iParam0, "qu1");
	iVar27 = unk_0xCB845A663B4DD2F3(*iParam0, "gg1");
	iVar28 = unk_0xCB845A663B4DD2F3(*iParam0, "ar1");
	iVar29 = unk_0xCB845A663B4DD2F3(*iParam0, "ttm1");
	iVar30 = unk_0xCB845A663B4DD2F3(*iParam0, "tspr1");
	iVar31 = unk_0xCB845A663B4DD2F3(*iParam0, "lcet1");
	iVar32 = unk_0xCB845A663B4DD2F3(*iParam0, "lcid1");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_142774[1] - 1))
	{
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/] = { unk_0xB6537A31819F86E5(iVar17, iVar0) };
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_3 = unk_0xB496A8A1F76DD70A(iVar18, iVar0);
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
		if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_7 = -1;
		}
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
		if (iVar22 != 0 && unk_0xB988B7EA5B6DE257(iVar22, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_10 = -1;
		}
		if (iVar23 != 0 && unk_0xB988B7EA5B6DE257(iVar23, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_11 = -1;
		}
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
		Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
		if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_17 = -2;
		}
		if (iVar30 != 0 && unk_0xB988B7EA5B6DE257(iVar30, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_18 = 0;
		}
		if (iVar31 != 0 && unk_0xB988B7EA5B6DE257(iVar31, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_19 = -1;
		}
		if (iVar32 != 0 && unk_0xB988B7EA5B6DE257(iVar32, iVar0) == 2)
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_144041[1 /*1261*/][iVar0 /*21*/].f_20 = -1;
		}
		iVar0++;
	}
	Global_4456448.f_142774[2] = unk_0xEE6F60A09902D357(*iParam0, "no2");
	iVar33 = unk_0xCB845A663B4DD2F3(*iParam0, "loc2");
	iVar34 = unk_0xCB845A663B4DD2F3(*iParam0, "head2");
	iVar35 = unk_0xCB845A663B4DD2F3(*iParam0, "bit2");
	iVar36 = unk_0xCB845A663B4DD2F3(*iParam0, "veh2");
	iVar37 = unk_0xCB845A663B4DD2F3(*iParam0, "tars2");
	iVar38 = unk_0xCB845A663B4DD2F3(*iParam0, "vfrs2");
	iVar39 = unk_0xCB845A663B4DD2F3(*iParam0, "vfre2");
	iVar40 = unk_0xCB845A663B4DD2F3(*iParam0, "ty2");
	iVar41 = unk_0xCB845A663B4DD2F3(*iParam0, "as2");
	iVar42 = unk_0xCB845A663B4DD2F3(*iParam0, "qu2");
	iVar43 = unk_0xCB845A663B4DD2F3(*iParam0, "gg2");
	iVar44 = unk_0xCB845A663B4DD2F3(*iParam0, "ar2");
	iVar45 = unk_0xCB845A663B4DD2F3(*iParam0, "ttm2");
	iVar46 = unk_0xCB845A663B4DD2F3(*iParam0, "tspr2");
	iVar47 = unk_0xCB845A663B4DD2F3(*iParam0, "lcet2");
	iVar48 = unk_0xCB845A663B4DD2F3(*iParam0, "lcid2");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_142774[2] - 1))
	{
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/] = { unk_0xB6537A31819F86E5(iVar33, iVar0) };
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_3 = unk_0xB496A8A1F76DD70A(iVar34, iVar0);
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
		if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_7 = -1;
		}
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
		if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_10 = -1;
		}
		if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_11 = -1;
		}
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
		Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
		if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_17 = -2;
		}
		if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_18 = 0;
		}
		if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_19 = -1;
		}
		if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar0) == 2)
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_144041[2 /*1261*/][iVar0 /*21*/].f_20 = -1;
		}
		iVar0++;
	}
	Global_4456448.f_142774[3] = unk_0xEE6F60A09902D357(*iParam0, "no3");
	iVar49 = unk_0xCB845A663B4DD2F3(*iParam0, "loc3");
	iVar50 = unk_0xCB845A663B4DD2F3(*iParam0, "head3");
	iVar51 = unk_0xCB845A663B4DD2F3(*iParam0, "bit3");
	iVar52 = unk_0xCB845A663B4DD2F3(*iParam0, "veh3");
	iVar53 = unk_0xCB845A663B4DD2F3(*iParam0, "tars3");
	iVar54 = unk_0xCB845A663B4DD2F3(*iParam0, "vfrs3");
	iVar55 = unk_0xCB845A663B4DD2F3(*iParam0, "vfre3");
	iVar56 = unk_0xCB845A663B4DD2F3(*iParam0, "ty3");
	iVar57 = unk_0xCB845A663B4DD2F3(*iParam0, "as3");
	iVar58 = unk_0xCB845A663B4DD2F3(*iParam0, "qu3");
	iVar59 = unk_0xCB845A663B4DD2F3(*iParam0, "gg3");
	iVar60 = unk_0xCB845A663B4DD2F3(*iParam0, "ar3");
	iVar61 = unk_0xCB845A663B4DD2F3(*iParam0, "ttm3");
	iVar62 = unk_0xCB845A663B4DD2F3(*iParam0, "tspr3");
	iVar63 = unk_0xCB845A663B4DD2F3(*iParam0, "lcid3");
	iVar64 = unk_0xCB845A663B4DD2F3(*iParam0, "lcet3");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_142774[3] - 1))
	{
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/] = { unk_0xB6537A31819F86E5(iVar49, iVar0) };
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_3 = unk_0xB496A8A1F76DD70A(iVar50, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
		if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_7 = -1;
		}
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar53, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar64, iVar0);
		if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar54, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_10 = -1;
		}
		if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar55, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_11 = -1;
		}
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar56, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar57, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar59, iVar0);
		Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
		if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar61, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_17 = -2;
		}
		if (iVar62 != 0 && unk_0xB988B7EA5B6DE257(iVar62, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar62, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_18 = 0;
		}
		if (iVar64 != 0 && unk_0xB988B7EA5B6DE257(iVar64, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar64, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_19 = -1;
		}
		if (iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar0) == 2)
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
		}
		else
		{
			Global_4456448.f_144041[3 /*1261*/][iVar0 /*21*/].f_20 = -1;
		}
		iVar0++;
	}
}

int func_192(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_193(iParam0) * 31);
}

int func_193(int iParam0)
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

int func_194(int iParam0)
{
	if (((((((((((((((((((((((((((((((((iParam0 == joaat("weapon_pistol") || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_assaultrifle")) || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_mg")) || iParam0 == joaat("weapon_combatmg")) || iParam0 == joaat("weapon_pumpshotgun")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_heavysniper")) || iParam0 == joaat("weapon_grenadelauncher")) || iParam0 == joaat("weapon_rpg")) || iParam0 == joaat("weapon_minigun")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_unarmed")) || iParam0 == joaat("weapon_machinepistol")) || iParam0 == joaat("weapon_grenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_molotov")) || iParam0 == joaat("weapon_pipebomb")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_wrench")) || iParam0 == joaat("weapon_specialcarbine")) || iParam0 == joaat("weapon_bullpuprifle")) || iParam0 == joaat("weapon_heavyshotgun")) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == joaat("weapon_assaultshotgun")) || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == joaat("weapon_combatpdw")) || iParam0 == joaat("weapon_specialcarbine_mk2"))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_196()
{
	return Global_4456448 == 3;
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "ene");
	Global_4456448.f_142773 = unk_0xEE6F60A09902D357(iVar1, "no");
	Global_4456448.f_60604 = unk_0xEE6F60A09902D357(iVar1, "veh");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "loc");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "head");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "team");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar1, "dmSPTR");
	if (Global_4456448.f_142773 > 60)
	{
		Global_4456448.f_142773 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_142773 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_142780[iVar0 /*21*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
			Global_4456448.f_142780[iVar0 /*21*/].f_3 = unk_0xB496A8A1F76DD70A(iVar3, iVar0);
			Global_4456448.f_142780[iVar0 /*21*/].f_4 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
			Global_4456448.f_142780[iVar0 /*21*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
		}
		iVar0++;
	}
	func_191(&iVar1);
}

void func_198(int iParam0)
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
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	int iVar58;
	int iVar59;
	
	iVar2 = unk_0x7408DCBD37A2C60F(iParam0, "dprop");
	Global_4456448.f_86025 = func_204(unk_0xEE6F60A09902D357(iVar2, "no"), 0, 200);
	iVar3 = unk_0xCB845A663B4DD2F3(iVar2, "loc");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar2, "vRot");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar2, "head");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar2, "model");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar2, "asst");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar2, "asso");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar2, "asss");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar2, "pasc");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar2, "asst2");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar2, "asso2");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar2, "asss2");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar2, "pasc2");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar2, "asst3");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar2, "asso3");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar2, "asss3");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar2, "pasc3");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar2, "asst4");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar2, "asso4");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar2, "asss4");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar2, "pasc4");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar2, "prpct");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar2, "prpcr");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar2, "prcra");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar2, "prpbs");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar2, "prpkt");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar2, "dprorc");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar2, "prpdclr");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar2, "dptrpx");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar2, "dpsl");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar2, "dpcl");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar2, "dptrRS");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar2, "dyipho");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar2, "dyipbtt");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar2, "dcoid");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar2, "dynrpil");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar2, "dynblov");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar2, "dynblcl");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar2, "dynblrn");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar2, "dynblhd");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar2, "dynblsc");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar2, "dynblpr");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar2, "dprpbtf");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar2, "dprpsgg");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar2, "dprpssg");
	uVar47 = unk_0xCB845A663B4DD2F3(iVar2, "dElec_BS");
	uVar48 = unk_0xCB845A663B4DD2F3(iVar2, "dElec_TDT");
	uVar49 = unk_0xCB845A663B4DD2F3(iVar2, "dynctbs");
	uVar50 = unk_0xCB845A663B4DD2F3(iVar2, "dyncta");
	uVar51 = unk_0xCB845A663B4DD2F3(iVar2, "dyncts");
	uVar52 = unk_0xCB845A663B4DD2F3(iVar2, "dyncwt");
	uVar53 = unk_0xCB845A663B4DD2F3(iVar2, "dyncvr");
	uVar54 = unk_0xCB845A663B4DD2F3(iVar2, "dyncvw");
	uVar55 = unk_0xCB845A663B4DD2F3(iVar2, "dyncsr");
	uVar56 = unk_0xCB845A663B4DD2F3(iVar2, "dyncsht");
	uVar57 = unk_0xCB845A663B4DD2F3(iVar2, "dyncbht");
	if (Global_4456448.f_86025 > 32)
	{
		Global_4456448.f_86025 = 32;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_86025 - 1))
	{
		Global_4456448.f_86027[iVar0 /*60*/] = { unk_0xB6537A31819F86E5(iVar3, iVar0) };
		Global_4456448.f_86027[iVar0 /*60*/].f_3 = { unk_0xB6537A31819F86E5(iVar4, iVar0) };
		Global_4456448.f_86027[iVar0 /*60*/].f_6 = unk_0xB496A8A1F76DD70A(iVar5, iVar0);
		Global_4456448.f_86027[iVar0 /*60*/].f_8 = -1;
		iVar1 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
		Global_4456448.f_86027[iVar0 /*60*/].f_7 = func_203(iVar1);
		if (!unk_0xCBBFE6965951B21E(Global_4456448.f_86027[iVar0 /*60*/].f_7))
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_4456448.f_86027[iVar0 /*60*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		Global_4456448.f_86027[iVar0 /*60*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		Global_4456448.f_86027[iVar0 /*60*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		if (Global_4456448.f_86027[iVar0 /*60*/].f_13 == -1)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_13 = 0;
		}
		if (iVar11 != 0 && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_21 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_22 = -1;
			Global_4456448.f_86027[iVar0 /*60*/].f_19 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_25 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_23 = -1;
			Global_4456448.f_86027[iVar0 /*60*/].f_20 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_26 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_24 = -1;
			Global_4456448.f_86027[iVar0 /*60*/].f_21 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_27 = 0;
		}
		if (iVar10 != 0 && unk_0xB988B7EA5B6DE257(iVar10, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar14, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
			Global_4456448.f_86027[iVar0 /*60*/].f_30 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_14 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_28 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_29 = 0;
			Global_4456448.f_86027[iVar0 /*60*/].f_30 = 0;
		}
		if (iVar24 != 0 && unk_0xB988B7EA5B6DE257(iVar24, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_15 = -1;
		}
		if (iVar23 != 0 && unk_0xB988B7EA5B6DE257(iVar23, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_16 = -1;
		}
		if (iVar25 != 0 && unk_0xB988B7EA5B6DE257(iVar25, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_17 = -1;
		}
		if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_18 = 0;
		}
		if (iVar28 != 0 && unk_0xB988B7EA5B6DE257(iVar28, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_31 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_31 = 0;
		}
		if (iVar27 != 0 && unk_0xB988B7EA5B6DE257(iVar27, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_9 = 0;
		}
		if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_10 = 1;
		}
		if (iVar30 != 0 && unk_0xB988B7EA5B6DE257(iVar30, iVar0) == 3)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_32 = unk_0xB496A8A1F76DD70A(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_32 = 2f;
		}
		if (iVar33 != 0 && unk_0xB988B7EA5B6DE257(iVar33, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_35 = -1;
		}
		if (iVar31 != 0 && unk_0xB988B7EA5B6DE257(iVar31, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_33 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_33 = 0;
		}
		if (iVar32 != 0 && unk_0xB988B7EA5B6DE257(iVar32, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_34 = 0;
		}
		if (iVar32 != 0 && unk_0xB988B7EA5B6DE257(iVar32, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_34 = 0;
		}
		if (iVar34 != 0 && unk_0xB988B7EA5B6DE257(iVar34, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_36 = 0;
		}
		if (iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_37 = 0;
		}
		if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_38 = 0;
		}
		if (iVar37 != 0 && unk_0xB988B7EA5B6DE257(iVar37, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_39 = -1;
		}
		if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_40 = 0;
		}
		if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_41 = 0;
		}
		if (iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_42 = 0;
		}
		if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 3)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_43 = unk_0xB496A8A1F76DD70A(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_43 = 0f;
		}
		if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 3)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_44 = unk_0xB496A8A1F76DD70A(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_44 = 1f;
		}
		if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_45 = 0;
		}
		if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_57 = 0;
		}
		if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_58 = 0;
		}
		if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_86027[iVar0 /*60*/].f_59 = 0;
		}
		func_202(&(Global_4456448.f_86027[iVar0 /*60*/].f_46), iVar0, &uVar47, &uVar48);
		func_201(&(Global_4456448.f_86027[iVar0 /*60*/].f_46.f_2), iVar0, &uVar49, &uVar50, &uVar51, &uVar52, &uVar53, &uVar54, &uVar55, &uVar56, &uVar57);
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_86027[iVar0 /*60*/].f_18, 6))
		{
			if (Global_4456448.f_86027[iVar0 /*60*/].f_7 == joaat("ch_prop_ch_cctv_cam_01a"))
			{
				Global_4456448.f_86027[iVar0 /*60*/].f_7 = joaat("ch_prop_ch_cctv_cam_02a");
			}
		}
		iVar0++;
	}
	iVar58 = iVar0;
	if ((func_200() || Global_4456448 == 1) && !func_199())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_60688 - 1))
		{
			Global_4456448.f_86027[iVar58 /*60*/] = { Global_4456448.f_60691[iVar0 /*219*/] };
			Global_4456448.f_86027[iVar58 /*60*/].f_3 = { Global_4456448.f_60691[iVar0 /*219*/].f_4 };
			Global_4456448.f_86027[iVar58 /*60*/].f_6 = Global_4456448.f_60691[iVar0 /*219*/].f_3;
			Global_4456448.f_86027[iVar58 /*60*/].f_8 = iVar0;
			Global_4456448.f_86027[iVar58 /*60*/].f_7 = joaat("prop_container_ld_pu");
			iVar59 = 0;
			while (iVar59 <= 3)
			{
				Global_4456448.f_60691[iVar58 /*219*/].f_19[iVar59] = 0;
				Global_4456448.f_60691[iVar58 /*219*/].f_24[iVar59] = 99999;
				iVar59++;
			}
			Global_4456448.f_86026++;
			Global_4456448.f_86025++;
			iVar58++;
			iVar0++;
		}
	}
}

bool func_199()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0);
	}
	return ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0) || Global_1654024) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_200()
{
	if (Global_4456448 == 0 && Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_201(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	struct<9> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1082130432;
	Var0.f_5 = 1077936128;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
	if (*uParam2 != 0 && unk_0xB988B7EA5B6DE257(*uParam2, iParam1) == 2)
	{
		*uParam0 = unk_0xF6EB12D7E162DA9C(*uParam2, iParam1);
	}
	if (*uParam3 != 0 && unk_0xB988B7EA5B6DE257(*uParam3, iParam1) == 3)
	{
		uParam0->f_1 = unk_0xB496A8A1F76DD70A(*uParam3, iParam1);
	}
	if (*uParam4 != 0 && unk_0xB988B7EA5B6DE257(*uParam4, iParam1) == 3)
	{
		uParam0->f_2 = unk_0xB496A8A1F76DD70A(*uParam4, iParam1);
	}
	if (*uParam5 != 0 && unk_0xB988B7EA5B6DE257(*uParam5, iParam1) == 3)
	{
		uParam0->f_3 = unk_0xB496A8A1F76DD70A(*uParam5, iParam1);
	}
	if (*uParam6 != 0 && unk_0xB988B7EA5B6DE257(*uParam6, iParam1) == 3)
	{
		uParam0->f_4 = unk_0xB496A8A1F76DD70A(*uParam6, iParam1);
	}
	if (*uParam7 != 0 && unk_0xB988B7EA5B6DE257(*uParam7, iParam1) == 3)
	{
		uParam0->f_5 = unk_0xB496A8A1F76DD70A(*uParam7, iParam1);
	}
	if (*uParam8 != 0 && unk_0xB988B7EA5B6DE257(*uParam8, iParam1) == 2)
	{
		uParam0->f_6 = unk_0xF6EB12D7E162DA9C(*uParam8, iParam1);
	}
	if (*uParam9 != 0 && unk_0xB988B7EA5B6DE257(*uParam9, iParam1) == 2)
	{
		uParam0->f_7 = unk_0xF6EB12D7E162DA9C(*uParam9, iParam1);
	}
	if (*uParam10 != 0 && unk_0xB988B7EA5B6DE257(*uParam10, iParam1) == 2)
	{
		uParam0->f_8 = unk_0xF6EB12D7E162DA9C(*uParam10, iParam1);
	}
}

void func_202(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 0 && unk_0xB988B7EA5B6DE257(*uParam2, iParam1) == 2)
	{
		*uParam0 = unk_0xF6EB12D7E162DA9C(*uParam2, iParam1);
	}
	if (*uParam3 != 0 && unk_0xB988B7EA5B6DE257(*uParam3, iParam1) == 2)
	{
		uParam0->f_1 = unk_0xF6EB12D7E162DA9C(*uParam3, iParam1);
	}
}

int func_203(int iParam0)
{
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_01"))
	{
		return joaat("ba_prop_battle_tube_fn_01");
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_02"))
	{
		return joaat("ba_prop_battle_tube_fn_02");
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_03"))
	{
		return joaat("ba_prop_battle_tube_fn_03");
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_04"))
	{
		return joaat("ba_prop_battle_tube_fn_04");
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_05"))
	{
		return joaat("ba_prop_battle_tube_fn_05");
	}
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
	if (iParam0 == joaat("xs_prop_arena_turntable_02a_sf"))
	{
		return joaat("vw_prop_arena_turntable_02f_sf");
	}
	if ((unk_0x39FDED461BF385C3() || unk_0x77BA37DB22C66465()) || unk_0xE434AB6E3DE89861())
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
	else if (unk_0xDB02E0A2E60C82EB() || unk_0xDC143D98E1977B20())
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

int func_204(int iParam0, int iParam1, int iParam2)
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

void func_205(int iParam0)
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
	var uVar72[4];
	char[] cVar77[8];
	int iVar79;
	int iVar80;
	
	iVar3 = unk_0x7408DCBD37A2C60F(iParam0, "prop");
	Global_4456448.f_69120 = unk_0xEE6F60A09902D357(iVar3, "no");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar3, "loc");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar3, "vRot");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar3, "head");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar3, "model");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar3, "asst");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar3, "asso");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar3, "asss");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar3, "pasc");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar3, "asst2");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar3, "asso2");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar3, "asss2");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar3, "pasc2");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar3, "asst3");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar3, "asso3");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar3, "asss3");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar3, "pasc3");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar3, "asst4");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar3, "asso4");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar3, "asss4");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar3, "pasc4");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar3, "bpbid");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar3, "bpbip");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar3, "bpbpt");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar3, "fcuat");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar3, "prpclcr");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar3, "prpclc");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar3, "aldel");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar3, "alsnd");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar3, "alteam");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar3, "flvfx");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar3, "flcl");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar3, "prpcl");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar3, "prplod");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar3, "prpatn");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar3, "prpasn");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar3, "prpclr");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar3, "prptsp");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar3, "prptds");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar3, "prpsba");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar3, "sndid");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar3, "sndtri");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar3, "sndlmt");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar3, "prpsnpp");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar3, "prpct");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar3, "prpcr");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar3, "prpbs2");
	iVar50 = unk_0xCB845A663B4DD2F3(iVar3, "prcra");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar3, "prpbs");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar3, "prers");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar3, "ptfxtr");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar3, "ptfxst");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar3, "prrorc");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar3, "updatez");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar3, "updtime");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar3, "upddel");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar3, "pLODDist");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar3, "fwTPos");
	iVar61 = unk_0xCB845A663B4DD2F3(iVar3, "fwTSize");
	iVar62 = unk_0xCB845A663B4DD2F3(iVar3, "fwTeam");
	iVar63 = unk_0xCB845A663B4DD2F3(iVar3, "TrTAct");
	iVar64 = unk_0xCB845A663B4DD2F3(iVar3, "TrPPD");
	iVar65 = unk_0xCB845A663B4DD2F3(iVar3, "prpdypil");
	iVar66 = unk_0xCB845A663B4DD2F3(iVar3, "TTPH");
	iVar67 = unk_0xCB845A663B4DD2F3(iVar3, "cusprpMn");
	iVar68 = unk_0xCB845A663B4DD2F3(iVar3, "prppi");
	iVar69 = unk_0xCB845A663B4DD2F3(iVar3, "prpsbt");
	iVar70 = unk_0xCB845A663B4DD2F3(iVar3, "prpsgg");
	iVar71 = unk_0xCB845A663B4DD2F3(iVar3, "prpssg");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar77, "prpsdp", 8);
		StringIntConCat(&cVar77, iVar2, 8);
		uVar72[iVar2] = unk_0xCB845A663B4DD2F3(iVar3, &cVar77);
		iVar2++;
	}
	iVar79 = unk_0xCB845A663B4DD2F3(iVar3, "pdip");
	if (Global_4456448.f_69120 > 200)
	{
		Global_4456448.f_69120 = 200;
	}
	if (iVar67 != 0)
	{
		iVar2 = 0;
		while (iVar2 <= (unk_0x6B06CA8F004A94A0(iVar67) - 1))
		{
			if (unk_0xB988B7EA5B6DE257(iVar67, iVar2) == 2)
			{
				Global_4456448.f_191973[iVar2] = unk_0xF6EB12D7E162DA9C(iVar67, iVar2);
				if (unk_0xCBBFE6965951B21E(Global_4456448.f_191973[iVar2]))
				{
					Global_4456448.f_191994++;
				}
				else
				{
					Global_4456448.f_191973[iVar2] = 0;
				}
			}
			else
			{
				Global_4456448.f_191973[iVar2] = 0;
			}
			iVar2++;
		}
	}
	iVar80 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_69120 - 1))
	{
		Global_4456448.f_69121[iVar0 /*84*/] = { unk_0xB6537A31819F86E5(iVar4, iVar0) };
		Global_4456448.f_69121[iVar0 /*84*/].f_3 = { unk_0xB6537A31819F86E5(iVar5, iVar0) };
		Global_4456448.f_69121[iVar0 /*84*/].f_6 = unk_0xB496A8A1F76DD70A(iVar6, iVar0);
		iVar1 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_7 = func_203(iVar1);
		if (Global_4456448.f_69121[iVar0 /*84*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
		{
			iVar80++;
			if (iVar80 > 15)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_7 = joaat("stt_prop_stunt_tube_xxs");
			}
		}
		if (!unk_0xCBBFE6965951B21E(Global_4456448.f_69121[iVar0 /*84*/].f_7))
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_7 = joaat("prop_const_fence02b");
		}
		if (Global_4456448.f_69121[iVar0 /*84*/].f_7 == joaat("gr_prop_gr_bench_03b"))
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_7 = joaat("gr_prop_gr_bench_03a");
		}
		if ((((!func_163() && Global_4456448.f_156052 == 0) && unk_0xCBBFE6965951B21E(Global_4456448.f_69121[iVar0 /*84*/].f_7)) && !Global_262145.f_18791) && !func_208())
		{
			if (func_207(Global_4456448.f_69121[iVar0 /*84*/].f_7))
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_7 = joaat("prop_const_fence02b");
			}
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
		if (Global_4456448.f_69121[iVar0 /*84*/].f_10 == -1)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_10 = 0;
		}
		if (iVar24 != 0 && unk_0xB988B7EA5B6DE257(iVar24, iVar0) == 1)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_56 = unk_0x1BC37BB2C67275C8(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_56 = 0;
		}
		if (iVar25 != 0 && unk_0xB988B7EA5B6DE257(iVar25, iVar0) == 1)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_57 = unk_0x1BC37BB2C67275C8(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_57 = 0;
		}
		if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_58 = 0;
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_69 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
		if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_70 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_70 = -1;
		}
		if (iVar12 != 0 && unk_0xB988B7EA5B6DE257(iVar12, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar14, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_42 = -1;
			Global_4456448.f_69121[iVar0 /*84*/].f_39 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_45 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_43 = -1;
			Global_4456448.f_69121[iVar0 /*84*/].f_40 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_46 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_44 = -1;
			Global_4456448.f_69121[iVar0 /*84*/].f_41 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_47 = 0;
		}
		if (iVar11 != 0 && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			Global_4456448.f_69121[iVar0 /*84*/].f_50 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_11 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_48 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_49 = 0;
			Global_4456448.f_69121[iVar0 /*84*/].f_50 = 0;
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
		if (Global_4456448.f_69121[iVar0 /*84*/].f_7 != joaat("ind_prop_firework_01"))
		{
			if (Global_4456448.f_69121[iVar0 /*84*/].f_12 > 0 && Global_4456448.f_69121[iVar0 /*84*/].f_12 < 1000)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_12 = func_206(Global_4456448.f_69121[iVar0 /*84*/].f_12);
			}
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_13 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_34 = unk_0xB496A8A1F76DD70A(iVar40, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_35 = unk_0xB496A8A1F76DD70A(iVar41, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_63 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
		if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_24 = -1;
		}
		if (iVar37 != 0 && unk_0xB988B7EA5B6DE257(iVar37, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_25 = 0;
		}
		if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_26 = 0;
		}
		if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_27 = 1;
		}
		if (iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_34 = unk_0xB496A8A1F76DD70A(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_34 = 0f;
		}
		if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_35 = unk_0xB496A8A1F76DD70A(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_35 = 0.4f;
		}
		if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) > 5)
		{
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 15)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 1;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 25)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 2;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 35)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 3;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 45)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 4;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 55)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 5;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 16)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 3;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 30)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 2;
			}
			if (unk_0xF6EB12D7E162DA9C(iVar42, iVar0) == 44)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_36 = 1;
			}
		}
		else if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_36 = 2;
		}
		if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_60 = 0;
		}
		if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_61 = 0;
		}
		if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_63 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_63 = 0;
		}
		if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_28 = 0;
		}
		if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_37 = unk_0xB496A8A1F76DD70A(iVar53, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_37 = 0f;
		}
		if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_18 = -1;
		}
		if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_19 = -1;
		}
		if (iVar50 != 0 && unk_0xB988B7EA5B6DE257(iVar50, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar50, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_20 = -1;
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_21 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
		Global_4456448.f_69121[iVar0 /*84*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar49, iVar0);
		if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar54, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_38 = 0;
		}
		if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_67 = unk_0xF6EB12D7E162DA9C(iVar55, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_67 = 0;
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
		if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_52 = unk_0xB496A8A1F76DD70A(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_52 = -1f;
		}
		if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_53 = unk_0xF6EB12D7E162DA9C(iVar57, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_53 = 0;
		}
		if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_54 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_54 = 0;
		}
		if (iVar59 != 0 && unk_0xB988B7EA5B6DE257(iVar59, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_55 = unk_0xF6EB12D7E162DA9C(iVar59, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_55 = 0;
		}
		if (iVar60 != 0 && unk_0xB988B7EA5B6DE257(iVar60, iVar0) == 5)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_71 = { unk_0xB6537A31819F86E5(iVar60, iVar0) };
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_71 = { 0f, 0f, 0f };
		}
		if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_74 = unk_0xB496A8A1F76DD70A(iVar61, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_74 = 0f;
		}
		if (iVar62 != 0 && unk_0xB988B7EA5B6DE257(iVar62, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_75 = unk_0xF6EB12D7E162DA9C(iVar62, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_75 = 0;
		}
		if (iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_76 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_76 = -1;
		}
		if (iVar64 != 0 && unk_0xB988B7EA5B6DE257(iVar64, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_77 = unk_0xB496A8A1F76DD70A(iVar64, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_77 = 0f;
		}
		if (iVar66 != 0 && unk_0xB988B7EA5B6DE257(iVar66, iVar0) == 3)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_78 = unk_0xB496A8A1F76DD70A(iVar66, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_78 = 0f;
		}
		if (iVar65 != 0 && unk_0xB988B7EA5B6DE257(iVar65, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_79 = unk_0xF6EB12D7E162DA9C(iVar65, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_79 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar72[iVar2] != 0 && unk_0xB988B7EA5B6DE257(uVar72[iVar2], iVar0) == 2)
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_29[iVar2] = unk_0xF6EB12D7E162DA9C(uVar72[iVar2], iVar0);
			}
			else
			{
				Global_4456448.f_69121[iVar0 /*84*/].f_29[iVar2] = -1;
			}
			iVar2++;
		}
		Global_4456448.f_69121[iVar0 /*84*/].f_66 = unk_0xF6EB12D7E162DA9C(iVar79, iVar0);
		if (iVar68 != 0 && unk_0xB988B7EA5B6DE257(iVar68, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_80 = unk_0xF6EB12D7E162DA9C(iVar68, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_80 = -1;
		}
		if (iVar69 != 0 && unk_0xB988B7EA5B6DE257(iVar69, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_81 = unk_0xF6EB12D7E162DA9C(iVar69, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_81 = 0;
		}
		if (iVar70 != 0 && unk_0xB988B7EA5B6DE257(iVar70, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_82 = unk_0xF6EB12D7E162DA9C(iVar70, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_82 = 0;
		}
		if (iVar71 != 0 && unk_0xB988B7EA5B6DE257(iVar71, iVar0) == 2)
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_83 = unk_0xF6EB12D7E162DA9C(iVar71, iVar0);
		}
		else
		{
			Global_4456448.f_69121[iVar0 /*84*/].f_83 = 0;
		}
		iVar0++;
	}
}

int func_206(int iParam0)
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

int func_207(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("prop_sec_gate_01d") || iParam0 == joaat("prop_vault_shutter")) || iParam0 == joaat("gr_prop_gr_bunkeddoor")) || iParam0 == joaat("prop_worklight_01a")) || iParam0 == joaat("prop_worklight_02a")) || iParam0 == joaat("prop_worklight_03a")) || iParam0 == joaat("prop_worklight_03b")) || iParam0 == joaat("prop_worklight_04b")) || iParam0 == joaat("prop_worklight_04d")) || iParam0 == joaat("prop_ind_coalcar_02")) || iParam0 == joaat("xm_prop_x17_osphatch_27m")) || iParam0 == joaat("imp_prop_impexp_boxpile_01")) || iParam0 == joaat("hei_prop_carrier_cargo_01a")) || iParam0 == joaat("sr_prop_sr_boxpile_02")) || iParam0 == joaat("sr_prop_sr_boxpile_03")) || iParam0 == joaat("prop_water_ramp_01")) || iParam0 == joaat("prop_water_ramp_02")) || iParam0 == joaat("prop_water_ramp_03")) || iParam0 == joaat("stt_prop_track_bend_l")) || iParam0 == joaat("stt_prop_track_bend2_l")) || iParam0 == joaat("stt_prop_track_bend_bar_l")) || iParam0 == joaat("stt_prop_track_bend2_bar_l")) || iParam0 == joaat("prop_ld_alarm_01")) || iParam0 == joaat("ind_prop_dlc_flag_02")) || iParam0 == joaat("prop_flare_01")) || iParam0 == joaat("hei_prop_bank_plug")) || iParam0 == joaat("hei_prop_wall_alarm_on")) || iParam0 == joaat("hei_prop_wall_alarm_off")) || iParam0 == joaat("hei_prop_hei_cash_trolly_03")) || iParam0 == joaat("hei_prop_carrier_docklight_01")) || iParam0 == joaat("hei_prop_carrier_docklight_02")) || iParam0 == joaat("hei_prop_wall_light_10a_cr")) || iParam0 == joaat("hei_prop_heist_apecrate")) || iParam0 == joaat("hei_prop_cc_metalcover_01")) || iParam0 == joaat("hei_prop_bank_alarm_01")) || iParam0 == joaat("prop_road_memorial_02")) || iParam0 == joaat("prop_boombox_01")) || iParam0 == joaat("prop_ghettoblast_02")) || iParam0 == joaat("prop_tapeplayer_01")) || iParam0 == joaat("prop_radio_01")) || iParam0 == joaat("prop_shamal_crash")) || iParam0 == joaat("apa_mp_apa_crashed_usaf_01a")) || iParam0 == joaat("ind_prop_firework_01")) || iParam0 == -1305574636) || iParam0 == joaat("ba_prop_battle_mast_01a")) || iParam0 == joaat("sr_prop_spec_target_s_01a")) || iParam0 == joaat("sr_prop_spec_target_m_01a")) || iParam0 == joaat("sr_prop_spec_target_b_01a")) || iParam0 == joaat("w_ar_railgun")) || iParam0 == joaat("prop_cs_heist_bag_01")) || iParam0 == joaat("prop_bikerset")) || iParam0 == joaat("prop_champset")) || iParam0 == joaat("xm_prop_x17_desk_cover_01a")) || iParam0 == joaat("xm_prop_x17_tool_draw_01a")) || iParam0 == joaat("xm_prop_x17_filecab_01a")) || iParam0 == joaat("xm_prop_x17_labvats")) || iParam0 == joaat("xm_prop_x17_seat_cover_01a")) || iParam0 == joaat("xm_prop_x17_tv_stand_01a")) || iParam0 == joaat("xm_prop_x17_bag_01a")) || iParam0 == joaat("xm_prop_x17_bag_med_01a")) || iParam0 == joaat("xm_prop_x17_sub")) || iParam0 == joaat("xm_prop_base_cabinet_door_01")) || iParam0 == joaat("u_f_y_corpse_01")) || iParam0 == joaat("u_f_y_corpse_02")) || iParam0 == joaat("xm_prop_x17_corpse_01")) || iParam0 == joaat("xm_prop_x17_corpse_02")) || iParam0 == joaat("xm_prop_x17_corpse_03")) || iParam0 == joaat("xm_prop_x17_shovel_01b")) || iParam0 == joaat("xm_prop_x17_shovel_01a")) || iParam0 == joaat("xm_prop_x17_note_paper_01a")) || iParam0 == joaat("xm_prop_x17_chest_closed")) || iParam0 == joaat("xm_prop_x17_chest_open")) || iParam0 == joaat("gr_prop_gr_crates_pistols_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_01a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_02a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_03a")) || iParam0 == joaat("gr_prop_gr_crates_rifles_04a")) || iParam0 == joaat("gr_prop_gr_crates_sam_01a")) || iParam0 == joaat("gr_prop_gr_crates_weapon_mix_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_01a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_02a")) || iParam0 == joaat("gr_prop_gr_gunsmithsupl_03a")) || iParam0 == joaat("gr_prop_gr_rsply_crate01a")) || iParam0 == joaat("gr_prop_gr_rsply_crate02a")) || iParam0 == joaat("gr_prop_gr_rsply_crate03a")) || iParam0 == joaat("hei_heist_apart2_door")) || iParam0 == joaat("prop_target_ora_purp_01")) || iParam0 == joaat("gr_prop_gr_target_01a")) || iParam0 == joaat("gr_prop_gr_target_01b")) || iParam0 == joaat("gr_prop_gr_target_02a")) || iParam0 == joaat("gr_prop_gr_target_02b")) || iParam0 == joaat("gr_prop_gr_bench_01a")) || iParam0 == joaat("gr_prop_gr_bench_01b")) || iParam0 == joaat("gr_prop_gr_bench_02a")) || iParam0 == joaat("gr_prop_gr_bench_02b")) || iParam0 == joaat("gr_prop_gr_speeddrill_01a")) || iParam0 == joaat("gr_prop_gr_vertmill_01a")) || iParam0 == joaat("gr_prop_gr_cratespile_01a")) || iParam0 == joaat("imp_prop_covered_vehicle_01a")) || iParam0 == joaat("imp_prop_covered_vehicle_04a")) || iParam0 == joaat("imp_prop_covered_vehicle_02a")) || iParam0 == joaat("imp_prop_covered_vehicle_05a")) || iParam0 == joaat("imp_prop_covered_vehicle_03a")) || iParam0 == joaat("imp_prop_covered_vehicle_06a")) || iParam0 == joaat("gr_prop_gr_target_1_01a")) || iParam0 == joaat("gr_prop_gr_target_1_01b")) || iParam0 == joaat("gr_prop_gr_target_2_04a")) || iParam0 == joaat("gr_prop_gr_target_2_04b")) || iParam0 == joaat("gr_prop_gr_target_3_03a")) || iParam0 == joaat("gr_prop_gr_target_3_03b")) || iParam0 == joaat("gr_prop_gr_target_4_01a")) || iParam0 == joaat("gr_prop_gr_target_4_01b")) || iParam0 == joaat("gr_prop_gr_target_5_01a")) || iParam0 == joaat("gr_prop_gr_target_5_01b")) || iParam0 == joaat("gr_prop_gr_target_small_01a")) || iParam0 == joaat("gr_prop_gr_target_small_01b")) || iParam0 == joaat("gr_prop_gr_target_small_03a")) || iParam0 == joaat("gr_prop_gr_target_small_02a")) || iParam0 == joaat("gr_prop_gr_target_small_06a")) || iParam0 == joaat("gr_prop_gr_target_small_07a")) || iParam0 == joaat("gr_prop_gr_target_small_04a")) || iParam0 == joaat("gr_prop_gr_target_small_05a")) || iParam0 == joaat("gr_prop_gr_target_long_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01b")) || iParam0 == joaat("gr_prop_gr_target_trap_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_02a")) || iParam0 == joaat("ar_prop_ar_tube_crn")) || iParam0 == joaat("ar_prop_ar_tube_fork")) || iParam0 == joaat("ar_prop_ar_tube_cross")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_2x_crn_15d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn2")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_30d")) || iParam0 == joaat("ar_prop_ar_tube_4x_crn_15d")) || iParam0 == joaat("ar_prop_ar_stunt_block_01a")) || iParam0 == joaat("ar_prop_ar_stunt_block_01b")) || iParam0 == joaat("ar_prop_ar_tube_4x_speed")) || iParam0 == joaat("ba_prop_track_bend_l_b")) || iParam0 == joaat("gr_prop_damship_01a")) || iParam0 == joaat("xm_prop_base_jet_01")) || iParam0 == joaat("xm_prop_base_jet_02")) || iParam0 == joaat("bkr_prop_mast_01a")) || iParam0 == joaat("xm_prop_gr_console_01")) || iParam0 == joaat("prop_cabinet_01b")) || iParam0 == joaat("ch_prop_ch_casino_shutter01x")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_m")) || iParam0 == joaat("ch_prop_track_bend_bar_lc")) || iParam0 == joaat("ch_prop_track_ch_bend_180d")) || iParam0 == joaat("ch_prop_stunt_landing_zone_01a")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_45d")) || iParam0 == joaat("ch_prop_track_ch_bend_45")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_135")) || iParam0 == joaat("ch_prop_track_ch_bend_135")) || iParam0 == joaat("ch_prop_track_pit_garage_01a")) || iParam0 == joaat("ch_prop_track_paddock_01")) || iParam0 == joaat("ch_prop_ch_tunnel_door01a")) || iParam0 == joaat("ch_prop_ch_room_trolly_01a")) || iParam0 == joaat("prop_bikerset"))
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0)
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
	var uVar84[17];
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
	var uVar200[9];
	var uVar210[9];
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
	int iVar251;
	int iVar252;
	
	iVar6 = unk_0x7408DCBD37A2C60F(iParam0, "veh");
	Global_4456448.f_92411 = unk_0xEE6F60A09902D357(iVar6, "no");
	Global_4456448.f_92412 = unk_0xEE6F60A09902D357(iVar6, "time");
	Global_4456448.f_92413 = unk_0xEE6F60A09902D357(iVar6, "pal");
	iVar7 = unk_0x7408DCBD37A2C60F(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_42 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_106[iVar3 /*11610*/].f_59 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_101722[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_46690[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_46776[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_46776[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_46862[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_46862[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_46948[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_46948[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_47034[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_47034[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_47120[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_47120[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_47206[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_47206[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x1D22B93425E4D657(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_47292[iVar0 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_47292[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0xCB845A663B4DD2F3(iVar6, "loc");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar6, "head");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar6, "model");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar6, "col");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar6, "rsp");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar6, "rot");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar6, "liv");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar6, "vmodtur");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar6, "vmodarm");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar6, "vmodairc");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar6, "vmodBomb");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar6, "vmodspoil");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar6, "hlth");
	iVar76 = unk_0xCB845A663B4DD2F3(iVar6, "drbs");
	iVar77 = unk_0xCB845A663B4DD2F3(iVar6, "vbs2");
	iVar78 = unk_0xCB845A663B4DD2F3(iVar6, "vbs3");
	iVar79 = unk_0xCB845A663B4DD2F3(iVar6, "vbs4");
	iVar80 = unk_0xCB845A663B4DD2F3(iVar6, "vbs5");
	iVar81 = unk_0xCB845A663B4DD2F3(iVar6, "vbs6");
	iVar82 = unk_0xCB845A663B4DD2F3(iVar6, "vbs7");
	iVar83 = unk_0xCB845A663B4DD2F3(iVar6, "vbs8");
	if (func_136())
	{
		iVar10 = unk_0xCB845A663B4DD2F3(iVar6, "vrr");
		iVar11 = unk_0xCB845A663B4DD2F3(iVar6, "vrmr");
		iVar12 = unk_0xCB845A663B4DD2F3(iVar6, "vsnt");
		iVar13 = unk_0xCB845A663B4DD2F3(iVar6, "vsnei");
		iVar14 = unk_0xCB845A663B4DD2F3(iVar6, "v2sp");
		iVar15 = unk_0xCB845A663B4DD2F3(iVar6, "v2sh");
		iVar16 = unk_0xCB845A663B4DD2F3(iVar6, "v2si");
		iVar20 = unk_0xCB845A663B4DD2F3(iVar6, "objt");
		iVar21 = unk_0xCB845A663B4DD2F3(iVar6, "team");
		iVar22 = unk_0xCB845A663B4DD2F3(iVar6, "spwn");
		iVar23 = unk_0xCB845A663B4DD2F3(iVar6, "spsrc");
		iVar24 = unk_0xCB845A663B4DD2F3(iVar6, "spasr");
		iVar25 = unk_0xCB845A663B4DD2F3(iVar6, "objt2");
		iVar26 = unk_0xCB845A663B4DD2F3(iVar6, "team2");
		iVar27 = unk_0xCB845A663B4DD2F3(iVar6, "spwn2");
		iVar28 = unk_0xCB845A663B4DD2F3(iVar6, "spsrc2");
		iVar29 = unk_0xCB845A663B4DD2F3(iVar6, "spasr2");
		iVar30 = unk_0xCB845A663B4DD2F3(iVar6, "objt3");
		iVar31 = unk_0xCB845A663B4DD2F3(iVar6, "team3");
		iVar32 = unk_0xCB845A663B4DD2F3(iVar6, "spwn3");
		iVar33 = unk_0xCB845A663B4DD2F3(iVar6, "spsrc3");
		iVar34 = unk_0xCB845A663B4DD2F3(iVar6, "spasr3");
		iVar35 = unk_0xCB845A663B4DD2F3(iVar6, "objt4");
		iVar36 = unk_0xCB845A663B4DD2F3(iVar6, "team4");
		iVar37 = unk_0xCB845A663B4DD2F3(iVar6, "spwn4");
		iVar38 = unk_0xCB845A663B4DD2F3(iVar6, "spsrc4");
		iVar39 = unk_0xCB845A663B4DD2F3(iVar6, "spasr4");
		Global_4456448.f_69119 = unk_0xEE6F60A09902D357(iVar6, "nocr");
		iVar40 = unk_0xCB845A663B4DD2F3(iVar6, "crgdm");
		iVar43 = unk_0xCB845A663B4DD2F3(iVar6, "modps");
		iVar44 = unk_0xCB845A663B4DD2F3(iVar6, "ncol");
		iVar45 = unk_0xCB845A663B4DD2F3(iVar6, "enveff");
		iVar46 = unk_0xCB845A663B4DD2F3(iVar6, "colc");
		iVar47 = unk_0xCB845A663B4DD2F3(iVar6, "col2");
		iVar48 = unk_0xCB845A663B4DD2F3(iVar6, "col3");
		iVar49 = unk_0xCB845A663B4DD2F3(iVar6, "mcvasp");
		iVar50 = unk_0xCB845A663B4DD2F3(iVar6, "vcoid");
		iVar51 = unk_0xCB845A663B4DD2F3(iVar6, "vznsp");
		iVar52 = unk_0xCB845A663B4DD2F3(iVar6, "vznsp2");
		iVar53 = unk_0xCB845A663B4DD2F3(iVar6, "vradse");
		iVar54 = unk_0xCB845A663B4DD2F3(iVar6, "vradsd");
		Global_4456448.f_92414 = unk_0xEE6F60A09902D357(iVar6, "burst");
		iVar61 = unk_0xCB845A663B4DD2F3(iVar6, "enghp");
		iVar62 = unk_0xCB845A663B4DD2F3(iVar6, "hbir");
		iVar63 = unk_0xCB845A663B4DD2F3(iVar6, "hbor");
		iVar64 = unk_0xCB845A663B4DD2F3(iVar6, "ptrhp");
		iVar65 = unk_0xCB845A663B4DD2F3(iVar6, "bdyhp");
		iVar66 = unk_0xCB845A663B4DD2F3(iVar6, "hmrh");
		iVar67 = unk_0xCB845A663B4DD2F3(iVar6, "htrh");
		iVar68 = unk_0xCB845A663B4DD2F3(iVar6, "fdswm");
		iVar69 = unk_0xCB845A663B4DD2F3(iVar6, "ior");
		iVar70 = unk_0xCB845A663B4DD2F3(iVar6, "iort");
		iVar71 = unk_0xCB845A663B4DD2F3(iVar6, "vddra");
		iVar72 = unk_0xCB845A663B4DD2F3(iVar6, "vddta");
		iVar73 = unk_0xCB845A663B4DD2F3(iVar6, "vddrl");
		iVar74 = unk_0xCB845A663B4DD2F3(iVar6, "vddwda");
		iVar75 = unk_0xCB845A663B4DD2F3(iVar6, "vdInter");
		iVar249 = 0;
		while (iVar249 <= 16)
		{
			StringCopy(&cVar4, "vbvrr", 8);
			StringIntConCat(&cVar4, iVar249, 8);
			uVar84[iVar249] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar249++;
		}
		iVar102 = unk_0xCB845A663B4DD2F3(iVar6, "vebs");
		iVar103 = unk_0xCB845A663B4DD2F3(iVar6, "vehct");
		iVar106 = unk_0xCB845A663B4DD2F3(iVar6, "vhcra");
		iVar104 = unk_0xCB845A663B4DD2F3(iVar6, "vehcr");
		iVar105 = unk_0xCB845A663B4DD2F3(iVar6, "vehcv");
		iVar107 = unk_0xCB845A663B4DD2F3(iVar6, "vehbc");
		iVar108 = unk_0xCB845A663B4DD2F3(iVar6, "vehbr");
		iVar109 = unk_0xCB845A663B4DD2F3(iVar6, "vehbso");
		iVar110 = unk_0xCB845A663B4DD2F3(iVar6, "vehbs");
		iVar111 = unk_0xCB845A663B4DD2F3(iVar6, "vehfbr");
		iVar112 = unk_0xCB845A663B4DD2F3(iVar6, "vehfbd");
		iVar113 = unk_0xCB845A663B4DD2F3(iVar6, "vehtc");
		iVar114 = unk_0xCB845A663B4DD2F3(iVar6, "vehbrnrl");
		iVar115 = unk_0xCB845A663B4DD2F3(iVar6, "vehbrntm");
		iVar116 = unk_0xCB845A663B4DD2F3(iVar6, "vehbrnlf");
		iVar117 = unk_0xCB845A663B4DD2F3(iVar6, "vehpotme");
		iVar118 = unk_0xCB845A663B4DD2F3(iVar6, "vehdelind");
		iVar119 = unk_0xCB845A663B4DD2F3(iVar6, "vehbtos");
		iVar120 = unk_0xCB845A663B4DD2F3(iVar6, "vehwtci");
		iVar121 = unk_0xCB845A663B4DD2F3(iVar6, "vehakwlrt");
		iVar122 = unk_0xCB845A663B4DD2F3(iVar6, "vehrlgrpd");
		iVar123 = unk_0xCB845A663B4DD2F3(iVar6, "vehbcsgc");
		iVar124 = unk_0xCB845A663B4DD2F3(iVar6, "vehbcsgl");
		iVar125 = unk_0xCB845A663B4DD2F3(iVar6, "vspdl");
		iVar126 = unk_0xCB845A663B4DD2F3(iVar6, "vsgr");
		iVar127 = unk_0xCB845A663B4DD2F3(iVar6, "vssgr");
		iVar128 = unk_0xCB845A663B4DD2F3(iVar6, "vcnm");
		iVar129 = unk_0xCB845A663B4DD2F3(iVar6, "vehap");
		iVar130 = unk_0xCB845A663B4DD2F3(iVar6, "vehat");
		iVar131 = unk_0xCB845A663B4DD2F3(iVar6, "vehdu");
		iVar132 = unk_0xCB845A663B4DD2F3(iVar6, "vldt");
		iVar133 = unk_0xCB845A663B4DD2F3(iVar6, "vldr");
		iVar134 = unk_0xCB845A663B4DD2F3(iVar6, "cutsc");
		iVar135 = unk_0xCB845A663B4DD2F3(iVar6, "cutsh");
		iVar137 = unk_0xCB845A663B4DD2F3(iVar6, "gtbsr");
		iVar138 = unk_0xCB845A663B4DD2F3(iVar6, "gtbss");
		iVar139 = unk_0xCB845A663B4DD2F3(iVar6, "nmaggg");
		iVar140 = unk_0xCB845A663B4DD2F3(iVar6, "nmpass");
		iVar141 = unk_0xCB845A663B4DD2F3(iVar6, "nmfail");
		iVar142 = unk_0xCB845A663B4DD2F3(iVar6, "vmcp");
		iVar143 = unk_0xCB845A663B4DD2F3(iVar6, "vmcf");
		iVar144 = unk_0xCB845A663B4DD2F3(iVar6, "vmca");
		iVar136 = unk_0xCB845A663B4DD2F3(iVar6, "gotor");
		iVar221 = unk_0xCB845A663B4DD2F3(iVar6, "vphrang");
		iVar222 = unk_0xCB845A663B4DD2F3(iVar6, "vwpndmg");
		iVar223 = unk_0xCB845A663B4DD2F3(iVar6, "vldv");
		iVar224 = unk_0xCB845A663B4DD2F3(iVar6, "vtmhrn");
		iVar225 = unk_0xCB845A663B4DD2F3(iVar6, "vdrpovr");
		iVar226 = unk_0xCB845A663B4DD2F3(iVar6, "vdrprad");
		iVar227 = unk_0xCB845A663B4DD2F3(iVar6, "vdrpvrad");
		iVar228 = unk_0xCB845A663B4DD2F3(iVar6, "vdvrfe");
		iVar229 = unk_0xCB845A663B4DD2F3(iVar6, "vdeitc");
		iVar230 = unk_0xCB845A663B4DD2F3(iVar6, "vdspn");
		iVar231 = unk_0xCB845A663B4DD2F3(iVar6, "vdcbal");
		iVar232 = unk_0xCB845A663B4DD2F3(iVar6, "vdcbdt");
		iVar233 = unk_0xCB845A663B4DD2F3(iVar6, "vrhlor");
		iVar234 = unk_0xCB845A663B4DD2F3(iVar6, "vddfs");
		iVar235 = unk_0xCB845A663B4DD2F3(iVar6, "vrorc");
		iVar236 = unk_0xCB845A663B4DD2F3(iVar6, "cbvest");
		iVar237 = unk_0xCB845A663B4DD2F3(iVar6, "cbves");
		iVar238 = unk_0xCB845A663B4DD2F3(iVar6, "hvcr");
		iVar239 = unk_0xCB845A663B4DD2F3(iVar6, "cdtor");
		iVar240 = unk_0xCB845A663B4DD2F3(iVar6, "cvd");
		iVar241 = unk_0xCB845A663B4DD2F3(iVar6, "vifci");
		iVar242 = unk_0xCB845A663B4DD2F3(iVar6, "viclv");
		iVar243 = unk_0xCB845A663B4DD2F3(iVar6, "vtsr");
		iVar244 = unk_0xCB845A663B4DD2F3(iVar6, "vtspr");
		iVar245 = unk_0xCB845A663B4DD2F3(iVar6, "vwlot");
		iVar246 = unk_0xCB845A663B4DD2F3(iVar6, "vstwd");
		iVar247 = unk_0xCB845A663B4DD2F3(iVar6, "vbwcr");
		iVar248 = unk_0xCB845A663B4DD2F3(iVar6, "vgavs");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar185[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar190[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "irsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar195[iVar1] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar1++;
		}
		iVar250 = 0;
		iVar250 = 0;
		while (iVar250 <= 8)
		{
			StringCopy(&cVar4, "vwrvv", 8);
			StringIntConCat(&cVar4, iVar250, 8);
			uVar200[iVar250] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			StringCopy(&cVar4, "fwrvv", 8);
			StringIntConCat(&cVar4, iVar250, 8);
			uVar210[iVar250] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			iVar250++;
		}
		iVar220 = unk_0xCB845A663B4DD2F3(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_42 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar145[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar150[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar155[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar160[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar165[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar170[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar175[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar180[iVar3] = unk_0xCB845A663B4DD2F3(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_92411 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_92415[iVar0 /*282*/] = { unk_0xB6537A31819F86E5(iVar8, iVar0) };
			Global_4456448.f_92415[iVar0 /*282*/].f_3 = unk_0xB496A8A1F76DD70A(iVar9, iVar0);
			if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 5)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_228 = { unk_0xB6537A31819F86E5(iVar41, iVar0) };
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_228 = { 0f, 0f, 0f };
			}
			iVar2 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
			Global_4456448.f_92415[iVar0 /*282*/].f_12 = iVar2;
			if (!func_129() && !func_196())
			{
				if (!unk_0xCBBFE6965951B21E(Global_4456448.f_92415[iVar0 /*282*/].f_12) || func_210(Global_4456448.f_92415[iVar0 /*282*/].f_12))
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_12 = joaat("baller");
				}
			}
			if (Global_4456448.f_92415[iVar0 /*282*/].f_12 == joaat("sanctus") && !Global_262145.f_16986)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_12 = joaat("akuma");
			}
			Global_4456448.f_92415[iVar0 /*282*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
			Global_4456448.f_92415[iVar0 /*282*/].f_31 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_28 = -1;
			}
			if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_178 = unk_0xF6EB12D7E162DA9C(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_178 = -1;
			}
			if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_179 = unk_0xF6EB12D7E162DA9C(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_179 = -1;
			}
			if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_180 = unk_0xF6EB12D7E162DA9C(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_180 = -1;
			}
			if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_182 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_182 = 0;
			}
			if (iVar59 != 0 && unk_0xB988B7EA5B6DE257(iVar59, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_183 = unk_0xF6EB12D7E162DA9C(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_183 = 0;
			}
			Global_4456448.f_92415[iVar0 /*282*/].f_32 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
			if (Global_4456448.f_92415[iVar0 /*282*/].f_32 < 1)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_32 = 100;
			}
			Global_4456448.f_92415[iVar0 /*282*/].f_51 = unk_0xF6EB12D7E162DA9C(iVar76, iVar0);
			Global_4456448.f_92415[iVar0 /*282*/].f_52 = unk_0xF6EB12D7E162DA9C(iVar77, iVar0);
			if (iVar78 != 0 && unk_0xB988B7EA5B6DE257(iVar78, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_53 = unk_0xF6EB12D7E162DA9C(iVar78, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_53 = 0;
			}
			if (iVar79 != 0 && unk_0xB988B7EA5B6DE257(iVar79, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_54 = unk_0xF6EB12D7E162DA9C(iVar79, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_54 = 0;
			}
			if (iVar80 != 0 && unk_0xB988B7EA5B6DE257(iVar80, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_55 = unk_0xF6EB12D7E162DA9C(iVar80, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_55 = 0;
			}
			if (iVar81 != 0 && unk_0xB988B7EA5B6DE257(iVar81, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_56 = unk_0xF6EB12D7E162DA9C(iVar81, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_56 = 0;
			}
			if (iVar82 != 0 && unk_0xB988B7EA5B6DE257(iVar82, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar82, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_57 = 0;
			}
			if (iVar83 != 0 && unk_0xB988B7EA5B6DE257(iVar83, iVar0) == 2)
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar83, iVar0);
			}
			else
			{
				Global_4456448.f_92415[iVar0 /*282*/].f_58 = 0;
			}
			if (func_136())
			{
				if ((((iVar10 != 0 && unk_0xB988B7EA5B6DE257(iVar10, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar12, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar13, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_4 = unk_0xB496A8A1F76DD70A(iVar10, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_5 = unk_0xB496A8A1F76DD70A(iVar11, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_6 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_4 = 100f;
					Global_4456448.f_92415[iVar0 /*282*/].f_5 = 0f;
					Global_4456448.f_92415[iVar0 /*282*/].f_6 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_7 = -1;
				}
				if ((iVar14 != 0 && unk_0xB988B7EA5B6DE257(iVar14, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_8 = { unk_0xB6537A31819F86E5(iVar14, iVar0) };
					Global_4456448.f_92415[iVar0 /*282*/].f_11 = unk_0xB496A8A1F76DD70A(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_8 = { 0f, 0f, 0f };
					Global_4456448.f_92415[iVar0 /*282*/].f_11 = 0f;
				}
				if (iVar16 != 0 && unk_0xB988B7EA5B6DE257(iVar16, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_216 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_216 = -1;
				}
				Global_4456448.f_92415[iVar0 /*282*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
				Global_4456448.f_92415[iVar0 /*282*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
				Global_4456448.f_92415[iVar0 /*282*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
				Global_4456448.f_92415[iVar0 /*282*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
				Global_4456448.f_92415[iVar0 /*282*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
				if (iVar25 != 0 && unk_0xB988B7EA5B6DE257(iVar25, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_88 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_85 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_91 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_94 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_95 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_89 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_86 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_92 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_96 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_97 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_90 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_87 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_93 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_98 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
					Global_4456448.f_92415[iVar0 /*282*/].f_99 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_88 = -1;
					Global_4456448.f_92415[iVar0 /*282*/].f_85 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_91 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_94 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_95 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_89 = -1;
					Global_4456448.f_92415[iVar0 /*282*/].f_86 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_92 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_96 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_97 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_90 = -1;
					Global_4456448.f_92415[iVar0 /*282*/].f_87 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_93 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_98 = 0;
					Global_4456448.f_92415[iVar0 /*282*/].f_99 = 0;
				}
				if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_26 = -1;
				}
				if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_29 = -1;
				}
				if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_30 = unk_0xB496A8A1F76DD70A(iVar45, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_30 = -1f;
				}
				if ((iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar61, iVar0) > 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_33 = unk_0xB496A8A1F76DD70A(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_33 = 1001f;
				}
				if ((iVar62 != 0 && unk_0xB988B7EA5B6DE257(iVar62, iVar0) == 2) && unk_0xF6EB12D7E162DA9C(iVar62, iVar0) > 0)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar62, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_34 = 0;
				}
				if ((iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar0) == 2) && unk_0xF6EB12D7E162DA9C(iVar63, iVar0) > -1)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_35 = -1;
				}
				if ((iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar40, iVar0) >= 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_40 = unk_0xB496A8A1F76DD70A(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_40 = 1.5f;
				}
				if (iVar71 != 0 && unk_0xB988B7EA5B6DE257(iVar71, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_187 = unk_0xB496A8A1F76DD70A(iVar71, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_187 = -1f;
				}
				if (iVar72 != 0 && unk_0xB988B7EA5B6DE257(iVar72, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_188 = unk_0xF6EB12D7E162DA9C(iVar72, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_188 = 0;
				}
				if (iVar73 != 0 && unk_0xB988B7EA5B6DE257(iVar73, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_189 = unk_0xF6EB12D7E162DA9C(iVar73, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_189 = -1;
				}
				if (iVar74 != 0 && unk_0xB988B7EA5B6DE257(iVar74, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_190 = unk_0xF6EB12D7E162DA9C(iVar74, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_190 = 0;
				}
				if (iVar75 != 0 && unk_0xB988B7EA5B6DE257(iVar75, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_215 = unk_0xF6EB12D7E162DA9C(iVar75, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_215 = -1;
				}
				if ((iVar64 != 0 && unk_0xB988B7EA5B6DE257(iVar64, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar64, iVar0) > 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_36 = unk_0xB496A8A1F76DD70A(iVar64, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_36 = 1001f;
				}
				if ((iVar65 != 0 && unk_0xB988B7EA5B6DE257(iVar65, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar65, iVar0) > 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_37 = unk_0xB496A8A1F76DD70A(iVar65, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_37 = 1001f;
				}
				if ((iVar66 != 0 && unk_0xB988B7EA5B6DE257(iVar66, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar66, iVar0) > 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_38 = unk_0xB496A8A1F76DD70A(iVar66, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_38 = 1001f;
				}
				if ((iVar67 != 0 && unk_0xB988B7EA5B6DE257(iVar67, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar67, iVar0) > 0f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_39 = unk_0xB496A8A1F76DD70A(iVar67, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_39 = 1001f;
				}
				if ((iVar68 != 0 && unk_0xB988B7EA5B6DE257(iVar68, iVar0) == 3) && unk_0xB496A8A1F76DD70A(iVar68, iVar0) != 1f)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_186 = unk_0xB496A8A1F76DD70A(iVar68, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_186 = 1f;
				}
				if (iVar69 != 0 && unk_0xB988B7EA5B6DE257(iVar69, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_184 = unk_0xF6EB12D7E162DA9C(iVar69, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_184 = -1;
				}
				if (iVar70 != 0 && unk_0xB988B7EA5B6DE257(iVar70, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_185 = unk_0xF6EB12D7E162DA9C(iVar70, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_185 = 0;
				}
				iVar251 = 0;
				while (iVar251 <= 16)
				{
					if (uVar84[iVar251] != 0 && unk_0xB988B7EA5B6DE257(uVar84[iVar251], iVar0) == 2)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_196[iVar251] = unk_0xF6EB12D7E162DA9C(uVar84[iVar251], iVar0);
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_196[iVar251] = -2;
					}
					iVar251++;
				}
				if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_27 = -1;
				}
				if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_24 = -1;
				}
				if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_25 = -1;
				}
				Global_4456448.f_92415[iVar0 /*282*/].f_132 = unk_0xF6EB12D7E162DA9C(iVar102, iVar0);
				if (iVar49 != 0 && unk_0xB988B7EA5B6DE257(iVar49, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_276 = unk_0xF6EB12D7E162DA9C(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_276 = -1;
				}
				if (iVar50 != 0 && unk_0xB988B7EA5B6DE257(iVar50, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_277 = unk_0xF6EB12D7E162DA9C(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_277 = -1;
				}
				if (iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_278 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_278 = -1;
				}
				if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_279 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_279 = 0;
				}
				if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_280 = unk_0xF6EB12D7E162DA9C(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_280 = 0;
				}
				if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_281 = unk_0xF6EB12D7E162DA9C(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_281 = 0;
				}
				if (iVar104 != 0 && unk_0xB988B7EA5B6DE257(iVar104, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_74 = unk_0xF6EB12D7E162DA9C(iVar104, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_74 = -1;
				}
				if (iVar103 != 0 && unk_0xB988B7EA5B6DE257(iVar103, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_75 = unk_0xF6EB12D7E162DA9C(iVar103, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_75 = -1;
				}
				if (iVar106 != 0 && unk_0xB988B7EA5B6DE257(iVar106, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_76 = unk_0xF6EB12D7E162DA9C(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_76 = -1;
				}
				if (iVar105 != 0 && unk_0xB988B7EA5B6DE257(iVar105, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_77 = unk_0xF6EB12D7E162DA9C(iVar105, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_77 = -1;
				}
				if (iVar125 != 0 && unk_0xB988B7EA5B6DE257(iVar125, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_84 = unk_0xF6EB12D7E162DA9C(iVar125, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_84 = 0;
				}
				if (iVar126 != 0 && unk_0xB988B7EA5B6DE257(iVar126, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar126, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_49 = 0;
				}
				if (iVar127 != 0 && unk_0xB988B7EA5B6DE257(iVar127, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_50 = unk_0xF6EB12D7E162DA9C(iVar127, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_50 = 0;
				}
				if (iVar128 != 0 && unk_0xB988B7EA5B6DE257(iVar128, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_100 = unk_0xF6EB12D7E162DA9C(iVar128, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_100 = -1;
				}
				if (iVar129 != 0 && unk_0xB988B7EA5B6DE257(iVar129, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_101 = unk_0xF6EB12D7E162DA9C(iVar129, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_101 = -1;
				}
				if (iVar130 != 0 && unk_0xB988B7EA5B6DE257(iVar130, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_102 = unk_0xF6EB12D7E162DA9C(iVar130, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_102 = 1;
				}
				if (iVar131 != 0 && unk_0xB988B7EA5B6DE257(iVar131, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_121 = unk_0xF6EB12D7E162DA9C(iVar131, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_121 = -1;
				}
				if (iVar132 != 0 && unk_0xB988B7EA5B6DE257(iVar132, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_122 = unk_0xF6EB12D7E162DA9C(iVar132, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_122 = -1;
				}
				if (iVar133 != 0 && unk_0xB988B7EA5B6DE257(iVar133, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_123 = unk_0xF6EB12D7E162DA9C(iVar133, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_123 = -1;
				}
				if (iVar107 != 0 && unk_0xB988B7EA5B6DE257(iVar107, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_60 = 0;
				}
				if (iVar108 != 0 && unk_0xB988B7EA5B6DE257(iVar108, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_61 = 0;
				}
				if (iVar109 != 0 && unk_0xB988B7EA5B6DE257(iVar109, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_62 = unk_0xF6EB12D7E162DA9C(iVar109, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_62 = 0;
				}
				if (iVar110 != 0 && unk_0xB988B7EA5B6DE257(iVar110, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_63 = unk_0xB496A8A1F76DD70A(iVar110, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_63 = 1.2f;
				}
				if (iVar111 != 0 && unk_0xB988B7EA5B6DE257(iVar111, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_194 = unk_0xF6EB12D7E162DA9C(iVar111, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_194 = -1;
				}
				if (iVar112 != 0 && unk_0xB988B7EA5B6DE257(iVar112, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_195 = unk_0xF6EB12D7E162DA9C(iVar112, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_195 = 10;
				}
				if (iVar113 != 0 && unk_0xB988B7EA5B6DE257(iVar113, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_217 = unk_0xF6EB12D7E162DA9C(iVar113, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_217 = 1;
				}
				if (iVar115 != 0 && unk_0xB988B7EA5B6DE257(iVar115, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_219 = unk_0xF6EB12D7E162DA9C(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_219 = 0;
				}
				if (iVar114 != 0 && unk_0xB988B7EA5B6DE257(iVar114, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_218 = unk_0xF6EB12D7E162DA9C(iVar114, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_218 = 0;
				}
				if (iVar116 != 0 && unk_0xB988B7EA5B6DE257(iVar116, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_220 = unk_0xF6EB12D7E162DA9C(iVar116, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_220 = 60;
				}
				if (iVar117 != 0 && unk_0xB988B7EA5B6DE257(iVar117, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_221 = unk_0xB496A8A1F76DD70A(iVar117, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_221 = 4.5f;
				}
				if (iVar118 != 0 && unk_0xB988B7EA5B6DE257(iVar118, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_222 = unk_0xF6EB12D7E162DA9C(iVar118, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_222 = -1;
				}
				if (iVar119 != 0 && unk_0xB988B7EA5B6DE257(iVar119, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_223 = unk_0xF6EB12D7E162DA9C(iVar119, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_223 = -1;
				}
				if (iVar120 != 0 && unk_0xB988B7EA5B6DE257(iVar120, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_224 = unk_0xF6EB12D7E162DA9C(iVar120, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_224 = -1;
				}
				if (iVar121 != 0 && unk_0xB988B7EA5B6DE257(iVar121, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_225 = unk_0xF6EB12D7E162DA9C(iVar121, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_225 = 0;
				}
				if (iVar123 != 0 && unk_0xB988B7EA5B6DE257(iVar123, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_232 = unk_0xF6EB12D7E162DA9C(iVar123, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_232 = -1;
				}
				if (iVar124 != 0 && unk_0xB988B7EA5B6DE257(iVar124, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_233 = unk_0xF6EB12D7E162DA9C(iVar124, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_233 = -1;
				}
				if (iVar122 != 0 && unk_0xB988B7EA5B6DE257(iVar122, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_231 = unk_0xF6EB12D7E162DA9C(iVar122, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_231 = 0;
				}
				if (iVar136 != 0 && unk_0xB988B7EA5B6DE257(iVar136, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar136, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_43 = 0;
				}
				if (Global_4456448.f_2 != 6 && unk_0xB988B7EA5B6DE257(iVar134, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_130 = unk_0xF6EB12D7E162DA9C(iVar134, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_130 = -1;
				}
				if (Global_4456448.f_2 != 6 && unk_0xB988B7EA5B6DE257(iVar135, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_131 = unk_0xF6EB12D7E162DA9C(iVar135, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_131 = -1;
				}
				if (iVar139 != 0 && unk_0xB988B7EA5B6DE257(iVar139, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_2 = unk_0xF6EB12D7E162DA9C(iVar139, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_2 = -1;
				}
				if (iVar137 != 0 && unk_0xB988B7EA5B6DE257(iVar137, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_6 = unk_0xF6EB12D7E162DA9C(iVar137, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_6 = -1;
				}
				if (iVar138 != 0 && unk_0xB988B7EA5B6DE257(iVar138, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_7 = unk_0xF6EB12D7E162DA9C(iVar138, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_7 = -1;
				}
				if (iVar140 != 0 && unk_0xB988B7EA5B6DE257(iVar140, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113 = unk_0xF6EB12D7E162DA9C(iVar140, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113 = -1;
				}
				if (iVar141 != 0 && unk_0xB988B7EA5B6DE257(iVar141, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_1 = unk_0xF6EB12D7E162DA9C(iVar141, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_1 = -1;
				}
				if (iVar142 != 0 && unk_0xB988B7EA5B6DE257(iVar142, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_3 = unk_0xF6EB12D7E162DA9C(iVar142, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_3 = -1;
				}
				if (iVar143 != 0 && unk_0xB988B7EA5B6DE257(iVar143, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_4 = unk_0xF6EB12D7E162DA9C(iVar143, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_4 = -1;
				}
				if (iVar144 != 0 && unk_0xB988B7EA5B6DE257(iVar144, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_5 = unk_0xF6EB12D7E162DA9C(iVar144, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_113.f_5 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar185[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar185[iVar1], iVar0) == 5)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_134[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar185[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_134[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar190[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar190[iVar1], iVar0) == 3)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_147[iVar1] = unk_0xB496A8A1F76DD70A(uVar190[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_147[iVar1] = 0f;
					}
					if (uVar195[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar195[iVar1], iVar0) == 2)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_152[iVar1] = unk_0xF6EB12D7E162DA9C(uVar195[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_152[iVar1] = -1;
					}
					iVar1++;
				}
				iVar252 = 0;
				iVar252 = 0;
				while (iVar252 <= 8)
				{
					if (uVar200[iVar252] != 0 && unk_0xB988B7EA5B6DE257(uVar200[iVar252], iVar0) == 5)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_238[iVar252 /*3*/] = { unk_0xB6537A31819F86E5(uVar200[iVar252], iVar0) };
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_238[iVar252 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar210[iVar252] != 0 && unk_0xB988B7EA5B6DE257(uVar210[iVar252], iVar0) == 3)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_266[iVar252] = unk_0xB496A8A1F76DD70A(uVar210[iVar252], iVar0);
					}
					else
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_266[iVar252] = 0f;
					}
					iVar252++;
				}
				if (iVar220 != 0 && unk_0xB988B7EA5B6DE257(iVar220, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_133 = unk_0xF6EB12D7E162DA9C(iVar220, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_133 = 0;
				}
				if (iVar221 != 0 && unk_0xB988B7EA5B6DE257(iVar221, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_157 = unk_0xF6EB12D7E162DA9C(iVar221, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_157 = -1;
				}
				if (iVar222 != 0 && unk_0xB988B7EA5B6DE257(iVar222, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_168 = unk_0xF6EB12D7E162DA9C(iVar222, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_168 = -1;
				}
				if (iVar223 != 0 && unk_0xB988B7EA5B6DE257(iVar223, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_169 = unk_0xF6EB12D7E162DA9C(iVar223, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_169 = -1;
				}
				if (iVar224 != 0 && unk_0xB988B7EA5B6DE257(iVar224, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_162 = unk_0xF6EB12D7E162DA9C(iVar224, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_162 = -1;
				}
				if (iVar225 != 0 && unk_0xB988B7EA5B6DE257(iVar225, iVar0) == 5)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_163 = { unk_0xB6537A31819F86E5(iVar225, iVar0) };
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_163 = { 0f, 0f, 0f };
				}
				if (iVar226 != 0 && unk_0xB988B7EA5B6DE257(iVar226, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_166 = unk_0xB496A8A1F76DD70A(iVar226, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_166 = 0f;
				}
				if (iVar227 != 0 && unk_0xB988B7EA5B6DE257(iVar227, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_167 = unk_0xB496A8A1F76DD70A(iVar227, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_167 = 0f;
				}
				if (iVar228 != 0 && unk_0xB988B7EA5B6DE257(iVar228, iVar0) == 3)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_159 = unk_0xB496A8A1F76DD70A(iVar228, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_159 = -1f;
				}
				if (iVar234 != 0 && unk_0xB988B7EA5B6DE257(iVar234, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_160 = unk_0xF6EB12D7E162DA9C(iVar234, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_160 = 10;
				}
				if (iVar236 != 0 && unk_0xB988B7EA5B6DE257(iVar236, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_176 = unk_0xF6EB12D7E162DA9C(iVar236, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_176 = 2;
				}
				if (iVar237 != 0 && unk_0xB988B7EA5B6DE257(iVar237, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_177 = unk_0xF6EB12D7E162DA9C(iVar237, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_177 = -1;
				}
				if (iVar238 != 0 && unk_0xB988B7EA5B6DE257(iVar238, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_191 = unk_0xF6EB12D7E162DA9C(iVar238, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_191 = -1;
				}
				if (iVar229 != 0 && unk_0xB988B7EA5B6DE257(iVar229, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_158 = unk_0xF6EB12D7E162DA9C(iVar229, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_158 = -1;
				}
				if (iVar230 != 0 && unk_0xB988B7EA5B6DE257(iVar230, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_161 = unk_0xF6EB12D7E162DA9C(iVar230, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_161 = 0;
				}
				if (iVar243 != 0 && unk_0xB988B7EA5B6DE257(iVar243, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_226 = unk_0xF6EB12D7E162DA9C(iVar243, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_226 = -1;
				}
				if (iVar244 != 0 && unk_0xB988B7EA5B6DE257(iVar244, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_227 = unk_0xF6EB12D7E162DA9C(iVar244, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_227 = 0;
				}
				if (iVar231 != 0 && unk_0xB988B7EA5B6DE257(iVar231, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar231, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_41 = 0;
				}
				if (iVar232 != 0 && unk_0xB988B7EA5B6DE257(iVar232, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar232, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_42 = 0;
				}
				if (iVar233 != 0 && unk_0xB988B7EA5B6DE257(iVar233, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_174 = unk_0xF6EB12D7E162DA9C(iVar233, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_174 = 0;
				}
				if (iVar235 != 0 && unk_0xB988B7EA5B6DE257(iVar235, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_175 = unk_0xF6EB12D7E162DA9C(iVar235, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_175 = 0;
				}
				if (iVar239 != 0 && unk_0xB988B7EA5B6DE257(iVar239, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_192 = unk_0xF6EB12D7E162DA9C(iVar239, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_192 = -1;
				}
				if (iVar240 != 0 && unk_0xB988B7EA5B6DE257(iVar240, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_193 = unk_0xF6EB12D7E162DA9C(iVar240, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_193 = 0;
				}
				if (iVar241 != 0 && unk_0xB988B7EA5B6DE257(iVar241, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_214 = unk_0xF6EB12D7E162DA9C(iVar241, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_214 = -1;
				}
				if (iVar242 != 0 && unk_0xB988B7EA5B6DE257(iVar242, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_83 = unk_0xF6EB12D7E162DA9C(iVar242, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_83 = -1;
				}
				if (iVar245 != 0 && unk_0xB988B7EA5B6DE257(iVar245, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_234 = unk_0xF6EB12D7E162DA9C(iVar245, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_234 = 0;
				}
				if (iVar246 != 0 && unk_0xB988B7EA5B6DE257(iVar246, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_235 = unk_0xF6EB12D7E162DA9C(iVar246, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_235 = 0;
				}
				if (iVar247 != 0 && unk_0xB988B7EA5B6DE257(iVar247, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_236 = unk_0xF6EB12D7E162DA9C(iVar247, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_236 = -1;
				}
				if (iVar248 != 0 && unk_0xB988B7EA5B6DE257(iVar248, iVar0) == 2)
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_237 = unk_0xF6EB12D7E162DA9C(iVar248, iVar0);
				}
				else
				{
					Global_4456448.f_92415[iVar0 /*282*/].f_237 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_42 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_92415[iVar0 /*282*/].f_13[iVar3] = unk_0xF6EB12D7E162DA9C(uVar145[iVar3], iVar0);
						Global_4456448.f_92415[iVar0 /*282*/].f_18[iVar3] = unk_0xF6EB12D7E162DA9C(uVar150[iVar3], iVar0);
						if (Global_4456448.f_92415[iVar0 /*282*/].f_18[iVar3] == -1)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_18[iVar3] = 99999;
						}
						if (uVar155[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar155[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_124[iVar3] = unk_0xF6EB12D7E162DA9C(uVar155[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_124[iVar3] = 0;
						}
						if (uVar160[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar160[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_103[iVar3] = unk_0xF6EB12D7E162DA9C(uVar160[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_103[iVar3] = 0;
						}
						if (uVar165[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar165[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_108[iVar3] = unk_0xF6EB12D7E162DA9C(uVar165[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_108[iVar3] = 0;
						}
						if (uVar170[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar170[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_64[iVar3] = unk_0xF6EB12D7E162DA9C(uVar170[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_64[iVar3] = -1;
						}
						if (uVar175[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar175[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_69[iVar3] = unk_0xF6EB12D7E162DA9C(uVar175[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_69[iVar3] = -1;
						}
						if (uVar180[iVar3] != 0 && unk_0xB988B7EA5B6DE257(uVar180[iVar3], iVar0) == 2)
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_78[iVar3] = unk_0xF6EB12D7E162DA9C(uVar180[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_92415[iVar0 /*282*/].f_78[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

int func_210(int iParam0)
{
	if (((!func_208() && (!func_212(iParam0) || func_211(iParam0))) && !func_163()) && !Global_262145.f_18790)
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (!func_163())
	{
		if ((((((((((((((((((((((((((((((((((iParam0 == joaat("trash2") || iParam0 == joaat("emperor2")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("slamvan2")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("picador")) || iParam0 == joaat("peyote")) || iParam0 == joaat("tornado")) || iParam0 == joaat("tr2")) || iParam0 == joaat("lurcher")) || iParam0 == joaat("btype2")) || iParam0 == joaat("limo2")) || iParam0 == joaat("dune4")) || iParam0 == joaat("ruiner3")) || iParam0 == joaat("cargoplane")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("policet")) || iParam0 == joaat("terbyte")) || iParam0 == joaat("blimp3")) || iParam0 == joaat("rcbandito")) || iParam0 == joaat("cargobob4")) || iParam0 == joaat("minitank")) || iParam0 == joaat("formula")) || iParam0 == joaat("formula2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("boxville")) || iParam0 == joaat("burrito")) || iParam0 == joaat("burrito2")) || iParam0 == joaat("pony")) || iParam0 == joaat("rancherxl"))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		if (func_213(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= func_216(iParam1))
	{
		if (iParam0 == func_214(iParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_214(int iParam0, int iParam1)
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
				
				case 4:
					iVar0 = joaat("brioso");
					break;
				
				case 5:
					iVar0 = joaat("issi3");
					break;
				
				case 6:
					iVar0 = joaat("prairie");
					break;
				
				case 7:
					iVar0 = joaat("kanjo");
					break;
				
				case 8:
					iVar0 = joaat("asbo");
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
				
				case 5:
					iVar0 = joaat("windsor2");
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
				
				case 14:
					iVar0 = joaat("schafter3");
					break;
				
				case 15:
					iVar0 = joaat("schafter4");
					break;
				
				case 16:
					iVar0 = joaat("schafter5");
					break;
				
				case 17:
					iVar0 = joaat("schafter6");
					break;
				
				case 18:
					iVar0 = joaat("cog55");
					break;
				
				case 19:
					iVar0 = joaat("cog552");
					break;
				
				case 20:
					iVar0 = joaat("cognoscenti");
					break;
				
				case 21:
					iVar0 = joaat("cognoscenti2");
					break;
				
				case 22:
					iVar0 = joaat("limo2");
					break;
				
				case 23:
					iVar0 = joaat("stafford");
					break;
				
				case 24:
					iVar0 = joaat("asterope");
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
				
				case 22:
					iVar0 = joaat("nightshade");
					break;
				
				case 23:
					iVar0 = joaat("faction3");
					break;
				
				case 24:
					iVar0 = joaat("slamvan3");
					break;
				
				case 25:
					iVar0 = joaat("virgo3");
					break;
				
				case 26:
					iVar0 = joaat("virgo2");
					break;
				
				case 27:
					iVar0 = joaat("sabregt2");
					break;
				
				case 28:
					iVar0 = joaat("dominator2");
					break;
				
				case 29:
					iVar0 = joaat("gauntlet2");
					break;
				
				case 30:
					iVar0 = joaat("ruiner2");
					break;
				
				case 31:
					iVar0 = joaat("ruiner3");
					break;
				
				case 32:
					iVar0 = joaat("dukes");
					break;
				
				case 33:
					iVar0 = joaat("stalion");
					break;
				
				case 34:
					iVar0 = joaat("stalion2");
					break;
				
				case 35:
					iVar0 = joaat("hotknife");
					break;
				
				case 36:
					iVar0 = joaat("tampa3");
					break;
				
				case 37:
					iVar0 = joaat("yosemite");
					break;
				
				case 38:
					iVar0 = joaat("hermes");
					break;
				
				case 39:
					iVar0 = joaat("hustler");
					break;
				
				case 40:
					iVar0 = joaat("ellie");
					break;
				
				case 41:
					iVar0 = joaat("dominator3");
					break;
				
				case 42:
					iVar0 = joaat("ruiner");
					break;
				
				case 43:
					iVar0 = joaat("clique");
					break;
				
				case 44:
					iVar0 = joaat("impaler");
					break;
				
				case 45:
					iVar0 = joaat("deviant");
					break;
				
				case 46:
					iVar0 = joaat("tulip");
					break;
				
				case 47:
					iVar0 = joaat("vamos");
					break;
				
				case 48:
					iVar0 = joaat("gauntlet3");
					break;
				
				case 49:
					iVar0 = joaat("gauntlet4");
					break;
				
				case 50:
					iVar0 = joaat("peyote2");
					break;
				
				case 51:
					iVar0 = joaat("yosemite2");
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
					iVar0 = joaat("coquette");
					break;
				
				case 2:
					iVar0 = joaat("ninef2");
					break;
				
				case 3:
					iVar0 = joaat("alpha");
					break;
				
				case 4:
					iVar0 = joaat("jester");
					break;
				
				case 5:
					iVar0 = joaat("massacro");
					break;
				
				case 6:
					iVar0 = joaat("furoregt");
					break;
				
				case 7:
					iVar0 = joaat("jester2");
					break;
				
				case 8:
					iVar0 = joaat("massacro2");
					break;
				
				case 9:
					iVar0 = joaat("kuruma");
					break;
				
				case 10:
					iVar0 = joaat("kuruma2");
					break;
				
				case 11:
					iVar0 = joaat("verlierer2");
					break;
				
				case 12:
					iVar0 = joaat("sultan");
					break;
				
				case 13:
					iVar0 = joaat("bestiagts");
					break;
				
				case 14:
					iVar0 = joaat("seven70");
					break;
				
				case 15:
					iVar0 = joaat("omnis");
					break;
				
				case 16:
					iVar0 = joaat("tropos");
					break;
				
				case 17:
					iVar0 = joaat("lynx");
					break;
				
				case 18:
					iVar0 = joaat("tampa2");
					break;
				
				case 19:
					iVar0 = joaat("buffalo3");
					break;
				
				case 20:
					iVar0 = joaat("raptor");
					break;
				
				case 21:
					iVar0 = joaat("elegy2");
					break;
				
				case 22:
					iVar0 = joaat("elegy");
					break;
				
				case 23:
					iVar0 = joaat("comet3");
					break;
				
				case 24:
					iVar0 = joaat("specter");
					break;
				
				case 25:
					iVar0 = joaat("specter2");
					break;
				
				case 26:
					iVar0 = joaat("ruston");
					break;
				
				case 27:
					iVar0 = joaat("khamelion");
					break;
				
				case 28:
					iVar0 = joaat("streiter");
					break;
				
				case 29:
					iVar0 = joaat("neon");
					break;
				
				case 30:
					iVar0 = joaat("pariah");
					break;
				
				case 31:
					iVar0 = joaat("revolter");
					break;
				
				case 32:
					iVar0 = joaat("sentinel3");
					break;
				
				case 33:
					iVar0 = joaat("comet5");
					break;
				
				case 34:
					iVar0 = joaat("raiden");
					break;
				
				case 35:
					iVar0 = joaat("flashgt");
					break;
				
				case 36:
					iVar0 = joaat("gb200");
					break;
				
				case 37:
					iVar0 = joaat("hotring");
					break;
				
				case 38:
					iVar0 = joaat("comet4");
					break;
				
				case 39:
					iVar0 = joaat("schlagen");
					break;
				
				case 40:
					iVar0 = joaat("italigto");
					break;
				
				case 41:
					iVar0 = joaat("drafter");
					break;
				
				case 42:
					iVar0 = joaat("issi7");
					break;
				
				case 43:
					iVar0 = joaat("neo");
					break;
				
				case 44:
					iVar0 = joaat("locust");
					break;
				
				case 45:
					iVar0 = joaat("jugular");
					break;
				
				case 46:
					iVar0 = joaat("paragon");
					break;
				
				case 47:
					iVar0 = joaat("schwarzer");
					break;
				
				case 48:
					iVar0 = joaat("imorgon");
					break;
				
				case 49:
					iVar0 = joaat("sugoi");
					break;
				
				case 50:
					iVar0 = joaat("vstr");
					break;
				
				case 51:
					iVar0 = joaat("komoda");
					break;
				
				case 52:
					iVar0 = joaat("sultan2");
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
					iVar0 = joaat("mamba");
					break;
				
				case 11:
					iVar0 = joaat("tornado5");
					break;
				
				case 12:
					iVar0 = joaat("tornado6");
					break;
				
				case 13:
					iVar0 = joaat("infernus2");
					break;
				
				case 14:
					iVar0 = joaat("turismo2");
					break;
				
				case 15:
					iVar0 = joaat("cheetah2");
					break;
				
				case 16:
					iVar0 = joaat("ardent");
					break;
				
				case 17:
					iVar0 = joaat("torero");
					break;
				
				case 18:
					iVar0 = joaat("retinue");
					break;
				
				case 19:
					iVar0 = joaat("rapidgt3");
					break;
				
				case 20:
					iVar0 = joaat("savestra");
					break;
				
				case 21:
					iVar0 = joaat("viseris");
					break;
				
				case 22:
					iVar0 = joaat("stromberg");
					break;
				
				case 23:
					iVar0 = joaat("gt500");
					break;
				
				case 24:
					iVar0 = joaat("z190");
					break;
				
				case 25:
					iVar0 = joaat("fagaloa");
					break;
				
				case 26:
					iVar0 = joaat("michelli");
					break;
				
				case 27:
					iVar0 = joaat("deluxo");
					break;
				
				case 28:
					iVar0 = joaat("cheburek");
					break;
				
				case 29:
					iVar0 = joaat("jester3");
					break;
				
				case 30:
					iVar0 = joaat("swinger");
					break;
				
				case 31:
					iVar0 = joaat("zion3");
					break;
				
				case 32:
					iVar0 = joaat("dynasty");
					break;
				
				case 33:
					iVar0 = joaat("nebula");
					break;
				
				case 34:
					iVar0 = joaat("retinue2");
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
				
				case 7:
					iVar0 = joaat("banshee2");
					break;
				
				case 8:
					iVar0 = joaat("sultanrs");
					break;
				
				case 9:
					iVar0 = joaat("reaper");
					break;
				
				case 10:
					iVar0 = joaat("fmj");
					break;
				
				case 11:
					iVar0 = joaat("prototipo");
					break;
				
				case 12:
					iVar0 = joaat("pfister811");
					break;
				
				case 13:
					iVar0 = joaat("le7b");
					break;
				
				case 14:
					iVar0 = joaat("tyrus");
					break;
				
				case 15:
					iVar0 = joaat("sheava");
					break;
				
				case 16:
					iVar0 = joaat("tempesta");
					break;
				
				case 17:
					iVar0 = joaat("nero");
					break;
				
				case 18:
					iVar0 = joaat("nero2");
					break;
				
				case 19:
					iVar0 = joaat("penetrator");
					break;
				
				case 20:
					iVar0 = joaat("voltic2");
					break;
				
				case 21:
					iVar0 = joaat("italigtb");
					break;
				
				case 22:
					iVar0 = joaat("italigtb2");
					break;
				
				case 23:
					iVar0 = joaat("gp1");
					break;
				
				case 24:
					iVar0 = joaat("vagner");
					break;
				
				case 25:
					iVar0 = joaat("xa21");
					break;
				
				case 26:
					iVar0 = joaat("visione");
					break;
				
				case 27:
					iVar0 = joaat("vigilante");
					break;
				
				case 28:
					iVar0 = joaat("cyclone");
					break;
				
				case 29:
					iVar0 = joaat("sc1");
					break;
				
				case 30:
					iVar0 = joaat("autarch");
					break;
				
				case 31:
					iVar0 = joaat("tezeract");
					break;
				
				case 32:
					iVar0 = joaat("taipan");
					break;
				
				case 33:
					iVar0 = joaat("entity2");
					break;
				
				case 34:
					iVar0 = joaat("tyrant");
					break;
				
				case 35:
					iVar0 = joaat("deveste");
					break;
				
				case 36:
					iVar0 = joaat("thrax");
					break;
				
				case 37:
					iVar0 = joaat("zorrusso");
					break;
				
				case 38:
					iVar0 = joaat("krieger");
					break;
				
				case 39:
					iVar0 = joaat("emerus");
					break;
				
				case 40:
					iVar0 = joaat("s80");
					break;
				
				case 41:
					iVar0 = joaat("furia");
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
				
				case 12:
					iVar0 = joaat("crusader");
					break;
				
				case 13:
					iVar0 = joaat("radi");
					break;
				
				case 14:
					iVar0 = joaat("baller3");
					break;
				
				case 15:
					iVar0 = joaat("baller4");
					break;
				
				case 16:
					iVar0 = joaat("baller5");
					break;
				
				case 17:
					iVar0 = joaat("baller6");
					break;
				
				case 18:
					iVar0 = joaat("xls");
					break;
				
				case 19:
					iVar0 = joaat("xls2");
					break;
				
				case 20:
					iVar0 = joaat("contender");
					break;
				
				case 21:
					iVar0 = joaat("patriot2");
					break;
				
				case 22:
					iVar0 = joaat("serrano");
					break;
				
				case 23:
					iVar0 = joaat("fq2");
					break;
				
				case 24:
					iVar0 = joaat("habanero");
					break;
				
				case 25:
					iVar0 = joaat("toros");
					break;
				
				case 26:
					iVar0 = joaat("novak");
					break;
				
				case 27:
					iVar0 = joaat("rebla");
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
				
				case 14:
					iVar0 = joaat("marshall");
					break;
				
				case 15:
					iVar0 = joaat("trophytruck");
					break;
				
				case 16:
					iVar0 = joaat("trophytruck2");
					break;
				
				case 17:
					iVar0 = joaat("rallytruck");
					break;
				
				case 18:
					iVar0 = joaat("blazer4");
					break;
				
				case 19:
					iVar0 = joaat("dune4");
					break;
				
				case 20:
					iVar0 = joaat("dune5");
					break;
				
				case 21:
					iVar0 = joaat("technical2");
					break;
				
				case 22:
					iVar0 = joaat("blazer5");
					break;
				
				case 23:
					iVar0 = joaat("dune3");
					break;
				
				case 24:
					iVar0 = joaat("insurgent3");
					break;
				
				case 25:
					iVar0 = joaat("technical3");
					break;
				
				case 26:
					iVar0 = joaat("nightshark");
					break;
				
				case 27:
					iVar0 = joaat("riata");
					break;
				
				case 28:
					iVar0 = joaat("kamacho");
					break;
				
				case 29:
					iVar0 = joaat("caracara");
					break;
				
				case 30:
					iVar0 = joaat("freecrawler");
					break;
				
				case 31:
					iVar0 = joaat("menacer");
					break;
				
				case 32:
					iVar0 = joaat("patriot");
					break;
				
				case 33:
					iVar0 = joaat("hellion");
					break;
				
				case 34:
					iVar0 = joaat("caracara2");
					break;
				
				case 35:
					iVar0 = joaat("rancherxl");
					break;
				
				case 36:
					iVar0 = joaat("outlaw");
					break;
				
				case 37:
					iVar0 = joaat("everon");
					break;
				
				case 38:
					iVar0 = joaat("zhaba");
					break;
				
				case 39:
					iVar0 = joaat("vagrant");
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
				
				case 14:
					iVar0 = joaat("akuma");
					break;
				
				case 15:
					iVar0 = joaat("bf400");
					break;
				
				case 16:
					iVar0 = joaat("gargoyle");
					break;
				
				case 17:
					iVar0 = joaat("cliffhanger");
					break;
				
				case 18:
					iVar0 = joaat("hakuchou2");
					break;
				
				case 19:
					iVar0 = joaat("defiler");
					break;
				
				case 20:
					iVar0 = joaat("chimera");
					break;
				
				case 21:
					iVar0 = joaat("zombieb");
					break;
				
				case 22:
					iVar0 = joaat("avarus");
					break;
				
				case 23:
					iVar0 = joaat("nightblade");
					break;
				
				case 24:
					iVar0 = joaat("zombiea");
					break;
				
				case 25:
					iVar0 = joaat("wolfsbane");
					break;
				
				case 26:
					iVar0 = joaat("manchez");
					break;
				
				case 27:
					iVar0 = joaat("ratbike");
					break;
				
				case 28:
					iVar0 = joaat("bagger");
					break;
				
				case 29:
					iVar0 = joaat("faggio3");
					break;
				
				case 30:
					iVar0 = joaat("faggio");
					break;
				
				case 31:
					iVar0 = joaat("daemon2");
					break;
				
				case 32:
					iVar0 = joaat("vortex");
					break;
				
				case 33:
					iVar0 = joaat("shotaro");
					break;
				
				case 34:
					iVar0 = joaat("esskey");
					break;
				
				case 35:
					iVar0 = joaat("diablous");
					break;
				
				case 36:
					iVar0 = joaat("diablous2");
					break;
				
				case 37:
					iVar0 = joaat("fcr");
					break;
				
				case 38:
					iVar0 = joaat("fcr2");
					break;
				
				case 39:
					iVar0 = joaat("oppressor");
					break;
				
				case 40:
					iVar0 = joaat("sanctus");
					break;
				
				case 41:
					iVar0 = joaat("rrocket");
					break;
				
				case 42:
					iVar0 = joaat("stryder");
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
				
				case 3:
					iVar0 = joaat("scorcher");
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
				
				case 9:
					iVar0 = joaat("apc");
					break;
				
				case 10:
					iVar0 = joaat("halftrack");
					break;
				
				case 11:
					iVar0 = joaat("chernobog");
					break;
				
				case 12:
					iVar0 = joaat("khanjali");
					break;
				
				case 13:
					iVar0 = joaat("thruster");
					break;
				
				case 14:
					iVar0 = joaat("barrage");
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
				
				case 11:
					iVar0 = joaat("riot2");
					break;
				
				case 12:
					iVar0 = joaat("policet");
					break;
				
				case 13:
					iVar0 = joaat("sheriff");
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
				
				case 10:
					iVar0 = joaat("brickade");
					break;
				
				case 11:
					iVar0 = joaat("wastelander");
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
				
				case 7:
					iVar0 = joaat("caddy3");
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
				
				case 18:
					iVar0 = joaat("minivan2");
					break;
				
				case 19:
					iVar0 = joaat("rumpo3");
					break;
				
				case 20:
					iVar0 = joaat("youga2");
					break;
				
				case 21:
					iVar0 = joaat("boxville5");
					break;
				
				case 22:
					iVar0 = joaat("mule4");
					break;
				
				case 23:
					iVar0 = joaat("speedo4");
					break;
				
				case 24:
					iVar0 = joaat("bison3");
					break;
				
				case 25:
					iVar0 = joaat("boxville");
					break;
				
				case 26:
					iVar0 = joaat("burrito");
					break;
				
				case 27:
					iVar0 = joaat("burrito2");
					break;
				
				case 28:
					iVar0 = joaat("pony");
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
					iVar0 = joaat("phantom2");
					break;
				
				case 9:
					iVar0 = joaat("phantom3");
					break;
				
				case 10:
					iVar0 = joaat("hauler2");
					break;
				
				case 11:
					iVar0 = joaat("trailersmall2");
					break;
				
				case 12:
					iVar0 = joaat("trailerlarge");
					break;
				
				case 13:
					iVar0 = joaat("pounder");
					break;
				
				case 14:
					iVar0 = joaat("pounder2");
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
				
				case 8:
					iVar0 = joaat("supervolito");
					break;
				
				case 9:
					iVar0 = joaat("supervolito2");
					break;
				
				case 10:
					iVar0 = joaat("valkyrie2");
					break;
				
				case 11:
					iVar0 = joaat("volatus");
					break;
				
				case 12:
					iVar0 = joaat("buzzard2");
					break;
				
				case 13:
					iVar0 = joaat("havok");
					break;
				
				case 14:
					iVar0 = joaat("hunter");
					break;
				
				case 15:
					iVar0 = joaat("akula");
					break;
				
				case 16:
					iVar0 = joaat("avenger");
					break;
				
				case 17:
					iVar0 = joaat("seasparrow");
					break;
				
				case 18:
					iVar0 = joaat("cargobob4");
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
				
				case 11:
					iVar0 = joaat("nimbus");
					break;
				
				case 12:
					iVar0 = joaat("cargoplane");
					break;
				
				case 13:
					iVar0 = joaat("dodo");
					break;
				
				case 14:
					iVar0 = joaat("microlight");
					break;
				
				case 15:
					iVar0 = joaat("alphaz1");
					break;
				
				case 16:
					iVar0 = joaat("tula");
					break;
				
				case 17:
					iVar0 = joaat("rogue");
					break;
				
				case 18:
					iVar0 = joaat("starling");
					break;
				
				case 19:
					iVar0 = joaat("bombushka");
					break;
				
				case 20:
					iVar0 = joaat("howard");
					break;
				
				case 21:
					iVar0 = joaat("mogul");
					break;
				
				case 22:
					iVar0 = joaat("seabreeze");
					break;
				
				case 23:
					iVar0 = joaat("nokota");
					break;
				
				case 24:
					iVar0 = joaat("volatol");
					break;
				
				case 25:
					iVar0 = joaat("strikeforce");
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
					iVar0 = joaat("molotok");
					break;
				
				case 4:
					iVar0 = joaat("pyro");
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
					iVar0 = joaat("submersible2");
					break;
				
				case 7:
					iVar0 = joaat("suntrap");
					break;
				
				case 8:
					iVar0 = joaat("tropic");
					break;
				
				case 9:
					iVar0 = joaat("speeder");
					break;
				
				case 10:
					iVar0 = joaat("toro");
					break;
				
				case 11:
					iVar0 = joaat("tug");
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_cs_dildo_01");
					break;
				
				case 1:
					iVar0 = joaat("v_res_d_dildo_b");
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("blazer5");
					break;
				
				case 1:
					iVar0 = joaat("ruiner2");
					break;
				
				case 2:
					iVar0 = joaat("voltic2");
					break;
				
				case 3:
					iVar0 = joaat("technical2");
					break;
				
				case 4:
					iVar0 = joaat("dune4");
					break;
				
				case 5:
					iVar0 = joaat("dune5");
					break;
				
				case 6:
					iVar0 = joaat("phantom2");
					break;
				
				case 7:
					iVar0 = joaat("boxville5");
					break;
				
				case 8:
					iVar0 = joaat("wastelander");
					break;
				
				case 9:
					iVar0 = joaat("oppressor");
					break;
				
				case 10:
					iVar0 = joaat("vigilante");
					break;
				
				case 11:
					iVar0 = joaat("deluxo");
					break;
				
				case 12:
					iVar0 = joaat("stromberg");
					break;
				
				case 13:
					iVar0 = joaat("thruster");
					break;
				
				case 14:
					iVar0 = joaat("pbus2");
					break;
				
				case 15:
					iVar0 = joaat("oppressor2");
					break;
				
				case 16:
					iVar0 = joaat("terbyte");
					break;
				
				case 17:
					iVar0 = joaat("blimp3");
					break;
				
				case 18:
					iVar0 = joaat("scramjet");
					break;
				
				case 19:
					iVar0 = joaat("rcbandito");
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("tampa3");
					break;
				
				case 1:
					iVar0 = joaat("dune3");
					break;
				
				case 2:
					iVar0 = joaat("halftrack");
					break;
				
				case 3:
					iVar0 = joaat("insurgent3");
					break;
				
				case 4:
					iVar0 = joaat("technical3");
					break;
				
				case 5:
					iVar0 = joaat("apc");
					break;
				
				case 6:
					iVar0 = joaat("oppressor");
					break;
				
				case 7:
					iVar0 = joaat("trailersmall2");
					break;
				
				case 8:
					iVar0 = joaat("thruster");
					break;
				
				case 9:
					iVar0 = joaat("riot2");
					break;
				
				case 10:
					iVar0 = joaat("khanjali");
					break;
				
				case 11:
					iVar0 = joaat("deluxo");
					break;
				
				case 12:
					iVar0 = joaat("barrage");
					break;
				
				case 13:
					iVar0 = joaat("microlight");
					break;
				
				case 14:
					iVar0 = joaat("havok");
					break;
				
				case 15:
					iVar0 = joaat("seabreeze");
					break;
				
				case 16:
					iVar0 = joaat("starling");
					break;
				
				case 17:
					iVar0 = joaat("akula");
					break;
				
				case 18:
					iVar0 = joaat("cuban800");
					break;
				
				case 19:
					iVar0 = joaat("pyro");
					break;
				
				case 20:
					iVar0 = joaat("mogul");
					break;
				
				case 21:
					iVar0 = joaat("rogue");
					break;
				
				case 22:
					iVar0 = joaat("molotok");
					break;
				
				case 23:
					iVar0 = joaat("nokota");
					break;
				
				case 24:
					iVar0 = joaat("hunter");
					break;
				
				case 25:
					iVar0 = joaat("tula");
					break;
				
				case 26:
					iVar0 = joaat("bombushka");
					break;
				
				case 27:
					iVar0 = joaat("volatol");
					break;
				
				case 28:
					iVar0 = joaat("avenger");
					break;
				
				case 29:
					iVar0 = joaat("nightshark");
					break;
				
				case 30:
					iVar0 = joaat("ardent");
					break;
				
				case 31:
					iVar0 = joaat("blazer5");
					break;
				
				case 32:
					iVar0 = joaat("ruiner2");
					break;
				
				case 33:
					iVar0 = joaat("technical2");
					break;
				
				case 34:
					iVar0 = joaat("boxville5");
					break;
				
				case 35:
					iVar0 = joaat("vigilante");
					break;
				
				case 36:
					iVar0 = joaat("stromberg");
					break;
				
				case 37:
					iVar0 = joaat("chernobog");
					break;
				
				case 38:
					iVar0 = joaat("caracara");
					break;
				
				case 39:
					iVar0 = joaat("menacer");
					break;
				
				case 40:
					iVar0 = joaat("oppressor2");
					break;
				
				case 41:
					iVar0 = joaat("strikeforce");
					break;
				
				case 42:
					iVar0 = joaat("scramjet");
					break;
				
				case 43:
					iVar0 = joaat("mule4");
					break;
				
				case 44:
					iVar0 = joaat("pounder2");
					break;
				
				case 45:
					iVar0 = joaat("speedo4");
					break;
				
				case 46:
					iVar0 = joaat("seasparrow");
					break;
				
				case 47:
					iVar0 = joaat("paragon2");
					break;
				
				case 48:
					iVar0 = joaat("jb7002");
					break;
				
				case 49:
					iVar0 = joaat("minitank");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return func_215(joaat("bruiser"));
				
				case 1:
					return func_215(joaat("brutus"));
				
				case 2:
					return func_215(joaat("cerberus"));
				
				case 3:
					return func_215(joaat("deathbike"));
				
				case 4:
					return func_215(joaat("dominator4"));
				
				case 5:
					return func_215(joaat("impaler2"));
				
				case 6:
					if (Global_1384446)
					{
						return joaat("imperator");
					}
					return func_215(joaat("imperator"));
				
				case 7:
					return func_215(joaat("issi4"));
				
				case 8:
					return func_215(joaat("monster3"));
				
				case 9:
					return func_215(joaat("scarab"));
				
				case 10:
					return func_215(joaat("slamvan4"));
				
				case 11:
					return func_215(joaat("zr380"));
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("formula");
					break;
				
				case 1:
					iVar0 = joaat("formula2");
					break;
			}
			break;
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_215(int iParam0)
{
	int iVar0;
	
	switch (Global_4456448.f_184556)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
					iVar0 = joaat("bruiser");
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case joaat("brutus3"):
					iVar0 = joaat("brutus");
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					iVar0 = joaat("cerberus");
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					iVar0 = joaat("deathbike");
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
					iVar0 = joaat("dominator4");
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case joaat("impaler4"):
					iVar0 = joaat("impaler2");
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
					iVar0 = joaat("imperator");
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case joaat("issi6"):
					iVar0 = joaat("issi4");
					break;
				
				case joaat("monster3"):
				case joaat("monster4"):
				case joaat("monster5"):
					iVar0 = joaat("monster3");
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case joaat("scarab3"):
					iVar0 = joaat("scarab");
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case joaat("slamvan6"):
					iVar0 = joaat("slamvan4");
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case joaat("zr3803"):
					iVar0 = joaat("zr380");
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
					iVar0 = joaat("bruiser2");
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case joaat("brutus3"):
					iVar0 = joaat("brutus2");
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					iVar0 = joaat("cerberus2");
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					iVar0 = joaat("deathbike2");
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
					iVar0 = joaat("dominator5");
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case joaat("impaler4"):
					iVar0 = joaat("impaler3");
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
					iVar0 = joaat("imperator2");
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case joaat("issi6"):
					iVar0 = joaat("issi5");
					break;
				
				case joaat("monster3"):
				case joaat("monster4"):
				case joaat("monster5"):
					iVar0 = joaat("monster4");
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case joaat("scarab3"):
					iVar0 = joaat("scarab2");
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case joaat("slamvan6"):
					iVar0 = joaat("slamvan5");
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case joaat("zr3803"):
					iVar0 = joaat("zr3802");
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case joaat("bruiser3"):
					iVar0 = joaat("bruiser3");
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case joaat("brutus3"):
					iVar0 = joaat("brutus3");
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case joaat("cerberus3"):
					iVar0 = joaat("cerberus3");
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					iVar0 = joaat("deathbike3");
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case joaat("dominator6"):
					iVar0 = joaat("dominator6");
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case joaat("impaler4"):
					iVar0 = joaat("impaler4");
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case joaat("imperator3"):
					iVar0 = joaat("imperator3");
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case joaat("issi6"):
					iVar0 = joaat("issi6");
					break;
				
				case joaat("monster3"):
				case joaat("monster4"):
				case joaat("monster5"):
					iVar0 = joaat("monster5");
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case joaat("scarab3"):
					iVar0 = joaat("scarab3");
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case joaat("slamvan6"):
					iVar0 = joaat("slamvan6");
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case joaat("zr3803"):
					iVar0 = joaat("zr3803");
					break;
			}
			break;
	}
	if (unk_0xCBBFE6965951B21E(iVar0))
	{
		return iVar0;
	}
	return iParam0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (Global_1694467[iParam0] != -1)
	{
		return Global_1694467[iParam0];
	}
	iVar0 = 0;
	while (iVar0 <= 55)
	{
		if (func_214(iParam0, iVar0) == 0)
		{
			Global_1694467[iParam0] = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_217(int iParam0)
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
	
	iVar5 = unk_0x7408DCBD37A2C60F(iParam0, "weap");
	Global_4456448.f_88008 = unk_0xEE6F60A09902D357(iVar5, "no");
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_88008 > 60)
		{
			Global_4456448.f_88008 = 60;
		}
	}
	else if (Global_4456448.f_88008 > 60)
	{
		Global_4456448.f_88008 = 60;
	}
	Global_4456448.f_88010 = unk_0xEE6F60A09902D357(iVar5, "time");
	Global_4456448.f_88011 = unk_0xEE6F60A09902D357(iVar5, "pal");
	Global_4456448.f_66 = unk_0xEE6F60A09902D357(iVar5, "blip");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar5, "loc");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar5, "head");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar5, "rotx");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar5, "roty");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar5, "type");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar5, "sub");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar5, "bits");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar5, "clip");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar5, "brest1");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar5, "brest2");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar5, "brest3");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar5, "brest4");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar5, "dmgmult");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar5, "rput");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar5, "wcoid");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar5, "vput");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar5, "vasst");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar5, "vasso");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar5, "vasss");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar5, "vasst2");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar5, "vasso2");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar5, "vasss2");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar5, "vasst3");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar5, "vasso3");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar5, "vasss3");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar5, "vasst4");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar5, "vasso4");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar5, "vasss4");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar5, "vclnr");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar5, "vclnt");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar5, "vclnrl");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar5, "ipdi");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar5, "iwati");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar5, "iptnp");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar5, "vbmbl");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar5, "vbmbm");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar5, "wspg");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar5, "wsspg");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar5, "wcpm");
	Global_4456448.f_92410 = unk_0x6F7A89248B266B1B(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_88008 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_88017[iVar0 /*72*/] = { unk_0xB6537A31819F86E5(iVar6, iVar0) };
			Global_4456448.f_88017[iVar0 /*72*/].f_3.f_2 = unk_0xB496A8A1F76DD70A(iVar7, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_3 = unk_0xB496A8A1F76DD70A(iVar8, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_3.f_1 = unk_0xB496A8A1F76DD70A(iVar9, iVar0);
			iVar1 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_15 = iVar1;
			if (Global_4456448.f_156052 == 0)
			{
				iVar45 = 0;
				while (iVar45 <= 59)
				{
					if (Global_4456448.f_88017[iVar45 /*72*/].f_15 == joaat("pickup_weapon_stungun"))
					{
						Global_4456448.f_88017[iVar45 /*72*/].f_15 = joaat("pickup_weapon_pistol");
					}
					iVar45++;
				}
			}
			if (!func_220(Global_4456448.f_88017[iVar0 /*72*/].f_15))
			{
				if (Global_4456448.f_88017[iVar0 /*72*/].f_15 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_15 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_15 = joaat("pickup_weapon_pistol");
				}
			}
			Global_4456448.f_88017[iVar0 /*72*/].f_6 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
			Global_4456448.f_88017[iVar0 /*72*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
			if (iVar14 != 0 && unk_0xB988B7EA5B6DE257(iVar14, iVar0) == 1)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[0] = unk_0x1BC37BB2C67275C8(iVar14, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[0] = 0;
			}
			if (iVar15 != 0 && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 1)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[1] = unk_0x1BC37BB2C67275C8(iVar15, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[1] = 0;
			}
			if (iVar16 != 0 && unk_0xB988B7EA5B6DE257(iVar16, iVar0) == 1)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[2] = unk_0x1BC37BB2C67275C8(iVar16, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[2] = 0;
			}
			if (iVar17 != 0 && unk_0xB988B7EA5B6DE257(iVar17, iVar0) == 1)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[3] = unk_0x1BC37BB2C67275C8(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_10[3] = 0;
			}
			if (iVar18 != 0 && unk_0xB988B7EA5B6DE257(iVar18, iVar0) == 3)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_9 = unk_0xB496A8A1F76DD70A(iVar18, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_9 = 1f;
			}
			if (iVar19 != 0 && unk_0xB988B7EA5B6DE257(iVar19, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_23 = -1;
			}
			if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_71 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_71 = -1;
			}
			if (iVar37 != 0 && unk_0xB988B7EA5B6DE257(iVar37, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_41 = 0;
			}
			if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_24 = -1;
			}
			if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_42 = 0;
			}
			if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_43 = 0;
			}
			if (iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_44 = 0;
			}
			if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_45 = 0;
			}
			if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_46 = 0;
			}
			if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_88017[iVar0 /*72*/].f_47 = 0;
			}
			if (func_136())
			{
				if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_29 = -1;
				}
				if (iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar0) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_30 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_30 = -1;
				}
				if (iVar34 != 0 && unk_0xB988B7EA5B6DE257(iVar34, iVar0) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_31 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_31 = 0;
				}
				Global_4456448.f_88017[iVar0 /*72*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
				Global_4456448.f_88017[iVar0 /*72*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
				Global_4456448.f_88017[iVar0 /*72*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
				if (Global_4456448.f_88017[iVar0 /*72*/].f_28 == -1)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_28 = 0;
				}
				if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_48 = 0;
				}
				if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_32 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_33 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
					Global_4456448.f_88017[iVar0 /*72*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_35 = -1;
					Global_4456448.f_88017[iVar0 /*72*/].f_32 = 0;
					Global_4456448.f_88017[iVar0 /*72*/].f_38 = 0;
					Global_4456448.f_88017[iVar0 /*72*/].f_36 = -1;
					Global_4456448.f_88017[iVar0 /*72*/].f_33 = 0;
					Global_4456448.f_88017[iVar0 /*72*/].f_39 = 0;
					Global_4456448.f_88017[iVar0 /*72*/].f_37 = -1;
					Global_4456448.f_88017[iVar0 /*72*/].f_34 = 0;
					Global_4456448.f_88017[iVar0 /*72*/].f_40 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar46 = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar2) == 2)
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_16[iVar2] = unk_0xF6EB12D7E162DA9C(iVar46, iVar2);
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_16[iVar2] = 0;
				}
				iVar2++;
			}
			StringCopy(&cVar3, "wtSOv", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar47 = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
			iVar2 = 1;
			while (iVar2 <= 20)
			{
				if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, (iVar2 - 1)) == 2)
				{
					iVar48 = unk_0xF6EB12D7E162DA9C(iVar47, (iVar2 - 1));
					Global_4456448.f_88017[iVar0 /*72*/].f_49[iVar2] = iVar48;
					if (iVar48 != -1 && Global_4456448.f_88017[iVar0 /*72*/].f_49[iVar2] != 76)
					{
					}
				}
				else
				{
					Global_4456448.f_88017[iVar0 /*72*/].f_49[iVar2] = 76;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_26, 11))
	{
		func_218();
	}
}

void func_218()
{
	int iVar0;
	
	iVar0 = Global_4456448.f_88011;
	Global_4456448.f_88011 = func_219(iVar0);
	unk_0xA1E7A40E1F56E511(&(Global_4456448.f_26), 11);
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_pistol");
			break;
		
		case 1:
			return joaat("weapon_combatpistol");
			break;
		
		case 2:
			return joaat("weapon_appistol");
			break;
		
		case 29:
			return joaat("weapon_snspistol");
			break;
		
		case 30:
			return joaat("weapon_heavypistol");
			break;
		
		case 37:
			return joaat("weapon_vintagepistol");
			break;
		
		case 35:
			return joaat("weapon_pistol50");
			break;
		
		case 69:
			if (func_163())
			{
				return joaat("weapon_pistol_mk2");
			}
			break;
		
		case 75:
			if (func_163())
			{
				return joaat("weapon_revolver_mk2");
			}
			break;
		
		case 3:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 4:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 5:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 40:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 76:
			if (func_163())
			{
				return joaat("weapon_pumpshotgun_mk2");
			}
			break;
		
		case 6:
			return joaat("weapon_microsmg");
			break;
		
		case 7:
			return joaat("weapon_smg");
			break;
		
		case 8:
			return joaat("weapon_mg");
			break;
		
		case 9:
			return joaat("weapon_combatmg");
			break;
		
		case 31:
			return joaat("weapon_gusenberg");
			break;
		
		case 70:
			if (func_163())
			{
				return joaat("weapon_smg_mk2");
			}
			break;
		
		case 71:
			if (func_163())
			{
				return joaat("weapon_combatmg_mk2");
			}
			break;
		
		case 10:
			return joaat("weapon_assaultrifle");
			break;
		
		case 11:
			return joaat("weapon_carbinerifle");
			break;
		
		case 12:
			return joaat("weapon_advancedrifle");
			break;
		
		case 32:
			return joaat("weapon_specialcarbine");
			break;
		
		case 33:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 39:
			return joaat("weapon_musket");
			break;
		
		case 72:
			if (func_163())
			{
				return joaat("weapon_assaultrifle_mk2");
			}
			break;
		
		case 73:
			if (func_163())
			{
				return joaat("weapon_carbinerifle_mk2");
			}
			break;
		
		case 77:
			if (func_163())
			{
				return joaat("weapon_bullpuprifle_mk2");
			}
			break;
		
		case 78:
			if (func_163())
			{
				return joaat("weapon_specialcarbine_mk2");
			}
			break;
		
		case 13:
			return joaat("weapon_sniperrifle");
			break;
		
		case 14:
			return joaat("weapon_heavysniper");
			break;
		
		case 41:
			return joaat("weapon_marksmanrifle");
			break;
		
		case joaat("mpsv_lp0_31"):
			if (func_163())
			{
				return joaat("weapon_heavysniper_mk2");
			}
			break;
		
		case 15:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 16:
			return joaat("weapon_rpg");
			break;
		
		case 17:
			return joaat("weapon_minigun");
			break;
		
		case 38:
			return joaat("weapon_firework");
			break;
		
		case 43:
			return joaat("weapon_hominglauncher");
			break;
		
		case 55:
			return joaat("weapon_railgun");
			break;
		
		case 18:
			return joaat("weapon_grenade");
			break;
		
		case 19:
			return joaat("weapon_stickybomb");
			break;
		
		case 20:
			return joaat("weapon_smokegrenade");
			break;
		
		case 21:
			return joaat("weapon_molotov");
			break;
		
		case 22:
			return joaat("weapon_petrolcan");
			break;
		
		case 44:
			return joaat("weapon_proxmine");
			break;
		
		case 23:
			return joaat("weapon_knife");
			break;
		
		case 24:
			return joaat("weapon_nightstick");
			break;
		
		case 25:
			return joaat("weapon_bat");
			break;
		
		case 26:
			return joaat("weapon_crowbar");
			break;
		
		case 27:
			return joaat("weapon_golfclub");
			break;
		
		case 34:
			return joaat("weapon_bottle");
			break;
		
		case 36:
			return joaat("weapon_dagger");
			break;
		
		case 28:
			return joaat("weapon_unarmed");
			break;
		
		case 42:
			return joaat("weapon_flaregun");
			break;
		
		case 45:
			return joaat("weapon_knuckle");
			break;
		
		case 46:
			return joaat("weapon_combatpdw");
			break;
		
		case 47:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 53:
			return joaat("weapon_hatchet");
			break;
		
		case 48:
			return joaat("weapon_machete");
			break;
		
		case 51:
			return joaat("weapon_machinepistol");
			break;
		
		case 54:
			return joaat("weapon_assaultsmg");
			break;
		
		case 49:
			return joaat("weapon_dbshotgun");
			break;
		
		case 50:
			return joaat("weapon_compactrifle");
			break;
		
		case 52:
			return joaat("weapon_flashlight");
			break;
		
		case 56:
			return joaat("weapon_revolver");
			break;
		
		case 57:
			return joaat("weapon_switchblade");
			break;
		
		case 58:
			return joaat("weapon_gusenberg");
			break;
		
		case 59:
			return joaat("weapon_autoshotgun");
			break;
		
		case 60:
			return joaat("weapon_minismg");
			break;
		
		case 61:
			return joaat("weapon_compactlauncher");
			break;
		
		case 62:
			return joaat("weapon_pipebomb");
			break;
		
		case 63:
			return joaat("weapon_poolcue");
			break;
		
		case 64:
			return joaat("weapon_battleaxe");
			break;
		
		case 65:
			return joaat("weapon_wrench");
			break;
		
		case 66:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 67:
			return joaat("weapon_hammer");
			break;
		
		case 68:
			return joaat("weapon_doubleaction");
			break;
		
		case 80:
			if (func_163())
			{
				return joaat("weapon_marksmanrifle_mk2");
			}
			break;
		
		case 81:
			if (func_163())
			{
				return joaat("weapon_snspistol_mk2");
			}
			break;
		
		case 82:
			if (func_163())
			{
				return joaat("weapon_revolver_mk2");
			}
			break;
		
		case 83:
			if (func_163())
			{
				return joaat("weapon_stone_hatchet");
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_220(int iParam0)
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
		case joaat("pickup_weapon_assaultrifle_mk2"):
		case joaat("pickup_weapon_carbinerifle_mk2"):
		case joaat("pickup_weapon_combatmg_mk2"):
		case joaat("pickup_weapon_heavysniper_mk2"):
		case joaat("pickup_weapon_pistol_mk2"):
		case joaat("pickup_weapon_smg_mk2"):
		case joaat("pickup_weapon_snspistol_mk2"):
		case joaat("pickup_weapon_revolver_mk2"):
		case joaat("pickup_weapon_bullpuprifle_mk2"):
		case joaat("pickup_weapon_specialcarbine_mk2"):
		case joaat("pickup_weapon_pumpshotgun_mk2"):
		case joaat("pickup_weapon_marksmanrifle_mk2"):
		case joaat("pickup_weapon_doubleaction"):
		case joaat("pickup_weapon_stone_hatchet"):
		case joaat("PICKUP_PORTABLE_PACKAGE_LARGE_RADIUS"):
			return 1;
		
		default:
	}
	return 0;
}

void func_221(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x7408DCBD37A2C60F(iParam0, "ptemp");
	Global_4456448.f_190878 = unk_0xEE6F60A09902D357(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_190878 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar5[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar5[iVar0], iVar1) == 5)
			{
				Global_4456448.f_188397[iVar0 /*248*/][iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_188397[iVar0 /*248*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar16[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_91[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar27[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar27[iVar0], iVar1) == 2)
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_182[iVar1] = unk_0xF6EB12D7E162DA9C(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_182[iVar1] = 0;
			}
			if (uVar38[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar38[iVar0], iVar1) == 2)
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_213[iVar1] = unk_0xF6EB12D7E162DA9C(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_188397[iVar0 /*248*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_222(int iParam0)
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
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	var uVar75;
	var uVar76;
	var uVar77;
	var uVar78;
	var uVar79;
	var uVar80;
	var uVar81;
	var uVar82;
	var uVar83;
	var uVar84;
	var uVar85;
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
	var uVar125[4];
	var uVar130[4];
	var uVar135[4];
	var uVar140[4];
	var uVar145[4];
	var uVar150[4];
	int iVar155;
	int iVar156;
	var uVar157[9];
	var uVar167[9];
	int iVar177;
	int iVar178;
	
	iVar5 = unk_0x7408DCBD37A2C60F(iParam0, "obj");
	Global_4456448.f_60688 = unk_0xEE6F60A09902D357(iVar5, "no");
	Global_4456448.f_60689 = unk_0xEE6F60A09902D357(iVar5, "pal");
	Global_4456448.f_60690 = unk_0xEE6F60A09902D357(iVar5, "rtm");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar5, "loc");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar5, "head");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar5, "model");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar5, "ped");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar5, "rsp");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar5, "rot");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar5, "cont");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar5, "valu");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar5, "ammoforwep");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar5, "cpup");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar5, "cpupr");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar5, "cpupt");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar5, "bits");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar5, "bits2");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar5, "bits3");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar5, "bits4");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar5, "mcvo1");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar5, "mcvo2");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar5, "mcvbkt");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar5, "oijh");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar5, "oiet");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar5, "ospl");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar5, "dspn");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar5, "objcps");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar5, "objinv");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar5, "objCCO");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar5, "objbhd");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar5, "objbp");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar5, "objcash");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar5, "objpi");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar5, "objld1");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar5, "objld2");
	iVar50 = unk_0xCB845A663B4DD2F3(iVar5, "objparq");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar5, "objNoO");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar5, "objNoOH");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar5, "objDoO");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar5, "objDoOH");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar5, "objDoOL");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar5, "objDoOLH");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar5, "objaro");
	if (func_136() || func_199())
	{
		iVar8 = unk_0xCB845A663B4DD2F3(iVar5, "obrr");
		iVar10 = unk_0xCB845A663B4DD2F3(iVar5, "obrmr");
		iVar9 = unk_0xCB845A663B4DD2F3(iVar5, "SMeR");
		iVar17 = unk_0xCB845A663B4DD2F3(iVar5, "obder");
		iVar16 = unk_0xCB845A663B4DD2F3(iVar5, "obso");
		iVar11 = unk_0xCB845A663B4DD2F3(iVar5, "osnt");
		iVar12 = unk_0xCB845A663B4DD2F3(iVar5, "osnei");
		iVar15 = unk_0xCB845A663B4DD2F3(iVar5, "objbr");
		iVar13 = unk_0xCB845A663B4DD2F3(iVar5, "o2sp");
		iVar14 = unk_0xCB845A663B4DD2F3(iVar5, "o2sh");
		iVar35 = unk_0xCB845A663B4DD2F3(iVar5, "mgbs");
		iVar36 = unk_0xCB845A663B4DD2F3(iVar5, "mgDT");
		iVar58 = unk_0xCB845A663B4DD2F3(iVar5, "objct");
		iVar59 = unk_0xCB845A663B4DD2F3(iVar5, "team");
		iVar60 = unk_0xCB845A663B4DD2F3(iVar5, "spwn");
		iVar61 = unk_0xCB845A663B4DD2F3(iVar5, "objct2");
		iVar62 = unk_0xCB845A663B4DD2F3(iVar5, "team2");
		iVar63 = unk_0xCB845A663B4DD2F3(iVar5, "spwn2");
		iVar64 = unk_0xCB845A663B4DD2F3(iVar5, "objct3");
		iVar65 = unk_0xCB845A663B4DD2F3(iVar5, "team3");
		iVar66 = unk_0xCB845A663B4DD2F3(iVar5, "spwn3");
		iVar67 = unk_0xCB845A663B4DD2F3(iVar5, "objct4");
		iVar68 = unk_0xCB845A663B4DD2F3(iVar5, "team4");
		iVar69 = unk_0xCB845A663B4DD2F3(iVar5, "spwn4");
		iVar70 = unk_0xCB845A663B4DD2F3(iVar5, "hlt");
		iVar71 = unk_0xCB845A663B4DD2F3(iVar5, "obb");
		iVar72 = unk_0xCB845A663B4DD2F3(iVar5, "obbc");
		iVar73 = unk_0xCB845A663B4DD2F3(iVar5, "obbs");
		iVar74 = unk_0xCB845A663B4DD2F3(iVar5, "obtc");
		uVar75 = unk_0xCB845A663B4DD2F3(iVar5, "oElec_BS");
		uVar76 = unk_0xCB845A663B4DD2F3(iVar5, "oElec_TDT");
		uVar77 = unk_0xCB845A663B4DD2F3(iVar5, "obtctbs");
		uVar79 = unk_0xCB845A663B4DD2F3(iVar5, "obtcta");
		uVar78 = unk_0xCB845A663B4DD2F3(iVar5, "obtcts");
		uVar80 = unk_0xCB845A663B4DD2F3(iVar5, "obtcwt");
		uVar81 = unk_0xCB845A663B4DD2F3(iVar5, "obtcvr");
		uVar82 = unk_0xCB845A663B4DD2F3(iVar5, "obtcvw");
		uVar83 = unk_0xCB845A663B4DD2F3(iVar5, "obtcsr");
		uVar84 = unk_0xCB845A663B4DD2F3(iVar5, "obtcsht");
		uVar85 = unk_0xCB845A663B4DD2F3(iVar5, "obtcbht");
		iVar86 = unk_0xCB845A663B4DD2F3(iVar5, "orbcnno");
		iVar87 = unk_0xCB845A663B4DD2F3(iVar5, "objhpovr");
		iVar88 = unk_0xCB845A663B4DD2F3(iVar5, "objbtte");
		iVar89 = unk_0xCB845A663B4DD2F3(iVar5, "objlkzn");
		iVar90 = unk_0xCB845A663B4DD2F3(iVar5, "ocoid");
		iVar95 = unk_0xCB845A663B4DD2F3(iVar5, "objtvi");
		iVar91 = unk_0xCB845A663B4DD2F3(iVar5, "tl63vts");
		iVar92 = unk_0xCB845A663B4DD2F3(iVar5, "objLOD");
		iVar93 = unk_0xCB845A663B4DD2F3(iVar5, "iobjhbir");
		iVar94 = unk_0xCB845A663B4DD2F3(iVar5, "iobjhbor");
		iVar96 = unk_0xCB845A663B4DD2F3(iVar5, "oIntAnim");
		iVar97 = unk_0xCB845A663B4DD2F3(iVar5, "oIntKPAR");
		iVar98 = unk_0xCB845A663B4DD2F3(iVar5, "oIntPed");
		iVar99 = unk_0xCB845A663B4DD2F3(iVar5, "objclt");
		iVar100 = unk_0xCB845A663B4DD2F3(iVar5, "objcr");
		iVar101 = unk_0xCB845A663B4DD2F3(iVar5, "obcra");
		iVar102 = unk_0xCB845A663B4DD2F3(iVar5, "ospdl");
		iVar103 = unk_0xCB845A663B4DD2F3(iVar5, "osgr");
		iVar104 = unk_0xCB845A663B4DD2F3(iVar5, "ossgr");
		iVar105 = unk_0xCB845A663B4DD2F3(iVar5, "objcnm");
		iVar106 = unk_0xCB845A663B4DD2F3(iVar5, "ororc");
		iVar107 = unk_0xCB845A663B4DD2F3(iVar5, "objap");
		iVar108 = unk_0xCB845A663B4DD2F3(iVar5, "objapt");
		iVar109 = unk_0xCB845A663B4DD2F3(iVar5, "obint");
		iVar110 = unk_0xCB845A663B4DD2F3(iVar5, "obrom");
		iVar111 = unk_0xCB845A663B4DD2F3(iVar5, "inco");
		iVar112 = unk_0xCB845A663B4DD2F3(iVar5, "inhsh");
		iVar113 = unk_0xCB845A663B4DD2F3(iVar5, "vehpu");
		iVar114 = unk_0xCB845A663B4DD2F3(iVar5, "airpu");
		iVar115 = unk_0xCB845A663B4DD2F3(iVar5, "gotor");
		iVar124 = unk_0xCB845A663B4DD2F3(iVar5, "objatto");
		iVar155 = unk_0xCB845A663B4DD2F3(iVar5, "objzns");
		iVar156 = unk_0xCB845A663B4DD2F3(iVar5, "objzns2");
		iVar177 = 0;
		iVar177 = 0;
		while (iVar177 <= 8)
		{
			StringCopy(&cVar3, "owrvv", 8);
			StringIntConCat(&cVar3, iVar177, 8);
			uVar157[iVar177] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
			StringCopy(&cVar3, "forvv", 8);
			StringIntConCat(&cVar3, iVar177, 8);
			uVar167[iVar177] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
			iVar177++;
		}
		iVar116 = unk_0xCB845A663B4DD2F3(iVar5, "gtbsr");
		iVar117 = unk_0xCB845A663B4DD2F3(iVar5, "gtbss");
		iVar118 = unk_0xCB845A663B4DD2F3(iVar5, "nmaggg");
		iVar119 = unk_0xCB845A663B4DD2F3(iVar5, "nmpass");
		iVar120 = unk_0xCB845A663B4DD2F3(iVar5, "nmfail");
		iVar121 = unk_0xCB845A663B4DD2F3(iVar5, "omcp");
		iVar122 = unk_0xCB845A663B4DD2F3(iVar5, "omcf");
		iVar123 = unk_0xCB845A663B4DD2F3(iVar5, "omca");
		iVar2 = 0;
		while (iVar2 <= (Global_4456448.f_42 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar125[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar130[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar135[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar140[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
				StringCopy(&cVar3, "bosr", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar145[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
				StringCopy(&cVar3, "boer", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar150[iVar2] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_60688 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_60691[iVar0 /*219*/] = { unk_0xB6537A31819F86E5(iVar6, iVar0) };
			Global_4456448.f_60691[iVar0 /*219*/].f_3 = unk_0xB496A8A1F76DD70A(iVar7, iVar0);
			iVar1 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_18 = func_203(iVar1);
			if (Global_4456448.f_60691[iVar0 /*219*/].f_18 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_4456448.f_156052 == 0)
			{
				if (Global_4456448.f_60691[iVar0 /*219*/].f_18 == joaat("prop_box_wood02a_pu"))
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("hei_prop_hei_drug_pack_01a");
				}
			}
			if (!unk_0xCBBFE6965951B21E(Global_4456448.f_60691[iVar0 /*219*/].f_18))
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("prop_drug_package");
			}
			if (Global_4456448.f_60691[iVar0 /*219*/].f_18 == joaat("prop_cctv_cam_06a"))
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_4456448.f_60691[iVar0 /*219*/].f_18 == joaat("prop_cctv_cam_07a"))
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("hei_prop_bank_cctv_02");
			}
			if (Global_4456448.f_60691[iVar0 /*219*/].f_18 == joaat("ex_prop_adv_case"))
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_18 = joaat("gr_prop_gr_adv_case");
			}
			Global_4456448.f_60691[iVar0 /*219*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_4 = { unk_0xB6537A31819F86E5(iVar21, iVar0) };
			Global_4456448.f_60691[iVar0 /*219*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_54 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_55 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_56 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_50 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_51 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_52 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_166 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_167 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_168 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_116 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_123 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_117 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_118 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_119 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_120 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_16 = unk_0xB496A8A1F76DD70A(iVar44, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_164 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_165 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_124 = unk_0xB496A8A1F76DD70A(iVar57, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_169 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_170 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_171 = unk_0xF6EB12D7E162DA9C(iVar49, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_172 = unk_0xF6EB12D7E162DA9C(iVar50, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_173 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_174 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_175 = unk_0xB496A8A1F76DD70A(iVar53, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_176 = unk_0xB496A8A1F76DD70A(iVar54, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_177 = unk_0xB496A8A1F76DD70A(iVar55, iVar0);
			Global_4456448.f_60691[iVar0 /*219*/].f_178 = unk_0xB496A8A1F76DD70A(iVar56, iVar0);
			if (iVar155 != 0 && unk_0xB988B7EA5B6DE257(iVar155, iVar0) == 2)
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_179 = unk_0xF6EB12D7E162DA9C(iVar155, iVar0);
			}
			else
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_179 = -1;
			}
			if (iVar156 != 0 && unk_0xB988B7EA5B6DE257(iVar156, iVar0) == 2)
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_180 = unk_0xF6EB12D7E162DA9C(iVar156, iVar0);
			}
			else
			{
				Global_4456448.f_60691[iVar0 /*219*/].f_180 = 0;
			}
			iVar178 = 0;
			iVar178 = 0;
			while (iVar178 <= 8)
			{
				if (uVar157[iVar178] != 0 && unk_0xB988B7EA5B6DE257(uVar157[iVar178], iVar0) == 5)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_181[iVar178 /*3*/] = { unk_0xB6537A31819F86E5(uVar157[iVar178], iVar0) };
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_181[iVar178 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar167[iVar178] != 0 && unk_0xB988B7EA5B6DE257(uVar167[iVar178], iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_209[iVar178] = unk_0xB496A8A1F76DD70A(uVar167[iVar178], iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_209[iVar178] = 0f;
				}
				iVar178++;
			}
			if (iVar114 != 0 && unk_0xB988B7EA5B6DE257(iVar114, iVar0) == 2)
			{
				if (unk_0xF6EB12D7E162DA9C(iVar114, iVar0) == 1)
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iVar0 /*219*/].f_49, 4))
					{
						unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iVar0 /*219*/].f_49), 4);
					}
				}
			}
			if (func_136() || func_199())
			{
				if ((((iVar8 != 0 && unk_0xB988B7EA5B6DE257(iVar8, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar10, iVar0) == 3) && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 2) && unk_0xB988B7EA5B6DE257(iVar12, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_7 = unk_0xB496A8A1F76DD70A(iVar8, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_8 = unk_0xB496A8A1F76DD70A(iVar10, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_7 = 50f;
					Global_4456448.f_60691[iVar0 /*219*/].f_8 = 0f;
					Global_4456448.f_60691[iVar0 /*219*/].f_9 = 0;
					Global_4456448.f_60691[iVar0 /*219*/].f_10 = -1;
				}
				if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_136 = unk_0xB496A8A1F76DD70A(iVar9, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_136 = 0f;
				}
				if (iVar17 != 0 && unk_0xB988B7EA5B6DE257(iVar17, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_139 = unk_0xB496A8A1F76DD70A(iVar17, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_139 = 0f;
				}
				if (iVar16 != 0 && unk_0xB988B7EA5B6DE257(iVar16, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_35 = 0;
				}
				if (iVar15 != 0 && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_15 = 0;
				}
				if ((iVar13 != 0 && unk_0xB988B7EA5B6DE257(iVar13, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar14, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_11 = { unk_0xB6537A31819F86E5(iVar13, iVar0) };
					Global_4456448.f_60691[iVar0 /*219*/].f_14 = unk_0xB496A8A1F76DD70A(iVar14, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_11 = { 0f, 0f, 0f };
					Global_4456448.f_60691[iVar0 /*219*/].f_14 = 0f;
				}
				func_202(&(Global_4456448.f_60691[iVar0 /*219*/].f_125), iVar0, &uVar75, &uVar76);
				func_201(&(Global_4456448.f_60691[iVar0 /*219*/].f_125.f_2), iVar0, &uVar77, &uVar79, &uVar78, &uVar80, &uVar81, &uVar82, &uVar83, &uVar84, &uVar85);
				func_223(iVar0);
				if (iVar86 != 0 && unk_0xB988B7EA5B6DE257(iVar86, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_137 = unk_0xF6EB12D7E162DA9C(iVar86, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_137 = -1;
				}
				if (iVar87 != 0 && unk_0xB988B7EA5B6DE257(iVar87, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_160 = unk_0xF6EB12D7E162DA9C(iVar87, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_160 = -1;
				}
				if (iVar88 != 0 && unk_0xB988B7EA5B6DE257(iVar88, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_161 = unk_0xF6EB12D7E162DA9C(iVar88, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_161 = -1;
				}
				if (iVar89 != 0 && unk_0xB988B7EA5B6DE257(iVar89, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_162 = unk_0xF6EB12D7E162DA9C(iVar89, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_162 = -1;
				}
				if (iVar90 != 0 && unk_0xB988B7EA5B6DE257(iVar90, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_163 = unk_0xF6EB12D7E162DA9C(iVar90, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_163 = -1;
				}
				if (iVar91 != 0 && unk_0xB988B7EA5B6DE257(iVar91, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_60691[iVar0 /*219*/].f_143), unk_0x3854C8AFB1001E7E(iVar91, iVar0), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_60691[iVar0 /*219*/].f_143), "", 64);
				}
				if (iVar95 != 0 && unk_0xB988B7EA5B6DE257(iVar95, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_159 = unk_0xF6EB12D7E162DA9C(iVar95, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_159 = -1;
				}
				if (iVar92 != 0 && unk_0xB988B7EA5B6DE257(iVar92, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_138 = unk_0xF6EB12D7E162DA9C(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_138 = -1;
				}
				if (iVar93 != 0 && unk_0xB988B7EA5B6DE257(iVar93, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_31 = unk_0xF6EB12D7E162DA9C(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_31 = 0;
				}
				if (iVar94 != 0 && unk_0xB988B7EA5B6DE257(iVar94, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_32 = unk_0xF6EB12D7E162DA9C(iVar94, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_32 = 0;
				}
				if (iVar96 != 0 && unk_0xB988B7EA5B6DE257(iVar96, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_74 = unk_0xF6EB12D7E162DA9C(iVar96, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_74 = 0;
				}
				if (iVar97 != 0 && unk_0xB988B7EA5B6DE257(iVar97, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_75 = unk_0xF6EB12D7E162DA9C(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_75 = -1;
				}
				if (iVar98 != 0 && unk_0xB988B7EA5B6DE257(iVar98, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_77 = unk_0xF6EB12D7E162DA9C(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_77 = -1;
				}
				Global_4456448.f_60691[iVar0 /*219*/].f_53 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
				if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_76 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_76 = -1;
				}
				if (iVar124 != 0 && unk_0xB988B7EA5B6DE257(iVar124, iVar0) == 5)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_140 = { unk_0xB6537A31819F86E5(iVar124, iVar0) };
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_140 = { 0f, 0f, 0f };
				}
				Global_4456448.f_60691[iVar0 /*219*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
				Global_4456448.f_60691[iVar0 /*219*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar59, iVar0);
				Global_4456448.f_60691[iVar0 /*219*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
				if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_82 = unk_0xF6EB12D7E162DA9C(iVar61, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_79 = unk_0xF6EB12D7E162DA9C(iVar62, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_85 = unk_0xF6EB12D7E162DA9C(iVar63, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_83 = unk_0xF6EB12D7E162DA9C(iVar64, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_80 = unk_0xF6EB12D7E162DA9C(iVar65, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_86 = unk_0xF6EB12D7E162DA9C(iVar66, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_84 = unk_0xF6EB12D7E162DA9C(iVar67, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_81 = unk_0xF6EB12D7E162DA9C(iVar68, iVar0);
					Global_4456448.f_60691[iVar0 /*219*/].f_87 = unk_0xF6EB12D7E162DA9C(iVar69, iVar0);
				}
				Global_4456448.f_60691[iVar0 /*219*/].f_30 = unk_0xF6EB12D7E162DA9C(iVar70, iVar0);
				Global_4456448.f_60691[iVar0 /*219*/].f_33 = unk_0xF6EB12D7E162DA9C(iVar71, iVar0);
				Global_4456448.f_60691[iVar0 /*219*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar113, iVar0);
				if (iVar72 != 0 && unk_0xB988B7EA5B6DE257(iVar72, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar72, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_34 = 0;
				}
				if (iVar73 != 0 && unk_0xB988B7EA5B6DE257(iVar73, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_36 = unk_0xB496A8A1F76DD70A(iVar73, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_36 = 0.8f;
				}
				if (iVar74 != 0 && unk_0xB988B7EA5B6DE257(iVar74, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_121 = unk_0xF6EB12D7E162DA9C(iVar74, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_121 = 1;
				}
				if (iVar100 != 0 && unk_0xB988B7EA5B6DE257(iVar100, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_60 = -1;
				}
				if (iVar99 != 0 && unk_0xB988B7EA5B6DE257(iVar99, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_61 = -1;
				}
				if (iVar101 != 0 && unk_0xB988B7EA5B6DE257(iVar101, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_62 = unk_0xF6EB12D7E162DA9C(iVar101, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_62 = -1;
				}
				if (iVar102 != 0 && unk_0xB988B7EA5B6DE257(iVar102, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_78 = unk_0xF6EB12D7E162DA9C(iVar102, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_78 = -1;
				}
				if (iVar103 != 0 && unk_0xB988B7EA5B6DE257(iVar103, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar103, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_41 = 0;
				}
				if (iVar104 != 0 && unk_0xB988B7EA5B6DE257(iVar104, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar104, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_42 = 0;
				}
				if (iVar105 != 0 && unk_0xB988B7EA5B6DE257(iVar105, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_107 = unk_0xF6EB12D7E162DA9C(iVar105, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_107 = -1;
				}
				if (iVar106 != 0 && unk_0xB988B7EA5B6DE257(iVar106, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_122 = unk_0xF6EB12D7E162DA9C(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_122 = 0;
				}
				if (iVar107 != 0 && unk_0xB988B7EA5B6DE257(iVar107, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_108 = unk_0xF6EB12D7E162DA9C(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_108 = -1;
				}
				if (iVar108 != 0 && unk_0xB988B7EA5B6DE257(iVar108, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_109 = unk_0xF6EB12D7E162DA9C(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_109 = -1;
				}
				if (iVar109 != 0 && unk_0xB988B7EA5B6DE257(iVar109, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_110 = unk_0xF6EB12D7E162DA9C(iVar109, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_110 = -1;
				}
				if (iVar110 != 0 && unk_0xB988B7EA5B6DE257(iVar110, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_111 = unk_0xF6EB12D7E162DA9C(iVar110, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_111 = -1;
				}
				if ((iVar111 != 0 && unk_0xB988B7EA5B6DE257(iVar111, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar112, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_112 = { unk_0xB6537A31819F86E5(iVar111, iVar0) };
					Global_4456448.f_60691[iVar0 /*219*/].f_115 = unk_0xF6EB12D7E162DA9C(iVar112, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_112 = { 0f, 0f, 0f };
					Global_4456448.f_60691[iVar0 /*219*/].f_115 = 0;
				}
				if (iVar115 != 0 && unk_0xB988B7EA5B6DE257(iVar115, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_63 = unk_0xF6EB12D7E162DA9C(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_63 = 0;
				}
				if (iVar116 != 0 && unk_0xB988B7EA5B6DE257(iVar116, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_6 = unk_0xF6EB12D7E162DA9C(iVar116, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_6 = -1;
				}
				if (iVar117 != 0 && unk_0xB988B7EA5B6DE257(iVar117, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_7 = unk_0xF6EB12D7E162DA9C(iVar117, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_7 = -1;
				}
				if (iVar118 != 0 && unk_0xB988B7EA5B6DE257(iVar118, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_2 = unk_0xF6EB12D7E162DA9C(iVar118, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_2 = -1;
				}
				if (iVar119 != 0 && unk_0xB988B7EA5B6DE257(iVar119, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98 = unk_0xF6EB12D7E162DA9C(iVar119, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98 = -1;
				}
				if (iVar120 != 0 && unk_0xB988B7EA5B6DE257(iVar120, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_1 = unk_0xF6EB12D7E162DA9C(iVar120, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_1 = -1;
				}
				if (iVar121 != 0 && unk_0xB988B7EA5B6DE257(iVar121, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_3 = unk_0xF6EB12D7E162DA9C(iVar121, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_3 = -1;
				}
				if (iVar122 != 0 && unk_0xB988B7EA5B6DE257(iVar122, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_4 = unk_0xF6EB12D7E162DA9C(iVar122, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_4 = -1;
				}
				if (iVar123 != 0 && unk_0xB988B7EA5B6DE257(iVar123, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_5 = unk_0xF6EB12D7E162DA9C(iVar123, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_98.f_5 = -1;
				}
				if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_117 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_117 = 0;
				}
				if (iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_118 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_118 = 0;
				}
				if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_119 = unk_0xF6EB12D7E162DA9C(iVar41, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_119 = 0;
				}
				if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_120 = unk_0xF6EB12D7E162DA9C(iVar42, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_120 = 0;
				}
				if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_164 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_164 = 0;
				}
				if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_165 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_165 = 0;
				}
				if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_16 = unk_0xB496A8A1F76DD70A(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_16 = 0f;
				}
				if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_17 = 0;
				}
				if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_169 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_169 = -1;
				}
				if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_170 = unk_0xF6EB12D7E162DA9C(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_170 = -1;
				}
				if (iVar49 != 0 && unk_0xB988B7EA5B6DE257(iVar49, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_171 = unk_0xF6EB12D7E162DA9C(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_171 = -1;
				}
				if (iVar50 != 0 && unk_0xB988B7EA5B6DE257(iVar50, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_172 = unk_0xF6EB12D7E162DA9C(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_172 = 4;
				}
				if (iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_173 = unk_0xF6EB12D7E162DA9C(iVar51, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_173 = 4;
				}
				if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar0) == 2)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_174 = unk_0xF6EB12D7E162DA9C(iVar52, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_174 = 5;
				}
				if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_175 = unk_0xB496A8A1F76DD70A(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_175 = 0.5f;
				}
				if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_176 = unk_0xB496A8A1F76DD70A(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_176 = 0.5f;
				}
				if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_177 = unk_0xB496A8A1F76DD70A(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_177 = 0.5f;
				}
				if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar0) == 3)
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_178 = unk_0xB496A8A1F76DD70A(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_60691[iVar0 /*219*/].f_178 = 0.5f;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_4456448.f_42 - 1))
				{
					if (iVar2 < 4)
					{
						Global_4456448.f_60691[iVar0 /*219*/].f_19[iVar2] = unk_0xF6EB12D7E162DA9C(uVar125[iVar2], iVar0);
						Global_4456448.f_60691[iVar0 /*219*/].f_24[iVar2] = unk_0xF6EB12D7E162DA9C(uVar130[iVar2], iVar0);
						if (Global_4456448.f_60691[iVar0 /*219*/].f_24[iVar2] == -1)
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_24[iVar2] = 99999;
						}
						if (uVar135[iVar2] != 0 && unk_0xB988B7EA5B6DE257(uVar135[iVar2], iVar0) == 2)
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_88[iVar2] = unk_0xF6EB12D7E162DA9C(uVar135[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_88[iVar2] = 0;
						}
						if (uVar140[iVar2] != 0 && unk_0xB988B7EA5B6DE257(uVar140[iVar2], iVar0) == 2)
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_93[iVar2] = unk_0xF6EB12D7E162DA9C(uVar140[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_93[iVar2] = 0;
						}
						if (uVar145[iVar2] != 0 && unk_0xB988B7EA5B6DE257(uVar145[iVar2], iVar0) == 2)
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_64[iVar2] = unk_0xF6EB12D7E162DA9C(uVar145[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_64[iVar2] = -1;
						}
						if (uVar150[iVar2] != 0 && unk_0xB988B7EA5B6DE257(uVar150[iVar2], iVar0) == 2)
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_69[iVar2] = unk_0xF6EB12D7E162DA9C(uVar150[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_60691[iVar0 /*219*/].f_69[iVar2] = -1;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_223(int iParam0)
{
	if (Global_4456448.f_190931 >= 1)
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_50, 11))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 0);
	}
	else
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_50, 12))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_50, 13))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 2);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_50, 14))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 3);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 5))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 4);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 12))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 5);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 17))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 6);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 15))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 7);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 14))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 8);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 16))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 9);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 18))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 10);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 19))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 11);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_51, 20))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_60691[iParam0 /*219*/].f_125.f_2), 12);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_60691[iParam0 /*219*/].f_52, 1))
	{
		if (Global_4456448.f_60691[iParam0 /*219*/].f_18 == joaat("ch_prop_ch_cctv_cam_01a"))
		{
			Global_4456448.f_60691[iParam0 /*219*/].f_18 = joaat("ch_prop_ch_cctv_cam_02a");
		}
	}
}

void func_224(int iParam0)
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
	var uVar38[2];
	int iVar41;
	char cVar42[16];
	
	iVar6 = unk_0x7408DCBD37A2C60F(iParam0, "zone");
	Global_4456448.f_154655 = unk_0xEE6F60A09902D357(iVar6, "no");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar6, "vto");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar6, "vld");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar6, "zntp");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar6, "znbs");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar6, "znwd");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar6, "znwvd");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar6, "znatp");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar6, "znwid");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar6, "znhei");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar6, "zndel");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar6, "zngTe");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar6, "zngPo");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar6, "ztm_t");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar6, "ztm_tn");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar6, "znscra1");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar6, "znscra2");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar6, "znscra3");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar6, "zneilnk");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar6, "znetlnk");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar6, "znebc");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar6, "zneba");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0xCB845A663B4DD2F3(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0xCB845A663B4DD2F3(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_154655 > 25)
	{
		Global_4456448.f_154655 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_154655 - 1))
	{
		Global_4456448.f_154787[iVar0 /*48*/][0 /*3*/] = { unk_0xB6537A31819F86E5(iVar7, iVar0) };
		Global_4456448.f_154787[iVar0 /*48*/][1 /*3*/] = { unk_0xB6537A31819F86E5(iVar8, iVar0) };
		Global_4456448.f_154787[iVar0 /*48*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar10[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar10[iVar1], iVar0) == 2)
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_11[iVar1] = unk_0xF6EB12D7E162DA9C(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_11[iVar1] = -1;
			}
			if (uVar15[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar15[iVar1], iVar0) == 2)
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_16[iVar1] = unk_0xF6EB12D7E162DA9C(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_16[iVar1] = 99999;
			}
			iVar1++;
		}
		if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_21 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_21 = 0;
		}
		if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar0) == 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_23 = unk_0xB496A8A1F76DD70A(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_23 = 0f;
		}
		if (iVar22 != 0 && unk_0xB988B7EA5B6DE257(iVar22, iVar0) == 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_24 = unk_0xB496A8A1F76DD70A(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_24 = 0f;
		}
		if (iVar23 != 0 && unk_0xB988B7EA5B6DE257(iVar23, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_9 = 0;
		}
		if (iVar24 != 0 && unk_0xB988B7EA5B6DE257(iVar24, iVar0) == 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_7 = unk_0xB496A8A1F76DD70A(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_7 = 0f;
		}
		if (iVar25 != 0 && unk_0xB988B7EA5B6DE257(iVar25, iVar0) == 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_8 = unk_0xB496A8A1F76DD70A(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_8 = 0f;
		}
		if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_22 = 0;
		}
		if (iVar27 != 0 && unk_0xB988B7EA5B6DE257(iVar27, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_25 = 0;
		}
		if (iVar28 != 0 && unk_0xB988B7EA5B6DE257(iVar28, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_26 = 2;
		}
		if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_27 = 0;
		}
		if (iVar30 != 0 && unk_0xB988B7EA5B6DE257(iVar30, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_154787[iVar0 /*48*/].f_28), unk_0x3854C8AFB1001E7E(iVar30, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_154787[iVar0 /*48*/].f_28), "", 16);
		}
		if (iVar31 != 0 && unk_0xB988B7EA5B6DE257(iVar31, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_32 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_32 = -1;
		}
		if (iVar32 != 0 && unk_0xB988B7EA5B6DE257(iVar32, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_33 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_33 = 0;
		}
		if (iVar33 != 0 && unk_0xB988B7EA5B6DE257(iVar33, iVar0) == 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_34 = unk_0xB496A8A1F76DD70A(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_34 = 0f;
		}
		if (iVar34 != 0 && unk_0xB988B7EA5B6DE257(iVar34, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_35 = 0;
		}
		if (iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_36 = -1;
		}
		if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_39 = 1;
		}
		if (iVar37 != 0 && unk_0xB988B7EA5B6DE257(iVar37, iVar0) == 2)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_40 = 120;
		}
		iVar41 = 0;
		while (iVar41 <= 1)
		{
			StringCopy(&cVar42, "ovrps", 16);
			StringIntConCat(&cVar42, iVar41, 16);
			uVar38[iVar41] = unk_0xCB845A663B4DD2F3(iVar6, &cVar42);
			if (uVar38[iVar41] != 0 && unk_0xB988B7EA5B6DE257(uVar38[iVar41], iVar0) == 5)
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_41[iVar41 /*3*/] = { unk_0xB6537A31819F86E5(uVar38[iVar41], iVar0) };
			}
			else
			{
				Global_4456448.f_154787[iVar0 /*48*/].f_41[iVar41 /*3*/] = { 0f, 0f, 0f };
			}
			iVar41++;
		}
		iVar0++;
	}
}

void func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "usj");
	Global_4456448.f_153499 = unk_0xEE6F60A09902D357(iVar1, "no");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "vto");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "vld");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "vcm");
	if (Global_4456448.f_153499 > 10)
	{
		Global_4456448.f_153499 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_153499 - 1))
	{
		Global_4456448.f_153500[iVar0 /*9*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
		Global_4456448.f_153500[iVar0 /*9*/].f_3 = { unk_0xB6537A31819F86E5(iVar3, iVar0) };
		Global_4456448.f_153500[iVar0 /*9*/].f_6 = { unk_0xB6537A31819F86E5(iVar4, iVar0) };
		iVar0++;
	}
}

void func_226(int iParam0)
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
	var uVar48[4];
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	var uVar62[24];
	var uVar87[3];
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
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x7408DCBD37A2C60F(iParam0, "ddtrig");
	Global_4456448.f_166561 = unk_0xEE6F60A09902D357(iVar4, "no");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar4, "id");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar4, "fid");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar4, "dtasht");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar4, "rule");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar4, "team");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar4, "pos");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar4, "rad");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar4, "tdel");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar4, "tpnt");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar4, "dtfe");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar4, "crkls");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar4, "spveh");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar4, "spveh2");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar4, "spveh3");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar4, "spveh4");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar4, "spveh5");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar4, "skprs");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar4, "fcsped");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar4, "prty");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar4, "dbs");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar4, "dbs2");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar4, "dbs3");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar4, "dbs4");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar4, "dbs5");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar4, "drole");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar4, "dspk");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar4, "dspk2");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar4, "dpcr");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar4, "dgck");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar4, "dgvh");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar4, "dgvlst");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar4, "dcoid");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar4, "dgpk");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar4, "dgwd");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar4, "dgmrlt");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar4, "panim");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar4, "blok");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar4, "root");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar4, "mgveh");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar4, "vehtg");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar4, "prerq");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar4, "vehdm");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar4, "vehpir");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar4, "dwsg");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar4, "vhmd");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar4, "pedtg");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar4, "peddm");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar4, "dtChar");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar4, "dtCCDs");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar4, "dtApp");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar4, "pdkrq");
	iVar61 = unk_0xCB845A663B4DD2F3(iVar4, "pdkrc");
	iVar91 = unk_0xCB845A663B4DD2F3(iVar4, "deet");
	iVar92 = unk_0xCB845A663B4DD2F3(iVar4, "deei");
	iVar93 = unk_0xCB845A663B4DD2F3(iVar4, "cgll");
	iVar94 = unk_0xCB845A663B4DD2F3(iVar4, "cgul");
	iVar95 = unk_0xCB845A663B4DD2F3(iVar4, "dtZnI");
	iVar96 = unk_0xCB845A663B4DD2F3(iVar4, "dtZTtr");
	iVar97 = unk_0xCB845A663B4DD2F3(iVar4, "drbl");
	iVar98 = unk_0xCB845A663B4DD2F3(iVar4, "drblo");
	iVar99 = unk_0xCB845A663B4DD2F3(iVar4, "docoid");
	iVar100 = unk_0xCB845A663B4DD2F3(iVar4, "dlcoid");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar48[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		StringCopy(&cVar2, "dtvr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar62[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar2, "dtbt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar87[iVar0] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_166561 > 92)
	{
		Global_4456448.f_166561 = 92;
	}
	if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_166561 - 1))
		{
			if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, iVar0) == 2)
			{
				func_227(&(Global_4456448.f_156055[iVar0 /*111*/]), iVar0);
				if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_1 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/] = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
				}
				if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_2), unk_0x3854C8AFB1001E7E(iVar7, iVar0), 16);
				}
				else
				{
					StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_2), "", 16);
				}
				if (iVar8 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_6 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
				}
				if (iVar10 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_10 = { unk_0xB6537A31819F86E5(iVar10, iVar0) };
				}
				if (iVar11 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_13 = unk_0xB496A8A1F76DD70A(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
				}
				if (iVar13 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar13, iVar0);
				}
				if (iVar14 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_47 = unk_0xF6EB12D7E162DA9C(iVar14, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar23, iVar0);
				}
				if (iVar24 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
				}
				if (iVar25 != 0)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_15 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar26, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_16 = 0;
				}
				if (iVar27 != 0 && unk_0xB988B7EA5B6DE257(iVar27, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_17 = 0;
				}
				if (iVar28 != 0 && unk_0xB988B7EA5B6DE257(iVar28, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar28, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_18 = 0;
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 23)
				{
					if (uVar62[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar62[iVar1], iVar0) == 2)
					{
						Global_4456448.f_156055[iVar0 /*111*/].f_80[iVar1] = unk_0xF6EB12D7E162DA9C(uVar62[iVar1], iVar0);
					}
					iVar1++;
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 2)
				{
					if (uVar87[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar87[iVar1], iVar0) == 2)
					{
						Global_4456448.f_156055[iVar0 /*111*/].f_107[iVar1] = unk_0xF6EB12D7E162DA9C(uVar87[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar29, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_8 = 0;
				}
				if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_77 = unk_0xF6EB12D7E162DA9C(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_77 = 0;
				}
				if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar43, iVar0);
				}
				if (iVar15 != 0 && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0xB988B7EA5B6DE257(iVar16, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar16, iVar0);
				}
				if (iVar17 != 0 && unk_0xB988B7EA5B6DE257(iVar17, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
				}
				if (iVar18 != 0 && unk_0xB988B7EA5B6DE257(iVar18, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0xB988B7EA5B6DE257(iVar19, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_39 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_40 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
				}
				if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_41 = unk_0xF6EB12D7E162DA9C(iVar21, iVar0);
				}
				if (iVar22 != 0 && unk_0xB988B7EA5B6DE257(iVar22, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_30 = unk_0xF6EB12D7E162DA9C(iVar22, iVar0);
				}
				if (iVar30 != 0 && unk_0xB988B7EA5B6DE257(iVar30, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_21 = unk_0xF6EB12D7E162DA9C(iVar30, iVar0);
				}
				if (iVar31 != 0 && unk_0xB988B7EA5B6DE257(iVar31, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar31, iVar0);
				}
				if (iVar32 != 0 && unk_0xB988B7EA5B6DE257(iVar32, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_42 = unk_0xF6EB12D7E162DA9C(iVar32, iVar0);
				}
				if (iVar33 != 0 && unk_0xB988B7EA5B6DE257(iVar33, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_43 = unk_0xF6EB12D7E162DA9C(iVar33, iVar0);
				}
				if (iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_44 = unk_0xF6EB12D7E162DA9C(iVar35, iVar0);
				}
				if (iVar34 != 0 && unk_0xB988B7EA5B6DE257(iVar34, iVar0) == 2)
				{
					iVar101 = unk_0xF6EB12D7E162DA9C(iVar34, iVar0);
					if ((iVar101 >= 0 && iVar101 < 32) && Global_4456448.f_156055[iVar0 /*111*/].f_44 == 0)
					{
						unk_0xA1E7A40E1F56E511(&(Global_4456448.f_156055[iVar0 /*111*/].f_44), iVar101);
					}
				}
				if (iVar37 != 0 && unk_0xB988B7EA5B6DE257(iVar37, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_45 = unk_0xF6EB12D7E162DA9C(iVar37, iVar0);
				}
				if (iVar38 != 0 && unk_0xB988B7EA5B6DE257(iVar38, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_46 = unk_0xF6EB12D7E162DA9C(iVar38, iVar0);
				}
				if (iVar40 != 0 && unk_0xB988B7EA5B6DE257(iVar40, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar40, iVar0);
				}
				if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar44, iVar0);
				}
				if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar47, iVar0);
				}
				if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar45, iVar0);
				}
				if (iVar46 != 0 && unk_0xB988B7EA5B6DE257(iVar46, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
				}
				if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar55, iVar0);
				}
				if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_50 = unk_0xF6EB12D7E162DA9C(iVar56, iVar0);
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar48[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar48[iVar1], iVar0) == 2)
					{
						Global_4456448.f_156055[iVar0 /*111*/].f_31[iVar1] = unk_0xF6EB12D7E162DA9C(uVar48[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar39, iVar0);
				}
				if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_76 = unk_0xF6EB12D7E162DA9C(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_76 = 0;
				}
				if (iVar41 != 0)
				{
					StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_60), unk_0x3854C8AFB1001E7E(iVar41, iVar0), 24);
				}
				if (iVar42 != 0)
				{
					StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_66), unk_0x3854C8AFB1001E7E(iVar42, iVar0), 24);
				}
				if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_79 = unk_0xF6EB12D7E162DA9C(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_79 = -1;
				}
				if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_51 = unk_0xF6EB12D7E162DA9C(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_51 = 0;
				}
				if (iVar95 != 0 && unk_0xB988B7EA5B6DE257(iVar95, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_56 = unk_0xF6EB12D7E162DA9C(iVar95, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_56 = -1;
				}
				if (iVar96 != 0 && unk_0xB988B7EA5B6DE257(iVar96, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar96, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_57 = -1;
				}
				if (iVar59 != 0)
				{
					StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_72), unk_0x3854C8AFB1001E7E(iVar59, iVar0), 4);
				}
				if (iVar60 != 0 && unk_0xB988B7EA5B6DE257(iVar60, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_52 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_52 = 0;
				}
				if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_53 = unk_0xF6EB12D7E162DA9C(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_53 = 0;
				}
				if (iVar91 != 0 && unk_0xB988B7EA5B6DE257(iVar91, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_105 = unk_0xF6EB12D7E162DA9C(iVar91, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_105 = 0;
				}
				if (iVar92 != 0 && unk_0xB988B7EA5B6DE257(iVar92, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_106 = unk_0xF6EB12D7E162DA9C(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_106 = -1;
				}
				if (iVar93 != 0 && unk_0xB988B7EA5B6DE257(iVar93, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_54 = unk_0xF6EB12D7E162DA9C(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_54 = 0;
				}
				if (iVar94 != 0 && unk_0xB988B7EA5B6DE257(iVar94, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_55 = unk_0xF6EB12D7E162DA9C(iVar94, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_55 = 0;
				}
				if (iVar97 != 0 && unk_0xB988B7EA5B6DE257(iVar97, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_58 = -1;
				}
				if (iVar98 != 0 && unk_0xB988B7EA5B6DE257(iVar98, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_59 = -1;
				}
				if (iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_73 = unk_0xF6EB12D7E162DA9C(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_73 = -1;
				}
				if (iVar99 != 0 && unk_0xB988B7EA5B6DE257(iVar99, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_74 = unk_0xF6EB12D7E162DA9C(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_74 = -1;
				}
				if (iVar100 != 0 && unk_0xB988B7EA5B6DE257(iVar100, iVar0) == 2)
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_75 = unk_0xF6EB12D7E162DA9C(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_156055[iVar0 /*111*/].f_75 = -1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_166561 - 1))
		{
			Global_4456448.f_156055[iVar0 /*111*/] = 0;
			StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_2), "", 16);
			Global_4456448.f_156055[iVar0 /*111*/].f_6 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_7 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_10 = { 0f, 0f, 0f };
			Global_4456448.f_156055[iVar0 /*111*/].f_13 = 3f;
			Global_4456448.f_156055[iVar0 /*111*/].f_9 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_19 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_29 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_36 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_37 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_38 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_39 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_40 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_41 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_20 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_14 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_15 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_16 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_17 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_18 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_8 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_21 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_22 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_23 = 0;
			StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_60), "", 24);
			StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_66), "", 24);
			Global_4456448.f_156055[iVar0 /*111*/].f_24 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_25 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_27 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_28 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_26 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_76 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_42 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_43 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_44 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_45 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_46 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_48 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_77 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_49 = -1;
			Global_4456448.f_156055[iVar0 /*111*/].f_50 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_79 = -1;
			StringCopy(&(Global_4456448.f_156055[iVar0 /*111*/].f_72), "", 4);
			Global_4456448.f_156055[iVar0 /*111*/].f_105 = 0;
			Global_4456448.f_156055[iVar0 /*111*/].f_106 = -1;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 23)
			{
				Global_4456448.f_156055[iVar0 /*111*/].f_80[iVar1] = 0;
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				Global_4456448.f_156055[iVar0 /*111*/].f_107[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "dtmp") == 2)
	{
		Global_4456448.f_166557[0] = unk_0xEE6F60A09902D357(iParam0, "dtmp");
	}
	else
	{
		Global_4456448.f_166557[0] = 0;
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "dtmp2") == 2)
	{
		Global_4456448.f_166557[1] = unk_0xEE6F60A09902D357(iParam0, "dtmp2");
	}
	else
	{
		Global_4456448.f_166557[1] = 0;
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "dtmp3") == 2)
	{
		Global_4456448.f_166557[2] = unk_0xEE6F60A09902D357(iParam0, "dtmp3");
	}
	else
	{
		Global_4456448.f_166557[2] = 0;
	}
}

void func_227(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "", 16);
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = { 0f, 0f, 0f };
	uParam0->f_13 = 3f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = -1;
	uParam0->f_20 = 0;
	uParam0->f_21 = -1;
	uParam0->f_22 = -1;
	uParam0->f_23 = 0;
	uParam0->f_24 = -1;
	uParam0->f_27 = -1;
	uParam0->f_25 = -1;
	uParam0->f_28 = 0;
	uParam0->f_26 = -1;
	uParam0->f_29 = 0;
	uParam0->f_36 = -1;
	uParam0->f_37 = -1;
	uParam0->f_38 = -1;
	uParam0->f_39 = -1;
	uParam0->f_40 = -1;
	uParam0->f_41 = 0;
	uParam0->f_30 = -1;
	uParam0->f_42 = 0;
	uParam0->f_43 = -1;
	uParam0->f_44 = 0;
	uParam0->f_45 = -1;
	uParam0->f_46 = 0;
	uParam0->f_47 = -1;
	uParam0->f_48 = -1;
	StringCopy(&(uParam0->f_60), "", 24);
	StringCopy(&(uParam0->f_66), "", 24);
	uParam0->f_77 = 0;
	uParam0->f_49 = -1;
	uParam0->f_50 = 0;
	uParam0->f_79 = -1;
	StringCopy(&(uParam0->f_72), "", 4);
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_105 = 0;
	uParam0->f_106 = -1;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_58 = -1;
	uParam0->f_59 = -1;
	uParam0->f_73 = -1;
	uParam0->f_74 = -1;
	uParam0->f_75 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_31[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		uParam0->f_80[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_107[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_76 = 0;
	if (iParam1 != -1)
	{
		unk_0x3B76114EC84D5812(&(Global_4456448.f_166557[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0x39A01A052D9B5FF0(uParam0->f_78))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_78));
	}
}

bool func_228()
{
	return Global_4456448 == 1;
}

void func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	char cVar8[16];
	char cVar12[16];
	char cVar16[16];
	int iVar20;
	char cVar21[16];
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
	var uVar62[3];
	var uVar66[3];
	var uVar70[3];
	int iVar74;
	char[] cVar75[8];
	
	iVar2 = unk_0x7408DCBD37A2C60F(iParam0, "race");
	Global_4456448.f_58151 = unk_0xEE6F60A09902D357(iVar2, "chp");
	iVar3 = (Global_4456448.f_58151 - 1);
	Global_4456448.f_58153 = unk_0xEE6F60A09902D357(iVar2, "lap");
	Global_4456448.f_58154 = unk_0xEE6F60A09902D357(iVar2, "type");
	Global_4456448.f_58155 = unk_0xEE6F60A09902D357(iVar2, "gtar");
	Global_4456448.f_60597 = unk_0x42AD093E466CD516(iVar2, "head");
	Global_4456448.f_60598 = unk_0x42AD093E466CD516(iVar2, "lrgs");
	Global_4456448.f_60599 = unk_0x42AD093E466CD516(iVar2, "udgs");
	Global_4456448.f_60600 = unk_0x42AD093E466CD516(iVar2, "gw");
	Global_4456448.f_60601 = unk_0x42AD093E466CD516(iVar2, "gl");
	Global_4456448.f_60602 = unk_0xEE6F60A09902D357(iVar2, "lanes");
	Global_4456448.f_48314 = { unk_0x158A0F7CCA751FFB(iVar2, "grid") };
	Global_4456448.f_58157 = unk_0xEE6F60A09902D357(iVar2, "icv");
	Global_4456448.f_2 = unk_0xEE6F60A09902D357(iVar2, "subtype");
	Global_4456448.f_58159 = unk_0xEE6F60A09902D357(iVar2, "tri1");
	Global_4456448.f_58160 = unk_0xEE6F60A09902D357(iVar2, "tri2");
	Global_4456448.f_58161 = unk_0xEE6F60A09902D357(iVar2, "clbs");
	Global_4456448.f_60596 = unk_0xEE6F60A09902D357(iVar2, "ptp");
	Global_4456448.f_60594 = unk_0xEE6F60A09902D357(iVar2, "strtg");
	Global_4456448.f_60595 = unk_0xEE6F60A09902D357(iVar2, "rcdam");
	Global_4456448.f_54095 = unk_0x42AD093E466CD516(iVar2, "rdis");
	Global_4456448.f_60591 = unk_0xEE6F60A09902D357(iVar2, "gridty");
	Global_4456448.f_190965 = unk_0x6F7A89248B266B1B(iVar2, "iprem");
	Global_4456448.f_191103 = unk_0xEE6F60A09902D357(iVar2, "bsted");
	Global_4456448.f_192106 = unk_0xEE6F60A09902D357(iVar2, "retl");
	if (unk_0xEE6F60A09902D357(iVar2, "cemx") != 0)
	{
		Global_4456448.f_192107 = unk_0xEE6F60A09902D357(iVar2, "cemx");
	}
	else
	{
		Global_4456448.f_192107 = 12;
	}
	if (unk_0xEE6F60A09902D357(iVar2, "cemn") != 0)
	{
		Global_4456448.f_192108 = unk_0xEE6F60A09902D357(iVar2, "cemn");
	}
	else
	{
		Global_4456448.f_192108 = 3;
	}
	if (unk_0xEE6F60A09902D357(iVar2, "bstol") != 0)
	{
		Global_4456448.f_191104 = unk_0xEE6F60A09902D357(iVar2, "bstol");
	}
	else
	{
		Global_4456448.f_191104 = 1;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		StringCopy(&cVar4, "btfs", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		Global_4456448.f_192109[iVar0] = unk_0xEE6F60A09902D357(iVar2, &cVar4);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar8, "icpht", 16);
		StringIntConCat(&cVar8, iVar0, 16);
		StringCopy(&(Global_4456448.f_54074[iVar0 /*6*/]), unk_0x2B36163AFF2C657B(iVar2, &cVar8), 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar12, "trbpf", 16);
		StringIntConCat(&cVar12, iVar0, 16);
		Global_4456448.f_191932[iVar0] = unk_0xEE6F60A09902D357(iVar2, &cVar12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar16, "trbpc", 16);
		StringIntConCat(&cVar16, iVar0, 16);
		Global_4456448.f_191928[iVar0] = unk_0xEE6F60A09902D357(iVar2, &cVar16);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar20 = 0;
		while (iVar20 < 3)
		{
			StringCopy(&cVar21, "trbps", 16);
			StringIntConCat(&cVar21, iVar0, 16);
			StringConCat(&cVar21, "d", 16);
			StringIntConCat(&cVar21, iVar20, 16);
			Global_4456448.f_191943[iVar0 /*4*/][iVar20] = unk_0xEE6F60A09902D357(iVar2, &cVar21);
			iVar20++;
		}
		iVar0++;
	}
	if (Global_4456448.f_156052 == 0)
	{
		func_233();
	}
	iVar25 = unk_0xCB845A663B4DD2F3(iVar2, "chh");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar2, "chs");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar2, "chs2");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar2, "chvs");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar2, "chpp");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar2, "chpps");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar2, "chl");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar2, "sndchk");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar2, "sndrsp");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar2, "cpwwt");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar2, "cppsst");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar2, "cpado");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar2, "cpados");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar2, "chttu");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar2, "chttr");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar2, "cpbs1");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar2, "cpbs2");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar2, "cptfrm");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar2, "cptfrms");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar2, "chpso");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar2, "chpsos");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar2, "trfmvm");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar2, "chdlo");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar2, "chsto");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar2, "chdlos");
	iVar50 = unk_0xCB845A663B4DD2F3(iVar2, "chstos");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar2, "rsp");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar2, "cdsblcu");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar2, "cpdss");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar2, "rndchk");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar2, "rndchks");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar2, "cpwtr");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar2, "cpwtrs");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar2, "cpair");
	if (Global_4456448.f_58154 == 24 || Global_4456448.f_58154 == 25)
	{
		func_232(iVar2);
	}
	if (Global_4456448.f_58154 == 8)
	{
		Global_4456448.f_58151 = 0;
		iVar0 = 0;
		while (iVar0 <= 101)
		{
			if (!func_128(unk_0xB6537A31819F86E5(iVar31, iVar0)))
			{
				Global_4456448.f_58151++;
			}
			iVar0++;
		}
		iVar3 = Global_4456448.f_58151;
	}
	Global_4456448.f_53660 = unk_0xEE6F60A09902D357(iVar2, "sgdo");
	iVar59 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 102)
		{
			if (Global_4456448.f_58154 == 8)
			{
				iVar59 = func_231(iVar31, iVar59);
			}
			else
			{
				iVar59 = iVar0;
			}
			Global_4456448.f_49441[iVar0 /*3*/] = { unk_0xB6537A31819F86E5(iVar31, iVar59) };
			Global_4456448.f_49748[iVar0] = unk_0xB496A8A1F76DD70A(iVar25, iVar59);
			if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar59) == 3)
			{
				Global_4456448.f_53248[iVar0] = unk_0xB496A8A1F76DD70A(iVar26, iVar59);
			}
			else
			{
				Global_4456448.f_53248[iVar0] = 1f;
			}
			if (iVar28 != 0 && unk_0xB988B7EA5B6DE257(iVar28, iVar59) == 3)
			{
				Global_4456448.f_50057[iVar0] = unk_0xB496A8A1F76DD70A(iVar28, iVar59);
			}
			else
			{
				Global_4456448.f_50057[iVar0] = 1f;
			}
			if (iVar27 != 0 && unk_0xB988B7EA5B6DE257(iVar27, iVar59) == 3)
			{
				Global_4456448.f_53351[iVar0] = unk_0xB496A8A1F76DD70A(iVar27, iVar59);
			}
			else
			{
				Global_4456448.f_53351[iVar0] = 1f;
			}
			if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar59) == 3)
			{
				Global_4456448.f_53454[iVar0] = unk_0xB496A8A1F76DD70A(iVar29, iVar59);
			}
			else
			{
				Global_4456448.f_53454[iVar0] = 0f;
			}
			if (iVar30 != 0 && unk_0xB988B7EA5B6DE257(iVar30, iVar59) == 3)
			{
				Global_4456448.f_53557[iVar0] = unk_0xB496A8A1F76DD70A(iVar30, iVar59);
			}
			else
			{
				Global_4456448.f_53557[iVar0] = 0f;
			}
			if (iVar44 != 0 && unk_0xB988B7EA5B6DE257(iVar44, iVar59) == 3)
			{
				Global_4456448.f_48318[iVar0 /*11*/].f_10 = unk_0xB496A8A1F76DD70A(iVar44, iVar59);
			}
			else
			{
				Global_4456448.f_48318[iVar0 /*11*/].f_10 = 0f;
			}
			if (iVar45 != 0 && unk_0xB988B7EA5B6DE257(iVar45, iVar59) == 3)
			{
				Global_4456448.f_50160[iVar0 /*11*/].f_10 = unk_0xB496A8A1F76DD70A(iVar45, iVar59);
			}
			else
			{
				Global_4456448.f_50160[iVar0 /*11*/].f_10 = 0f;
			}
			if (iVar47 != 0 && unk_0xB988B7EA5B6DE257(iVar47, iVar59) == 2)
			{
				Global_4456448.f_53661[iVar0] = unk_0xF6EB12D7E162DA9C(iVar47, iVar59);
			}
			else
			{
				Global_4456448.f_53661[iVar0] = -1;
			}
			if (iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar59) == 2)
			{
				Global_4456448.f_53764[iVar0] = unk_0xF6EB12D7E162DA9C(iVar48, iVar59);
			}
			else
			{
				Global_4456448.f_53764[iVar0] = -1;
			}
			if (iVar49 != 0 && unk_0xB988B7EA5B6DE257(iVar49, iVar59) == 2)
			{
				Global_4456448.f_53867[iVar0] = unk_0xF6EB12D7E162DA9C(iVar49, iVar59);
			}
			else
			{
				Global_4456448.f_53867[iVar0] = -1;
			}
			if (iVar50 != 0 && unk_0xB988B7EA5B6DE257(iVar50, iVar59) == 2)
			{
				Global_4456448.f_53970[iVar0] = unk_0xF6EB12D7E162DA9C(iVar50, iVar59);
			}
			else
			{
				Global_4456448.f_53970[iVar0] = -1;
			}
			if (Global_4456448.f_53248[iVar0] < 0.3f)
			{
				Global_4456448.f_53248[iVar0] = 0.3f;
			}
			if (Global_4456448.f_53351[iVar0] < 0.1f)
			{
				Global_4456448.f_53351[iVar0] = Global_4456448.f_53248[iVar0];
			}
			if (Global_4456448.f_53351[iVar0] < 0.3f)
			{
				Global_4456448.f_53351[iVar0] = 0.3f;
			}
			Global_4456448.f_51283[iVar0 /*3*/] = { unk_0xB6537A31819F86E5(iVar32, iVar59) };
			Global_4456448.f_51590[iVar0] = unk_0xB496A8A1F76DD70A(iVar33, iVar59);
			Global_4456448.f_51693[iVar0] = unk_0xF6EB12D7E162DA9C(iVar34, iVar59);
			Global_4456448.f_51796[iVar0] = unk_0xF6EB12D7E162DA9C(iVar35, iVar59);
			Global_4456448.f_51899[iVar0 /*3*/] = { unk_0xB6537A31819F86E5(iVar36, iVar59) };
			Global_4456448.f_52206[iVar0 /*3*/] = { unk_0xB6537A31819F86E5(iVar37, iVar59) };
			Global_4456448.f_52513[iVar0] = unk_0xF6EB12D7E162DA9C(iVar38, iVar59);
			Global_4456448.f_52616[iVar0] = unk_0xF6EB12D7E162DA9C(iVar39, iVar59);
			Global_4456448.f_49851[iVar0] = unk_0xF6EB12D7E162DA9C(iVar40, iVar59);
			Global_4456448.f_49954[iVar0] = unk_0xF6EB12D7E162DA9C(iVar41, iVar59);
			if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar59) == 2)
			{
				Global_4456448.f_52822[iVar0] = unk_0xF6EB12D7E162DA9C(iVar42, iVar59);
			}
			else
			{
				Global_4456448.f_52822[iVar0] = -1;
			}
			if ((iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar59) == 2) && !func_128(Global_4456448.f_51283[iVar0 /*3*/]))
			{
				Global_4456448.f_52925[iVar0] = unk_0xF6EB12D7E162DA9C(iVar43, iVar59);
			}
			else
			{
				Global_4456448.f_52925[iVar0] = -1;
			}
			if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_49851[iVar0], 0))
			{
				if (iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 5, unk_0x1BC37BB2C67275C8(iVar51, iVar59));
				}
				if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 3, unk_0x1BC37BB2C67275C8(iVar52, iVar59));
				}
				if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 6, unk_0x1BC37BB2C67275C8(iVar53, iVar59));
				}
				if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 1, unk_0x1BC37BB2C67275C8(iVar54, iVar59));
				}
				if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 2, unk_0x1BC37BB2C67275C8(iVar55, iVar59));
				}
				if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 7, unk_0x1BC37BB2C67275C8(iVar56, iVar59));
				}
				if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 8, unk_0x1BC37BB2C67275C8(iVar57, iVar59));
				}
				if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar59) == 1)
				{
					func_230(&(Global_4456448.f_49851[iVar0]), 9, unk_0x1BC37BB2C67275C8(iVar58, iVar59));
				}
				unk_0xA1E7A40E1F56E511(&(Global_4456448.f_49851[iVar0]), 0);
			}
			iVar59++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_53028[iVar0] = unk_0xF6EB12D7E162DA9C(iVar46, iVar0);
		iVar0++;
	}
	if (Global_4456448.f_53028[3] != 0)
	{
		if (Global_4456448.f_53028[1] == 0)
		{
			Global_4456448.f_53028[1] = joaat("speeder");
		}
		if (Global_4456448.f_53028[2] == 0)
		{
			Global_4456448.f_53028[2] = joaat("luxor2");
		}
	}
	iVar60 = unk_0xCB845A663B4DD2F3(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_37 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0xF6EB12D7E162DA9C(iVar60, iVar0);
			Global_4456448.f_60605[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar61 = unk_0xCB845A663B4DD2F3(iVar2, "aveh");
	uVar62[0] = unk_0xCB845A663B4DD2F3(iVar2, "adlc");
	uVar62[1] = unk_0xCB845A663B4DD2F3(iVar2, "adlc2");
	iVar0 = 0;
	while (iVar0 < 19)
	{
		iVar1 = unk_0xF6EB12D7E162DA9C(iVar61, iVar0);
		Global_4456448.f_58162[iVar0] = iVar1;
		Global_4456448.f_58182[iVar0 /*4*/][0] = 0;
		Global_4456448.f_58182[iVar0 /*4*/][0] = unk_0xF6EB12D7E162DA9C(uVar62[0], iVar0);
		Global_4456448.f_58182[iVar0 /*4*/][1] = 0;
		Global_4456448.f_58182[iVar0 /*4*/][1] = unk_0xF6EB12D7E162DA9C(uVar62[1], iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar75, "vspn", 8);
		StringIntConCat(&cVar75, iVar0, 8);
		uVar66[iVar0] = unk_0xCB845A663B4DD2F3(iVar2, &cVar75);
		iVar74 = 0;
		while (iVar74 <= iVar3)
		{
			Global_4456448.f_48318[iVar74 /*11*/][iVar0 /*3*/] = { unk_0xB6537A31819F86E5(uVar66[iVar0], iVar74) };
			iVar74++;
		}
		StringCopy(&cVar75, "vspns", 8);
		StringIntConCat(&cVar75, iVar0, 8);
		uVar70[iVar0] = unk_0xCB845A663B4DD2F3(iVar2, &cVar75);
		iVar74 = 0;
		while (iVar74 <= iVar3)
		{
			if (uVar70[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar70[iVar0], iVar74) == 5)
			{
				Global_4456448.f_50160[iVar74 /*11*/][iVar0 /*3*/] = { unk_0xB6537A31819F86E5(uVar70[iVar0], iVar74) };
			}
			else
			{
				Global_4456448.f_50160[iVar74 /*11*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar74 = (iVar74 + 1);
		}
		iVar0++;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_58161, 15))
	{
		if (Global_4456448.f_58159 == 1)
		{
			unk_0x3B76114EC84D5812(&(Global_4456448.f_22), 24);
			unk_0x3B76114EC84D5812(&(Global_4456448.f_22), 26);
			unk_0xA1E7A40E1F56E511(&(Global_4456448.f_22), 25);
			Global_4456448.f_60604 = 1;
			unk_0x3B76114EC84D5812(&(Global_4456448.f_58182[15 /*4*/][0]), 0);
			unk_0xA1E7A40E1F56E511(&(Global_4456448.f_58182[15 /*4*/][0]), 1);
			Global_4456448.f_58159 = 0;
		}
		else if (Global_4456448.f_58159 == 2)
		{
			unk_0x3B76114EC84D5812(&(Global_4456448.f_22), 25);
			unk_0x3B76114EC84D5812(&(Global_4456448.f_22), 26);
			unk_0xA1E7A40E1F56E511(&(Global_4456448.f_22), 24);
			Global_4456448.f_60604 = 2;
			unk_0x3B76114EC84D5812(&(Global_4456448.f_58182[15 /*4*/][0]), 0);
			unk_0xA1E7A40E1F56E511(&(Global_4456448.f_58182[15 /*4*/][0]), 2);
			Global_4456448.f_58159 = 0;
		}
	}
}

void func_230(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(uParam0, iParam1);
	}
	else
	{
		unk_0x3B76114EC84D5812(uParam0, iParam1);
	}
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 101)
	{
		if (!func_128(unk_0xB6537A31819F86E5(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_232(int iParam0)
{
	if (unk_0x42AD093E466CD516(iParam0, "owrtwh") != 0f)
	{
		Global_4456448.f_191105[0] = unk_0x42AD093E466CD516(iParam0, "owrtwh");
	}
	else
	{
		Global_4456448.f_191105[0] = 0.3f;
	}
	if (unk_0x42AD093E466CD516(iParam0, "owrtwm") != 0f)
	{
		Global_4456448.f_191105[1] = unk_0x42AD093E466CD516(iParam0, "owrtwm");
	}
	else
	{
		Global_4456448.f_191105[1] = 0.6f;
	}
	if (unk_0x42AD093E466CD516(iParam0, "owrtws") != 0f)
	{
		Global_4456448.f_191105[2] = unk_0x42AD093E466CD516(iParam0, "owrtws");
	}
	else
	{
		Global_4456448.f_191105[2] = 1f;
	}
	if (unk_0x42AD093E466CD516(iParam0, "owrtrr") != 0f)
	{
		Global_4456448.f_191109 = unk_0x42AD093E466CD516(iParam0, "owrtrr");
	}
	else
	{
		Global_4456448.f_191109 = 10f;
	}
	if (unk_0x42AD093E466CD516(iParam0, "owrtlm") != 1f)
	{
		Global_4456448.f_191110 = unk_0x42AD093E466CD516(iParam0, "owrtlm");
	}
	else
	{
		Global_4456448.f_191110 = 1f;
	}
}

void func_233()
{
	Global_4456448.f_191932[0] = 50;
	Global_4456448.f_191932[1] = 30;
	Global_4456448.f_191932[2] = 20;
	Global_4456448.f_191928[0] = 3;
	Global_4456448.f_191928[1] = 2;
	Global_4456448.f_191928[2] = 1;
	Global_4456448.f_191943[0 /*4*/][0] = 7;
	Global_4456448.f_191943[0 /*4*/][1] = 8;
	Global_4456448.f_191943[0 /*4*/][2] = 9;
	Global_4456448.f_191943[1 /*4*/][0] = 5;
	Global_4456448.f_191943[1 /*4*/][1] = 6;
	Global_4456448.f_191943[1 /*4*/][2] = 7;
	Global_4456448.f_191943[2 /*4*/][0] = 3;
	Global_4456448.f_191943[2 /*4*/][1] = 4;
	Global_4456448.f_191943[2 /*4*/][2] = 5;
	Global_4456448.f_191943[3 /*4*/][0] = 1;
	Global_4456448.f_191943[3 /*4*/][1] = 2;
	Global_4456448.f_191943[3 /*4*/][2] = 3;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "otzone");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "otvo");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "otvt");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "otbs");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar1, "otpg");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar1, "otrw");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar1, "otpl");
	if (iVar1 != 0 && unk_0x1D22B93425E4D657(iVar1, "otz") == 2)
	{
		Global_4456448.f_191112 = unk_0xEE6F60A09902D357(iVar1, "otz");
	}
	else
	{
		Global_4456448.f_191112 = 0;
	}
	if (Global_4456448.f_191112 > 30)
	{
		Global_4456448.f_191112 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_191112 - 1))
	{
		Global_4456448.f_191113[iVar0 /*11*/][0 /*3*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
		Global_4456448.f_191113[iVar0 /*11*/][1 /*3*/] = { unk_0xB6537A31819F86E5(iVar3, iVar0) };
		if (iVar4 != 0 && unk_0xB988B7EA5B6DE257(iVar4, iVar0) == 2)
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_7 = 0;
		}
		if (iVar5 != 0 && unk_0xB988B7EA5B6DE257(iVar5, iVar0) == 2)
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_8 = 0;
		}
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 3)
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_10 = unk_0xB496A8A1F76DD70A(iVar6, iVar0);
		}
		else if (unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 2)
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_10 = unk_0xBBDA792448DB5A89(unk_0xF6EB12D7E162DA9C(iVar6, iVar0));
		}
		else
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_10 = 0f;
		}
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_191113[iVar0 /*11*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "dhprop");
	Global_4456448.f_185376 = unk_0xEE6F60A09902D357(iVar1, "no");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "pos");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "mn");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "bits");
	if (Global_4456448.f_185376 > 25)
	{
		Global_4456448.f_185376 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_185376 - 1))
	{
		if (iVar2 != 0 && unk_0xB988B7EA5B6DE257(iVar2, iVar0) == 5)
		{
			Global_4456448.f_185250[iVar0 /*5*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
			Global_4456448.f_185250[iVar0 /*5*/].f_3 = unk_0xF6EB12D7E162DA9C(iVar3, iVar0);
		}
		if (iVar4 != 0 && unk_0xB988B7EA5B6DE257(iVar4, iVar0) == 2)
		{
			Global_4456448.f_185250[iVar0 /*5*/].f_4 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_185250[iVar0 /*5*/].f_4 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_4456448.f_185250[iVar0 /*5*/].f_4), 0);
		}
		iVar0++;
	}
}

void func_236(int iParam0)
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
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "ddblip");
	Global_4456448.f_185249 = unk_0xEE6F60A09902D357(iVar1, "no");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "pos");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "rule");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "team");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar1, "type");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar1, "size");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar1, "veh");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar1, "clr");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar1, "spri");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar1, "bits");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar1, "entt");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar1, "enti");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar1, "dbnm");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar1, "sbr");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar1, "sbhr");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar1, "hbr");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar1, "frul");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar1, "trul");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar1, "dumsg");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar1, "dumssg");
	if (Global_4456448.f_185249 > 10)
	{
		Global_4456448.f_185249 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_185249 - 1))
	{
		if (iVar2 != 0 && unk_0xB988B7EA5B6DE257(iVar2, iVar0) == 5)
		{
			Global_4456448.f_184958[iVar0 /*29*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
			Global_4456448.f_184958[iVar0 /*29*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_10 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_12 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_13 = unk_0xB496A8A1F76DD70A(iVar14, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_14 = unk_0xB496A8A1F76DD70A(iVar15, iVar0);
			Global_4456448.f_184958[iVar0 /*29*/].f_15 = unk_0xB496A8A1F76DD70A(iVar16, iVar0);
		}
		if (iVar5 != 0 && unk_0xB988B7EA5B6DE257(iVar5, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_6 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_6 = 0;
		}
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_5 = 4;
		}
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_7 = -1;
		}
		if (iVar13 != 0 && unk_0xB988B7EA5B6DE257(iVar13, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_184958[iVar0 /*29*/].f_20), unk_0x3854C8AFB1001E7E(iVar13, iVar0), 24);
		}
		else
		{
			StringCopy(&(Global_4456448.f_184958[iVar0 /*29*/].f_20), "", 24);
		}
		if (iVar3 != 0 && unk_0xB988B7EA5B6DE257(iVar3, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_3 = unk_0xF6EB12D7E162DA9C(iVar3, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_3 = -1;
		}
		if (iVar4 != 0 && unk_0xB988B7EA5B6DE257(iVar4, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_4 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_4 = -1;
		}
		if (iVar11 != 0 && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_11 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_11 = -1;
		}
		if (iVar17 != 0 && unk_0xB988B7EA5B6DE257(iVar17, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_16 = -1;
		}
		if (iVar18 != 0 && unk_0xB988B7EA5B6DE257(iVar18, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar18, iVar0);
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_17 = -1;
		}
		if (iVar19 != 0 && unk_0xB988B7EA5B6DE257(iVar19, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			if (Global_4456448.f_184958[iVar0 /*29*/].f_18 == -1)
			{
				Global_4456448.f_184958[iVar0 /*29*/].f_18 = 0;
			}
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_18 = 0;
		}
		if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar0) == 2)
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_19 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			if (Global_4456448.f_184958[iVar0 /*29*/].f_19 == -1)
			{
				Global_4456448.f_184958[iVar0 /*29*/].f_19 = 0;
			}
		}
		else
		{
			Global_4456448.f_184958[iVar0 /*29*/].f_19 = 0;
		}
		iVar0++;
	}
}

void func_237(int iParam0)
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
	var uVar16[5];
	var uVar22[5];
	var uVar28[5];
	var uVar34[5];
	var uVar40[5];
	var uVar46[5];
	var uVar52[5];
	var uVar58[5];
	var uVar64[5];
	var uVar70[5];
	int iVar76;
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x7408DCBD37A2C60F(iParam0, "mocap");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar5, "name");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar5, "bits");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar5, "bits2");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar5, "timer");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar5, "rng");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar5, "ccp");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar5, "ccr");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar5, "ccs");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar5, "vhspz");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar5, "vrbsm");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_181700[iVar0 /*472*/]), unk_0x3854C8AFB1001E7E(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_181700[iVar0 /*472*/]), "", 64);
		}
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_16 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_16 = 0;
		}
		if (iVar8 != 0 && unk_0xB988B7EA5B6DE257(iVar8, iVar0) == 2)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_17 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_17 = 0;
		}
		if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, iVar0) == 2)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_61 = 0;
		}
		if (iVar10 != 0 && unk_0xB988B7EA5B6DE257(iVar10, iVar0) == 2)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_62 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_62 = 0;
		}
		if (iVar11 != 0 && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 5)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_54 = { unk_0xB6537A31819F86E5(iVar11, iVar0) };
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_54 = { 0f, 0f, 0f };
		}
		if (iVar12 != 0 && unk_0xB988B7EA5B6DE257(iVar12, iVar0) == 3)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_60 = unk_0xB496A8A1F76DD70A(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_60 = 0f;
		}
		if (iVar13 != 0 && unk_0xB988B7EA5B6DE257(iVar13, iVar0) == 5)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_57 = { unk_0xB6537A31819F86E5(iVar13, iVar0) };
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_57 = { 0f, 0f, 0f };
		}
		if (iVar14 != 0 && unk_0xB988B7EA5B6DE257(iVar14, iVar0) == 3)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_63 = unk_0xB496A8A1F76DD70A(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_63 = 6f;
		}
		if (iVar15 != 0 && unk_0xB988B7EA5B6DE257(iVar15, iVar0) == 2)
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_64 = unk_0xF6EB12D7E162DA9C(iVar15, iVar0);
		}
		else
		{
			Global_4456448.f_181700[iVar0 /*472*/].f_64 = 0;
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar16[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar22[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar28[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar34[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar40[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar46[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar52[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar58[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "pedEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar64[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		if (uVar58[iVar0] != 0 || uVar64[iVar0] != 0)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				func_242(&(Global_4456448.f_181700[iVar0 /*472*/].f_449[iVar2 /*4*/]), &(uVar58[iVar0]), iVar2);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				func_240(&(Global_4456448.f_181700[iVar0 /*472*/].f_466[iVar2 /*5*/]), &(uVar64[iVar0]), iVar2);
				iVar2++;
			}
		}
		else
		{
			func_239(&(Global_4456448.f_181700[iVar0 /*472*/]), &iVar5, iVar0);
		}
		StringCopy(&cVar3, "plrInf", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar70[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar76 = unk_0x3FB03F18D2FA9F6D(uVar70[iVar0], iVar2);
			func_238(iVar76, &(Global_4456448.f_181700[iVar0 /*472*/].f_65[iVar2 /*13*/]));
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar16[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_18[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar22[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar22[iVar0], iVar1) == 5)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_31[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar22[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar28[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar28[iVar0], iVar1) == 3)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_44[iVar1] = unk_0xB496A8A1F76DD70A(uVar28[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_44[iVar1] = 0f;
			}
			if (uVar34[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar34[iVar0], iVar1) == 3)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_49[iVar1] = unk_0xB496A8A1F76DD70A(uVar34[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar40[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar40[iVar0], iVar1) == 2)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar40[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar46[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar46[iVar0], iVar1) == 2)
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/] = unk_0xF6EB12D7E162DA9C(uVar46[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/] = -1;
			}
			if (uVar52[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar52[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/].f_3), unk_0x3854C8AFB1001E7E(uVar52[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_4456448.f_181700[iVar0 /*472*/].f_118[iVar1 /*11*/].f_3), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_238(int iParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = "plrPH";
	if (unk_0x1D22B93425E4D657(iParam0, sVar0) == 7)
	{
		iVar1 = unk_0xCB845A663B4DD2F3(iParam0, sVar0);
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar1 != 0 && unk_0xB988B7EA5B6DE257(iVar1, iVar2) == 4)
		{
			StringCopy(uParam1[iVar2 /*6*/], unk_0x3854C8AFB1001E7E(iVar1, iVar2), 24);
		}
		else
		{
			StringCopy(uParam1[iVar2 /*6*/], "", 24);
		}
		iVar2++;
	}
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = -1;
	iVar1 = unk_0xCB845A663B4DD2F3(*iParam1, "pcvid");
	if (iVar1 != 0 && unk_0xB988B7EA5B6DE257(iVar1, iParam2) == 2)
	{
		iVar0 = unk_0xF6EB12D7E162DA9C(iVar1, iParam2);
	}
	StringCopy(&cVar2, "pvpls", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar4 = unk_0xCB845A663B4DD2F3(*iParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		uParam0->f_449[iVar5 /*4*/] = iVar0;
		if (iVar4 != 0 && unk_0xB988B7EA5B6DE257(iVar4, iVar5) == 2)
		{
			uParam0->f_449[iVar5 /*4*/].f_2 = unk_0xF6EB12D7E162DA9C(iVar4, iVar5);
		}
		else
		{
			uParam0->f_449[iVar5 /*4*/].f_2 = 0;
		}
		iVar5++;
	}
	StringCopy(&cVar2, "pvpds", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar6 = unk_0xCB845A663B4DD2F3(*iParam1, &cVar2);
	StringCopy(&cVar2, "pvpdi", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar7 = unk_0xCB845A663B4DD2F3(*iParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 0)
	{
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar5) == 2)
		{
			uParam0->f_466[iVar5 /*5*/] = unk_0xF6EB12D7E162DA9C(iVar7, iVar5);
		}
		else
		{
			uParam0->f_466[iVar5 /*5*/] = 0;
		}
		uParam0->f_466[iVar5 /*5*/].f_1 = iVar0;
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar5) == 2)
		{
			uParam0->f_466[iVar5 /*5*/].f_1.f_2 = unk_0xF6EB12D7E162DA9C(iVar6, iVar5);
		}
		else
		{
			uParam0->f_466[iVar5 /*5*/].f_1.f_2 = 0;
		}
		iVar5++;
	}
}

void func_240(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	
	if (unk_0xB988B7EA5B6DE257(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = unk_0x3FB03F18D2FA9F6D(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	StringCopy(&cVar1, "pedID", 8);
	if (unk_0x1D22B93425E4D657(iVar0, &cVar1) == 2)
	{
		*uParam0 = unk_0xEE6F60A09902D357(iVar0, &cVar1);
	}
	else
	{
		*uParam0 = -1;
	}
	func_241(&(uParam0->f_1), &iVar0);
}

void func_241(var uParam0, int iParam1)
{
	char[] cVar0[8];
	
	StringCopy(&cVar0, "vehId", 8);
	if (unk_0x1D22B93425E4D657(*iParam1, &cVar0) == 2)
	{
		*uParam0 = unk_0xEE6F60A09902D357(*iParam1, &cVar0);
	}
	else
	{
		*uParam0 = -1;
	}
	StringCopy(&cVar0, "vehIdS", 8);
	if (unk_0x1D22B93425E4D657(*iParam1, &cVar0) == 2)
	{
		uParam0->f_1 = unk_0xEE6F60A09902D357(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_1 = -1;
	}
	StringCopy(&cVar0, "vehSeat", 8);
	if (unk_0x1D22B93425E4D657(*iParam1, &cVar0) == 2)
	{
		uParam0->f_2 = unk_0xEE6F60A09902D357(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_2 = 0;
	}
	StringCopy(&cVar0, "bit1", 8);
	if (unk_0x1D22B93425E4D657(*iParam1, &cVar0) == 2)
	{
		uParam0->f_3 = unk_0xEE6F60A09902D357(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_3 = 0;
	}
}

void func_242(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (unk_0xB988B7EA5B6DE257(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = unk_0x3FB03F18D2FA9F6D(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	func_241(uParam0, &iVar0);
}

void func_243(int iParam0)
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
	var uVar13[10];
	var uVar24[10];
	var uVar35[10];
	var uVar46[10];
	var uVar57[10];
	var uVar68[10];
	var uVar79[10];
	var uVar90[10];
	var uVar101[10];
	var uVar112[10];
	var uVar123[10];
	var uVar134[10];
	var uVar145[10];
	var uVar156[10];
	var uVar167[10];
	var uVar178[10];
	var uVar189[10];
	var uVar200[10];
	var uVar211[10];
	var uVar222[10];
	var uVar233[10];
	var uVar244[10];
	var uVar255[10];
	var uVar266[10];
	var uVar277[10];
	var uVar288[10];
	var uVar299[10];
	var uVar310[10];
	var uVar321[10];
	var uVar332[10];
	var uVar343[10];
	var uVar354[10];
	int iVar365;
	int iVar366;
	int iVar367;
	int iVar368;
	int iVar369;
	int iVar370;
	int iVar371;
	int iVar372;
	int iVar373;
	int iVar374;
	int iVar375;
	int iVar376;
	int iVar377;
	var uVar378[10];
	var uVar389[10];
	int iVar400;
	int iVar401;
	int iVar402;
	var uVar403[10];
	var uVar414[10];
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar5 = unk_0x7408DCBD37A2C60F(iParam0, "cuts");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar5, "name");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar5, "bits");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar5, "bits2");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar5, "shot");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar5, "anim");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar5, "midp");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar5, "rng");
	iVar365 = unk_0xCB845A663B4DD2F3(iVar5, "train");
	iVar366 = unk_0xCB845A663B4DD2F3(iVar5, "trahl");
	iVar367 = unk_0xCB845A663B4DD2F3(iVar5, "traou");
	iVar368 = unk_0xCB845A663B4DD2F3(iVar5, "trapo");
	iVar369 = unk_0xCB845A663B4DD2F3(iVar5, "ccp");
	iVar370 = unk_0xCB845A663B4DD2F3(iVar5, "ccr");
	iVar371 = unk_0xCB845A663B4DD2F3(iVar5, "ccs");
	iVar372 = unk_0xCB845A663B4DD2F3(iVar5, "clms");
	iVar373 = unk_0xCB845A663B4DD2F3(iVar5, "clsp");
	iVar374 = unk_0xCB845A663B4DD2F3(iVar5, "clzs");
	iVar375 = unk_0xCB845A663B4DD2F3(iVar5, "clze");
	iVar376 = unk_0xCB845A663B4DD2F3(iVar5, "cfbe");
	iVar377 = unk_0xCB845A663B4DD2F3(iVar5, "vhspd");
	iVar400 = unk_0xCB845A663B4DD2F3(iVar5, "sset");
	iVar401 = unk_0xCB845A663B4DD2F3(iVar5, "ssvc");
	iVar402 = unk_0xCB845A663B4DD2F3(iVar5, "ssfh");
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/]), unk_0x3854C8AFB1001E7E(iVar6, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/]), "", 16);
		}
		if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_4 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_4 = 0;
		}
		if (iVar8 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_5 = 0;
		}
		if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_90 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_90 = 0;
		}
		if (iVar10 != 0 && unk_0xB988B7EA5B6DE257(iVar10, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_89 = unk_0xF6EB12D7E162DA9C(iVar10, iVar0);
			if (Global_4456448.f_166759[iVar0 /*1494*/].f_89 >= 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_89 = 0;
			}
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_89 = 0;
		}
		if (iVar11 != 0 && unk_0xB988B7EA5B6DE257(iVar11, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_91 = unk_0xF6EB12D7E162DA9C(iVar11, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_91 = 0;
		}
		if (iVar12 != 0 && unk_0xB988B7EA5B6DE257(iVar12, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_782 = unk_0xF6EB12D7E162DA9C(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_782 = 0;
		}
		if (iVar369 != 0 && unk_0xB988B7EA5B6DE257(iVar369, iVar0) == 5)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_775 = { unk_0xB6537A31819F86E5(iVar369, iVar0) };
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_775 = { 0f, 0f, 0f };
		}
		if (iVar370 != 0 && unk_0xB988B7EA5B6DE257(iVar370, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_778 = unk_0xB496A8A1F76DD70A(iVar370, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_778 = 0f;
		}
		if (iVar371 != 0 && unk_0xB988B7EA5B6DE257(iVar371, iVar0) == 5)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_779 = { unk_0xB6537A31819F86E5(iVar371, iVar0) };
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_779 = { 0f, 0f, 0f };
		}
		if (iVar400 != 0 && unk_0xB988B7EA5B6DE257(iVar400, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488 = unk_0xF6EB12D7E162DA9C(iVar400, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488 = 0;
		}
		if (iVar401 != 0 && unk_0xB988B7EA5B6DE257(iVar401, iVar0) == 5)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488.f_1 = { unk_0xB6537A31819F86E5(iVar401, iVar0) };
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488.f_1 = { 0f, 0f, 0f };
		}
		if (iVar402 != 0 && unk_0xB988B7EA5B6DE257(iVar402, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488.f_4 = unk_0xB496A8A1F76DD70A(iVar402, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1488.f_4 = 0f;
		}
		if (iVar365 != 0 && unk_0xB988B7EA5B6DE257(iVar365, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_483 = unk_0xF6EB12D7E162DA9C(iVar365, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_483 = 0;
		}
		if (iVar366 != 0 && unk_0xB988B7EA5B6DE257(iVar366, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_485 = unk_0xF6EB12D7E162DA9C(iVar366, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_485 = 0;
		}
		if (iVar367 != 0 && unk_0xB988B7EA5B6DE257(iVar367, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_484 = unk_0xF6EB12D7E162DA9C(iVar367, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_484 = 0;
		}
		if (iVar368 != 0 && unk_0xB988B7EA5B6DE257(iVar368, iVar0) == 5)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_486 = { unk_0xB6537A31819F86E5(iVar368, iVar0) };
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_486 = { 0f, 0f, 0f };
		}
		if (iVar372 != 0 && unk_0xB988B7EA5B6DE257(iVar372, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1475 = unk_0xF6EB12D7E162DA9C(iVar372, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1475 = -1;
		}
		if (iVar376 != 0 && unk_0xB988B7EA5B6DE257(iVar376, iVar0) == 2)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1493 = unk_0xF6EB12D7E162DA9C(iVar376, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1493 = 0;
		}
		if (iVar373 != 0 && unk_0xB988B7EA5B6DE257(iVar373, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1476 = unk_0xB496A8A1F76DD70A(iVar373, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1476 = 1f;
		}
		if (iVar374 != 0 && unk_0xB988B7EA5B6DE257(iVar374, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1477 = unk_0xB496A8A1F76DD70A(iVar374, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1477 = 0f;
		}
		if (iVar375 != 0 && unk_0xB988B7EA5B6DE257(iVar375, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1478 = unk_0xB496A8A1F76DD70A(iVar375, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_1478 = 0f;
		}
		if (iVar377 != 0 && unk_0xB988B7EA5B6DE257(iVar377, iVar0) == 3)
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_783 = unk_0xB496A8A1F76DD70A(iVar377, iVar0);
		}
		else
		{
			Global_4456448.f_166759[iVar0 /*1494*/].f_783 = 6f;
		}
		StringCopy(&cVar3, "int", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar13[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "rmin", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar24[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "rmax", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar35[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ctp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar46[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "sps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar57[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "eps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar68[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "srt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar79[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ert", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar90[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "sfv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar101[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "efv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar112[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ati", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar233[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ato", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar244[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "atr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar255[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ala", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar266[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "csp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar277[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "csr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar288[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "cwtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar321[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "ctpr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar332[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "cdtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar343[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "cdsp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar354[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "cssbs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar145[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "skt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar156[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "skm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar167[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "eind", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar123[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "etyp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar134[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar189[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar200[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar178[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar211[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "svwi", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar222[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "camnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar299[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "locnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar310[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "plrSW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar403[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar414[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "spcm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar378[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		StringCopy(&cVar3, "paos", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar389[iVar0] = unk_0xCB845A663B4DD2F3(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar189[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar189[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_6[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar189[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar200[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar200[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_19[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar200[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar178[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar178[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_32[iVar1] = unk_0xB496A8A1F76DD70A(uVar178[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_32[iVar1] = 0f;
			}
			if (uVar211[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar211[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_37[iVar1] = unk_0xB496A8A1F76DD70A(uVar211[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_37[iVar1] = 0f;
			}
			if (uVar222[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar222[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_42[iVar1] = unk_0xF6EB12D7E162DA9C(uVar222[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (uVar13[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar13[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_92[iVar1] = unk_0xF6EB12D7E162DA9C(uVar13[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_92[iVar1] = 0;
			}
			if (uVar24[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar24[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_47[iVar1] = unk_0xB496A8A1F76DD70A(uVar24[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_47[iVar1] = 0f;
			}
			if (uVar35[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar35[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_68[iVar1] = unk_0xB496A8A1F76DD70A(uVar35[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_68[iVar1] = 0f;
			}
			if (uVar46[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar46[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_113[iVar1] = unk_0xF6EB12D7E162DA9C(uVar46[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_113[iVar1] = 0;
			}
			if (uVar57[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar57[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_134[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar57[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_134[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar68[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar68[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_195[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar68[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_195[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar79[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar79[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_256[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar79[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_256[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar90[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar90[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_317[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar90[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_317[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar101[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar101[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_378[iVar1] = unk_0xB496A8A1F76DD70A(uVar101[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_378[iVar1] = 0f;
			}
			if (uVar112[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar112[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_399[iVar1] = unk_0xB496A8A1F76DD70A(uVar112[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_399[iVar1] = 0f;
			}
			if (uVar145[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar145[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_420[iVar1] = unk_0xF6EB12D7E162DA9C(uVar145[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_420[iVar1] = 0;
			}
			if (uVar156[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar156[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_441[iVar1] = unk_0xF6EB12D7E162DA9C(uVar156[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_441[iVar1] = 0;
			}
			if (uVar167[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar167[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_462[iVar1] = unk_0xB496A8A1F76DD70A(uVar167[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_462[iVar1] = 0f;
			}
			if (uVar233[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar233[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_571[iVar1] = unk_0xF6EB12D7E162DA9C(uVar233[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_571[iVar1] = 0;
			}
			if (uVar244[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar244[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_592[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar244[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_592[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar255[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar255[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_653[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar255[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_653[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar266[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar266[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_714[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar266[iVar0], iVar1) };
				Global_4456448.f_185414[iVar1] = Global_4456448.f_166759[iVar0 /*1494*/].f_714[iVar1 /*3*/];
				Global_4456448.f_185435[iVar1] = Global_4456448.f_166759[iVar0 /*1494*/].f_714[iVar1 /*3*/].f_1;
				Global_4456448.f_185456[iVar1] = Global_4456448.f_166759[iVar0 /*1494*/].f_714[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_714[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar277[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar277[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_489[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar277[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_489[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar288[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar288[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_550[iVar1] = unk_0xB496A8A1F76DD70A(uVar288[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_550[iVar1] = 0f;
			}
			if (uVar321[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar321[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1311[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar321[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1311[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar332[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar332[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1372[iVar1] = unk_0xB496A8A1F76DD70A(uVar332[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1372[iVar1] = 0f;
			}
			if (uVar343[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar343[iVar0], iVar1) == 5)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1393[iVar1 /*3*/] = { unk_0xB6537A31819F86E5(uVar343[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1393[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar354[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar354[iVar0], iVar1) == 3)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1454[iVar1] = unk_0xB496A8A1F76DD70A(uVar354[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1454[iVar1] = 0f;
			}
			if (uVar299[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar299[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1149[iVar1 /*4*/]), unk_0x3854C8AFB1001E7E(uVar299[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1149[iVar1 /*4*/]), "", 16);
			}
			if (uVar310[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar310[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1230[iVar1 /*4*/]), unk_0x3854C8AFB1001E7E(uVar310[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1230[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar123[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar123[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_784[iVar1 /*11*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar123[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_784[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar134[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar134[iVar0], iVar1) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_784[iVar1 /*11*/] = unk_0xF6EB12D7E162DA9C(uVar134[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_784[iVar1 /*11*/] = -1;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar378[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar378[iVar0], iVar2) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1479[iVar2 /*2*/] = unk_0xF6EB12D7E162DA9C(uVar378[iVar0], iVar2);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1479[iVar2 /*2*/] = 0;
			}
			if (uVar389[iVar0] != 0 && unk_0xB988B7EA5B6DE257(uVar389[iVar0], iVar2) == 2)
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1479[iVar2 /*2*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar389[iVar0], iVar2);
			}
			else
			{
				Global_4456448.f_166759[iVar0 /*1494*/].f_1479[iVar2 /*2*/].f_1 = -1;
			}
			func_242(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1115[iVar2 /*4*/]), &(uVar403[iVar0]), iVar2);
			func_242(&(Global_4456448.f_166759[iVar0 /*1494*/].f_1132[iVar2 /*4*/]), &(uVar414[iVar0]), iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

void func_244(int iParam0)
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
	
	if (unk_0x7408DCBD37A2C60F(iParam0, "eoir") == 0 || unk_0x7408DCBD37A2C60F(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0xCB845A663B4DD2F3(iParam0, "eoid");
	iVar9 = unk_0xCB845A663B4DD2F3(iParam0, "eoet");
	iVar10 = unk_0x7408DCBD37A2C60F(iParam0, "eoir");
	iVar11 = unk_0x7408DCBD37A2C60F(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (iVar8 != 0 && unk_0xB988B7EA5B6DE257(iVar8, iVar0) == 2)
		{
			Global_4456448.f_149473[iVar0] = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_149473[iVar0] = -1;
		}
		if (iVar9 != 0 && unk_0xB988B7EA5B6DE257(iVar9, iVar0) == 2)
		{
			Global_4456448.f_149442[iVar0] = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_149442[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x1D22B93425E4D657(iVar10, &cVar4) == 2)
				{
					Global_4456448.f_149504[iVar0 /*66*/][iVar1 /*5*/][iVar2] = unk_0xEE6F60A09902D357(iVar10, &cVar4);
				}
				else
				{
					Global_4456448.f_149504[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x1D22B93425E4D657(iVar11, &cVar4) == 2)
				{
					Global_4456448.f_151485[iVar0 /*66*/][iVar1 /*5*/][iVar2] = unk_0xEE6F60A09902D357(iVar11, &cVar4);
				}
				else
				{
					Global_4456448.f_149504[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_4456448.f_149473[iVar0];
		iVar13 = Global_4456448.f_149442[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_4456448.f_149473[iVar3] == iVar12) && Global_4456448.f_149442[iVar3] == iVar13)
				{
					Global_4456448.f_149442[iVar3] = -1;
					Global_4456448.f_149473[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 12)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_4456448.f_149504[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
							Global_4456448.f_151485[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
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

void func_245(int iParam0)
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
	
	iVar4 = unk_0x7408DCBD37A2C60F(iParam0, "kill");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar4, "no");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar4, "mcp");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			Global_4456448.f_58140[iVar1] = unk_0xF6EB12D7E162DA9C(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_58140[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_4456448.f_57646[iVar0 /*29*/][iVar1] = unk_0xF6EB12D7E162DA9C(uVar8[iVar1], iVar0);
					Global_4456448.f_57646[iVar0 /*29*/].f_5[iVar1] = unk_0xF6EB12D7E162DA9C(uVar13[iVar1], iVar0);
					if (Global_4456448.f_57646[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_4456448.f_57646[iVar0 /*29*/].f_10[iVar1] = unk_0xF6EB12D7E162DA9C(uVar18[iVar1], iVar0);
					if (uVar23[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar23[iVar1], iVar0) == 2)
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_15[iVar1] = unk_0xF6EB12D7E162DA9C(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (uVar28[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar28[iVar1], iVar0) == 2)
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_20[iVar1] = unk_0xF6EB12D7E162DA9C(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (iVar6 != 0 && unk_0xB988B7EA5B6DE257(iVar6, iVar0) == 2)
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
					}
					else
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_28 = -1;
					}
					if (iVar7 != 0 && unk_0xB988B7EA5B6DE257(iVar7, iVar0) == 2)
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar7, iVar0);
					}
					else
					{
						Global_4456448.f_57646[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_246(int iParam0)
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
	var uVar131[9];
	var uVar141[9];
	int iVar151;
	
	iVar4 = unk_0x7408DCBD37A2C60F(iParam0, "goto");
	Global_4456448.f_58146[0] = unk_0xEE6F60A09902D357(iVar4, "no");
	Global_4456448.f_6 = unk_0xEE6F60A09902D357(iVar4, "atrig");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_58146[0] - 1))
			{
				Global_4456448.f_54096[iVar0 /*169*/].f_1[0 /*3*/] = { unk_0xB6537A31819F86E5(uVar5[iVar1], iVar0) };
				Global_4456448.f_54096[iVar0 /*169*/].f_14[0] = unk_0xB496A8A1F76DD70A(uVar10[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_68[iVar1] = unk_0xF6EB12D7E162DA9C(uVar15[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_73[iVar1] = unk_0xF6EB12D7E162DA9C(uVar20[iVar1], iVar0);
				if (Global_4456448.f_54096[iVar0 /*169*/].f_73[iVar1] == -1)
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_73[iVar1] = 99999;
				}
				Global_4456448.f_54096[iVar0 /*169*/].f_78[iVar1] = unk_0xF6EB12D7E162DA9C(uVar25[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_50[iVar1] = unk_0xB496A8A1F76DD70A(uVar60[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_83[iVar1] = unk_0xF6EB12D7E162DA9C(uVar30[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_38[iVar1] = unk_0xF6EB12D7E162DA9C(uVar35[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_55 = unk_0xF6EB12D7E162DA9C(uVar50[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_33[0] = unk_0xF6EB12D7E162DA9C(uVar40[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_43[0] = unk_0xF6EB12D7E162DA9C(uVar45[iVar1], iVar0);
				Global_4456448.f_54096[iVar0 /*169*/].f_108 = unk_0xB496A8A1F76DD70A(uVar55[iVar1], iVar0);
				if (uVar65[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar65[iVar1], iVar0) == 2)
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_63[iVar1] = unk_0xF6EB12D7E162DA9C(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_63[iVar1] = 0;
				}
				if (uVar70[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar70[iVar1], iVar0) == 2)
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_88[iVar1] = unk_0xF6EB12D7E162DA9C(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_88[iVar1] = 0;
				}
				if (uVar75[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar75[iVar1], iVar0) == 2)
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_93[iVar1] = unk_0xF6EB12D7E162DA9C(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_54096[iVar0 /*169*/].f_93[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar80 = unk_0xCB845A663B4DD2F3(iVar4, "locbc");
	iVar81 = unk_0xCB845A663B4DD2F3(iVar4, "loc2rd");
	iVar82 = unk_0xCB845A663B4DD2F3(iVar4, "loclbr");
	iVar83 = unk_0xCB845A663B4DD2F3(iVar4, "locbra");
	iVar84 = unk_0xCB845A663B4DD2F3(iVar4, "locbhra");
	iVar85 = unk_0xCB845A663B4DD2F3(iVar4, "locdir");
	iVar86 = unk_0xCB845A663B4DD2F3(iVar4, "loctol");
	iVar87 = unk_0xCB845A663B4DD2F3(iVar4, "lochgt");
	iVar88 = unk_0xCB845A663B4DD2F3(iVar4, "locart");
	iVar89 = unk_0xCB845A663B4DD2F3(iVar4, "locaa1");
	iVar90 = unk_0xCB845A663B4DD2F3(iVar4, "locaa2");
	iVar91 = unk_0xCB845A663B4DD2F3(iVar4, "locaaw");
	iVar92 = unk_0xCB845A663B4DD2F3(iVar4, "locstd");
	iVar93 = unk_0xCB845A663B4DD2F3(iVar4, "locstm");
	iVar94 = unk_0xCB845A663B4DD2F3(iVar4, "lcbs2");
	iVar95 = unk_0xCB845A663B4DD2F3(iVar4, "lcbs3");
	iVar96 = unk_0xCB845A663B4DD2F3(iVar4, "procde");
	iVar97 = unk_0xCB845A663B4DD2F3(iVar4, "lcfktm");
	iVar98 = unk_0xCB845A663B4DD2F3(iVar4, "locid");
	iVar99 = unk_0xCB845A663B4DD2F3(iVar4, "locti");
	iVar100 = unk_0xCB845A663B4DD2F3(iVar4, "locgc");
	iVar101 = unk_0xCB845A663B4DD2F3(iVar4, "loclto");
	iVar102 = unk_0xCB845A663B4DD2F3(iVar4, "loctmw");
	iVar103 = unk_0xCB845A663B4DD2F3(iVar4, "loctmt");
	iVar104 = unk_0xCB845A663B4DD2F3(iVar4, "loctst");
	iVar105 = unk_0xCB845A663B4DD2F3(iVar4, "locpro");
	iVar106 = unk_0xCB845A663B4DD2F3(iVar4, "locpros");
	iVar107 = unk_0xCB845A663B4DD2F3(iVar4, "locprot");
	iVar108 = unk_0xCB845A663B4DD2F3(iVar4, "locdisa");
	iVar109 = unk_0xCB845A663B4DD2F3(iVar4, "locloo");
	iVar110 = unk_0xCB845A663B4DD2F3(iVar4, "loccors");
	iVar111 = unk_0xCB845A663B4DD2F3(iVar4, "lochght");
	iVar112 = unk_0xCB845A663B4DD2F3(iVar4, "locdpth");
	iVar113 = unk_0xCB845A663B4DD2F3(iVar4, "localph");
	iVar114 = unk_0xCB845A663B4DD2F3(iVar4, "loccosc");
	iVar115 = unk_0xCB845A663B4DD2F3(iVar4, "locbso");
	iVar116 = unk_0xCB845A663B4DD2F3(iVar4, "locspg");
	iVar117 = unk_0xCB845A663B4DD2F3(iVar4, "locspsg");
	iVar118 = unk_0xCB845A663B4DD2F3(iVar4, "locitb");
	iVar119 = unk_0xCB845A663B4DD2F3(iVar4, "lmcve1");
	iVar120 = unk_0xCB845A663B4DD2F3(iVar4, "lmcve2");
	iVar121 = unk_0xCB845A663B4DD2F3(iVar4, "lpreq");
	iVar122 = unk_0xCB845A663B4DD2F3(iVar4, "iorfll");
	iVar123 = unk_0xCB845A663B4DD2F3(iVar4, "gtbsr");
	iVar124 = unk_0xCB845A663B4DD2F3(iVar4, "gtbss");
	iVar125 = unk_0xCB845A663B4DD2F3(iVar4, "nmaggg");
	iVar126 = unk_0xCB845A663B4DD2F3(iVar4, "nmpass");
	iVar127 = unk_0xCB845A663B4DD2F3(iVar4, "nmfail");
	iVar128 = unk_0xCB845A663B4DD2F3(iVar4, "lmcp");
	iVar129 = unk_0xCB845A663B4DD2F3(iVar4, "lmcf");
	iVar130 = unk_0xCB845A663B4DD2F3(iVar4, "lmca");
	iVar151 = 0;
	iVar151 = 0;
	while (iVar151 <= 8)
	{
		StringCopy(&cVar2, "lwrvv", 8);
		StringIntConCat(&cVar2, iVar151, 8);
		uVar131[iVar151] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		StringCopy(&cVar2, "flrvv", 8);
		StringIntConCat(&cVar2, iVar151, 8);
		uVar141[iVar151] = unk_0xCB845A663B4DD2F3(iVar4, &cVar2);
		iVar151++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_58146[0] - 1))
	{
		if (iVar80 != 0 && unk_0xB988B7EA5B6DE257(iVar80, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_48 = unk_0xF6EB12D7E162DA9C(iVar80, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_48 = 0;
		}
		if (iVar81 != 0 && unk_0xB988B7EA5B6DE257(iVar81, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_22 = unk_0xB496A8A1F76DD70A(iVar81, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_22 = 0f;
		}
		if (iVar82 != 0 && unk_0xB988B7EA5B6DE257(iVar82, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_19 = unk_0xB496A8A1F76DD70A(iVar82, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_19 = 1f;
		}
		if (iVar83 != 0 && unk_0xB988B7EA5B6DE257(iVar83, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_20 = unk_0xB496A8A1F76DD70A(iVar83, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_20 = -1f;
		}
		if (iVar84 != 0 && unk_0xB988B7EA5B6DE257(iVar84, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_21 = unk_0xB496A8A1F76DD70A(iVar84, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_21 = -1f;
		}
		if (iVar85 != 0 && unk_0xB988B7EA5B6DE257(iVar85, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_30 = unk_0xB496A8A1F76DD70A(iVar85, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_30 = 0f;
		}
		if (iVar86 != 0 && unk_0xB988B7EA5B6DE257(iVar86, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_31 = unk_0xB496A8A1F76DD70A(iVar86, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_31 = 0f;
		}
		if (iVar87 != 0 && unk_0xB988B7EA5B6DE257(iVar87, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_32 = unk_0xB496A8A1F76DD70A(iVar87, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_32 = 0f;
		}
		if (iVar99 != 0 && unk_0xB988B7EA5B6DE257(iVar99, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_61 = unk_0xB496A8A1F76DD70A(iVar99, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_61 = 0f;
		}
		if (iVar100 != 0 && unk_0xB988B7EA5B6DE257(iVar100, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_62 = unk_0xB496A8A1F76DD70A(iVar100, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_62 = 0f;
		}
		if (iVar88 != 0 && unk_0xB988B7EA5B6DE257(iVar88, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/] = unk_0xF6EB12D7E162DA9C(iVar88, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/] = 0;
		}
		if (iVar92 != 0 && unk_0xB988B7EA5B6DE257(iVar92, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_107 = unk_0xB496A8A1F76DD70A(iVar92, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_107 = 10.5f;
		}
		if (iVar111 != 0 && unk_0xB988B7EA5B6DE257(iVar111, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_109 = unk_0xB496A8A1F76DD70A(iVar111, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_109 = 1f;
		}
		if (iVar112 != 0 && unk_0xB988B7EA5B6DE257(iVar112, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_110 = unk_0xB496A8A1F76DD70A(iVar112, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_110 = 0f;
		}
		if (iVar113 != 0 && unk_0xB988B7EA5B6DE257(iVar113, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_111 = unk_0xF6EB12D7E162DA9C(iVar113, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_111 = -1;
		}
		if (iVar114 != 0 && unk_0xB988B7EA5B6DE257(iVar114, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_112 = unk_0xB496A8A1F76DD70A(iVar114, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_112 = 0f;
		}
		if (iVar93 != 0 && unk_0xB988B7EA5B6DE257(iVar93, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_106 = unk_0xF6EB12D7E162DA9C(iVar93, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_106 = 0;
		}
		if (iVar94 != 0 && unk_0xB988B7EA5B6DE257(iVar94, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_56 = unk_0xF6EB12D7E162DA9C(iVar94, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_56 = 0;
		}
		if (iVar95 != 0 && unk_0xB988B7EA5B6DE257(iVar95, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar95, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_57 = 0;
		}
		if (iVar96 != 0 && unk_0xB988B7EA5B6DE257(iVar96, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar96, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_58 = 0;
		}
		if (iVar97 != 0 && unk_0xB988B7EA5B6DE257(iVar97, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar97, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_59 = -1;
		}
		if (iVar98 != 0 && unk_0xB988B7EA5B6DE257(iVar98, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_60 = unk_0xF6EB12D7E162DA9C(iVar98, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_60 = -1;
		}
		if (iVar109 != 0 && unk_0xB988B7EA5B6DE257(iVar109, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_114 = unk_0xF6EB12D7E162DA9C(iVar109, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_114 = 0;
		}
		if (iVar110 != 0 && unk_0xB988B7EA5B6DE257(iVar110, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_49 = unk_0xF6EB12D7E162DA9C(iVar110, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_49 = 0;
		}
		if (iVar101 != 0 && unk_0xB988B7EA5B6DE257(iVar101, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_115 = unk_0xB496A8A1F76DD70A(iVar101, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_115 = 0f;
		}
		if (iVar102 != 0 && unk_0xB988B7EA5B6DE257(iVar102, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_116 = unk_0xB496A8A1F76DD70A(iVar102, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_116 = 0f;
		}
		if (iVar103 != 0 && unk_0xB988B7EA5B6DE257(iVar103, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_117 = unk_0xB496A8A1F76DD70A(iVar103, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_117 = 0f;
		}
		if (iVar104 != 0 && unk_0xB988B7EA5B6DE257(iVar104, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_118 = unk_0xF6EB12D7E162DA9C(iVar104, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_118 = -1;
		}
		if (iVar105 != 0 && unk_0xB988B7EA5B6DE257(iVar105, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_120 = unk_0xF6EB12D7E162DA9C(iVar105, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_120 = -1;
		}
		if (iVar106 != 0 && unk_0xB988B7EA5B6DE257(iVar106, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_121 = unk_0xF6EB12D7E162DA9C(iVar106, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_121 = -1;
		}
		if (iVar107 != 0 && unk_0xB988B7EA5B6DE257(iVar107, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_122 = unk_0xF6EB12D7E162DA9C(iVar107, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_122 = -1;
		}
		if (iVar108 != 0 && unk_0xB988B7EA5B6DE257(iVar108, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_123 = unk_0xF6EB12D7E162DA9C(iVar108, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_123 = 0;
		}
		if (iVar116 != 0 && unk_0xB988B7EA5B6DE257(iVar116, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_124 = unk_0xF6EB12D7E162DA9C(iVar116, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_124 = 0;
		}
		if (iVar117 != 0 && unk_0xB988B7EA5B6DE257(iVar117, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_125 = unk_0xF6EB12D7E162DA9C(iVar117, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_125 = 0;
		}
		if (iVar118 != 0 && unk_0xB988B7EA5B6DE257(iVar118, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_126 = unk_0xF6EB12D7E162DA9C(iVar118, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_126 = 0;
		}
		if (iVar119 != 0 && unk_0xB988B7EA5B6DE257(iVar119, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_127 = unk_0xF6EB12D7E162DA9C(iVar119, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_127 = -1;
		}
		if (iVar120 != 0 && unk_0xB988B7EA5B6DE257(iVar120, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_128 = unk_0xF6EB12D7E162DA9C(iVar120, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_128 = -1;
		}
		if (iVar121 != 0 && unk_0xB988B7EA5B6DE257(iVar121, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_129 = unk_0xF6EB12D7E162DA9C(iVar121, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_129 = -1;
		}
		if (iVar122 != 0 && unk_0xB988B7EA5B6DE257(iVar122, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_130 = unk_0xF6EB12D7E162DA9C(iVar122, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_130 = 0;
		}
		if (iVar115 != 0 && unk_0xB988B7EA5B6DE257(iVar115, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_113 = unk_0xF6EB12D7E162DA9C(iVar115, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_113 = 0;
		}
		if (((iVar89 != 0 && unk_0xB988B7EA5B6DE257(iVar89, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar90, iVar0) == 5) && unk_0xB988B7EA5B6DE257(iVar91, iVar0) == 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_23 = { unk_0xB6537A31819F86E5(iVar89, iVar0) };
			Global_4456448.f_54096[iVar0 /*169*/].f_26 = { unk_0xB6537A31819F86E5(iVar90, iVar0) };
			Global_4456448.f_54096[iVar0 /*169*/].f_29 = unk_0xB496A8A1F76DD70A(iVar91, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_23 = { 0f, 0f, 0f };
			Global_4456448.f_54096[iVar0 /*169*/].f_26 = { 0f, 0f, 0f };
			Global_4456448.f_54096[iVar0 /*169*/].f_29 = 1f;
		}
		if (iVar123 != 0 && unk_0xB988B7EA5B6DE257(iVar123, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_6 = unk_0xF6EB12D7E162DA9C(iVar123, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_6 = -1;
		}
		if (iVar124 != 0 && unk_0xB988B7EA5B6DE257(iVar124, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_7 = unk_0xF6EB12D7E162DA9C(iVar124, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_7 = -1;
		}
		if (iVar125 != 0 && unk_0xB988B7EA5B6DE257(iVar125, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_2 = unk_0xF6EB12D7E162DA9C(iVar125, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_2 = -1;
		}
		if (iVar126 != 0 && unk_0xB988B7EA5B6DE257(iVar126, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98 = unk_0xF6EB12D7E162DA9C(iVar126, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98 = -1;
		}
		if (iVar127 != 0 && unk_0xB988B7EA5B6DE257(iVar127, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_1 = unk_0xF6EB12D7E162DA9C(iVar127, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_1 = -1;
		}
		if (iVar128 != 0 && unk_0xB988B7EA5B6DE257(iVar128, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_3 = unk_0xF6EB12D7E162DA9C(iVar128, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_3 = -1;
		}
		if (iVar129 != 0 && unk_0xB988B7EA5B6DE257(iVar129, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_4 = unk_0xF6EB12D7E162DA9C(iVar129, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_4 = -1;
		}
		if (iVar130 != 0 && unk_0xB988B7EA5B6DE257(iVar130, iVar0) == 2)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_5 = unk_0xF6EB12D7E162DA9C(iVar130, iVar0);
		}
		else
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_98.f_5 = -1;
		}
		iVar151 = 0;
		while (iVar151 <= 8)
		{
			if (uVar131[iVar151] != 0 && unk_0xB988B7EA5B6DE257(uVar131[iVar151], iVar0) == 5)
			{
				Global_4456448.f_54096[iVar0 /*169*/].f_131[iVar151 /*3*/] = { unk_0xB6537A31819F86E5(uVar131[iVar151], iVar0) };
			}
			else
			{
				Global_4456448.f_54096[iVar0 /*169*/].f_131[iVar151 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar141[iVar151] != 0 && unk_0xB988B7EA5B6DE257(uVar141[iVar151], iVar0) == 3)
			{
				Global_4456448.f_54096[iVar0 /*169*/].f_159[iVar151] = unk_0xB496A8A1F76DD70A(uVar141[iVar151], iVar0);
			}
			else
			{
				Global_4456448.f_54096[iVar0 /*169*/].f_159[iVar151] = 0f;
			}
			iVar151++;
		}
		iVar0++;
	}
}

void func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x7408DCBD37A2C60F(iParam0, "cover");
		Global_4456448.f_68977 = unk_0xEE6F60A09902D357(iVar1, "no");
		iVar2 = unk_0xCB845A663B4DD2F3(iVar1, "loc");
		iVar3 = unk_0xCB845A663B4DD2F3(iVar1, "dir");
		iVar4 = unk_0xCB845A663B4DD2F3(iVar1, "use");
		iVar5 = unk_0xCB845A663B4DD2F3(iVar1, "high");
		iVar6 = unk_0xCB845A663B4DD2F3(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_68977 - 1))
		{
			Global_4456448.f_68978[iVar0 /*7*/] = { unk_0xB6537A31819F86E5(iVar2, iVar0) };
			Global_4456448.f_68978[iVar0 /*7*/].f_3 = unk_0xB496A8A1F76DD70A(iVar3, iVar0);
			Global_4456448.f_68978[iVar0 /*7*/].f_4 = unk_0xF6EB12D7E162DA9C(iVar4, iVar0);
			Global_4456448.f_68978[iVar0 /*7*/].f_5 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
			Global_4456448.f_68978[iVar0 /*7*/].f_6 = unk_0xF6EB12D7E162DA9C(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_248(int iParam0)
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
	
	iVar2 = unk_0x7408DCBD37A2C60F(iParam0, "door");
	Global_4456448.f_67919 = unk_0xEE6F60A09902D357(iVar2, "no");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar2, "loc");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar2, "fopen");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar2, "model");
	uVar6 = unk_0xCB845A663B4DD2F3(iVar2, "lock");
	uVar7 = unk_0xCB845A663B4DD2F3(iVar2, "swing");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar2, "udrle");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar2, "udtem");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar2, "udrat");
	uVar11 = unk_0xCB845A663B4DD2F3(iVar2, "swingu");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar2, "audst");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar2, "aurt");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar2, "uaudst");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar2, "uaurt");
	uVar16 = unk_0xCB845A663B4DD2F3(iVar2, "lfp");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar2, "dtime");
	uVar18 = unk_0xCB845A663B4DD2F3(iVar2, "mid");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar2, "dbs");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar2, "dcoid");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar2, "fcz");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar2, "foz");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar2, "org");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar2, "dle");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar2, "dird");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar2, "dirdv");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar2, "dirud");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar2, "dirduv");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar2, "ORNLO");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_67919 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_67920[iVar0 /*33*/] = { unk_0xB6537A31819F86E5(iVar3, iVar0) };
			Global_4456448.f_67920[iVar0 /*33*/].f_3 = unk_0xB496A8A1F76DD70A(iVar4, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_16 = unk_0x1BC37BB2C67275C8(uVar6, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_17 = unk_0x1BC37BB2C67275C8(uVar7, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_7 = unk_0xF6EB12D7E162DA9C(iVar8, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_8 = unk_0xF6EB12D7E162DA9C(iVar9, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_15 = unk_0xB496A8A1F76DD70A(iVar10, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_18 = unk_0x1BC37BB2C67275C8(uVar11, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_10 = unk_0xB496A8A1F76DD70A(iVar13, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_11 = unk_0xB496A8A1F76DD70A(iVar12, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_12 = unk_0xB496A8A1F76DD70A(iVar15, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_13 = unk_0xB496A8A1F76DD70A(iVar14, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_14 = unk_0x1BC37BB2C67275C8(uVar16, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_20 = unk_0xF6EB12D7E162DA9C(iVar19, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar20, iVar0);
			iVar1 = unk_0xF6EB12D7E162DA9C(iVar5, iVar0);
			Global_4456448.f_67920[iVar0 /*33*/].f_6 = iVar1;
			if (iVar17 != 0 && unk_0xB988B7EA5B6DE257(iVar17, iVar0) == 2)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_9 = unk_0xF6EB12D7E162DA9C(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_9 = 0;
			}
			Global_4456448.f_67920[iVar0 /*33*/].f_19 = unk_0x1BC37BB2C67275C8(uVar18, iVar0);
			if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar0) == 3)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_4 = unk_0xB496A8A1F76DD70A(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_4 = 999999f;
			}
			if (iVar22 != 0 && unk_0xB988B7EA5B6DE257(iVar22, iVar0) == 3)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_5 = unk_0xB496A8A1F76DD70A(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_5 = 999999f;
			}
			if (iVar23 != 0 && unk_0xB988B7EA5B6DE257(iVar23, iVar0) == 3)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_21 = unk_0xB496A8A1F76DD70A(iVar23, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_21 = 0f;
			}
			if (iVar25 != 0 && unk_0xB988B7EA5B6DE257(iVar25, iVar0) == 2)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar25, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_24 = 0;
			}
			if (iVar26 != 0 && unk_0xB988B7EA5B6DE257(iVar26, iVar0) == 5)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_25 = { unk_0xB6537A31819F86E5(iVar26, iVar0) };
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_25 = { 0f, 0f, 0f };
			}
			if (iVar27 != 0 && unk_0xB988B7EA5B6DE257(iVar27, iVar0) == 2)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar27, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_28 = 3;
			}
			if (iVar28 != 0 && unk_0xB988B7EA5B6DE257(iVar28, iVar0) == 5)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_29 = { unk_0xB6537A31819F86E5(iVar28, iVar0) };
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_29 = { 0f, 0f, 0f };
			}
			if (iVar29 != 0 && unk_0xB988B7EA5B6DE257(iVar29, iVar0) == 3)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_32 = unk_0xB496A8A1F76DD70A(iVar29, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_32 = 0f;
			}
			if (iVar24 != 0 && unk_0xB988B7EA5B6DE257(iVar24, iVar0) == 2)
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar24, iVar0);
			}
			else
			{
				Global_4456448.f_67920[iVar0 /*33*/].f_23 = -1;
			}
		}
		iVar0++;
	}
}

void func_249(int iParam0)
{
	int iVar0;
	var uVar1[4];
	var uVar6[4];
	var uVar11[4];
	var uVar16[4];
	var uVar21[4];
	var uVar26[4];
	var uVar31[4];
	var uVar36[4];
	var uVar41[4];
	var uVar46[4];
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
	var uVar101[4];
	var uVar106[4];
	var uVar111[4];
	var uVar116[4];
	var uVar121[4];
	var uVar126[4];
	struct<33> Var131;
	int iVar264;
	int iVar265;
	int iVar266;
	char cVar267[16];
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	Var131 = 4;
	Var131.f_1 = 32;
	Var131.f_1.f_33 = 32;
	Var131.f_1.f_33.f_33 = 32;
	Var131.f_1.f_33.f_33.f_33 = 32;
	iVar264 = 0;
	while (iVar264 <= (Global_4456448.f_42 - 1))
	{
		if (iVar264 < 4)
		{
			iVar265 = 0;
			while (iVar265 <= 31)
			{
				StringCopy(&cVar267, "irlw", 16);
				StringIntConCat(&cVar267, iVar264, 16);
				StringConCat(&cVar267, "-", 16);
				StringIntConCat(&cVar267, iVar265, 16);
				Var131[iVar264 /*33*/][iVar265] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
				iVar265++;
			}
			StringCopy(&cVar267, "gbnum", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar6[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbngn", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar11[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gblgn", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar16[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbcol", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar21[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbdel", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar26[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mcstr", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar31[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mcsrm", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar36[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mcmp", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar51[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "aumx", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar41[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mpaumx", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar46[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mpaumxscr", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar56[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "mpagrom", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar61[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "filtlh", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar66[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbmax", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar71[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbngm", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar76[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gblgm", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar81[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbvhl", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar86[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbaie", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar1[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gacc", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar91[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gfld", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar96[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbat", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar101[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbv1", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar106[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbv2", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar111[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbaw", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar116[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "gbfnr", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar121[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			StringCopy(&cVar267, "txt2", 16);
			StringIntConCat(&cVar267, iVar264, 16);
			uVar126[iVar264] = unk_0xCB845A663B4DD2F3(iVar0, &cVar267);
			iVar266 = 0;
			while (iVar266 <= (Global_4456448.f_106[iVar264 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar31, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5507[iVar266] = unk_0xF6EB12D7E162DA9C(uVar31[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5507[iVar266] = 0;
				}
				if (!func_250(&uVar36, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5579[iVar266] = unk_0xF6EB12D7E162DA9C(uVar36[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5579[iVar266] = -1;
				}
				if (!func_250(&uVar41, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5543[iVar266] = unk_0xF6EB12D7E162DA9C(uVar41[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5543[iVar266] = 0;
				}
				if (!func_250(&uVar56, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5597[iVar266] = unk_0xF6EB12D7E162DA9C(uVar56[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5597[iVar266] = 0;
				}
				if (!func_250(&uVar61, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5615[iVar266] = unk_0xF6EB12D7E162DA9C(uVar61[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5615[iVar266] = 0;
				}
				if (!func_250(&uVar46, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5561[iVar266] = unk_0xF6EB12D7E162DA9C(uVar46[iVar264], iVar266);
				}
				else if (Global_4456448.f_106[iVar264 /*11610*/].f_5543[iVar266] != 0 && unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar264 /*11610*/].f_5687[iVar266], 8))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5561[iVar266] = Global_4456448.f_106[iVar264 /*11610*/].f_5543[iVar266];
					Global_4456448.f_106[iVar264 /*11610*/].f_5543[iVar266] = 0;
					unk_0x3B76114EC84D5812(&(Global_4456448.f_106[iVar264 /*11610*/].f_5687[iVar266]), 8);
				}
				if (!func_250(&uVar51, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5525[iVar266] = unk_0xF6EB12D7E162DA9C(uVar51[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5525[iVar266] = 0;
				}
				if (!func_250(&uVar6, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4847[iVar266] = unk_0xF6EB12D7E162DA9C(uVar6[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4847[iVar266] = 0;
				}
				if (!func_250(&uVar11, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5131[iVar266] = unk_0xF6EB12D7E162DA9C(uVar11[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5131[iVar266] = 0;
				}
				if (!func_250(&uVar16, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5167[iVar266] = unk_0xF6EB12D7E162DA9C(uVar16[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5167[iVar266] = 0;
				}
				if (!func_250(&uVar21, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4883[iVar266] = unk_0xF6EB12D7E162DA9C(uVar21[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4883[iVar266] = 0;
				}
				if (!func_250(&uVar26, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4865[iVar266] = unk_0xF6EB12D7E162DA9C(uVar26[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4865[iVar266] = 0;
				}
				if (!func_250(&uVar66, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5633[iVar266] = unk_0xF6EB12D7E162DA9C(uVar66[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5633[iVar266] = 0;
				}
				if (!func_250(&uVar71, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5023[iVar266] = unk_0xF6EB12D7E162DA9C(uVar71[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5023[iVar266] = 0;
				}
				if (!func_250(&uVar76, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5149[iVar266] = unk_0xF6EB12D7E162DA9C(uVar76[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5149[iVar266] = 0;
				}
				if (!func_250(&uVar81, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5185[iVar266] = unk_0xF6EB12D7E162DA9C(uVar81[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5185[iVar266] = 0;
				}
				if (!func_250(&uVar1, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5113[iVar266] = unk_0xF6EB12D7E162DA9C(uVar1[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5113[iVar266] = 0;
				}
				if (!func_250(&uVar86, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5041[iVar266] = unk_0xF6EB12D7E162DA9C(uVar86[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5041[iVar266] = 100;
				}
				if (!func_250(&uVar91, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5077[iVar266] = unk_0xF6EB12D7E162DA9C(uVar91[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5077[iVar266] = 0;
				}
				if (!func_250(&uVar96, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5095[iVar266] = unk_0xF6EB12D7E162DA9C(uVar96[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5095[iVar266] = 0;
				}
				if (!func_250(&uVar101, 2, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5059[iVar266] = unk_0xF6EB12D7E162DA9C(uVar101[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5059[iVar266] = 0;
				}
				if (!func_250(&uVar106, 5, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4901[iVar266 /*3*/] = { unk_0xB6537A31819F86E5(uVar106[iVar264], iVar266) };
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4901[iVar266 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar111, 5, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4953[iVar266 /*3*/] = { unk_0xB6537A31819F86E5(uVar111[iVar264], iVar266) };
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_4953[iVar266 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar116, 3, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5005[iVar266] = unk_0xB496A8A1F76DD70A(uVar116[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5005[iVar266] = 0f;
				}
				if (!func_250(&uVar121, 3, iVar264, iVar266))
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5203[iVar266] = unk_0xB496A8A1F76DD70A(uVar121[iVar264], iVar266);
				}
				else
				{
					Global_4456448.f_106[iVar264 /*11610*/].f_5203[iVar266] = -1f;
				}
				if (!func_250(&uVar126, 4, iVar264, iVar266))
				{
					StringCopy(&(Global_4456448.f_106[iVar264 /*11610*/].f_7276[iVar266 /*16*/]), unk_0x3854C8AFB1001E7E(uVar126[iVar264], iVar266), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar264 /*11610*/].f_7276[iVar266 /*16*/]), "", 64);
				}
				iVar265 = 0;
				while (iVar265 <= 31)
				{
					if (Var131[iVar264 /*33*/][iVar265] != 0)
					{
						Global_4456448.f_106[iVar264 /*11610*/].f_5921[iVar266 /*33*/][iVar265] = unk_0xF6EB12D7E162DA9C(Var131[iVar264 /*33*/][iVar265], iVar266);
					}
					else
					{
						Global_4456448.f_106[iVar264 /*11610*/].f_5921[iVar266 /*33*/][iVar265] = -1;
					}
					iVar265++;
				}
				iVar266++;
			}
		}
		iVar264++;
	}
}

int func_250(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((*uParam0)[iParam2] != 0)
	{
		if (unk_0xB988B7EA5B6DE257((*uParam0)[iParam2], iParam3) == iParam1)
		{
			return 0;
		}
	}
	return 1;
}

void func_251(int iParam0)
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
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "airset", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airsid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airstv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airsod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airsodx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airssp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airola", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airoha", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airsr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airsft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "airtyp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmst", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmsa", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmsac", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmsb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmse", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar7, 2, iVar1, iVar2) && !func_250(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/] = unk_0xF6EB12D7E162DA9C(uVar7[iVar1], iVar2);
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/] = 0;
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_1 = -1;
				}
				if (!func_250(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_2 = { unk_0xB6537A31819F86E5(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_2 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_5 = unk_0xF6EB12D7E162DA9C(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_5 = 0;
				}
				if (!func_250(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_6 = unk_0xF6EB12D7E162DA9C(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_6 = 0;
				}
				if (!func_250(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_7 = unk_0xF6EB12D7E162DA9C(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_7 = 25;
				}
				if (!func_250(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_8 = unk_0xF6EB12D7E162DA9C(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_8 = 25;
				}
				if (!func_250(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_9 = unk_0xF6EB12D7E162DA9C(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_9 = 45;
				}
				if (!func_250(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_10 = unk_0xF6EB12D7E162DA9C(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_10 = 0;
				}
				if (!func_250(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_11 = unk_0xF6EB12D7E162DA9C(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_11 = 3500;
				}
				if (!func_250(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_12 = unk_0xF6EB12D7E162DA9C(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10937[iVar2 /*13*/].f_12 = 0;
				}
				if (!func_250(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10739[iVar2] = unk_0xF6EB12D7E162DA9C(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10739[iVar2] = 0;
				}
				if (!func_250(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10757[iVar2] = unk_0xF6EB12D7E162DA9C(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10757[iVar2] = 0;
				}
				if (!func_250(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10775[iVar2] = unk_0xF6EB12D7E162DA9C(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10775[iVar2] = 0;
				}
				if (!func_250(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10793[iVar2] = unk_0xF6EB12D7E162DA9C(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10793[iVar2] = 0;
				}
				if (!func_250(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10811[iVar2] = unk_0xF6EB12D7E162DA9C(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10811[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_252(int iParam0)
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
	struct<21> Var127;
	int iVar212;
	int iVar213;
	
	if (func_129())
	{
		return;
	}
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	Var127 = 4;
	Var127.f_1 = 20;
	Var127.f_1.f_21 = 20;
	Var127.f_1.f_21.f_21 = 20;
	Var127.f_1.f_21.f_21.f_21 = 20;
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs5", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs6", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs7", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs8", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs9", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs10", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs11", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs12", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs13", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irbs14", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irlpst", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "iroamtr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmdm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar212 = 0;
			while (iVar212 <= 19)
			{
				StringCopy(&cVar3, "hlm", 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar212, 16);
				Var127[iVar1 /*21*/][iVar212] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
				iVar212++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar7, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5651[iVar2] = unk_0xF6EB12D7E162DA9C(uVar7[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5651[iVar2] = 0;
				}
				if (!func_250(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5669[iVar2] = unk_0xF6EB12D7E162DA9C(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5669[iVar2] = 0;
				}
				if (!func_250(&uVar17, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5687[iVar2] = unk_0xF6EB12D7E162DA9C(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5687[iVar2] = 0;
				}
				if (!func_250(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5705[iVar2] = unk_0xF6EB12D7E162DA9C(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5705[iVar2] = 0;
				}
				if (!func_250(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5723[iVar2] = unk_0xF6EB12D7E162DA9C(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5723[iVar2] = 0;
				}
				if (!func_250(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5741[iVar2] = unk_0xF6EB12D7E162DA9C(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5741[iVar2] = 0;
				}
				if (!func_250(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5759[iVar2] = unk_0xF6EB12D7E162DA9C(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5759[iVar2] = 0;
				}
				if (!func_250(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5777[iVar2] = unk_0xF6EB12D7E162DA9C(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5777[iVar2] = 0;
				}
				if (!func_250(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5795[iVar2] = unk_0xF6EB12D7E162DA9C(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5795[iVar2] = 0;
				}
				if (!func_250(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5813[iVar2] = unk_0xF6EB12D7E162DA9C(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5813[iVar2] = 0;
				}
				if (!func_250(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5831[iVar2] = unk_0xF6EB12D7E162DA9C(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5831[iVar2] = 0;
				}
				if (!func_250(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5849[iVar2] = unk_0xF6EB12D7E162DA9C(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5849[iVar2] = 0;
				}
				if (!func_250(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5867[iVar2] = unk_0xF6EB12D7E162DA9C(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5867[iVar2] = 0;
				}
				if (!func_250(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5885[iVar2] = unk_0xF6EB12D7E162DA9C(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5885[iVar2] = 0;
				}
				if (!func_250(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5903[iVar2] = unk_0xF6EB12D7E162DA9C(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5903[iVar2] = -1;
				}
				if (!func_250(&uVar82, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_11319[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar82[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_11319[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/] = unk_0xF6EB12D7E162DA9C(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/] = 1000;
				}
				if (!func_250(&uVar92, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_1 = unk_0xB496A8A1F76DD70A(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_1 = 1.15f;
				}
				if (!func_250(&uVar117, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_6 = unk_0xB496A8A1F76DD70A(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_6 = 10f;
				}
				if (!func_250(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_2 = unk_0xF6EB12D7E162DA9C(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_2 = 25;
				}
				if (!func_250(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_7 = unk_0xF6EB12D7E162DA9C(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_7 = 0;
				}
				if (!func_250(&uVar107, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_3 = unk_0xF6EB12D7E162DA9C(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_3 = 1;
				}
				if (!func_250(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_8 = unk_0xF6EB12D7E162DA9C(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_8 = 100;
				}
				if (!func_250(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_5 = unk_0xF6EB12D7E162DA9C(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3414[iVar2 /*9*/].f_5 = 25;
				}
				iVar213 = 0;
				iVar213 = 0;
				while (iVar213 <= 19)
				{
					if (Var127[iVar1 /*21*/][iVar213] != 0 && unk_0xB988B7EA5B6DE257(Var127[iVar1 /*21*/][iVar213], iVar2) == 2)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_3946[iVar2 /*21*/][iVar213] = unk_0xF6EB12D7E162DA9C(Var127[iVar1 /*21*/][iVar213], iVar2);
					}
					else
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_3946[iVar2 /*21*/][iVar213] = 0;
					}
					iVar213++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_253(int iParam0)
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
	var uVar297[4];
	var uVar302[4];
	var uVar307[4];
	int iVar312;
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rloftv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdsv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "fceStlth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmri", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "remiveh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rtkpro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "diawfm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drnmss", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rltiA", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rltiB", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar297[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rltiC", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar302[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rltiD", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar307[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3344[iVar2 /*3*/] = { unk_0xB6537A31819F86E5(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3344[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3396[iVar2] = unk_0xB496A8A1F76DD70A(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3396[iVar2] = 0f;
				}
				if (!func_250(&uVar17, 2, iVar1, iVar2) && !func_254())
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10320[iVar2] = unk_0xF6EB12D7E162DA9C(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10320[iVar2] = -1;
				}
				if (!func_250(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10338[iVar2] = unk_0xF6EB12D7E162DA9C(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10338[iVar2] = 0;
				}
				if (!func_250(&uVar27, 2, iVar1, iVar2) && Global_4456448.f_2 != 6)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10356[iVar2] = unk_0xF6EB12D7E162DA9C(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10356[iVar2] = -1;
				}
				if (!func_250(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10374[iVar2] = unk_0xF6EB12D7E162DA9C(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10374[iVar2] = 0;
				}
				if (!func_250(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10410[iVar2] = unk_0xF6EB12D7E162DA9C(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10410[iVar2] = -1;
				}
				if (!func_250(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10572[iVar2] = unk_0xF6EB12D7E162DA9C(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10572[iVar2] = 0;
				}
				if (!func_250(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10590[iVar2] = unk_0xF6EB12D7E162DA9C(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10590[iVar2] = 0;
				}
				if (!func_250(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10608[iVar2] = unk_0xF6EB12D7E162DA9C(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10608[iVar2] = 0;
				}
				if (!func_250(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10626[iVar2] = unk_0xF6EB12D7E162DA9C(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10626[iVar2] = -1;
				}
				if (!func_250(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10392[iVar2] = unk_0xF6EB12D7E162DA9C(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10392[iVar2] = -1;
				}
				if (!func_250(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10428[iVar2] = unk_0xF6EB12D7E162DA9C(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10428[iVar2] = 0;
				}
				if (!func_250(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10482[iVar2] = unk_0xF6EB12D7E162DA9C(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10482[iVar2] = -1;
				}
				if (!func_250(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10500[iVar2] = unk_0xF6EB12D7E162DA9C(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10500[iVar2] = -1;
				}
				if (!func_250(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4476[iVar2] = unk_0xF6EB12D7E162DA9C(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4476[iVar2] = 0;
				}
				if (!func_250(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4512[iVar2] = unk_0xF6EB12D7E162DA9C(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4512[iVar2] = -1;
				}
				if (!func_250(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4494[iVar2] = unk_0xF6EB12D7E162DA9C(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4494[iVar2] = -1;
				}
				if (!func_250(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4530[iVar2] = unk_0xF6EB12D7E162DA9C(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4530[iVar2] = 10;
				}
				if (!func_250(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4548[iVar2] = unk_0xF6EB12D7E162DA9C(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4548[iVar2] = 10;
				}
				if (!func_250(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10883[iVar2] = unk_0xF6EB12D7E162DA9C(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10883[iVar2] = 10;
				}
				if (!func_250(&uVar127, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10901[iVar2] = unk_0xF6EB12D7E162DA9C(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10901[iVar2] = 10;
				}
				if (!func_250(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6711[iVar2] = unk_0xF6EB12D7E162DA9C(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6711[iVar2] = -1;
				}
				if (!func_250(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11592[iVar2] = unk_0xF6EB12D7E162DA9C(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11592[iVar2] = 0;
				}
				if (!func_250(&uVar107, 2, iVar1, iVar2))
				{
					iVar312 = unk_0xF6EB12D7E162DA9C(uVar107[iVar1], iVar2);
					if (iVar312 > 0)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_10446[iVar2] = iVar312;
					}
					else
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_10446[iVar2] = 0;
					}
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10446[iVar2] = 0;
				}
				if (!func_250(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10464[iVar2] = unk_0xF6EB12D7E162DA9C(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10464[iVar2] = 0;
				}
				if (!func_250(&uVar117, 2, iVar1, iVar2))
				{
					if (unk_0xF6EB12D7E162DA9C(uVar117[iVar1], iVar2) > 1)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_4624[iVar2] = unk_0xF6EB12D7E162DA9C(uVar117[iVar1], iVar2);
					}
					else
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_4624[iVar2] = 1;
					}
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4624[iVar2] = 1;
				}
				if (!func_250(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4314[iVar2] = unk_0xF6EB12D7E162DA9C(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4314[iVar2] = -1;
				}
				if (!func_250(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4332[iVar2] = unk_0xF6EB12D7E162DA9C(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4332[iVar2] = -1;
				}
				if (!func_250(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4404[iVar2] = unk_0xF6EB12D7E162DA9C(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4404[iVar2] = -1;
				}
				if (!func_250(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4350[iVar2] = unk_0xF6EB12D7E162DA9C(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4350[iVar2] = -1;
				}
				if (!func_250(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4368[iVar2] = unk_0xF6EB12D7E162DA9C(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4368[iVar2] = -1;
				}
				if (!func_250(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4386[iVar2] = unk_0xF6EB12D7E162DA9C(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4386[iVar2] = -1;
				}
				if (!func_250(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4422[iVar2] = unk_0xF6EB12D7E162DA9C(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4422[iVar2] = 4;
				}
				if (!func_250(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4440[iVar2] = unk_0xF6EB12D7E162DA9C(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4440[iVar2] = 0;
				}
				if (!func_250(&uVar182, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4458[iVar2] = unk_0xF6EB12D7E162DA9C(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4458[iVar2] = 0;
				}
				if (!func_250(&uVar187, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/] = unk_0xB496A8A1F76DD70A(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/] = 0f;
				}
				if (!func_250(&uVar192, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/].f_1 = 1;
				}
				if (!func_250(&uVar197, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/].f_2 = unk_0xF6EB12D7E162DA9C(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3773[iVar2 /*3*/].f_2 = 50;
				}
				if (!func_250(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/] = unk_0xB496A8A1F76DD70A(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/] = 0f;
				}
				if (!func_250(&uVar207, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[0] = unk_0xB496A8A1F76DD70A(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[0] = 0f;
				}
				if (!func_250(&uVar212, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[1] = unk_0xB496A8A1F76DD70A(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[1] = 0f;
				}
				if (!func_250(&uVar217, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[2] = unk_0xB496A8A1F76DD70A(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[2] = 0f;
				}
				if (!func_250(&uVar222, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[3] = unk_0xB496A8A1F76DD70A(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_1[3] = 0f;
				}
				if (!func_250(&uVar227, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_6 = unk_0xB496A8A1F76DD70A(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_6 = 0f;
				}
				if (!func_250(&uVar232, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_7 = unk_0xB496A8A1F76DD70A(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_7 = 0f;
				}
				if (!func_250(&uVar237, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_8 = unk_0xB496A8A1F76DD70A(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_8 = 0f;
				}
				if (!func_250(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_11 = unk_0xF6EB12D7E162DA9C(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_11 = 0;
				}
				if (!func_250(&uVar242, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_9 = unk_0xB496A8A1F76DD70A(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_9 = 0f;
				}
				if (!func_250(&uVar247, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_10 = unk_0xB496A8A1F76DD70A(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3568[iVar2 /*12*/].f_10 = 0f;
				}
				if (!func_250(&uVar257, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/] = unk_0xF6EB12D7E162DA9C(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/] = -1;
				}
				if (!func_250(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_1 = -1;
				}
				if (!func_250(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_2 = unk_0xF6EB12D7E162DA9C(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_2 = 0;
				}
				if (!func_250(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_3 = unk_0xF6EB12D7E162DA9C(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3825[iVar2 /*4*/].f_3 = 0;
				}
				if (!func_250(&uVar277, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/] = unk_0xF6EB12D7E162DA9C(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/] = 0;
				}
				if (!func_250(&uVar287, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/].f_2 = unk_0xF6EB12D7E162DA9C(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/].f_2 = 0;
				}
				if (!func_250(&uVar282, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_3894[iVar2 /*3*/].f_1 = 0;
				}
				if (!func_250(&uVar292, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_1 = unk_0xF6EB12D7E162DA9C(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_1 = 0;
				}
				if (!func_250(&uVar297, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/] = unk_0xF6EB12D7E162DA9C(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/] = 0;
				}
				if (!func_250(&uVar302, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_3 = unk_0xB496A8A1F76DD70A(uVar302[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_3 = 0f;
				}
				if (!func_250(&uVar307, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_2 = unk_0xF6EB12D7E162DA9C(uVar307[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11231[iVar2 /*4*/].f_2 = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

bool func_254()
{
	return (Global_4456448 == 0 && Global_4456448.f_2 == 6);
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	var uVar33[4];
	var uVar38[4];
	var uVar43[4];
	var uVar48[4];
	var uVar53[4];
	var uVar58[4];
	var uVar63[4];
	var uVar68[4];
	var uVar73[4];
	var uVar78[4];
	var uVar83[4];
	var uVar88[4];
	var uVar93[4];
	var uVar98[4];
	var uVar103[4];
	var uVar108[4];
	var uVar113[4];
	var uVar118[4];
	var uVar123[4];
	var uVar128[4];
	var uVar133[4];
	var uVar138[4];
	var uVar143[4];
	var uVar148[4];
	var uVar153[4];
	var uVar158[4];
	var uVar163[4];
	var uVar168[4];
	var uVar173[4];
	struct<5> Var178;
	var uVar199[4];
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	Var178 = 4;
	Var178.f_1 = 4;
	Var178.f_1.f_5 = 4;
	Var178.f_1.f_5.f_5 = 4;
	Var178.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "itvsd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar8[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "itved", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar13[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "invor", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar18[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "emonR", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar23[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "pDSaD", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar28[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "todh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar93[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "todm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar98[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "tods", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar103[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "todsh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar108[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "armr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar33[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "bsthr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar38[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "mgdm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar43[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rorcp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar48[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rocok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar53[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rodp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar58[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rodpt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar63[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rotes", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar68[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "expRR", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar73[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "rolsw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar78[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "roapa", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar83[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "sthpp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar88[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar113[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar118[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar123[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar128[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar153[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar133[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar138[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar143[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "vhm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar148[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar158[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar163[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar168[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar173[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var178[iVar1 /*5*/][iVar3] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar199[iVar3] = unk_0xCB845A663B4DD2F3(iVar0, &cVar4);
				iVar3++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar8, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_869[iVar2] = unk_0xF6EB12D7E162DA9C(uVar8[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_869[iVar2] = 5;
				}
				if (!func_250(&uVar13, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_887[iVar2] = unk_0xF6EB12D7E162DA9C(uVar13[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_887[iVar2] = 20;
				}
				if (!func_250(&uVar18, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1285[iVar2] = unk_0xF6EB12D7E162DA9C(uVar18[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1285[iVar2] = -1;
				}
				if (!func_250(&uVar23, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1303[iVar2] = unk_0xF6EB12D7E162DA9C(uVar23[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1303[iVar2] = -1;
				}
				if (!func_250(&uVar28, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1321[iVar2] = unk_0xF6EB12D7E162DA9C(uVar28[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1321[iVar2] = -1;
				}
				if (!func_250(&uVar33, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1105[iVar2] = unk_0xF6EB12D7E162DA9C(uVar33[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1105[iVar2] = 0;
				}
				if (!func_250(&uVar38, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1123[iVar2] = unk_0xF6EB12D7E162DA9C(uVar38[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1123[iVar2] = -1;
				}
				if (!func_250(&uVar43, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1141[iVar2] = unk_0xF6EB12D7E162DA9C(uVar43[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1141[iVar2] = 100;
				}
				if (!func_250(&uVar48, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10667[iVar2] = unk_0xF6EB12D7E162DA9C(uVar48[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10667[iVar2] = 0;
				}
				if (!func_250(&uVar53, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10919[iVar2] = unk_0xB496A8A1F76DD70A(uVar53[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10919[iVar2] = 0f;
				}
				if (!func_250(&uVar58, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1159[iVar2] = unk_0xF6EB12D7E162DA9C(uVar58[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1159[iVar2] = 0;
				}
				if (!func_250(&uVar63, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1177[iVar2] = unk_0xF6EB12D7E162DA9C(uVar63[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1177[iVar2] = 0;
				}
				if (!func_250(&uVar68, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1195[iVar2] = unk_0xF6EB12D7E162DA9C(uVar68[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1195[iVar2] = 0;
				}
				if (!func_250(&uVar73, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1213[iVar2] = unk_0xB496A8A1F76DD70A(uVar73[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1213[iVar2] = 0f;
				}
				if (!func_250(&uVar78, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1231[iVar2] = unk_0xF6EB12D7E162DA9C(uVar78[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1231[iVar2] = -1;
				}
				if (!func_250(&uVar83, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1249[iVar2] = unk_0xF6EB12D7E162DA9C(uVar83[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1249[iVar2] = -1;
				}
				if (!func_250(&uVar88, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1267[iVar2] = unk_0xF6EB12D7E162DA9C(uVar88[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1267[iVar2] = -2;
				}
				if (!func_250(&uVar93, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1033[iVar2] = unk_0xF6EB12D7E162DA9C(uVar93[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1033[iVar2] = 12;
				}
				if (!func_250(&uVar98, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1051[iVar2] = unk_0xF6EB12D7E162DA9C(uVar98[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1051[iVar2] = 0;
				}
				if (!func_250(&uVar103, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1069[iVar2] = unk_0xF6EB12D7E162DA9C(uVar103[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1069[iVar2] = 0;
				}
				if (!func_250(&uVar108, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1087[iVar2] = unk_0xF6EB12D7E162DA9C(uVar108[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1087[iVar2] = 0;
				}
				if (!func_200())
				{
					if (!func_250(&uVar113, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8095[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar113[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8095[iVar2 /*16*/]), "", 64);
					}
					if (!func_250(&uVar118, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7549[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar118[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7549[iVar2 /*16*/]), "", 64);
					}
					if (!func_250(&uVar123, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7822[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar123[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7822[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_250(&uVar128, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8368[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar128[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8368[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar153, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8641[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar153[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8641[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar133, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8914[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar133[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_8914[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar138, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9187[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar138[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9187[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar143, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9460[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar143[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9460[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar148, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9733[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar148[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_9733[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar158, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4588[iVar2] = unk_0xF6EB12D7E162DA9C(uVar158[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4588[iVar2] = 0;
				}
				if (!func_250(&uVar163, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4606[iVar2] = unk_0xF6EB12D7E162DA9C(uVar163[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4606[iVar2] = 0;
				}
				if (!func_250(&uVar168, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6505[iVar2] = unk_0xF6EB12D7E162DA9C(uVar168[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6505[iVar2] = Global_4456448.f_106[iVar1 /*11610*/].f_4306;
				}
				if (!func_250(&uVar173, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6523[iVar2] = unk_0xF6EB12D7E162DA9C(uVar173[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6523[iVar2] = Global_4456448.f_106[iVar1 /*11610*/].f_4568;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (Var178[iVar1 /*5*/][iVar3] != 0)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_6541[iVar2 /*5*/][iVar3] = unk_0xF6EB12D7E162DA9C(Var178[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_6541[iVar2 /*5*/][iVar3] = 0;
					}
					if (uVar199[iVar3] != 0)
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_6627[iVar3 /*16*/]), unk_0x3854C8AFB1001E7E(uVar199[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_6627[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_256(int iParam0)
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
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "destv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outbt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outclo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outclr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outmm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outfp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outsg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outbh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outhc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outilv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "outonfv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2t", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2mm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2fp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2sg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2bh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2hc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2hv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2ilv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "out2onfv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mpaib", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mpaib2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "vrach", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "vrach2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bundel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bundel2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_3 = { unk_0xB6537A31819F86E5(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar22, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_6 = { unk_0xB6537A31819F86E5(uVar22[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar27, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_10 = unk_0xB496A8A1F76DD70A(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_250(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/] = { unk_0xB6537A31819F86E5(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_9 = unk_0xB496A8A1F76DD70A(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2731[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_250(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_19 = unk_0xF6EB12D7E162DA9C(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_250(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_17 = unk_0xF6EB12D7E162DA9C(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_250(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_33 = unk_0xF6EB12D7E162DA9C(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_250(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_18 = unk_0xF6EB12D7E162DA9C(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_250(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_20 = unk_0xF6EB12D7E162DA9C(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_250(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_23 = unk_0xF6EB12D7E162DA9C(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_250(&uVar97, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_24 = unk_0xB496A8A1F76DD70A(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_24 = 5f;
				}
				if (!func_250(&uVar102, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_25 = unk_0xB496A8A1F76DD70A(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_25 = 10f;
				}
				if (!func_250(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_34 = unk_0xF6EB12D7E162DA9C(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_250(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_34 = unk_0xF6EB12D7E162DA9C(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_250(&uVar107, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_26 = unk_0xB496A8A1F76DD70A(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_26 = 30f;
				}
				if (!func_250(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_30 = unk_0xF6EB12D7E162DA9C(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_250(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_30 = unk_0xF6EB12D7E162DA9C(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_250(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_31 = unk_0xF6EB12D7E162DA9C(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_250(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_31 = unk_0xF6EB12D7E162DA9C(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_250(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_32 = unk_0xF6EB12D7E162DA9C(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_250(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_32 = unk_0xF6EB12D7E162DA9C(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_250(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_27 = unk_0xF6EB12D7E162DA9C(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_250(&uVar117, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_28 = unk_0xF6EB12D7E162DA9C(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_250(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_35 = unk_0xF6EB12D7E162DA9C(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_250(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_29 = unk_0xF6EB12D7E162DA9C(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_250(&uVar127, 2, iVar1, iVar2) && !func_250(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_21 = unk_0xF6EB12D7E162DA9C(uVar127[iVar1], iVar2);
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_22 = unk_0xF6EB12D7E162DA9C(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_250(&uVar212, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_19 = unk_0xF6EB12D7E162DA9C(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_250(&uVar217, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_17 = unk_0xF6EB12D7E162DA9C(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_250(&uVar222, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_33 = unk_0xF6EB12D7E162DA9C(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_250(&uVar227, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_18 = unk_0xF6EB12D7E162DA9C(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_250(&uVar232, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_20 = unk_0xF6EB12D7E162DA9C(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_250(&uVar237, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_23 = unk_0xF6EB12D7E162DA9C(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_250(&uVar242, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_27 = unk_0xF6EB12D7E162DA9C(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_250(&uVar247, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_28 = unk_0xF6EB12D7E162DA9C(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_250(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_35 = unk_0xF6EB12D7E162DA9C(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_250(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_29 = unk_0xF6EB12D7E162DA9C(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_250(&uVar257, 2, iVar1, iVar2) && !func_250(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_21 = unk_0xF6EB12D7E162DA9C(uVar257[iVar1], iVar2);
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_22 = unk_0xF6EB12D7E162DA9C(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_250(&uVar47, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_3 = { unk_0xB6537A31819F86E5(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar52, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_6 = { unk_0xB6537A31819F86E5(uVar52[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar57, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_10 = unk_0xB496A8A1F76DD70A(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_250(&uVar62, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_13 = { unk_0xB6537A31819F86E5(uVar62[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar37, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/] = { unk_0xB6537A31819F86E5(uVar37[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar42, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_9 = unk_0xB496A8A1F76DD70A(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_250(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1505[iVar2 /*36*/].f_16 = unk_0xF6EB12D7E162DA9C(uVar32[iVar1], iVar2);
				}
				if (!func_250(&uVar207, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_13 = { unk_0xB6537A31819F86E5(uVar207[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar182, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/] = { unk_0xB6537A31819F86E5(uVar182[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar192, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_3 = { unk_0xB6537A31819F86E5(uVar192[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar187, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_6 = { unk_0xB6537A31819F86E5(uVar187[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_10 = unk_0xB496A8A1F76DD70A(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_250(&uVar197, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_9 = unk_0xB496A8A1F76DD70A(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_250(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_2118[iVar2 /*36*/].f_16 = unk_0xF6EB12D7E162DA9C(uVar177[iVar1], iVar2);
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_257(int iParam0)
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
	int iVar112;
	int iVar113;
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "siat", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "stiamt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2t", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar112 = 0;
			while (iVar112 <= 121)
			{
				if (uVar7[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar7[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_65[iVar112] = unk_0xF6EB12D7E162DA9C(uVar7[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_65[iVar112] = 0;
				}
				if (uVar12[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar12[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_331[iVar112] = unk_0xF6EB12D7E162DA9C(uVar12[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_331[iVar112] = 0;
				}
				if (uVar17[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar17[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_596[iVar112] = unk_0xF6EB12D7E162DA9C(uVar17[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_596[iVar112] = 0;
				}
				if (uVar37[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar37[iVar1], iVar112) == 3)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_201[iVar112] = unk_0xB496A8A1F76DD70A(uVar37[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_201[iVar112] = 1f;
				}
				if (uVar42[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar42[iVar1], iVar112) == 3)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_467[iVar112] = unk_0xB496A8A1F76DD70A(uVar42[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_467[iVar112] = 1f;
				}
				if (uVar47[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar47[iVar1], iVar112) == 3)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_732[iVar112] = unk_0xB496A8A1F76DD70A(uVar47[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_732[iVar112] = 1f;
				}
				iVar112++;
			}
			iVar112 = 0;
			while (iVar112 <= 11)
			{
				if (uVar22[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar22[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_188[iVar112] = unk_0xF6EB12D7E162DA9C(uVar22[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_188[iVar112] = 0;
				}
				if (uVar27[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar27[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_454[iVar112] = unk_0xF6EB12D7E162DA9C(uVar27[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_454[iVar112] = 0;
				}
				if (uVar32[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar32[iVar1], iVar112) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_719[iVar112] = unk_0xF6EB12D7E162DA9C(uVar32[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_719[iVar112] = 0;
				}
				iVar112++;
			}
			iVar113 = 0;
			while (iVar113 <= 3)
			{
				if (uVar52[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar52[iVar1], iVar113) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_859[iVar113] = unk_0xF6EB12D7E162DA9C(uVar52[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_859[iVar113] = -1;
				}
				if (uVar57[iVar1] != 0 && unk_0xB988B7EA5B6DE257(uVar57[iVar1], iVar113) == 2)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_864[iVar113] = unk_0xF6EB12D7E162DA9C(uVar57[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_864[iVar113] = -1;
				}
				iVar113++;
			}
			StringCopy(&cVar3, "icmsk1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "icmsk2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "icmsk3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "itpreqs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ivmsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "isvmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "isvro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "isvhr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11159[iVar2] = unk_0xF6EB12D7E162DA9C(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11159[iVar2] = 0;
				}
				if (!func_250(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11177[iVar2] = unk_0xF6EB12D7E162DA9C(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11177[iVar2] = 0;
				}
				if (!func_250(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11195[iVar2] = unk_0xF6EB12D7E162DA9C(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11195[iVar2] = 0;
				}
				if (!func_250(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11301[iVar2] = unk_0xF6EB12D7E162DA9C(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11301[iVar2] = 0;
				}
				if (!func_250(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10685[iVar2] = unk_0xF6EB12D7E162DA9C(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10685[iVar2] = 0;
				}
				if (!func_250(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10703[iVar2] = unk_0xF6EB12D7E162DA9C(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10703[iVar2] = 0;
				}
				if (!func_250(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10721[iVar2] = unk_0xF6EB12D7E162DA9C(uVar92[iVar1], iVar2);
					if (Global_4456448.f_106[iVar1 /*11610*/].f_10721[iVar2] == 0)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_10721[iVar2] = -1;
					}
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10721[iVar2] = -1;
				}
				if (!func_250(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10829[iVar2] = unk_0xF6EB12D7E162DA9C(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10829[iVar2] = -1;
				}
				if (!func_250(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10847[iVar2] = unk_0xF6EB12D7E162DA9C(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10847[iVar2] = -1;
				}
				if (!func_250(&uVar107, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10865[iVar2] = unk_0xF6EB12D7E162DA9C(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10865[iVar2] = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_258(int iParam0)
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
	int iVar329;
	int iVar330;
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar14[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "sudtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar19[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar24[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar29[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar34[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar39[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar44[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar49[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar54[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar59[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar64[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar74[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar69[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar79[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wlreq", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mxwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dsosui", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dops", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "dovd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar224[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar229[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "drph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar234[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar239[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "irfbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar244[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "plvrl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar249[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "hdmfp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "hddstra", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar294[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar7 = true;
				uVar254[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar259[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar264[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar269[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar274[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar299[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar304[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar309[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			}
			StringCopy(&cVar3, "rnrbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "cojr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			StringCopy(&cVar3, "cojc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar324[iVar1] = unk_0xCB845A663B4DD2F3(iVar0, &cVar3);
			iVar329 = unk_0xCB845A663B4DD2F3(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_106[iVar1 /*11610*/].f_59 - 1))
			{
				if (!func_250(&uVar14, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_961[iVar2] = unk_0xF6EB12D7E162DA9C(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_961[iVar2] = 0;
				}
				if (!func_250(&uVar19, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_979[iVar2] = unk_0xF6EB12D7E162DA9C(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_979[iVar2] = 0;
				}
				if (!func_250(&uVar24, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4570[iVar2] = unk_0xF6EB12D7E162DA9C(uVar24[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4570[iVar2] = 0;
				}
				if (!func_250(&uVar34, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4642[iVar2] = unk_0xF6EB12D7E162DA9C(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4642[iVar2] = 0;
				}
				if (!func_250(&uVar39, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4660[iVar2] = unk_0xF6EB12D7E162DA9C(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4660[iVar2] = 0;
				}
				if (!func_250(&uVar29, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_6730[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar29[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_6730[iVar2 /*16*/]), "", 64);
				}
				if (!func_250(&uVar44, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_905[iVar2] = unk_0xF6EB12D7E162DA9C(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_905[iVar2] = 0;
				}
				if (!func_250(&uVar49, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_923[iVar2] = unk_0xF6EB12D7E162DA9C(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_923[iVar2] = 0;
				}
				if (Global_4456448.f_106[iVar1 /*11610*/].f_923[iVar2] == 0)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_923[iVar2] = -1;
				}
				if (!func_250(&uVar54, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_943[iVar2] = unk_0xF6EB12D7E162DA9C(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_943[iVar2] = 0;
				}
				if (!func_250(&uVar74, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4696[iVar2] = unk_0xF6EB12D7E162DA9C(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4696[iVar2] = 0;
				}
				if (!func_250(&uVar69, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4678[iVar2] = unk_0xF6EB12D7E162DA9C(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4678[iVar2] = 0;
				}
				if (!func_250(&uVar79, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4718[iVar2] = unk_0xF6EB12D7E162DA9C(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4718[iVar2] = 0;
				}
				if (!func_250(&uVar84, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4736[iVar2] = unk_0xF6EB12D7E162DA9C(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4736[iVar2] = -2;
				}
				if (!func_250(&uVar89, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4754[iVar2] = unk_0xF6EB12D7E162DA9C(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4754[iVar2] = 1;
				}
				if (!func_250(&uVar94, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4774[iVar2] = unk_0xF6EB12D7E162DA9C(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4774[iVar2] = 10000;
				}
				if (!func_250(&uVar99, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4810[iVar2] = unk_0xF6EB12D7E162DA9C(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4810[iVar2] = -1;
				}
				if (!func_250(&uVar59, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1339[iVar2] = unk_0xF6EB12D7E162DA9C(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1339[iVar2] = 0;
				}
				if (!func_250(&uVar64, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1357[iVar2] = unk_0xF6EB12D7E162DA9C(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1357[iVar2] = 0;
				}
				if (!func_250(&uVar149, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1411[iVar2] = unk_0xF6EB12D7E162DA9C(uVar149[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1411[iVar2] = 0;
				}
				if (!func_250(&uVar154, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1429[iVar2] = unk_0xF6EB12D7E162DA9C(uVar154[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1429[iVar2] = 0;
				}
				if (!func_250(&uVar104, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1375[iVar2] = unk_0xF6EB12D7E162DA9C(uVar104[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1375[iVar2] = -1;
				}
				if (!func_250(&uVar109, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1393[iVar2] = unk_0xF6EB12D7E162DA9C(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1393[iVar2] = -1;
				}
				if (!func_250(&uVar119, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4792[iVar2] = unk_0xF6EB12D7E162DA9C(uVar119[iVar1], iVar2);
				}
				else if (iVar329 != 0)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4792[iVar2] = unk_0xF6EB12D7E162DA9C(iVar329, iVar1);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4792[iVar2] = 0;
				}
				if (!func_250(&uVar114, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1465[iVar2] = unk_0xF6EB12D7E162DA9C(uVar114[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1465[iVar2] = -1;
				}
				if (!func_250(&uVar284, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1015[iVar2] = unk_0xF6EB12D7E162DA9C(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1015[iVar2] = 0;
				}
				if (!func_250(&uVar279, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_997[iVar2] = unk_0xF6EB12D7E162DA9C(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_997[iVar2] = 0;
				}
				if (!func_250(&uVar124, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1447[iVar2] = unk_0xF6EB12D7E162DA9C(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1447[iVar2] = 0;
				}
				if (!func_250(&uVar129, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1483[iVar2] = unk_0xF6EB12D7E162DA9C(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_1483[iVar2] = 0;
				}
				if (!func_250(&uVar134, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10266[iVar2] = unk_0xF6EB12D7E162DA9C(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10266[iVar2] = 0;
				}
				if (!func_250(&uVar139, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10284[iVar2] = unk_0xF6EB12D7E162DA9C(uVar139[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10284[iVar2] = 0;
				}
				if (!func_250(&uVar144, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10302[iVar2] = unk_0xF6EB12D7E162DA9C(uVar144[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10302[iVar2] = 0;
				}
				if (!func_250(&uVar159, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5221[iVar2 /*3*/] = { unk_0xB6537A31819F86E5(uVar159[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5221[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_200())
				{
					if (!func_250(&uVar164, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7003[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(uVar164[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_7003[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_250(&uVar169, 5, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5273[iVar2 /*3*/] = { unk_0xB6537A31819F86E5(uVar169[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5273[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_250(&uVar174, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5361[iVar2] = unk_0xF6EB12D7E162DA9C(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5361[iVar2] = 0;
				}
				if (func_254())
				{
					if (Global_4456448.f_106[iVar1 /*11610*/].f_5361[iVar2] != 1)
					{
						Global_4456448.f_106[iVar1 /*11610*/].f_5361[iVar2] = 6;
					}
				}
				if (!func_250(&uVar179, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5397[iVar2] = unk_0xF6EB12D7E162DA9C(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5397[iVar2] = 0;
				}
				if (!func_250(&uVar239, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4828[iVar2] = unk_0xF6EB12D7E162DA9C(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_4828[iVar2] = 0;
				}
				if (!func_250(&uVar229, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5325[iVar2] = unk_0xB496A8A1F76DD70A(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5325[iVar2] = 0f;
				}
				if (!func_250(&uVar234, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5343[iVar2] = unk_0xB496A8A1F76DD70A(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5343[iVar2] = 0.001f;
				}
				if (!func_250(&uVar244, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6483[iVar2] = unk_0xF6EB12D7E162DA9C(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_6483[iVar2] = 0;
				}
				if (!func_250(&uVar249, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_39[iVar2] = unk_0xF6EB12D7E162DA9C(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_39[iVar2] = -1;
				}
				if (bVar7)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][0] = unk_0xF6EB12D7E162DA9C(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][1] = unk_0xF6EB12D7E162DA9C(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][2] = unk_0xF6EB12D7E162DA9C(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][3] = unk_0xF6EB12D7E162DA9C(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10039[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][0] = unk_0xF6EB12D7E162DA9C(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][1] = unk_0xF6EB12D7E162DA9C(uVar304[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][2] = unk_0xF6EB12D7E162DA9C(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10143[iVar2 /*4*/][2] = -1;
				}
				if (!func_250(&uVar314, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10212[iVar2] = unk_0xF6EB12D7E162DA9C(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10212[iVar2] = 0;
				}
				if (!func_250(&uVar319, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10230[iVar2] = unk_0xF6EB12D7E162DA9C(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10230[iVar2] = -1;
				}
				if (!func_250(&uVar324, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10248[iVar2] = unk_0xF6EB12D7E162DA9C(uVar324[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10248[iVar2] = 0;
				}
				iVar330 = Global_4456448.f_106[iVar1 /*11610*/].f_59;
				while (iVar330 <= 31)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar1 /*11610*/].f_10212[iVar2], iVar330))
					{
						unk_0x3B76114EC84D5812(&(Global_4456448.f_106[iVar1 /*11610*/].f_10212[iVar2]), iVar330);
					}
					iVar330++;
				}
				if (!func_250(&uVar289, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10649[iVar2] = unk_0xF6EB12D7E162DA9C(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10649[iVar2] = 0;
				}
				if (!func_250(&uVar294, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11213[iVar2] = unk_0xF6EB12D7E162DA9C(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_11213[iVar2] = 0;
				}
				if (!func_250(&uVar184, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5379[iVar2] = unk_0xF6EB12D7E162DA9C(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5379[iVar2] = -1;
				}
				if (!func_250(&uVar189, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5415[iVar2] = unk_0xB496A8A1F76DD70A(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5415[iVar2] = -1f;
				}
				if (!func_250(&uVar194, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5433[iVar2] = unk_0xB496A8A1F76DD70A(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5433[iVar2] = -1f;
				}
				if (!func_250(&uVar199, 3, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5451[iVar2] = unk_0xB496A8A1F76DD70A(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5451[iVar2] = 1f;
				}
				if (!func_250(&uVar204, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5489[iVar2] = unk_0xF6EB12D7E162DA9C(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5489[iVar2] = 0;
				}
				if (!func_250(&uVar209, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5471[iVar2] = unk_0xF6EB12D7E162DA9C(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_5471[iVar2] = 0;
				}
				if (!func_250(&uVar214, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10518[iVar2] = unk_0xF6EB12D7E162DA9C(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10518[iVar2] = 0;
				}
				if (!func_250(&uVar219, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10536[iVar2] = unk_0xF6EB12D7E162DA9C(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10536[iVar2] = -1;
				}
				if (!func_250(&uVar224, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10554[iVar2] = unk_0xF6EB12D7E162DA9C(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10554[iVar2] = 0;
				}
				if (!func_250(&uVar274, 2, iVar1, iVar2))
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10125[iVar2] = unk_0xF6EB12D7E162DA9C(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_106[iVar1 /*11610*/].f_10125[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_259(int iParam0)
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
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50;
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
	var uVar75[10];
	int iVar86;
	char[] cVar87[8];
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar0, "numpt");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar0, "ptint");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar0, "pptint");
	bVar7 = true;
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0xCB845A663B4DD2F3(iVar0, "mnumpt");
	}
	iVar8 = unk_0xCB845A663B4DD2F3(iVar0, "tcp");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar0, "tcr");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar0, "abits");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar0, "sdobs");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar0, "edobs");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar0, "dogps");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar0, "teamv");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar0, "ireveh");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar0, "teamrvc");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar0, "teamrvbh");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar0, "teamrvcs");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar0, "teamrvp");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar0, "mcvbs");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar0, "mcobs");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar0, "mcpbs");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar0, "mcgbs");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar0, "rpgbs");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar0, "mcpbs1");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar0, "mcpbs2");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar0, "mcpbs3");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar0, "mcgbs1");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar0, "mcgbs2");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar0, "mcgbs3");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar0, "rpgbs1");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar0, "rpgbs2");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar0, "rpgbs3");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar0, "inpts");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar0, "ldsf1");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar0, "ldsf2");
	iVar37 = 1;
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tehlh") == 7)
	{
		iVar38 = unk_0xCB845A663B4DD2F3(iVar0, "tehlh");
		iVar37 = 1;
	}
	else
	{
		iVar37 = 0;
	}
	iVar39 = unk_0xCB845A663B4DD2F3(iVar0, "tehrn");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar0, "spsy1");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar0, "spsy2");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar0, "tenms");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar0, "tmwntd");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar0, "tmfrcwp");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar0, "csttn");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar0, "cstrn");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar0, "nrl");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar0, "tstrt");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar0, "tstop");
	uVar50 = unk_0xCB845A663B4DD2F3(iVar0, "sms");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar0, "tblpv1");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar0, "tblpv2");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar0, "tblpv3");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar0, "tblpv4");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar0, "thudv1");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar0, "thudv2");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar0, "thudv3");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar0, "thudv4");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar0, "thlb1");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar0, "thlb2");
	iVar61 = unk_0xCB845A663B4DD2F3(iVar0, "thlb3");
	iVar62 = unk_0xCB845A663B4DD2F3(iVar0, "thlb4");
	iVar63 = unk_0xCB845A663B4DD2F3(iVar0, "rcst1q");
	iVar64 = unk_0xCB845A663B4DD2F3(iVar0, "rcst2q");
	iVar65 = unk_0xCB845A663B4DD2F3(iVar0, "rcst3q");
	iVar66 = unk_0xCB845A663B4DD2F3(iVar0, "rcst4q");
	iVar67 = unk_0xCB845A663B4DD2F3(iVar0, "tvmt");
	iVar68 = unk_0xCB845A663B4DD2F3(iVar0, "tvma");
	iVar69 = unk_0xCB845A663B4DD2F3(iVar0, "tvmac");
	iVar70 = unk_0xCB845A663B4DD2F3(iVar0, "tvmet");
	iVar71 = unk_0xCB845A663B4DD2F3(iVar0, "tvmBomb");
	iVar72 = unk_0xCB845A663B4DD2F3(iVar0, "tvmspoil");
	iVar73 = unk_0xCB845A663B4DD2F3(iVar0, "tvmCMO1");
	iVar74 = unk_0xCB845A663B4DD2F3(iVar0, "tvmCMO2");
	iVar1 = 0;
	while (iVar1 <= (unk_0x6B06CA8F004A94A0(uVar50) - 1))
	{
		uVar75[iVar1] = unk_0x3FB03F18D2FA9F6D(iVar50, iVar1);
		Global_4456448.f_47441[iVar1 /*40*/] = unk_0xEE6F60A09902D357(uVar75[iVar1], "team");
		Global_4456448.f_47441[iVar1 /*40*/].f_1 = unk_0xEE6F60A09902D357(uVar75[iVar1], "smsdt");
		Global_4456448.f_47441[iVar1 /*40*/].f_2 = unk_0xEE6F60A09902D357(uVar75[iVar1], "rule");
		Global_4456448.f_47441[iVar1 /*40*/].f_3 = unk_0xEE6F60A09902D357(uVar75[iVar1], "time");
		iVar86 = 0;
		while (iVar86 <= 1)
		{
			StringCopy(&cVar87, "txt", 8);
			StringIntConCat(&cVar87, iVar86, 8);
			if (unk_0x1D22B93425E4D657(uVar75[iVar1], &cVar87) == 4)
			{
				StringCopy(&(Global_4456448.f_47441[iVar1 /*40*/].f_6[iVar86 /*16*/]), unk_0x2B36163AFF2C657B(uVar75[iVar1], &cVar87), 64);
			}
			iVar86++;
		}
		Global_4456448.f_47441[iVar1 /*40*/].f_5 = unk_0xEE6F60A09902D357(uVar75[iVar1], "delay");
		Global_4456448.f_47441[iVar1 /*40*/].f_39 = unk_0xEE6F60A09902D357(uVar75[iVar1], "sndall");
		Global_4456448.f_47441[iVar1 /*40*/].f_4 = unk_0xEE6F60A09902D357(uVar75[iVar1], "ptsreq");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0xF6EB12D7E162DA9C(iVar14, iVar1);
				Global_4456448.f_60605[iVar1] = uVar2;
			}
			else
			{
				Global_4456448.f_60605[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_46557[iVar1] = unk_0xF6EB12D7E162DA9C(iVar15, iVar1);
			}
			else
			{
				Global_4456448.f_46557[iVar1] = -1;
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_60653[iVar1] = unk_0xF6EB12D7E162DA9C(iVar16, iVar1);
			}
			else
			{
				Global_4456448.f_60653[iVar1] = -1;
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_60668[iVar1] = unk_0xF6EB12D7E162DA9C(iVar17, iVar1);
			}
			else
			{
				Global_4456448.f_60668[iVar1] = 1001;
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_60663[iVar1] = unk_0xF6EB12D7E162DA9C(iVar18, iVar1);
			}
			else
			{
				Global_4456448.f_60663[iVar1] = -1;
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_60648[iVar1] = unk_0xF6EB12D7E162DA9C(iVar19, iVar1);
			}
			else
			{
				Global_4456448.f_60648[iVar1] = 0;
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_44[iVar1] = unk_0xF6EB12D7E162DA9C(iVar3, iVar1);
			}
			if (Global_4456448.f_44[iVar1] < 1)
			{
				Global_4456448.f_44[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				if ((func_71(Global_4456448.f_190930) && Global_262145.f_20702) && !Global_1653164)
				{
					Global_4456448.f_48304[iVar1] = 4;
				}
				else
				{
					Global_4456448.f_48304[iVar1] = unk_0xF6EB12D7E162DA9C(iVar4, iVar1);
				}
			}
			else
			{
				Global_4456448.f_48304[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				if ((func_71(Global_4456448.f_190930) && Global_262145.f_20702) && !Global_1653164)
				{
					Global_4456448.f_48309[iVar1] = 1;
				}
				else
				{
					Global_4456448.f_48309[iVar1] = unk_0xF6EB12D7E162DA9C(iVar5, iVar1);
				}
			}
			else
			{
				Global_4456448.f_48309[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_4456448.f_49[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_4456448.f_49[iVar1] = unk_0xF6EB12D7E162DA9C(iVar6, iVar1);
				}
				if (Global_4456448.f_49[iVar1] < 0)
				{
					Global_4456448.f_49[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4 = { unk_0xB6537A31819F86E5(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_7 = { unk_0xB6537A31819F86E5(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_1501 = unk_0xF6EB12D7E162DA9C(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_1502 = unk_0xF6EB12D7E162DA9C(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_1503 = unk_0xF6EB12D7E162DA9C(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_1504 = unk_0xF6EB12D7E162DA9C(iVar13, iVar1);
			}
			if ((iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar1) == 2) && iVar35 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_941 = unk_0xF6EB12D7E162DA9C(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_941 = 0;
			}
			if ((iVar36 != 0 && unk_0xB988B7EA5B6DE257(iVar36, iVar1) == 2) && iVar36 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_942 = unk_0xF6EB12D7E162DA9C(iVar36, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_942 = 0;
			}
			if (iVar20 != 0)
			{
				Global_4456448.f_47431[iVar1] = unk_0xF6EB12D7E162DA9C(iVar20, iVar1);
			}
			if (iVar21 != 0 && unk_0xB988B7EA5B6DE257(iVar21, iVar1) == 2)
			{
				Global_4456448.f_47436[iVar1] = unk_0xF6EB12D7E162DA9C(iVar21, iVar1);
			}
			else
			{
				Global_4456448.f_47436[iVar1] = 0;
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_47414[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar22, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_47414[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_47414[iVar1 /*4*/][1] = unk_0xF6EB12D7E162DA9C(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_47414[iVar1 /*4*/][2] = unk_0xF6EB12D7E162DA9C(iVar27, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_47397[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar23, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_47397[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_47397[iVar1 /*4*/][1] = unk_0xF6EB12D7E162DA9C(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_47397[iVar1 /*4*/][2] = unk_0xF6EB12D7E162DA9C(iVar30, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_47380[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar24, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_47380[iVar1 /*4*/][0] = unk_0xF6EB12D7E162DA9C(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_47380[iVar1 /*4*/][1] = unk_0xF6EB12D7E162DA9C(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_47380[iVar1 /*4*/][2] = unk_0xF6EB12D7E162DA9C(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_46598[iVar1] = unk_0xF6EB12D7E162DA9C(iVar34, iVar1);
			}
			if (iVar37 && iVar38 != 0)
			{
				Global_4456448.f_46630[iVar1] = unk_0xF6EB12D7E162DA9C(iVar38, iVar1);
			}
			else
			{
				Global_4456448.f_46630[iVar1] = 3;
			}
			if (iVar39 != 0 && unk_0xB988B7EA5B6DE257(iVar39, iVar1) == 2)
			{
				Global_4456448.f_46635[iVar1] = unk_0xF6EB12D7E162DA9C(iVar39, iVar1);
			}
			if (iVar67 != 0 && unk_0xB988B7EA5B6DE257(iVar67, iVar1) == 2)
			{
				Global_4456448.f_46650[iVar1] = unk_0xF6EB12D7E162DA9C(iVar67, iVar1);
			}
			if (iVar68 != 0 && unk_0xB988B7EA5B6DE257(iVar68, iVar1) == 2)
			{
				Global_4456448.f_46655[iVar1] = unk_0xF6EB12D7E162DA9C(iVar68, iVar1);
			}
			if (iVar69 != 0 && unk_0xB988B7EA5B6DE257(iVar69, iVar1) == 2)
			{
				Global_4456448.f_46660[iVar1] = unk_0xF6EB12D7E162DA9C(iVar69, iVar1);
			}
			if (iVar70 != 0 && unk_0xB988B7EA5B6DE257(iVar70, iVar1) == 2)
			{
				Global_4456448.f_46665[iVar1] = unk_0xF6EB12D7E162DA9C(iVar70, iVar1);
			}
			if (iVar71 != 0 && unk_0xB988B7EA5B6DE257(iVar71, iVar1) == 2)
			{
				Global_4456448.f_46680[iVar1] = unk_0xF6EB12D7E162DA9C(iVar71, iVar1);
			}
			if (iVar72 != 0 && unk_0xB988B7EA5B6DE257(iVar72, iVar1) == 2)
			{
				Global_4456448.f_46685[iVar1] = unk_0xF6EB12D7E162DA9C(iVar72, iVar1);
			}
			if (iVar73 != 0 && unk_0xB988B7EA5B6DE257(iVar73, iVar1) == 2)
			{
				Global_4456448.f_46670[iVar1] = unk_0xF6EB12D7E162DA9C(iVar73, iVar1);
			}
			if (iVar74 != 0 && unk_0xB988B7EA5B6DE257(iVar74, iVar1) == 2)
			{
				Global_4456448.f_46675[iVar1] = unk_0xF6EB12D7E162DA9C(iVar74, iVar1);
			}
			if (iVar40 != 0)
			{
				StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_10006[0 /*16*/]), unk_0x3854C8AFB1001E7E(iVar40, iVar1), 64);
			}
			if (iVar41 != 0)
			{
				StringCopy(&(Global_4456448.f_106[iVar1 /*11610*/].f_10006[1 /*16*/]), unk_0x3854C8AFB1001E7E(iVar41, iVar1), 64);
			}
			if (iVar42 != 0)
			{
				Global_4456448.f_46603[iVar1] = unk_0xF6EB12D7E162DA9C(iVar42, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_4456448.f_46640[iVar1] = unk_0xF6EB12D7E162DA9C(iVar43, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_46645[iVar1] = unk_0xF6EB12D7E162DA9C(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				StringCopy(&(Global_4456448.f_46608[iVar1 /*4*/]), unk_0x3854C8AFB1001E7E(iVar45, iVar1), 16);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_46625[iVar1] = unk_0xF6EB12D7E162DA9C(iVar46, iVar1);
			}
			if ((iVar48 != 0 && unk_0xB988B7EA5B6DE257(iVar48, iVar1) == 2) && iVar48 != 0)
			{
				Global_4456448.f_166563[iVar1] = unk_0xF6EB12D7E162DA9C(iVar48, iVar1);
			}
			if ((iVar49 != 0 && unk_0xB988B7EA5B6DE257(iVar49, iVar1) == 2) && iVar49 != 0)
			{
				Global_4456448.f_166568[iVar1] = unk_0xF6EB12D7E162DA9C(iVar49, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_59 = unk_0xF6EB12D7E162DA9C(iVar47, iVar1);
			}
			if (iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6692 = unk_0xF6EB12D7E162DA9C(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6692 = 0;
			}
			if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6693 = unk_0xF6EB12D7E162DA9C(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6693 = 0;
			}
			if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6694 = unk_0xF6EB12D7E162DA9C(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6694 = 0;
			}
			if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6695 = unk_0xF6EB12D7E162DA9C(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6695 = 0;
			}
			if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6696 = unk_0xF6EB12D7E162DA9C(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6696 = 0;
			}
			if (iVar56 != 0 && unk_0xB988B7EA5B6DE257(iVar56, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6697 = unk_0xF6EB12D7E162DA9C(iVar56, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6697 = 0;
			}
			if (iVar57 != 0 && unk_0xB988B7EA5B6DE257(iVar57, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6698 = unk_0xF6EB12D7E162DA9C(iVar57, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6698 = 0;
			}
			if (iVar58 != 0 && unk_0xB988B7EA5B6DE257(iVar58, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6699 = unk_0xF6EB12D7E162DA9C(iVar58, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6699 = 0;
			}
			if (iVar59 != 0 && unk_0xB988B7EA5B6DE257(iVar59, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6700 = unk_0xF6EB12D7E162DA9C(iVar59, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6700 = 0;
			}
			if (iVar60 != 0 && unk_0xB988B7EA5B6DE257(iVar60, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6701 = unk_0xF6EB12D7E162DA9C(iVar60, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6701 = 0;
			}
			if (iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6702 = unk_0xF6EB12D7E162DA9C(iVar61, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6702 = 0;
			}
			if (iVar62 != 0 && unk_0xB988B7EA5B6DE257(iVar62, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6703 = unk_0xF6EB12D7E162DA9C(iVar62, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6703 = 0;
			}
			if (iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6704 = unk_0xF6EB12D7E162DA9C(iVar63, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6704 = 0;
			}
			if (iVar64 != 0 && unk_0xB988B7EA5B6DE257(iVar64, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6705 = unk_0xF6EB12D7E162DA9C(iVar64, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6705 = 0;
			}
			if (iVar65 != 0 && unk_0xB988B7EA5B6DE257(iVar65, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6706 = unk_0xF6EB12D7E162DA9C(iVar65, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6706 = 0;
			}
			if (iVar66 != 0 && unk_0xB988B7EA5B6DE257(iVar66, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6707 = unk_0xF6EB12D7E162DA9C(iVar66, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6707 = 0;
			}
		}
		iVar1++;
	}
}

void func_260(int iParam0)
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
	
	iVar0 = unk_0x7408DCBD37A2C60F(*iParam0, "endcon");
	iVar2 = unk_0xCB845A663B4DD2F3(iVar0, "stpos");
	iVar3 = unk_0xCB845A663B4DD2F3(iVar0, "delr");
	iVar4 = unk_0xCB845A663B4DD2F3(iVar0, "epos");
	iVar5 = unk_0xCB845A663B4DD2F3(iVar0, "endr");
	iVar6 = unk_0xCB845A663B4DD2F3(iVar0, "vareapos");
	iVar7 = unk_0xCB845A663B4DD2F3(iVar0, "arear");
	iVar8 = unk_0xCB845A663B4DD2F3(iVar0, "time");
	iVar9 = unk_0xCB845A663B4DD2F3(iVar0, "plkr");
	iVar10 = unk_0xCB845A663B4DD2F3(iVar0, "pekr");
	iVar11 = unk_0xCB845A663B4DD2F3(iVar0, "vhkr");
	iVar12 = unk_0xCB845A663B4DD2F3(iVar0, "obkr");
	iVar13 = unk_0xCB845A663B4DD2F3(iVar0, "dr");
	iVar14 = unk_0xCB845A663B4DD2F3(iVar0, "pedr");
	iVar15 = unk_0xCB845A663B4DD2F3(iVar0, "vedr");
	iVar16 = unk_0xCB845A663B4DD2F3(iVar0, "obdr");
	iVar17 = unk_0xCB845A663B4DD2F3(iVar0, "lwmbs");
	iVar18 = unk_0xCB845A663B4DD2F3(iVar0, "flmbs");
	iVar19 = unk_0xCB845A663B4DD2F3(iVar0, "vdoibs");
	iVar20 = unk_0xCB845A663B4DD2F3(iVar0, "vdohu");
	iVar21 = unk_0xCB845A663B4DD2F3(iVar0, "tmbts");
	iVar22 = unk_0xCB845A663B4DD2F3(iVar0, "tmbt2");
	iVar23 = unk_0xCB845A663B4DD2F3(iVar0, "tmbt3");
	iVar24 = unk_0xCB845A663B4DD2F3(iVar0, "tmbt4");
	iVar25 = unk_0xCB845A663B4DD2F3(iVar0, "swmbs");
	iVar26 = unk_0xCB845A663B4DD2F3(iVar0, "gbmbs");
	iVar27 = unk_0xCB845A663B4DD2F3(iVar0, "pcbd");
	iVar28 = unk_0xCB845A663B4DD2F3(iVar0, "lwbs");
	iVar29 = unk_0xCB845A663B4DD2F3(iVar0, "wodia");
	iVar30 = unk_0xCB845A663B4DD2F3(iVar0, "repcr");
	iVar31 = unk_0xCB845A663B4DD2F3(iVar0, "woabs");
	iVar32 = unk_0xCB845A663B4DD2F3(iVar0, "fwoabs");
	iVar33 = unk_0xCB845A663B4DD2F3(iVar0, "fail");
	iVar34 = unk_0xCB845A663B4DD2F3(iVar0, "vehrsp");
	iVar35 = unk_0xCB845A663B4DD2F3(iVar0, "rilmvbs");
	iVar36 = unk_0xCB845A663B4DD2F3(iVar0, "spit");
	iVar37 = unk_0xCB845A663B4DD2F3(iVar0, "pglr");
	iVar38 = unk_0xCB845A663B4DD2F3(iVar0, "nora");
	iVar39 = unk_0xCB845A663B4DD2F3(iVar0, "mtlr");
	iVar40 = unk_0xCB845A663B4DD2F3(iVar0, "mslr");
	iVar41 = unk_0xCB845A663B4DD2F3(iVar0, "mlpl");
	iVar42 = unk_0xCB845A663B4DD2F3(iVar0, "mlpd");
	iVar43 = unk_0xCB845A663B4DD2F3(iVar0, "mlpm");
	iVar44 = unk_0xCB845A663B4DD2F3(iVar0, "plyl");
	iVar45 = unk_0xCB845A663B4DD2F3(iVar0, "shd");
	iVar46 = unk_0xCB845A663B4DD2F3(iVar0, "spar");
	iVar47 = unk_0xCB845A663B4DD2F3(iVar0, "2spar");
	iVar48 = unk_0xCB845A663B4DD2F3(iVar0, "boud");
	iVar49 = unk_0xCB845A663B4DD2F3(iVar0, "bla");
	iVar50 = unk_0xCB845A663B4DD2F3(iVar0, "wla");
	iVar51 = unk_0xCB845A663B4DD2F3(iVar0, "patm");
	iVar52 = unk_0xCB845A663B4DD2F3(iVar0, "bnd2");
	iVar53 = unk_0xCB845A663B4DD2F3(iVar0, "bla2");
	iVar54 = unk_0xCB845A663B4DD2F3(iVar0, "wla2");
	iVar55 = unk_0xCB845A663B4DD2F3(iVar0, "pat2");
	iVar56 = unk_0xCB845A663B4DD2F3(iVar0, "inv");
	iVar57 = unk_0xCB845A663B4DD2F3(iVar0, "inv2");
	iVar58 = unk_0xCB845A663B4DD2F3(iVar0, "inv3");
	iVar59 = unk_0xCB845A663B4DD2F3(iVar0, "inv4");
	iVar60 = unk_0xCB845A663B4DD2F3(iVar0, "invsw");
	iVar61 = unk_0xCB845A663B4DD2F3(iVar0, "invtm");
	iVar62 = unk_0xCB845A663B4DD2F3(iVar0, "invrl");
	iVar63 = unk_0xCB845A663B4DD2F3(iVar0, "inv2tm");
	iVar64 = unk_0xCB845A663B4DD2F3(iVar0, "inv2rl");
	iVar65 = unk_0xCB845A663B4DD2F3(iVar0, "sinv");
	iVar66 = unk_0xCB845A663B4DD2F3(iVar0, "sinv2");
	iVar67 = unk_0xCB845A663B4DD2F3(iVar0, "sinv3");
	iVar68 = unk_0xCB845A663B4DD2F3(iVar0, "sinv4");
	iVar69 = unk_0xCB845A663B4DD2F3(iVar0, "minv");
	iVar70 = unk_0xCB845A663B4DD2F3(iVar0, "mmsw");
	iVar71 = unk_0xCB845A663B4DD2F3(iVar0, "mmsw2");
	iVar72 = unk_0xCB845A663B4DD2F3(iVar0, "minv2");
	iVar73 = unk_0xCB845A663B4DD2F3(iVar0, "minv3");
	iVar74 = unk_0xCB845A663B4DD2F3(iVar0, "minv4");
	iVar75 = unk_0xCB845A663B4DD2F3(iVar0, "ppk");
	iVar76 = unk_0xCB845A663B4DD2F3(iVar0, "mts");
	iVar77 = unk_0xCB845A663B4DD2F3(iVar0, "spwia");
	iVar78 = unk_0xCB845A663B4DD2F3(iVar0, "2spwia");
	iVar79 = unk_0xCB845A663B4DD2F3(iVar0, "pcl");
	iVar80 = unk_0xCB845A663B4DD2F3(iVar0, "ocl");
	iVar81 = unk_0xCB845A663B4DD2F3(iVar0, "arrt");
	iVar82 = unk_0xCB845A663B4DD2F3(iVar0, "thfa");
	iVar83 = unk_0xCB845A663B4DD2F3(iVar0, "ttca");
	iVar84 = unk_0xCB845A663B4DD2F3(iVar0, "sipis");
	iVar85 = unk_0xCB845A663B4DD2F3(iVar0, "sipiv");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_42 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/] = { unk_0xB6537A31819F86E5(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4715 = unk_0xF6EB12D7E162DA9C(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4772 = unk_0xF6EB12D7E162DA9C(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_5469 = unk_0xF6EB12D7E162DA9C(iVar19, iVar1);
			}
			if (iVar20 != 0 && unk_0xB988B7EA5B6DE257(iVar20, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_5470 = unk_0xF6EB12D7E162DA9C(iVar20, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_5470 = 0;
			}
			if (iVar21 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6501 = unk_0xF6EB12D7E162DA9C(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6502 = unk_0xF6EB12D7E162DA9C(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6503 = unk_0xF6EB12D7E162DA9C(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6504 = unk_0xF6EB12D7E162DA9C(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4717 = unk_0xF6EB12D7E162DA9C(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4846 = unk_0xF6EB12D7E162DA9C(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6708 = unk_0xF6EB12D7E162DA9C(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4714 = unk_0xF6EB12D7E162DA9C(iVar28, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4716 = unk_0xF6EB12D7E162DA9C(iVar31, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4312 = unk_0xF6EB12D7E162DA9C(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4313 = unk_0xF6EB12D7E162DA9C(iVar30, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4773 = unk_0xF6EB12D7E162DA9C(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6709 = unk_0xF6EB12D7E162DA9C(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6710 = unk_0xF6EB12D7E162DA9C(iVar34, iVar1);
			}
			if (iVar35 != 0 && unk_0xB988B7EA5B6DE257(iVar35, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6729 = unk_0xF6EB12D7E162DA9C(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_6729 = 0;
			}
			if (iVar36 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10644 = unk_0xF6EB12D7E162DA9C(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10645 = unk_0xF6EB12D7E162DA9C(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10646 = unk_0xF6EB12D7E162DA9C(iVar38, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_32 = unk_0xF6EB12D7E162DA9C(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_33 = unk_0xF6EB12D7E162DA9C(iVar40, iVar1);
			}
			if (iVar41 != 0 && unk_0xB988B7EA5B6DE257(iVar41, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_34 = unk_0xF6EB12D7E162DA9C(iVar41, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_34 = 0;
			}
			if (iVar42 != 0 && unk_0xB988B7EA5B6DE257(iVar42, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_35 = unk_0xF6EB12D7E162DA9C(iVar42, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_35 = 0;
			}
			if (iVar43 != 0 && unk_0xB988B7EA5B6DE257(iVar43, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_36 = unk_0xF6EB12D7E162DA9C(iVar43, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_36 = 0;
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_38 = unk_0xF6EB12D7E162DA9C(iVar44, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4307 = unk_0xF6EB12D7E162DA9C(iVar46, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4309 = unk_0xF6EB12D7E162DA9C(iVar47, iVar1);
			}
			if (iVar48 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4305 = unk_0xF6EB12D7E162DA9C(iVar48, iVar1);
			}
			if (iVar49 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4304 = unk_0xF6EB12D7E162DA9C(iVar49, iVar1);
			}
			if ((iVar51 != 0 && unk_0xB988B7EA5B6DE257(iVar51, iVar1) == 2) && iVar51 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4306 = unk_0xF6EB12D7E162DA9C(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4306 = 60000;
			}
			if (iVar52 != 0 && unk_0xB988B7EA5B6DE257(iVar52, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4567 = unk_0xF6EB12D7E162DA9C(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4567 = 0;
			}
			if (iVar53 != 0 && unk_0xB988B7EA5B6DE257(iVar53, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4566 = unk_0xF6EB12D7E162DA9C(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4566 = 0;
			}
			if (iVar82 != 0 && unk_0xB988B7EA5B6DE257(iVar82, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10647 = unk_0xF6EB12D7E162DA9C(iVar82, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10647 = 0;
			}
			if (iVar83 != 0 && unk_0xB988B7EA5B6DE257(iVar83, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10648 = unk_0xF6EB12D7E162DA9C(iVar83, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_10648 = -1;
			}
			if (iVar55 != 0 && unk_0xB988B7EA5B6DE257(iVar55, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4568 = unk_0xF6EB12D7E162DA9C(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4568 = 60000;
			}
			if (iVar54 != 0 && unk_0xB988B7EA5B6DE257(iVar54, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4569 = unk_0xF6EB12D7E162DA9C(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4569 = 0;
			}
			if (iVar56 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_61 = unk_0xF6EB12D7E162DA9C(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_62 = unk_0xF6EB12D7E162DA9C(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_63 = unk_0xF6EB12D7E162DA9C(iVar58, iVar1);
			}
			if (iVar59 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_64 = unk_0xF6EB12D7E162DA9C(iVar59, iVar1);
			}
			if (iVar60 != 0 && unk_0xB988B7EA5B6DE257(iVar60, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_324 = unk_0xF6EB12D7E162DA9C(iVar60, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_324 = -1;
			}
			if (iVar84 != 0 && unk_0xB988B7EA5B6DE257(iVar84, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_857 = unk_0xF6EB12D7E162DA9C(iVar84, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_857 = -1;
			}
			if (iVar85 != 0 && unk_0xB988B7EA5B6DE257(iVar85, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_858 = unk_0xF6EB12D7E162DA9C(iVar85, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_858 = -1;
			}
			if (iVar70 != 0 && unk_0xB988B7EA5B6DE257(iVar70, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_325 = unk_0xF6EB12D7E162DA9C(iVar70, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_325 = -1;
			}
			if (iVar71 != 0 && unk_0xB988B7EA5B6DE257(iVar71, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_326 = unk_0xF6EB12D7E162DA9C(iVar71, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_326 = -1;
			}
			if ((iVar61 != 0 && unk_0xB988B7EA5B6DE257(iVar61, iVar1) == 2) && unk_0xB988B7EA5B6DE257(iVar62, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_590 = unk_0xF6EB12D7E162DA9C(iVar61, iVar1);
				Global_4456448.f_106[iVar1 /*11610*/].f_591 = unk_0xF6EB12D7E162DA9C(iVar62, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_590 = -1;
				Global_4456448.f_106[iVar1 /*11610*/].f_591 = -1;
			}
			if (iVar65 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_327 = unk_0xF6EB12D7E162DA9C(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_328 = unk_0xF6EB12D7E162DA9C(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_329 = unk_0xF6EB12D7E162DA9C(iVar67, iVar1);
			}
			if (iVar68 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_330 = unk_0xF6EB12D7E162DA9C(iVar68, iVar1);
			}
			if ((iVar63 != 0 && unk_0xB988B7EA5B6DE257(iVar63, iVar1) == 2) && unk_0xB988B7EA5B6DE257(iVar64, iVar1) == 2)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_855 = unk_0xF6EB12D7E162DA9C(iVar63, iVar1);
				Global_4456448.f_106[iVar1 /*11610*/].f_856 = unk_0xF6EB12D7E162DA9C(iVar64, iVar1);
			}
			else
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_855 = -1;
				Global_4456448.f_106[iVar1 /*11610*/].f_856 = -1;
			}
			if (iVar69 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_592 = unk_0xF6EB12D7E162DA9C(iVar69, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_593 = unk_0xF6EB12D7E162DA9C(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_594 = unk_0xF6EB12D7E162DA9C(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_595 = unk_0xF6EB12D7E162DA9C(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_57 = unk_0xF6EB12D7E162DA9C(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_58 = unk_0xF6EB12D7E162DA9C(iVar76, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4308 = unk_0xF6EB12D7E162DA9C(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4310 = unk_0xF6EB12D7E162DA9C(iVar78, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_4311 = unk_0xF6EB12D7E162DA9C(iVar50, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_3 = unk_0xB496A8A1F76DD70A(iVar45, iVar1);
			}
			if (iVar79 != 0)
			{
				Global_4456448.f_46547[iVar1] = unk_0xF6EB12D7E162DA9C(iVar79, iVar1);
			}
			if (iVar80 != 0)
			{
				Global_4456448.f_46552[iVar1] = unk_0xF6EB12D7E162DA9C(iVar80, iVar1);
			}
			if (iVar81 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_37 = unk_0xF6EB12D7E162DA9C(iVar81, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_14 = unk_0xF6EB12D7E162DA9C(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_15 = { unk_0xB6537A31819F86E5(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_18 = unk_0xF6EB12D7E162DA9C(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_19 = { unk_0xB6537A31819F86E5(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_22 = unk_0xF6EB12D7E162DA9C(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_23 = unk_0xF6EB12D7E162DA9C(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_24 = unk_0xF6EB12D7E162DA9C(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_25 = unk_0xF6EB12D7E162DA9C(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_26 = unk_0xF6EB12D7E162DA9C(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_27 = unk_0xF6EB12D7E162DA9C(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_28 = unk_0xF6EB12D7E162DA9C(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_29 = unk_0xF6EB12D7E162DA9C(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_30 = unk_0xF6EB12D7E162DA9C(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_106[iVar1 /*11610*/].f_31 = unk_0xF6EB12D7E162DA9C(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7408DCBD37A2C60F(iParam0, "rule");
	Global_4456448.f_62 = unk_0xEE6F60A09902D357(iVar0, "time");
	Global_4456448.f_64 = unk_0xEE6F60A09902D357(iVar0, "score");
	Global_4456448.f_75 = unk_0xEE6F60A09902D357(iVar0, "prule");
	Global_4456448.f_88009 = unk_0xEE6F60A09902D357(iVar0, "ptyp");
	Global_4456448.f_65 = unk_0xEE6F60A09902D357(iVar0, "blip");
	Global_4456448.f_67 = unk_0xEE6F60A09902D357(iVar0, "tag");
	Global_4456448.f_68 = unk_0xEE6F60A09902D357(iVar0, "voice");
	Global_4456448.f_69 = unk_0xEE6F60A09902D357(iVar0, "radio");
	Global_4456448.f_70 = unk_0xEE6F60A09902D357(iVar0, "aim");
	Global_4456448.f_60684 = unk_0xEE6F60A09902D357(iVar0, "pol");
	Global_4456448.f_57 = unk_0xEE6F60A09902D357(iVar0, "liv");
	Global_4456448.f_58156 = unk_0xEE6F60A09902D357(iVar0, "traf");
	Global_4456448.f_156011 = unk_0xEE6F60A09902D357(iVar0, "tod");
	Global_4456448.f_155995 = unk_0xEE6F60A09902D357(iVar0, "weth");
	Global_4456448.f_156013 = unk_0xEE6F60A09902D357(iVar0, "apeds");
	Global_4456448.f_156012 = unk_0xEE6F60A09902D357(iVar0, "vehd");
	Global_4456448.f_73 = unk_0xEE6F60A09902D357(iVar0, "vdm");
	Global_4456448.f_71 = unk_0xEE6F60A09902D357(iVar0, "tdm");
	Global_4456448.f_46547[0] = unk_0xEE6F60A09902D357(iVar0, "pcr");
	Global_4456448.f_46552[0] = unk_0xEE6F60A09902D357(iVar0, "ocr");
}

void func_262(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	char cVar9[24];
	int iVar15;
	char cVar16[24];
	char cVar22[24];
	char cVar28[16];
	int iVar32;
	int iVar33;
	char[] cVar34[8];
	int iVar36;
	int iVar37;
	char cVar38[16];
	int iVar42;
	char cVar43[16];
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	var uVar55;
	int iVar56;
	int iVar57;
	char* sVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	char cVar66[16];
	char cVar70[16];
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	
	iVar0 = unk_0x7408DCBD37A2C60F(iParam0, "gen");
	Global_4456448 = unk_0xEE6F60A09902D357(iVar0, "type");
	Global_4456448.f_9 = unk_0x6F7A89248B266B1B(iVar0, "ngjob");
	unk_0xA2BC31158C8CEFD2(Global_4456448.f_7, 0);
	bVar1 = unk_0x6F7A89248B266B1B(iVar0, "photo");
	if (bVar1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_7), 0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_4456448.f_7), 0);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ivm") == 2)
	{
		Global_4456448.f_60604 = unk_0xEE6F60A09902D357(iVar0, "ivm");
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fixcam") == 2)
	{
		Global_4456448.f_166576 = unk_0xEE6F60A09902D357(iVar0, "fixcam");
	}
	else
	{
		Global_4456448.f_166576 = 0;
	}
	Global_4456448.f_4 = unk_0xEE6F60A09902D357(iVar0, "optbs");
	Global_4456448.f_88 = { unk_0x158A0F7CCA751FFB(iVar0, "camo") };
	Global_4456448.f_91 = { unk_0x158A0F7CCA751FFB(iVar0, "camro") };
	Global_4456448.f_82 = { unk_0x158A0F7CCA751FFB(iVar0, "cam") };
	Global_4456448.f_101 = unk_0x42AD093E466CD516(iVar0, "camh");
	Global_4456448.f_94 = { unk_0x158A0F7CCA751FFB(iVar0, "camf") };
	Global_4456448.f_97 = { unk_0x158A0F7CCA751FFB(iVar0, "camfr") };
	Global_4456448.f_100 = unk_0x42AD093E466CD516(iVar0, "camfv");
	Global_4456448.f_154335 = unk_0x42AD093E466CD516(iVar0, "dmbds");
	Global_4456448.f_76 = { unk_0x158A0F7CCA751FFB(iVar0, "phpo") };
	StringCopy(&(Global_4456448.f_154518[0 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, "szTag"), 64);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "chksfx") == 1)
	{
		Global_4456448.f_54073 = 1;
	}
	else
	{
		Global_4456448.f_54073 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 5)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_4456448.f_154678[iVar2 /*6*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar4), 24);
			StringCopy(&cVar4, "nrmtt", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			Global_4456448.f_154715[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar4);
			iVar2++;
		}
	}
	if (func_136())
	{
		Global_4456448.f_2 = unk_0xEE6F60A09902D357(iVar0, "subtype");
		Global_4456448.f_166573 = unk_0xEE6F60A09902D357(iVar0, "testcomplete");
		if (((Global_4456448.f_2 == 6 || Global_4456448.f_2 == 5) || Global_4456448.f_2 == 4) || Global_4456448.f_2 == 9)
		{
			if (unk_0x1D22B93425E4D657(iVar0, "teamBal") == 2)
			{
				Global_4456448.f_166575 = unk_0xEE6F60A09902D357(iVar0, "numRounds");
			}
			else
			{
				Global_4456448.f_166575 = 1;
			}
			if (Global_4456448.f_166575 < 1)
			{
				Global_4456448.f_166575 = 1;
			}
		}
		if (unk_0x1D22B93425E4D657(iVar0, "teamBal") == 2)
		{
			Global_4456448.f_166577 = unk_0xEE6F60A09902D357(iVar0, "teamBal");
		}
		else
		{
			Global_4456448.f_166577 = 5;
		}
	}
	else if (func_228())
	{
		Global_4456448.f_2 = unk_0xEE6F60A09902D357(iVar0, "subtype");
	}
	Global_4456448.f_190930 = unk_0xEE6F60A09902D357(iVar0, "adverm");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "dlcrel") == 2)
	{
		Global_4456448.f_190931 = unk_0xEE6F60A09902D357(iVar0, "dlcrel");
	}
	else
	{
		Global_4456448.f_190931 = -1;
	}
	Global_4456448.f_166574 = unk_0xEE6F60A09902D357(iVar0, "testcomplete");
	Global_4456448.f_63 = unk_0xEE6F60A09902D357(iVar0, "endtype");
	Global_4456448.f_11 = unk_0xEE6F60A09902D357(iVar0, "menubs");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ovrpc") == 2)
	{
		Global_4456448.f_101958 = unk_0xEE6F60A09902D357(iVar0, "ovrpc");
	}
	else
	{
		Global_4456448.f_101958 = -1;
	}
	Global_4456448.f_12 = unk_0xEE6F60A09902D357(iVar0, "menubs2");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs3") == 2)
	{
		Global_4456448.f_13 = unk_0xEE6F60A09902D357(iVar0, "menubs3");
	}
	else
	{
		Global_4456448.f_13 = 0;
	}
	Global_4456448.f_14 = unk_0xEE6F60A09902D357(iVar0, "menubs4");
	Global_4456448.f_15 = unk_0xEE6F60A09902D357(iVar0, "menubs5");
	Global_4456448.f_16 = unk_0xEE6F60A09902D357(iVar0, "menubs6");
	Global_4456448.f_17 = unk_0xEE6F60A09902D357(iVar0, "menubs7");
	Global_4456448.f_18 = unk_0xEE6F60A09902D357(iVar0, "menubs8");
	Global_4456448.f_19 = unk_0xEE6F60A09902D357(iVar0, "menubs9");
	Global_4456448.f_20 = unk_0xEE6F60A09902D357(iVar0, "menubs10");
	Global_4456448.f_21 = unk_0xEE6F60A09902D357(iVar0, "menubs11");
	Global_4456448.f_22 = unk_0xEE6F60A09902D357(iVar0, "menubs12");
	Global_4456448.f_23 = unk_0xEE6F60A09902D357(iVar0, "menubs13");
	Global_4456448.f_24 = unk_0xEE6F60A09902D357(iVar0, "menubs14");
	Global_4456448.f_25 = unk_0xEE6F60A09902D357(iVar0, "menubs15");
	Global_4456448.f_26 = unk_0xEE6F60A09902D357(iVar0, "menubs16");
	Global_4456448.f_27 = unk_0xEE6F60A09902D357(iVar0, "menubs17");
	Global_4456448.f_191972 = unk_0x6F7A89248B266B1B(iVar0, "alrtLocal");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs18") == 2)
	{
		Global_4456448.f_28 = unk_0xEE6F60A09902D357(iVar0, "menubs18");
	}
	else
	{
		Global_4456448.f_28 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs19") == 2)
	{
		Global_4456448.f_29 = unk_0xEE6F60A09902D357(iVar0, "menubs19");
	}
	else
	{
		Global_4456448.f_29 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs20") == 2)
	{
		Global_4456448.f_30 = unk_0xEE6F60A09902D357(iVar0, "menubs20");
	}
	else
	{
		Global_4456448.f_30 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs21") == 2)
	{
		Global_4456448.f_31 = unk_0xEE6F60A09902D357(iVar0, "menubs21");
	}
	else
	{
		Global_4456448.f_31 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs22") == 2)
	{
		Global_4456448.f_32 = unk_0xEE6F60A09902D357(iVar0, "menubs22");
	}
	else
	{
		Global_4456448.f_32 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs23") == 2)
	{
		Global_4456448.f_33 = unk_0xEE6F60A09902D357(iVar0, "menubs23");
	}
	else
	{
		Global_4456448.f_33 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs24") == 2)
	{
		Global_4456448.f_34 = unk_0xEE6F60A09902D357(iVar0, "menubs24");
	}
	else
	{
		Global_4456448.f_34 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "menubs25") == 2)
	{
		Global_4456448.f_35 = unk_0xEE6F60A09902D357(iVar0, "menubs25");
	}
	else
	{
		Global_4456448.f_35 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csittd") == 2)
	{
		Global_4456448.f_196506 = unk_0xEE6F60A09902D357(iVar0, "csittd");
	}
	else
	{
		Global_4456448.f_196506 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fiispr") == 3)
	{
		Global_4456448.f_156050 = unk_0x42AD093E466CD516(iVar0, "fiispr");
	}
	else
	{
		Global_4456448.f_156050 = -0.1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cordmbs") == 2)
	{
		Global_4456448.f_192209 = unk_0xEE6F60A09902D357(iVar0, "cordmbs");
	}
	else
	{
		Global_4456448.f_192209 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "iplyli") == 2)
	{
		Global_4456448.f_58 = unk_0xEE6F60A09902D357(iVar0, "iplyli");
	}
	else
	{
		Global_4456448.f_58 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ptbNBL") == 2)
	{
		Global_4456448.f_192158 = unk_0xEE6F60A09902D357(iVar0, "ptbNBL");
	}
	else
	{
		Global_4456448.f_192158 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ptbDrg") == 3)
	{
		Global_4456448.f_192159 = unk_0x42AD093E466CD516(iVar0, "ptbDrg");
	}
	else
	{
		Global_4456448.f_192159 = 2f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csts") == 3)
	{
		Global_4456448.f_192204 = unk_0x42AD093E466CD516(iVar0, "csts");
	}
	else
	{
		Global_4456448.f_192204 = 1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "rmlo") == 2)
	{
		Global_4456448.f_192205 = unk_0xEE6F60A09902D357(iVar0, "rmlo");
	}
	else
	{
		Global_4456448.f_192205 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mxlap") == 2)
	{
		Global_4456448.f_192206 = unk_0xEE6F60A09902D357(iVar0, "mxlap");
	}
	else
	{
		Global_4456448.f_192206 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "aghd") == 3)
	{
		Global_4456448.f_192207 = unk_0x42AD093E466CD516(iVar0, "aghd");
	}
	else
	{
		Global_4456448.f_192207 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "agt") == 2)
	{
		Global_4456448.f_192208 = unk_0xEE6F60A09902D357(iVar0, "agt");
	}
	else
	{
		Global_4456448.f_192208 = 0;
	}
	func_292(&iVar0);
	func_290(&iVar0);
	func_289(&iVar0);
	iVar8 = 0;
	while (iVar8 <= 4)
	{
		StringCopy(&cVar9, "dmHTS", 24);
		StringIntConCat(&cVar9, iVar8, 24);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_4456448.f_191489[iVar8 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_191489[iVar8 /*16*/]), "", 64);
		}
		iVar15 = 0;
		while (iVar15 <= 3)
		{
			StringCopy(&cVar16, "dmHT", 24);
			StringIntConCat(&cVar16, iVar8, 24);
			StringIntConCat(&cVar16, iVar15, 24);
			if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar16) == 4)
			{
				StringCopy(&(Global_4456448.f_191570[iVar8 /*65*/][iVar15 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar16), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_191570[iVar8 /*65*/][iVar15 /*16*/]), "", 64);
			}
			iVar15++;
		}
		StringCopy(&cVar22, "dmHTD", 24);
		StringIntConCat(&cVar22, iVar8, 24);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar22) == 2)
		{
			Global_4456448.f_191896[iVar8] = unk_0xEE6F60A09902D357(iVar0, &cVar22);
		}
		else
		{
			Global_4456448.f_191896[iVar8] = -1;
		}
		iVar8++;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_22, 13))
	{
		if (unk_0x1D22B93425E4D657(iVar0, "trstim") == 2)
		{
			Global_4456448.f_191025 = unk_0xEE6F60A09902D357(iVar0, "trstim");
		}
		else
		{
			Global_4456448.f_191025 = 10;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "trerad") == 3)
		{
			Global_4456448.f_191026 = unk_0x42AD093E466CD516(iVar0, "trerad");
		}
		else
		{
			Global_4456448.f_191026 = 5f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "trsstim") == 2)
		{
			Global_4456448.f_191027 = unk_0xEE6F60A09902D357(iVar0, "trsstim");
		}
		else
		{
			Global_4456448.f_191027 = 10;
		}
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "iopcd") == 2)
	{
		Global_4456448.f_190933 = unk_0xEE6F60A09902D357(iVar0, "iopcd");
	}
	else
	{
		Global_4456448.f_190933 = -1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 31))
	{
	}
	Global_4456448.f_16 = unk_0xEE6F60A09902D357(iVar0, "menubs6");
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_16, 16))
	{
	}
	func_288(&iVar0);
	func_287(&iVar0);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "rcvs") == 2)
	{
		Global_4456448.f_47378 = unk_0xEE6F60A09902D357(iVar0, "rcvs");
	}
	else
	{
		Global_4456448.f_47378 = 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_18, 25))
	{
		Global_4456448.f_47378 = 1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hptfb") == 2)
	{
		Global_4456448.f_105 = unk_0xEE6F60A09902D357(iVar0, "hptfb");
	}
	else
	{
		Global_4456448.f_105 = 0;
	}
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		StringCopy(&cVar28, "specobjt", 16);
		StringIntConCat(&cVar28, iVar32, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 4)
		{
			StringCopy(&(Global_4456448.f_192025[iVar32 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar28), 64);
		}
		else
		{
			IntToString(&(Global_4456448.f_192025[iVar32 /*16*/]), 0, 64);
		}
		iVar32++;
	}
	Global_4456448.f_192213 = unk_0x42AD093E466CD516(iVar0, "turammo");
	Global_4456448.f_192214 = unk_0xEE6F60A09902D357(iVar0, "turgudm");
	Global_4456448.f_60678 = unk_0xEE6F60A09902D357(iVar0, "teamvbs");
	Global_4456448.f_36 = unk_0xEE6F60A09902D357(iVar0, "cncmbs");
	Global_4456448.f_187444 = unk_0xEE6F60A09902D357(iVar0, "todhr");
	Global_4456448.f_187445 = unk_0xEE6F60A09902D357(iVar0, "todmn");
	Global_4456448.f_10 = unk_0xEE6F60A09902D357(iVar0, "cmpts");
	Global_4456448.f_61 = unk_0xEE6F60A09902D357(iVar0, "rank");
	Global_4456448.f_61 = unk_0xEE6F60A09902D357(iVar0, "rank");
	Global_4456448.f_156015 = unk_0xEE6F60A09902D357(iVar0, "charcon");
	Global_4456448.f_156015 = unk_0xEE6F60A09902D357(iVar0, "char");
	Global_4456448.f_156016 = unk_0xEE6F60A09902D357(iVar0, "xpr");
	Global_4456448.f_156017 = unk_0xEE6F60A09902D357(iVar0, "cshr");
	Global_4456448.f_156021 = unk_0xEE6F60A09902D357(iVar0, "ctsc");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "istngc") == 2)
	{
		Global_4456448.f_196509 = unk_0xEE6F60A09902D357(iVar0, "istngc");
	}
	else
	{
		Global_4456448.f_196509 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecsbs") == 2)
	{
		Global_4456448.f_184061.f_16 = unk_0xEE6F60A09902D357(iVar0, "ecsbs");
	}
	else
	{
		Global_4456448.f_184061.f_16 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecsbs2") == 2)
	{
		Global_4456448.f_184061.f_17 = unk_0xEE6F60A09902D357(iVar0, "ecsbs2");
	}
	else
	{
		Global_4456448.f_184061.f_17 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecsrng") == 2)
	{
		Global_4456448.f_184061.f_62 = unk_0xEE6F60A09902D357(iVar0, "ecsrng");
	}
	else
	{
		Global_4456448.f_184061.f_62 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecscp") == 5)
	{
		Global_4456448.f_184061.f_54 = { unk_0x158A0F7CCA751FFB(iVar0, "ecscp") };
	}
	else
	{
		Global_4456448.f_184061.f_54 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecscr") == 3)
	{
		Global_4456448.f_184061.f_60 = unk_0x42AD093E466CD516(iVar0, "ecscr");
	}
	else
	{
		Global_4456448.f_184061.f_60 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ecscs") == 5)
	{
		Global_4456448.f_184061.f_57 = { unk_0x158A0F7CCA751FFB(iVar0, "ecscs") };
	}
	else
	{
		Global_4456448.f_184061.f_57 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vhspx") == 3)
	{
		Global_4456448.f_184061.f_63 = unk_0x42AD093E466CD516(iVar0, "vhspx");
	}
	else
	{
		Global_4456448.f_184061.f_63 = 6f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vrbs") == 2)
	{
		Global_4456448.f_184061.f_64 = unk_0xEE6F60A09902D357(iVar0, "vrbs");
	}
	else
	{
		Global_4456448.f_184061.f_64 = 0;
	}
	iVar33 = 0;
	while (iVar33 <= 29)
	{
		StringCopy(&cVar34, "ecein", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184061.f_118[iVar33 /*11*/].f_1 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184061.f_118[iVar33 /*11*/].f_1 = -1;
		}
		StringCopy(&cVar34, "ecetp", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184061.f_118[iVar33 /*11*/] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184061.f_118[iVar33 /*11*/] = -1;
		}
		StringCopy(&cVar34, "ecehn", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_184061.f_118[iVar33 /*11*/].f_3), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_184061.f_118[iVar33 /*11*/].f_3), "", 32);
		}
		iVar33++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "clbscr") == 2)
	{
		Global_4456448.f_185378 = unk_0xEE6F60A09902D357(iVar0, "clbscr");
	}
	else
	{
		Global_4456448.f_185378 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "disar") == 2)
	{
		Global_4456448.f_185379 = unk_0xEE6F60A09902D357(iVar0, "disar");
	}
	else
	{
		Global_4456448.f_185379 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "rlopt") == 2)
	{
		Global_4456448.f_184947 = unk_0xEE6F60A09902D357(iVar0, "rlopt");
	}
	else
	{
		Global_4456448.f_184947 = 0;
	}
	iVar36 = unk_0xEE6F60A09902D357(iVar0, "gpmn");
	Global_4456448.f_104 = iVar36;
	iVar37 = unk_0xEE6F60A09902D357(iVar0, "musx");
	if (iVar37 != -1)
	{
		Global_4456448.f_156010 = iVar37;
	}
	else
	{
		Global_4456448.f_156010 = -1;
	}
	Global_4456448.f_156009 = unk_0xEE6F60A09902D357(iVar0, "ausc");
	Global_4456448.f_38 = unk_0xEE6F60A09902D357(iVar0, "minNu");
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "newausc") == 2)
	{
		Global_4456448.f_156008 = unk_0xEE6F60A09902D357(iVar0, "newausc");
	}
	else
	{
		Global_4456448.f_156008 = -1;
	}
	Global_4456448.f_37 = unk_0xEE6F60A09902D357(iVar0, "num");
	if (Global_4456448.f_37 == -1)
	{
		Global_4456448.f_37 = func_85();
	}
	Global_4456448.f_39 = unk_0xEE6F60A09902D357(iVar0, "time");
	Global_4456448.f_79 = { func_88(iVar0) };
	StringCopy(&cVar38, "apart", 16);
	Global_4456448.f_184533 = { unk_0x158A0F7CCA751FFB(iVar0, &cVar38) };
	Global_4456448.f_184547 = unk_0xEE6F60A09902D357(iVar0, "apwbs");
	Global_4456448.f_184536 = unk_0xEE6F60A09902D357(iVar0, "wrploc");
	Global_4456448.f_184555 = unk_0xEE6F60A09902D357(iVar0, "twrst");
	Global_4456448.f_184548 = unk_0xEE6F60A09902D357(iVar0, "iplop");
	Global_4456448.f_184549 = unk_0xEE6F60A09902D357(iVar0, "intop");
	Global_4456448.f_184550 = unk_0xEE6F60A09902D357(iVar0, "intop2");
	Global_4456448.f_184551 = unk_0xEE6F60A09902D357(iVar0, "intop3");
	Global_4456448.f_184552 = unk_0xEE6F60A09902D357(iVar0, "casCol");
	Global_4456448.f_184553 = unk_0xEE6F60A09902D357(iVar0, "casPat");
	Global_4456448.f_184554 = unk_0xEE6F60A09902D357(iVar0, "casArc");
	Global_4456448.f_184556 = unk_0xEE6F60A09902D357(iVar0, "arnTh");
	Global_4456448.f_184556.f_1 = unk_0xEE6F60A09902D357(iVar0, "arnTy");
	Global_4456448.f_184556.f_2 = unk_0xEE6F60A09902D357(iVar0, "arnLi");
	Global_4456448.f_184556.f_29[0] = unk_0xEE6F60A09902D357(iVar0, "arnBnA");
	Global_4456448.f_184556.f_29[1] = unk_0xEE6F60A09902D357(iVar0, "arnBnB");
	Global_4456448.f_184556.f_29[2] = unk_0xEE6F60A09902D357(iVar0, "arnBnC");
	Global_4456448.f_184556.f_29[3] = unk_0xEE6F60A09902D357(iVar0, "arnBnD");
	Global_4456448.f_184556.f_34[0] = unk_0xEE6F60A09902D357(iVar0, "arnCrA");
	Global_4456448.f_184556.f_34[1] = unk_0xEE6F60A09902D357(iVar0, "arnCrB");
	Global_4456448.f_184556.f_34[2] = unk_0xEE6F60A09902D357(iVar0, "arnCrC");
	Global_4456448.f_184556.f_34[3] = unk_0xEE6F60A09902D357(iVar0, "arnCrD");
	Global_4456448.f_184556.f_3 = unk_0xEE6F60A09902D357(iVar0, "arnRnL");
	iVar42 = 0;
	while (iVar42 <= 3)
	{
		StringCopy(&cVar43, "anf1BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_184556.f_4[iVar42] = unk_0xEE6F60A09902D357(iVar0, &cVar43);
		StringCopy(&cVar43, "anf2BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_184556.f_9[iVar42] = unk_0xEE6F60A09902D357(iVar0, &cVar43);
		StringCopy(&cVar43, "anf3BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_184556.f_14[iVar42] = unk_0xEE6F60A09902D357(iVar0, &cVar43);
		StringCopy(&cVar43, "anf4BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_184556.f_19[iVar42] = unk_0xEE6F60A09902D357(iVar0, &cVar43);
		StringCopy(&cVar43, "anfMBS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_184556.f_24[iVar42] = unk_0xEE6F60A09902D357(iVar0, &cVar43);
		iVar42++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "arnVMN") == 2)
	{
		Global_4456448.f_184595 = unk_0xEE6F60A09902D357(iVar0, "arnVMN");
	}
	else
	{
		Global_4456448.f_184595 = 5;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "copteam") == 2)
	{
		Global_4456448.f_60685 = unk_0xEE6F60A09902D357(iVar0, "copteam");
	}
	else
	{
		Global_4456448.f_60685 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_4456448.f_154656), unk_0x2B36163AFF2C657B(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_154656), "", 64);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "blmpmsg") == 4)
	{
		StringCopy(&(Global_4456448.f_191457), unk_0x2B36163AFF2C657B(iVar0, "blmpmsg"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_191457), "", 64);
	}
	iVar47 = 0;
	while (iVar47 <= 26)
	{
		StringCopy(&cVar34, "dmvft", 8);
		StringIntConCat(&cVar34, iVar47, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_58706[iVar47] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_58706[iVar47] = 0;
		}
		iVar47++;
	}
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		iVar48 = 0;
		while (iVar48 <= 1)
		{
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringConCat(&cVar34, "fs", 8);
			StringIntConCat(&cVar34, iVar48, 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
			{
				StringCopy(&(Global_4456448.f_188049[iVar36 /*33*/][iVar48 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_188049[iVar36 /*33*/][iVar48 /*16*/]), "", 64);
			}
			iVar48++;
		}
		iVar48 = 0;
		while (iVar48 <= 26)
		{
			iVar49 = 0;
			while (iVar49 <= func_193(func_216(iVar48)))
			{
				StringCopy(&cVar34, "t", 8);
				StringIntConCat(&cVar34, iVar36, 8);
				StringConCat(&cVar34, "vl", 8);
				StringIntConCat(&cVar34, iVar48, 8);
				if (iVar49 > 0)
				{
					StringIntConCat(&cVar34, iVar49, 8);
				}
				if (iVar49 < 3)
				{
					if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
					{
						Global_4456448.f_58259[iVar36 /*109*/][iVar48 /*4*/][iVar49] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
					}
					else
					{
						Global_4456448.f_58259[iVar36 /*109*/][iVar48 /*4*/][iVar49] = 0;
					}
				}
				iVar49++;
			}
			iVar48++;
		}
		StringCopy(&cVar34, "t", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		StringConCat(&cVar34, "dvl", 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_58696[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_58696[iVar36] = 0;
		}
		StringCopy(&cVar34, "t", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		StringConCat(&cVar34, "dv", 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_58701[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_58701[iVar36] = 0;
		}
		iVar49 = 0;
		while (iVar49 <= 3)
		{
			iVar48 = 0;
			while (iVar48 <= 26)
			{
				iVar50 = 0;
				while (iVar50 <= 2)
				{
					StringCopy(&cVar28, "t", 16);
					StringIntConCat(&cVar28, iVar36, 16);
					StringIntConCat(&cVar28, iVar49, 16);
					StringConCat(&cVar28, "rv", 16);
					StringIntConCat(&cVar28, iVar48, 16);
					if (iVar50 > 0)
					{
						StringIntConCat(&cVar28, iVar50, 16);
					}
					if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
					{
						Global_4456448.f_58734[iVar36 /*437*/][iVar49 /*109*/][iVar48 /*4*/][iVar50] = unk_0xEE6F60A09902D357(iVar0, &cVar28);
					}
					else
					{
						Global_4456448.f_58734[iVar36 /*437*/][iVar49 /*109*/][iVar48 /*4*/][iVar50] = 0;
					}
					iVar50++;
				}
				iVar48++;
			}
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringIntConCat(&cVar34, iVar49, 8);
			StringConCat(&cVar34, "dvl", 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_60483[iVar36 /*5*/][iVar49] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_60483[iVar36 /*5*/][iVar49] = 0;
			}
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringIntConCat(&cVar34, iVar49, 8);
			StringConCat(&cVar34, "dv", 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_60504[iVar36 /*5*/][iVar49] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_60504[iVar36 /*5*/][iVar49] = 0;
			}
			iVar49++;
		}
		iVar51 = 0;
		while (iVar51 < 27)
		{
			Global_1694467[iVar51] = -1;
			iVar52 = func_216(iVar51);
			while (iVar52 <= 31)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_58259[iVar36 /*109*/][iVar51 /*4*/][func_193(iVar52)], iVar52))
				{
					unk_0x3B76114EC84D5812(&(Global_4456448.f_58259[iVar36 /*109*/][iVar51 /*4*/][func_193(iVar52)]), iVar52);
					if (Global_4456448.f_58696[iVar36] == iVar51 && Global_4456448.f_58701[iVar36] == iVar52)
					{
						Global_4456448.f_58696[iVar36] = 0;
						Global_4456448.f_58701[iVar36] = 0;
					}
				}
				iVar53 = 0;
				while (iVar53 < 4)
				{
					if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_58734[iVar36 /*437*/][iVar53 /*109*/][iVar51 /*4*/][func_193(iVar52)], iVar52))
					{
						unk_0x3B76114EC84D5812(&(Global_4456448.f_58734[iVar36 /*437*/][iVar53 /*109*/][iVar51 /*4*/][func_193(iVar52)]), iVar52);
						if (Global_4456448.f_60483[iVar36 /*5*/][iVar53] == iVar51 && Global_4456448.f_60504[iVar36 /*5*/][iVar53] == iVar52)
						{
							Global_4456448.f_60483[iVar36 /*5*/][iVar53] = 0;
							Global_4456448.f_60504[iVar36 /*5*/][iVar53] = 0;
						}
					}
					iVar53++;
				}
				iVar52++;
			}
			iVar51++;
		}
		StringCopy(&cVar34, "dmaskg", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_156000[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_156000[iVar36] = 0;
		}
		StringCopy(&cVar34, "ofovr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166754[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166754[iVar36] = -1;
		}
		StringCopy(&cVar34, "tmrfs", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_187984[iVar36 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_187984[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmtss", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_188182[iVar36 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_188182[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmrph", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_188247[iVar36 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_188247[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmtsr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_188312[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_188312[iVar36] = 0;
		}
		StringCopy(&cVar34, "pmscid", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_185380[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_185380[iVar36] = -1;
		}
		StringCopy(&cVar34, "qran", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_156022[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_156022[iVar36] = -1;
		}
		StringCopy(&cVar34, "cwtit", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_190891[iVar36 /*4*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_190891[iVar36 /*4*/]), "", 16);
		}
		StringCopy(&cVar34, "cwstr", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_190908[iVar36 /*4*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_190908[iVar36 /*4*/]), "", 16);
		}
		StringCopy(&cVar34, "cwspre", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_190925[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_190925[iVar36] = -1;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191013 = unk_0xEE6F60A09902D357(iVar0, "twti");
		}
		else
		{
			Global_4456448.f_191013 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191012 = unk_0xEE6F60A09902D357(iVar0, "twpta");
		}
		else
		{
			Global_4456448.f_191012 = 0;
		}
		Global_4456448.f_191014 = unk_0xEE6F60A09902D357(iVar0, "twct1");
		Global_4456448.f_191015 = unk_0xEE6F60A09902D357(iVar0, "twct2");
		Global_4456448.f_191016 = unk_0xEE6F60A09902D357(iVar0, "twct3");
		Global_4456448.f_191017 = unk_0xEE6F60A09902D357(iVar0, "twct4");
		Global_4456448.f_191018 = unk_0xEE6F60A09902D357(iVar0, "twcon");
		Global_4456448.f_191019 = unk_0xEE6F60A09902D357(iVar0, "twcto");
		Global_4456448.f_191020 = unk_0xEE6F60A09902D357(iVar0, "twcun");
		Global_4456448.f_191021 = unk_0xEE6F60A09902D357(iVar0, "twcdi");
		Global_4456448.f_191022 = unk_0xEE6F60A09902D357(iVar0, "svmrcvbr");
		Global_4456448.f_191023 = unk_0xEE6F60A09902D357(iVar0, "wvmarc");
		Global_4456448.f_191448 = unk_0xEE6F60A09902D357(iVar0, "wvmsbet");
		Global_4456448.f_191449 = unk_0xEE6F60A09902D357(iVar0, "wvmsber");
		if (unk_0x1D22B93425E4D657(iVar0, "wvmdsr") == 2)
		{
			Global_4456448.f_191456 = unk_0xEE6F60A09902D357(iVar0, "wvmdsr");
		}
		else
		{
			Global_4456448.f_191456 = -1;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "conbons") == 3)
		{
			Global_4456448.f_191903 = unk_0x42AD093E466CD516(iVar0, "conbons");
		}
		else
		{
			Global_4456448.f_191903 = 0f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "conspd") == 3)
		{
			Global_4456448.f_191902 = unk_0x42AD093E466CD516(iVar0, "conspd");
		}
		else
		{
			Global_4456448.f_191902 = 1f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "confot") == 2)
		{
			Global_4456448.f_191904 = unk_0xEE6F60A09902D357(iVar0, "confot");
		}
		else
		{
			Global_4456448.f_191904 = 5000;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "confont") == 2)
		{
			Global_4456448.f_191905 = unk_0xEE6F60A09902D357(iVar0, "confont");
		}
		else
		{
			Global_4456448.f_191905 = 1000;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "consd") == 2)
		{
			Global_4456448.f_191906 = unk_0xEE6F60A09902D357(iVar0, "consd");
		}
		else
		{
			Global_4456448.f_191906 = 1000;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar34, "kspt", 8);
			StringIntConCat(&cVar34, iVar2, 8);
			Global_4456448.f_191078[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			StringCopy(&cVar34, "kspr", 8);
			StringIntConCat(&cVar34, iVar2, 8);
			Global_4456448.f_191083[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			iVar2++;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191912 = unk_0xEE6F60A09902D357(iVar0, "hrdnt");
		}
		else
		{
			Global_4456448.f_191912 = 60000;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sdtick") == 3)
		{
			Global_4456448.f_191913 = unk_0x42AD093E466CD516(iVar0, "sdtick");
		}
		else
		{
			Global_4456448.f_191913 = 0.5f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sddmg") == 3)
		{
			Global_4456448.f_191915 = unk_0x42AD093E466CD516(iVar0, "sddmg");
		}
		else
		{
			Global_4456448.f_191915 = 1f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sdstp") == 3)
		{
			Global_4456448.f_191916 = unk_0x42AD093E466CD516(iVar0, "sdstp");
		}
		else
		{
			Global_4456448.f_191916 = 50f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sdmxp") == 3)
		{
			Global_4456448.f_191917 = unk_0x42AD093E466CD516(iVar0, "sdmxp");
		}
		else
		{
			Global_4456448.f_191917 = 100f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sddri") == 3)
		{
			Global_4456448.f_191914 = unk_0x42AD093E466CD516(iVar0, "sddri");
		}
		else
		{
			Global_4456448.f_191914 = 1.5f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sdrsc") == 3)
		{
			Global_4456448.f_191918 = unk_0x42AD093E466CD516(iVar0, "sdrsc");
		}
		else
		{
			Global_4456448.f_191918 = 25f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "sdidd") == 3)
		{
			Global_4456448.f_191919 = unk_0x42AD093E466CD516(iVar0, "sdidd");
		}
		else
		{
			Global_4456448.f_191919 = 1f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMt1r1") == 2)
		{
			Global_4456448.f_191920 = unk_0xEE6F60A09902D357(iVar0, "GMt1r1");
		}
		else
		{
			Global_4456448.f_191920 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMt2r1") == 2)
		{
			Global_4456448.f_191921 = unk_0xEE6F60A09902D357(iVar0, "GMt2r1");
		}
		else
		{
			Global_4456448.f_191921 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMt1r2") == 2)
		{
			Global_4456448.f_191922 = unk_0xEE6F60A09902D357(iVar0, "GMt1r2");
		}
		else
		{
			Global_4456448.f_191922 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMt2r2") == 2)
		{
			Global_4456448.f_191923 = unk_0xEE6F60A09902D357(iVar0, "GMt2r2");
		}
		else
		{
			Global_4456448.f_191923 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMsttm") == 2)
		{
			Global_4456448.f_191924 = unk_0xEE6F60A09902D357(iVar0, "GMsttm");
		}
		else
		{
			Global_4456448.f_191924 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "GMswrt") == 2)
		{
			Global_4456448.f_191925 = unk_0xEE6F60A09902D357(iVar0, "GMswrt");
		}
		else
		{
			Global_4456448.f_191925 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "tgtmcd") == 2)
		{
			Global_4456448.f_192211 = unk_0xEE6F60A09902D357(iVar0, "tgtmcd");
		}
		else
		{
			Global_4456448.f_192211 = 30;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "mjtr") == 2)
		{
			Global_4456448.f_192210 = unk_0xEE6F60A09902D357(iVar0, "mjtr");
		}
		else
		{
			Global_4456448.f_192210 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "hhdmdp") == 3)
		{
			Global_4456448.f_191926 = unk_0x42AD093E466CD516(iVar0, "hhdmdp");
		}
		else
		{
			Global_4456448.f_191926 = 2.5f;
		}
		if (unk_0x1D22B93425E4D657(iVar0, "hhdmsp") == 2)
		{
			Global_4456448.f_191927 = unk_0xEE6F60A09902D357(iVar0, "hhdmsp");
		}
		else
		{
			Global_4456448.f_191927 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191029 = unk_0xEE6F60A09902D357(iVar0, "pptl");
		}
		else
		{
			Global_4456448.f_191029 = 5;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191028 = unk_0xEE6F60A09902D357(iVar0, "ptltl");
		}
		else
		{
			Global_4456448.f_191028 = 0;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191099 = unk_0xEE6F60A09902D357(iVar0, "ptlem");
		}
		else
		{
			Global_4456448.f_191099 = -1;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191024 = unk_0xEE6F60A09902D357(iVar0, "trrt");
		}
		else
		{
			Global_4456448.f_191024 = 3;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191100 = unk_0xEE6F60A09902D357(iVar0, "tptb");
		}
		else
		{
			Global_4456448.f_191100 = 5000;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191101 = unk_0xEE6F60A09902D357(iVar0, "tprt");
		}
		else
		{
			Global_4456448.f_191101 = 2500;
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191102 = unk_0xEE6F60A09902D357(iVar0, "ldpucd");
		}
		else
		{
			Global_4456448.f_191102 = 3000;
		}
		StringCopy(&cVar34, "rtveft", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_190958[iVar36] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_190958[iVar36] = 0;
		}
		StringCopy(&cVar34, "mrtr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_191962[iVar36] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_191962[iVar36] = 0f;
		}
		StringCopy(&cVar34, "frtr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_191967[iVar36] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_191967[iVar36] = 0f;
		}
		iVar36++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ctmrs") == 4)
	{
		Global_4456448.f_154187 = unk_0xEE6F60A09902D357(iVar0, "nqrc");
	}
	else
	{
		Global_4456448.f_154187 = 0;
	}
	iVar54 = 0;
	while (iVar54 <= 15)
	{
		StringCopy(&cVar34, "qrcps", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_154188[iVar54 /*8*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "qrchd", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_3 = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_3 = 0f;
		}
		StringCopy(&cVar34, "qrcbs", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_4 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_4 = 0;
		}
		StringCopy(&cVar34, "qrctm", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_5 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_5 = 0;
		}
		StringCopy(&cVar34, "qrcck", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_6 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_6 = 0;
		}
		StringCopy(&cVar34, "qrcsg", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_7 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154188[iVar54 /*8*/].f_7 = 0;
		}
		iVar54++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_4456448.f_154672), unk_0x2B36163AFF2C657B(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_4456448.f_154672), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar34, "avss", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		Global_4456448.f_166664[iVar2 /*3*/][func_193(iVar2)] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		iVar3 = func_286(iVar2);
		while (iVar3 <= 31)
		{
			unk_0x3B76114EC84D5812(&(Global_4456448.f_166664[iVar2 /*3*/][func_193(iVar2)]), func_192(iVar3));
			iVar3++;
		}
		iVar2++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vsclout") == 2)
	{
		Global_4456448.f_166683[0] = unk_0xEE6F60A09902D357(iVar0, "vsclout");
	}
	else
	{
		Global_4456448.f_166683[0] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vsthout") == 2)
	{
		Global_4456448.f_166683[1] = unk_0xEE6F60A09902D357(iVar0, "vsthout");
	}
	else
	{
		Global_4456448.f_166683[1] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vshwout") == 2)
	{
		Global_4456448.f_166683[3] = unk_0xEE6F60A09902D357(iVar0, "vshwout");
	}
	else
	{
		Global_4456448.f_166683[3] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vsenout") == 2)
	{
		Global_4456448.f_166683[2] = unk_0xEE6F60A09902D357(iVar0, "vsenout");
	}
	else
	{
		Global_4456448.f_166683[2] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vstgout") == 2)
	{
		Global_4456448.f_166683[4] = unk_0xEE6F60A09902D357(iVar0, "vstgout");
	}
	else
	{
		Global_4456448.f_166683[4] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vsbsout") == 2)
	{
		Global_4456448.f_166683[5] = unk_0xEE6F60A09902D357(iVar0, "vsbsout");
	}
	else
	{
		Global_4456448.f_166683[5] = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "alfutvs") == 2)
	{
		Global_4456448.f_166690 = unk_0xEE6F60A09902D357(iVar0, "alfutvs");
	}
	else
	{
		Global_4456448.f_166690 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vsdfstc") == 2)
	{
		Global_4456448.f_166691 = unk_0xEE6F60A09902D357(iVar0, "vsdfstc");
	}
	else if (((!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 23) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 24)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_13, 31)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 8))
	{
		Global_4456448.f_166691 = -1;
	}
	else if (((!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 23) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 24)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_13, 31)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 8))
	{
		Global_4456448.f_166691 = 0;
	}
	else if (((unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 23) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 24)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_13, 31)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 8))
	{
		Global_4456448.f_166691 = 1;
	}
	else if (((!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 23) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 24)) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_13, 31)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 8))
	{
		Global_4456448.f_166691 = 2;
	}
	else if (((!unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 23) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_12, 24)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_13, 31)) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_14, 8))
	{
		Global_4456448.f_166691 = 3;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "dspteam") == 2)
	{
		Global_4456448.f_185405 = unk_0xEE6F60A09902D357(iVar0, "dspteam");
	}
	else
	{
		Global_4456448.f_185405 = -1;
	}
	if (!func_111() && !func_285())
	{
		if (unk_0x62634429A483C408(iParam1))
		{
			StringCopy(&(Global_4456448.f_154367), unk_0x2B36163AFF2C657B(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_154367), func_284(), 64);
		}
		if (!func_283() && func_115() == 0)
		{
			if (func_277())
			{
				Global_4456448.f_154367 = { func_276() };
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_154367), unk_0x2B36163AFF2C657B(iVar0, "nm"), 64);
	}
	Global_4456448.f_156053 = unk_0xEE6F60A09902D357(iVar0, "mgrk");
	Global_4456448.f_156054 = unk_0xEE6F60A09902D357(iVar0, "mght");
	StringCopy(&(Global_4456448.f_154389[0 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[1 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[2 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[3 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[4 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[5 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[6 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_154389[7 /*16*/]), "", 64);
	uVar55 = unk_0xCB845A663B4DD2F3(iVar0, "dec");
	iVar56 = unk_0xB9A31E6892C3D2C2(unk_0x3854C8AFB1001E7E(uVar55, 0));
	if (iParam1 == -1 || unk_0x62634429A483C408(iParam1))
	{
		if (iVar56 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x6B06CA8F004A94A0(iVar55) - 1))
			{
				StringCopy(&(Global_4456448.f_154389[iVar2 /*16*/]), unk_0x3854C8AFB1001E7E(iVar55, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar58 = unk_0x3854C8AFB1001E7E(iVar55, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar56 > (63 * iVar2))
				{
					if (iVar56 > (63 * iVar2) + 63)
					{
						iVar57 = (63 * iVar2) + 63;
					}
					else
					{
						iVar57 = iVar56;
					}
					StringCopy(&(Global_4456448.f_154389[iVar2 /*16*/]), unk_0x906E9E5772443C60(sVar58, (63 * iVar2), iVar57), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_154389[0 /*16*/]), func_284(), 64);
	}
	if (unk_0x1D22B93425E4D657(iVar0, "ricb") == 2)
	{
		Global_4456448.f_188338 = unk_0xEE6F60A09902D357(iVar0, "ricb");
	}
	else
	{
		Global_4456448.f_188338 = 0;
	}
	if (unk_0x1D22B93425E4D657(iVar0, "ripvh") == 2)
	{
		Global_4456448.f_188339 = unk_0xEE6F60A09902D357(iVar0, "ripvh");
	}
	else
	{
		Global_4456448.f_188339 = 0;
	}
	Global_4456448.f_42 = unk_0xEE6F60A09902D357(iVar0, "tnum");
	Global_4456448.f_43 = unk_0xEE6F60A09902D357(iVar0, "mtnum");
	if (!func_275())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 14))
		{
			Global_4456448.f_41 = Global_4456448.f_42;
		}
		else if (unk_0x1D22B93425E4D657(iVar0, "dtn") == 2)
		{
			Global_4456448.f_41 = unk_0xEE6F60A09902D357(iVar0, "dtn");
		}
		else
		{
			Global_4456448.f_41 = Global_4456448.f_42;
		}
	}
	else
	{
		Global_4456448.f_41 = Global_4456448.f_42;
	}
	if (Global_4456448 == 0)
	{
		if (Global_2448961.f_569.f_11 != 0 && Global_4456448.f_42 != Global_2448961.f_569.f_11)
		{
			if (!Global_262145.f_4707 && func_63(Global_4456448.f_190930))
			{
				iVar59 = func_274();
				if (Global_2448961.f_569.f_11 < iVar59)
				{
					Global_2448961.f_569.f_11 = iVar59;
					if (unk_0x7C7787D2D7139A85() != -1)
					{
						Global_1627738[unk_0x7C7787D2D7139A85() /*38*/] = Global_2448961.f_569.f_11;
					}
				}
			}
			Global_4456448.f_42 = Global_2448961.f_569.f_11;
			Global_4456448.f_41 = Global_4456448.f_42;
		}
		else if ((func_271() || func_269()) && func_268())
		{
			iVar60 = func_274();
			fVar61 = (unk_0xBBDA792448DB5A89(iVar60) / unk_0xBBDA792448DB5A89(Global_4456448.f_37));
			iVar62 = 0;
			if (Global_4456448.f_42 == 3)
			{
				if (fVar61 <= 0.66f)
				{
					Global_4456448.f_42 = 2;
					iVar62 = 1;
				}
			}
			else if (Global_4456448.f_42 == 4)
			{
				if (fVar61 <= 0.5f)
				{
					Global_4456448.f_42 = 2;
					iVar62 = 1;
				}
				else if (fVar61 <= 0.75f)
				{
					Global_4456448.f_42 = 3;
					iVar62 = 1;
				}
			}
			if (iVar62 && Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28 >= Global_4456448.f_42)
			{
				Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_99.f_28 = func_266(Global_4456448.f_42);
			}
			if (Global_4456448.f_41 > Global_4456448.f_42)
			{
				Global_4456448.f_41 = Global_4456448.f_42;
			}
		}
	}
	func_265(iVar0);
	if (Global_4456448 == 1)
	{
		if (Global_4456448.f_42 > 4)
		{
			Global_4456448.f_42 = 4;
		}
	}
	else if (Global_4456448.f_42 > 4)
	{
		Global_4456448.f_42 = 4;
	}
	Global_4456448.f_142779 = unk_0xEE6F60A09902D357(iVar0, "atmdm");
	Global_4456448.f_56 = unk_0xEE6F60A09902D357(iVar0, "trel");
	Global_4456448.f_192008 = unk_0xEE6F60A09902D357(iVar0, "tpas");
	Global_4456448.f_156018 = unk_0xEE6F60A09902D357(iVar0, "ltm");
	Global_4456448.f_85 = { unk_0x158A0F7CCA751FFB(iVar0, "vcpr") };
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hstat") == 2)
	{
		Global_4456448.f_155988 = unk_0xEE6F60A09902D357(iVar0, "hstat");
	}
	else
	{
		Global_4456448.f_155988 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "micobs") == 2)
	{
		Global_4456448.f_154722 = unk_0xEE6F60A09902D357(iVar0, "micobs");
	}
	else
	{
		Global_4456448.f_154722 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "micopt") == 2)
	{
		Global_4456448.f_154723 = unk_0xEE6F60A09902D357(iVar0, "micopt");
	}
	else
	{
		Global_4456448.f_154723 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csgbs") == 2)
	{
		Global_4456448.f_154724 = unk_0xEE6F60A09902D357(iVar0, "csgbs");
	}
	else
	{
		Global_4456448.f_154724 = 0;
	}
	iVar63 = 0;
	while (iVar63 <= 29)
	{
		StringCopy(&cVar34, "csgc", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154725[iVar63] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154725[iVar63] = 0;
		}
		StringCopy(&cVar34, "csgci", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_154756[iVar63] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_154756[iVar63] = -1;
		}
		iVar63++;
	}
	iVar63 = 0;
	while (iVar63 <= 19)
	{
		StringCopy(&cVar34, "rzpos", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_101808[iVar63 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_101808[iVar63 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "rzzon", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_101869[iVar63] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_101869[iVar63] = 0;
		}
		StringCopy(&cVar34, "rzobj", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_101890[iVar63] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_101890[iVar63] = -1;
		}
		StringCopy(&cVar34, "rzacc", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_101911[iVar63] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_101911[iVar63] = 100f;
		}
		StringCopy(&cVar34, "rzcav", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_101933[iVar63] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_101933[iVar63] = -1;
		}
		iVar63++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "rzhmb") == 2)
	{
		Global_4456448.f_101932 = unk_0xEE6F60A09902D357(iVar0, "rzhmb");
	}
	else
	{
		Global_4456448.f_101932 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "numzr") == 2)
	{
		Global_4456448.f_101954 = unk_0xEE6F60A09902D357(iVar0, "numzr");
	}
	else
	{
		Global_4456448.f_101954 = 0;
	}
	iVar64 = unk_0x7408DCBD37A2C60F(iParam0, "ene");
	iVar65 = unk_0xEE6F60A09902D357(iVar64, "no");
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar34, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar34, iVar2 + 1, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2 && iVar65 > unk_0xEE6F60A09902D357(iVar0, &cVar34))
		{
			Global_4456448.f_142158[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_142158[iVar2] = -1;
		}
		iVar2++;
	}
	if (((iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "rsgmx") == 2) && unk_0x1D22B93425E4D657(iVar0, "rsgnu") == 2) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_35, 19))
	{
		Global_4456448.f_142165 = unk_0xEE6F60A09902D357(iVar0, "rsgmx");
		Global_4456448.f_142166 = unk_0xEE6F60A09902D357(iVar0, "rsgnu");
		Global_4456448.f_142167 = unk_0xEE6F60A09902D357(iVar0, "rsgbs");
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_35, 19))
		{
			Global_4456448.f_142165 = 29;
		}
		if (((Global_4456448.f_142165 > 0 && Global_4456448.f_142166 != 0) || Global_4456448.f_196143 != -1) || unk_0xA2BC31158C8CEFD2(Global_4456448.f_35, 19))
		{
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_142165 - 1))
			{
				if (iVar2 < 30)
				{
					StringCopy(&cVar34, "rsg", 8);
					StringIntConCat(&cVar34, iVar2, 8);
					MemCopy(&cVar66, {cVar34}, 4);
					StringConCat(&cVar66, "mx", 16);
					MemCopy(&cVar70, {cVar34}, 4);
					StringConCat(&cVar70, "nu", 16);
					if (unk_0x1D22B93425E4D657(iVar0, &cVar66) == 2 && unk_0x1D22B93425E4D657(iVar0, &cVar70) == 2)
					{
						Global_4456448.f_142199[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar66);
						Global_4456448.f_142230[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar70);
						MemCopy(&cVar66, {cVar34}, 4);
						StringConCat(&cVar66, "bs", 16);
						Global_4456448.f_142261[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar66);
					}
					MemCopy(&cVar66, {cVar34}, 4);
					StringConCat(&cVar66, "ee", 16);
					iVar36 = unk_0xEE6F60A09902D357(iVar0, &cVar66);
					Global_4456448.f_142168[iVar2] = iVar36;
				}
				iVar2++;
			}
		}
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tshd") == 2)
	{
		Global_4456448.f_156041 = unk_0xEE6F60A09902D357(iVar0, "tshd");
	}
	else
	{
		Global_4456448.f_156041 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mrd") == 2)
	{
		Global_4456448.f_156042 = unk_0xEE6F60A09902D357(iVar0, "mrd");
	}
	else
	{
		Global_4456448.f_156042 = 15;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "etim") == 3)
	{
		Global_4456448.f_156044 = unk_0x42AD093E466CD516(iVar0, "etim");
	}
	else
	{
		Global_4456448.f_156044 = 2.5f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "evel") == 3)
	{
		Global_4456448.f_156045 = unk_0x42AD093E466CD516(iVar0, "evel");
	}
	else
	{
		Global_4456448.f_156045 = 8f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "etimb") == 3)
	{
		Global_4456448.f_156046 = unk_0x42AD093E466CD516(iVar0, "etimb");
	}
	else
	{
		Global_4456448.f_156046 = 2.5f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "evelb") == 3)
	{
		Global_4456448.f_156047 = unk_0x42AD093E466CD516(iVar0, "evelb");
	}
	else
	{
		Global_4456448.f_156047 = 8f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "srct") == 2)
	{
		Global_4456448.f_156043 = unk_0xEE6F60A09902D357(iVar0, "srct");
	}
	else
	{
		Global_4456448.f_156043 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tptbd") == 2)
	{
		Global_4456448.f_156048 = unk_0xEE6F60A09902D357(iVar0, "tptbd");
	}
	else
	{
		Global_4456448.f_156048 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tptba") == 2)
	{
		Global_4456448.f_156049 = unk_0xEE6F60A09902D357(iVar0, "tptba");
	}
	else
	{
		Global_4456448.f_156049 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atspos") == 5)
	{
		Global_4456448.f_187502 = { unk_0x158A0F7CCA751FFB(iVar0, "atspos") };
	}
	else
	{
		Global_4456448.f_187502 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atscmp") == 5)
	{
		Global_4456448.f_187496 = { unk_0x158A0F7CCA751FFB(iVar0, "atscmp") };
	}
	else
	{
		Global_4456448.f_187496 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atscmr") == 5)
	{
		Global_4456448.f_187499 = { unk_0x158A0F7CCA751FFB(iVar0, "atscmr") };
	}
	else
	{
		Global_4456448.f_187499 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atsfov") == 3)
	{
		Global_4456448.f_187505 = unk_0x42AD093E466CD516(iVar0, "atsfov");
	}
	else
	{
		Global_4456448.f_187505 = 45f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atshed") == 3)
	{
		Global_4456448.f_187506 = unk_0x42AD093E466CD516(iVar0, "atshed");
	}
	else
	{
		Global_4456448.f_187506 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "atsveh") == 2)
	{
		Global_4456448.f_187507 = unk_0xEE6F60A09902D357(iVar0, "atsveh");
	}
	else
	{
		Global_4456448.f_187507 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hpdt1") == 2)
	{
		Global_4456448.f_155989[0] = unk_0xEE6F60A09902D357(iVar0, "hpdt1");
	}
	else
	{
		Global_4456448.f_155989[0] = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hpdt2") == 2)
	{
		Global_4456448.f_155989[1] = unk_0xEE6F60A09902D357(iVar0, "hpdt2");
	}
	else
	{
		Global_4456448.f_155989[1] = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vdt") == 2)
	{
		Global_4456448.f_155993 = unk_0xEE6F60A09902D357(iVar0, "vdt");
	}
	else
	{
		Global_4456448.f_155993 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrbs") == 2)
	{
		Global_4456448.f_185385 = unk_0xEE6F60A09902D357(iVar0, "hbrbs");
	}
	else
	{
		Global_4456448.f_185385 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrtt") == 2)
	{
		Global_4456448.f_185386 = unk_0xEE6F60A09902D357(iVar0, "hbrtt");
	}
	else
	{
		Global_4456448.f_185386 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrttm") == 2)
	{
		Global_4456448.f_185387 = unk_0xEE6F60A09902D357(iVar0, "hbrttm");
	}
	else
	{
		Global_4456448.f_185387 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrtrl") == 2)
	{
		Global_4456448.f_185388 = unk_0xEE6F60A09902D357(iVar0, "hbrtrl");
	}
	else
	{
		Global_4456448.f_185388 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrpdt") == 2)
	{
		Global_4456448.f_185390 = unk_0xEE6F60A09902D357(iVar0, "hbrpdt");
	}
	else
	{
		Global_4456448.f_185390 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrvdt") == 2)
	{
		Global_4456448.f_185392 = unk_0xEE6F60A09902D357(iVar0, "hbrvdt");
	}
	else
	{
		Global_4456448.f_185392 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrkt") == 2)
	{
		Global_4456448.f_185394 = unk_0xEE6F60A09902D357(iVar0, "hbrkt");
	}
	else
	{
		Global_4456448.f_185394 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbrph") == 2)
	{
		Global_4456448.f_185397 = unk_0xEE6F60A09902D357(iVar0, "hbrph");
	}
	else
	{
		Global_4456448.f_185397 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hecam") == 2)
	{
		Global_4456448.f_185400 = unk_0xEE6F60A09902D357(iVar0, "hecam");
	}
	else
	{
		Global_4456448.f_185400 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbhs") == 2)
	{
		Global_4456448.f_185398 = unk_0xEE6F60A09902D357(iVar0, "hbhs");
	}
	else
	{
		Global_4456448.f_185398 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hbht") == 2)
	{
		Global_4456448.f_185399 = unk_0xEE6F60A09902D357(iVar0, "hbht");
	}
	else
	{
		Global_4456448.f_185399 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sdrvm") == 2)
	{
		Global_4456448.f_188340 = unk_0xEE6F60A09902D357(iVar0, "sdrvm");
	}
	else
	{
		Global_4456448.f_188340 = 10000;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vstm") == 2)
	{
		Global_4456448.f_188341 = unk_0xEE6F60A09902D357(iVar0, "vstm");
	}
	else
	{
		Global_4456448.f_188341 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "inumbnc") == 2)
	{
		Global_4456448.f_188355 = unk_0xEE6F60A09902D357(iVar0, "inumbnc");
	}
	else
	{
		Global_4456448.f_188355 = 10000;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mdmgm") == 3)
	{
		Global_4456448.f_188342 = unk_0x42AD093E466CD516(iVar0, "mdmgm");
	}
	else
	{
		Global_4456448.f_188342 = 1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "itsms") == 2)
	{
		Global_4456448.f_191063 = unk_0xEE6F60A09902D357(iVar0, "itsms");
	}
	else
	{
		Global_4456448.f_191063 = 1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "igls") == 2)
	{
		Global_4456448.f_191064 = unk_0xEE6F60A09902D357(iVar0, "igls");
	}
	else
	{
		Global_4456448.f_191064 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "twdas") == 3)
	{
		Global_4456448.f_188343 = unk_0x42AD093E466CD516(iVar0, "twdas");
	}
	else
	{
		Global_4456448.f_188343 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vdt") == 2)
	{
		Global_4456448.f_190932 = unk_0xEE6F60A09902D357(iVar0, "sphft");
	}
	else
	{
		Global_4456448.f_190932 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sdsr") == 2)
	{
		Global_4456448.f_190890 = unk_0xEE6F60A09902D357(iVar0, "sdsr");
	}
	else
	{
		Global_4456448.f_190890 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cmxdftms") == 2)
	{
		Global_4456448.f_190955 = unk_0xEE6F60A09902D357(iVar0, "cmxdftms");
	}
	else
	{
		Global_4456448.f_190955 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "crlaa") == 2)
	{
		Global_4456448.f_190957 = unk_0xEE6F60A09902D357(iVar0, "crlaa");
	}
	else
	{
		Global_4456448.f_190957 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cmxtliv") == 2)
	{
		Global_4456448.f_190969 = unk_0xEE6F60A09902D357(iVar0, "cmxtliv");
	}
	else
	{
		Global_4456448.f_190969 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cmxdctl") == 2)
	{
		Global_4456448.f_190970 = unk_0xEE6F60A09902D357(iVar0, "cmxdctl");
	}
	else
	{
		Global_4456448.f_190970 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cmxmctl") == 2)
	{
		Global_4456448.f_190971 = unk_0xEE6F60A09902D357(iVar0, "cmxmctl");
	}
	else
	{
		Global_4456448.f_190971 = 0;
	}
	if ((((iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "hmmtt") == 2) && unk_0x1D22B93425E4D657(iVar0, "hmmts") == 2) && unk_0x1D22B93425E4D657(iVar0, "hmmte") == 2) && unk_0x1D22B93425E4D657(iVar0, "hmmth") == 2)
	{
		Global_4456448.f_185401 = unk_0xEE6F60A09902D357(iVar0, "hmmtt");
		Global_4456448.f_185402 = unk_0xEE6F60A09902D357(iVar0, "hmmts");
		Global_4456448.f_185403 = unk_0xEE6F60A09902D357(iVar0, "hmmte");
		Global_4456448.f_185404 = unk_0xEE6F60A09902D357(iVar0, "hmmth");
	}
	else
	{
		Global_4456448.f_185401 = 0;
		Global_4456448.f_185402 = 0;
		Global_4456448.f_185403 = 0;
		Global_4456448.f_185404 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tstrm") == 2)
	{
		Global_4456448.f_187443 = unk_0xEE6F60A09902D357(iVar0, "tstrm");
	}
	else
	{
		Global_4456448.f_187443 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar34, "dtspk", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_166268[iVar2 /*8*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_166268[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar34, "cspnm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_141895[iVar2 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_141895[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "csvnm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_141976[iVar2 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_141976[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "csonm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_142057[iVar2 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_142057[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 29)
	{
		StringCopy(&cVar28, "otxsgo", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 4)
		{
			StringCopy(&(Global_4456448.f_142292[iVar2 /*16*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar28), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_142292[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar74 = 0;
	while (iVar74 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar34, "ofit", 8);
			StringIntConCat(&cVar34, iVar3 + 1, 8);
			StringIntConCat(&cVar34, iVar74, 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_166602[iVar74 /*14*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			}
			iVar3++;
		}
		StringCopy(&cVar34, "ofs1", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166719[iVar74 /*4*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166719[iVar74 /*4*/][0] = 0;
		}
		StringCopy(&cVar34, "ofs2", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166719[iVar74 /*4*/][1] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166719[iVar74 /*4*/][1] = 0;
		}
		StringCopy(&cVar34, "mask1", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166741[iVar74 /*3*/][0] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166741[iVar74 /*3*/][0] = 0;
		}
		StringCopy(&cVar28, "gear", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			if (iVar3 > 0)
			{
				StringConCat(&cVar28, "h", 16);
				StringIntConCat(&cVar28, iVar3, 16);
			}
			if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
			{
				Global_4456448.f_166692[iVar74 /*4*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar28);
			}
			else
			{
				Global_4456448.f_166692[iVar74 /*4*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar34, "geard", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166709[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166709[iVar74] = -1;
		}
		StringCopy(&cVar34, "apwfr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184537[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184537[iVar74] = -1;
		}
		StringCopy(&cVar34, "apwlr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184542[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184542[iVar74] = -1;
		}
		StringCopy(&cVar34, "tcmin", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2 && !func_200())
		{
			Global_4456448.f_184921[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184921[iVar74] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar34, "trcmn", 8);
			StringIntConCat(&cVar34, iVar3, 8);
			StringIntConCat(&cVar34, iVar74, 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2 && !func_200())
			{
				Global_4456448.f_184926[iVar74 /*5*/][iVar3] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_184926[iVar74 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar34, "tmrsp", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184948[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184948[iVar74] = 0;
		}
		StringCopy(&cVar34, "vifcit", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_191907[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_191907[iVar74] = -1;
		}
		StringCopy(&cVar34, "tvpm", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_60679[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_60679[iVar74] = -1;
		}
		StringCopy(&cVar34, "tvnc", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_60658[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_60658[iVar74] = -1;
		}
		StringCopy(&cVar34, "tmrees", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_184953[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184953[iVar74] = 1f;
		}
		StringCopy(&cVar34, "tmvhp", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_60638[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_60638[iVar74] = 100;
		}
		StringCopy(&cVar34, "tmvds", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_60643[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_60643[iVar74] = 1f;
		}
		StringCopy(&cVar34, "tblty", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_60673[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_60673[iVar74] = 0;
		}
		StringCopy(&cVar34, "pmpos", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_153466[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_153466[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "pmpoi", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_153479[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_153479[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "pmrad", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_153492[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_153492[iVar74] = 0f;
		}
		StringCopy(&cVar34, "dfofit", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166659[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166659[iVar74] = -1;
		}
		StringCopy(&cVar34, "dfstyl", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_166736[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_166736[iVar74] = -1;
		}
		StringCopy(&cVar34, "clrovr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_149437[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_149437[iVar74] = -1;
		}
		StringCopy(&cVar34, "tswpal", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_88012[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_88012[iVar74] = -1;
		}
		StringCopy(&cVar34, "1cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_142138[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_142138[iVar74] = 0;
		}
		StringCopy(&cVar34, "2cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_142143[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_142143[iVar74] = 0;
		}
		StringCopy(&cVar34, "3cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_142148[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_142148[iVar74] = 0;
		}
		StringCopy(&cVar34, "4cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_142153[iVar74] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_142153[iVar74] = 0;
		}
		iVar75 = 0;
		while (iVar75 <= 3)
		{
			StringCopy(&cVar28, "trstp", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
			{
				Global_4456448.f_153591[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
			}
			else
			{
				Global_4456448.f_153591[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar28, "trstf", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
			{
				Global_4456448.f_153889[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
			}
			else
			{
				Global_4456448.f_153889[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar28, "trsth", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
			{
				Global_4456448.f_153804[iVar74 /*21*/][iVar75 /*5*/][0] = unk_0x42AD093E466CD516(iVar0, &cVar28);
			}
			else
			{
				Global_4456448.f_153804[iVar74 /*21*/][iVar75 /*5*/][0] = 0f;
			}
			iVar76 = 0;
			while (iVar76 <= 3)
			{
				StringCopy(&cVar28, "trstp", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringIntConCat(&cVar28, iVar75, 16);
				StringConCat(&cVar28, "n", 16);
				StringIntConCat(&cVar28, iVar76, 16);
				if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
				{
					Global_4456448.f_153591[iVar74 /*53*/][iVar75 /*13*/][iVar76 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
				}
				else
				{
					Global_4456448.f_153591[iVar74 /*53*/][iVar75 /*13*/][iVar76 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar28, "trsth", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringIntConCat(&cVar28, iVar75, 16);
				StringConCat(&cVar28, "n", 16);
				StringIntConCat(&cVar28, iVar76, 16);
				if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
				{
					Global_4456448.f_153804[iVar74 /*21*/][iVar75 /*5*/][iVar76] = unk_0x42AD093E466CD516(iVar0, &cVar28);
				}
				else
				{
					Global_4456448.f_153804[iVar74 /*21*/][iVar75 /*5*/][iVar76] = 0f;
				}
				iVar76++;
			}
			StringCopy(&cVar34, "trsrl", 8);
			StringIntConCat(&cVar34, iVar74, 8);
			StringIntConCat(&cVar34, iVar75, 8);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_188317[iVar74 /*5*/][iVar75] = unk_0xEE6F60A09902D357(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_188317[iVar74 /*5*/][iVar75] = 0;
			}
			iVar75++;
		}
		iVar77 = 0;
		while (iVar77 <= 3)
		{
			StringCopy(&cVar28, "iltt", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			StringIntConCat(&cVar28, iVar77, 16);
			if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
			{
				Global_4456448.f_190934[iVar74 /*5*/][iVar77] = unk_0xEE6F60A09902D357(iVar0, &cVar28);
			}
			else
			{
				Global_4456448.f_190934[iVar74 /*5*/][iVar77] = 0;
			}
			iVar77++;
		}
		iVar78 = 0;
		while (iVar78 <= 4)
		{
			iVar79 = 0;
			while (iVar79 <= 3)
			{
				StringCopy(&cVar28, "cpv", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringConCat(&cVar28, "i", 16);
				StringIntConCat(&cVar28, iVar78, 16);
				StringConCat(&cVar28, "s", 16);
				StringIntConCat(&cVar28, iVar79, 16);
				if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
				{
					Global_4456448.f_187509[iVar74 /*66*/][iVar78 /*13*/][iVar79 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
				}
				else
				{
					Global_4456448.f_187509[iVar74 /*66*/][iVar78 /*13*/][iVar79 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar28, "cph", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringConCat(&cVar28, "i", 16);
				StringIntConCat(&cVar28, iVar78, 16);
				StringConCat(&cVar28, "s", 16);
				StringIntConCat(&cVar28, iVar79, 16);
				if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
				{
					Global_4456448.f_187774[iVar74 /*26*/][iVar78 /*5*/][iVar79] = unk_0x42AD093E466CD516(iVar0, &cVar28);
				}
				else
				{
					Global_4456448.f_187774[iVar74 /*26*/][iVar78 /*5*/][iVar79] = -1f;
				}
				iVar79++;
			}
			iVar78++;
		}
		StringCopy(&cVar34, "tscpos", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_187447[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_187447[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tscrot", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_187460[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_187460[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tspos", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_187473[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_187473[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tscfov", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_187486[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_187486[iVar74] = 45f;
		}
		StringCopy(&cVar34, "tshead", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_187491[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_187491[iVar74] = 0f;
		}
		iVar74++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar34, "pnid", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_184596[iVar2 /*18*/]), unk_0x2B36163AFF2C657B(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_184596[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar34, "pnlv", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_184596[iVar2 /*18*/].f_16 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184596[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar34, "pnvr", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar34) == 2 && !unk_0x9591DE0F00127F2A(&(Global_4456448.f_184596[iVar2 /*18*/])))
		{
			Global_4456448.f_184596[iVar2 /*18*/].f_17 = unk_0xEE6F60A09902D357(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_184596[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cposr") == 3)
	{
		Global_4456448.f_188356 = unk_0x42AD093E466CD516(iVar0, "cposr");
	}
	else
	{
		Global_4456448.f_188356 = 60f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cporv") == 3)
	{
		Global_4456448.f_188359 = unk_0x42AD093E466CD516(iVar0, "cporv");
	}
	else
	{
		Global_4456448.f_188359 = -1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmbbp") == 2)
	{
		Global_4456448.f_188345 = unk_0xEE6F60A09902D357(iVar0, "bmbbp");
	}
	else
	{
		Global_4456448.f_188345 = 2;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmber") == 2)
	{
		Global_4456448.f_188346 = unk_0xEE6F60A09902D357(iVar0, "bmber");
	}
	else
	{
		Global_4456448.f_188346 = 2;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmbet") == 2)
	{
		Global_4456448.f_188347 = unk_0xEE6F60A09902D357(iVar0, "bmbet");
	}
	else
	{
		Global_4456448.f_188347 = 3000;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmbsi") == 2)
	{
		Global_4456448.f_188348 = unk_0xEE6F60A09902D357(iVar0, "bmbsi");
	}
	else
	{
		Global_4456448.f_188348 = 150;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmbdi") == 3)
	{
		Global_4456448.f_188349 = unk_0x42AD093E466CD516(iVar0, "bmbdi");
	}
	else
	{
		Global_4456448.f_188349 = 3f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bmbio") == 3)
	{
		Global_4456448.f_188350 = unk_0x42AD093E466CD516(iVar0, "bmbio");
	}
	else
	{
		Global_4456448.f_188350 = 1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fvjhdt") == 2)
	{
		Global_4456448.f_188351 = unk_0xEE6F60A09902D357(iVar0, "fvjhdt");
	}
	else
	{
		Global_4456448.f_188351 = 25;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fvjhmd") == 2)
	{
		Global_4456448.f_188352 = unk_0xEE6F60A09902D357(iVar0, "fvjhmd");
	}
	else
	{
		Global_4456448.f_188352 = 5;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fvjfvd") == 2)
	{
		Global_4456448.f_188353 = unk_0xEE6F60A09902D357(iVar0, "fvjfvd");
	}
	else
	{
		Global_4456448.f_188353 = 5;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "fvjfvc") == 2)
	{
		Global_4456448.f_188354 = unk_0xEE6F60A09902D357(iVar0, "fvjfvc");
	}
	else
	{
		Global_4456448.f_188354 = 2;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cpopr") == 3)
	{
		Global_4456448.f_188357 = unk_0x42AD093E466CD516(iVar0, "cpopr");
	}
	else
	{
		Global_4456448.f_188357 = 5f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cpohr") == 3)
	{
		Global_4456448.f_188358 = unk_0x42AD093E466CD516(iVar0, "cpohr");
	}
	else
	{
		Global_4456448.f_188358 = 60f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bevhtd") == 3)
	{
		Global_4456448.f_60525 = unk_0x42AD093E466CD516(iVar0, "bevhtd");
	}
	else
	{
		Global_4456448.f_60525 = 0.075f;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		StringCopy(&cVar28, "fsclv", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_60528[iVar2 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_60528[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "fsclr", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_60559[iVar2 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_60559[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		iVar2++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "bevhdd") == 3)
	{
		Global_4456448.f_188358 = unk_0x42AD093E466CD516(iVar0, "bevhdd");
	}
	else
	{
		Global_4456448.f_188358 = 0.075f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc0") == 2)
	{
		Global_4456448.f_188360 = unk_0xEE6F60A09902D357(iVar0, "ratc0");
	}
	else
	{
		Global_4456448.f_188360 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc1") == 2)
	{
		Global_4456448.f_188361 = unk_0xEE6F60A09902D357(iVar0, "ratc1");
	}
	else
	{
		Global_4456448.f_188361 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc2") == 2)
	{
		Global_4456448.f_188362 = unk_0xEE6F60A09902D357(iVar0, "ratc2");
	}
	else
	{
		Global_4456448.f_188362 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc3") == 2)
	{
		Global_4456448.f_188363 = unk_0xEE6F60A09902D357(iVar0, "ratc3");
	}
	else
	{
		Global_4456448.f_188363 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc4") == 2)
	{
		Global_4456448.f_188364 = unk_0xEE6F60A09902D357(iVar0, "ratc4");
	}
	else
	{
		Global_4456448.f_188364 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc5") == 2)
	{
		Global_4456448.f_188365 = unk_0xEE6F60A09902D357(iVar0, "ratc5");
	}
	else
	{
		Global_4456448.f_188365 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc6") == 2)
	{
		Global_4456448.f_188366 = unk_0xEE6F60A09902D357(iVar0, "ratc6");
	}
	else
	{
		Global_4456448.f_188366 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc9") == 2)
	{
		Global_4456448.f_188370 = unk_0xEE6F60A09902D357(iVar0, "ratc9");
	}
	else
	{
		Global_4456448.f_188370 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc7") == 2)
	{
		Global_4456448.f_188368 = unk_0xEE6F60A09902D357(iVar0, "ratc7");
	}
	else
	{
		Global_4456448.f_188368 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratc8") == 2)
	{
		Global_4456448.f_188369 = unk_0xEE6F60A09902D357(iVar0, "ratc8");
	}
	else
	{
		Global_4456448.f_188369 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ratcm") == 3)
	{
		Global_4456448.f_188367 = unk_0x42AD093E466CD516(iVar0, "ratcm");
	}
	else
	{
		Global_4456448.f_188367 = -1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cdrt") == 3)
	{
		Global_4456448.f_188372 = unk_0x42AD093E466CD516(iVar0, "cdrt");
	}
	else
	{
		Global_4456448.f_188372 = -1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_4456448.f_188373), unk_0x2B36163AFF2C657B(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188373), "", 16);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_4456448.f_188377), unk_0x2B36163AFF2C657B(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188377), "", 16);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csttl2") == 4)
	{
		StringCopy(&(Global_4456448.f_188381), unk_0x2B36163AFF2C657B(iVar0, "csttl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188381), "", 16);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csstl2") == 4)
	{
		StringCopy(&(Global_4456448.f_188385), unk_0x2B36163AFF2C657B(iVar0, "csstl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188385), "", 16);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csttl3") == 4)
	{
		StringCopy(&(Global_4456448.f_188389), unk_0x2B36163AFF2C657B(iVar0, "csttl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188389), "", 16);
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csstl3") == 4)
	{
		StringCopy(&(Global_4456448.f_188393), unk_0x2B36163AFF2C657B(iVar0, "csstl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_188393), "", 16);
	}
	func_264();
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ssdsp") == 5)
	{
		Global_4456448.f_190883 = { unk_0x158A0F7CCA751FFB(iVar0, "ssdsp") };
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ssdsr") == 3)
	{
		Global_4456448.f_190886 = unk_0x42AD093E466CD516(iVar0, "ssdsr");
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ssder") == 3)
	{
		Global_4456448.f_190887 = unk_0x42AD093E466CD516(iVar0, "ssder");
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ssdst") == 2)
	{
		Global_4456448.f_190888 = unk_0xEE6F60A09902D357(iVar0, "ssdst");
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "ssdtg") == 2)
	{
		Global_4456448.f_190889 = unk_0xEE6F60A09902D357(iVar0, "ssdtg");
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp0") == 2)
	{
		Global_4456448.f_191065 = unk_0xEE6F60A09902D357(iVar0, "vwp0");
	}
	else
	{
		Global_4456448.f_191065 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp1") == 2)
	{
		Global_4456448.f_191066 = unk_0xEE6F60A09902D357(iVar0, "vwp1");
	}
	else
	{
		Global_4456448.f_191066 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp2") == 2)
	{
		Global_4456448.f_191068 = unk_0xEE6F60A09902D357(iVar0, "vwp2");
	}
	else
	{
		Global_4456448.f_191068 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp3") == 2)
	{
		Global_4456448.f_191069 = unk_0xEE6F60A09902D357(iVar0, "vwp3");
	}
	else
	{
		Global_4456448.f_191069 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp4") == 2)
	{
		Global_4456448.f_191070 = unk_0xEE6F60A09902D357(iVar0, "vwp4");
	}
	else
	{
		Global_4456448.f_191070 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp5") == 2)
	{
		Global_4456448.f_191067 = unk_0xEE6F60A09902D357(iVar0, "vwp5");
	}
	else
	{
		Global_4456448.f_191067 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp15") == 2)
	{
		Global_4456448.f_191072 = unk_0xEE6F60A09902D357(iVar0, "vwp15");
	}
	else
	{
		Global_4456448.f_191072 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwp16") == 2)
	{
		Global_4456448.f_191073 = unk_0xEE6F60A09902D357(iVar0, "vwp16");
	}
	else
	{
		Global_4456448.f_191073 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwpbhd") == 2)
	{
		Global_4456448.f_191071 = unk_0xEE6F60A09902D357(iVar0, "vwpbhd");
	}
	else
	{
		Global_4456448.f_191071 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_191077 = unk_0xEE6F60A09902D357(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_191077 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwmgfr") == 2)
	{
		Global_4456448.f_191095 = unk_0xEE6F60A09902D357(iVar0, "vwmgfr");
	}
	else
	{
		Global_4456448.f_191095 = 5;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwmgda") == 2)
	{
		Global_4456448.f_191096 = unk_0xEE6F60A09902D357(iVar0, "vwmgda");
	}
	else
	{
		Global_4456448.f_191096 = 350;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwmgnb") == 2)
	{
		Global_4456448.f_191097 = unk_0xEE6F60A09902D357(iVar0, "vwmgnb");
	}
	else
	{
		Global_4456448.f_191097 = 100;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "crttn") == 2)
	{
		Global_4456448.f_191098 = unk_0xEE6F60A09902D357(iVar0, "crttn");
	}
	else
	{
		Global_4456448.f_191098 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "smoc") == 2)
	{
		Global_4456448.f_60527 = unk_0xEE6F60A09902D357(iVar0, "smoc");
	}
	else
	{
		Global_4456448.f_60527 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vrsp") == 2)
	{
		Global_4456448.f_191455 = unk_0xEE6F60A09902D357(iVar0, "vrsp");
	}
	else
	{
		Global_4456448.f_191455 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "otrds") == 2)
	{
		Global_4456448.f_191444 = unk_0xEE6F60A09902D357(iVar0, "otrds");
	}
	else
	{
		Global_4456448.f_191444 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "otsdr") == 2)
	{
		Global_4456448.f_191446 = unk_0xEE6F60A09902D357(iVar0, "otsdr");
	}
	else
	{
		Global_4456448.f_191446 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "otrsc") == 2)
	{
		Global_4456448.f_191447 = unk_0xEE6F60A09902D357(iVar0, "otrsc");
	}
	else
	{
		Global_4456448.f_191447 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "otrpc") == 2)
	{
		Global_4456448.f_191445 = unk_0xEE6F60A09902D357(iVar0, "otrpc");
	}
	else
	{
		Global_4456448.f_191445 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mocb1") == 2)
	{
		Global_4456448.f_191450 = unk_0xEE6F60A09902D357(iVar0, "mocb1");
	}
	else
	{
		Global_4456448.f_191450 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mocb2") == 2)
	{
		Global_4456448.f_191450.f_1 = unk_0xEE6F60A09902D357(iVar0, "mocb2");
	}
	else
	{
		Global_4456448.f_191450.f_1 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mocb3") == 2)
	{
		Global_4456448.f_191450.f_2 = unk_0xEE6F60A09902D357(iVar0, "mocb3");
	}
	else
	{
		Global_4456448.f_191450.f_2 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "moccc") == 2)
	{
		Global_4456448.f_191450.f_3 = unk_0xEE6F60A09902D357(iVar0, "moccc");
	}
	else
	{
		Global_4456448.f_191450.f_3 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "mocbs") == 2)
	{
		Global_4456448.f_191450.f_4 = unk_0xEE6F60A09902D357(iVar0, "mocbs");
	}
	else
	{
		Global_4456448.f_191450.f_4 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_191077 = unk_0xEE6F60A09902D357(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_191077 = 0;
	}
	Global_4456448.f_191088 = { unk_0x158A0F7CCA751FFB(iVar0, "vtwsp") };
	Global_4456448.f_191091 = { unk_0x158A0F7CCA751FFB(iVar0, "vtwsr") };
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tsc3") == 3)
	{
		Global_4456448.f_191074 = unk_0x42AD093E466CD516(iVar0, "tsc3");
	}
	else
	{
		Global_4456448.f_191074 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "tsc4") == 3)
	{
		Global_4456448.f_191075 = unk_0x42AD093E466CD516(iVar0, "tsc4");
	}
	else
	{
		Global_4456448.f_191075 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "csstd") == 2)
	{
		Global_4456448.f_191076 = unk_0xEE6F60A09902D357(iVar0, "csstd");
	}
	else
	{
		Global_4456448.f_191076 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "prpccd") == 2)
	{
		Global_4456448.f_191960 = unk_0xEE6F60A09902D357(iVar0, "prpccd");
	}
	else
	{
		Global_4456448.f_191960 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_191961 = unk_0xEE6F60A09902D357(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_191961 = 20;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "objsctt") == 2)
	{
		Global_4456448.f_192123 = unk_0xEE6F60A09902D357(iVar0, "objsctt");
	}
	else
	{
		Global_4456448.f_192123 = 20;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cctvde") == 2)
	{
		Global_4456448.f_60686 = unk_0xEE6F60A09902D357(iVar0, "cctvde");
	}
	else
	{
		Global_4456448.f_60686 = 5000;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "cctvag") == 2)
	{
		Global_4456448.f_60687 = unk_0xEE6F60A09902D357(iVar0, "cctvag");
	}
	else
	{
		Global_4456448.f_60687 = -1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_191961 = unk_0xEE6F60A09902D357(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_191961 = 20;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sba") == 3)
	{
		Global_4456448.f_192007 = unk_0x42AD093E466CD516(iVar0, "sba");
	}
	else
	{
		Global_4456448.f_192007 = 0.5f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "sccd") == 2)
	{
		Global_4456448.f_191995 = unk_0xEE6F60A09902D357(iVar0, "sccd");
	}
	else
	{
		Global_4456448.f_191995 = 500;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmsf") == 3)
	{
		Global_4456448.f_192006 = unk_0x42AD093E466CD516(iVar0, "scmsf");
	}
	else
	{
		Global_4456448.f_192006 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "schf") == 3)
	{
		Global_4456448.f_191996 = unk_0x42AD093E466CD516(iVar0, "schf");
	}
	else
	{
		Global_4456448.f_191996 = 10f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmnhfs") == 3)
	{
		Global_4456448.f_191998 = unk_0x42AD093E466CD516(iVar0, "scmnhfs");
	}
	else
	{
		Global_4456448.f_191998 = 1f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scvf") == 3)
	{
		Global_4456448.f_191997 = unk_0x42AD093E466CD516(iVar0, "scvf");
	}
	else
	{
		Global_4456448.f_191997 = 0.5f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmnvfs") == 3)
	{
		Global_4456448.f_191999 = unk_0x42AD093E466CD516(iVar0, "scmnvfs");
	}
	else
	{
		Global_4456448.f_191999 = 0f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmxhf") == 3)
	{
		Global_4456448.f_192000 = unk_0x42AD093E466CD516(iVar0, "scmxhf");
	}
	else
	{
		Global_4456448.f_192000 = 25f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmnhf") == 3)
	{
		Global_4456448.f_192001 = unk_0x42AD093E466CD516(iVar0, "scmnhf");
	}
	else
	{
		Global_4456448.f_192001 = 15f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmxvf") == 3)
	{
		Global_4456448.f_192002 = unk_0x42AD093E466CD516(iVar0, "scmxvf");
	}
	else
	{
		Global_4456448.f_192002 = 6f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmnvf") == 3)
	{
		Global_4456448.f_192003 = unk_0x42AD093E466CD516(iVar0, "scmnvf");
	}
	else
	{
		Global_4456448.f_192003 = 4f;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scd") == 2)
	{
		Global_4456448.f_192004 = unk_0xEE6F60A09902D357(iVar0, "scd");
	}
	else
	{
		Global_4456448.f_192004 = 10;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "scmind") == 2)
	{
		Global_4456448.f_192005 = unk_0xEE6F60A09902D357(iVar0, "scmind");
	}
	else
	{
		Global_4456448.f_192005 = 1;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "awpsobm") == 2)
	{
		Global_4456448.f_192122 = unk_0xEE6F60A09902D357(iVar0, "awpsobm");
	}
	else
	{
		Global_4456448.f_192122 = 0;
	}
	iVar74 = 0;
	while (iVar74 <= 4)
	{
		StringCopy(&cVar28, "rmspco", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_192160[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_192160[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "rmspch", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
		{
			Global_4456448.f_192176[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_192176[iVar74] = 0f;
		}
		StringCopy(&cVar28, "rmspcc", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_192182[iVar74 /*3*/] = { unk_0x158A0F7CCA751FFB(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_192182[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "rmspcr", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
		{
			Global_4456448.f_192198[iVar74] = unk_0x42AD093E466CD516(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_192198[iVar74] = 0f;
		}
		iVar74++;
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		StringCopy(&cVar28, "cgsd", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		StringConCat(&cVar28, "a", 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 3)
		{
			Global_4456448.f_196510[iVar2] = unk_0x42AD093E466CD516(iVar0, &cVar28);
		}
		else if (iVar2 == 0)
		{
			Global_4456448.f_196510[iVar2] = 1.25f;
		}
		else if (iVar2 == 1)
		{
			Global_4456448.f_196510[iVar2] = 1f;
		}
		iVar2++;
	}
	StringCopy(&cVar28, "cgslt", 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
	{
		Global_4456448.f_196513 = unk_0xEE6F60A09902D357(iVar0, &cVar28);
	}
	else
	{
		Global_4456448.f_196513 = 10;
	}
	StringCopy(&cVar28, "pnEMPd", 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
	{
		Global_4456448.f_196507 = unk_0xEE6F60A09902D357(iVar0, &cVar28);
	}
	else
	{
		Global_4456448.f_196507 = 60000;
	}
	StringCopy(&cVar28, "pnEMPp", 16);
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
	{
		Global_4456448.f_196507.f_1 = unk_0xEE6F60A09902D357(iVar0, &cVar28);
	}
	else
	{
		Global_4456448.f_196507.f_1 = 35;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		StringCopy(&cVar28, "awtt", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, &cVar28) == 2)
		{
			Global_4456448.f_192124[iVar2] = unk_0xEE6F60A09902D357(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_192124[iVar2] = 6;
		}
		iVar2++;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "awtrc") == 2)
	{
		Global_4456448.f_192157 = unk_0xEE6F60A09902D357(iVar0, "awtrc");
	}
	else
	{
		Global_4456448.f_192157 = 0;
	}
	if (iVar0 != 0 && unk_0x1D22B93425E4D657(iVar0, "vwfdt") == 3)
	{
		Global_4456448.f_192212 = unk_0x42AD093E466CD516(iVar0, "vwfdt");
	}
	else
	{
		Global_4456448.f_192212 = 2.5f;
	}
	func_263(iVar0);
}

void func_263(int iParam0)
{
	int iVar0;
	char cVar1[16];
	
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar1") == 3)
	{
		Global_4456448.f_196129 = unk_0x42AD093E466CD516(iParam0, "carbar1");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar2") == 3)
	{
		Global_4456448.f_196129.f_1 = unk_0x42AD093E466CD516(iParam0, "carbar2");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar3") == 3)
	{
		Global_4456448.f_196129.f_2 = unk_0x42AD093E466CD516(iParam0, "carbar3");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar4") == 3)
	{
		Global_4456448.f_196129.f_3 = unk_0x42AD093E466CD516(iParam0, "carbar4");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar5") == 3)
	{
		Global_4456448.f_196129.f_4 = unk_0x42AD093E466CD516(iParam0, "carbar5");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar6") == 3)
	{
		Global_4456448.f_196129.f_5 = unk_0x42AD093E466CD516(iParam0, "carbar6");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar7") == 3)
	{
		Global_4456448.f_196129.f_6 = unk_0x42AD093E466CD516(iParam0, "carbar7");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar8") == 3)
	{
		Global_4456448.f_196129.f_7 = unk_0x42AD093E466CD516(iParam0, "carbar8");
	}
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, "carbar9") == 3)
	{
		Global_4456448.f_196129.f_8 = unk_0x42AD093E466CD516(iParam0, "carbar9");
	}
	StringCopy(&cVar1, "", 16);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "carbar10", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar1) == 2)
		{
			Global_4456448.f_196129.f_9[iVar0] = unk_0xEE6F60A09902D357(iParam0, &cVar1);
		}
		iVar0++;
	}
}

void func_264()
{
	Global_4456448.f_190883 = { 0f, 0f, 0f };
	Global_4456448.f_190886 = 30f;
	Global_4456448.f_190887 = 5f;
	Global_4456448.f_190888 = 30000;
	Global_4456448.f_190889 = 15000;
}

void func_265(int iParam0)
{
	char cVar0[16];
	int iVar4;
	int iVar5;
	
	StringCopy(&cVar0, "MCV_BS1", 16);
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_196143.f_1 = unk_0xEE6F60A09902D357(iParam0, &cVar0);
	}
	StringCopy(&cVar0, "MCV_ESET", 16);
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_196143 = unk_0xEE6F60A09902D357(iParam0, &cVar0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		StringCopy(&cVar0, "MCV_EHP", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_2[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_2[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 5)
	{
		StringCopy(&cVar0, "MCV_EII", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_6[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_6[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 15)
	{
		StringCopy(&cVar0, "MCV_EMN", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_13[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_13[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 6)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			StringCopy(&cVar0, "MCV_ESPW", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_196143.f_30[iVar4 /*6*/][iVar5] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_196143.f_30[iVar4 /*6*/][iVar5] = -1;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TTE", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_73[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_73[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRF", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_78[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_78[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TRT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_83[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_83[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_TZN", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_88[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_88[iVar4] = -1;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		iVar5 = 0;
		while (iVar5 <= 4)
		{
			StringCopy(&cVar0, "MCV_TMS", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_196143.f_93[iVar4 /*6*/][iVar5] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_196143.f_93[iVar4 /*6*/][iVar5] = 0;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		StringCopy(&cVar0, "MCV_OMS", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/] = 0;
		}
		StringCopy(&cVar0, "MCV_OMT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/].f_1 = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/].f_1 = -1;
		}
		StringCopy(&cVar0, "MCV_OMST", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/].f_2 = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_118[iVar4 /*3*/].f_2 = -1;
		}
		iVar4++;
	}
	StringCopy(&cVar0, "MCV_JTE", 16);
	if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
	{
		Global_4456448.f_196143.f_131 = unk_0xEE6F60A09902D357(iParam0, &cVar0);
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		iVar5 = 0;
		while (iVar5 <= 3)
		{
			StringCopy(&cVar0, "MCV_JTP", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_196143.f_132[iVar4 /*5*/][iVar5] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_196143.f_132[iVar4 /*5*/][iVar5] = 0;
			}
			StringCopy(&cVar0, "MCV_JTF", 16);
			StringIntConCat(&cVar0, iVar4, 16);
			StringIntConCat(&cVar0, iVar5, 16);
			if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
			{
				Global_4456448.f_196143.f_148[iVar4 /*5*/][iVar5] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
			}
			else
			{
				Global_4456448.f_196143.f_148[iVar4 /*5*/][iVar5] = 0;
			}
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 4)
	{
		StringCopy(&cVar0, "MCV_ECO", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 2)
		{
			Global_4456448.f_196143.f_164[iVar4] = unk_0xEE6F60A09902D357(iParam0, &cVar0);
		}
		else
		{
			Global_4456448.f_196143.f_164[iVar4] = 0;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 <= 11)
	{
		StringCopy(&cVar0, "MCV_POT", 16);
		StringIntConCat(&cVar0, iVar4, 16);
		if (iParam0 != 0 && unk_0x1D22B93425E4D657(iParam0, &cVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_196143.f_170[iVar4 /*16*/]), unk_0x2B36163AFF2C657B(iParam0, &cVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_196143.f_170[iVar4 /*16*/]), "", 64);
		}
		iVar4++;
	}
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = unk_0x0C98179F08C6DA4F(iVar0);
		if ((unk_0xD56C8C2B75BF9665(iVar5) && unk_0xA890E17DFBBB3192(iVar5)) && iVar5 != unk_0x7C7787D2D7139A85())
		{
			iVar2 = iVar5;
			if ((!func_267(iVar5) && Global_1590446[iVar2 /*871*/].f_211 != 8) && !unk_0xA2BC31158C8CEFD2(Global_1590446[iVar2 /*871*/].f_39.f_18, 14))
			{
				if (Global_1590446[iVar2 /*871*/].f_99.f_28 != -1)
				{
					unk_0xA1E7A40E1F56E511(&iVar1, Global_1590446[iVar2 /*871*/].f_99.f_28);
					if (Global_1590446[iVar2 /*871*/].f_99.f_28 >= iParam0 && iVar2 < unk_0x7C7787D2D7139A85())
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
		if (!unk_0xA2BC31158C8CEFD2(iVar1, iVar0))
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

bool func_267(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_99.f_32, 5);
}

var func_268()
{
	return Global_1654084.f_3;
}

int func_269()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_270();
	}
	return func_135(Global_4456448.f_154360);
}

var func_270()
{
	return Global_2448961.f_17;
}

int func_271()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_273();
	}
	return func_272(Global_4456448.f_154360);
}

int func_272(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_273()
{
	return Global_2448961.f_15;
}

int func_274()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
		if ((((unk_0xD56C8C2B75BF9665(iVar2) && unk_0xA890E17DFBBB3192(iVar2)) && !func_267(iVar2)) && Global_1590446[iVar2 /*871*/].f_211 != 8) && !unk_0xA2BC31158C8CEFD2(Global_1590446[iVar2 /*871*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_275()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_569.f_1, 0);
}

struct<16> func_276()
{
	struct<16> Var0;
	
	StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("FMMC_CH_DN"), 64);
	if (Global_1696532 == 1)
	{
		StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("FMMC_CH_SS"), 64);
	}
	else if (Global_1696532 == 2)
	{
		StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("FMMC_CH_BC"), 64);
	}
	else if (Global_1696532 == 3)
	{
		StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("FMMC_CH_AG"), 64);
	}
	return Var0;
}

int func_277()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		if ((func_282(Global_4456448.f_154360) || func_281(Global_4456448.f_154360)) || func_278(Global_4456448.f_154360))
		{
			return 1;
		}
	}
	return 0;
}

bool func_278(int iParam0)
{
	return func_279(iParam0, 3);
}

bool func_279(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_5798[iVar0] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	return func_280(iVar1) == iParam1;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return 1;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return 2;
		
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 3;
		
		default:
	}
	return 0;
}

bool func_281(int iParam0)
{
	return func_279(iParam0, 2);
}

bool func_282(int iParam0)
{
	return func_279(iParam0, 1);
}

bool func_283()
{
	return Global_1312850;
}

char* func_284()
{
	return unk_0xD54FB72F71EFE6C4("CREATOR_NO_T");
}

bool func_285()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_142, 0);
}

int func_286(int iParam0)
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
			return 52;
		
		default:
	}
	return 0;
}

void func_287(int iParam0)
{
	struct<23> Var0;
	
	if (*iParam0 == 0)
	{
		return;
	}
	Var0 = -1;
	Global_4456448.f_196104 = { Var0 };
	if (unk_0x1D22B93425E4D657(*iParam0, "MYmi") == 2)
	{
		Global_4456448.f_196104 = unk_0xEE6F60A09902D357(*iParam0, "MYmi");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYyn") == 4)
	{
		StringCopy(&(Global_4456448.f_196104.f_1), unk_0x2B36163AFF2C657B(*iParam0, "MYyn"), 64);
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYai") == 2)
	{
		Global_4456448.f_196104.f_17 = unk_0xEE6F60A09902D357(*iParam0, "MYai");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYpi") == 2)
	{
		Global_4456448.f_196104.f_18 = unk_0xEE6F60A09902D357(*iParam0, "MYpi");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYci") == 2)
	{
		Global_4456448.f_196104.f_19 = unk_0xEE6F60A09902D357(*iParam0, "MYci");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYli") == 2)
	{
		Global_4456448.f_196104.f_20 = unk_0xEE6F60A09902D357(*iParam0, "MYli");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYfi") == 2)
	{
		Global_4456448.f_196104.f_21 = unk_0xEE6F60A09902D357(*iParam0, "MYfi");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "MYfl") == 2)
	{
		Global_4456448.f_196104.f_22 = unk_0xEE6F60A09902D357(*iParam0, "MYfl");
	}
}

void func_288(int iParam0)
{
	struct<117> Var0;
	int iVar117;
	char cVar118[16];
	
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_13 = 1092616192;
	Var0.f_2.f_1.f_14 = 1092616192;
	Var0.f_2.f_1.f_15 = 1101004800;
	Var0.f_2.f_1.f_16 = 1077936128;
	Var0.f_2.f_1.f_17 = 1119092736;
	Var0.f_2.f_1.f_18 = 1077936128;
	Var0.f_2.f_1.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
	Var0.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
	Var0.f_103.f_5 = 1117782016;
	Var0.f_103.f_6 = 2;
	Var0.f_103.f_13 = 1112014848;
	Global_4456448.f_195024 = { Var0 };
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBS") == 2)
	{
		Global_4456448.f_195024 = unk_0xEE6F60A09902D357(*iParam0, "KhBS");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhNha") == 2)
	{
		Global_4456448.f_195024.f_1 = unk_0xEE6F60A09902D357(*iParam0, "KhNha");
	}
	iVar117 = 0;
	while (iVar117 <= 4)
	{
		StringCopy(&cVar118, "KhAC", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_4 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar118) };
		}
		StringCopy(&cVar118, "KhAD", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_7 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar118) };
		}
		StringCopy(&cVar118, "KhAU", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 5)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_10 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar118) };
		}
		else
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_10 = { 0f, 0f, 1f };
		}
		StringCopy(&cVar118, "KhAR", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_13 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhTy", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/] = unk_0xEE6F60A09902D357(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhEn", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_1 = unk_0xEE6F60A09902D357(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhBS", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_2 = unk_0xEE6F60A09902D357(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhCt", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_18 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhPt", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_19 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhWd", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_14 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhHe", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_16 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhHd", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_17 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhLn", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 3)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_15 = unk_0x42AD093E466CD516(*iParam0, &cVar118);
		}
		StringCopy(&cVar118, "KhMnP", 16);
		StringIntConCat(&cVar118, iVar117, 16);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar118) == 2)
		{
			Global_4456448.f_195024.f_2[iVar117 /*20*/].f_3 = unk_0xEE6F60A09902D357(*iParam0, &cVar118);
		}
		iVar117++;
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoSh") == 2)
	{
		Global_4456448.f_195024.f_103 = unk_0xEE6F60A09902D357(*iParam0, "KhBoSh");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoS") == 2)
	{
		Global_4456448.f_195024.f_103.f_1 = unk_0xEE6F60A09902D357(*iParam0, "KhBoS");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoC") == 5)
	{
		Global_4456448.f_195024.f_103.f_2 = { unk_0x158A0F7CCA751FFB(*iParam0, "KhBoC") };
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoR") == 3)
	{
		Global_4456448.f_195024.f_103.f_5 = unk_0x42AD093E466CD516(*iParam0, "KhBoR");
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoP0") == 5)
	{
		Global_4456448.f_195024.f_103.f_6[0 /*3*/] = { unk_0x158A0F7CCA751FFB(*iParam0, "KhBoP0") };
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoP1") == 5)
	{
		Global_4456448.f_195024.f_103.f_6[1 /*3*/] = { unk_0x158A0F7CCA751FFB(*iParam0, "KhBoP1") };
	}
	if (unk_0x1D22B93425E4D657(*iParam0, "KhBoH") == 3)
	{
		Global_4456448.f_195024.f_103.f_13 = unk_0x42AD093E466CD516(*iParam0, "KhBoH");
	}
}

void func_289(int iParam0)
{
	int iVar0;
	char[] cVar1[8];
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "A", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195142[iVar0 /*32*/] = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "B", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_4 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_4 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "C", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_8 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_8 = 1.25f;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "E", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_19 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_19 = 0;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "H", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_3 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_3 = 0f;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "I", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_7 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_7 = 0f;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "J", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_20 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_20 = -1;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "K", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_21 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_21 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "L", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_24 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_24 = 0f;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "M", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_25 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_25 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "N", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_28 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_28 = { 0f, 0f, 0f };
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar1, "w", 8);
			StringIntConCat(&cVar1, iVar0, 8);
			StringConCat(&cVar1, "F", 8);
			if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
			{
				Global_4456448.f_195142[iVar0 /*32*/].f_9[iVar3] = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
			}
			else
			{
				Global_4456448.f_195142[iVar0 /*32*/].f_9[iVar3] = -1;
			}
			StringCopy(&cVar1, "w", 8);
			StringIntConCat(&cVar1, iVar0, 8);
			StringConCat(&cVar1, "G", 8);
			StringIntConCat(&cVar1, iVar3, 8);
			if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
			{
				Global_4456448.f_195142[iVar0 /*32*/].f_14[iVar3] = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
			}
			else
			{
				Global_4456448.f_195142[iVar0 /*32*/].f_14[iVar3] = -1;
			}
			iVar3++;
		}
		StringCopy(&cVar1, "w", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "O", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_31 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195142[iVar0 /*32*/].f_31 = 65f;
		}
		iVar0++;
	}
}

void func_290(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	
	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "li", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/] = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/] = -1;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aa0", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_1[0 /*3*/] = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_1[0 /*3*/] = { 0f, 0f, 0f };
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aa1", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_1[1 /*3*/] = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_1[1 /*3*/] = { 0f, 0f, 0f };
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "aw", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 3)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_8 = unk_0x42AD093E466CD516(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_8 = 0f;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cp", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_9 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
			if (func_128(Global_4456448.f_195399[iVar0 /*42*/].f_9))
			{
				Global_4456448.f_195399[iVar0 /*42*/].f_9 = { Global_4456448.f_195399[iVar0 /*42*/].f_1[0 /*3*/] };
			}
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_9 = { 0f, 0f, 0f };
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmr", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30 = { 0f, 0f, 0f };
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmp", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_3 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_3 = { 0f, 0f, 0f };
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmf", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 3)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_6 = unk_0x42AD093E466CD516(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_6 = 0f;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "cmd", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_7 = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_30.f_7 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			func_291(&cVar2, "lft", iVar0);
			StringConCat(&cVar2, "w", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			StringConCat(&cVar2, "p", 8);
			if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 5)
			{
				Global_4456448.f_195399[iVar0 /*42*/].f_12[iVar1 /*3*/] = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar2) };
			}
			else
			{
				Global_4456448.f_195399[iVar0 /*42*/].f_12[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			func_291(&cVar2, "lft", iVar0);
			StringConCat(&cVar2, "w", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			StringConCat(&cVar2, "h", 8);
			if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 3)
			{
				Global_4456448.f_195399[iVar0 /*42*/].f_25[iVar1] = unk_0x42AD093E466CD516(*iParam0, &cVar2);
			}
			else
			{
				Global_4456448.f_195399[iVar0 /*42*/].f_25[iVar1] = 0f;
			}
			iVar1++;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "t", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_38 = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_38 = -1;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "fr", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_39 = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_39 = -1;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "tr", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_40 = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_40 = -1;
		}
		func_291(&cVar2, "lft", iVar0);
		StringConCat(&cVar2, "bs", 8);
		if (unk_0x1D22B93425E4D657(*iParam0, &cVar2) == 2)
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_41 = unk_0xEE6F60A09902D357(*iParam0, &cVar2);
		}
		else
		{
			Global_4456448.f_195399[iVar0 /*42*/].f_41 = 0;
		}
		iVar0++;
	}
}

void func_291(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, sParam1, 8);
	StringIntConCat(sParam0, iParam2, 8);
}

void func_292(int iParam0)
{
	int iVar0;
	char[] cVar1[8];
	
	StringCopy(&cVar1, "px", 8);
	StringConCat(&cVar1, "num", 8);
	if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
	{
		Global_4456448.f_195652 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
	}
	else
	{
		Global_4456448.f_195652 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "A", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 4)
		{
			StringCopy(&(Global_4456448.f_195653[iVar0 /*45*/]), unk_0x2B36163AFF2C657B(*iParam0, &cVar1), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_195653[iVar0 /*45*/]), "", 64);
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "B", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 4)
		{
			StringCopy(&(Global_4456448.f_195653[iVar0 /*45*/].f_16), unk_0x2B36163AFF2C657B(*iParam0, &cVar1), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_195653[iVar0 /*45*/].f_16), "", 64);
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "C", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_32 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_32 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "D", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 5)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_35 = { unk_0x158A0F7CCA751FFB(*iParam0, &cVar1) };
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_35 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "E", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_38 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_38 = 0;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "F", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_40 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_40 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "G", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_41 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_41 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "H", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_42 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_42 = 0;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "I", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 3)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_43 = unk_0x42AD093E466CD516(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_43 = 1f;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "J", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_44 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_44 = -1;
		}
		StringCopy(&cVar1, "px", 8);
		StringIntConCat(&cVar1, iVar0, 8);
		StringConCat(&cVar1, "K", 8);
		if (*iParam0 != 0 && unk_0x1D22B93425E4D657(*iParam0, &cVar1) == 2)
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_39 = unk_0xEE6F60A09902D357(*iParam0, &cVar1);
		}
		else
		{
			Global_4456448.f_195653[iVar0 /*45*/].f_39 = -1;
		}
		iVar0++;
	}
}

void func_293()
{
	if (func_294())
	{
		Global_2457255.f_8 = 1;
	}
	Global_2457255.f_7 = 1;
}

bool func_294()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 11);
}

int func_295(int iParam0)
{
	if (unk_0xDC143D98E1977B20() || (unk_0x39FDED461BF385C3() && iParam0 == 0))
	{
		if (unk_0x7B3E18C7DAC336C3(1) == 0 || unk_0x40842D016031179D(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x7B3E18C7DAC336C3(1) == 0)
	{
		return 0;
	}
	if (func_296() == 0)
	{
		return 0;
	}
	return 1;
}

int func_296()
{
	if (unk_0xDC143D98E1977B20() && unk_0xE77DD36D943771E9())
	{
		return 1;
	}
	if (unk_0xDB02E0A2E60C82EB() && unk_0xE77DD36D943771E9())
	{
		return 1;
	}
	if ((unk_0x39FDED461BF385C3() && unk_0xD665D22A5369E094() == 0) && unk_0xE77DD36D943771E9())
	{
		return 1;
	}
	if (unk_0x77BA37DB22C66465() && unk_0xE77DD36D943771E9())
	{
		return 1;
	}
	if (unk_0xE434AB6E3DE89861() && unk_0xE77DD36D943771E9())
	{
		return 1;
	}
	return 0;
}

int func_297(int iParam0)
{
	if (unk_0xDC143D98E1977B20() || (unk_0x39FDED461BF385C3() && iParam0 == 0))
	{
		if (unk_0x7B3E18C7DAC336C3(0) == 0 || unk_0x40842D016031179D(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x7B3E18C7DAC336C3(0) == 0)
	{
		return 0;
	}
	if (func_296() == 0)
	{
		return 0;
	}
	return 1;
}

void func_298(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<117> Var5;
	int iVar122;
	int iVar123;
	struct<11> Var124;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	struct<117> Var140;
	struct<23> Var257;
	
	Global_4456448.f_156037 = 0;
	if (bParam0)
	{
		if (((!func_172() || func_334() == 39) || func_334() == 42) || func_334() == 37)
		{
			Global_4456448.f_154360 = 0;
			Global_4456448.f_185377 = 2;
		}
		Global_4456448.f_101958 = -1;
		Global_4456448.f_11 = 0;
		Global_4456448.f_12 = 0;
		Global_4456448.f_13 = 0;
		Global_4456448.f_14 = 0;
		Global_4456448.f_15 = 0;
		Global_4456448.f_16 = 0;
		Global_4456448.f_17 = 0;
		Global_4456448.f_18 = 0;
		Global_4456448.f_19 = 0;
		Global_4456448.f_20 = 0;
		Global_4456448.f_21 = 0;
		Global_4456448.f_22 = 0;
		Global_4456448.f_23 = 0;
		Global_4456448.f_24 = 0;
		Global_4456448.f_25 = 0;
		Global_4456448.f_26 = 0;
		Global_4456448.f_27 = 0;
		Global_4456448.f_28 = 0;
		Global_4456448.f_29 = 0;
		Global_4456448.f_30 = 0;
		Global_4456448.f_31 = 0;
		Global_4456448.f_32 = 0;
		Global_4456448.f_33 = 0;
		Global_4456448.f_34 = 0;
		Global_4456448.f_35 = 0;
		Global_4456448.f_156050 = -0.1f;
		Global_4456448.f_196506 = -1;
		Global_4456448.f_192209 = 0;
		Global_4456448.f_58 = 0;
		Global_4456448.f_105 = 0;
		Global_4456448.f_47378 = 0;
		Global_4456448.f_184947 = 0;
		Global_4456448.f_10 = 0;
		Global_4456448.f_37 = 0;
		Global_4456448.f_63 = 0;
		Global_4456448.f_39 = 0;
		Global_4456448.f_62 = 0;
		Global_4456448.f_64 = 0;
		Global_4456448.f_65 = 0;
		Global_4456448.f_67 = 0;
		Global_4456448.f_68 = 0;
		Global_4456448.f_69 = 0;
		Global_4456448.f_70 = 0;
		Global_4456448.f_41 = 0;
		Global_4456448.f_42 = 1;
		Global_4456448.f_6 = 0;
		Global_4456448.f_57 = 0;
		Global_4456448.f_191025 = 10;
		Global_4456448.f_191026 = 5f;
		Global_4456448.f_191027 = 10;
		Global_4456448.f_61 = 1;
		Global_4456448.f_38 = 0;
		Global_4456448.f_156015 = 0;
		Global_4456448.f_156017 = 0;
		Global_4456448.f_156016 = 0;
		Global_4456448.f_156014 = 0;
		Global_4456448.f_54073 = 0;
		Global_4456448.f_190933 = -1;
		Global_4456448.f_191920 = 0;
		Global_4456448.f_191921 = 0;
		Global_4456448.f_191922 = 0;
		Global_4456448.f_191923 = 0;
		Global_4456448.f_191924 = 0;
		Global_4456448.f_191925 = 1;
		Global_4456448.f_191926 = 2.5f;
		Global_4456448.f_191927 = 0;
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			Global_4456448.f_195142[iVar3 /*32*/] = { 0f, 0f, 0f };
			Global_4456448.f_195142[iVar3 /*32*/].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_195142[iVar3 /*32*/].f_3 = 0f;
			Global_4456448.f_195142[iVar3 /*32*/].f_7 = 0f;
			Global_4456448.f_195142[iVar3 /*32*/].f_8 = 1f;
			Global_4456448.f_195142[iVar3 /*32*/].f_19 = 0;
			Global_4456448.f_195142[iVar3 /*32*/].f_20 = -1;
			Global_4456448.f_195142[iVar3 /*32*/].f_21 = { 0f, 0f, 0f };
			Global_4456448.f_195142[iVar3 /*32*/].f_24 = 0f;
			Global_4456448.f_195142[iVar3 /*32*/].f_31 = 65f;
			Global_4456448.f_195142[iVar3 /*32*/].f_25 = { 0f, 0f, 0f };
			Global_4456448.f_195142[iVar3 /*32*/].f_28 = { 0f, 0f, 0f };
			iVar4 = 0;
			while (iVar4 <= 3)
			{
				Global_4456448.f_195142[iVar3 /*32*/].f_9[iVar4] = -1;
				Global_4456448.f_195142[iVar3 /*32*/].f_14[iVar4] = -1;
				iVar4++;
			}
			iVar3++;
		}
		Global_4456448.f_195652 = 0;
		iVar3 = 0;
		while (iVar3 <= 9)
		{
			StringCopy(&(Global_4456448.f_195653[iVar3 /*45*/]), "", 64);
			StringCopy(&(Global_4456448.f_195653[iVar3 /*45*/].f_16), "", 64);
			Global_4456448.f_195653[iVar3 /*45*/].f_32 = { 0f, 0f, 0f };
			Global_4456448.f_195653[iVar3 /*45*/].f_35 = { 0f, 0f, 0f };
			Global_4456448.f_195653[iVar3 /*45*/].f_38 = 0;
			Global_4456448.f_195653[iVar3 /*45*/].f_39 = -1;
			Global_4456448.f_195653[iVar3 /*45*/].f_40 = -1;
			Global_4456448.f_195653[iVar3 /*45*/].f_41 = -1;
			Global_4456448.f_195653[iVar3 /*45*/].f_42 = 0;
			Global_4456448.f_195653[iVar3 /*45*/].f_43 = 1f;
			Global_4456448.f_195653[iVar3 /*45*/].f_44 = -1;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 5)
		{
			func_333(iVar3);
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&(Global_4456448.f_192025[iVar3 /*16*/]), "", 64);
			iVar3++;
		}
		Global_4456448.f_192213 = 0f;
		Global_4456448.f_192214 = -1;
		Var5.f_2 = 5;
		Var5.f_2.f_1.f_1 = -1;
		Var5.f_2.f_1.f_13 = 1092616192;
		Var5.f_2.f_1.f_14 = 1092616192;
		Var5.f_2.f_1.f_15 = 1101004800;
		Var5.f_2.f_1.f_16 = 1077936128;
		Var5.f_2.f_1.f_17 = 1119092736;
		Var5.f_2.f_1.f_18 = 1077936128;
		Var5.f_2.f_1.f_19 = 1065353216;
		Var5.f_2.f_1.f_20.f_1 = -1;
		Var5.f_2.f_1.f_20.f_13 = 1092616192;
		Var5.f_2.f_1.f_20.f_14 = 1092616192;
		Var5.f_2.f_1.f_20.f_15 = 1101004800;
		Var5.f_2.f_1.f_20.f_16 = 1077936128;
		Var5.f_2.f_1.f_20.f_17 = 1119092736;
		Var5.f_2.f_1.f_20.f_18 = 1077936128;
		Var5.f_2.f_1.f_20.f_19 = 1065353216;
		Var5.f_2.f_1.f_20.f_20.f_1 = -1;
		Var5.f_2.f_1.f_20.f_20.f_13 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_14 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_15 = 1101004800;
		Var5.f_2.f_1.f_20.f_20.f_16 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_17 = 1119092736;
		Var5.f_2.f_1.f_20.f_20.f_18 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_19 = 1065353216;
		Var5.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
		Var5.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
		Var5.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
		Var5.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
		Var5.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
		Var5.f_103.f_5 = 1117782016;
		Var5.f_103.f_6 = 2;
		Var5.f_103.f_13 = 1112014848;
		Global_4456448.f_195024 = { Var5 };
		if (bParam1)
		{
			Global_4456448.f_4 = 0;
			Global_4456448.f_5 = 0;
		}
		Global_4456448.f_196509 = -1;
		Global_4456448.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_4456448.f_47441[iVar0 /*40*/] = -1;
			Global_4456448.f_47441[iVar0 /*40*/].f_1 = -1;
			Global_4456448.f_47441[iVar0 /*40*/].f_2 = -1;
			Global_4456448.f_47441[iVar0 /*40*/].f_3 = 0;
			Global_4456448.f_47441[iVar0 /*40*/].f_5 = 0;
			Global_4456448.f_47441[iVar0 /*40*/].f_4 = -1;
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				StringCopy(&(Global_4456448.f_47441[iVar0 /*40*/].f_6[iVar3 /*16*/]), "", 64);
				iVar3++;
			}
			Global_4456448.f_47441[iVar0 /*40*/].f_39 = 0;
			iVar0++;
		}
		Global_4456448.f_156018 = 0;
		Global_4456448.f_156019 = 0;
		Global_4456448.f_156020 = 0;
		Global_4456448.f_156010 = -1;
		Global_4456448.f_156009 = 0;
		Global_4456448.f_156008 = -1;
		Global_4456448.f_74 = 0;
		Global_4456448.f_82 = { 0f, 0f, 0f };
		Global_4456448.f_85 = { 0f, 0f, 0f };
		Global_4456448.f_88 = { 0f, 0f, 0f };
		Global_4456448.f_91 = { 0f, 0f, 0f };
		Global_4456448.f_94 = { 0f, 0f, 0f };
		Global_4456448.f_97 = { 0f, 0f, 0f };
		Global_4456448.f_100 = 0f;
		Global_4456448.f_101 = 0f;
		Global_4456448.f_154335 = 0f;
		Global_4456448.f_104 = 0;
		Global_4456448.f_156036 = 0;
		Global_4456448.f_190965 = 0;
		Global_4456448.f_191972 = 0;
		Global_4456448.f_185379 = 0;
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_4456448.f_58182[iVar0 /*4*/][0] = 0;
			Global_4456448.f_58182[iVar0 /*4*/][1] = 0;
			Global_4456448.f_58162[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4456448.f_191473), "", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_191489[iVar0 /*16*/]), "", 64);
		iVar122 = 0;
		while (iVar122 <= 3)
		{
			StringCopy(&(Global_4456448.f_191570[iVar0 /*65*/][iVar122 /*16*/]), "", 64);
			iVar122++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_4456448.f_54074[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_166664[iVar0 /*3*/][0] = 0;
		Global_4456448.f_166664[iVar0 /*3*/][1] = 0;
		Global_4456448.f_166683[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_166690 = 0;
	Global_4456448.f_166691 = -1;
	Global_4456448.f_1 = -1;
	StringCopy(&(Global_4456448.f_154672), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_4456448.f_166268[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_4456448.f_187443 = 0;
	Global_4456448.f_56 = 0;
	Global_4456448.f_76 = { 0f, 0f, 0f };
	Global_4456448.f_185378 = -1;
	StringCopy(&(Global_4456448.f_154367), "", 64);
	StringCopy(&(Global_4456448.f_154656), "", 64);
	StringCopy(&(Global_4456448.f_191457), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringCopy(&(Global_4456448.f_154678[iVar0 /*6*/]), "", 24);
			Global_4456448.f_154715[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_154389[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_332();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_4456448.f_47441[0 /*40*/].f_6[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_331();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_49[iVar0] = 0;
		Global_4456448.f_184921[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_184926[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_44[iVar0] = 1;
		Global_4456448.f_153466[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_153479[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_153492[iVar0] = 0f;
		Global_4456448.f_187447[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_187460[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_187473[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_187486[iVar0] = 45f;
		Global_4456448.f_187491[iVar0] = 0f;
		Global_4456448.f_149437[iVar0] = -1;
		Global_4456448.f_88012[iVar0] = -1;
		StringCopy(&(Global_4456448.f_188182[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_188247[iVar0 /*16*/]), "", 64);
		Global_4456448.f_188312[iVar0] = 0;
		StringCopy(&(Global_4456448.f_187984[iVar0 /*16*/]), "", 64);
		Global_4456448.f_166754[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_4456448.f_188049[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_4456448.f_48304[iVar0] = -1;
		Global_4456448.f_48309[iVar0] = -1;
		StringCopy(&(Global_4456448.f_190891[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_4456448.f_190908[iVar0 /*4*/]), "", 16);
		Global_4456448.f_190925[iVar0] = 0;
		Global_4456448.f_190958[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_191013 = 0;
	Global_4456448.f_191012 = 0;
	Global_4456448.f_191014 = 0;
	Global_4456448.f_191015 = 1;
	Global_4456448.f_191016 = 2;
	Global_4456448.f_191017 = 3;
	Global_4456448.f_191018 = 4;
	Global_4456448.f_191019 = 6;
	Global_4456448.f_191020 = 7;
	Global_4456448.f_191021 = 9;
	Global_4456448.f_191022 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_191078[iVar0] = 0;
		Global_4456448.f_191083[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_191029 = 5;
	Global_4456448.f_191028 = 0;
	Global_4456448.f_191024 = 3;
	Global_4456448.f_191912 = 60000;
	Global_4456448.f_191915 = 1f;
	Global_4456448.f_191913 = 0.5f;
	Global_4456448.f_191914 = 0.5f;
	Global_4456448.f_191916 = 50f;
	Global_4456448.f_191917 = 100f;
	Global_4456448.f_191100 = 5000;
	Global_4456448.f_191101 = 2500;
	Global_4456448.f_191102 = 3000;
	Global_4456448.f_187496 = { 0f, 0f, 0f };
	Global_4456448.f_187499 = { 0f, 0f, 0f };
	Global_4456448.f_187502 = { 0f, 0f, 0f };
	Global_4456448.f_187505 = 45f;
	Global_4456448.f_187506 = 0f;
	Global_4456448.f_187507 = 0;
	Global_4456448.f_188340 = 10000;
	Global_4456448.f_188341 = 0;
	Global_4456448.f_188355 = 1;
	Global_4456448.f_188342 = 1f;
	Global_4456448.f_191063 = 1;
	Global_4456448.f_191064 = 0;
	Global_4456448.f_188343 = 0f;
	Global_4456448.f_188356 = 60f;
	Global_4456448.f_188357 = 5f;
	Global_4456448.f_188358 = 60f;
	Global_4456448.f_188359 = -1f;
	Global_4456448.f_188345 = 2;
	Global_4456448.f_188346 = 2;
	Global_4456448.f_188347 = 3000;
	Global_4456448.f_188348 = 150;
	Global_4456448.f_188349 = 3f;
	Global_4456448.f_188350 = 1f;
	Global_4456448.f_188351 = 25;
	Global_4456448.f_188352 = 5;
	Global_4456448.f_188353 = 5;
	Global_4456448.f_188354 = 2000;
	Global_4456448.f_188372 = -1f;
	StringCopy(&(Global_4456448.f_188373), "", 16);
	StringCopy(&(Global_4456448.f_188377), "", 16);
	StringCopy(&(Global_4456448.f_188381), "", 16);
	StringCopy(&(Global_4456448.f_188385), "", 16);
	StringCopy(&(Global_4456448.f_188389), "", 16);
	StringCopy(&(Global_4456448.f_188393), "", 16);
	Global_4456448.f_60525 = 0.075f;
	Global_4456448.f_60526 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_60528[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_60559[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_188360 = 0;
	Global_4456448.f_188369 = 0;
	Global_4456448.f_188361 = 0;
	Global_4456448.f_188362 = 0;
	Global_4456448.f_188363 = 0;
	Global_4456448.f_188364 = 0;
	Global_4456448.f_188365 = 0;
	Global_4456448.f_188366 = 0;
	Global_4456448.f_188370 = 0;
	Global_4456448.f_188367 = -1f;
	Global_4456448.f_188368 = 0;
	Global_4456448.f_188371 = 0;
	Global_4456448.f_191098 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_141895[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_141976[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_142057[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		StringCopy(&(Global_4456448.f_142292[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (func_329() - 1))
	{
		func_325(&(Global_4456448.f_166759[iVar0 /*1494*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_321(&(Global_4456448.f_181700[iVar0 /*472*/]));
		iVar0++;
	}
	func_321(&(Global_4456448.f_184061));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		func_320(&(Global_4456448.f_185250[iVar0 /*5*/]));
		iVar0++;
	}
	Global_4456448.f_185376 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_101808[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_101869[iVar0] = 0;
		Global_4456448.f_101890[iVar0] = -1;
		Global_4456448.f_101911[iVar0] = 100f;
		Global_4456448.f_101933[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_101932 = 0;
	Global_4456448.f_101954 = 0;
	iVar0 = 0;
	while (iVar0 <= 91)
	{
		func_227(&(Global_4456448.f_156055[iVar0 /*111*/]), iVar0);
		iVar0++;
	}
	Global_4456448.f_166557[0] = 0;
	Global_4456448.f_166557[1] = 0;
	Global_4456448.f_166561 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_319(&(Global_4456448.f_184958[iVar0 /*29*/]));
		iVar0++;
	}
	Global_4456448.f_190930 = 0;
	if (bParam3)
	{
		Global_4456448.f_2 = 0;
	}
	Global_4456448.f_166574 = 0;
	Global_4456448.f_155988 = 0;
	Global_4456448.f_184947 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_156022[iVar0] = -1;
		Global_4456448.f_185380[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_190932 = 0;
	Global_4456448.f_190890 = 0;
	Global_4456448.f_190955 = 0;
	Global_4456448.f_190957 = 0;
	Global_4456448.f_156053 = 0;
	Global_4456448.f_156054 = 0;
	Global_4456448.f_185413 = 0.5f;
	Global_4456448.f_166575 = 1;
	Global_4456448.f_166577 = 5;
	if (bParam3)
	{
		func_315(0);
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_185414[iVar0] = 0f;
		Global_4456448.f_185435[iVar0] = 0f;
		Global_4456448.f_185456[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_60605[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_60653[iVar0] = -1;
		Global_4456448.f_60663[iVar0] = -1;
		Global_4456448.f_60668[iVar0] = 1001;
		iVar0++;
	}
	Global_1651902 = 0;
	Global_4456448.f_7 = 0;
	Global_4456448.f_155995 = 0;
	Global_4456448.f_46597 = 0;
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_149136)
	{
		Global_4456448.f_149136[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_4456448.f_149136[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_47397[iVar0 /*4*/][0] = 0;
		Global_4456448.f_47397[iVar0 /*4*/][1] = 0;
		Global_4456448.f_47397[iVar0 /*4*/][2] = 0;
		Global_4456448.f_47380[iVar0 /*4*/][0] = 0;
		Global_4456448.f_47380[iVar0 /*4*/][1] = 0;
		Global_4456448.f_47380[iVar0 /*4*/][2] = 0;
		Global_4456448.f_47414[iVar0 /*4*/][0] = 0;
		Global_4456448.f_47414[iVar0 /*4*/][1] = 0;
		Global_4456448.f_47414[iVar0 /*4*/][2] = 0;
		Global_4456448.f_47431[iVar0] = 0;
		Global_4456448.f_47436[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_4456448.f_166602[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_166719[iVar0 /*4*/][0] = 0;
		Global_4456448.f_166719[iVar0 /*4*/][1] = 0;
		Global_4456448.f_166741[iVar0 /*3*/][0] = 0;
		Global_4456448.f_106[iVar0 /*11610*/] = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_7 = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_14 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_15 = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_18 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_19 = { 0f, 0f, 0f };
		Global_4456448.f_106[iVar0 /*11610*/].f_22 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_23 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_38 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_24 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_25 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_26 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_27 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_28 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_29 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_30 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_31 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_32 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_33 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_34 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_35 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_36 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_59 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_4714 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4716 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4773 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4846 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6708 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4715 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4717 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6709 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_61 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_62 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_63 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_64 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_327 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_328 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_329 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_592 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_593 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_594 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6710 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6729 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_57 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_58 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4306 = 60000;
		Global_4456448.f_106[iVar0 /*11610*/].f_4568 = 60000;
		Global_4456448.f_106[iVar0 /*11610*/].f_5469 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_941 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_942 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_10644 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_10645 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_10646 = 1;
		Global_4456448.f_106[iVar0 /*11610*/].f_10647 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_10648 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_857 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_858 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_4312 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4313 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_106[iVar0 /*11610*/].f_4314[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4332[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4350[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4368[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4386[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4422[iVar1] = 4;
			Global_4456448.f_106[iVar0 /*11610*/].f_4440[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4476[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4512[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4494[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4530[iVar1] = 10;
			Global_4456448.f_106[iVar0 /*11610*/].f_4548[iVar1] = 10;
			Global_4456448.f_106[iVar0 /*11610*/].f_4458[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4404[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10883[iVar1] = 10;
			Global_4456448.f_106[iVar0 /*11610*/].f_10901[iVar1] = 10;
			Global_4456448.f_106[iVar0 /*11610*/].f_6711[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_11592[iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_46547[iVar0] = 0;
		Global_4456448.f_46552[iVar0] = 0;
		Global_4456448.f_46557[iVar0] = -1;
		Global_4456448.f_46603[iVar0] = 0;
		Global_4456448.f_46640[iVar0] = 1;
		Global_4456448.f_46645[iVar0] = -1;
		StringCopy(&(Global_4456448.f_46608[iVar0 /*4*/]), "", 16);
		Global_4456448.f_46630[iVar0] = 3;
		Global_4456448.f_46635[iVar0] = -1;
		Global_4456448.f_46650[iVar0] = -1;
		Global_4456448.f_46655[iVar0] = -1;
		Global_4456448.f_46660[iVar0] = -1;
		Global_4456448.f_46665[iVar0] = -1;
		Global_4456448.f_46680[iVar0] = 0;
		Global_4456448.f_46685[iVar0] = -1;
		Global_4456448.f_46598[iVar0] = 0;
		Global_4456448.f_46625[iVar0] = 0;
		Global_4456448.f_166563[iVar0] = 0;
		Global_4456448.f_166568[iVar0] = 0;
		Global_4456448.f_60638[iVar0] = 100;
		Global_4456448.f_60643[iVar0] = 1f;
		Global_4456448.f_60648[iVar0] = 0;
		Global_4456448.f_60673[iVar0] = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6501 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6502 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6503 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6504 = 0;
		Global_1651902.f_1[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			Global_4456448.f_166692[iVar0 /*4*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_166709[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_153591[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_153804[iVar0 /*21*/][iVar1 /*5*/][iVar2] = 0f;
				Global_4456448.f_153889[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_4456448.f_188317[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 26)
		{
			Global_4456448.f_58259[iVar0 /*109*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_58259[iVar0 /*109*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_190934[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 26)
		{
			Global_4456448.f_58734[iVar0 /*437*/][0 /*109*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_58734[iVar0 /*437*/][1 /*109*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_58734[iVar0 /*437*/][0 /*109*/][iVar1 /*4*/][1] = 0;
			Global_4456448.f_58734[iVar0 /*437*/][1 /*109*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_187509[iVar0 /*66*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_187774[iVar0 /*26*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 121)
		{
			Global_4456448.f_106[iVar0 /*11610*/].f_65[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_331[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_596[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_201[iVar1] = 1f;
			Global_4456448.f_106[iVar0 /*11610*/].f_467[iVar1] = 1f;
			Global_4456448.f_106[iVar0 /*11610*/].f_732[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 11)
		{
			Global_4456448.f_106[iVar0 /*11610*/].f_188[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_454[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_719[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_106[iVar0 /*11610*/].f_859[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_864[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_47843[iVar1 /*27*/] = 0;
			Global_4456448.f_47843[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_4456448.f_47843[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_47843[iVar1 /*27*/].f_25 = 0f;
			Global_4456448.f_47843[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_4456448.f_47843[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_4456448.f_47843[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_4456448.f_47843[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_106[iVar0 /*11610*/].f_5651[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5669[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5687[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5705[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5723[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5741[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5759[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5777[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5795[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5813[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5831[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5867[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5885[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5903[iVar1] = -1;
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				Global_4456448.f_106[iVar0 /*11610*/].f_5921[iVar1 /*33*/][iVar2] = -1;
				iVar2++;
			}
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_11319[iVar1 /*16*/]), "", 64);
			Global_4456448.f_106[iVar0 /*11610*/].f_11301[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11231[iVar1 /*4*/].f_1 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11231[iVar1 /*4*/] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11231[iVar1 /*4*/].f_3 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_11231[iVar1 /*4*/].f_2 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_6483[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_39[iVar1] = -1;
			Global_4456448.f_101722[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_6505[iVar1] = 60000;
			Global_4456448.f_106[iVar0 /*11610*/].f_6523[iVar1] = 60000;
			Global_4456448.f_106[iVar0 /*11610*/].f_11159[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11177[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11195[iVar1] = 0;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_6627[iVar2 /*16*/]), "", 64);
				Global_4456448.f_106[iVar0 /*11610*/].f_6541[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_46690[iVar1 /*5*/][iVar0] = -1;
			Global_4456448.f_46776[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_46862[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_46948[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_47034[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_47120[iVar1 /*5*/][iVar0] = 1500;
			Global_4456448.f_47206[iVar1 /*5*/][iVar0] = 1400;
			Global_4456448.f_47292[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1651902.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1651902.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_961[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_979[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4570[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4588[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4606[iVar1] = 1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4678[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4696[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4774[iVar1] = 10000;
			Global_4456448.f_106[iVar0 /*11610*/].f_4718[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4736[iVar1] = -2;
			Global_4456448.f_106[iVar0 /*11610*/].f_4754[iVar1] = 1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4810[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4624[iVar1] = 1;
			Global_4456448.f_106[iVar0 /*11610*/].f_4828[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4847[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5131[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5167[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4883[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4865[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5023[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5149[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5185[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5077[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5095[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5041[iVar1] = 100;
			Global_4456448.f_106[iVar0 /*11610*/].f_4901[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_4953[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_5005[iVar1] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_5059[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5113[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5203[iVar1] = -1f;
			Global_4456448.f_106[iVar0 /*11610*/].f_1375[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1393[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1411[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1429[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1465[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_997[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1015[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1447[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1483[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10266[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10284[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10302[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10320[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10338[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10356[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10374[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10410[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10572[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10392[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10428[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10446[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10464[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10482[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10500[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_869[iVar1] = 5;
			Global_4456448.f_106[iVar0 /*11610*/].f_887[iVar1] = 20;
			Global_4456448.f_106[iVar0 /*11610*/].f_1285[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_5507[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5525[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5543[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5561[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_5579[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_5597[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5615[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1339[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1357[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4642[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_4660[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_905[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_923[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_943[iVar1] = 0;
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_6730[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_7003[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_7276[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_8095[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_7549[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_7822[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_10006[0 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_10006[1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_8368[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_8641[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_8914[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_9187[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_9460[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_106[iVar0 /*11610*/].f_9733[iVar1 /*16*/]), "", 64);
			Global_4456448.f_106[iVar0 /*11610*/].f_5361[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5397[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5379[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_5221[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_5273[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1505[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_2118[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5325[iVar1] = 3f;
			Global_4456448.f_106[iVar0 /*11610*/].f_5343[iVar1] = 0.001f;
			Global_4456448.f_106[iVar0 /*11610*/].f_4792[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5415[iVar1] = 10.5f;
			Global_4456448.f_106[iVar0 /*11610*/].f_5433[iVar1] = 1f;
			Global_4456448.f_106[iVar0 /*11610*/].f_5451[iVar1] = 1f;
			Global_4456448.f_106[iVar0 /*11610*/].f_5633[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10937[iVar1 /*13*/] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10937[iVar1 /*13*/].f_1 = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10937[iVar1 /*13*/].f_2 = { 0f, 0f, 0f };
			Global_4456448.f_106[iVar0 /*11610*/].f_1033[iVar1] = 12;
			Global_4456448.f_106[iVar0 /*11610*/].f_1051[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1069[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1087[iVar1] = 12;
			Global_4456448.f_106[iVar0 /*11610*/].f_1105[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1123[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1141[iVar1] = 100;
			Global_4456448.f_106[iVar0 /*11610*/].f_10667[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10919[iVar1] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_1159[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1177[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1195[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_1213[iVar1] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_1231[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1249[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10626[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1267[iVar1] = -2;
			Global_4456448.f_106[iVar0 /*11610*/].f_1303[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_1321[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/] = 1000;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_1 = 1.15f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_2 = 25;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_7 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_3 = 1;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_5 = 25;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_6 = 10f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3414[iVar1 /*9*/].f_8 = 100;
			Global_4456448.f_106[iVar0 /*11610*/].f_3773[iVar1 /*3*/] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3773[iVar1 /*3*/].f_1 = 1;
			Global_4456448.f_106[iVar0 /*11610*/].f_3773[iVar1 /*3*/].f_2 = 50;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_1[0] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_1[1] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_1[2] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_1[3] = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_6 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_7 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_8 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_9 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_10 = 0f;
			Global_4456448.f_106[iVar0 /*11610*/].f_3568[iVar1 /*12*/].f_11 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_3894[iVar1 /*3*/] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_3894[iVar1 /*3*/].f_1 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_3894[iVar1 /*3*/].f_2 = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_11213[iVar1] = 0;
			iVar123 = 0;
			iVar123 = 0;
			while (iVar123 <= 19)
			{
				Global_4456448.f_106[iVar0 /*11610*/].f_3946[iVar1 /*21*/][iVar123] = 0;
				iVar123++;
			}
			Global_4456448.f_106[iVar0 /*11610*/].f_10685[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10703[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10721[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10739[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10757[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10775[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10793[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10811[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10829[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10847[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10865[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10039[iVar1 /*5*/][0] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10039[iVar1 /*5*/][1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10039[iVar1 /*5*/][2] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10039[iVar1 /*5*/][3] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10125[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10143[iVar1 /*4*/][0] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10143[iVar1 /*4*/][1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10143[iVar1 /*4*/][2] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10212[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10230[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10248[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_5471[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10518[iVar1] = 0;
			Global_4456448.f_106[iVar0 /*11610*/].f_10536[iVar1] = -1;
			Global_4456448.f_106[iVar0 /*11610*/].f_10554[iVar1] = 0;
			func_314(&(Global_4456448.f_106[iVar0 /*11610*/].f_3825[iVar1 /*4*/]));
			iVar1++;
		}
		Global_4456448.f_106[iVar0 /*11610*/].f_4305 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4567 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4304 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4566 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4307 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4308 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4309 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4310 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4311 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_4569 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_1501 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_1502 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_590 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_591 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_855 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_856 = -1;
		Global_4456448.f_106[iVar0 /*11610*/].f_6692 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6693 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6694 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6695 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6696 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6697 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6698 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6699 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6700 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6701 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6702 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6703 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6704 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6705 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6706 = 0;
		Global_4456448.f_106[iVar0 /*11610*/].f_6707 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_142138[iVar0] = 0;
		Global_4456448.f_142143[iVar0] = 0;
		Global_4456448.f_142148[iVar0] = 0;
		Global_4456448.f_142153[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_142165 = 0;
	Global_4456448.f_142166 = 0;
	Global_4456448.f_142167 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_142168[iVar0] = 0;
		Global_4456448.f_142199[iVar0] = 0;
		Global_4456448.f_142230[iVar0] = 0;
		Global_4456448.f_142261[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_79 = { 0f, 0f, 0f };
	Global_4456448.f_48314 = { 0f, 0f, 0f };
	Global_4456448.f_102 = 0f;
	Global_4456448.f_184533 = { 0f, 0f, 0f };
	Global_4456448.f_190932 = 0;
	Global_4456448.f_190955 = 0;
	Global_4456448.f_155989[0] = 0;
	Global_4456448.f_155989[1] = 0;
	Global_4456448.f_155993 = 0;
	Global_4456448.f_155988 = 0;
	Global_4456448.f_185385 = 0;
	Global_4456448.f_185386 = 0;
	Global_4456448.f_185387 = 0;
	Global_4456448.f_185388 = 0;
	Global_4456448.f_185390 = 0;
	Global_4456448.f_185392 = 0;
	Global_4456448.f_185394 = 0;
	Global_4456448.f_185397 = 0;
	Global_4456448.f_185398 = 0;
	Global_4456448.f_185399 = 0;
	Global_4456448.f_185400 = 0;
	Global_4456448.f_185401 = 0;
	Global_4456448.f_185402 = 0;
	Global_4456448.f_185403 = 0;
	Global_4456448.f_185404 = 0;
	Global_4456448.f_185410 = -1;
	Global_4456448.f_185411 = -1;
	Global_4456448.f_185412 = 1.5f;
	Global_4456448.f_54093 = 0;
	Global_4456448.f_54094 = 0;
	iVar0 = 0;
	while (iVar0 <= 101)
	{
		Global_4456448.f_49441[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_51283[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48318[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48318[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48318[iVar0 /*11*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_50160[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_50160[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_50160[iVar0 /*11*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_49748[iVar0] = 0f;
		Global_4456448.f_51590[iVar0] = 0f;
		Global_4456448.f_53248[iVar0] = 1f;
		Global_4456448.f_50057[iVar0] = 1f;
		Global_4456448.f_53351[iVar0] = 1f;
		Global_4456448.f_53454[iVar0] = 0f;
		Global_4456448.f_53557[iVar0] = 0f;
		Global_4456448.f_51693[iVar0] = -1;
		Global_4456448.f_51796[iVar0] = 0;
		Global_4456448.f_53042[iVar0] = 0f;
		Global_4456448.f_51899[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_52206[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_52513[iVar0] = -1;
		Global_4456448.f_52616[iVar0] = 0;
		Global_4456448.f_49851[iVar0] = 0;
		Global_4456448.f_49954[iVar0] = 0;
		Global_4456448.f_52822[iVar0] = -1;
		Global_4456448.f_52925[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_58151 = 0;
	if (bParam0)
	{
		Global_4456448.f_58153 = 0;
		Global_4456448.f_58161 = 0;
		Global_4456448.f_191103 = 0;
		Global_4456448.f_191104 = 1;
		Global_4456448.f_191105[0] = 0.3f;
		Global_4456448.f_191105[1] = 0.6f;
		Global_4456448.f_191105[2] = 1f;
		Global_4456448.f_191109 = 10f;
		Global_4456448.f_191110 = 1f;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_53028[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_58159 = 0;
	Global_4456448.f_58160 = 0;
	Global_4456448.f_60597 = 0f;
	Global_4456448.f_69120 = 0;
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		Global_4456448.f_69121[iVar0 /*84*/] = { 0f, 0f, 0f };
		Global_4456448.f_69121[iVar0 /*84*/].f_6 = 0f;
		Global_4456448.f_69121[iVar0 /*84*/].f_7 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_9 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_8 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_10 = 1;
		Global_4456448.f_69121[iVar0 /*84*/].f_21 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_22 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_12 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_13 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_14 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_15 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_16 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_17 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_11 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_48 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_49 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_50 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_18 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_19 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_20 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_23 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_51 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_24 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_25 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_26 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_27 = 1;
		Global_4456448.f_69121[iVar0 /*84*/].f_37 = 10f;
		Global_4456448.f_69121[iVar0 /*84*/].f_38 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_67 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_68 = 1;
		Global_4456448.f_69121[iVar0 /*84*/].f_71 = { 0f, 0f, 0f };
		Global_4456448.f_69121[iVar0 /*84*/].f_74 = 0f;
		Global_4456448.f_69121[iVar0 /*84*/].f_75 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_76 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_77 = 0f;
		Global_4456448.f_69121[iVar0 /*84*/].f_78 = 0f;
		Global_4456448.f_69121[iVar0 /*84*/].f_79 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_69 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_70 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_80 = -1;
		Global_4456448.f_69121[iVar0 /*84*/].f_81 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_55 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_82 = 0;
		Global_4456448.f_69121[iVar0 /*84*/].f_83 = 0;
		iVar0++;
	}
	func_312();
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_310(&(Global_4456448.f_188397[iVar0 /*248*/]));
		iVar0++;
	}
	Global_4456448.f_190878 = 0;
	Global_4456448.f_86025 = 0;
	Global_4456448.f_86026 = 0;
	Var124.f_2.f_2 = 1065353216;
	Var124.f_2.f_3 = 1077936128;
	Var124.f_2.f_4 = 1082130432;
	Var124.f_2.f_5 = 1077936128;
	Var124.f_2.f_6 = -1;
	Var124.f_2.f_7 = -1;
	Var124.f_2.f_8 = -1;
	Global_4456448.f_87948.f_46 = { Var124 };
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_86027[iVar0 /*60*/] = { 0f, 0f, 0f };
		Global_4456448.f_86027[iVar0 /*60*/].f_6 = 0f;
		Global_4456448.f_86027[iVar0 /*60*/].f_7 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_8 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_12 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_11 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_13 = 1;
		Global_4456448.f_86027[iVar0 /*60*/].f_18 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_31 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_14 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_28 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_29 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_30 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_15 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_16 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_17 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_9 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_10 = 1;
		Global_4456448.f_86027[iVar0 /*60*/].f_34 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_33 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_36 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_37 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_38 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_39 = -1;
		Global_4456448.f_86027[iVar0 /*60*/].f_40 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_41 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_42 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_43 = 0f;
		Global_4456448.f_86027[iVar0 /*60*/].f_44 = 1f;
		Global_4456448.f_86027[iVar0 /*60*/].f_45 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_46 = { Var124 };
		Global_4456448.f_86027[iVar0 /*60*/].f_57 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_58 = 0;
		Global_4456448.f_86027[iVar0 /*60*/].f_59 = 0;
		iVar0++;
	}
	Global_4456448.f_67919 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_309(&(Global_4456448.f_67920[iVar0 /*33*/]));
		iVar0++;
	}
	Global_4456448.f_68977 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_68978[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_4456448.f_68978[iVar0 /*7*/].f_3 = 0f;
		Global_4456448.f_68978[iVar0 /*7*/].f_4 = 0;
		Global_4456448.f_68978[iVar0 /*7*/].f_5 = 0;
		Global_4456448.f_68978[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_60598 = 3.5f;
		Global_4456448.f_60599 = 7f;
		Global_4456448.f_60600 = 0f;
		Global_4456448.f_60601 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_4456448.f_60605[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_4456448.f_60653[iVar0] = -1;
			Global_4456448.f_60658[iVar0] = -1;
			Global_4456448.f_60663[iVar0] = -1;
			Global_4456448.f_60668[iVar0] = 1001;
			iVar0++;
		}
	}
	Global_4456448.f_156027 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_58140[iVar0] = 0;
		Global_4456448.f_166659[iVar0] = -1;
		Global_4456448.f_166736[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_57646[iVar1 /*29*/][iVar0] = 0;
			Global_4456448.f_57646[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_4456448.f_57646[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_4456448.f_57646[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_4456448.f_57646[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_4456448.f_184948[iVar0] = 0;
		Global_4456448.f_184953[iVar0] = 1f;
		Global_4456448.f_191907[iVar0] = -1;
		Global_4456448.f_60679[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_60684 = 1;
	}
	Global_4456448.f_60686 = 5000;
	Global_4456448.f_60687 = -1;
	Global_4456448.f_60688 = 0;
	Global_4456448.f_60689 = 0;
	Global_4456448.f_60690 = 0;
	Global_4456448.f_67700.f_125 = { Var124 };
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_60691[iVar0 /*219*/] = { 0f, 0f, 0f };
		Global_4456448.f_60691[iVar0 /*219*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_60691[iVar0 /*219*/].f_3 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_7 = 50f;
		Global_4456448.f_60691[iVar0 /*219*/].f_8 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_9 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_10 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_60691[iVar0 /*219*/].f_14 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_15 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_18 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_29 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_33 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_34 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_36 = 0.8f;
		Global_4456448.f_60691[iVar0 /*219*/].f_37 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_53 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_49 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_50 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_51 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_52 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_54 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_55 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_56 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_57 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_58 = 60;
		Global_4456448.f_60691[iVar0 /*219*/].f_59 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_31 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_32 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_166 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_167 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_168 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_76 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_74 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_75 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_77 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_43 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_122 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_38 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_39 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_40 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_78 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_41 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_60 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_61 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_62 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_110 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_111 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_112 = { 0f, 0f, 0f };
		Global_4456448.f_60691[iVar0 /*219*/].f_115 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_108 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_109 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_116 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_123 = 1000;
		Global_4456448.f_60691[iVar0 /*219*/].f_121 = 1;
		Global_4456448.f_60691[iVar0 /*219*/].f_125 = { Var124 };
		Global_4456448.f_60691[iVar0 /*219*/].f_136 = 5f;
		Global_4456448.f_60691[iVar0 /*219*/].f_139 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_35 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_124 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_137 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_138 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_140 = { 0f, 0f, 0f };
		StringCopy(&(Global_4456448.f_60691[iVar0 /*219*/].f_143), "", 64);
		Global_4456448.f_60691[iVar0 /*219*/].f_159 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_160 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_161 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_162 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_163 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_16 = 0f;
		Global_4456448.f_60691[iVar0 /*219*/].f_17 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_164 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_165 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_169 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_170 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_171 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_173 = 4;
		Global_4456448.f_60691[iVar0 /*219*/].f_174 = 4;
		Global_4456448.f_60691[iVar0 /*219*/].f_175 = 0.5f;
		Global_4456448.f_60691[iVar0 /*219*/].f_176 = 0.5f;
		Global_4456448.f_60691[iVar0 /*219*/].f_177 = 0.5f;
		Global_4456448.f_60691[iVar0 /*219*/].f_178 = 0.5f;
		Global_4456448.f_60691[iVar0 /*219*/].f_179 = -1;
		Global_4456448.f_60691[iVar0 /*219*/].f_180 = 0;
		Global_4456448.f_60691[iVar0 /*219*/].f_172 = 4;
		iVar135 = 0;
		iVar135 = 0;
		while (iVar135 <= 8)
		{
			Global_4456448.f_60691[iVar0 /*219*/].f_181[iVar135 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_60691[iVar0 /*219*/].f_209[iVar135] = 0f;
			iVar135++;
		}
		func_308(&(Global_4456448.f_60691[iVar0 /*219*/].f_98));
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_60691[iVar0 /*219*/].f_19[iVar1] = 0;
			Global_4456448.f_60691[iVar0 /*219*/].f_24[iVar1] = 99999;
			Global_4456448.f_60691[iVar0 /*219*/].f_88[iVar1] = 0;
			Global_4456448.f_60691[iVar0 /*219*/].f_93[iVar1] = 0;
			Global_4456448.f_60691[iVar0 /*219*/].f_64[iVar1] = -1;
			Global_4456448.f_60691[iVar0 /*219*/].f_69[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_4456448.f_184596[iVar0 /*18*/]), "", 64);
		Global_4456448.f_184596[iVar0 /*18*/].f_16 = 0;
		Global_4456448.f_184596[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_4456448.f_88008 = 0;
	Global_4456448.f_88009 = 0;
	if (bParam0)
	{
		if (func_136() && !func_200())
		{
			Global_4456448.f_88010 = -1;
		}
		else
		{
			Global_4456448.f_88010 = 0;
		}
	}
	Global_4456448.f_88011 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_88017[iVar0 /*72*/] = { 0f, 0f, 0f };
		Global_4456448.f_88017[iVar0 /*72*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_88017[iVar0 /*72*/].f_15 = 76;
		Global_4456448.f_88017[iVar0 /*72*/].f_6 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_7 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_23 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_24 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_9 = 1f;
		Global_4456448.f_88017[iVar0 /*72*/].f_26 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_27 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_28 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_35 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_32 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_38 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_36 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_33 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_39 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_37 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_34 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_40 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_29 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_30 = -1;
		Global_4456448.f_88017[iVar0 /*72*/].f_31 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_41 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_42 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_43 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_44 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_45 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_46 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_47 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_48 = 0;
		Global_4456448.f_88017[iVar0 /*72*/].f_71 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_88017[iVar0 /*72*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_307();
	Global_4456448.f_191450 = 0;
	Global_4456448.f_191450.f_1 = 0;
	Global_4456448.f_191450.f_2 = 0;
	Global_4456448.f_191450.f_3 = 0;
	Global_4456448.f_191450.f_4 = 0;
	func_306();
	Global_4456448.f_191444 = -1;
	Global_4456448.f_191445 = 0;
	Global_4456448.f_191447 = 0;
	Global_4456448.f_191446 = -1;
	Global_4456448.f_191455 = -1;
	Global_4456448.f_60527 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_142158[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_156041 = -1;
	Global_4456448.f_156042 = 15;
	Global_4456448.f_156043 = -1;
	Global_4456448.f_156048 = -1;
	Global_4456448.f_156049 = 0;
	Global_4456448.f_156044 = 2.5f;
	Global_4456448.f_156045 = 8f;
	Global_4456448.f_156046 = 2.5f;
	Global_4456448.f_156047 = 8f;
	Global_4456448.f_92411 = 0;
	Global_4456448.f_69119 = 0;
	if (bParam0)
	{
		Global_4456448.f_60604 = -1;
		Global_4456448.f_58157 = -1;
	}
	Global_4456448.f_92412 = 0;
	Global_4456448.f_92413 = 0;
	Global_4456448.f_92414 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_305(&(Global_4456448.f_92415[iVar0 /*282*/]));
		iVar0++;
	}
	Global_4456448.f_153499 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_153500[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_4456448.f_153500[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_153500[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_142773 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_142780[iVar0 /*21*/] = { 0f, 0f, 0f };
		Global_4456448.f_142780[iVar0 /*21*/].f_3 = 0f;
		Global_4456448.f_142780[iVar0 /*21*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_142774[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/] = { 0f, 0f, 0f };
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_3 = 0f;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_4 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_5 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_7 = -1;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_8 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_9 = -1;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_10 = -1;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_11 = -1;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_12 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_13 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_14 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_15 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_16 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_17 = -2;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_18 = 0;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_19 = -1;
			Global_4456448.f_144041[iVar0 /*1261*/][iVar1 /*21*/].f_20 = -1;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_101955 = 0;
	Global_4456448.f_101959 = 0;
	Global_4456448.f_101960 = 0;
	Global_4456448.f_101957 = 50;
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		func_304(&(Global_4456448.f_101961[iVar0 /*493*/]));
		iVar0++;
	}
	Global_4456448.f_142773 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_142780[iVar0 /*21*/] = { 0f, 0f, 0f };
		Global_4456448.f_142780[iVar0 /*21*/].f_3 = 0f;
		Global_4456448.f_142780[iVar0 /*21*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4456448.f_58146[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_54096[iVar0 /*169*/].f_55 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_48 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_22 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_30 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_31 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_32 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_61 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_62 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/] = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_23 = { 0f, 0f, 0f };
		Global_4456448.f_54096[iVar0 /*169*/].f_26 = { 0f, 0f, 0f };
		Global_4456448.f_54096[iVar0 /*169*/].f_29 = 1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_107 = 10.5f;
		Global_4456448.f_54096[iVar0 /*169*/].f_109 = 1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_110 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_111 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_112 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_113 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_106 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_56 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_57 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_58 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_59 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_60 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_19 = 1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_20 = -1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_21 = -1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_114 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_115 = -1f;
		Global_4456448.f_54096[iVar0 /*169*/].f_116 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_117 = 0f;
		Global_4456448.f_54096[iVar0 /*169*/].f_118 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_120 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_121 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_122 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_123 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_126 = 5;
		Global_4456448.f_54096[iVar0 /*169*/].f_127 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_128 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_129 = -1;
		Global_4456448.f_54096[iVar0 /*169*/].f_130 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_124 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_125 = 0;
		Global_4456448.f_54096[iVar0 /*169*/].f_49 = 0;
		iVar136 = 0;
		iVar136 = 0;
		while (iVar136 <= 8)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_131[iVar136 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_54096[iVar0 /*169*/].f_159[iVar136] = 0f;
			iVar136++;
		}
		func_308(&(Global_4456448.f_54096[iVar0 /*169*/].f_98));
		if (Global_4456448.f_54096[iVar0 /*169*/].f_119 != 0)
		{
			unk_0xD0D7EA2E45FB6395(Global_4456448.f_54096[iVar0 /*169*/].f_119);
			Global_4456448.f_54096[iVar0 /*169*/].f_119 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_54096[iVar0 /*169*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_54096[iVar0 /*169*/].f_14[iVar1] = 0f;
			Global_4456448.f_54096[iVar0 /*169*/].f_38[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_43[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_33[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_68[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_73[iVar1] = 99999;
			Global_4456448.f_54096[iVar0 /*169*/].f_78[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_83[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_63[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_88[iVar1] = 0;
			Global_4456448.f_54096[iVar0 /*169*/].f_93[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_153497 = 0;
	Global_4456448.f_55 = 0;
	Global_4456448.f_187444 = 12;
	Global_4456448.f_187445 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_184537[iVar0] = -1;
		Global_4456448.f_184542[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_60685 = 0;
	Global_4456448.f_185405 = -1;
	Global_4456448.f_184547 = 0;
	Global_4456448.f_184536 = 0;
	Global_4456448.f_184549 = 0;
	Global_4456448.f_184550 = 0;
	Global_4456448.f_184551 = 0;
	Global_4456448.f_184548 = 0;
	Global_4456448.f_184555 = 0;
	Global_4456448.f_184552 = 1;
	Global_4456448.f_184553 = 0;
	Global_4456448.f_184554 = 0;
	Global_4456448.f_184556 = 1;
	Global_4456448.f_184556.f_1 = 0;
	Global_4456448.f_184556.f_2 = 4;
	Global_4456448.f_184556.f_29[0] = 0;
	Global_4456448.f_184556.f_29[1] = 0;
	Global_4456448.f_184556.f_29[2] = 0;
	Global_4456448.f_184556.f_29[3] = 0;
	Global_4456448.f_184556.f_34[0] = 0;
	Global_4456448.f_184556.f_34[1] = 0;
	Global_4456448.f_184556.f_34[2] = 0;
	Global_4456448.f_184556.f_34[3] = 0;
	Global_4456448.f_184556.f_3 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_184556.f_4[iVar0] = 0;
		Global_4456448.f_184556.f_9[iVar0] = 0;
		Global_4456448.f_184556.f_14[iVar0] = 0;
		Global_4456448.f_184556.f_19[iVar0] = 0;
		Global_4456448.f_184556.f_24[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_184595 = 5;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_156000[iVar0] = 0;
		Global_4456448.f_46670[iVar0] = 0;
		Global_4456448.f_46675[iVar0] = 0;
		Global_4456448.f_191962[iVar0] = 0f;
		iVar0++;
	}
	func_301();
	Global_4456448.f_190931 = -1;
	iVar137 = 0;
	while (iVar137 <= 29)
	{
		Global_4456448.f_149473[iVar137] = -1;
		Global_4456448.f_149442[iVar137] = -1;
		iVar138 = 0;
		while (iVar138 <= 12)
		{
			iVar139 = 0;
			while (iVar139 <= 3)
			{
				Global_4456448.f_149504[iVar137 /*66*/][iVar138 /*5*/][iVar139] = -1;
				Global_4456448.f_151485[iVar137 /*66*/][iVar138 /*5*/][iVar139] = -1;
				iVar139++;
			}
			iVar138++;
		}
		iVar137++;
	}
	Global_4456448.f_191077 = 0;
	Global_4456448.f_191088 = { 0f, 0f, 0f };
	Global_4456448.f_191091 = { 0f, 0f, 0f };
	Global_4456448.f_191960 = 0;
	Global_4456448.f_192123 = 0;
	Global_4456448.f_191961 = 20;
	Global_4456448.f_191995 = 500;
	Global_4456448.f_191996 = 10f;
	Global_4456448.f_191997 = 0.5f;
	Global_4456448.f_191998 = 1f;
	Global_4456448.f_191999 = 0f;
	Global_4456448.f_192000 = 25f;
	Global_4456448.f_192001 = 15f;
	Global_4456448.f_192002 = 6f;
	Global_4456448.f_192003 = 4f;
	Global_4456448.f_192004 = 10;
	Global_4456448.f_192005 = 1;
	Global_4456448.f_192006 = 0f;
	func_264();
	func_300(&(Global_4456448.f_196129));
	func_299(&(Global_4456448.f_196143));
	Global_4456448.f_192007 = 0.5f;
	Global_4456448.f_192122 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_192124[iVar0] = 6;
		iVar0++;
	}
	Global_4456448.f_192157 = 0;
	iVar139 = 0;
	while (iVar139 <= 4)
	{
		Global_4456448.f_192160[iVar139 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_192176[iVar139] = 0f;
		Global_4456448.f_192182[iVar139 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_192198[iVar139] = 0f;
		iVar139++;
	}
	Global_4456448.f_196510[0] = 1.25f;
	Global_4456448.f_196510[1] = 1f;
	Global_4456448.f_196513 = 10;
	Global_4456448.f_192205 = 0;
	Global_4456448.f_192206 = 0;
	Global_4456448.f_192207 = 0f;
	Global_4456448.f_192208 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Global_4456448.f_192109[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_192107 = 12;
	Global_4456448.f_192108 = 3;
	Global_4456448.f_192210 = 0;
	Global_4456448.f_192211 = 30;
	Global_4456448.f_192212 = 2.5f;
	Var140.f_2 = 5;
	Var140.f_2.f_1.f_1 = -1;
	Var140.f_2.f_1.f_13 = 1092616192;
	Var140.f_2.f_1.f_14 = 1092616192;
	Var140.f_2.f_1.f_15 = 1101004800;
	Var140.f_2.f_1.f_16 = 1077936128;
	Var140.f_2.f_1.f_17 = 1119092736;
	Var140.f_2.f_1.f_18 = 1077936128;
	Var140.f_2.f_1.f_19 = 1065353216;
	Var140.f_2.f_1.f_20.f_1 = -1;
	Var140.f_2.f_1.f_20.f_13 = 1092616192;
	Var140.f_2.f_1.f_20.f_14 = 1092616192;
	Var140.f_2.f_1.f_20.f_15 = 1101004800;
	Var140.f_2.f_1.f_20.f_16 = 1077936128;
	Var140.f_2.f_1.f_20.f_17 = 1119092736;
	Var140.f_2.f_1.f_20.f_18 = 1077936128;
	Var140.f_2.f_1.f_20.f_19 = 1065353216;
	Var140.f_2.f_1.f_20.f_20.f_1 = -1;
	Var140.f_2.f_1.f_20.f_20.f_13 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_14 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_15 = 1101004800;
	Var140.f_2.f_1.f_20.f_20.f_16 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_17 = 1119092736;
	Var140.f_2.f_1.f_20.f_20.f_18 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_19 = 1065353216;
	Var140.f_2.f_1.f_20.f_20.f_20.f_1 = -1;
	Var140.f_2.f_1.f_20.f_20.f_20.f_13 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_20.f_14 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_20.f_15 = 1101004800;
	Var140.f_2.f_1.f_20.f_20.f_20.f_16 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_20.f_17 = 1119092736;
	Var140.f_2.f_1.f_20.f_20.f_20.f_18 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_20.f_19 = 1065353216;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_13 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_14 = 1092616192;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_15 = 1101004800;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_16 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_17 = 1119092736;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_18 = 1077936128;
	Var140.f_2.f_1.f_20.f_20.f_20.f_20.f_19 = 1065353216;
	Var140.f_103.f_5 = 1117782016;
	Var140.f_103.f_6 = 2;
	Var140.f_103.f_13 = 1112014848;
	Global_4456448.f_195024 = { Var140 };
	Var257 = -1;
	Global_4456448.f_196104 = { Var257 };
	Global_4456448.f_196507 = 60000;
	Global_4456448.f_196507.f_1 = 35;
	Global_4456448.f_154722 = 0;
	Global_4456448.f_154723 = 0;
	Global_4456448.f_154724 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_154725[iVar0] = 0;
		Global_4456448.f_154756[iVar0] = -1;
		iVar0++;
	}
}

void func_299(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_1 = 0;
	*uParam0 = -1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		uParam0->f_2[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		uParam0->f_6[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		uParam0->f_13[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_30[iVar1 /*6*/][iVar0] = -1;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_73[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_78[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_83[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_88[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			uParam0->f_93[iVar1 /*6*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_118[iVar1 /*3*/] = 0;
		uParam0->f_118[iVar1 /*3*/].f_1 = -1;
		uParam0->f_118[iVar1 /*3*/].f_2 = -1;
		iVar1++;
	}
	uParam0->f_131 = 0;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_132[iVar1 /*5*/][iVar0] = 0;
			uParam0->f_148[iVar1 /*5*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		uParam0->f_164[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		StringCopy(&(uParam0->f_170[iVar1 /*16*/]), "", 64);
		iVar1++;
	}
}

void func_300(var uParam0)
{
	struct<14> Var0;
	int iVar14;
	
	Var0 = 1077936128;
	Var0.f_1 = 1116471296;
	Var0.f_2 = 1086324736;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1114636288;
	Var0.f_5 = 1084227584;
	Var0.f_6 = 1084227584;
	Var0.f_7 = 1089470464;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 4;
	*uParam0 = { Var0 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		Global_4456448.f_196129.f_9[iVar14] = -1;
		iVar14++;
	}
}

void func_301()
{
	int iVar0;
	
	Global_4456448.f_192215 = 10;
	Global_4456448.f_192215.f_2808 = 0;
	iVar0 = 1;
	while (iVar0 <= 20)
	{
		func_302(iVar0);
		Global_4456448.f_192215.f_2418[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_4456448.f_192215.f_2717[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_192215.f_2724 = 100f;
	Global_4456448.f_192215.f_2727 = 0;
	Global_4456448.f_192215.f_2725 = 0f;
	Global_4456448.f_192215.f_2726 = 0f;
	Global_4456448.f_192215.f_2728 = 0;
	Global_4456448.f_192215.f_2795 = 360;
	Global_4456448.f_192215.f_2796 = 1200;
	Global_4456448.f_192215.f_2797 = 0;
	Global_4456448.f_192215.f_2798 = 0;
	Global_4456448.f_192215.f_2799 = 0;
	Global_4456448.f_192215.f_2802 = 0;
	Global_4456448.f_192215.f_2803 = 0;
	Global_4456448.f_192215.f_2804 = 0;
	Global_4456448.f_192215.f_2805 = 0;
	Global_4456448.f_192215.f_2806 = 0;
	Global_4456448.f_192215.f_2807 = 0;
	Global_4456448.f_192215.f_193[0 /*4*/][0] = func_186(7, 0, 0);
	Global_4456448.f_192215.f_1086[0 /*5*/][0] = func_186(5, 0, 0);
	Global_4456448.f_192215.f_2462[0 /*4*/][0] = func_186(15, 0, 0);
	Global_4456448.f_192215.f_873[0 /*4*/][0] = func_186(27, 0, 0);
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= 21)
	{
		return;
	}
	Global_4456448.f_192215.f_1[iParam0] = func_187(13, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_192215.f_23[iParam0 /*4*/][iVar0] = func_187(0, iParam0, iVar0);
		Global_4456448.f_192215.f_108[iParam0 /*4*/][iVar0] = func_187(1, iParam0, iVar0);
		Global_4456448.f_192215.f_278[iParam0 /*4*/][iVar0] = func_187(8, iParam0, iVar0);
		Global_4456448.f_192215.f_363[iParam0 /*4*/][iVar0] = func_187(9, iParam0, iVar0);
		Global_4456448.f_192215.f_448[iParam0 /*4*/][iVar0] = func_187(10, iParam0, iVar0);
		Global_4456448.f_192215.f_533[iParam0 /*4*/][iVar0] = func_187(12, iParam0, iVar0);
		Global_4456448.f_192215.f_193[iParam0 /*4*/][iVar0] = func_186(7, iParam0, iVar0);
		Global_4456448.f_192215.f_618[iParam0 /*4*/][iVar0] = func_187(24, iParam0, iVar0);
		Global_4456448.f_192215.f_703[iParam0 /*4*/][iVar0] = func_187(25, iParam0, iVar0);
		Global_4456448.f_192215.f_788[iParam0 /*4*/][iVar0] = func_187(26, iParam0, iVar0);
		Global_4456448.f_192215.f_873[iParam0 /*4*/][iVar0] = func_186(27, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_192215.f_958[iParam0] = func_187(3, iParam0, iVar0);
	Global_4456448.f_192215.f_2440[iParam0] = func_187(6, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_192215.f_980[iParam0 /*5*/][iVar0] = func_187(4, iParam0, iVar0);
		Global_4456448.f_192215.f_1086[iParam0 /*5*/][iVar0] = func_186(5, iParam0, iVar0);
		Global_4456448.f_192215.f_1192[iParam0 /*5*/][iVar0] = func_187(14, iParam0, iVar0);
		Global_4456448.f_192215.f_1298[iParam0 /*5*/][iVar0] = func_187(28, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_192215.f_2462[iParam0 /*4*/][iVar0] = func_186(15, iParam0, iVar0);
		Global_4456448.f_192215.f_2547[iParam0 /*4*/][iVar0] = func_187(16, iParam0, iVar0);
		Global_4456448.f_192215.f_2632[iParam0 /*4*/][iVar0] = func_187(28, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_192215.f_2729[iParam0] = func_187(17, iParam0, iVar0);
	Global_4456448.f_192215.f_2773[iParam0] = func_187(18, iParam0, iVar0);
	Global_4456448.f_192215.f_2751[iParam0] = func_187(19, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_192215.f_1404[iParam0 /*5*/][iVar0] = func_185(iParam0, iVar0);
		Global_4456448.f_192215.f_1510[iParam0 /*5*/][iVar0] = func_187(20, iParam0, iVar0);
		Global_4456448.f_192215.f_1616[iParam0 /*5*/][iVar0] = func_187(21, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_192215.f_1722[iParam0 /*11*/][iVar0] = unk_0xF29F8049FCC175A9(func_303(iParam0, iVar0));
		Global_4456448.f_192215.f_1954[iParam0 /*11*/][iVar0] = 0;
		Global_4456448.f_192215.f_2186[iParam0 /*11*/][iVar0] = 0;
		iVar0++;
	}
	if (unk_0xA2BC31158C8CEFD2(360, iParam0))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_192215.f_2795), iParam0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2795), iParam0);
	}
	if (unk_0xA2BC31158C8CEFD2(1200, iParam0))
	{
		unk_0xA1E7A40E1F56E511(&(Global_4456448.f_192215.f_2796), iParam0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2796), iParam0);
	}
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2798), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2799), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2802), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2803), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2804), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2805), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2801), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2800), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2806), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2807), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2797), iParam0);
	unk_0x3B76114EC84D5812(&(Global_4456448.f_192215.f_2728), iParam0);
	iVar1 = 0;
	while (iVar1 <= 59)
	{
		Global_4456448.f_88017[iVar1 /*72*/].f_49[iParam0] = 76;
		Global_4456448.f_92338.f_49[iParam0] = 76;
		iVar1++;
	}
}

int func_303(int iParam0, int iParam1)
{
	if (iParam1 > 6)
	{
		iParam1 = (iParam1 - 5);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 2:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 4:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 6:
					return joaat("pickup_weapon_microsmg");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_microsmg");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 2:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_pumpshotgun");
					break;
				
				case 4:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_pumpshotgun");
					break;
				
				case 6:
					return joaat("pickup_weapon_combatmg");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 3:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_carbinerifle");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 1:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 5:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_heavysniper");
					break;
				
				case 2:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_heavysniper");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
	}
	return joaat("pickup_weapon_rpg");
}

void func_304(var uParam0)
{
	int iVar0;
	
	uParam0->f_46 = 0;
	uParam0->f_58 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0.75f;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_37 = 0;
	uParam0->f_41 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = -1;
	uParam0->f_42 = 100;
	uParam0->f_45 = 0f;
	uParam0->f_312 = -1;
	uParam0->f_311 = -1;
	uParam0->f_313 = 0;
	uParam0->f_314 = 0;
	uParam0->f_315 = 20;
	uParam0->f_323 = -1;
	uParam0->f_69 = -1;
	uParam0->f_56 = -1;
	uParam0->f_39 = 0;
	uParam0->f_40 = -1;
	uParam0->f_57 = 0;
	uParam0->f_267 = 0;
	uParam0->f_268 = 0;
	uParam0->f_269 = 0;
	uParam0->f_270 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	uParam0->f_276 = 0;
	uParam0->f_277 = 0;
	uParam0->f_278 = 0;
	uParam0->f_279 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
	uParam0->f_492 = 32f;
	uParam0->f_282 = -1;
	uParam0->f_283 = 0;
	uParam0->f_284 = -1;
	uParam0->f_38 = 0;
	uParam0->f_17 = 0f;
	uParam0->f_5 = 50f;
	uParam0->f_426 = -101;
	uParam0->f_427 = -1;
	uParam0->f_436 = -1;
	uParam0->f_437 = -1f;
	uParam0->f_438 = -1;
	uParam0->f_439 = -1;
	uParam0->f_489 = -1;
	uParam0->f_440 = 0;
	uParam0->f_441 = -1;
	uParam0->f_442 = -1;
	uParam0->f_443 = -1;
	uParam0->f_444 = -1;
	uParam0->f_445 = -1;
	uParam0->f_446 = -1;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_18 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = 0f;
	uParam0->f_251 = 0;
	uParam0->f_77 = 0;
	uParam0->f_237 = 0;
	uParam0->f_238 = 0;
	uParam0->f_239 = 0;
	uParam0->f_251 = 0;
	uParam0->f_261 = 0;
	uParam0->f_447 = -1;
	uParam0->f_262 = { 0f, 0f, 0f };
	uParam0->f_252 = 0;
	uParam0->f_260 = -1;
	uParam0->f_433 = -1;
	uParam0->f_80 = { 0f, 0f, 0f };
	uParam0->f_70 = -1;
	uParam0->f_71 = -1;
	uParam0->f_76 = 0;
	uParam0->f_72 = 0;
	uParam0->f_360 = 0;
	uParam0->f_371 = 1f;
	uParam0->f_372 = 0;
	uParam0->f_105 = 0;
	uParam0->f_296 = 0;
	uParam0->f_61 = 0;
	uParam0->f_299 = 250;
	uParam0->f_302 = 0;
	uParam0->f_303 = -1;
	uParam0->f_377 = -1;
	uParam0->f_304 = 0;
	uParam0->f_378 = 4;
	uParam0->f_341 = 0;
	uParam0->f_430 = 0;
	uParam0->f_431 = 0;
	uParam0->f_78 = 0;
	uParam0->f_240 = 0;
	uParam0->f_241 = 0;
	uParam0->f_242 = 0;
	uParam0->f_434 = -1;
	uParam0->f_435 = -1;
	uParam0->f_432 = 0;
	uParam0->f_79 = -1;
	uParam0->f_243 = -1;
	uParam0->f_244 = -1;
	uParam0->f_245 = -1;
	uParam0->f_220 = 0;
	uParam0->f_221 = -1;
	uParam0->f_222 = -1;
	uParam0->f_223 = 0;
	uParam0->f_224 = -1;
	uParam0->f_225 = -1;
	uParam0->f_324 = -1;
	uParam0->f_325 = -1;
	uParam0->f_328 = -1;
	uParam0->f_329 = -1;
	uParam0->f_326 = -1;
	uParam0->f_374 = -1;
	uParam0->f_373 = -1;
	uParam0->f_375 = -1;
	uParam0->f_376 = -1;
	uParam0->f_226 = -1;
	uParam0->f_227 = 0;
	uParam0->f_73 = 0;
	uParam0->f_425 = 1;
	uParam0->f_295 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_22[iVar0] = 0;
		uParam0->f_27[iVar0] = 2;
		uParam0->f_32[iVar0] = 99999;
		uParam0->f_285[iVar0] = -1;
		uParam0->f_290[iVar0] = -1;
		uParam0->f_342[iVar0] = 0;
		uParam0->f_347[iVar0] = 0;
		uParam0->f_361[iVar0] = -1;
		uParam0->f_366[iVar0] = -1;
		uParam0->f_380[iVar0] = -2;
		uParam0->f_246[iVar0] = 0;
		uParam0->f_330[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_158[0] = 0f;
	uParam0->f_167[0] = 0f;
	uParam0->f_185[0] = 0f;
	uParam0->f_106[0] = 0;
	uParam0->f_115[0] = -1;
	uParam0->f_124[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_149[0] = 3;
	uParam0->f_176[0] = -1;
	uParam0->f_203[0] = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		uParam0->f_83[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_106[iVar0 + 1] = 0;
		uParam0->f_158[iVar0 + 1] = 0f;
		uParam0->f_167[iVar0 + 1] = 0f;
		uParam0->f_185[iVar0 + 1] = 0f;
		uParam0->f_115[iVar0 + 1] = -1;
		uParam0->f_124[iVar0 + 1 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_149[iVar0 + 1] = 3;
		uParam0->f_176[iVar0 + 1] = -1;
		uParam0->f_203[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_194[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_394[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_407[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_265 = -1;
	uParam0->f_266 = -1;
	uParam0->f_379 = -1;
	uParam0->f_385 = -1;
	uParam0->f_386 = -1;
	uParam0->f_387 = -1;
	uParam0->f_391 = -1;
	uParam0->f_392 = 0f;
	uParam0->f_388 = -1;
	uParam0->f_389 = -1;
	uParam0->f_390 = -1;
	uParam0->f_393 = -1;
	uParam0->f_419 = -1;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_490 = 0;
	uParam0->f_491 = 0;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		uParam0->f_449[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_477[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_487 = -1;
	uParam0->f_488 = 0;
	func_308(&(uParam0->f_352));
}

void func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 50f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = -1;
	uParam0->f_25 = -1;
	uParam0->f_27 = -1;
	uParam0->f_31 = 0;
	uParam0->f_32 = 100;
	uParam0->f_33 = 1001f;
	uParam0->f_34 = 0;
	uParam0->f_35 = -1;
	uParam0->f_36 = 1001f;
	uParam0->f_40 = 1.5f;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_57 = 0;
	uParam0->f_58 = 0;
	uParam0->f_133 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1f;
	uParam0->f_60 = 0;
	uParam0->f_63 = 1.2f;
	uParam0->f_62 = 0;
	uParam0->f_194 = -1;
	uParam0->f_195 = 10;
	uParam0->f_215 = -1;
	uParam0->f_216 = -1;
	uParam0->f_217 = 1;
	uParam0->f_220 = 60;
	uParam0->f_221 = 4.5f;
	uParam0->f_222 = -1;
	uParam0->f_223 = -1;
	uParam0->f_225 = 0;
	uParam0->f_186 = 1f;
	uParam0->f_178 = -1;
	uParam0->f_179 = -1;
	uParam0->f_180 = -1;
	uParam0->f_182 = 0;
	uParam0->f_181 = 0;
	uParam0->f_44 = -1;
	uParam0->f_88 = -1;
	uParam0->f_89 = -1;
	uParam0->f_90 = -1;
	uParam0->f_45 = -1;
	uParam0->f_85 = -1;
	uParam0->f_86 = -1;
	uParam0->f_87 = -1;
	uParam0->f_46 = 0;
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	uParam0->f_74 = -1;
	uParam0->f_75 = -1;
	uParam0->f_77 = -1;
	uParam0->f_131 = -1;
	uParam0->f_130 = -1;
	uParam0->f_76 = -1;
	uParam0->f_84 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_157 = 0;
	uParam0->f_162 = -1;
	uParam0->f_163 = { 0f, 0f, 0f };
	uParam0->f_166 = 0f;
	uParam0->f_167 = 0f;
	uParam0->f_168 = -1;
	uParam0->f_169 = -1;
	uParam0->f_159 = -1f;
	uParam0->f_158 = -1;
	uParam0->f_161 = 0;
	uParam0->f_226 = -1;
	uParam0->f_227 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 5;
	uParam0->f_174 = -1;
	uParam0->f_160 = 10;
	uParam0->f_175 = 0;
	uParam0->f_176 = 2;
	uParam0->f_177 = -1;
	uParam0->f_187 = -1f;
	uParam0->f_188 = 0;
	uParam0->f_189 = -1;
	uParam0->f_190 = 0;
	uParam0->f_191 = 10;
	uParam0->f_192 = -1;
	uParam0->f_193 = 0;
	uParam0->f_214 = -1;
	uParam0->f_37 = 1001f;
	uParam0->f_38 = 1001f;
	uParam0->f_39 = 1001f;
	uParam0->f_129 = 100f;
	uParam0->f_101 = -1;
	uParam0->f_102 = 1;
	uParam0->f_61 = 0;
	uParam0->f_59 = 0;
	uParam0->f_100 = -1;
	uParam0->f_121 = -1;
	uParam0->f_43 = 0;
	uParam0->f_184 = -1;
	uParam0->f_185 = 0;
	uParam0->f_123 = -1;
	uParam0->f_122 = -1;
	uParam0->f_132 = 0;
	uParam0->f_228 = { 0f, 0f, 0f };
	uParam0->f_231 = 0;
	uParam0->f_232 = -1;
	uParam0->f_233 = -1;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = -1;
	uParam0->f_237 = -1;
	func_308(&(uParam0->f_113));
	iVar0 = 0;
	while (iVar0 < 17)
	{
		uParam0->f_196[iVar0] = -2;
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		uParam0->f_238[iVar1 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_266[iVar1] = 0f;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_134[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_147[iVar0] = 0f;
		uParam0->f_152[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 99999;
		uParam0->f_124[iVar0] = 0;
		uParam0->f_103[iVar0] = 0;
		uParam0->f_108[iVar0] = 0;
		uParam0->f_64[iVar0] = -1;
		uParam0->f_69[iVar0] = -1;
		uParam0->f_78[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_83 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_170[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_276 = -1;
	uParam0->f_277 = -1;
	uParam0->f_278 = -1;
	uParam0->f_279 = 0;
	uParam0->f_280 = 0;
	uParam0->f_281 = 0;
}

void func_306()
{
	int iVar0;
	
	Global_4456448.f_191112 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_191113[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_191113[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_191113[iVar0 /*11*/].f_7 = 0;
		Global_4456448.f_191113[iVar0 /*11*/].f_8 = 0;
		Global_4456448.f_191113[iVar0 /*11*/].f_10 = 0f;
		Global_4456448.f_191113[iVar0 /*11*/].f_9 = 0;
		iVar0++;
	}
}

void func_307()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_4456448.f_154655 = 0;
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_4456448.f_154787[iVar0 /*48*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_154787[iVar0 /*48*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_154787[iVar0 /*48*/].f_10 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_21 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_23 = 0f;
		Global_4456448.f_154787[iVar0 /*48*/].f_24 = 0f;
		Global_4456448.f_154787[iVar0 /*48*/].f_22 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_7 = 0f;
		Global_4456448.f_154787[iVar0 /*48*/].f_9 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_11[iVar1] = -1;
			iVar1++;
		}
		Global_4456448.f_154787[iVar0 /*48*/].f_25 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_26 = 2;
		Global_4456448.f_154787[iVar0 /*48*/].f_32 = -1;
		Global_4456448.f_154787[iVar0 /*48*/].f_33 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_34 = 0f;
		Global_4456448.f_154787[iVar0 /*48*/].f_35 = 0;
		Global_4456448.f_154787[iVar0 /*48*/].f_36 = -1;
		Global_4456448.f_154787[iVar0 /*48*/].f_39 = 1;
		Global_4456448.f_154787[iVar0 /*48*/].f_40 = 120;
		Global_4456448.f_154787[iVar0 /*48*/].f_27 = 0;
		StringCopy(&(Global_4456448.f_154787[iVar0 /*48*/].f_28), "", 16);
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			Global_4456448.f_154787[iVar0 /*48*/].f_41[iVar2 /*3*/] = { 0f, 0f, 0f };
			iVar2++;
		}
		iVar0++;
	}
}

void func_308(var uParam0)
{
	uParam0->f_1 = -1;
	*uParam0 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
}

void func_309(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 999999f;
	uParam0->f_5 = 999999f;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0f;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
	uParam0->f_22 = -1;
	uParam0->f_24 = 0;
	uParam0->f_25 = { 0f, 0f, 0f };
	uParam0->f_28 = 3;
	uParam0->f_29 = { 0f, 0f, 0f };
	uParam0->f_23 = -1;
	uParam0->f_32 = 0f;
}

void func_310(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_311(uParam0, iVar0);
		iVar0++;
	}
}

void func_311(var uParam0, int iParam1)
{
	*(uParam0[iParam1 /*3*/]) = { 0f, 0f, 0f };
	uParam0->f_91[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_182[iParam1] = 0;
}

void func_312()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_313(iVar0);
		iVar0++;
	}
	Global_4456448.f_191994 = 0;
}

void func_313(int iParam0)
{
	var uVar0;
	
	Global_4456448.f_191973[iParam0] = uVar0;
}

void func_314(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_315(int iParam0)
{
	Global_4456448.f_58154 = iParam0;
	if (Global_4456448.f_58154 != 18 && Global_4456448.f_58154 != 19)
	{
		unk_0x3B76114EC84D5812(&(Global_4456448.f_28), 18);
	}
	func_316((func_318() || func_317()));
}

void func_316(var uParam0)
{
	Global_4194304 = uParam0;
}

bool func_317()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

int func_318()
{
	if ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_28, 18) || Global_4456448.f_58154 == 18) || Global_4456448.f_58154 == 19)
	{
		return 1;
	}
	return 0;
}

void func_319(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = 0f;
	uParam0->f_14 = 0f;
	uParam0->f_15 = 0f;
	StringCopy(&(uParam0->f_20), "", 24);
	uParam0->f_16 = -1;
	uParam0->f_17 = -1;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_26 = { 0f, 0f, 0f };
}

void func_320(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_4 = 0;
}

void func_321(char* sParam0)
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
	sParam0->f_63 = 6f;
	sParam0->f_64 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_324(&(sParam0->f_449[iVar0 /*4*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_323(&(sParam0->f_466[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_322(&(sParam0->f_118[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_322(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	StringCopy(&(uParam0->f_3), "", 32);
}

void func_323(var uParam0)
{
	*uParam0 = -1;
	func_324(&(uParam0->f_1));
}

void func_324(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_325(char* sParam0)
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
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_328(&(sParam0->f_1479[iVar0 /*2*/]));
		func_324(&(sParam0->f_1115[iVar0 /*4*/]));
		func_324(&(sParam0->f_1132[iVar0 /*4*/]));
		iVar0++;
	}
	func_327(&(sParam0->f_1488));
	sParam0->f_90 = 0;
	sParam0->f_89 = 0;
	sParam0->f_91 = 0;
	sParam0->f_782 = 0;
	sParam0->f_783 = 6f;
	sParam0->f_483 = 0;
	sParam0->f_484 = 0;
	sParam0->f_485 = 0;
	sParam0->f_486 = { 0f, 0f, 0f };
	sParam0->f_775 = { 0f, 0f, 0f };
	sParam0->f_778 = 0f;
	sParam0->f_779 = { 0f, 0f, 0f };
	sParam0->f_1475 = -1;
	sParam0->f_1476 = 1f;
	sParam0->f_1477 = 0f;
	sParam0->f_1478 = 0f;
	sParam0->f_1493 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_326(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_322(&(sParam0->f_784[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_326(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_92[iParam1] = 0;
		sParam0->f_47[iParam1] = 0f;
		sParam0->f_68[iParam1] = 0f;
		sParam0->f_113[iParam1] = 0;
		sParam0->f_134[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_195[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_256[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_317[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_378[iParam1] = 0f;
		sParam0->f_399[iParam1] = 0f;
		sParam0->f_420[iParam1] = 0;
		sParam0->f_441[iParam1] = -1;
		sParam0->f_462[iParam1] = 0f;
		sParam0->f_489[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1311[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1372[iParam1] = 0f;
		sParam0->f_1393[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1454[iParam1] = 0f;
		sParam0->f_550[iParam1] = 0f;
		StringCopy(&(sParam0->f_1149[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1230[iParam1 /*4*/]), "", 16);
	}
}

void func_327(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = 0f;
}

void func_328(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

int func_329()
{
	if (func_330(1))
	{
		return 10;
	}
	return 5;
}

bool func_330(int iParam0)
{
	return Global_4456448.f_190931 >= iParam0;
}

void func_331()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		Global_4456448.f_58706[iVar0] = 0;
		iVar0++;
	}
}

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_154518[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

void func_333(int iParam0)
{
	int iVar0;
	
	Global_4456448.f_195399[iParam0 /*42*/] = -1;
	Global_4456448.f_195399[iParam0 /*42*/].f_1[0 /*3*/] = { 0f, 0f, 0f };
	Global_4456448.f_195399[iParam0 /*42*/].f_1[1 /*3*/] = { 0f, 0f, 0f };
	Global_4456448.f_195399[iParam0 /*42*/].f_8 = 0f;
	Global_4456448.f_195399[iParam0 /*42*/].f_9 = { 0f, 0f, 0f };
	Global_4456448.f_195399[iParam0 /*42*/].f_30 = { 0f, 0f, 0f };
	Global_4456448.f_195399[iParam0 /*42*/].f_30.f_3 = { 0f, 0f, 0f };
	Global_4456448.f_195399[iParam0 /*42*/].f_30.f_6 = 0f;
	Global_4456448.f_195399[iParam0 /*42*/].f_30.f_7 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_195399[iParam0 /*42*/].f_12[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_195399[iParam0 /*42*/].f_25[iVar0] = 0f;
		iVar0++;
	}
	Global_4456448.f_195399[iParam0 /*42*/].f_38 = -1;
	Global_4456448.f_195399[iParam0 /*42*/].f_39 = -1;
	Global_4456448.f_195399[iParam0 /*42*/].f_40 = -1;
	Global_4456448.f_195399[iParam0 /*42*/].f_41 = 0;
}

int func_334()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196;
}

int func_335()
{
	if (unk_0xCD97B9861557C025())
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

bool func_336()
{
	return unk_0xA2BC31158C8CEFD2(Global_959568.f_8, 0);
}

bool func_337()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 4);
}

bool func_338()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961, 28);
}

var func_339()
{
	return Global_2448961.f_592;
}

void func_340()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394836 = { Var0 };
	StringCopy(&(Global_2394836.f_30), "", 64);
	StringCopy(&(Global_2394836.f_46), "", 64);
	StringCopy(&(Global_2394836.f_15), "", 32);
}

void func_341()
{
	unk_0x3B76114EC84D5812(&Global_2448961, 4);
}

void func_342()
{
	unk_0x3B76114EC84D5812(&Global_2448961, 28);
}

void func_343(bool bParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;
	
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_32 = 0;
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
	bParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	bParam0->f_41 = 0;
	if (bParam2)
	{
		bParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_102(bParam0, 0);
	}
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 144:
			return 15;
		
		case 151:
			return 8;
		
		case 145:
			return 14;
		
		case 149:
			return 122;
		
		case 152:
			return 1;
		
		case 150:
			return 5;
		
		case 153:
			return 6;
		
		case 146:
			return 11;
		
		case 154:
			return 0;
		
		case 155:
			return 2;
		
		case 147:
			return 13;
		
		case 156:
			return 3;
		
		case 148:
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
		
		case 106:
			return 225;
		
		case 107:
			return 226;
		
		case 108:
			return 227;
		
		case 109:
			return 229;
		
		case 110:
			return 230;
		
		case 112:
			return 233;
		
		case 114:
			return 237;
		
		case 115:
			return 238;
		
		case 116:
			return 239;
		
		case 117:
			return 240;
		
		case 118:
			return 241;
		
		case 119:
			return 242;
		
		case 120:
			return 244;
		
		case 121:
			return 248;
		
		case 122:
			return 249;
		
		case 123:
			return 250;
		
		case 124:
			return 243;
		
		case 125:
			return 158;
		
		default:
	}
	return 256;
}

bool func_345()
{
	return Global_2394836;
}

var func_346()
{
	return Global_2394836.f_3;
}

