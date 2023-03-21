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
	
	if (unk_0xE8A79675302ED812(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x724D816EA203A79E(uScriptParam_0))
		{
			if (unk_0x08B699D523A3F9CB(uScriptParam_0) && unk_0xB731B8C5BCE89836(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
						{
							uVar0 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
							if (unk_0xBF697FA7422C0621(uVar0))
							{
								if (unk_0x18487DB48DC3A046(uVar0))
								{
									if (unk_0x50298ED00321BDFA())
									{
										unk_0xA8396BF0E2C53C39();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0x95654D7A61CD43DE())
						{
							if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
							{
								if (!unk_0x724D816EA203A79E(uLocal_4))
								{
									uLocal_4 = unk_0xCE5CC3450F9879E0(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0x2F1B39E315395385(uLocal_3))
								{
									if (unk_0x724D816EA203A79E(uLocal_4))
									{
										uVar0 = unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA());
										if (unk_0xBF697FA7422C0621(uVar0))
										{
											if (unk_0x18487DB48DC3A046(uVar0))
											{
												if (unk_0x50298ED00321BDFA())
												{
													uLocal_3 = unk_0xD0F8470A5BFEECF7("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0x2F1B39E315395385(uLocal_3))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3, 0);
	}
	if (unk_0x724D816EA203A79E(uLocal_4))
	{
		unk_0xF8ED8988FAF2823F(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x95E4B6F3ED223F5A();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x3362CDE8460ED38B(uParam0, uParam0))
	{
	}
}

