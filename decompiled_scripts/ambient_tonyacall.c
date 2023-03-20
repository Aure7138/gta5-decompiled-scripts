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
	if (unk_0xC11469DCA6FC3BB5(18))
	{
		func_27();
	}
	if (unk_0x8E34C953364A76DD(joaat("ambient_tonyacall")) > 1)
	{
		unk_0x5E8B6D17FF91CD59();
	}
	while (true)
	{
		unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D());
		if (func_26(0, 14))
		{
			func_27();
		}
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			Local_45 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
		}
		if (unk_0xB7A628320EFF8E47(Local_45, Local_42) > fLocal_41)
		{
			func_27();
		}
		switch (iLocal_36)
		{
			case 0:
				if (func_22())
				{
					if (func_5(&uLocal_62, "TOWAUD", "TONYA_HANG", 8, 0, 0, 0))
					{
						iLocal_36 = 1;
					}
				}
				break;
			
			case 1:
				unk_0xA862A2AD321F94B4("amb@world_human_stand_mobile@female@standing@call@enter");
				unk_0xA862A2AD321F94B4("amb@world_human_stand_mobile@female@standing@call@base");
				unk_0xA862A2AD321F94B4("amb@world_human_stand_mobile@female@standing@call@exit");
				unk_0xA862A2AD321F94B4("amb@world_human_smoking@female@enter");
				unk_0xA862A2AD321F94B4("amb@world_human_smoking@female@idle_a");
				unk_0xFA28FE3A6246FC30(joaat("prop_phone_ing"));
				if (((((unk_0x1283B8B89DD5D1B6(joaat("prop_phone_ing")) && unk_0x27FF6FE8009B40CA("amb@world_human_stand_mobile@female@standing@call@enter")) && unk_0x27FF6FE8009B40CA("amb@world_human_stand_mobile@female@standing@call@base")) && unk_0x27FF6FE8009B40CA("amb@world_human_stand_mobile@female@standing@call@exit")) && unk_0x27FF6FE8009B40CA("amb@world_human_smoking@female@enter")) && unk_0x27FF6FE8009B40CA("amb@world_human_smoking@female@idle_a"))
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
				func_27();
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	int iVar8;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	}
	if (!unk_0x7D5B1F88E7504BBA(uLocal_37))
	{
		Var3 = { unk_0xA86D5F069399F44D(uLocal_37, 1) };
	}
	else
	{
		Var3 = { 408.5002f, -1624.583f, 29.2928f };
	}
	if ((unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f || unk_0x7D5B1F88E7504BBA(uLocal_37)) || func_4())
	{
		if (unk_0xB7A628320EFF8E47(Var0, Var3) > 10000f)
		{
		}
		if (unk_0x7D5B1F88E7504BBA(uLocal_37))
		{
		}
		if (func_4())
		{
		}
		return 1;
	}
	switch (iLocal_39)
	{
		case 0:
			if (unk_0xD42BD6EB2E0F1677(uLocal_37) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
			{
				if (unk_0x5E58342602E94718(uLocal_37, Local_56, 1f, 1f, 1f, 0, 1, 0))
				{
					unk_0x5EC7E18324A7D03D(&uVar6);
					unk_0xF4BF3E3D7FE56705(&uVar6);
					unk_0xD54B51DB3BD1FB16(0, fLocal_59, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_mobile@female@standing@call@base", "base", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0xFF7E39890B2840DD(uVar6);
					unk_0xD59C10966EB589EA(uLocal_37, uVar6);
					unk_0x5EC7E18324A7D03D(&uVar6);
					iLocal_39 = 1;
				}
			}
			break;
		
		case 1:
			if (unk_0xD42BD6EB2E0F1677(uLocal_37) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
			{
				if (unk_0x25E686EB2B4BE2B7(uLocal_37) == 1)
				{
					if (!unk_0xD42BD6EB2E0F1677(uLocal_38))
					{
						if (unk_0xDEE49D5CA6C49148(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter", 3))
						{
							fVar7 = unk_0x6B0B5671C53485D8(uLocal_37, "amb@world_human_stand_mobile@female@standing@call@enter", "enter");
							if (fVar7 >= 0.157f)
							{
								uLocal_38 = unk_0x1A2D7464B1CAA1C8(joaat("prop_phone_ing"), 1f, 1f, 1f, 1, 1, 0);
								unk_0x1B21CF9397F27FEE(uLocal_38, uLocal_37, unk_0xD1E5B4D09626571A(uLocal_37, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							}
						}
					}
				}
				else if (unk_0x25E686EB2B4BE2B7(uLocal_37) == 2)
				{
					iVar8 = (unk_0x9C1C462D7B1DD1F9(0, 65535) % 2);
					if (iVar8 == 0)
					{
						if (func_5(&uLocal_62, "TOWAUD", "TONYA_CALL1", 8, 0, 0, 0))
						{
							iLocal_39 = 2;
						}
					}
					else if (func_5(&uLocal_62, "TOWAUD", "TONYA_CALL2", 8, 0, 0, 0))
					{
						iLocal_39 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x7D5B1F88E7504BBA(uLocal_37))
			{
				if (!func_3())
				{
					unk_0x5EC7E18324A7D03D(&uVar6);
					unk_0xF4BF3E3D7FE56705(&uVar6);
					unk_0x8DBC05C86F873CC9(0, "amb@world_human_stand_mobile@female@standing@call@exit", "exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					unk_0x42E581F1274EFDB7(0, "WORLD_HUMAN_SMOKING", -1, 1);
					unk_0xFF7E39890B2840DD(uVar6);
					unk_0xD59C10966EB589EA(uLocal_37, uVar6);
					unk_0x5EC7E18324A7D03D(&uVar6);
					iLocal_39 = 3;
				}
			}
			break;
		
		case 3:
			func_2();
			if (unk_0xB7A628320EFF8E47(Var0, Var3) < 25f)
			{
				if (unk_0xBBCE897E81A3FFBC(0) != 4)
				{
					if (func_5(&uLocal_62, "TOWAUD", "TONYA_MESS", 8, 0, 0, 0))
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
	if (unk_0xD42BD6EB2E0F1677(uLocal_37) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
	{
		if (unk_0x25E686EB2B4BE2B7(uLocal_37) == 1)
		{
			if (unk_0xD42BD6EB2E0F1677(uLocal_38))
			{
				unk_0x931914268722C263(&uLocal_38);
				unk_0xD4648EA39998A07B(uLocal_37, unk_0x096275889B8E0EE0(), -1, 0, 2);
			}
		}
	}
	if (unk_0xD42BD6EB2E0F1677(uLocal_37) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
	{
		if (unk_0xD42BD6EB2E0F1677(uLocal_38))
		{
			if (unk_0x04932A97CB319DE0(uLocal_37, 993674639) == 1)
			{
				unk_0x931914268722C263(&uLocal_38);
			}
		}
	}
}

int func_3()
{
	if (Global_15692 != 0 || unk_0x200E87988220C592())
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
	{
		if (unk_0x9A2304A64C3C8423(unk_0x096275889B8E0EE0(), uLocal_37) || unk_0x69BBBA1223D4C644(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xD42BD6EB2E0F1677(uLocal_38))
			{
				unk_0x64CDE9D6BF8ECAD3(uLocal_38, 1, 1);
			}
			unk_0x89EEEEF0CEB4D045(0);
			if (unk_0x04932A97CB319DE0(uLocal_37, 1805844857) != 1)
			{
				unk_0x2AD4789CBFD829EC(uLocal_37, 1);
				unk_0x06C6AD4F38E8412D(uLocal_37, unk_0x096275889B8E0EE0(), 1000f, -1, 0, 0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x89EEEEF0CEB4D045(0);
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
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x200E87988220C592())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_18();
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
			unk_0x7D1D4A3602B6AD4E(&Global_2263, 20);
			unk_0x7D1D4A3602B6AD4E(&Global_2264, 17);
			unk_0x7D1D4A3602B6AD4E(&Global_2265, 0);
			if (bParam2)
			{
				func_11();
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
			if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
			{
				if (unk_0x4811DE9A3F16F275(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0x5040BD184F70BF0A(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x14BDA64F4D0D5E1D(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0xF66C5FD7C3EDEE62(unk_0x096275889B8E0EE0()))
				{
					return 0;
				}
				if (unk_0x391393371909C23E(unk_0x096275889B8E0EE0(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (unk_0xDDE5C125AC446723(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0xB8A70C22FD48197A(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
					if (unk_0x54A6BAC0E0415FCB(unk_0x096275889B8E0EE0()))
					{
						return 0;
					}
					if (unk_0x31FD854785361710(unk_0x217E9DC48139933D()))
					{
						return 0;
					}
				}
			}
			if (func_9())
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
				if (unk_0x4ED6CFDFE8D4131A(Global_2263, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_7();
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
		func_20();
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x89EEEEF0CEB4D045(0);
	Global_15692 = 1;
}

void func_8()
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
	unk_0x7D1D4A3602B6AD4E(&Global_2264, 16);
}

int func_9()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		unk_0xB60CECFCFC33C802(unk_0x096275889B8E0EE0(), &iVar1, 1);
		if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x698F456FB909E077() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xBFFB35986CAAE58C(unk_0x217E9DC48139933D()))
	{
		if (unk_0xCDBD4FAF88DEEEAE(unk_0x096275889B8E0EE0(), 78, 1))
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

void func_11()
{
	if (func_17(14))
	{
		if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
		{
			if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()) == Global_97353.f_29774[2 /*29*/])
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
		Global_14393 = func_12();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_12()
{
	func_13();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xD42BD6EB2E0F1677(unk_0x096275889B8E0EE0()))
	{
		if (func_16(Global_97353.f_1729.f_539.f_3213) != unk_0xDA76A9F39210D365(unk_0x096275889B8E0EE0()))
		{
			iVar0 = func_15(unk_0x096275889B8E0EE0());
			if (func_14(iVar0) && (!func_17(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_14(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD42BD6EB2E0F1677(uParam0))
	{
		iVar1 = unk_0xDA76A9F39210D365(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_18()
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

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return unk_0x4ED6CFDFE8D4131A(Global_1327593.f_949, iParam0);
}

void func_20()
{
	unk_0x1DDACDCB7482E6F1();
	Global_16703 = 0;
	if ((unk_0x3AB7C52414B223F6() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0x89EEEEF0CEB4D045(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x200E87988220C592())
	{
		unk_0x89EEEEF0CEB4D045(1);
		Global_15692 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_22()
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
	{
		Var0 = { unk_0xA86D5F069399F44D(unk_0x096275889B8E0EE0(), 1) };
	}
	unk_0x376BFBD88CF0F34D(Var0, fLocal_40, 1, 1, &uVar3, 0, 1, -1);
	if (unk_0xD42BD6EB2E0F1677(uVar3) && !unk_0x7D5B1F88E7504BBA(uVar3))
	{
		iVar4 = unk_0xDA76A9F39210D365(uVar3);
		if (iVar4 == joaat("ig_tonya"))
		{
			uLocal_37 = uVar3;
			unk_0xDC19C288082E586E(uLocal_37, 1, 0);
			unk_0x92DA957FFDF2DA79(uLocal_37, 0);
			unk_0x5E95290AF8605EA1(uLocal_37, 0);
			unk_0x88C774425FE9380C(uLocal_37, "TONYA");
			unk_0x6ECBACF91786FB7A(uLocal_37, joaat("player"));
			func_25(&uLocal_62, 3, uLocal_37, "TONYA", 1, 1);
			func_24();
			if (!func_23(Local_56))
			{
				if (unk_0x04932A97CB319DE0(uLocal_37, 713668775) != 1)
				{
					unk_0x14A4402A811D03C0(uLocal_37, Local_56, 1f, -1, 0.25f, 0, fLocal_59);
					unk_0x2AD4789CBFD829EC(uLocal_37, 1);
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
	
	if (unk_0xD42BD6EB2E0F1677(uLocal_37) && !unk_0x7D5B1F88E7504BBA(uLocal_37))
	{
		Var0 = { unk_0xA86D5F069399F44D(uLocal_37, 1) };
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
			if (!unk_0x7D5B1F88E7504BBA(unk_0x096275889B8E0EE0()))
			{
				if (unk_0xD3151E53134595E5(unk_0x096275889B8E0EE0(), 407.4285f, -1626.572f, 27.29278f, 412.8245f, -1620.167f, 33.29278f, 6f, 0, 1, 0))
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
	if (!Global_68245)
	{
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4FE2FB654BF367EB(uParam2, 0);
			}
			else
			{
				unk_0x4FE2FB654BF367EB(uParam2, 1);
			}
		}
		if (!unk_0x6CFF81397164A1D3(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5461EC345E4967B2(uParam2, 0);
			}
			else
			{
				unk_0x5461EC345E4967B2(uParam2, 1);
			}
		}
	}
}

int func_26(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = unk_0x4ED6CFDFE8D4131A(Global_97353.f_7341.f_99.f_217[iParam0], iParam1);
	return uVar0;
}

void func_27()
{
	unk_0x4763145053A33D46("amb@world_human_stand_mobile@female@standing@call@enter");
	unk_0x4763145053A33D46("amb@world_human_stand_mobile@female@standing@call@base");
	unk_0x4763145053A33D46("amb@world_human_stand_mobile@female@standing@call@exit");
	unk_0x4763145053A33D46("amb@world_human_smoking@female@enter");
	unk_0x4763145053A33D46("amb@world_human_smoking@female@idle_a");
	unk_0x4AD96EF928BD4F9A(joaat("prop_phone_ing"));
	if (unk_0xD42BD6EB2E0F1677(uLocal_37))
	{
		if (unk_0x140188E884645624(uLocal_37))
		{
			unk_0xCC0EF140F99365C5(&uLocal_37);
		}
		else
		{
			unk_0xEB7C3FF98F454165(&uLocal_37);
		}
	}
	unk_0x5E8B6D17FF91CD59();
}

