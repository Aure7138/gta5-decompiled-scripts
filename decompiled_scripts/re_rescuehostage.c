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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	float fLocal_51 = 0f;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	bool bLocal_100 = 0;
	struct<10> Local_101[16];
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	int iLocal_266 = 0;
	char* sLocal_267 = NULL;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_63 = 8000;
	iLocal_68 = -1;
	bLocal_87 = true;
	sLocal_92 = "NULL";
	fLocal_93 = -120f;
	fLocal_94 = 120f;
	fLocal_95 = 40f;
	fLocal_96 = 90f;
	bLocal_98 = true;
	sLocal_267 = "RANDOM@RESCUE_HOSTAGE";
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_51 = ScriptParam_0.f_17[0];
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_157();
	}
	if (Global_33226[0] == 1)
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	if (func_115(Local_48, -1, 0, 0, 0))
	{
		func_112(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	func_111();
	func_110();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_109();
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
		}
		if (unk_0x42F1FE4C7EC5F51E())
		{
			switch (iLocal_47)
			{
				case 0:
					if (func_106())
					{
						iLocal_99 = unk_0x53C562FD2B9E3AB0();
						iLocal_47 = 1;
					}
					else if (func_105())
					{
						func_157();
					}
					break;
				
				case 1:
					if (iLocal_64 == 0)
					{
						iLocal_64 = unk_0xB71774863B890B76(99, -104.982f, 6408.737f, 30.4905f, 180000f);
					}
					func_104();
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
					{
						func_103();
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
					{
						func_99();
						func_98();
					}
					else
					{
						func_157();
					}
					if (bLocal_76)
					{
						func_96();
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_52))
					{
						if (!func_95())
						{
							if (func_83())
							{
								func_157();
							}
							func_68();
						}
						else if (!bLocal_76)
						{
							func_51();
						}
					}
					else
					{
						if (Local_101[1 /*10*/].f_7)
						{
							if (unk_0xA6DECE14FC9A8C51(uLocal_57))
							{
								unk_0xE30CF11C0EE14316(&uLocal_57);
							}
							if (unk_0xA6DECE14FC9A8C51(uLocal_58))
							{
								unk_0xE30CF11C0EE14316(&uLocal_58);
							}
							func_50(&Local_101, 1);
							func_48();
						}
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
						{
							if (bLocal_76)
							{
								if (unk_0xD56F740235B1E8F0(uLocal_67))
								{
									if (unk_0x463C4747B41E35A3(iLocal_67) == 1f)
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
										{
											unk_0x5718F894FDA63A9E(iLocal_53, 1);
											unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
										}
									}
								}
							}
							else
							{
								if (func_47())
								{
									iLocal_47 = 3;
								}
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
								{
								}
							}
						}
					}
					break;
				
				case 2:
					uLocal_56 = unk_0xB306EEF0A280A8F5(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 35f, 0, 101383);
					if (unk_0xB8DE76287EDC4957(uLocal_56, 0))
					{
						if (!bLocal_100)
						{
							unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 2, 0);
							unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
						}
						func_157();
					}
					if (!iLocal_86)
					{
						if (unk_0x23AE8F1DF396E41E(7, Local_48, 2, 0f, &uLocal_88, 0, 0))
						{
							iLocal_86 = 1;
						}
					}
					break;
				
				case 3:
					if (iLocal_84)
					{
						if (unk_0x83666F9FB8FEBD4B() > 5000)
						{
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
							{
								unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
								func_22();
							}
							func_157();
						}
					}
					else
					{
						if (func_47())
						{
							if (!bLocal_77)
							{
								if (bLocal_87)
								{
									if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0))
									{
										bLocal_77 = true;
									}
								}
								else if (func_5(&Local_101, "RERHOAU", "RERHO_NOGUN", 4, iLocal_266, 0, 0))
								{
									bLocal_77 = true;
								}
							}
						}
						func_3();
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
						{
							if (unk_0x53C562FD2B9E3AB0() > iLocal_66 + 100)
							{
								func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
								iLocal_66 = unk_0x53C562FD2B9E3AB0();
							}
						}
						if (bLocal_77)
						{
							if (!iLocal_85)
							{
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
								{
									if (func_5(&Local_101, "RERHOAU", "RERHO_CONS", 4, iLocal_266, 0, 0))
									{
										iLocal_85 = 1;
									}
								}
							}
						}
						uLocal_56 = unk_0xB306EEF0A280A8F5(Local_48, 5f, joaat("ambulance"), 0);
						if (unk_0xB8DE76287EDC4957(uLocal_56, 0))
						{
							unk_0xC1B1E9A034A63A62(0);
							iLocal_84 = 1;
						}
						iLocal_55 = unk_0xF4DDB3917F071FA0(Local_48, 1.5f, 1.5f, 1.5f, -1);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_55))
						{
							unk_0xC1B1E9A034A63A62(5000);
							iLocal_84 = 1;
						}
						if (!iLocal_86 && iLocal_85)
						{
							if (unk_0x23AE8F1DF396E41E(5, Local_48, 2, 0f, &uLocal_89, 0, 0))
							{
								iLocal_86 = 1;
							}
						}
						if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_48) > 5625f && !unk_0x9E06F0EE20F58CED(Local_48, 10f))
						{
							func_22();
						}
					}
					break;
			}
		}
		else if (iLocal_47 == 3)
		{
			func_22();
		}
		else
		{
			func_157();
		}
	}
}

void func_1(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xE44A9E63DC81244A(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

int func_2(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_3()
{
	if (func_4())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
		{
			unk_0x771A86309E0CA47B(iLocal_53, 0);
			unk_0xFC5999E8B820470E(iLocal_53, Local_48, 50f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
			unk_0x486F346ADFE56674(&iLocal_53);
			func_48();
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
		{
			unk_0x771A86309E0CA47B(iLocal_54, 0);
			unk_0xFC5999E8B820470E(iLocal_54, Local_48, 50f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
			unk_0x486F346ADFE56674(&iLocal_54);
			func_48();
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
	{
		if (unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x9F887157983E8EFC(iLocal_53))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
			}
		}
		else if (unk_0x9F887157983E8EFC(iLocal_53))
		{
			unk_0x771A86309E0CA47B(iLocal_53, 0);
			unk_0xFC5999E8B820470E(iLocal_53, Local_48, 50f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
			unk_0x486F346ADFE56674(&iLocal_53);
			func_48();
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
			{
				unk_0x771A86309E0CA47B(iLocal_54, 0);
				unk_0xFC5999E8B820470E(iLocal_54, Local_48, 50f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
				unk_0x486F346ADFE56674(&iLocal_54);
				func_48();
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
	{
		unk_0x771A86309E0CA47B(iLocal_54, 0);
		unk_0xFC5999E8B820470E(iLocal_54, Local_48, 50f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
		unk_0x486F346ADFE56674(&iLocal_54);
		func_48();
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
	{
		if (unk_0xEBE499597C718EB8(iLocal_54, unk_0xFC1458A37D98B502(), 1))
		{
			if (unk_0x9F887157983E8EFC(iLocal_54))
			{
				unk_0xE01CE1EBCD7EE551(iLocal_54, 0, 0);
			}
		}
		else if (unk_0x9F887157983E8EFC(iLocal_54))
		{
			unk_0x771A86309E0CA47B(iLocal_54, 0);
			unk_0xFC5999E8B820470E(iLocal_54, Local_48, 50f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
			unk_0x486F346ADFE56674(&iLocal_54);
			func_48();
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
			{
				unk_0x771A86309E0CA47B(iLocal_53, 0);
				unk_0xFC5999E8B820470E(iLocal_53, Local_48, 50f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
				unk_0x486F346ADFE56674(&iLocal_53);
				func_48();
			}
		}
	}
	else if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
	{
		unk_0x771A86309E0CA47B(iLocal_53, 0);
		unk_0xFC5999E8B820470E(iLocal_53, Local_48, 50f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
		unk_0x486F346ADFE56674(&iLocal_53);
		func_48();
	}
}

bool func_4()
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 15f, 15f, 10f };
	Var4 = { -15f, -15f, -10f };
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
	{
		if (unk_0x5679106BC7ED79EE(unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, 0f), 15f, 1))
		{
			bVar0 = true;
		}
		Var1 = { Var1 + unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, 0f) };
		Var4 = { Var4 + unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, 0f) };
		if ((unk_0xAB0762B9CCAA2B6F(Var4, Var1, joaat("weapon_smokegrenade"), 1) || unk_0xAB0762B9CCAA2B6F(Var4, Var1, joaat("weapon_grenade"), 1)) || unk_0xAB0762B9CCAA2B6F(Var4, Var1, joaat("weapon_stickybomb"), 1))
		{
			bLocal_98 = true;
			bVar0 = true;
		}
		if (unk_0x34D9850FEBB1F859(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f, 23f) || unk_0x4E69510C44147A5C(-1, unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, 0f), 20f))
		{
			bLocal_98 = true;
			bVar0 = true;
		}
		if (unk_0x71E1544E01ABC644(unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, 0f), 6f))
		{
			bVar0 = true;
			bLocal_98 = true;
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
	{
		if (unk_0xEBE499597C718EB8(iLocal_54, unk_0xFC1458A37D98B502(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
	}
	return bVar0;
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_18();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_11();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_10())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_8();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_7();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_8()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_9()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_12();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

int func_12()
{
	func_13();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_16(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_15(unk_0xFC1458A37D98B502());
			if (func_14(iVar0) && (!func_17(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_14(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(uParam0);
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
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_20()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_22()
{
	unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
	func_46();
	func_26(-1, 0);
	func_23();
	func_157();
}

void func_23()
{
	func_24();
}

int func_24()
{
	if (func_25(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_25(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_26(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_43(iParam0))
	{
		func_42(iParam0, iParam1);
		if (!func_41(51))
		{
			func_37("RE_REWARD", 1, 0, 4000, 10000, func_40(), 0, 138, 0);
			func_36(51);
		}
		if (func_35(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_34(iParam0, iParam1) != 322)
		{
			func_28(func_34(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_27(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_27(7);
			}
			else
			{
				func_27(1);
			}
		}
	}
}

void func_27(int iParam0)
{
	Global_104541 = iParam0;
}

void func_28(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_32((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_29();
	}
}

void func_29()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					unk_0x02D73F783D6C1AFA(joaat("num_rndevents_completed"), Global_104278, 0);
					unk_0x872F1C1F8587CCC7(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	unk_0xBFFF62F75445099D(joaat("num_missions_completed"), Global_104291, 1);
	unk_0xBFFF62F75445099D(joaat("num_missions_available"), Global_104274, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_completed"), Global_104292, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_available"), Global_104275, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_completed"), Global_104293, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_available"), Global_104276, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_completed"), Global_104294, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_available"), Global_104277, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_available"), Global_104281, 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	unk_0x00E69ADBDAF11A90(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	unk_0xBFFF62F75445099D(joaat("percent_story_missions"), Global_104298, 1);
	unk_0xBFFF62F75445099D(joaat("percent_ambient_missions"), Global_104299, 1);
	unk_0xBFFF62F75445099D(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104555.f_10164.f_3853))
	{
		func_31(13, unk_0xF34EE736CF047844(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_30() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_24();
				}
			}
		}
	}
}

int func_30()
{
	return Global_25233;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_33();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_33()
{
	return Global_1312736;
}

int func_34(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_37(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_38(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_38(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_39();
	}
}

void func_39()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_40()
{
	func_13();
	switch (Global_104555.f_2353.f_539.f_4301)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_44()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar16 = func_45(Var0);
	return uVar16;
}

int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8B948C59217A295D(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_46()
{
	return 1;
}

int func_47()
{
	if (!iLocal_81)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
		{
			if (iLocal_68 == -1)
			{
				unk_0x5718F894FDA63A9E(iLocal_53, 0);
				unk_0x126122194DCF42B6(5, 0.5f);
				unk_0xC8EB572313107216(5, 1f);
				unk_0x43FB0917D5669D01(iLocal_53, 1);
				unk_0xD1980BC8CFFBF0B9(iLocal_53, 1);
				unk_0x12C9D41D52A560D6(iLocal_53, sLocal_267, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_68 = unk_0x8383F9C605E523B7(Local_70, Local_73, 2);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
				{
					unk_0xCE93FCB8A8D8DF0B(iLocal_54, uLocal_59);
					if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
					{
						unk_0x8E628F774C748D93(iLocal_54, iLocal_68, sLocal_267, "bystander_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
					}
					else
					{
						unk_0x771A86309E0CA47B(iLocal_54, 0);
					}
				}
				unk_0x8E628F774C748D93(iLocal_53, iLocal_68, sLocal_267, "girl_villian_shot", 1000f, -2f, 5, 0, 1148846080, 0);
			}
			else if (unk_0xD56F740235B1E8F0(iLocal_68))
			{
				if (unk_0x463C4747B41E35A3(iLocal_68) > 0.1f)
				{
					func_3();
				}
				if (!iLocal_78)
				{
					if (bLocal_87)
					{
						if (unk_0x463C4747B41E35A3(iLocal_68) > 0.5f)
						{
							if (func_5(&Local_101, "RERHOAU", "RERHO_SAINT", 4, iLocal_266, 0, 0))
							{
								iLocal_78 = 1;
							}
						}
					}
					else if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0))
					{
						iLocal_78 = 1;
					}
				}
				if (unk_0x463C4747B41E35A3(iLocal_68) == 1f)
				{
					iLocal_68 = unk_0x8383F9C605E523B7(Local_70, Local_73, 2);
					func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					unk_0xD0E12C501EE26329(iLocal_68, 1);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
					{
						if (bLocal_87)
						{
							unk_0x8E628F774C748D93(iLocal_54, iLocal_68, sLocal_267, "bystander_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
						}
						else
						{
							unk_0x6931076730A4AC5D(&uLocal_79);
							unk_0x60C06BFD037BB7CF(0, iLocal_53, -1, 1024, 2);
							unk_0x4C7AF3B2BE8C3193(0, iLocal_53, 20000, 3f, 1f, 1073741824, 0);
							unk_0x270054D97CD161A8(0, -1);
							unk_0x1B16DD5C115FE009(uLocal_79);
							unk_0xAB30B1CF01A198C1(iLocal_54, uLocal_79);
						}
						unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
						unk_0xCE93FCB8A8D8DF0B(iLocal_54, uLocal_61);
					}
					unk_0x8E628F774C748D93(iLocal_53, iLocal_68, sLocal_267, "girl_helping_girl_loop", 1000f, -2f, 5, 0, 1148846080, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
					unk_0xCE93FCB8A8D8DF0B(iLocal_53, uLocal_61);
					unk_0x5718F894FDA63A9E(iLocal_53, 1);
					unk_0x94BD6F0436473406(1f);
					iLocal_81 = 1;
				}
			}
		}
	}
	return iLocal_81;
}

void func_48()
{
	Global_14622 = 0;
	func_49();
}

void func_49()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
	}
}

void func_50(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_51()
{
	if (((((((((((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0) && unk_0x46D8E79A1B95ACE2(iLocal_52, unk_0xFC1458A37D98B502())) || (func_61(iLocal_52, &uLocal_62, &iLocal_63, 0, 0, 1077936128, 0) && unk_0x46D8E79A1B95ACE2(iLocal_52, unk_0xFC1458A37D98B502()))) || (func_60(1) && unk_0x46D8E79A1B95ACE2(iLocal_52, unk_0xFC1458A37D98B502()))) || func_58()) || func_57()) || func_4()) || func_56()) || unk_0x9F887157983E8EFC(iLocal_52)) || func_55()) || func_54()) || func_52(iLocal_52))
	{
		if (!unk_0xE72696884FB34FE1(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x299B8D0F9C239719(iLocal_52, joaat("weapon_stungun"), 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
				{
					if (!unk_0x9F887157983E8EFC(iLocal_52))
					{
						iLocal_67 = unk_0x8383F9C605E523B7(Local_70, Local_73, 2);
						unk_0xD0E12C501EE26329(iLocal_67, 0);
						unk_0x8E628F774C748D93(iLocal_53, iLocal_67, sLocal_267, "girl_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0x8E628F774C748D93(iLocal_52, iLocal_67, sLocal_267, "villian_girl_shot", 4f, -4f, 5, 0, 1148846080, 0);
						unk_0xE9B3D12A64CC7C1A(iLocal_53, 1);
						unk_0x5718F894FDA63A9E(iLocal_53, 0);
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
				{
					unk_0x5718F894FDA63A9E(iLocal_54, 1);
				}
				bLocal_76 = true;
			}
			else
			{
				unk_0xE01CE1EBCD7EE551(iLocal_52, 50, 0);
			}
		}
	}
	else if (unk_0x83666F9FB8FEBD4B() > 6000)
	{
		if ((unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_52) && unk_0x46D8E79A1B95ACE2(iLocal_52, unk_0xFC1458A37D98B502())) || (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_52) && unk_0x46D8E79A1B95ACE2(iLocal_52, unk_0xFC1458A37D98B502())))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_57))
			{
				unk_0x9C27373CC69ECF87(uLocal_57, 1);
			}
			if (!iLocal_80)
			{
				if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -91.30704f, 6391.854f, 30.6403f, -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0))
				{
					if (func_5(&Local_101, "RERHOAU", sLocal_91, 4, 0, 0, 0))
					{
						iLocal_63 = 24000;
					}
					unk_0xC1B1E9A034A63A62(0);
					iLocal_80 = 1;
				}
			}
		}
		else if (unk_0x74C475EB8E73D398(sLocal_92, "NULL"))
		{
			switch (unk_0x63A6486593EC7EC3(0, 10))
			{
				case 6:
				case 5:
				case 4:
				case 3:
				case 0:
				case 9:
				case 8:
				case 7:
				case 1:
					if (iLocal_97)
					{
						sLocal_92 = "RERHO_HELP";
						iLocal_97 = 0;
					}
					else
					{
						sLocal_92 = "RERHO_RANT";
						iLocal_97 = 1;
					}
					break;
				
				case 2:
					sLocal_92 = "RERHO_SCREAM";
					break;
			}
		}
		else if (func_5(&Local_101, "RERHOAU", sLocal_92, 4, iLocal_266, 0, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
		}
	}
	else
	{
		sLocal_92 = "NULL";
	}
}

int func_52(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	bVar1 = false;
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &uVar0, 1);
	if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), uVar0, joaat("component_at_ar_flsh")))
	{
		if (unk_0xDE6A1B21461DD457(unk_0xFC1458A37D98B502(), uVar0, joaat("component_at_ar_flsh")))
		{
			bVar1 = true;
		}
	}
	else if (unk_0xB1C7BCEE5648EB7D(unk_0xFC1458A37D98B502(), uVar0, joaat("component_at_pi_flsh")))
	{
		if (unk_0xDE6A1B21461DD457(unk_0xFC1458A37D98B502(), uVar0, joaat("component_at_pi_flsh")))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB3328BA8976B416C(iParam0, 1), func_53(unk_0x9EB17624F44A8DA4())) < 8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(uParam0), 0);
}

int func_54()
{
	if (func_95())
	{
		if (unk_0x53C562FD2B9E3AB0() > (iLocal_99 + 60000))
		{
			bLocal_100 = true;
			return 1;
		}
	}
	else if (unk_0x53C562FD2B9E3AB0() > (iLocal_99 + 120000))
	{
		bLocal_100 = true;
		return 1;
	}
	return 0;
}

int func_55()
{
	float fVar0;
	var uVar1[32];
	int iVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	
	fVar0 = 75f;
	iVar36 = unk_0xF4DDB3917F071FA0(unk_0xB3328BA8976B416C(iLocal_52, 0), fVar0, fVar0, fVar0, -1);
	if (!unk_0x3AB6A1A9084FB0A4(iVar36))
	{
		if (unk_0x82FF3DFBC3965CC0(iVar36) == joaat("s_f_y_cop_01") || unk_0x82FF3DFBC3965CC0(iVar36) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	uVar37 = unk_0xB306EEF0A280A8F5(unk_0xB3328BA8976B416C(iLocal_52, 0), fVar0, 0, 66561);
	if (unk_0xB8DE76287EDC4957(uVar37, 0))
	{
		return 1;
	}
	iVar35 = unk_0x3689C35A674B0772(iLocal_52, &uVar1);
	if (iVar35 > 0)
	{
		iVar34 = 0;
		while (iVar34 < iVar35)
		{
			if (unk_0xB8DE76287EDC4957(uVar1[iVar34], 0))
			{
				if (((unk_0x82FF3DFBC3965CC0(uVar1[iVar34]) == joaat("police") || unk_0x82FF3DFBC3965CC0(uVar1[iVar34]) == joaat("pranger")) || unk_0x82FF3DFBC3965CC0(uVar1[iVar34]) == joaat("sheriff")) || unk_0x82FF3DFBC3965CC0(uVar1[iVar34]) == joaat("sheriff2"))
				{
					return 1;
				}
			}
			iVar34++;
		}
	}
	return 0;
}

int func_56()
{
	if (unk_0x21B6FFFD04C9FF3A(iLocal_52, unk_0xFC1458A37D98B502(), 2f, 2f, 1.5f, 0, 1, 0))
	{
		if (unk_0x619798B7505A54CD(unk_0x9EB17624F44A8DA4(), iLocal_52))
		{
			return 1;
		}
	}
	return 0;
}

bool func_57()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)) == joaat("bulldozer"))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
			{
				if (unk_0x9A213A2345825783(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_54))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
			{
				if (unk_0x9A213A2345825783(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_53))
				{
					bVar0 = true;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_52))
			{
				if (unk_0x9A213A2345825783(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_58()
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	var uVar5;
	struct<2> Var8;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	
	bVar0 = false;
	bVar1 = false;
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), &uVar5, &Var8);
		fVar12 = Var8.f_1;
		if (unk_0xC9CE174229996043(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
		{
			if (unk_0xFCCAE5538E490D17(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), &uVar14))
			{
				unk_0x04FE252E98FAA4C3(unk_0x82FF3DFBC3965CC0(uVar14), &uVar5, &Var8);
				fVar12 = (fVar12 + Var8.f_1);
				fVar12 = (fVar12 + 3f);
			}
		}
		if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 15f)
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52, (fVar12 + 17f), (fVar12 + 17f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 10f)
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52, (fVar12 + 12f), (fVar12 + 12f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
		else if (unk_0x90D5DFB054818BA7(unk_0xFC1458A37D98B502()) > 5f)
		{
			if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_52, (fVar12 + 8f), (fVar12 + 8f), 6f, 0, 1, 0))
			{
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		Var2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) - Local_48 };
		fVar11 = unk_0xA67DD8488EBA5F6D(Var2.f_0, Var2.f_1);
		if (func_59(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
		Var2 = { Local_48 - unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		fVar11 = unk_0xA67DD8488EBA5F6D(Var2.f_0, Var2.f_1);
		if (func_59(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), fVar11, 15f))
		{
			bVar0 = true;
		}
	}
	uVar13 = unk_0xC733212BF9066BDF();
	if (unk_0x6ADD12BF4D6D2587(uVar13))
	{
		if (unk_0x0F3033474C49912D(iVar13, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f, 7.5f, 0, 1, 0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_59(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (unk_0xB8DE76287EDC4957(uParam0, 0))
	{
		fVar0 = unk_0xF0371FE6E2BF9599(uParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!unk_0x191BE1BC8F26F3C1(uParam0, 0) && !bParam4)
	{
		if (unk_0xEA8E0258C31BCDE7(uParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (!unk_0x191BE1BC8F26F3C1(uParam0, 0) && !bParam4)
		{
			Var3 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			Var6 = { unk_0xB3328BA8976B416C(uParam0, 1) };
			fVar9 = unk_0x2A488C176D52CCA5(Var3, Var6);
			if (!unk_0xC80D31E4B587871C(iParam3, 3))
			{
				if (func_67(iParam0, iParam6))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (unk_0x5679106BC7ED79EE(Var6, fParam5, 1))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
				if (unk_0xF1DE6FAA2EFAA34F(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_65(iParam0);
					return 1;
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 2))
			{
				fVar0 = unk_0x9A5EF8F702F14D4F(unk_0xFC1458A37D98B502());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 6))
				{
					if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iParam0) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (unk_0xFFCE4302A2DB825B(iParam0, unk_0xFC1458A37D98B502(), 17))
							{
								func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_66("	aggro Ped knows player is pointing gun\n");
								func_62("		lockOnTimer = ", *iParam2);
								func_66("\n");
								func_62("		time since not LockedOn = ", (unk_0x53C562FD2B9E3AB0() - iLocal_2));
								func_66("\n");
								bVar2 = true;
								if (unk_0x53C562FD2B9E3AB0() > (iLocal_2 + *iParam2))
								{
									func_66("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_65(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!unk_0xC80D31E4B587871C(iParam3, 0))
			{
				if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
				{
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_65(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = unk_0x53C562FD2B9E3AB0();
	}
	return 0;
}

void func_62(char* sParam0, int iParam1)
{
	func_64(sParam0);
	func_63(iParam1);
}

void func_63(int iParam0)
{
	if (iParam0 > 0)
	{
	}
}

void func_64(char* sParam0)
{
	if (unk_0x74C475EB8E73D398(uParam0, uParam0))
	{
	}
}

void func_65(var uParam0)
{
	unk_0x3D1231846F809DA4(uParam0);
}

void func_66(char* sParam0)
{
	func_64(sParam0);
}

int func_67(int iParam0, int iParam1)
{
	if (unk_0xEA8E0258C31BCDE7(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xEBE499597C718EB8(uParam0, unk_0xFC1458A37D98B502(), 1))
		{
			return 1;
		}
	}
	else if (unk_0xEBE499597C718EB8(iParam0, unk_0xFC1458A37D98B502(), 1))
	{
		if ((unk_0x77B0822EAE4CA5DD(iParam0) - unk_0xDE523AF6F7B269AB(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_68()
{
	if (((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f, 23.99063f, 144.25f, 0, 1, 0) || unk_0x9E06F0EE20F58CED(Local_48, 15f)) || bLocal_76) || func_4())
	{
		uLocal_57 = func_79(iLocal_52, 1, 0);
		if (unk_0xA6DECE14FC9A8C51(uLocal_57))
		{
			unk_0x9C27373CC69ECF87(uLocal_57, 0);
		}
		func_69(1);
		iLocal_99 = unk_0x53C562FD2B9E3AB0();
		unk_0xC1CEF375B44856F4(0);
	}
	else
	{
		func_51();
	}
}

int func_69(int iParam0)
{
	if (func_73())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_35(Global_104544))
		{
			func_70(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_35(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_71(func_72(iParam0), -1);
					Global_104555.f_24965.f_2++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(Global_104551, 1))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_71(func_72(iParam0), -1);
					Global_104555.f_24965.f_3++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Global_104551, 2))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_71(func_72(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_71(var uParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(uParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

char* func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_73()
{
	switch (func_74(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_74(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90456.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_78(0))
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		unk_0x8FA21D9CF7681249(unk_0x98EC0789D9F0703B(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xE6ABE74AEC92281D(8);
		}
		Global_35861 = iParam2;
		Global_35823 = *uParam0;
		Global_35824 = iParam4;
		Global_35822 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35822 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35822)
			{
				if (Global_35828[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35823 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_76(iParam2))
		{
			return 0;
		}
		if (Global_35822 == 8)
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		Global_35828[Global_35822 /*4*/] = Global_35825;
		Global_35828[Global_35822 /*4*/].f_1 = iParam1;
		Global_35828[Global_35822 /*4*/].f_2 = iParam2;
		Global_35828[Global_35822 /*4*/].f_3 = 0;
		Global_35822++;
		if (iParam4 != 0)
		{
			func_75(uParam0, iParam4);
		}
	}
	return 2;
}

void func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35822 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35822)
	{
		if (Global_35828[iVar0 /*4*/] == *uParam0)
		{
			Global_35828[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0, Global_35861);
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_76(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_79(var uParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_80(uParam0, bParam1, 145);
}

var func_80(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_81(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(uVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(uVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_82(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(uVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_82(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
		unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_82(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_82(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_83()
{
	if (!func_76(5))
	{
		return 1;
	}
	if (func_91())
	{
		return 1;
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_84(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (func_14(func_12()))
		{
			iVar36 = func_40();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar32 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar32 /*6*/], 3))
				{
					func_85(iVar32, &Var0);
					fVar35 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_85(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_86(uParam1, "Abigail1", func_88(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 1:
			func_86(uParam1, "Abigail2", func_88(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 2:
			func_86(uParam1, "Barry1", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 3:
			func_86(uParam1, "Barry2", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 4:
			func_86(uParam1, "Barry3", func_88(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 5:
			func_86(uParam1, "Barry3A", func_88(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 6:
			func_86(uParam1, "Barry3C", func_88(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 7:
			func_86(uParam1, "Barry4", func_88(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_87(iParam0), 0, 0);
			break;
		
		case 8:
			func_86(uParam1, "Dreyfuss1", func_88(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 9:
			func_86(uParam1, "Epsilon1", func_88(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 10:
			func_86(uParam1, "Epsilon2", func_88(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 11:
			func_86(uParam1, "Epsilon3", func_88(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 12:
			func_86(uParam1, "Epsilon4", func_88(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 13:
			func_86(uParam1, "Epsilon5", func_88(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 14:
			func_86(uParam1, "Epsilon6", func_88(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 15:
			func_86(uParam1, "Epsilon7", func_88(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 16:
			func_86(uParam1, "Epsilon8", func_88(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 17:
			func_86(uParam1, "Extreme1", func_88(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 18:
			func_86(uParam1, "Extreme2", func_88(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 19:
			func_86(uParam1, "Extreme3", func_88(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 20:
			func_86(uParam1, "Extreme4", func_88(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 21:
			func_86(uParam1, "Fanatic1", func_88(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 22:
			func_86(uParam1, "Fanatic2", func_88(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_87(iParam0), 1, 0);
			break;
		
		case 23:
			func_86(uParam1, "Fanatic3", func_88(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_87(iParam0), 0, 1);
			break;
		
		case 24:
			func_86(uParam1, "Hao1", func_88(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_87(iParam0), 0, 1);
			break;
		
		case 25:
			func_86(uParam1, "Hunting1", func_88(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 26:
			func_86(uParam1, "Hunting2", func_88(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 27:
			func_86(uParam1, "Josh1", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 28:
			func_86(uParam1, "Josh2", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 29:
			func_86(uParam1, "Josh3", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 30:
			func_86(uParam1, "Josh4", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 31:
			func_86(uParam1, "Maude1", func_88(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 32:
			func_86(uParam1, "Minute1", func_88(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 33:
			func_86(uParam1, "Minute2", func_88(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 34:
			func_86(uParam1, "Minute3", func_88(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 35:
			func_86(uParam1, "MrsPhilips1", func_88(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 36:
			func_86(uParam1, "MrsPhilips2", func_88(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 37:
			func_86(uParam1, "Nigel1", func_88(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 38:
			func_86(uParam1, "Nigel1A", func_88(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 39:
			func_86(uParam1, "Nigel1B", func_88(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 40:
			func_86(uParam1, "Nigel1C", func_88(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 41:
			func_86(uParam1, "Nigel1D", func_88(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
			break;
		
		case 42:
			func_86(uParam1, "Nigel2", func_88(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 43:
			func_86(uParam1, "Nigel3", func_88(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
			break;
		
		case 44:
			func_86(uParam1, "Omega1", func_88(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 45:
			func_86(uParam1, "Omega2", func_88(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 46:
			func_86(uParam1, "Paparazzo1", func_88(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 47:
			func_86(uParam1, "Paparazzo2", func_88(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 48:
			func_86(uParam1, "Paparazzo3", func_88(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 49:
			func_86(uParam1, "Paparazzo3A", func_88(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 50:
			func_86(uParam1, "Paparazzo3B", func_88(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 51:
			func_86(uParam1, "Paparazzo4", func_88(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 52:
			func_86(uParam1, "Rampage1", func_88(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 54:
			func_86(uParam1, "Rampage3", func_88(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 55:
			func_86(uParam1, "Rampage4", func_88(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 56:
			func_86(uParam1, "Rampage5", func_88(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
			break;
		
		case 53:
			func_86(uParam1, "Rampage2", func_88(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
			break;
		
		case 57:
			func_86(uParam1, "TheLastOne", func_88(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 58:
			func_86(uParam1, "Tonya1", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 59:
			func_86(uParam1, "Tonya2", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 60:
			func_86(uParam1, "Tonya3", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 61:
			func_86(uParam1, "Tonya4", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		case 62:
			func_86(uParam1, "Tonya5", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_86(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_88(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_89(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_89(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_90()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x19E08ED08C79C477() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	if (func_94() && !func_90())
	{
		return 1;
	}
	if (func_93() && func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_104273 > 0;
}

int func_93()
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_95()
{
	if ((Global_104544 == func_44() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_96()
{
	if (unk_0xA6DECE14FC9A8C51(uLocal_57))
	{
		unk_0x9C27373CC69ECF87(uLocal_57, 1);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_52))
	{
		unk_0x2217C45231E6A537(iLocal_52, 156, 1);
		if (unk_0xD56F740235B1E8F0(iLocal_67))
		{
			if (unk_0x463C4747B41E35A3(iLocal_67) > 0.1f)
			{
				if (!iLocal_82)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
					{
						unk_0x84B03FD3CB6A57FD(iLocal_52, unk_0xD0E00576168D19BB(iLocal_53, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_82 = 1;
					iLocal_80 = 1;
					func_97();
				}
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
		{
			unk_0x5718F894FDA63A9E(iLocal_53, 1);
			unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
		}
		if (unk_0xD56F740235B1E8F0(iLocal_67))
		{
			if (unk_0x463C4747B41E35A3(iLocal_67) > 0.6f)
			{
				func_97();
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
		{
			unk_0x5718F894FDA63A9E(iLocal_53, 1);
			unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
		}
		if (unk_0xD56F740235B1E8F0(iLocal_67))
		{
			if (unk_0x463C4747B41E35A3(iLocal_67) == 1f)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
				{
					unk_0x5718F894FDA63A9E(iLocal_53, 1);
					unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
				}
			}
		}
		else
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_53))
			{
				unk_0x5718F894FDA63A9E(iLocal_53, 1);
				unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
			}
			func_97();
		}
	}
}

void func_97()
{
	if (!iLocal_83)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_52))
		{
			unk_0xB8E08BD5B184DF4E(iLocal_52);
			unk_0xF96119FCCD4D1889(5, uLocal_60, uLocal_59);
			unk_0xF96119FCCD4D1889(5, uLocal_59, uLocal_60);
			unk_0xF96119FCCD4D1889(0, uLocal_61, uLocal_59);
			unk_0xF96119FCCD4D1889(2, uLocal_61, uLocal_60);
			unk_0xF96119FCCD4D1889(2, uLocal_60, uLocal_61);
			if (unk_0x21B6FFFD04C9FF3A(iLocal_52, unk_0xFC1458A37D98B502(), 50f, 50f, 50f, 0, 1, 0))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_52, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0x3811A0FC01E02FC1(iLocal_52, 1);
			}
			else
			{
				unk_0xD68E88A8E0BE8697(iLocal_52, unk_0xFC1458A37D98B502(), 200f, -1, 0, 0);
			}
			unk_0xE9B3D12A64CC7C1A(iLocal_52, 1);
			func_5(&Local_101, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_83 = 1;
		}
	}
}

void func_98()
{
	if (bLocal_98)
	{
		unk_0x771A86309E0CA47B(iLocal_54, 0);
		unk_0xFC5999E8B820470E(iLocal_54, Local_48, 50f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
		unk_0x486F346ADFE56674(&iLocal_54);
		func_48();
	}
}

void func_99()
{
	if (Local_101[2 /*10*/].f_7)
	{
		func_50(&Local_101, 2);
	}
	func_102();
	unk_0xC036F7DE6A42457A(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), &Local_48, 1, 1077936128, 0);
	unk_0x126122194DCF42B6(1, 0.5f);
	unk_0xC8EB572313107216(1, 1f);
	if (Local_101[1 /*10*/].f_7)
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_57))
		{
			unk_0xE30CF11C0EE14316(&uLocal_57);
		}
		func_50(&Local_101, 1);
	}
	if (iLocal_80)
	{
		if (!unk_0x613CDAB05D8C57C8(iLocal_54, joaat("weapon_pistol"), 0) && unk_0x3AB6A1A9084FB0A4(iLocal_52))
		{
			if (!bLocal_100)
			{
				iLocal_47 = 2;
			}
			else if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0))
			{
				iLocal_47 = 2;
			}
		}
		else
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_54))
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_52))
				{
					unk_0xD68E88A8E0BE8697(iLocal_54, iLocal_52, 100f, -1, 0, 0);
				}
				else
				{
					unk_0xD68E88A8E0BE8697(iLocal_54, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
				}
				unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
				if (!bLocal_100)
				{
					if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0))
					{
					}
					else
					{
						func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else
				{
					func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
				}
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x94BD6F0436473406(1f);
			unk_0xC1CEF375B44856F4(1);
			iLocal_47 = 2;
		}
	}
	else
	{
		func_157();
	}
}

void func_100(int iParam0, char* sParam1, int iParam2)
{
	unk_0x74D45BB07BD51F8B(iParam0, sParam1, func_2(iParam2), 1);
}

bool func_101(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_102()
{
	if (func_4())
	{
		bLocal_98 = true;
	}
	if (bLocal_98 == 0)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_54) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (iLocal_80)
			{
				unk_0x6931076730A4AC5D(&uLocal_79);
				unk_0x4C7AF3B2BE8C3193(0, unk_0xFC1458A37D98B502(), 20000, 5f, 1073741824, 1073741824, 0);
				unk_0x60C06BFD037BB7CF(0, unk_0xFC1458A37D98B502(), -1, 2048, 2);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0xD68E88A8E0BE8697(0, unk_0xFC1458A37D98B502(), 150f, -1, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_54, uLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_79);
				unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
			}
			else
			{
				unk_0x6931076730A4AC5D(&uLocal_79);
				unk_0x6EF694689373EE8D(0, Local_48, 1f, 20000, 1193033728, 1056964608);
				unk_0xBA54D3D84EF38E3D(0, Local_48, -1, 2048, 2);
				unk_0x12C9D41D52A560D6(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_79);
				unk_0xAB30B1CF01A198C1(iLocal_54, uLocal_79);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_79);
				unk_0xE9B3D12A64CC7C1A(iLocal_54, 1);
			}
		}
	}
}

void func_103()
{
	if (unk_0xEBE499597C718EB8(iLocal_53, unk_0xFC1458A37D98B502(), 1))
	{
		if (!unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 2))
		{
			unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 2, 0);
			unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		}
		unk_0x5718F894FDA63A9E(iLocal_53, 1);
		unk_0xE01CE1EBCD7EE551(iLocal_53, 0, 0);
		bLocal_76 = true;
		iLocal_80 = 1;
		func_97();
	}
	else if (!unk_0x33B1D0D0C92D4F18(iLocal_53))
	{
		unk_0x0F5CA7E22DF79A5F(iLocal_53, 4, 0, 0);
	}
}

void func_104()
{
	if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_48, 50f, 50f, 25f, 0, 1, 0))
	{
		iLocal_266 = 0;
	}
	else
	{
		iLocal_266 = 1;
	}
}

int func_105()
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_90())
		{
			return 0;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (func_84(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	Local_48 = { -96.4f, 6398.201f, 30.4542f };
	fLocal_51 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	unk_0x6FF834D85E2DD4C6(iVar0);
	unk_0x6FF834D85E2DD4C6(iVar2);
	unk_0x6FF834D85E2DD4C6(iVar1);
	unk_0x6450931B826B49D9(sLocal_267);
	if (((unk_0x9A0B2ED5055D3F0B(iVar0) && unk_0x9A0B2ED5055D3F0B(iVar2)) && unk_0x9A0B2ED5055D3F0B(iVar1)) && unk_0x3A801AA34DD821BE(sLocal_267))
	{
		unk_0x247EAA2E93D4A021(Local_48, 5f, 1, 1, 0, 0);
		iLocal_53 = unk_0xAC992EFAD62C33BF(5, iVar2, Local_48, fLocal_51, 1, 1);
		unk_0xD1980BC8CFFBF0B9(iLocal_53, 1);
		unk_0x350CEE66BDF90273(iLocal_53, sVar3);
		unk_0xAE01EF4BC84AFE7C(iLocal_53, 20, 1);
		iLocal_52 = unk_0xAC992EFAD62C33BF(22, iVar0, Local_48, fLocal_51, 1, 1);
		unk_0xE01CE1EBCD7EE551(iLocal_52, 125, 0);
		unk_0xC7478C0CABC29C5E(iLocal_52, 125);
		unk_0xE17958D3FD0F9EE9(iLocal_52, 128, 1);
		unk_0xD1980BC8CFFBF0B9(iLocal_52, 1);
		unk_0xAE01EF4BC84AFE7C(iLocal_52, 42, 1);
		unk_0x41613433DA018B46(iLocal_52, 1.5f);
		unk_0x8BB5ECF21DDE505B(iLocal_52, 1);
		unk_0x253DB96AF5D6551B(iLocal_52, 40f);
		unk_0xAE01EF4BC84AFE7C(iLocal_52, 20, 1);
		unk_0x2C18191093123E39(iLocal_52, fLocal_93);
		unk_0x7EDC2382770DE785(iLocal_52, fLocal_94);
		unk_0x471F966B9F527DA3(iLocal_52, fLocal_95);
		unk_0x0223236997E1A137(iLocal_52, fLocal_96);
		iLocal_54 = unk_0xAC992EFAD62C33BF(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_51, 1, 1);
		unk_0x2BC2E793FD79E44E(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		uLocal_65 = unk_0xCB389937EDB1519A(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f), Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		unk_0x5C5D33A1B2711D21(iLocal_54, 0);
		unk_0x8BB5ECF21DDE505B(iLocal_54, 1);
		Local_48.f_2 = (Local_48.f_2 + 1f);
		Local_70 = { Local_48 };
		Local_73 = { 0f, 0f, fLocal_51 };
		iLocal_67 = unk_0x8383F9C605E523B7(Local_70, Local_73, 2);
		unk_0xD0E12C501EE26329(iLocal_67, 1);
		unk_0x8E628F774C748D93(iLocal_52, iLocal_67, sLocal_267, "villian_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		unk_0x8E628F774C748D93(iLocal_53, iLocal_67, sLocal_267, "girl_struggle_loop", 1000f, -4f, 5, 0, 1148846080, 0);
		uLocal_69 = unk_0x8383F9C605E523B7(Local_70, Local_73, 2);
		unk_0xD0E12C501EE26329(uLocal_69, 1);
		unk_0x8E628F774C748D93(iLocal_54, iLocal_69, sLocal_267, "bystander_taking_cover", 1000f, -1.5f, 5, 0, 1148846080, 0);
		unk_0xAE01EF4BC84AFE7C(iLocal_54, 185, 1);
		unk_0x9E058151726E58DE(iLocal_52, joaat("weapon_pistol"), -1, 1, 1);
		unk_0x66C1F257A00B2D4E(iLocal_52, 1);
		unk_0x4DE114E3C7F8B7C2("re_rescuehostage relManager", &uLocal_61);
		unk_0x4DE114E3C7F8B7C2("re_rescuehostage relBadGuy", &uLocal_60);
		uLocal_59 = unk_0x1479B36DFB6174A5(unk_0xFC1458A37D98B502());
		unk_0xF96119FCCD4D1889(5, uLocal_60, uLocal_59);
		unk_0xF96119FCCD4D1889(5, uLocal_59, uLocal_60);
		unk_0xCE93FCB8A8D8DF0B(iLocal_54, uLocal_61);
		unk_0xCE93FCB8A8D8DF0B(iLocal_52, uLocal_60);
		unk_0x771A86309E0CA47B(iLocal_53, 1);
		unk_0x771A86309E0CA47B(iLocal_54, 1);
		unk_0x771A86309E0CA47B(iLocal_52, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_54, 11, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_54, 17, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_54, 13, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_54, 5, 0);
		unk_0x08B32ADD0F9764A2(iLocal_54, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_53, 11, 1);
		unk_0x08B32ADD0F9764A2(iLocal_53, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_53, 13, 0);
		unk_0xAE6EBBBBD8B9FB30(iLocal_53, 5, 0);
		func_108(&Local_101, 0, unk_0xFC1458A37D98B502(), sLocal_90, 0, 1);
		func_108(&Local_101, 1, iLocal_52, "RHCriminal", 0, 1);
		func_108(&Local_101, 2, iLocal_53, "RHHostage", 0, 1);
		func_108(&Local_101, 3, iLocal_54, "RHBystander", 0, 1);
		unk_0xC1CEF375B44856F4(0);
		unk_0x94BD6F0436473406(0f);
		func_107(1);
		unk_0xBBF9037650162761(-89f, 6392f, 32f, 3f, 2);
		unk_0xC1B1E9A034A63A62(8000);
		return 1;
	}
	return 0;
}

void func_107(bool bParam0)
{
	if (bParam0)
	{
		Global_25464 = 1;
	}
	else
	{
		Global_25464 = 0;
	}
}

void func_108(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_109()
{
}

void func_110()
{
}

void func_111()
{
	switch (func_12())
	{
		case 0:
			sLocal_90 = "MICHAEL";
			sLocal_91 = "RERHO_MDOWN";
			break;
		
		case 1:
			sLocal_90 = "FRANKLIN";
			sLocal_91 = "RERHO_FDOWN";
			break;
		
		case 2:
			sLocal_90 = "TREVOR";
			sLocal_91 = "RERHO_TDOWN";
			break;
	}
}

void func_112(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_114(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_113();
}

void func_113()
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x2E4932E63763FE26(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), 1);
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, 0);
	}
}

void func_114(int iParam0)
{
	Global_104544 = iParam0;
}

int func_115(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142819)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_44();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			Var1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_90())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_25(0))
		{
			return 0;
		}
		if (func_91())
		{
			return 0;
		}
		if (func_155())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_84(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_154(iParam3))
		{
			return 0;
		}
		if (func_14(func_12()))
		{
			if (func_153(func_12()) == 4 || func_153(func_12()) == 5)
			{
				return 0;
			}
		}
		if (func_14(func_12()))
		{
			if (!func_152(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_151(Global_104555.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x53C562FD2B9E3AB0() - Global_104546) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_150())
		{
			return 0;
		}
		if (unk_0x5A0744D504CC705F())
		{
			return 0;
		}
		if (unk_0x17E356AF4F930A2C())
		{
			return 0;
		}
		if (!func_141(4))
		{
			return 0;
		}
		if (!func_76(5))
		{
			return 0;
		}
		if (func_140(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x2C2E1E35924B9FF2(unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())))
		{
			if ((unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(377.153f, -717.567f, 10.0536f) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(320.9934f, 265.2515f, 82.1221f)) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_140(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_154(30) && !func_140(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_14(func_12()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104555.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104555.f_2353.f_539.f_2276[iVar4];
				if (func_139(iVar8))
				{
					if (func_117(iVar4))
					{
						if (!func_116(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var5) < (210f * 210f))
							{
								if (func_12() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_116(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_118(iVar0);
}

int func_118(int iParam0)
{
	return func_119(iParam0, 1);
}

int func_119(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_139(iParam0))
	{
		return 0;
	}
	func_120(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_121(func_132(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_121(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_131(iParam0, iParam1))
	{
		iVar0 = func_130(iParam1);
		iVar1 = func_128(iParam0);
		iVar2 = (func_128(iParam0) - func_128(iParam1));
		iVar3 = (func_130(iParam0) - func_130(iParam1));
		iVar4 = (func_127(iParam0) - func_127(iParam1));
		iVar5 = (func_126(iParam0) - func_126(iParam1));
		iVar6 = (func_125(iParam0) - func_125(iParam1));
		iVar7 = (func_124(iParam0) - func_124(iParam1));
	}
	else
	{
		iVar0 = func_130(iParam0);
		iVar1 = func_128(iParam1);
		iVar2 = (func_128(iParam1) - func_128(iParam0));
		iVar3 = (func_130(iParam1) - func_130(iParam0));
		iVar4 = (func_127(iParam1) - func_127(iParam0));
		iVar5 = (func_126(iParam1) - func_126(iParam0));
		iVar6 = (func_125(iParam1) - func_125(iParam0));
		iVar7 = (func_124(iParam1) - func_124(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_123(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_122(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_122(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_123(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_124(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_125(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_126(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_127(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_128(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_129(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(int iParam0)
{
	return iParam0 & 15;
}

int func_131(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_139(iParam1) || !func_139(iParam0))
	{
		return 1;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	iVar1 = func_127(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_132()
{
	var uVar0;
	
	func_138(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_137(&uVar0, unk_0x95327550F0F2BE7C());
	func_136(&uVar0, unk_0x674C9438180770FE());
	func_135(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_134(&uVar0, unk_0xEAF455949B108589());
	func_133(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_123(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_138(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_128(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_130(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_127(iParam0);
	if (iVar5 < 1 || iVar5 > func_123(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0, int iParam1)
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_12();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_149()) || Global_103602) || Global_25235) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_145()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_149()) || Global_25235) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_149()) || Global_103602) || Global_25235) || func_148()) || func_19(8, -1)) || func_145()) || func_147()) || func_146()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_149()) || Global_103602) || Global_25235) || func_148()) || func_19(8, -1)) || func_147()) || func_146()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_149() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_19(8, -1)) || func_144()) || func_143()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_147()) || func_146()) || func_143()) || func_142())
						{
							return 0;
						}
						if ((unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() != 3) && unk_0x70522E2561AD22FE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
						{
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_149()) || Global_25235) || func_148()) || func_19(8, -1)) || func_146()) || func_145()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_149()) || func_146()) || Global_103602) || Global_25235) || func_148()) || Global_36993) || func_19(8, -1)) || func_145()) || func_143()) || func_144()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_149()) || Global_103602) || Global_25235) || func_148()) || func_19(8, -1)) || func_145()) || func_143()) || func_147()) || func_146()) || func_144())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_142()
{
	return Global_92872.f_1;
}

int func_143()
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_144()
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

bool func_146()
{
	return Global_92885.f_316 > 0;
}

bool func_147()
{
	return Global_92885.f_315 > 0;
}

var func_148()
{
	return Global_1312854;
}

int func_149()
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_150()
{
	func_11();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_151(int iParam0)
{
	return func_131(func_132(), iParam0);
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_12();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_153(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_154(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_156())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_155()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			uVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(uVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(uVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_156()
{
	var uVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x872F1C1F8587CCC7(&uVar0, 2);
				unk_0x872F1C1F8587CCC7(&uVar0, 4);
				unk_0x872F1C1F8587CCC7(&uVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_157()
{
	if (func_95())
	{
		unk_0x94BD6F0436473406(1f);
		unk_0xC1CEF375B44856F4(1);
	}
	if (iLocal_47 != 0)
	{
		unk_0x9EA1BA1DD45771B3(uLocal_60);
		unk_0x9EA1BA1DD45771B3(uLocal_61);
		unk_0x3CA5D87E6B883624(20000);
		unk_0xCA107A9AAF17E75F(uLocal_65, 0);
		unk_0x15AAE2A89BBE596D(iLocal_64);
		func_107(0);
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_52) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xD68E88A8E0BE8697(iLocal_52, unk_0xFC1458A37D98B502(), 100f, -1, 0, 0);
		unk_0xE9B3D12A64CC7C1A(iLocal_52, 1);
		unk_0x4EDE34FBADD967A6(0);
	}
	func_158(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_158(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_44();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_95())
	{
		func_162(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_161(30000);
		StringCopy(&cVar0, func_160(Global_104544, 1), 64);
		if (func_43(Global_104544) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104543, 64);
		}
		unk_0xACD55E1AD7FB6CB0(&cVar0, Global_104541, (unk_0x53C562FD2B9E3AB0() - Global_104542), 0);
	}
	else if (unk_0xC80D31E4B587871C(Global_104551, 0) && Global_104555.f_24965.f_2 < 3)
	{
		unk_0x0EE72DB1CD8A3B86(&Global_104551, 0);
	}
	func_159(&Global_25292);
	Global_104545 = 0;
	func_114(-1);
}

void func_159(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35823)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35822 = 0;
	Global_35824 = 0;
	Global_35861 = 15;
	Global_55900 = 0;
	Global_55901 = 0;
}

char* func_160(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_161(int iParam0)
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_162(int iParam0)
{
	func_163(iParam0, 0, func_168(iParam0));
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_132();
	func_166(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_165(iParam0, &uVar0);
	Var1 = { func_164(&uVar0) };
}

struct<16> func_164(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_126(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_125(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_124(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_127(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_130(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_128(*uParam0), 64);
	return Var0;
}

void func_165(int iParam0, var uParam1)
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_128(*uParam0);
	iVar1 = func_130(*uParam0);
	iVar2 = func_127(*uParam0);
	iVar3 = func_126(*uParam0);
	iVar4 = func_125(*uParam0);
	iVar5 = func_124(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_123(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_123(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_167(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_167(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(uParam0, iParam1);
	func_137(uParam0, iParam2);
	func_136(uParam0, iParam3);
	func_134(uParam0, iParam5);
	func_135(uParam0, iParam4);
	func_133(uParam0, iParam6);
}

int func_168(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

