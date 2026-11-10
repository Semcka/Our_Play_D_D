#include "Play_heading.h"

bool fight ( int enemy_HP ){
    int player_HP = MAX_PLAYER_HP;
    int ability = 0; 
    while ( enemy_HP > 0 && player_HP > 0 ){
        cout<<"Ваш ход\n1 - атака\n2 - исцеление\nВыберите: ";
        cin>>ability;
        while ( ability != 1 && ability != 2 ){
            cout<<"Неверное значение\nВведите: ";
            cin>>ability;
        }
        if ( ability == 1 ){
            cout<<"Вы атаковали\n";
            enemy_HP = enemy_HP - plaeyr_damage - scater_player_damage;
            if ( enemy_HP <= 0 ){
                cout<<"Вы выиграли!";
                return true;
            }
        }
        if ( ability == 2 ){
            player_HP = min(player_HP + HEAL, MAX_PLAYER_HP);
            cout<<"Вы исцелились\n\nУ вас осталось: "<<player_HP<<" здоровья \n";
        }
        cout<<"У противника осталось "<<enemy_HP<<" здоровья\n";
            player_HP = player_HP - enemy_damage - scater_enemy_damage;
            if ( player_HP <= 0 ){
                cout<<"Вы проиграли";
                return false;
            }
            cout<<"\n\nУ вас осталось: "<<player_HP<<" здоровья\n";
    }
}

