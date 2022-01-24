pipeline {
    agent any 
    stages {
        stage('Build program') {
            steps {
                script {
                    sh """
                        ssh user1@192.168.1.1 "rm -rf ~/project"
                        ssh user1@192.168.1.1 "mkdir -p ~/project"
                        scp -r * user1@192.168.1.1:~/project/
                        ssh user1@192.168.1.1 "cd ~/project/ && gcc src/program_team_1.c -o program_team_1"
                    """
                }
            }
        }
        stage("Run program") {
            steps {
                script {
                    sh """
                        ssh user1@192.168.1.1 "~/project/program_team_1 | tee ~/project/program_team_1.log"
                    """
                }
            }
        }
    }
}