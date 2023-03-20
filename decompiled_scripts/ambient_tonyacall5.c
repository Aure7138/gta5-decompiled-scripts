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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	struct<3> Local_51 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 16;
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
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
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
	fLocal_39 = 50f;
	fLocal_40 = 2500f;
	Local_41 = { 409.1539f, -1626.677f, 28.2928f };
	Local_47 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_50 = 202.6928f;
	Local_51 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_54 = 85.7173f;
	if (unk_0x7547D7CF93115D6D(18))
	{
		func_26();
	}
	if (unk_0x25531002BCF0D968(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0x883793591E631A3B();
	}
	while (true)
	{
		unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95());
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			Local_44 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_44, Local_41) > fLocal_40)
		{
			func_26();
		}
		switch (iLocal_35)
		{
			case 0:
				if (func_22())
				{
					iLocal_35 = 1;
				}
				break;
			
			case 1:
				unk_0x395C5D98343F0040("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x395C5D98343F0040("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x395C5D98343F0040("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xCBE6AC5010E5CE5C(joaat("prop_phone_ing"));
				if (((unk_0xD291857D0C9C7FEC(joaat("prop_phone_ing")) && unk_0xCE40391AB65FE305("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0xCE40391AB65FE305("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0xCE40391AB65FE305("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_35 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_35 = 3;
				}
				break;
			
			case 3:
				func_26();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	if (!unk_0xE5D56342B0FF1D0D(uLocal_36))
	{
		Var3 = { unk_0xBF1B13057E5119A4(uLocal_36, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0xE5D56342B0FF1D0D(uLocal_36)) || func_21())
	{
		return 1;
	}
	switch (iLocal_38)
	{
		case 0:
			if (unk_0xFD68187442384158(uLocal_36) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
			{
				if (unk_0x594EB70937EC1486(uLocal_36, Local_55, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x9F77DFFC61FCB68C(&uVar7);
					unk_0xB5DC017AFD430D1B(&uVar7);
					unk_0xDA74C6C73AFEC1F3(0, fLocal_58, 0);
					unk_0xEC0A546609840086(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0xEC0A546609840086(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x6EE8A5CF9AC75F12(uVar7);
					unk_0x8229311A391A4EC6(uLocal_36, uVar7);
					unk_0x9F77DFFC61FCB68C(&uVar7);
					iLocal_38 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xFD68187442384158(uLocal_36) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
			{
				if (unk_0xCE91B0C5B23E0134(uLocal_36) == 1)
				{
					if (!unk_0xFD68187442384158(uLocal_37))
					{
						if (unk_0x22605DE2E6933CF2(uLocal_36, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0x5132EC78980FBED7(uLocal_36, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_37 = unk_0xCEC985247737A30E(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x26030664C7D28388(uLocal_37, uLocal_36, unk_0xA8918EDB277FC51C(uLocal_36, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0xCE91B0C5B23E0134(uLocal_36) == 2)
				{
					iVar6 = (unk_0x4D3E68F73B727E49(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_61, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_38 = 2;
						}
					}
					else if (func_4(&uLocal_61, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_38 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xE5D56342B0FF1D0D(uLocal_36))
			{
				if (!func_3())
				{
					unk_0x9F77DFFC61FCB68C(&uVar7);
					unk_0xB5DC017AFD430D1B(&uVar7);
					unk_0xEC0A546609840086(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x371C90C63129A983(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x6EE8A5CF9AC75F12(uVar7);
					unk_0x8229311A391A4EC6(uLocal_36, uVar7);
					unk_0x9F77DFFC61FCB68C(&uVar7);
					iLocal_38 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0xD686D61A57BCB6E7(0) != 4)
				{
					if (func_4(&uLocal_61, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_38 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_38 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0xFD68187442384158(uLocal_36) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
	{
		if (unk_0xCE91B0C5B23E0134(uLocal_36) == 1)
		{
			if (unk_0xFD68187442384158(uLocal_37))
			{
				unk_0x4095FD029041DD48(&uLocal_37);
				unk_0x8E759206778E571F(uLocal_36, unk_0x507DA4994C3D8EBD(), -1, 0, 2);
			}
		}
	}
	if (unk_0xFD68187442384158(uLocal_36) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
	{
		if (unk_0xFD68187442384158(uLocal_37))
		{
			if (unk_0xEC043AB2FEE0E94F(uLocal_36, 993674639) == 1)
			{
				unk_0x4095FD029041DD48(&uLocal_37);
			}
		}
	}
}

int func_3()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_17();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_6();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_7()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_8()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_11();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_11()
{
	func_12();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_15(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_14(unk_0x507DA4994C3D8EBD());
			if (func_13(iVar0) && (!func_16(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97173.f_1729.f_539.f_3213))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(uParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_19()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_21()
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
	{
		if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), uLocal_36) || unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0xFD68187442384158(uLocal_37))
			{
				unk_0x5B97F41A7BE54877(uLocal_37, 1, 1);
			}
			unk_0xD858EC6FECDB4B3F(0);
			if (unk_0xEC043AB2FEE0E94F(uLocal_36, 1805844857) != 1)
			{
				unk_0xA1E4BA3B17C6D931(uLocal_36, 1);
				unk_0xA859D289EEB2D72A(uLocal_36, unk_0x507DA4994C3D8EBD(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

int func_22()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	}
	unk_0x0B676D277AA38546(Var0, fLocal_39, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0xFD68187442384158(uVar3) && !unk_0xE5D56342B0FF1D0D(uVar3))
	{
		iVar4 = unk_0x26EA758C2A691D06(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_36 = uVar3;
			unk_0xBAE5DF507EEC53C8(uLocal_36, 1, 0);
			unk_0xFBF796BC19E6FC23(uLocal_36, 0);
			unk_0x6A750A31D18DA81A(uLocal_36, 0);
			unk_0x3F671607BC1804B5(uLocal_36, "TONYA");
			unk_0xE440546F94B26235(uLocal_36, joaat("player"));
			func_25(&uLocal_61, 3, uLocal_36, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_55))
			{
				if (unk_0xEC043AB2FEE0E94F(uLocal_36, 713668775) != 1)
				{
					unk_0x3F07E364A21EBC20(uLocal_36, Local_55, 1f, -1, 0.25f, 0, fLocal_58);
					unk_0xA1E4BA3B17C6D931(uLocal_36, 1);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_23(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_24()
{
	struct<3> Var0;
	
	if (unk_0xFD68187442384158(uLocal_36) && !unk_0xE5D56342B0FF1D0D(uLocal_36))
	{
		Var0 = { unk_0xBF1B13057E5119A4(uLocal_36, 1) };
		if (func_23(Local_55))
		{
			fLocal_59 = unk_0x2A488C176D52CCA5(Var0, Local_47);
			fLocal_60 = unk_0x2A488C176D52CCA5(Var0, Local_51);
			if (fLocal_59 < fLocal_60)
			{
				Local_55 = { Local_47 };
				fLocal_58 = fLocal_50;
			}
			else
			{
				Local_55 = { Local_51 };
				fLocal_58 = fLocal_54;
			}
			if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_55 = { Local_51 };
					fLocal_58 = fLocal_54;
				}
			}
		}
	}
}

void func_25(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(uParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(uParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(uParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(uParam2, 1);
			}
		}
	}
}

void func_26()
{
	unk_0xA878656BC39BBC51("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xA878656BC39BBC51("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xA878656BC39BBC51("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0xFF467904A8A12BBE(joaat("prop_phone_ing"));
	if (unk_0xFD68187442384158(uLocal_36))
	{
		if (unk_0x19F2D2C58150C825(uLocal_36))
		{
			unk_0x8019BB3BA236A900(&uLocal_36);
		}
		else
		{
			unk_0xCA4DD92F1F2931F3(&uLocal_36);
		}
	}
	unk_0x883793591E631A3B();
}

