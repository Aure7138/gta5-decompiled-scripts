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
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	struct<3> Local_42 = { 0, 0, 0 } ;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	float fLocal_61 = 0f;
	var uLocal_62 = 16;
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
	var uLocal_226 = 0;
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
	iLocal_34 = 3;
	fLocal_40 = 50f;
	fLocal_41 = 2500f;
	Local_42 = { 409.1539f, -1626.677f, 28.2928f };
	Local_48 = { 409.2747f, -1623.022f, 28.29278f };
	fLocal_51 = 202.6928f;
	Local_52 = { 415.6071f, -1647.604f, 28.2928f };
	fLocal_55 = 85.7173f;
	if (unk_0x8D841F1DD3FA555F(18))
	{
		func_26();
	}
	if (unk_0x968BF1C2C695B61A(joaat("ambient_tonyacall5")) > 1)
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63());
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			Local_45 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_45, Local_42) > fLocal_41)
		{
			func_26();
		}
		switch (iLocal_36)
		{
			case 0:
				if (func_22())
				{
					iLocal_36 = 1;
				}
				break;
			
			case 1:
				unk_0x295DC04FC13E025B("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0x295DC04FC13E025B("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0x295DC04FC13E025B("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0x32A12757CBF48A33(joaat("prop_phone_ing"));
				if (((unk_0x33ACB874CECA2D4B(joaat("prop_phone_ing")) && unk_0x8E8B546E1A81D27F("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0x8E8B546E1A81D27F("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0x8E8B546E1A81D27F("amb@world_human_stand_mobile@female@standing@call@exit"))
				{
					iLocal_36 = 2;
				}
				break;
			
			case 2:
				if (func_1())
				{
					iLocal_36 = 3;
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
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (!unk_0x930F8FBB8E9537CC(uLocal_37))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(uLocal_37, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0x930F8FBB8E9537CC(uLocal_37)) || func_21())
	{
		return 1;
	}
	switch (iLocal_39)
	{
		case 0:
			if (unk_0x86CCCD2FAE9D5E65(uLocal_37) && !unk_0x930F8FBB8E9537CC(uLocal_37))
			{
				if (unk_0x515B65C19A5CA9B1(uLocal_37, Local_56, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0xA3561415EB3DA3A3(&uVar7);
					unk_0xEAD984C2869B8B7C(&uVar7);
					unk_0x5D5CFD0EDDA0BC90(0, fLocal_59, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x56D9ED1541046AF6(uVar7);
					unk_0xC65002CAA1212AF9(uLocal_37, uVar7);
					unk_0xA3561415EB3DA3A3(&uVar7);
					iLocal_39 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0x86CCCD2FAE9D5E65(uLocal_37) && !unk_0x930F8FBB8E9537CC(uLocal_37))
			{
				if (unk_0xAE5083278B0C9CDD(uLocal_37) == 1)
				{
					if (!unk_0x86CCCD2FAE9D5E65(uLocal_38))
					{
						if (unk_0x0BAE7BE122182FA8(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar8 = unk_0xC00796CF40447CA8(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar8 >= 0.157f)
							{
								uLocal_38 = unk_0xF364195A57BB7AE3(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x75F9EE7629363312(uLocal_38, uLocal_37, unk_0xDED1B3B1138F742B(uLocal_37, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0xAE5083278B0C9CDD(uLocal_37) == 2)
				{
					iVar6 = (unk_0x2E0A9E3291F398E3(0, 65535) % 2);
					if (iVar6 == 0)
					{
						if (func_4(&uLocal_62, "TOWAUD", "TONYA_CALL5", 8, 0, 0, 0))
						{
							iLocal_39 = 2;
						}
					}
					else if (func_4(&uLocal_62, "TOWAUD", "TONYA_CALL6", 8, 0, 0, 0))
					{
						iLocal_39 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x930F8FBB8E9537CC(uLocal_37))
			{
				if (!func_3())
				{
					unk_0xA3561415EB3DA3A3(&uVar7);
					unk_0xEAD984C2869B8B7C(&uVar7);
					unk_0x31C1393E4ACFD794(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0x56D9ED1541046AF6(uVar7);
					unk_0xC65002CAA1212AF9(uLocal_37, uVar7);
					unk_0xA3561415EB3DA3A3(&uVar7);
					iLocal_39 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0x7FCE6803A3D23268(0) != 4)
				{
					if (func_4(&uLocal_62, "TOWAUD", "TOW_MESS3", 8, 0, 0, 0))
					{
						unk_0xC1B1E9A034A63A62(0);
						iLocal_39 = 4;
					}
				}
			}
			break;
		
		case 4:
			func_2();
			if (unk_0x83666F9FB8FEBD4B() > 10000)
			{
				iLocal_39 = 3;
			}
			break;
	}
	return 0;
}

void func_2()
{
	if (unk_0x86CCCD2FAE9D5E65(uLocal_37) && !unk_0x930F8FBB8E9537CC(uLocal_37))
	{
		if (unk_0xAE5083278B0C9CDD(uLocal_37) == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(uLocal_38))
			{
				unk_0xAB6AFD52AD641D70(&uLocal_38);
				unk_0xAF625598EDA64AD3(uLocal_37, unk_0x81873881071CD9FE(), -1, 0, 2);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_37) && !unk_0x930F8FBB8E9537CC(uLocal_37))
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_38))
		{
			if (unk_0xFA1212DE7C455679(uLocal_37, 993674639) == 1)
			{
				unk_0xAB6AFD52AD641D70(&uLocal_38);
			}
		}
	}
}

int func_3()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_17();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_6();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_7()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_8()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_11();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_11()
{
	func_12();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_15(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_14(unk_0x81873881071CD9FE());
			if (func_13(iVar0) && (!func_16(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_13(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_19()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

int func_21()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x930F8FBB8E9537CC(uLocal_37))
	{
		if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), uLocal_37) || unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			if (unk_0x86CCCD2FAE9D5E65(uLocal_38))
			{
				unk_0xD88DD5B581458979(uLocal_38, 1, 1);
			}
			unk_0x9E95048D8C96C1EA(0);
			if (unk_0xFA1212DE7C455679(uLocal_37, 1805844857) != 1)
			{
				unk_0x6CB332CB31E9FA96(uLocal_37, 1);
				unk_0x754376E2234CBB4A(uLocal_37, unk_0x81873881071CD9FE(), 1000f, -1, 0, 0);
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
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	unk_0x9BAEA166728E6B4A(Var0, fLocal_40, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0x86CCCD2FAE9D5E65(uVar3) && !unk_0x930F8FBB8E9537CC(uVar3))
	{
		iVar4 = unk_0x14B7103DBD149FFE(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_37 = uVar3;
			unk_0xD768713E73165208(uLocal_37, 1, 0);
			unk_0x0CD6B65135C8C3FE(uLocal_37, 0);
			unk_0x33B1E568CEF14B0D(uLocal_37, 0);
			unk_0x96B56AFFC92EEC6D(uLocal_37, "TONYA");
			unk_0x506A601663C5417C(uLocal_37, joaat("player"));
			func_25(&uLocal_62, 3, uLocal_37, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_56))
			{
				if (unk_0xFA1212DE7C455679(uLocal_37, 713668775) != 1)
				{
					unk_0xD91194CE3D1E1D77(uLocal_37, Local_56, 1f, -1, 0.25f, 0, fLocal_59);
					unk_0x6CB332CB31E9FA96(uLocal_37, 1);
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
	
	if (unk_0x86CCCD2FAE9D5E65(uLocal_37) && !unk_0x930F8FBB8E9537CC(uLocal_37))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(uLocal_37, 1) };
		if (func_23(Local_56))
		{
			fLocal_60 = unk_0x2A488C176D52CCA5(Var0, Local_48);
			fLocal_61 = unk_0x2A488C176D52CCA5(Var0, Local_52);
			if (fLocal_60 < fLocal_61)
			{
				Local_56 = { Local_48 };
				fLocal_59 = fLocal_51;
			}
			else
			{
				Local_56 = { Local_52 };
				fLocal_59 = fLocal_55;
			}
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
				{
					Local_56 = { Local_52 };
					fLocal_59 = fLocal_55;
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(uParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(uParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(uParam2, 1);
			}
		}
	}
}

void func_26()
{
	unk_0xD8323B49BAE93D80("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0xD8323B49BAE93D80("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0xD8323B49BAE93D80("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x887F4488DA99FD21(joaat("prop_phone_ing"));
	if (unk_0x86CCCD2FAE9D5E65(uLocal_37))
	{
		if (unk_0x895C275673BCEAB0(uLocal_37))
		{
			unk_0xF210D34D7F7152ED(&uLocal_37);
		}
		else
		{
			unk_0x71A8BCA218722FA1(&uLocal_37);
		}
	}
	unk_0xC23A229F78DAD92A();
}

