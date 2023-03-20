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
	
	if (unk_0x89522B8E487D4EF9(2))
	{
		func_1();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0xD51CFE69539DB6D8(uScriptParam_0))
		{
			if (unk_0x7D7BF8DC8C822AC1(uScriptParam_0) && unk_0xFF6891E21E7FC193(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
						{
							uVar0 = unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6());
							if (unk_0x4443D8D533ACB547(uVar0))
							{
								if (unk_0x97ED7BE642158AAF(uVar0))
								{
									if (unk_0x9D65F834482497E4())
									{
										unk_0xDF14478656A9018C();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (unk_0xD6306290BE90B505())
						{
							if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
							{
								if (!unk_0xD51CFE69539DB6D8(uLocal_4))
								{
									uLocal_4 = unk_0xEE756BAA02761E84(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!unk_0xA288661B75BFC01B(uLocal_3))
								{
									if (unk_0xD51CFE69539DB6D8(uLocal_4))
									{
										uVar0 = unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6());
										if (unk_0x4443D8D533ACB547(uVar0))
										{
											if (unk_0x97ED7BE642158AAF(uVar0))
											{
												if (unk_0x9D65F834482497E4())
												{
													uLocal_3 = unk_0x8290B5289783C18C("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
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
	if (unk_0xA288661B75BFC01B(uLocal_3))
	{
		unk_0x52F57B57CB8B4432(uLocal_3, 0);
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_4))
	{
		unk_0x9083C015A6C271BD(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	unk_0x52F20802944F8DCE();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (unk_0x04E7E853E31F41A3(uParam0, uParam0))
	{
	}
}

