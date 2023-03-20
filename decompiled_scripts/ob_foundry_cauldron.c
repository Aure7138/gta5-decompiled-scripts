#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (unk_0x2EC83C7ACA23E8A4(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD3FACCDA4D66AEAD(uScriptParam_0))
		{
			if (unk_0x9AB41624168E4453(uScriptParam_0) && unk_0xA96867DD0A63C62C(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
						{
							uVar0 = unk_0x16A396814EC162D8(unk_0xA0081090911D13E5());
							if (unk_0x72C176FA688CE74D(uVar0))
							{
								if (unk_0x319560E9F4C27299(uVar0))
								{
									if (unk_0xA1D9579C5525304B())
									{
										unk_0x9DFBA65465F4DEE5();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xA83726F584E77AA5())
						{
							if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
							{
								if (!unk_0xD3FACCDA4D66AEAD(uLocal_4))
								{
									uLocal_4 = unk_0xD016B4FD90D52ED7(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x8290003927BC6478(uLocal_3))
								{
									if (unk_0xD3FACCDA4D66AEAD(uLocal_4))
									{
										uVar0 = unk_0x16A396814EC162D8(unk_0xA0081090911D13E5());
										if (unk_0x72C176FA688CE74D(uVar0))
										{
											if (unk_0x319560E9F4C27299(uVar0))
											{
												if (unk_0xA1D9579C5525304B())
												{
													uLocal_3 = unk_0xB2B9DC57FF1CFE82("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (unk_0x8290003927BC6478(uLocal_3))
	{
		unk_0x5C256D4AC568031F(uLocal_3, 0);
	}
	if (unk_0xD3FACCDA4D66AEAD(uLocal_4))
	{
		unk_0xDABCA6C17F8B4208(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x78C587487CD40B92();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x28C1B9853548BD8E(uParam0, uParam0))
	{
	}
}

